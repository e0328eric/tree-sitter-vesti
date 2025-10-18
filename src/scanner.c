// scanner.c
#include <stdbool.h>
#include <string.h>
#include "tree_sitter/parser.h"

enum TokenType {
  LUACODE_PAYLOAD,
  LUACODE_END,
};

// --- Optional tiny state to help with backtracking friendliness.
// We record whether we previously stopped at a ':' that was NOT followed by "jl#"
// at this byte position, so the next time we won't stop there again.
typedef struct {
  bool suppress_stop_at_colon;
} ScannerState;

void *tree_sitter_vesti_external_scanner_create(void) {
  ScannerState *st = (ScannerState *)calloc(1, sizeof(ScannerState));
  return st;
}

void tree_sitter_vesti_external_scanner_destroy(void *payload) {
  free(payload);
}

unsigned tree_sitter_vesti_external_scanner_serialize(void *payload, char *buffer) {
  ScannerState *st = (ScannerState *)payload;
  buffer[0] = (char)(st->suppress_stop_at_colon ? 1 : 0);
  return 1;
}

void tree_sitter_vesti_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  ScannerState *st = (ScannerState *)payload;
  st->suppress_stop_at_colon = (length >= 1 && buffer[0] == 1);
}

static inline void advance_as_content(TSLexer *lexer) { lexer->advance(lexer, false); }
static inline void skip(TSLexer *lexer)               { lexer->advance(lexer, true);  }

bool tree_sitter_vesti_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  ScannerState *st = (ScannerState *)payload;

  // END token branch: consume exactly ":lu#"
  if (valid_symbols[LUACODE_END]) {
    if (lexer->lookahead != ':') return false;
    skip(lexer);                        // ':'
    if (lexer->lookahead != 'l') return false;
    skip(lexer);                        // 'l'
    if (lexer->lookahead != 'u') return false;
    skip(lexer);                        // 'u'
    if (lexer->lookahead != '#') return false;
    skip(lexer);                        // '#'

    lexer->result_symbol = LUACODE_END;
    // We successfully consumed the end marker; next payload colon checks are allowed again.
    st->suppress_stop_at_colon = false;
    return true;
  }

  // PAYLOAD token branch: read until (just before) ":lu#" or EOF.
  if (!valid_symbols[LUACODE_PAYLOAD]) return false;

  lexer->result_symbol = LUACODE_PAYLOAD;

  // Allow empty payload immediately.
  lexer->mark_end(lexer);

  for (;;) {
    if (lexer->eof(lexer)) {
      return true;  // emit whatever we accumulated
    }

    if (lexer->lookahead == ':') {
      // Potential end marker. We MUST NOT consume here.
      // If the parser wants END next and it's present, the END branch above
      // will run immediately after this token and consume ":lu#".
      // Mark token end BEFORE ':' so payload excludes the delimiter.
      if (!st->suppress_stop_at_colon) {
        lexer->mark_end(lexer);
        return true;                  // stop payload right before ':'
      }
      // If we previously learned this colon wasn't an end, just take it as content.
      advance_as_content(lexer);
      continue;
    }

    // Regular character: consume as payload content
    advance_as_content(lexer);
  }
}

