#include <tree_sitter/parser.h>
#include <wctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>

enum TokenType {
  LUACODE_START,
  LUACODE_PAYLOAD,
  LUACODE_END,

  LINE_COMMENT,
  LONG_COMMENT,
};

static inline void advance(TSLexer *lx) { lx->advance(lx, false); }
static inline void skip(TSLexer *lx)    { lx->advance(lx, true);  }

static inline bool consume_char(int32_t c, TSLexer *lx) {
  if (lx->lookahead != c) return false;
  advance(lx);
  return true;
}

static inline uint8_t consume_and_count_char(int32_t c, TSLexer *lx) {
  uint8_t count = 0;
  while (lx->lookahead == c) {
    ++count;
    advance(lx);
  }
  return count;
}

static inline void skip_whitespaces(TSLexer *lx) {
  while (iswspace(lx->lookahead)) {
    skip(lx);
  }
}

/* ===== external scanner boilerplate ===== */

void *tree_sitter_vesti_external_scanner_create(void) {
  return NULL; // no state needed
}

void tree_sitter_vesti_external_scanner_destroy(void *payload) {
  (void)payload;
}

unsigned tree_sitter_vesti_external_scanner_serialize(void *payload, char *buffer) {
  (void)payload;
  (void)buffer;
  return 0;
}

void tree_sitter_vesti_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  (void)payload;
  (void)buffer;
  (void)length;
}

/* ===== Vesti LuaCode block #:: ... ::# ===== */

static bool scan_luacode_start(TSLexer *lx) {
  if (!consume_char('#', lx)) return false;
  if (!consume_char(':', lx)) return false;
  if (!consume_char(':', lx)) return false;
  lx->mark_end(lx);
  return true;
}

static bool scan_luacode_end(TSLexer *lx) {
  if (!consume_char(':', lx)) return false;
  if (!consume_char(':', lx)) return false;
  if (!consume_char('#', lx)) return false;
  lx->mark_end(lx);
  return true;
}

static bool scan_luacode_payload(TSLexer *lx) {
  // Consume until right before "::#"
  bool has = false;
  while (!lx->eof(lx)) {
    lx->mark_end(lx);

    if (lx->lookahead == ':') {
      advance(lx);
      if (lx->lookahead == ':') {
        advance(lx);
        if (lx->lookahead == '#') {
          return has; // stop before the "::#"
        }
      }
      has = true;
      continue;
    }

    advance(lx);
    has = true;
  }
  return has;
}

/* ===== Lua long comment scanning as ONE token =====
   long comment opener: --[=*[ 
   long comment closer: ]=*]
*/

static bool scan_long_comment_after_dashes(TSLexer *lx) {
  // We are positioned at the first '[' after having consumed "--"
  if (!consume_char('[', lx)) return false;

  uint8_t level = consume_and_count_char('=', lx);

  if (!consume_char('[', lx)) return false;

  // Now consume until we see a matching ]=*]
  while (!lx->eof(lx)) {
    if (lx->lookahead == ']') {
      // Potential closer
      advance(lx); // consume ']'

      uint8_t seen = 0;
      while (seen < level && lx->lookahead == '=') {
        seen++;
        advance(lx);
      }

      if (seen == level && lx->lookahead == ']') {
        advance(lx);         // consume final ']'
        lx->mark_end(lx);    // token ends here (does NOT include trailing text)
        return true;
      }

      // Not actually a closer; keep going (we already consumed some chars)
      continue;
    }

    advance(lx);
  }

  // Unterminated long comment: still return true so lexer can progress
  lx->mark_end(lx);
  return true;
}

static bool scan_line_comment_after_dashes(TSLexer *lx) {
  // Consume to newline/CR/EOF
  while (!lx->eof(lx) && lx->lookahead != '\n' && lx->lookahead != '\r') {
    advance(lx);
  }
  lx->mark_end(lx);
  return true;
}

static bool scan_comment(TSLexer *lx, const bool *valid) {
  // Must start at first '-'
  if (!consume_char('-', lx)) return false;
  if (!consume_char('-', lx)) return false;

  // If next is '[' and LONG_COMMENT is valid, prefer long comment
  if (lx->lookahead == '[' && valid[LONG_COMMENT]) {
    if (scan_long_comment_after_dashes(lx)) {
      lx->result_symbol = LONG_COMMENT;
      return true;
    }
  }

  // Otherwise line comment
  if (valid[LINE_COMMENT]) {
    scan_line_comment_after_dashes(lx);
    lx->result_symbol = LINE_COMMENT;
    return true;
  }

  // If LINE_COMMENT isn't valid, we must still make progress; treat as line comment anyway.
  scan_line_comment_after_dashes(lx);
  lx->result_symbol = LINE_COMMENT;
  return true;
}

/* ===== main scan ===== */

bool tree_sitter_vesti_external_scanner_scan(void *payload, TSLexer *lx, const bool *valid) {
  (void)payload;

  // If you want comments recognized after indentation, keep this enabled.
  // It is safe because comments are in extras.
  skip_whitespaces(lx);

  // Comments (extras) — single-token
  if ((valid[LINE_COMMENT] || valid[LONG_COMMENT]) && lx->lookahead == '-') {
    if (scan_comment(lx, valid)) return true;
  }

  // Lua code block tokens
  if (valid[LUACODE_END] && scan_luacode_end(lx)) {
    lx->result_symbol = LUACODE_END;
    return true;
  }
  if (valid[LUACODE_PAYLOAD] && scan_luacode_payload(lx)) {
    lx->result_symbol = LUACODE_PAYLOAD;
    return true;
  }
  if (valid[LUACODE_START] && scan_luacode_start(lx)) {
    lx->result_symbol = LUACODE_START;
    return true;
  }

  return false;
}

