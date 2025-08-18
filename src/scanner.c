#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#include <tree_sitter/parser.h>

enum TokenType {
    PYCODE_START,
    PYCODE_END,
    PYCODE_PREFIX,
    PYCODE_LINE_CONTENT,
    PYCODE_BLANKLINE,
};

typedef struct {
    char delimiter[1024];
    uint32_t delimiter_len;
    bool in_block;
    bool awaiting_content; // true right after PREFIX, expecting LINE_CONTENT
} ScannerState;

static inline void skip_hspace(TSLexer* lx) {
    while (lx->lookahead == ' ' || lx->lookahead == '\t') lx->advance(lx, true);
}

static uint32_t read_line_no_nl(TSLexer* lx, char* buf, uint32_t cap) {
    uint32_t n = 0;
    while (lx->lookahead && lx->lookahead != '\n' && lx->lookahead != '\r') {
        if (n + 1 < cap) buf[n++] = (char) lx->lookahead;
        lx->advance(lx, false);
    }
    buf[n] = '\0';
    return n;
}

static bool is_eol(TSLexer* lx) {
    return lx->lookahead == '\r' || lx->lookahead == '\n';
}

static void consume_eol(TSLexer* lx) {
    if (lx->lookahead == '\r') lx->advance(lx, false);
    if (lx->lookahead == '\n') lx->advance(lx, false);
}

static bool line_equals(const char* a, uint32_t na, const char* b, uint32_t nb) {
    return na == nb && memcmp(a, b, na) == 0;
}

void* tree_sitter_vesti_external_scanner_create(void) {
    return calloc(1, sizeof(ScannerState));
}

void tree_sitter_vesti_external_scanner_destroy(void* payload) {
    free(payload);
}

void tree_sitter_vesti_external_scanner_reset(void* payload) {
    ScannerState* st = (ScannerState*) payload;
    st->delimiter_len = 0;
    st->in_block = false;
    st->awaiting_content = false;
}

unsigned tree_sitter_vesti_external_scanner_serialize(void* payload, char* buffer) {
    ScannerState* st = (ScannerState*) payload;
    if (st->delimiter_len > 250) return 0;
    unsigned i = 0;
    buffer[i++] = (char) st->delimiter_len;
    memcpy(buffer + i, st->delimiter, st->delimiter_len);
    i += st->delimiter_len;
    buffer[i++] = st->in_block ? 1 : 0;
    buffer[i++] = st->awaiting_content ? 1 : 0;
    return i;
}

void tree_sitter_vesti_external_scanner_deserialize(void* payload, const char* buffer, unsigned length) {
    ScannerState* st = (ScannerState*) payload;
    st->delimiter_len = 0;
    st->in_block = false;
    st->awaiting_content = false;
    if (!buffer || length < 2) return;
    unsigned i = 0;
    uint8_t len = (uint8_t) buffer[i++];
    if (i + len + 2 > length) return;
    if (len) {
        memcpy(st->delimiter, buffer + i, len);
        st->delimiter_len = len;
    }
    i += len;
    st->in_block = buffer[i++] ? true : false;
    st->awaiting_content = buffer[i++] ? true : false;
}

static bool scan_start(TSLexer* lx, ScannerState* st) {
    if (lx->get_column(lx) == 0) return false;
    if (!(lx->lookahead == ' ' || lx->lookahead == '\t')) return false;
    skip_hspace(lx);

    st->delimiter_len = read_line_no_nl(lx, st->delimiter, sizeof st->delimiter);
    consume_eol(lx);

    st->in_block = true;
    st->awaiting_content = false;
    lx->result_symbol = PYCODE_START;
    return true;
}

static bool scan_end(TSLexer* lx, ScannerState* st) {
    if (!st->in_block) return false;
    if (lx->get_column(lx) != 0) return false;
    skip_hspace(lx);
    if (lx->lookahead == '\\') return false;
    if (is_eol(lx)) return false;

    char tmp[1024];
    uint32_t n = read_line_no_nl(lx, tmp, sizeof tmp);
    // Look ahead: if line equals delimiter, consume EOL and emit END
    if (!line_equals(tmp, n, st->delimiter, st->delimiter_len)) {
        // Not the end; don't consume EOL here since we already read the text part.
        // But we *did* advance over the text; that’s fine because END is tried
        // only when valid_symbols[PYCODE_END] is on and higher priority in scan().
        // To avoid losing text, we only call scan_end before other tokens.
        return false;
    }
    consume_eol(lx);
    st->in_block = false;
    st->awaiting_content = false;
    lx->result_symbol = PYCODE_END;
    return true;
}

static bool scan_prefix(TSLexer* lx, ScannerState* st) {
    if (!st->in_block || st->awaiting_content) return false;
    skip_hspace(lx);

    if (lx->lookahead != '\\') return false;
    lx->advance(lx, false);
    if (lx->lookahead != '\\') return false;
    lx->advance(lx, false);

    // Do NOT eat spaces after the backslashes; they belong to code.
    st->awaiting_content = true;
    lx->result_symbol = PYCODE_PREFIX;
    return true;
}

static bool scan_line_content(TSLexer* lx, ScannerState* st) {
    if (!st->in_block || !st->awaiting_content) return false;

    // Content is everything to end-of-line, INCLUDING newline
    while (lx->lookahead && lx->lookahead != '\n' && lx->lookahead != '\r') {
        lx->advance(lx, false);
    }
    consume_eol(lx);

    st->awaiting_content = false;
    lx->result_symbol = PYCODE_LINE_CONTENT;
    return true;
}

static bool scan_blankline(TSLexer* lx, ScannerState* st) {
    if (!st->in_block || st->awaiting_content) return false;
    if (lx->get_column(lx) != 0) return false;

    // whitespace-only line
    unsigned advanced = 0;
    while (lx->lookahead == ' ' || lx->lookahead == '\t') {
        lx->advance(lx, true);
        advanced++;
    }
    if (lx->lookahead == '\n' || lx->lookahead == '\r') {
        consume_eol(lx);
        lx->result_symbol = PYCODE_BLANKLINE;
        return true;
    }
    // If we consumed spaces but it's not newline, that's okay; parser will try other tokens.
    return false;
}

bool tree_sitter_vesti_external_scanner_scan(void* payload, TSLexer* lx, const bool* valid) {
    ScannerState* st = (ScannerState*) payload;

    // Try in this order to avoid consuming content that should end a block.
    if (valid[PYCODE_END] && scan_end(lx, st)) return true;
    if (valid[PYCODE_START] && scan_start(lx, st)) return true;
    if (valid[PYCODE_PREFIX] && scan_prefix(lx, st)) return true;
    if (valid[PYCODE_LINE_CONTENT] && scan_line_content(lx, st)) return true;
    if (valid[PYCODE_BLANKLINE] && scan_blankline(lx, st)) return true;

    return false;
}
