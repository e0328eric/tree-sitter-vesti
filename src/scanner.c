#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include "tree_sitter/parser.h"

enum TokenType {
  LUACODE_PAYLOAD,
  LUACODE_END,
};

static inline void adv(TSLexer *lx, bool skip) { lx->advance(lx, skip); }
static inline void advk(TSLexer *lx)           { lx->advance(lx, false); } // keep
static inline bool is_space(int c)             { return c == ' ' || c == '\t'; }
static inline bool is_nl(int c)                { return c == '\n' || c == '\r'; }

// Consume up to and including a closing bracket/angle if present:  "[...]" or "<...>"
static void consume_optional_label(TSLexer *lx) {
  if (lx->lookahead == '[') {
    advk(lx); // '['
    while (!lx->eof(lx) && lx->lookahead != ']') advk(lx);
    if (lx->lookahead == ']') advk(lx); // ']'
  } else if (lx->lookahead == '<') {
    advk(lx); // '<'
    while (!lx->eof(lx) && lx->lookahead != '>') advk(lx);
    if (lx->lookahead == '>') advk(lx); // '>'
  }
}

void *tree_sitter_vesti_external_scanner_create(void) { return NULL; }
void tree_sitter_vesti_external_scanner_destroy(void *payload) { (void)payload; }
unsigned tree_sitter_vesti_external_scanner_serialize(void *payload, char *buffer) {
  (void)payload; (void)buffer; return 0;
}
void tree_sitter_vesti_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  (void)payload; (void)buffer; (void)length;
}

bool tree_sitter_vesti_external_scanner_scan(void *payload, TSLexer *lx, const bool *valid) {
  (void)payload;

  // -------- END token: ^[ \t]* : l u #
  if (valid[LUACODE_END]) {
    // Allow leading spaces/tabs at BOL before the delimiter.
    // We don't have direct "BOL" from TS; rely on grammar calling END only right after PAYLOAD,
    // which stops exactly before ':' at BOL. Still, be permissive with leading spaces.
    // Consume optional spaces/tabs only if the first char is space/tab or ':' (no harm otherwise).
    while (is_space(lx->lookahead)) advk(lx);

    if (lx->lookahead != ':') return false;
    advk(lx); // ':'
    if (lx->lookahead != 'l') return false; advk(lx); // 'l'
    if (lx->lookahead != 'u') return false; advk(lx); // 'u'
    if (lx->lookahead != '#') return false; advk(lx); // '#'

    // Optional label: :lu#<name> or :lu#[name]
    consume_optional_label(lx);

    lx->result_symbol = LUACODE_END;
    return true;
  }

  // -------- PAYLOAD token: everything until a BOL ":"
  if (!valid[LUACODE_PAYLOAD]) return false;

  lx->result_symbol = LUACODE_PAYLOAD;

  // We consider we're at BOL at the start of payload.
  bool at_bol = true;      // true at start or right after a newline (ignoring spaces/tabs)
  lx->mark_end(lx);        // allow empty payload

  for (;;) {
    if (lx->eof(lx)) {
      return true; // emit what we have
    }

    int c = lx->lookahead;

    // Maintain at_bol: stay true across spaces/tabs; set true after NL; clear on other chars.
    if (is_nl(c)) {
      advk(lx);
      at_bol = true;
      continue;
    }
    if (is_space(c)) {
      // Spaces keep at_bol as-is
      advk(lx);
      continue;
    }

    if (c == ':' && at_bol) {
      // Potential ":lu#" delimiter at beginning of a line.
      // Stop BEFORE ':'; let the END branch consume it.
      lx->mark_end(lx);
      return true;
    }

    // Regular content
    at_bol = false;
    advk(lx);
  }
}
