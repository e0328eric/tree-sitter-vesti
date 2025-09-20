// scanner.c — external scanner for #jl: ... :jl#
// Emits one token: JL_BLOCK = the payload between the delimiters (may be empty).

#include <stdbool.h>
#include <string.h>
#include "tree_sitter/parser.h"

enum TokenType {
  JL_BLOCK,
};

void *tree_sitter_vesti_external_scanner_create(void) {
  // No state needed.
  return NULL;
}

void tree_sitter_vesti_external_scanner_destroy(void *payload) {
  // No state to free.
  (void)payload;
}

unsigned tree_sitter_vesti_external_scanner_serialize(void *payload, char *buffer) {
  (void)payload; (void)buffer;
  return 0; // stateless
}

void tree_sitter_vesti_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  (void)payload; (void)buffer; (void)length;
  // stateless
}

static inline void advance(TSLexer *lexer) {
  lexer->advance(lexer, false); // consume as content
}

bool tree_sitter_vesti_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  (void)payload;

  if (!valid_symbols[JL_BLOCK]) {
    return false;
  }

  // We are called right after matching "#jl:" from the grammar.
  // Produce JL_BLOCK up to *before* the next ":jl#" or EOF.

  lexer->result_symbol = JL_BLOCK;

  // Allow empty payload: token can end immediately.
  lexer->mark_end(lexer);

  for (;;) {
    if (lexer->eof(lexer)) {
      // End of file -> emit whatever we have so far as payload.
      return true;
    }

    if (lexer->lookahead == ':') {
      // We *might* be at the start of ":jl#".
      // Mark end BEFORE ':' so the token ends right before the closing delimiter.
      lexer->mark_end(lexer);

      // Look ahead, consuming temporarily. If this is the closing marker,
      // returning `true` will emit content up to the last mark_end,
      // and parsing will resume at the ':' (the closing marker will be lexed next).
      advance(lexer); // seen ':'
      if (lexer->lookahead == 'j') {
        advance(lexer); // seen 'j'
        if (lexer->lookahead == 'l') {
          advance(lexer); // seen 'l'
          if (lexer->lookahead == '#') {
            // Found ":jl#". DO NOT consume '#'.
            // Because we marked end before the ':', the payload excludes the delimiter.
            return true;
          }
        }
      }

      // Not actually a closing delimiter; the consumed chars are part of the payload.
      // Continue scanning from current position.
      continue;
    }

    // Regular character, just consume.
    advance(lexer);
  }
}

