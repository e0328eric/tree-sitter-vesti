#include <tree_sitter/parser.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

enum TokenType {
  LUACODE_START,
  LUACODE_PAYLOAD,
  LUACODE_END,
  LINE_COMMENT,
  LONG_COMMENT,
};

typedef struct {
  bool in_luacode;
} ScannerState;

static inline void advance(TSLexer *lx) { lx->advance(lx, false); }
static inline void skip(TSLexer *lx) { lx->advance(lx, true); }

static void skip_whitespace(TSLexer *lx) {
  for (;;) {
    int32_t c = lx->lookahead;
    if (c == ' ' || c == '\t' || c == '\r' || c == '\n') {
      skip(lx);
    } else {
      break;
    }
  }
}

static bool scan_luacode_start(TSLexer *lx) {
  if (lx->lookahead != '#') return false;
  advance(lx);
  if (lx->lookahead != ':') return false;
  advance(lx);
  if (lx->lookahead != ':') return false;
  advance(lx);
  return true; // "#::"
}

static bool scan_luacode_end(TSLexer *lx) {
  if (lx->lookahead != ':') return false;
  advance(lx);
  if (lx->lookahead != ':') return false;
  advance(lx);
  if (lx->lookahead != '#') return false;
  advance(lx);
  return true; // "::#"
}

// Greedy payload: consume everything up to (but not including) the next "::#".
//
// Key trick: we are allowed to "over-consume" and set mark_end before the end marker.
// Tree-sitter will rewind the lexer's position back to mark_end automatically.
static bool scan_luacode_payload(TSLexer *lx) {
  bool consumed = false;

  // mark_end is used as "the best token end so far"
  // We only want to end right before the "::#" marker.
  for (;;) {
    if (lx->lookahead == 0) {
      // EOF: token ends at last mark_end
      return consumed;
    }

    if (lx->lookahead == ':') {
      // Potential start of "::#".
      // First, record an end boundary BEFORE consuming ':'.
      // If it turns out to be "::#", we keep this boundary and return.
      lx->mark_end(lx);

      // Consume ':' and try to see if this is actually "::#".
      advance(lx);
      if (lx->lookahead == ':') {
        advance(lx);
        if (lx->lookahead == '#') {
          // We consumed "::#" but token should end BEFORE it.
          // mark_end was set before the first ':' so that's correct.
          return consumed; // If consumed==false, END will have been matched instead (scan() tries END first).
        }
      }

      // Not an end marker. The ':' (and maybe next char) are payload.
      // Since we've consumed payload chars, extend token end here.
      lx->mark_end(lx);
      consumed = true;
      continue;
    }

    // Normal payload char
    advance(lx);
    lx->mark_end(lx);
    consumed = true;
  }
}

// Lua-ish comments:
// - line comment: "-- .... \n"
// - long comment: "--[=*[ .... ]=*]"
static bool scan_lua_comment(TSLexer *lx, const bool *valid_symbols, enum TokenType *out_sym) {
  if (lx->lookahead != '-') return false;
  advance(lx);
  if (lx->lookahead != '-') return false;
  advance(lx);

  if (lx->lookahead == '!') return false; // --! is already reserved

  // Attempt long comment if enabled and next char is '['
  if (valid_symbols[LONG_COMMENT] && lx->lookahead == '[') {
    advance(lx);

    // Count '=' signs: [=*[   (Lua long brackets)
    unsigned eq = 0;
    while (lx->lookahead == '=') {
      advance(lx);
      eq++;
    }

    if (lx->lookahead == '[') {
      advance(lx);

      // Scan until closing ]=*]
      for (;;) {
        if (lx->lookahead == 0) break; // EOF => unterminated long comment

        if (lx->lookahead == ']') {
          advance(lx);

          // must match same number of '='
          unsigned seen = 0;
          while (seen < eq && lx->lookahead == '=') {
            advance(lx);
            seen++;
          }

          if (seen == eq && lx->lookahead == ']') {
            advance(lx);
            *out_sym = LONG_COMMENT;
            return true;
          }

          // otherwise continue scanning
          continue;
        }

        advance(lx);
      }

      *out_sym = LONG_COMMENT;
      return true;
    }

    // Not actually a long bracket; fall through to line comment.
  }

  // Line comment
  if (valid_symbols[LINE_COMMENT]) {
    while (lx->lookahead != 0 && lx->lookahead != '\n') {
      advance(lx);
    }
    *out_sym = LINE_COMMENT;
    return true;
  }

  return false;
}

void *tree_sitter_vesti_external_scanner_create(void) {
  ScannerState *st = (ScannerState *)calloc(1, sizeof(ScannerState));
  st->in_luacode = false;
  return st;
}

void tree_sitter_vesti_external_scanner_destroy(void *payload) {
  free(payload);
}

unsigned tree_sitter_vesti_external_scanner_serialize(void *payload, char *buffer) {
  ScannerState *st = (ScannerState *)payload;
  buffer[0] = st->in_luacode ? 1 : 0;
  return 1;
}

void tree_sitter_vesti_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  ScannerState *st = (ScannerState *)payload;
  st->in_luacode = (length > 0 && buffer[0] == 1);
}

bool tree_sitter_vesti_external_scanner_scan(void *payload, TSLexer *lx, const bool *valid_symbols) {
  ScannerState *st = (ScannerState *)payload;

  // Usually safe: skip whitespace for externals
  skip_whitespace(lx);

  // Comments (often in extras)
  if (lx->lookahead == '-' && (valid_symbols[LINE_COMMENT] || valid_symbols[LONG_COMMENT])) {
    enum TokenType sym;
    if (scan_lua_comment(lx, valid_symbols, &sym)) {
      lx->result_symbol = sym;
      return true;
    }
  }

  if (st->in_luacode) {
    // Critical: END must be attempted before PAYLOAD.
    if (valid_symbols[LUACODE_END] && scan_luacode_end(lx)) {
      lx->result_symbol = LUACODE_END;
      st->in_luacode = false;
      return true;
    }

    if (valid_symbols[LUACODE_PAYLOAD]) {
      // Greedy payload; returns false if it can't consume anything.
      if (scan_luacode_payload(lx)) {
        lx->result_symbol = LUACODE_PAYLOAD;
        return true;
      }
    }

    return false;
  } else {
    if (valid_symbols[LUACODE_START] && scan_luacode_start(lx)) {
      lx->result_symbol = LUACODE_START;
      st->in_luacode = true;
      return true;
    }
    return false;
  }
}

