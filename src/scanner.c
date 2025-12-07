#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include <tree_sitter/parser.h>

enum TokenType {
  LUACODE_START,
  LUACODE_CONTENT,
  LUACODE_END,
};

#define MAX_TAG_LENGTH 32

typedef struct {
  char tag[MAX_TAG_LENGTH + 1];
  uint8_t tag_len;
} Scanner;

// --- Lifecycle ---

void *tree_sitter_vesti_external_scanner_create(void) {
  return calloc(1, sizeof(Scanner));
}

void tree_sitter_vesti_external_scanner_destroy(void* payload) {
  free(payload);
}

unsigned tree_sitter_vesti_external_scanner_serialize(void* payload, char* buffer) {
  Scanner* s = (Scanner*)payload;
  if (s->tag_len > MAX_TAG_LENGTH) return 0;
  buffer[0] = s->tag_len;
  if (s->tag_len > 0) memcpy(&buffer[1], s->tag, s->tag_len);
  return s->tag_len + 1;
}

void tree_sitter_vesti_external_scanner_deserialize(
  void* payload,
  const char* buffer,
  unsigned length
) {
  Scanner* s = (Scanner*)payload;
  if (length == 0) { s->tag_len = 0; return; }
  s->tag_len = (uint8_t)buffer[0];
  if (s->tag_len > MAX_TAG_LENGTH) s->tag_len = 0;
  if (s->tag_len > 0 && length >= s->tag_len + 1) {
    memcpy(s->tag, &buffer[1], s->tag_len);
    s->tag[s->tag_len] = '\0';
  }
}

// --- Helpers ---

static inline void advance(TSLexer* lx) { lx->advance(lx, false); }
static inline void skip(TSLexer* lx)    { lx->advance(lx, true); }

// Allow alphanumeric and colon in tags
static inline bool is_tag_char(int32_t c) {
  return (c >= '0' && c <= '9') ||
         (c >= 'A' && c <= 'Z') ||
         (c >= 'a' && c <= 'z') ||
         (c == ':');
}

// --- Scanner Logic ---

bool tree_sitter_vesti_external_scanner_scan(
  void* payload,
  TSLexer* lx,
  const bool* valid
) {
  Scanner* s = (Scanner*)payload;

  // 1. LUACODE_START: #:<tag>#
  if (valid[LUACODE_START]) {
    while (isspace(lx->lookahead)) skip(lx);

    if (lx->lookahead != '#') return false; advance(lx);
    if (lx->lookahead != ':') return false; advance(lx);

    s->tag_len = 0;

    while (true) {
      if (lx->eof(lx)) return false;

      int32_t current = lx->lookahead;

      if (current == '#') {
        advance(lx);
        s->tag[s->tag_len] = '\0';
        printf("Cowabunga: |%s|\n", s->tag);
        lx->mark_end(lx);
        lx->result_symbol = LUACODE_START;
        return true;
      } else if (is_tag_char(current)) {
        if (s->tag_len < MAX_TAG_LENGTH) s->tag[s->tag_len++] = (char)current;
        advance(lx);
      } else {
          return false;
      }
    }
  }

  // 2. LUACODE_END: #<tag>:#
  if (valid[LUACODE_END] && s->tag_len > 0) {
    while (isspace(lx->lookahead)) skip(lx);

    if (lx->lookahead == '#') {
      advance(lx);
      
      // Match exact tag
      for (int i = 0; i < s->tag_len; i++) {
        if (lx->lookahead != s->tag[i]) return false;
        advance(lx);
      }

      // Match closing ":#"
      if (lx->lookahead == ':') {
        advance(lx);
        if (lx->lookahead == '#') {
          advance(lx);
          lx->mark_end(lx); // Ensure token has width
          lx->result_symbol = LUACODE_END;
          s->tag_len = 0; // Reset state
          return true;
        }
      }
    }
    return false;
  }

  // 3. LUACODE_CONTENT
  if (valid[LUACODE_CONTENT] && s->tag_len > 0) {
    lx->result_symbol = LUACODE_CONTENT;
    bool has_content = false;

    while (!lx->eof(lx)) {
      lx->mark_end(lx); // Mark content end BEFORE checking for delimiter

      if (lx->lookahead == '#') {
        // Potential delimiter start.
        // We verify EXACTLY #<tag>:#.
        // If it matches, we return true (lexer resets to mark_end).
        // If it fails, we consume the checked chars as content and continue.
        
        int32_t c = lx->lookahead; 
        advance(lx); // Consume '#'

        bool match = true;
        for (int i = 0; i < s->tag_len; i++) {
          if (lx->lookahead != s->tag[i]) { match = false; break; }
          advance(lx);
        }

        if (match) {
          if (lx->lookahead == ':') {
            advance(lx);
            if (lx->lookahead == '#') {
              // Found delimiter. Return true.
              // Lexer rewinds to the last mark_end() (before the first ':').
              return true; 
            }
          }
        }
        
        // Mismatch. The characters we advanced over are content.
        // We continue the loop. 
        // Important: The next mark_end() at top of loop will capture these chars.
        has_content = true;
      } else {
        advance(lx);
        has_content = true;
      }
    }
    return has_content;
  }

  return false;
}
