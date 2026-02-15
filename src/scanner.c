#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <tree_sitter/parser.h>

enum TokenType {
  LUACODE_START,
  LUACODE_CONTENT,
  LUACODE_END,
};

typedef struct {
  uint8_t _dummy;
} Scanner;

static inline void advance(TSLexer *lx) { lx->advance(lx, false); }
static inline void skip(TSLexer *lx)    { lx->advance(lx, true); }

void *tree_sitter_vesti_external_scanner_create(void) {
  return calloc(1, sizeof(Scanner));
}

void tree_sitter_vesti_external_scanner_destroy(void *payload) {
  free(payload);
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

static bool scan_start(TSLexer *lx) {
  while (isspace((unsigned char)lx->lookahead)) skip(lx);

  if (lx->lookahead != '#') return false;
  advance(lx);

  if (lx->lookahead != ':') return false;
  advance(lx);

  if (lx->lookahead != ':') return false;
  advance(lx);

  lx->mark_end(lx);
  return true;
}

static bool scan_end(TSLexer *lx) {
  // If you want end to be allowed after whitespace, keep this.
  // If you want "::#" to be recognized *immediately* (even if payload ends with whitespace),
  // skipping whitespace is still OK because payload token will stop before "::#".
  while (isspace((unsigned char)lx->lookahead)) skip(lx);

  if (lx->lookahead != ':') return false;
  advance(lx);

  if (lx->lookahead != ':') return false;
  advance(lx);

  if (lx->lookahead != '#') return false;
  advance(lx);

  lx->mark_end(lx);
  return true;
}

bool tree_sitter_vesti_external_scanner_scan(void *payload, TSLexer *lx, const bool *valid) {
  (void)payload;

  if (valid[LUACODE_START]) {
    if (scan_start(lx)) {
      lx->result_symbol = LUACODE_START;
      return true;
    }
    return false;
  }

  if (valid[LUACODE_END]) {
    if (scan_end(lx)) {
      lx->result_symbol = LUACODE_END;
      return true;
    }
    return false;
  }

  if (valid[LUACODE_CONTENT]) {
    bool has_content = false;
    lx->result_symbol = LUACODE_CONTENT;

    while (!lx->eof(lx)) {
      lx->mark_end(lx);

      if (lx->lookahead == ':') {
        advance(lx); // consumed first ':'

        if (lx->lookahead == ':') {
          advance(lx); // consumed second ':'

          if (lx->lookahead == '#') {
            // We found the end delimiter start.
            // Because we marked_end *before* consuming ':', content ends right before it.
            return has_content;
          }
        }

        // Not actually "::#" -> those consumed chars are content.
        has_content = true;
        continue;
      }

      advance(lx);
      has_content = true;
    }

    return has_content;
  }

  return false;
}

