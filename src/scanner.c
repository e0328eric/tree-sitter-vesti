#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <tree_sitter/parser.h>

enum TokenType {
  LUACODE_START,
  LUACODE_PAYLOAD,
  LUACODE_END,

  LONG_COMMENT_START,
  LONG_COMMENT_PAYLOAD,
  LONG_COMMENT_END,
};

typedef struct {
  uint8_t long_eq_count;
  bool in_long_comment;
} Scanner;

static inline void advance(TSLexer *lx) { lx->advance(lx, false); }
static inline void skip(TSLexer *lx)    { lx->advance(lx, true); }

void *tree_sitter_vesti_external_scanner_create(void) {
  return calloc(1, sizeof(Scanner));
}

void tree_sitter_vesti_external_scanner_destroy(void *payload) {
  free(payload);
}

unsigned tree_sitter_vesti_external_scanner_serialize(void* payload, char* buffer) {
  Scanner* s = (Scanner*)payload;
  buffer[0] = (char)s->in_long_comment;
  buffer[1] = (char)s->long_eq_count;
  return 2;
}

void tree_sitter_vesti_external_scanner_deserialize(void* payload, const char* buffer, unsigned length) {
  Scanner* s = (Scanner*)payload;
  if (length < 2) { s->in_long_comment = false; s->long_eq_count = 0; return; }
  s->in_long_comment = (bool)buffer[0];
  s->long_eq_count = (uint8_t)buffer[1];
}

/* --- LuaCode delimiters (#:: ... ::#) --- */
static bool scan_luacode_start(TSLexer *lx) {
  // Prefer exact match; do not skip whitespace here.
  if (lx->lookahead != '#') return false; advance(lx);
  if (lx->lookahead != ':') return false; advance(lx);
  if (lx->lookahead != ':') return false; advance(lx);
  lx->mark_end(lx);
  return true;
}

static bool scan_luacode_end(TSLexer *lx) {
  if (lx->lookahead != ':') return false; advance(lx);
  if (lx->lookahead != ':') return false; advance(lx);
  if (lx->lookahead != '#') return false; advance(lx);
  lx->mark_end(lx);
  return true;
}

static bool scan_luacode_content(TSLexer *lx) {
  bool has = false;
  while (!lx->eof(lx)) {
    lx->mark_end(lx);
    if (lx->lookahead == ':') {
      advance(lx);
      if (lx->lookahead == ':') {
        advance(lx);
        if (lx->lookahead == '#') return has;
      }
      has = true;
      continue;
    }
    advance(lx);
    has = true;
  }
  return has;
}

/* --- Lua long comment: --[=*[ ... ]=*] --- */
static bool scan_long_comment_start(Scanner *s, TSLexer *lx) {
  // Must match exactly at current position.
  if (lx->lookahead != '-') return false; advance(lx);
  if (lx->lookahead != '-') return false; advance(lx);
  if (lx->lookahead != '[') return false; advance(lx);

  uint8_t eq = 0;
  while (lx->lookahead == '=') {
    eq++;
    advance(lx);
  }

  if (lx->lookahead != '[') return false;
  advance(lx);

  s->in_long_comment = true;
  s->long_eq_count = eq;

  lx->mark_end(lx);
  return true;
}

static bool scan_long_comment_end(Scanner *s, TSLexer *lx) {
  if (!s->in_long_comment) return false;

  if (lx->lookahead != ']') return false;
  advance(lx);

  for (uint8_t i = 0; i < s->long_eq_count; i++) {
    if (lx->lookahead != '=') return false;
    advance(lx);
  }

  if (lx->lookahead != ']') return false;
  advance(lx);

  s->in_long_comment = false;

  lx->mark_end(lx);
  return true;
}

static bool scan_long_comment_content(Scanner *s, TSLexer *lx) {
  if (!s->in_long_comment) return false;

  bool has = false;

  while (!lx->eof(lx)) {
    lx->mark_end(lx);

    if (lx->lookahead == ']') {
      advance(lx);

      // check =...=]
      uint8_t seen = 0;
      while (seen < s->long_eq_count && lx->lookahead == '=') {
        seen++;
        advance(lx);
      }

      if (seen == s->long_eq_count && lx->lookahead == ']') {
        // next token should be END; content ends before the first ']'
        return has;
      }

      has = true;
      continue;
    }

    advance(lx);
    has = true;
  }

  return has;
}

bool tree_sitter_vesti_external_scanner_scan(void *payload, TSLexer *lx, const bool *valid) {
  Scanner *s = (Scanner*)payload;

  // Long comment tokens: if we're inside, content/end should dominate.
  if (valid[LONG_COMMENT_END] && scan_long_comment_end(s, lx)) {
    lx->result_symbol = LONG_COMMENT_END;
    return true;
  }

  if (valid[LONG_COMMENT_PAYLOAD] && scan_long_comment_content(s, lx)) {
    lx->result_symbol = LONG_COMMENT_PAYLOAD;
    return true;
  }

  if (valid[LONG_COMMENT_START] && scan_long_comment_start(s, lx)) {
    lx->result_symbol = LONG_COMMENT_START;
    return true;
  }

  // LuaCode tokens
  if (valid[LUACODE_END] && scan_luacode_end(lx)) {
    lx->result_symbol = LUACODE_END;
    return true;
  }

  if (valid[LUACODE_PAYLOAD] && scan_luacode_content(lx)) {
    lx->result_symbol = LUACODE_PAYLOAD;
    return true;
  }

  if (valid[LUACODE_START] && scan_luacode_start(lx)) {
    lx->result_symbol = LUACODE_START;
    return true;
  }

  return false;
}

