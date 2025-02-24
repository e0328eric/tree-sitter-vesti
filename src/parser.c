#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 111
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 89
#define ALIAS_COUNT 0
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  anon_sym_COMMA = 2,
  anon_sym_LF = 3,
  anon_sym_RBRACE = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  aux_sym_useenv_decl_token1 = 7,
  anon_sym_BSLASH = 8,
  sym_latex_function_name = 9,
  anon_sym_DOLLAR = 10,
  aux_sym_inline_math_token1 = 11,
  anon_sym_DOLLAR_DOLLAR = 12,
  aux_sym_options_token1 = 13,
  aux_sym_mandantory_arg_token1 = 14,
  anon_sym_LBRACK = 15,
  aux_sym_optional_arg_token1 = 16,
  anon_sym_RBRACK = 17,
  sym_filepath = 18,
  sym_class_pkg_name = 19,
  sym_env_name = 20,
  sym_KEYWORD_docclass = 21,
  sym_KEYWORD_importpkg = 22,
  sym_KEYWORD_importmod = 23,
  sym_KEYWORD_importfile = 24,
  sym_KEYWORD_importves = 25,
  sym_KEYWORD_useltx3 = 26,
  sym_KEYWORD_getfp = 27,
  sym_KEYWORD_startdoc = 28,
  sym_KEYWORD_useenv = 29,
  sym_KEYWORD_begenv = 30,
  sym_KEYWORD_endenv = 31,
  sym_KEYWORD_makeatletter = 32,
  sym_KEYWORD_makeatother = 33,
  sym_KEYWORD_ltx3on = 34,
  sym_KEYWORD_ltx3off = 35,
  sym_KEYWORD_nonstopmode = 36,
  sym_KEYWORD_luacode = 37,
  sym_word = 38,
  anon_sym_PLUS = 39,
  anon_sym_DASH = 40,
  anon_sym_STAR = 41,
  anon_sym_SLASH = 42,
  anon_sym_LT = 43,
  anon_sym_GT = 44,
  anon_sym_BANG = 45,
  anon_sym_PIPE = 46,
  anon_sym_COLON = 47,
  anon_sym_SQUOTE = 48,
  sym_delimiter = 49,
  sym_digit = 50,
  sym_ascii_letter = 51,
  sym_letter = 52,
  sym_line_comment = 53,
  sym_multiline_comment = 54,
  sym_vesti_content = 55,
  sym_statement = 56,
  sym_docclass_decl = 57,
  sym_singlepkg_decl = 58,
  sym_multipkg_decl = 59,
  sym_importmod_decl = 60,
  sym_importfile_decl = 61,
  sym_importves_decl = 62,
  sym_getfp_decl = 63,
  sym_useenv_decl = 64,
  sym_begenv_decl = 65,
  sym_endenv_decl = 66,
  sym_luacode = 67,
  sym_luacode_contents = 68,
  sym_latex_function = 69,
  sym_inline_math = 70,
  sym_display_math = 71,
  sym_options = 72,
  sym_env_arg = 73,
  sym_mandantory_arg = 74,
  sym_optional_arg = 75,
  sym__text_content = 76,
  sym_text = 77,
  sym_operator = 78,
  aux_sym_vesti_content_repeat1 = 79,
  aux_sym_multipkg_decl_repeat1 = 80,
  aux_sym_useenv_decl_repeat1 = 81,
  aux_sym_useenv_decl_repeat2 = 82,
  aux_sym_inline_math_repeat1 = 83,
  aux_sym_options_repeat1 = 84,
  aux_sym_options_repeat2 = 85,
  aux_sym_mandantory_arg_repeat1 = 86,
  aux_sym_optional_arg_repeat1 = 87,
  aux_sym_text_repeat1 = 88,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_LF] = "\n",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_useenv_decl_token1] = "useenv_decl_token1",
  [anon_sym_BSLASH] = "\\",
  [sym_latex_function_name] = "latex_function_name",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_inline_math_token1] = "inline_math_token1",
  [anon_sym_DOLLAR_DOLLAR] = "$$",
  [aux_sym_options_token1] = "options_token1",
  [aux_sym_mandantory_arg_token1] = "mandantory_arg_token1",
  [anon_sym_LBRACK] = "[",
  [aux_sym_optional_arg_token1] = "optional_arg_token1",
  [anon_sym_RBRACK] = "]",
  [sym_filepath] = "filepath",
  [sym_class_pkg_name] = "class_pkg_name",
  [sym_env_name] = "env_name",
  [sym_KEYWORD_docclass] = "KEYWORD_docclass",
  [sym_KEYWORD_importpkg] = "KEYWORD_importpkg",
  [sym_KEYWORD_importmod] = "KEYWORD_importmod",
  [sym_KEYWORD_importfile] = "KEYWORD_importfile",
  [sym_KEYWORD_importves] = "KEYWORD_importves",
  [sym_KEYWORD_useltx3] = "KEYWORD_useltx3",
  [sym_KEYWORD_getfp] = "KEYWORD_getfp",
  [sym_KEYWORD_startdoc] = "KEYWORD_startdoc",
  [sym_KEYWORD_useenv] = "KEYWORD_useenv",
  [sym_KEYWORD_begenv] = "KEYWORD_begenv",
  [sym_KEYWORD_endenv] = "KEYWORD_endenv",
  [sym_KEYWORD_makeatletter] = "KEYWORD_makeatletter",
  [sym_KEYWORD_makeatother] = "KEYWORD_makeatother",
  [sym_KEYWORD_ltx3on] = "KEYWORD_ltx3on",
  [sym_KEYWORD_ltx3off] = "KEYWORD_ltx3off",
  [sym_KEYWORD_nonstopmode] = "KEYWORD_nonstopmode",
  [sym_KEYWORD_luacode] = "KEYWORD_luacode",
  [sym_word] = "word",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_BANG] = "!",
  [anon_sym_PIPE] = "|",
  [anon_sym_COLON] = ":",
  [anon_sym_SQUOTE] = "'",
  [sym_delimiter] = "delimiter",
  [sym_digit] = "digit",
  [sym_ascii_letter] = "ascii_letter",
  [sym_letter] = "letter",
  [sym_line_comment] = "line_comment",
  [sym_multiline_comment] = "multiline_comment",
  [sym_vesti_content] = "vesti_content",
  [sym_statement] = "statement",
  [sym_docclass_decl] = "docclass_decl",
  [sym_singlepkg_decl] = "singlepkg_decl",
  [sym_multipkg_decl] = "multipkg_decl",
  [sym_importmod_decl] = "importmod_decl",
  [sym_importfile_decl] = "importfile_decl",
  [sym_importves_decl] = "importves_decl",
  [sym_getfp_decl] = "getfp_decl",
  [sym_useenv_decl] = "useenv_decl",
  [sym_begenv_decl] = "begenv_decl",
  [sym_endenv_decl] = "endenv_decl",
  [sym_luacode] = "luacode",
  [sym_luacode_contents] = "luacode_contents",
  [sym_latex_function] = "latex_function",
  [sym_inline_math] = "inline_math",
  [sym_display_math] = "display_math",
  [sym_options] = "options",
  [sym_env_arg] = "env_arg",
  [sym_mandantory_arg] = "mandantory_arg",
  [sym_optional_arg] = "optional_arg",
  [sym__text_content] = "_text_content",
  [sym_text] = "text",
  [sym_operator] = "operator",
  [aux_sym_vesti_content_repeat1] = "vesti_content_repeat1",
  [aux_sym_multipkg_decl_repeat1] = "multipkg_decl_repeat1",
  [aux_sym_useenv_decl_repeat1] = "useenv_decl_repeat1",
  [aux_sym_useenv_decl_repeat2] = "useenv_decl_repeat2",
  [aux_sym_inline_math_repeat1] = "inline_math_repeat1",
  [aux_sym_options_repeat1] = "options_repeat1",
  [aux_sym_options_repeat2] = "options_repeat2",
  [aux_sym_mandantory_arg_repeat1] = "mandantory_arg_repeat1",
  [aux_sym_optional_arg_repeat1] = "optional_arg_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_useenv_decl_token1] = aux_sym_useenv_decl_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_latex_function_name] = sym_latex_function_name,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_inline_math_token1] = aux_sym_inline_math_token1,
  [anon_sym_DOLLAR_DOLLAR] = anon_sym_DOLLAR_DOLLAR,
  [aux_sym_options_token1] = aux_sym_options_token1,
  [aux_sym_mandantory_arg_token1] = aux_sym_mandantory_arg_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_optional_arg_token1] = aux_sym_optional_arg_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_filepath] = sym_filepath,
  [sym_class_pkg_name] = sym_class_pkg_name,
  [sym_env_name] = sym_env_name,
  [sym_KEYWORD_docclass] = sym_KEYWORD_docclass,
  [sym_KEYWORD_importpkg] = sym_KEYWORD_importpkg,
  [sym_KEYWORD_importmod] = sym_KEYWORD_importmod,
  [sym_KEYWORD_importfile] = sym_KEYWORD_importfile,
  [sym_KEYWORD_importves] = sym_KEYWORD_importves,
  [sym_KEYWORD_useltx3] = sym_KEYWORD_useltx3,
  [sym_KEYWORD_getfp] = sym_KEYWORD_getfp,
  [sym_KEYWORD_startdoc] = sym_KEYWORD_startdoc,
  [sym_KEYWORD_useenv] = sym_KEYWORD_useenv,
  [sym_KEYWORD_begenv] = sym_KEYWORD_begenv,
  [sym_KEYWORD_endenv] = sym_KEYWORD_endenv,
  [sym_KEYWORD_makeatletter] = sym_KEYWORD_makeatletter,
  [sym_KEYWORD_makeatother] = sym_KEYWORD_makeatother,
  [sym_KEYWORD_ltx3on] = sym_KEYWORD_ltx3on,
  [sym_KEYWORD_ltx3off] = sym_KEYWORD_ltx3off,
  [sym_KEYWORD_nonstopmode] = sym_KEYWORD_nonstopmode,
  [sym_KEYWORD_luacode] = sym_KEYWORD_luacode,
  [sym_word] = sym_word,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_delimiter] = sym_delimiter,
  [sym_digit] = sym_digit,
  [sym_ascii_letter] = sym_ascii_letter,
  [sym_letter] = sym_letter,
  [sym_line_comment] = sym_line_comment,
  [sym_multiline_comment] = sym_multiline_comment,
  [sym_vesti_content] = sym_vesti_content,
  [sym_statement] = sym_statement,
  [sym_docclass_decl] = sym_docclass_decl,
  [sym_singlepkg_decl] = sym_singlepkg_decl,
  [sym_multipkg_decl] = sym_multipkg_decl,
  [sym_importmod_decl] = sym_importmod_decl,
  [sym_importfile_decl] = sym_importfile_decl,
  [sym_importves_decl] = sym_importves_decl,
  [sym_getfp_decl] = sym_getfp_decl,
  [sym_useenv_decl] = sym_useenv_decl,
  [sym_begenv_decl] = sym_begenv_decl,
  [sym_endenv_decl] = sym_endenv_decl,
  [sym_luacode] = sym_luacode,
  [sym_luacode_contents] = sym_luacode_contents,
  [sym_latex_function] = sym_latex_function,
  [sym_inline_math] = sym_inline_math,
  [sym_display_math] = sym_display_math,
  [sym_options] = sym_options,
  [sym_env_arg] = sym_env_arg,
  [sym_mandantory_arg] = sym_mandantory_arg,
  [sym_optional_arg] = sym_optional_arg,
  [sym__text_content] = sym__text_content,
  [sym_text] = sym_text,
  [sym_operator] = sym_operator,
  [aux_sym_vesti_content_repeat1] = aux_sym_vesti_content_repeat1,
  [aux_sym_multipkg_decl_repeat1] = aux_sym_multipkg_decl_repeat1,
  [aux_sym_useenv_decl_repeat1] = aux_sym_useenv_decl_repeat1,
  [aux_sym_useenv_decl_repeat2] = aux_sym_useenv_decl_repeat2,
  [aux_sym_inline_math_repeat1] = aux_sym_inline_math_repeat1,
  [aux_sym_options_repeat1] = aux_sym_options_repeat1,
  [aux_sym_options_repeat2] = aux_sym_options_repeat2,
  [aux_sym_mandantory_arg_repeat1] = aux_sym_mandantory_arg_repeat1,
  [aux_sym_optional_arg_repeat1] = aux_sym_optional_arg_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_useenv_decl_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_latex_function_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_inline_math_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_options_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mandantory_arg_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_optional_arg_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_filepath] = {
    .visible = true,
    .named = true,
  },
  [sym_class_pkg_name] = {
    .visible = true,
    .named = true,
  },
  [sym_env_name] = {
    .visible = true,
    .named = true,
  },
  [sym_KEYWORD_docclass] = {
    .visible = true,
    .named = true,
  },
  [sym_KEYWORD_importpkg] = {
    .visible = true,
    .named = true,
  },
  [sym_KEYWORD_importmod] = {
    .visible = true,
    .named = true,
  },
  [sym_KEYWORD_importfile] = {
    .visible = true,
    .named = true,
  },
  [sym_KEYWORD_importves] = {
    .visible = true,
    .named = true,
  },
  [sym_KEYWORD_useltx3] = {
    .visible = true,
    .named = true,
  },
  [sym_KEYWORD_getfp] = {
    .visible = true,
    .named = true,
  },
  [sym_KEYWORD_startdoc] = {
    .visible = true,
    .named = true,
  },
  [sym_KEYWORD_useenv] = {
    .visible = true,
    .named = true,
  },
  [sym_KEYWORD_begenv] = {
    .visible = true,
    .named = true,
  },
  [sym_KEYWORD_endenv] = {
    .visible = true,
    .named = true,
  },
  [sym_KEYWORD_makeatletter] = {
    .visible = true,
    .named = true,
  },
  [sym_KEYWORD_makeatother] = {
    .visible = true,
    .named = true,
  },
  [sym_KEYWORD_ltx3on] = {
    .visible = true,
    .named = true,
  },
  [sym_KEYWORD_ltx3off] = {
    .visible = true,
    .named = true,
  },
  [sym_KEYWORD_nonstopmode] = {
    .visible = true,
    .named = true,
  },
  [sym_KEYWORD_luacode] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_delimiter] = {
    .visible = true,
    .named = true,
  },
  [sym_digit] = {
    .visible = true,
    .named = true,
  },
  [sym_ascii_letter] = {
    .visible = true,
    .named = true,
  },
  [sym_letter] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_vesti_content] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_docclass_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_singlepkg_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_multipkg_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_importmod_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_importfile_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_importves_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_getfp_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_useenv_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_begenv_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_endenv_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_luacode] = {
    .visible = true,
    .named = true,
  },
  [sym_luacode_contents] = {
    .visible = true,
    .named = true,
  },
  [sym_latex_function] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_math] = {
    .visible = true,
    .named = true,
  },
  [sym_display_math] = {
    .visible = true,
    .named = true,
  },
  [sym_options] = {
    .visible = true,
    .named = true,
  },
  [sym_env_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_mandantory_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_optional_arg] = {
    .visible = true,
    .named = true,
  },
  [sym__text_content] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_vesti_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multipkg_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_useenv_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_useenv_decl_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_math_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_options_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mandantory_arg_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_optional_arg_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_word = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_word] = "word",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_word, 0},
  [1] =
    {field_word, 0, .inherited = true},
  [2] =
    {field_word, 0, .inherited = true},
    {field_word, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 47,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
};

static TSCharacterRange sym_latex_function_name_character_set_1[] = {
  {'@', 'Z'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba}, {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1},
  {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374}, {0x376, 0x377}, {0x37b, 0x37d}, {0x37f, 0x37f},
  {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481}, {0x48a, 0x52f}, {0x531, 0x556},
  {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a}, {0x66e, 0x66f}, {0x671, 0x6d3}, {0x6d5, 0x6d5},
  {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710}, {0x712, 0x72f}, {0x74d, 0x7a5}, {0x7b1, 0x7b1},
  {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a}, {0x824, 0x824}, {0x828, 0x828}, {0x840, 0x858},
  {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939}, {0x93d, 0x93d}, {0x950, 0x950}, {0x958, 0x961},
  {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bd, 0x9bd},
  {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc}, {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28},
  {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa72, 0xa74}, {0xa85, 0xa8d},
  {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd}, {0xad0, 0xad0}, {0xae0, 0xae1},
  {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3d, 0xb3d},
  {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95}, {0xb99, 0xb9a},
  {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0}, {0xc05, 0xc0c}, {0xc0e, 0xc10},
  {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc61}, {0xc80, 0xc80}, {0xc85, 0xc8c},
  {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd}, {0xcdd, 0xcde}, {0xce0, 0xce1}, {0xcf1, 0xcf2},
  {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e}, {0xd54, 0xd56}, {0xd5f, 0xd61}, {0xd7a, 0xd7f},
  {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xe01, 0xe30}, {0xe32, 0xe32}, {0xe40, 0xe46},
  {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0}, {0xeb2, 0xeb2}, {0xebd, 0xebd},
  {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47}, {0xf49, 0xf6c}, {0xf88, 0xf8c}, {0x1000, 0x102a},
  {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066}, {0x106e, 0x1070}, {0x1075, 0x1081}, {0x108e, 0x108e},
  {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d}, {0x1250, 0x1256}, {0x1258, 0x1258},
  {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be}, {0x12c0, 0x12c0}, {0x12c2, 0x12c5},
  {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f}, {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c},
  {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16ee, 0x16f8}, {0x1700, 0x1711}, {0x171f, 0x1731}, {0x1740, 0x1751}, {0x1760, 0x176c},
  {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878}, {0x1880, 0x18a8}, {0x18aa, 0x18aa}, {0x18b0, 0x18f5},
  {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x1a00, 0x1a16}, {0x1a20, 0x1a54}, {0x1aa7, 0x1aa7},
  {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0}, {0x1bae, 0x1baf}, {0x1bba, 0x1be5}, {0x1c00, 0x1c23}, {0x1c4d, 0x1c4f}, {0x1c5a, 0x1c7d},
  {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf},
  {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d},
  {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb},
  {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071}, {0x207f, 0x207f}, {0x2090, 0x209c}, {0x2102, 0x2102}, {0x2107, 0x2107},
  {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2118, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x2139}, {0x213c, 0x213f},
  {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2160, 0x2188}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27},
  {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe},
  {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x3005, 0x3007}, {0x3021, 0x3029}, {0x3031, 0x3035}, {0x3038, 0x303c},
  {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff},
  {0x3400, 0x4dbf}, {0x4e00, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d},
  {0xa6a0, 0xa6ef}, {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801},
  {0xa803, 0xa805}, {0xa807, 0xa80a}, {0xa80c, 0xa822}, {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe},
  {0xa90a, 0xa925}, {0xa930, 0xa946}, {0xa960, 0xa97c}, {0xa984, 0xa9b2}, {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe},
  {0xaa00, 0xaa28}, {0xaa40, 0xaa42}, {0xaa44, 0xaa4b}, {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6},
  {0xaab9, 0xaabd}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e},
  {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xd7a3}, {0xd7b0, 0xd7c6},
  {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36},
  {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfc5d}, {0xfc64, 0xfd3d}, {0xfd50, 0xfd8f},
  {0xfd92, 0xfdc7}, {0xfdf0, 0xfdf9}, {0xfe71, 0xfe71}, {0xfe73, 0xfe73}, {0xfe77, 0xfe77}, {0xfe79, 0xfe79}, {0xfe7b, 0xfe7b}, {0xfe7d, 0xfe7d},
  {0xfe7f, 0xfefc}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xff9d}, {0xffa0, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7},
  {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa},
  {0x10140, 0x10174}, {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x10300, 0x1031f}, {0x1032d, 0x1034a}, {0x10350, 0x10375}, {0x10380, 0x1039d}, {0x103a0, 0x103c3},
  {0x103c8, 0x103cf}, {0x103d1, 0x103d5}, {0x10400, 0x1049d}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a},
  {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736},
  {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835},
  {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915},
  {0x10920, 0x10939}, {0x10980, 0x109b7}, {0x109be, 0x109bf}, {0x10a00, 0x10a00}, {0x10a10, 0x10a13}, {0x10a15, 0x10a17}, {0x10a19, 0x10a35}, {0x10a60, 0x10a7c},
  {0x10a80, 0x10a9c}, {0x10ac0, 0x10ac7}, {0x10ac9, 0x10ae4}, {0x10b00, 0x10b35}, {0x10b40, 0x10b55}, {0x10b60, 0x10b72}, {0x10b80, 0x10b91}, {0x10c00, 0x10c48},
  {0x10c80, 0x10cb2}, {0x10cc0, 0x10cf2}, {0x10d00, 0x10d23}, {0x10e80, 0x10ea9}, {0x10eb0, 0x10eb1}, {0x10f00, 0x10f1c}, {0x10f27, 0x10f27}, {0x10f30, 0x10f45},
  {0x10f70, 0x10f81}, {0x10fb0, 0x10fc4}, {0x10fe0, 0x10ff6}, {0x11003, 0x11037}, {0x11071, 0x11072}, {0x11075, 0x11075}, {0x11083, 0x110af}, {0x110d0, 0x110e8},
  {0x11103, 0x11126}, {0x11144, 0x11144}, {0x11147, 0x11147}, {0x11150, 0x11172}, {0x11176, 0x11176}, {0x11183, 0x111b2}, {0x111c1, 0x111c4}, {0x111da, 0x111da},
  {0x111dc, 0x111dc}, {0x11200, 0x11211}, {0x11213, 0x1122b}, {0x1123f, 0x11240}, {0x11280, 0x11286}, {0x11288, 0x11288}, {0x1128a, 0x1128d}, {0x1128f, 0x1129d},
  {0x1129f, 0x112a8}, {0x112b0, 0x112de}, {0x11305, 0x1130c}, {0x1130f, 0x11310}, {0x11313, 0x11328}, {0x1132a, 0x11330}, {0x11332, 0x11333}, {0x11335, 0x11339},
  {0x1133d, 0x1133d}, {0x11350, 0x11350}, {0x1135d, 0x11361}, {0x11400, 0x11434}, {0x11447, 0x1144a}, {0x1145f, 0x11461}, {0x11480, 0x114af}, {0x114c4, 0x114c5},
  {0x114c7, 0x114c7}, {0x11580, 0x115ae}, {0x115d8, 0x115db}, {0x11600, 0x1162f}, {0x11644, 0x11644}, {0x11680, 0x116aa}, {0x116b8, 0x116b8}, {0x11700, 0x1171a},
  {0x11740, 0x11746}, {0x11800, 0x1182b}, {0x118a0, 0x118df}, {0x118ff, 0x11906}, {0x11909, 0x11909}, {0x1190c, 0x11913}, {0x11915, 0x11916}, {0x11918, 0x1192f},
  {0x1193f, 0x1193f}, {0x11941, 0x11941}, {0x119a0, 0x119a7}, {0x119aa, 0x119d0}, {0x119e1, 0x119e1}, {0x119e3, 0x119e3}, {0x11a00, 0x11a00}, {0x11a0b, 0x11a32},
  {0x11a3a, 0x11a3a}, {0x11a50, 0x11a50}, {0x11a5c, 0x11a89}, {0x11a9d, 0x11a9d}, {0x11ab0, 0x11af8}, {0x11c00, 0x11c08}, {0x11c0a, 0x11c2e}, {0x11c40, 0x11c40},
  {0x11c72, 0x11c8f}, {0x11d00, 0x11d06}, {0x11d08, 0x11d09}, {0x11d0b, 0x11d30}, {0x11d46, 0x11d46}, {0x11d60, 0x11d65}, {0x11d67, 0x11d68}, {0x11d6a, 0x11d89},
  {0x11d98, 0x11d98}, {0x11ee0, 0x11ef2}, {0x11f02, 0x11f02}, {0x11f04, 0x11f10}, {0x11f12, 0x11f33}, {0x11fb0, 0x11fb0}, {0x12000, 0x12399}, {0x12400, 0x1246e},
  {0x12480, 0x12543}, {0x12f90, 0x12ff0}, {0x13000, 0x1342f}, {0x13441, 0x13446}, {0x14400, 0x14646}, {0x16800, 0x16a38}, {0x16a40, 0x16a5e}, {0x16a70, 0x16abe},
  {0x16ad0, 0x16aed}, {0x16b00, 0x16b2f}, {0x16b40, 0x16b43}, {0x16b63, 0x16b77}, {0x16b7d, 0x16b8f}, {0x16e40, 0x16e7f}, {0x16f00, 0x16f4a}, {0x16f50, 0x16f50},
  {0x16f93, 0x16f9f}, {0x16fe0, 0x16fe1}, {0x16fe3, 0x16fe3}, {0x17000, 0x187f7}, {0x18800, 0x18cd5}, {0x18d00, 0x18d08}, {0x1aff0, 0x1aff3}, {0x1aff5, 0x1affb},
  {0x1affd, 0x1affe}, {0x1b000, 0x1b122}, {0x1b132, 0x1b132}, {0x1b150, 0x1b152}, {0x1b155, 0x1b155}, {0x1b164, 0x1b167}, {0x1b170, 0x1b2fb}, {0x1bc00, 0x1bc6a},
  {0x1bc70, 0x1bc7c}, {0x1bc80, 0x1bc88}, {0x1bc90, 0x1bc99}, {0x1d400, 0x1d454}, {0x1d456, 0x1d49c}, {0x1d49e, 0x1d49f}, {0x1d4a2, 0x1d4a2}, {0x1d4a5, 0x1d4a6},
  {0x1d4a9, 0x1d4ac}, {0x1d4ae, 0x1d4b9}, {0x1d4bb, 0x1d4bb}, {0x1d4bd, 0x1d4c3}, {0x1d4c5, 0x1d505}, {0x1d507, 0x1d50a}, {0x1d50d, 0x1d514}, {0x1d516, 0x1d51c},
  {0x1d51e, 0x1d539}, {0x1d53b, 0x1d53e}, {0x1d540, 0x1d544}, {0x1d546, 0x1d546}, {0x1d54a, 0x1d550}, {0x1d552, 0x1d6a5}, {0x1d6a8, 0x1d6c0}, {0x1d6c2, 0x1d6da},
  {0x1d6dc, 0x1d6fa}, {0x1d6fc, 0x1d714}, {0x1d716, 0x1d734}, {0x1d736, 0x1d74e}, {0x1d750, 0x1d76e}, {0x1d770, 0x1d788}, {0x1d78a, 0x1d7a8}, {0x1d7aa, 0x1d7c2},
  {0x1d7c4, 0x1d7cb}, {0x1df00, 0x1df1e}, {0x1df25, 0x1df2a}, {0x1e030, 0x1e06d}, {0x1e100, 0x1e12c}, {0x1e137, 0x1e13d}, {0x1e14e, 0x1e14e}, {0x1e290, 0x1e2ad},
  {0x1e2c0, 0x1e2eb}, {0x1e4d0, 0x1e4eb}, {0x1e7e0, 0x1e7e6}, {0x1e7e8, 0x1e7eb}, {0x1e7ed, 0x1e7ee}, {0x1e7f0, 0x1e7fe}, {0x1e800, 0x1e8c4}, {0x1e900, 0x1e943},
  {0x1e94b, 0x1e94b}, {0x1ee00, 0x1ee03}, {0x1ee05, 0x1ee1f}, {0x1ee21, 0x1ee22}, {0x1ee24, 0x1ee24}, {0x1ee27, 0x1ee27}, {0x1ee29, 0x1ee32}, {0x1ee34, 0x1ee37},
  {0x1ee39, 0x1ee39}, {0x1ee3b, 0x1ee3b}, {0x1ee42, 0x1ee42}, {0x1ee47, 0x1ee47}, {0x1ee49, 0x1ee49}, {0x1ee4b, 0x1ee4b}, {0x1ee4d, 0x1ee4f}, {0x1ee51, 0x1ee52},
  {0x1ee54, 0x1ee54}, {0x1ee57, 0x1ee57}, {0x1ee59, 0x1ee59}, {0x1ee5b, 0x1ee5b}, {0x1ee5d, 0x1ee5d}, {0x1ee5f, 0x1ee5f}, {0x1ee61, 0x1ee62}, {0x1ee64, 0x1ee64},
  {0x1ee67, 0x1ee6a}, {0x1ee6c, 0x1ee72}, {0x1ee74, 0x1ee77}, {0x1ee79, 0x1ee7c}, {0x1ee7e, 0x1ee7e}, {0x1ee80, 0x1ee89}, {0x1ee8b, 0x1ee9b}, {0x1eea1, 0x1eea3},
  {0x1eea5, 0x1eea9}, {0x1eeab, 0x1eebb}, {0x20000, 0x2a6df}, {0x2a700, 0x2b739}, {0x2b740, 0x2b81d}, {0x2b820, 0x2cea1}, {0x2ceb0, 0x2ebe0}, {0x2ebf0, 0x2ee5d},
  {0x2f800, 0x2fa1d}, {0x30000, 0x3134a}, {0x31350, 0x323af},
};

static TSCharacterRange sym_latex_function_name_character_set_2[] = {
  {'0', '9'}, {'@', 'Z'}, {'_', '_'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xb7, 0xb7}, {0xba, 0xba},
  {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x300, 0x374},
  {0x376, 0x377}, {0x37b, 0x37d}, {0x37f, 0x37f}, {0x386, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481},
  {0x483, 0x487}, {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x591, 0x5bd}, {0x5bf, 0x5bf}, {0x5c1, 0x5c2},
  {0x5c4, 0x5c5}, {0x5c7, 0x5c7}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x610, 0x61a}, {0x620, 0x669}, {0x66e, 0x6d3}, {0x6d5, 0x6dc},
  {0x6df, 0x6e8}, {0x6ea, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x74a}, {0x74d, 0x7b1}, {0x7c0, 0x7f5}, {0x7fa, 0x7fa}, {0x7fd, 0x7fd},
  {0x800, 0x82d}, {0x840, 0x85b}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x898, 0x8e1}, {0x8e3, 0x963}, {0x966, 0x96f},
  {0x971, 0x983}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bc, 0x9c4},
  {0x9c7, 0x9c8}, {0x9cb, 0x9ce}, {0x9d7, 0x9d7}, {0x9dc, 0x9dd}, {0x9df, 0x9e3}, {0x9e6, 0x9f1}, {0x9fc, 0x9fc}, {0x9fe, 0x9fe},
  {0xa01, 0xa03}, {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39},
  {0xa3c, 0xa3c}, {0xa3e, 0xa42}, {0xa47, 0xa48}, {0xa4b, 0xa4d}, {0xa51, 0xa51}, {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa66, 0xa75},
  {0xa81, 0xa83}, {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabc, 0xac5},
  {0xac7, 0xac9}, {0xacb, 0xacd}, {0xad0, 0xad0}, {0xae0, 0xae3}, {0xae6, 0xaef}, {0xaf9, 0xaff}, {0xb01, 0xb03}, {0xb05, 0xb0c},
  {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3c, 0xb44}, {0xb47, 0xb48}, {0xb4b, 0xb4d},
  {0xb55, 0xb57}, {0xb5c, 0xb5d}, {0xb5f, 0xb63}, {0xb66, 0xb6f}, {0xb71, 0xb71}, {0xb82, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90},
  {0xb92, 0xb95}, {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbbe, 0xbc2},
  {0xbc6, 0xbc8}, {0xbca, 0xbcd}, {0xbd0, 0xbd0}, {0xbd7, 0xbd7}, {0xbe6, 0xbef}, {0xc00, 0xc0c}, {0xc0e, 0xc10}, {0xc12, 0xc28},
  {0xc2a, 0xc39}, {0xc3c, 0xc44}, {0xc46, 0xc48}, {0xc4a, 0xc4d}, {0xc55, 0xc56}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc63},
  {0xc66, 0xc6f}, {0xc80, 0xc83}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbc, 0xcc4},
  {0xcc6, 0xcc8}, {0xcca, 0xccd}, {0xcd5, 0xcd6}, {0xcdd, 0xcde}, {0xce0, 0xce3}, {0xce6, 0xcef}, {0xcf1, 0xcf3}, {0xd00, 0xd0c},
  {0xd0e, 0xd10}, {0xd12, 0xd44}, {0xd46, 0xd48}, {0xd4a, 0xd4e}, {0xd54, 0xd57}, {0xd5f, 0xd63}, {0xd66, 0xd6f}, {0xd7a, 0xd7f},
  {0xd81, 0xd83}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xdca, 0xdca}, {0xdcf, 0xdd4},
  {0xdd6, 0xdd6}, {0xdd8, 0xddf}, {0xde6, 0xdef}, {0xdf2, 0xdf3}, {0xe01, 0xe3a}, {0xe40, 0xe4e}, {0xe50, 0xe59}, {0xe81, 0xe82},
  {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xec8, 0xece},
  {0xed0, 0xed9}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf18, 0xf19}, {0xf20, 0xf29}, {0xf35, 0xf35}, {0xf37, 0xf37}, {0xf39, 0xf39},
  {0xf3e, 0xf47}, {0xf49, 0xf6c}, {0xf71, 0xf84}, {0xf86, 0xf97}, {0xf99, 0xfbc}, {0xfc6, 0xfc6}, {0x1000, 0x1049}, {0x1050, 0x109d},
  {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d}, {0x1250, 0x1256}, {0x1258, 0x1258},
  {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be}, {0x12c0, 0x12c0}, {0x12c2, 0x12c5},
  {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x135d, 0x135f}, {0x1369, 0x1371}, {0x1380, 0x138f}, {0x13a0, 0x13f5},
  {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16ee, 0x16f8}, {0x1700, 0x1715}, {0x171f, 0x1734},
  {0x1740, 0x1753}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1772, 0x1773}, {0x1780, 0x17d3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dd}, {0x17e0, 0x17e9},
  {0x180b, 0x180d}, {0x180f, 0x1819}, {0x1820, 0x1878}, {0x1880, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1920, 0x192b}, {0x1930, 0x193b},
  {0x1946, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x19d0, 0x19da}, {0x1a00, 0x1a1b}, {0x1a20, 0x1a5e}, {0x1a60, 0x1a7c},
  {0x1a7f, 0x1a89}, {0x1a90, 0x1a99}, {0x1aa7, 0x1aa7}, {0x1ab0, 0x1abd}, {0x1abf, 0x1ace}, {0x1b00, 0x1b4c}, {0x1b50, 0x1b59}, {0x1b6b, 0x1b73},
  {0x1b80, 0x1bf3}, {0x1c00, 0x1c37}, {0x1c40, 0x1c49}, {0x1c4d, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1cd0, 0x1cd2},
  {0x1cd4, 0x1cfa}, {0x1d00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b},
  {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3},
  {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x200c, 0x200d}, {0x203f, 0x2040}, {0x2054, 0x2054}, {0x2071, 0x2071},
  {0x207f, 0x207f}, {0x2090, 0x209c}, {0x20d0, 0x20dc}, {0x20e1, 0x20e1}, {0x20e5, 0x20f0}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113},
  {0x2115, 0x2115}, {0x2118, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149},
  {0x214e, 0x214e}, {0x2160, 0x2188}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cf3}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67},
  {0x2d6f, 0x2d6f}, {0x2d7f, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce},
  {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2de0, 0x2dff}, {0x3005, 0x3007}, {0x3021, 0x302f}, {0x3031, 0x3035}, {0x3038, 0x303c}, {0x3041, 0x3096},
  {0x3099, 0x309a}, {0x309d, 0x309f}, {0x30a1, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x4dbf},
  {0x4e00, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa62b}, {0xa640, 0xa66f}, {0xa674, 0xa67d}, {0xa67f, 0xa6f1}, {0xa717, 0xa71f},
  {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa827}, {0xa82c, 0xa82c}, {0xa840, 0xa873},
  {0xa880, 0xa8c5}, {0xa8d0, 0xa8d9}, {0xa8e0, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa92d}, {0xa930, 0xa953}, {0xa960, 0xa97c}, {0xa980, 0xa9c0},
  {0xa9cf, 0xa9d9}, {0xa9e0, 0xa9fe}, {0xaa00, 0xaa36}, {0xaa40, 0xaa4d}, {0xaa50, 0xaa59}, {0xaa60, 0xaa76}, {0xaa7a, 0xaac2}, {0xaadb, 0xaadd},
  {0xaae0, 0xaaef}, {0xaaf2, 0xaaf6}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a},
  {0xab5c, 0xab69}, {0xab70, 0xabea}, {0xabec, 0xabed}, {0xabf0, 0xabf9}, {0xac00, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d},
  {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41},
  {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfc5d}, {0xfc64, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdf9}, {0xfe00, 0xfe0f},
  {0xfe20, 0xfe2f}, {0xfe33, 0xfe34}, {0xfe4d, 0xfe4f}, {0xfe71, 0xfe71}, {0xfe73, 0xfe73}, {0xfe77, 0xfe77}, {0xfe79, 0xfe79}, {0xfe7b, 0xfe7b},
  {0xfe7d, 0xfe7d}, {0xfe7f, 0xfefc}, {0xff10, 0xff19}, {0xff21, 0xff3a}, {0xff3f, 0xff3f}, {0xff41, 0xff5a}, {0xff65, 0xffbe}, {0xffc2, 0xffc7},
  {0xffca, 0xffcf}, {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d},
  {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10140, 0x10174}, {0x101fd, 0x101fd}, {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x102e0, 0x102e0}, {0x10300, 0x1031f},
  {0x1032d, 0x1034a}, {0x10350, 0x1037a}, {0x10380, 0x1039d}, {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x103d1, 0x103d5}, {0x10400, 0x1049d}, {0x104a0, 0x104a9},
  {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595},
  {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785},
  {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855},
  {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915}, {0x10920, 0x10939}, {0x10980, 0x109b7}, {0x109be, 0x109bf},
  {0x10a00, 0x10a03}, {0x10a05, 0x10a06}, {0x10a0c, 0x10a13}, {0x10a15, 0x10a17}, {0x10a19, 0x10a35}, {0x10a38, 0x10a3a}, {0x10a3f, 0x10a3f}, {0x10a60, 0x10a7c},
  {0x10a80, 0x10a9c}, {0x10ac0, 0x10ac7}, {0x10ac9, 0x10ae6}, {0x10b00, 0x10b35}, {0x10b40, 0x10b55}, {0x10b60, 0x10b72}, {0x10b80, 0x10b91}, {0x10c00, 0x10c48},
  {0x10c80, 0x10cb2}, {0x10cc0, 0x10cf2}, {0x10d00, 0x10d27}, {0x10d30, 0x10d39}, {0x10e80, 0x10ea9}, {0x10eab, 0x10eac}, {0x10eb0, 0x10eb1}, {0x10efd, 0x10f1c},
  {0x10f27, 0x10f27}, {0x10f30, 0x10f50}, {0x10f70, 0x10f85}, {0x10fb0, 0x10fc4}, {0x10fe0, 0x10ff6}, {0x11000, 0x11046}, {0x11066, 0x11075}, {0x1107f, 0x110ba},
  {0x110c2, 0x110c2}, {0x110d0, 0x110e8}, {0x110f0, 0x110f9}, {0x11100, 0x11134}, {0x11136, 0x1113f}, {0x11144, 0x11147}, {0x11150, 0x11173}, {0x11176, 0x11176},
  {0x11180, 0x111c4}, {0x111c9, 0x111cc}, {0x111ce, 0x111da}, {0x111dc, 0x111dc}, {0x11200, 0x11211}, {0x11213, 0x11237}, {0x1123e, 0x11241}, {0x11280, 0x11286},
  {0x11288, 0x11288}, {0x1128a, 0x1128d}, {0x1128f, 0x1129d}, {0x1129f, 0x112a8}, {0x112b0, 0x112ea}, {0x112f0, 0x112f9}, {0x11300, 0x11303}, {0x11305, 0x1130c},
  {0x1130f, 0x11310}, {0x11313, 0x11328}, {0x1132a, 0x11330}, {0x11332, 0x11333}, {0x11335, 0x11339}, {0x1133b, 0x11344}, {0x11347, 0x11348}, {0x1134b, 0x1134d},
  {0x11350, 0x11350}, {0x11357, 0x11357}, {0x1135d, 0x11363}, {0x11366, 0x1136c}, {0x11370, 0x11374}, {0x11400, 0x1144a}, {0x11450, 0x11459}, {0x1145e, 0x11461},
  {0x11480, 0x114c5}, {0x114c7, 0x114c7}, {0x114d0, 0x114d9}, {0x11580, 0x115b5}, {0x115b8, 0x115c0}, {0x115d8, 0x115dd}, {0x11600, 0x11640}, {0x11644, 0x11644},
  {0x11650, 0x11659}, {0x11680, 0x116b8}, {0x116c0, 0x116c9}, {0x11700, 0x1171a}, {0x1171d, 0x1172b}, {0x11730, 0x11739}, {0x11740, 0x11746}, {0x11800, 0x1183a},
  {0x118a0, 0x118e9}, {0x118ff, 0x11906}, {0x11909, 0x11909}, {0x1190c, 0x11913}, {0x11915, 0x11916}, {0x11918, 0x11935}, {0x11937, 0x11938}, {0x1193b, 0x11943},
  {0x11950, 0x11959}, {0x119a0, 0x119a7}, {0x119aa, 0x119d7}, {0x119da, 0x119e1}, {0x119e3, 0x119e4}, {0x11a00, 0x11a3e}, {0x11a47, 0x11a47}, {0x11a50, 0x11a99},
  {0x11a9d, 0x11a9d}, {0x11ab0, 0x11af8}, {0x11c00, 0x11c08}, {0x11c0a, 0x11c36}, {0x11c38, 0x11c40}, {0x11c50, 0x11c59}, {0x11c72, 0x11c8f}, {0x11c92, 0x11ca7},
  {0x11ca9, 0x11cb6}, {0x11d00, 0x11d06}, {0x11d08, 0x11d09}, {0x11d0b, 0x11d36}, {0x11d3a, 0x11d3a}, {0x11d3c, 0x11d3d}, {0x11d3f, 0x11d47}, {0x11d50, 0x11d59},
  {0x11d60, 0x11d65}, {0x11d67, 0x11d68}, {0x11d6a, 0x11d8e}, {0x11d90, 0x11d91}, {0x11d93, 0x11d98}, {0x11da0, 0x11da9}, {0x11ee0, 0x11ef6}, {0x11f00, 0x11f10},
  {0x11f12, 0x11f3a}, {0x11f3e, 0x11f42}, {0x11f50, 0x11f59}, {0x11fb0, 0x11fb0}, {0x12000, 0x12399}, {0x12400, 0x1246e}, {0x12480, 0x12543}, {0x12f90, 0x12ff0},
  {0x13000, 0x1342f}, {0x13440, 0x13455}, {0x14400, 0x14646}, {0x16800, 0x16a38}, {0x16a40, 0x16a5e}, {0x16a60, 0x16a69}, {0x16a70, 0x16abe}, {0x16ac0, 0x16ac9},
  {0x16ad0, 0x16aed}, {0x16af0, 0x16af4}, {0x16b00, 0x16b36}, {0x16b40, 0x16b43}, {0x16b50, 0x16b59}, {0x16b63, 0x16b77}, {0x16b7d, 0x16b8f}, {0x16e40, 0x16e7f},
  {0x16f00, 0x16f4a}, {0x16f4f, 0x16f87}, {0x16f8f, 0x16f9f}, {0x16fe0, 0x16fe1}, {0x16fe3, 0x16fe4}, {0x16ff0, 0x16ff1}, {0x17000, 0x187f7}, {0x18800, 0x18cd5},
  {0x18d00, 0x18d08}, {0x1aff0, 0x1aff3}, {0x1aff5, 0x1affb}, {0x1affd, 0x1affe}, {0x1b000, 0x1b122}, {0x1b132, 0x1b132}, {0x1b150, 0x1b152}, {0x1b155, 0x1b155},
  {0x1b164, 0x1b167}, {0x1b170, 0x1b2fb}, {0x1bc00, 0x1bc6a}, {0x1bc70, 0x1bc7c}, {0x1bc80, 0x1bc88}, {0x1bc90, 0x1bc99}, {0x1bc9d, 0x1bc9e}, {0x1cf00, 0x1cf2d},
  {0x1cf30, 0x1cf46}, {0x1d165, 0x1d169}, {0x1d16d, 0x1d172}, {0x1d17b, 0x1d182}, {0x1d185, 0x1d18b}, {0x1d1aa, 0x1d1ad}, {0x1d242, 0x1d244}, {0x1d400, 0x1d454},
  {0x1d456, 0x1d49c}, {0x1d49e, 0x1d49f}, {0x1d4a2, 0x1d4a2}, {0x1d4a5, 0x1d4a6}, {0x1d4a9, 0x1d4ac}, {0x1d4ae, 0x1d4b9}, {0x1d4bb, 0x1d4bb}, {0x1d4bd, 0x1d4c3},
  {0x1d4c5, 0x1d505}, {0x1d507, 0x1d50a}, {0x1d50d, 0x1d514}, {0x1d516, 0x1d51c}, {0x1d51e, 0x1d539}, {0x1d53b, 0x1d53e}, {0x1d540, 0x1d544}, {0x1d546, 0x1d546},
  {0x1d54a, 0x1d550}, {0x1d552, 0x1d6a5}, {0x1d6a8, 0x1d6c0}, {0x1d6c2, 0x1d6da}, {0x1d6dc, 0x1d6fa}, {0x1d6fc, 0x1d714}, {0x1d716, 0x1d734}, {0x1d736, 0x1d74e},
  {0x1d750, 0x1d76e}, {0x1d770, 0x1d788}, {0x1d78a, 0x1d7a8}, {0x1d7aa, 0x1d7c2}, {0x1d7c4, 0x1d7cb}, {0x1d7ce, 0x1d7ff}, {0x1da00, 0x1da36}, {0x1da3b, 0x1da6c},
  {0x1da75, 0x1da75}, {0x1da84, 0x1da84}, {0x1da9b, 0x1da9f}, {0x1daa1, 0x1daaf}, {0x1df00, 0x1df1e}, {0x1df25, 0x1df2a}, {0x1e000, 0x1e006}, {0x1e008, 0x1e018},
  {0x1e01b, 0x1e021}, {0x1e023, 0x1e024}, {0x1e026, 0x1e02a}, {0x1e030, 0x1e06d}, {0x1e08f, 0x1e08f}, {0x1e100, 0x1e12c}, {0x1e130, 0x1e13d}, {0x1e140, 0x1e149},
  {0x1e14e, 0x1e14e}, {0x1e290, 0x1e2ae}, {0x1e2c0, 0x1e2f9}, {0x1e4d0, 0x1e4f9}, {0x1e7e0, 0x1e7e6}, {0x1e7e8, 0x1e7eb}, {0x1e7ed, 0x1e7ee}, {0x1e7f0, 0x1e7fe},
  {0x1e800, 0x1e8c4}, {0x1e8d0, 0x1e8d6}, {0x1e900, 0x1e94b}, {0x1e950, 0x1e959}, {0x1ee00, 0x1ee03}, {0x1ee05, 0x1ee1f}, {0x1ee21, 0x1ee22}, {0x1ee24, 0x1ee24},
  {0x1ee27, 0x1ee27}, {0x1ee29, 0x1ee32}, {0x1ee34, 0x1ee37}, {0x1ee39, 0x1ee39}, {0x1ee3b, 0x1ee3b}, {0x1ee42, 0x1ee42}, {0x1ee47, 0x1ee47}, {0x1ee49, 0x1ee49},
  {0x1ee4b, 0x1ee4b}, {0x1ee4d, 0x1ee4f}, {0x1ee51, 0x1ee52}, {0x1ee54, 0x1ee54}, {0x1ee57, 0x1ee57}, {0x1ee59, 0x1ee59}, {0x1ee5b, 0x1ee5b}, {0x1ee5d, 0x1ee5d},
  {0x1ee5f, 0x1ee5f}, {0x1ee61, 0x1ee62}, {0x1ee64, 0x1ee64}, {0x1ee67, 0x1ee6a}, {0x1ee6c, 0x1ee72}, {0x1ee74, 0x1ee77}, {0x1ee79, 0x1ee7c}, {0x1ee7e, 0x1ee7e},
  {0x1ee80, 0x1ee89}, {0x1ee8b, 0x1ee9b}, {0x1eea1, 0x1eea3}, {0x1eea5, 0x1eea9}, {0x1eeab, 0x1eebb}, {0x1fbf0, 0x1fbf9}, {0x20000, 0x2a6df}, {0x2a700, 0x2b739},
  {0x2b740, 0x2b81d}, {0x2b820, 0x2cea1}, {0x2ceb0, 0x2ebe0}, {0x2ebf0, 0x2ee5d}, {0x2f800, 0x2fa1d}, {0x30000, 0x3134a}, {0x31350, 0x323af}, {0xe0100, 0xe01ef},
};

static TSCharacterRange sym_filepath_character_set_1[] = {
  {'/', '/'}, {'@', 'Z'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba}, {0xc0, 0xd6}, {0xd8, 0xf6},
  {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374}, {0x376, 0x377}, {0x37a, 0x37d},
  {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481}, {0x48a, 0x52f},
  {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a}, {0x66e, 0x66f}, {0x671, 0x6d3},
  {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710}, {0x712, 0x72f}, {0x74d, 0x7a5},
  {0x7b1, 0x7b1}, {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a}, {0x824, 0x824}, {0x828, 0x828},
  {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939}, {0x93d, 0x93d}, {0x950, 0x950},
  {0x958, 0x961}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9},
  {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc}, {0xa05, 0xa0a}, {0xa0f, 0xa10},
  {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa72, 0xa74},
  {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd}, {0xad0, 0xad0},
  {0xae0, 0xae1}, {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39},
  {0xb3d, 0xb3d}, {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95},
  {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0}, {0xc05, 0xc0c},
  {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc61}, {0xc80, 0xc80},
  {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd}, {0xcdd, 0xcde}, {0xce0, 0xce1},
  {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e}, {0xd54, 0xd56}, {0xd5f, 0xd61},
  {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xe01, 0xe30}, {0xe32, 0xe33},
  {0xe40, 0xe46}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0}, {0xeb2, 0xeb3},
  {0xebd, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47}, {0xf49, 0xf6c}, {0xf88, 0xf8c},
  {0x1000, 0x102a}, {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066}, {0x106e, 0x1070}, {0x1075, 0x1081},
  {0x108e, 0x108e}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d}, {0x1250, 0x1256},
  {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be}, {0x12c0, 0x12c0},
  {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f}, {0x13a0, 0x13f5}, {0x13f8, 0x13fd},
  {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16f1, 0x16f8}, {0x1700, 0x1711}, {0x171f, 0x1731}, {0x1740, 0x1751},
  {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878}, {0x1880, 0x1884}, {0x1887, 0x18a8},
  {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x1a00, 0x1a16},
  {0x1a20, 0x1a54}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0}, {0x1bae, 0x1baf}, {0x1bba, 0x1be5}, {0x1c00, 0x1c23},
  {0x1c4d, 0x1c4f}, {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6},
  {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59},
  {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc},
  {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071}, {0x207f, 0x207f}, {0x2090, 0x209c},
  {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128},
  {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2183, 0x2184}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee},
  {0x2cf2, 0x2cf3}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6},
  {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f},
  {0x3005, 0x3006}, {0x3031, 0x3035}, {0x303b, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f},
  {0x3131, 0x318e}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00}, {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd},
  {0xa500, 0xa60c}, {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d}, {0xa6a0, 0xa6e5}, {0xa717, 0xa71f}, {0xa722, 0xa788},
  {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801}, {0xa803, 0xa805}, {0xa807, 0xa80a}, {0xa80c, 0xa822},
  {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa90a, 0xa925}, {0xa930, 0xa946}, {0xa960, 0xa97c},
  {0xa984, 0xa9b2}, {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe}, {0xaa00, 0xaa28}, {0xaa40, 0xaa42}, {0xaa44, 0xaa4b},
  {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2},
  {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e},
  {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d},
  {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e},
  {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74},
  {0xfe76, 0xfefc}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7}, {0xffda, 0xffdc},
  {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10280, 0x1029c},
  {0x102a0, 0x102d0}, {0x10300, 0x1031f}, {0x1032d, 0x10340}, {0x10342, 0x10349}, {0x10350, 0x10375}, {0x10380, 0x1039d}, {0x103a0, 0x103c3}, {0x103c8, 0x103cf},
  {0x10400, 0x1049d}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592},
  {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767},
  {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c},
  {0x1083f, 0x10855}, {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915},
};

static TSCharacterRange sym_word_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', '"'}, {'\'', '\''}, {'.', '.'}, {'0', '<'}, {'>', 'Z'}, {'`', 'z'},
  {'|', '|'}, {'~', 0x10ffff},
};

static TSCharacterRange sym_letter_character_set_1[] = {
  {'A', 'Z'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba}, {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1},
  {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374}, {0x376, 0x377}, {0x37a, 0x37d}, {0x37f, 0x37f},
  {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481}, {0x48a, 0x52f}, {0x531, 0x556},
  {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a}, {0x66e, 0x66f}, {0x671, 0x6d3}, {0x6d5, 0x6d5},
  {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710}, {0x712, 0x72f}, {0x74d, 0x7a5}, {0x7b1, 0x7b1},
  {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a}, {0x824, 0x824}, {0x828, 0x828}, {0x840, 0x858},
  {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939}, {0x93d, 0x93d}, {0x950, 0x950}, {0x958, 0x961},
  {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bd, 0x9bd},
  {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc}, {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28},
  {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa72, 0xa74}, {0xa85, 0xa8d},
  {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd}, {0xad0, 0xad0}, {0xae0, 0xae1},
  {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3d, 0xb3d},
  {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95}, {0xb99, 0xb9a},
  {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0}, {0xc05, 0xc0c}, {0xc0e, 0xc10},
  {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc61}, {0xc80, 0xc80}, {0xc85, 0xc8c},
  {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd}, {0xcdd, 0xcde}, {0xce0, 0xce1}, {0xcf1, 0xcf2},
  {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e}, {0xd54, 0xd56}, {0xd5f, 0xd61}, {0xd7a, 0xd7f},
  {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xe01, 0xe30}, {0xe32, 0xe33}, {0xe40, 0xe46},
  {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0}, {0xeb2, 0xeb3}, {0xebd, 0xebd},
  {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47}, {0xf49, 0xf6c}, {0xf88, 0xf8c}, {0x1000, 0x102a},
  {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066}, {0x106e, 0x1070}, {0x1075, 0x1081}, {0x108e, 0x108e},
  {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d}, {0x1250, 0x1256}, {0x1258, 0x1258},
  {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be}, {0x12c0, 0x12c0}, {0x12c2, 0x12c5},
  {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f}, {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c},
  {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16f1, 0x16f8}, {0x1700, 0x1711}, {0x171f, 0x1731}, {0x1740, 0x1751}, {0x1760, 0x176c},
  {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878}, {0x1880, 0x1884}, {0x1887, 0x18a8}, {0x18aa, 0x18aa},
  {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x1a00, 0x1a16}, {0x1a20, 0x1a54},
  {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0}, {0x1bae, 0x1baf}, {0x1bba, 0x1be5}, {0x1c00, 0x1c23}, {0x1c4d, 0x1c4f},
  {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa},
  {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b},
  {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3},
  {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071}, {0x207f, 0x207f}, {0x2090, 0x209c}, {0x2102, 0x2102},
  {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x212d},
  {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2183, 0x2184}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3},
  {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae},
  {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f}, {0x3005, 0x3006},
  {0x3031, 0x3035}, {0x303b, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e},
  {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00}, {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c},
  {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d}, {0xa6a0, 0xa6e5}, {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca},
  {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801}, {0xa803, 0xa805}, {0xa807, 0xa80a}, {0xa80c, 0xa822}, {0xa840, 0xa873},
  {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa90a, 0xa925}, {0xa930, 0xa946}, {0xa960, 0xa97c}, {0xa984, 0xa9b2},
  {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe}, {0xaa00, 0xaa28}, {0xaa40, 0xaa42}, {0xaa44, 0xaa4b}, {0xaa60, 0xaa76},
  {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd},
  {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a},
  {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9},
  {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41},
  {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74}, {0xfe76, 0xfefc},
  {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b},
  {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10280, 0x1029c}, {0x102a0, 0x102d0},
  {0x10300, 0x1031f}, {0x1032d, 0x10340}, {0x10342, 0x10349}, {0x10350, 0x10375}, {0x10380, 0x1039d}, {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x10400, 0x1049d},
  {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595},
  {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785},
  {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855},
  {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      ADVANCE_MAP(
        '!', 166,
        '$', 32,
        '%', 16,
        '&', 174,
        '\'', 172,
        '(', 24,
        ')', 25,
        '*', 160,
        '+', 158,
        ',', 21,
        '-', 159,
        '/', 161,
        ':', 170,
        '<', 162,
        '>', 164,
        '[', 44,
        '\\', 29,
        ']', 48,
        '{', 20,
        '|', 168,
        '}', 23,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (set_contains(sym_letter_character_set_1, 429, lookahead)) ADVANCE(177);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '%') ADVANCE(16);
      if (lookahead == '}') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '%') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(31);
      if (lookahead == '%') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(16);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '}') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (set_contains(sym_filepath_character_set_1, 430, lookahead)) ADVANCE(49);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (set_contains(sym_letter_character_set_1, 429, lookahead)) ADVANCE(177);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (set_contains(sym_latex_function_name_character_set_1, 667, lookahead)) ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(179);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(40);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == ',') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead == '%') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(37);
      END_STATE();
    case 13:
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '}') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == '%') ADVANCE(43);
      if (lookahead == ')') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == '%') ADVANCE(47);
      if (lookahead == ']') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '-') ADVANCE(178);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      ADVANCE_MAP(
        '!', 167,
        '$', 32,
        '%', 16,
        '&', 174,
        '\'', 173,
        '(', 24,
        ')', 25,
        '*', 160,
        '+', 158,
        ',', 21,
        '-', 159,
        '/', 161,
        ':', 171,
        '<', 163,
        '>', 165,
        '\\', 29,
        'b', 86,
        'd', 120,
        'e', 115,
        'g', 91,
        'i', 113,
        'l', 141,
        'm', 72,
        'n', 122,
        's', 147,
        'u', 138,
        '|', 169,
        '}', 23,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (lookahead != 0 &&
          (lookahead < '#' || '-' < lookahead) &&
          (lookahead < '<' || '>' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(157);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_useenv_decl_token1);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_useenv_decl_token1);
      if (lookahead == '%') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(26);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_useenv_decl_token1);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '-') ADVANCE(178);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_latex_function_name);
      if (set_contains(sym_latex_function_name_character_set_2, 776, lookahead)) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(36);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_inline_math_token1);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_inline_math_token1);
      if (lookahead == '%') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%') ADVANCE(33);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_inline_math_token1);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '-') ADVANCE(178);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_options_token1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_options_token1);
      if (lookahead == '%') ADVANCE(40);
      if (lookahead == ')') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(37);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_options_token1);
      if (lookahead == '%') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(37);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_options_token1);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '-') ADVANCE(178);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_mandantory_arg_token1);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_mandantory_arg_token1);
      if (lookahead == '%') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(41);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_mandantory_arg_token1);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '-') ADVANCE(178);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_optional_arg_token1);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_optional_arg_token1);
      if (lookahead == '%') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_optional_arg_token1);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '-') ADVANCE(178);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_filepath);
      if (set_contains(sym_filepath_character_set_1, 430, lookahead)) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_class_pkg_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_env_name);
      if (lookahead == '*') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_env_name);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_KEYWORD_docclass);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_KEYWORD_importpkg);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_KEYWORD_importmod);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_KEYWORD_importfile);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_KEYWORD_importves);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_KEYWORD_useltx3);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_KEYWORD_getfp);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_KEYWORD_startdoc);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_KEYWORD_useenv);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_KEYWORD_begenv);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_KEYWORD_endenv);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_KEYWORD_makeatletter);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_KEYWORD_makeatother);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_KEYWORD_ltx3on);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_KEYWORD_ltx3off);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_KEYWORD_nonstopmode);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_KEYWORD_luacode);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '3') ADVANCE(58);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '3') ADVANCE(121);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(109);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(134);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(140);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(80);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(144);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(110);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(60);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(77);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(126);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(55);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(95);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(88);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(90);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(125);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(105);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(97);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(69);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(56);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(68);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(142);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(132);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(116);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(133);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(118);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(76);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'l') ADVANCE(151);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(137);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(149);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(108);
      if (lookahead == 'v') ADVANCE(98);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(67);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(129);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(66);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(54);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(93);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(92);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(111);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'k') ADVANCE(104);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'k') ADVANCE(96);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(74);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(89);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(145);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(131);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(128);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(82);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(152);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(139);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(153);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(154);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(79);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(103);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(117);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(81);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(130);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(78);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(83);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(135);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(84);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(59);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(114);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(127);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(65);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(64);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(146);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(143);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(53);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(57);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(87);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(148);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(136);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(155);
      if (lookahead == 'u') ADVANCE(75);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(102);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(100);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(112);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(106);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(85);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(73);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(124);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(150);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(94);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(156);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'v') ADVANCE(62);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'v') ADVANCE(63);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'v') ADVANCE(61);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'x') ADVANCE(71);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'x') ADVANCE(70);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_word);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LT);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_GT);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_BANG);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_COLON);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if ((!eof && set_contains(sym_word_character_set_1, 10, lookahead))) ADVANCE(157);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_delimiter);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_digit);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_ascii_letter);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_letter);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_multiline_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 18},
  [2] = {.lex_state = 18},
  [3] = {.lex_state = 18},
  [4] = {.lex_state = 18},
  [5] = {.lex_state = 18},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 18},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 18},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 18},
  [24] = {.lex_state = 18},
  [25] = {.lex_state = 18},
  [26] = {.lex_state = 18},
  [27] = {.lex_state = 18},
  [28] = {.lex_state = 18},
  [29] = {.lex_state = 18},
  [30] = {.lex_state = 18},
  [31] = {.lex_state = 18},
  [32] = {.lex_state = 18},
  [33] = {.lex_state = 18},
  [34] = {.lex_state = 18},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 13},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 15},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 13},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 14},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 15},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 13},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 15},
  [72] = {.lex_state = 13},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 12},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 12},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 13},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_delimiter] = ACTIONS(1),
    [sym_digit] = ACTIONS(1),
    [sym_ascii_letter] = ACTIONS(1),
    [sym_letter] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_vesti_content] = STATE(98),
    [sym_statement] = STATE(2),
    [sym_docclass_decl] = STATE(34),
    [sym_singlepkg_decl] = STATE(34),
    [sym_multipkg_decl] = STATE(34),
    [sym_importmod_decl] = STATE(34),
    [sym_importfile_decl] = STATE(34),
    [sym_importves_decl] = STATE(34),
    [sym_getfp_decl] = STATE(34),
    [sym_useenv_decl] = STATE(34),
    [sym_begenv_decl] = STATE(34),
    [sym_endenv_decl] = STATE(34),
    [sym_luacode] = STATE(34),
    [sym_latex_function] = STATE(34),
    [sym_inline_math] = STATE(34),
    [sym_display_math] = STATE(34),
    [sym__text_content] = STATE(34),
    [sym_text] = STATE(34),
    [sym_operator] = STATE(18),
    [aux_sym_vesti_content_repeat1] = STATE(2),
    [aux_sym_text_repeat1] = STATE(5),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(5),
    [anon_sym_BSLASH] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(11),
    [sym_KEYWORD_docclass] = ACTIONS(13),
    [sym_KEYWORD_importpkg] = ACTIONS(15),
    [sym_KEYWORD_importmod] = ACTIONS(17),
    [sym_KEYWORD_importfile] = ACTIONS(19),
    [sym_KEYWORD_importves] = ACTIONS(21),
    [sym_KEYWORD_useltx3] = ACTIONS(23),
    [sym_KEYWORD_getfp] = ACTIONS(25),
    [sym_KEYWORD_startdoc] = ACTIONS(23),
    [sym_KEYWORD_useenv] = ACTIONS(27),
    [sym_KEYWORD_begenv] = ACTIONS(29),
    [sym_KEYWORD_endenv] = ACTIONS(31),
    [sym_KEYWORD_makeatletter] = ACTIONS(23),
    [sym_KEYWORD_makeatother] = ACTIONS(23),
    [sym_KEYWORD_ltx3on] = ACTIONS(23),
    [sym_KEYWORD_ltx3off] = ACTIONS(23),
    [sym_KEYWORD_nonstopmode] = ACTIONS(23),
    [sym_KEYWORD_luacode] = ACTIONS(33),
    [sym_word] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_BANG] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [sym_delimiter] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_statement] = STATE(3),
    [sym_docclass_decl] = STATE(34),
    [sym_singlepkg_decl] = STATE(34),
    [sym_multipkg_decl] = STATE(34),
    [sym_importmod_decl] = STATE(34),
    [sym_importfile_decl] = STATE(34),
    [sym_importves_decl] = STATE(34),
    [sym_getfp_decl] = STATE(34),
    [sym_useenv_decl] = STATE(34),
    [sym_begenv_decl] = STATE(34),
    [sym_endenv_decl] = STATE(34),
    [sym_luacode] = STATE(34),
    [sym_latex_function] = STATE(34),
    [sym_inline_math] = STATE(34),
    [sym_display_math] = STATE(34),
    [sym__text_content] = STATE(34),
    [sym_text] = STATE(34),
    [sym_operator] = STATE(18),
    [aux_sym_vesti_content_repeat1] = STATE(3),
    [aux_sym_text_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(5),
    [anon_sym_BSLASH] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(11),
    [sym_KEYWORD_docclass] = ACTIONS(13),
    [sym_KEYWORD_importpkg] = ACTIONS(15),
    [sym_KEYWORD_importmod] = ACTIONS(17),
    [sym_KEYWORD_importfile] = ACTIONS(19),
    [sym_KEYWORD_importves] = ACTIONS(21),
    [sym_KEYWORD_useltx3] = ACTIONS(23),
    [sym_KEYWORD_getfp] = ACTIONS(25),
    [sym_KEYWORD_startdoc] = ACTIONS(23),
    [sym_KEYWORD_useenv] = ACTIONS(27),
    [sym_KEYWORD_begenv] = ACTIONS(29),
    [sym_KEYWORD_endenv] = ACTIONS(31),
    [sym_KEYWORD_makeatletter] = ACTIONS(23),
    [sym_KEYWORD_makeatother] = ACTIONS(23),
    [sym_KEYWORD_ltx3on] = ACTIONS(23),
    [sym_KEYWORD_ltx3off] = ACTIONS(23),
    [sym_KEYWORD_nonstopmode] = ACTIONS(23),
    [sym_KEYWORD_luacode] = ACTIONS(33),
    [sym_word] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_BANG] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [sym_delimiter] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_statement] = STATE(3),
    [sym_docclass_decl] = STATE(34),
    [sym_singlepkg_decl] = STATE(34),
    [sym_multipkg_decl] = STATE(34),
    [sym_importmod_decl] = STATE(34),
    [sym_importfile_decl] = STATE(34),
    [sym_importves_decl] = STATE(34),
    [sym_getfp_decl] = STATE(34),
    [sym_useenv_decl] = STATE(34),
    [sym_begenv_decl] = STATE(34),
    [sym_endenv_decl] = STATE(34),
    [sym_luacode] = STATE(34),
    [sym_latex_function] = STATE(34),
    [sym_inline_math] = STATE(34),
    [sym_display_math] = STATE(34),
    [sym__text_content] = STATE(34),
    [sym_text] = STATE(34),
    [sym_operator] = STATE(18),
    [aux_sym_vesti_content_repeat1] = STATE(3),
    [aux_sym_text_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(50),
    [anon_sym_DOLLAR] = ACTIONS(53),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(56),
    [sym_KEYWORD_docclass] = ACTIONS(59),
    [sym_KEYWORD_importpkg] = ACTIONS(62),
    [sym_KEYWORD_importmod] = ACTIONS(65),
    [sym_KEYWORD_importfile] = ACTIONS(68),
    [sym_KEYWORD_importves] = ACTIONS(71),
    [sym_KEYWORD_useltx3] = ACTIONS(74),
    [sym_KEYWORD_getfp] = ACTIONS(77),
    [sym_KEYWORD_startdoc] = ACTIONS(74),
    [sym_KEYWORD_useenv] = ACTIONS(80),
    [sym_KEYWORD_begenv] = ACTIONS(83),
    [sym_KEYWORD_endenv] = ACTIONS(86),
    [sym_KEYWORD_makeatletter] = ACTIONS(74),
    [sym_KEYWORD_makeatother] = ACTIONS(74),
    [sym_KEYWORD_ltx3on] = ACTIONS(74),
    [sym_KEYWORD_ltx3off] = ACTIONS(74),
    [sym_KEYWORD_nonstopmode] = ACTIONS(74),
    [sym_KEYWORD_luacode] = ACTIONS(89),
    [sym_word] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_STAR] = ACTIONS(95),
    [anon_sym_SLASH] = ACTIONS(95),
    [anon_sym_LT] = ACTIONS(98),
    [anon_sym_GT] = ACTIONS(98),
    [anon_sym_BANG] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_COLON] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(98),
    [sym_delimiter] = ACTIONS(101),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(108), 1,
      sym_word,
    ACTIONS(117), 1,
      sym_delimiter,
    STATE(4), 1,
      aux_sym_text_repeat1,
    STATE(18), 1,
      sym_operator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(111), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(104), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(114), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
    ACTIONS(106), 18,
      anon_sym_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_getfp,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_begenv,
      sym_KEYWORD_endenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
  [58] = 9,
    ACTIONS(35), 1,
      sym_word,
    ACTIONS(41), 1,
      sym_delimiter,
    STATE(4), 1,
      aux_sym_text_repeat1,
    STATE(18), 1,
      sym_operator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(37), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(120), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(39), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
    ACTIONS(122), 18,
      anon_sym_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_getfp,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_begenv,
      sym_KEYWORD_endenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
  [116] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(124), 12,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_delimiter,
    ACTIONS(126), 25,
      anon_sym_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_getfp,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_begenv,
      sym_KEYWORD_endenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
      sym_word,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [162] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(128), 12,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_delimiter,
    ACTIONS(130), 25,
      anon_sym_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_getfp,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_begenv,
      sym_KEYWORD_endenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
      sym_word,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [208] = 5,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_options,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(132), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_delimiter,
    ACTIONS(136), 25,
      anon_sym_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_getfp,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_begenv,
      sym_KEYWORD_endenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
      sym_word,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [257] = 5,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym_options,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(138), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_delimiter,
    ACTIONS(140), 25,
      anon_sym_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_getfp,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_begenv,
      sym_KEYWORD_endenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
      sym_word,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [306] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(142), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_delimiter,
    ACTIONS(144), 25,
      anon_sym_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_getfp,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_begenv,
      sym_KEYWORD_endenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
      sym_word,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [350] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(146), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_delimiter,
    ACTIONS(148), 25,
      anon_sym_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_getfp,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_begenv,
      sym_KEYWORD_endenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
      sym_word,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [394] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(150), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_delimiter,
    ACTIONS(152), 25,
      anon_sym_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_getfp,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_begenv,
      sym_KEYWORD_endenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
      sym_word,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [438] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(154), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_delimiter,
    ACTIONS(156), 25,
      anon_sym_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_getfp,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_begenv,
      sym_KEYWORD_endenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
      sym_word,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [482] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(158), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_delimiter,
    ACTIONS(160), 25,
      anon_sym_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_getfp,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_begenv,
      sym_KEYWORD_endenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
      sym_word,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [526] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(162), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_delimiter,
    ACTIONS(164), 25,
      anon_sym_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_getfp,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_begenv,
      sym_KEYWORD_endenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
      sym_word,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [570] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(166), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_delimiter,
    ACTIONS(168), 25,
      anon_sym_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_getfp,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_begenv,
      sym_KEYWORD_endenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
      sym_word,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [614] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(170), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_delimiter,
    ACTIONS(172), 25,
      anon_sym_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_getfp,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_begenv,
      sym_KEYWORD_endenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
      sym_word,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [658] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(174), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_delimiter,
    ACTIONS(176), 25,
      anon_sym_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_getfp,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_begenv,
      sym_KEYWORD_endenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
      sym_word,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [702] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(178), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_delimiter,
    ACTIONS(180), 25,
      anon_sym_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_getfp,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_begenv,
      sym_KEYWORD_endenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
      sym_word,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [746] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(182), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_delimiter,
    ACTIONS(184), 25,
      anon_sym_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_getfp,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_begenv,
      sym_KEYWORD_endenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
      sym_word,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [790] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(186), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_delimiter,
    ACTIONS(188), 25,
      anon_sym_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_getfp,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_begenv,
      sym_KEYWORD_endenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
      sym_word,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [834] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(190), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_delimiter,
    ACTIONS(192), 25,
      anon_sym_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_getfp,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_begenv,
      sym_KEYWORD_endenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
      sym_word,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [878] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(194), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_delimiter,
    ACTIONS(196), 25,
      anon_sym_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_getfp,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_begenv,
      sym_KEYWORD_endenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
      sym_word,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [922] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(198), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_delimiter,
    ACTIONS(200), 25,
      anon_sym_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_getfp,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_begenv,
      sym_KEYWORD_endenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
      sym_word,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [966] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(202), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_delimiter,
    ACTIONS(204), 25,
      anon_sym_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_getfp,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_begenv,
      sym_KEYWORD_endenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
      sym_word,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [1010] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(206), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_delimiter,
    ACTIONS(208), 25,
      anon_sym_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_getfp,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_begenv,
      sym_KEYWORD_endenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
      sym_word,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [1054] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(210), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_delimiter,
    ACTIONS(212), 25,
      anon_sym_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_getfp,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_begenv,
      sym_KEYWORD_endenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
      sym_word,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [1098] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(214), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_delimiter,
    ACTIONS(216), 25,
      anon_sym_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_getfp,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_begenv,
      sym_KEYWORD_endenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
      sym_word,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [1142] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(218), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_delimiter,
    ACTIONS(220), 25,
      anon_sym_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_getfp,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_begenv,
      sym_KEYWORD_endenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
      sym_word,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [1186] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(222), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_delimiter,
    ACTIONS(224), 25,
      anon_sym_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_getfp,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_begenv,
      sym_KEYWORD_endenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
      sym_word,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [1230] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(226), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_delimiter,
    ACTIONS(228), 25,
      anon_sym_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_getfp,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_begenv,
      sym_KEYWORD_endenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
      sym_word,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [1274] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(230), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_delimiter,
    ACTIONS(232), 25,
      anon_sym_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_getfp,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_begenv,
      sym_KEYWORD_endenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
      sym_word,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [1318] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(234), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_delimiter,
    ACTIONS(236), 25,
      anon_sym_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_getfp,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_begenv,
      sym_KEYWORD_endenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
      sym_word,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [1362] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(238), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_delimiter,
    ACTIONS(240), 25,
      anon_sym_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_getfp,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_begenv,
      sym_KEYWORD_endenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
      sym_word,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [1406] = 6,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(36), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(50), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [1428] = 6,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(37), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(50), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [1450] = 6,
    ACTIONS(250), 1,
      anon_sym_LBRACE,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(37), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(50), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [1472] = 6,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(258), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(37), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(50), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [1494] = 6,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(38), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(50), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [1516] = 6,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym_options,
    STATE(55), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1536] = 6,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    ACTIONS(270), 1,
      aux_sym_options_token1,
    STATE(42), 1,
      aux_sym_options_repeat1,
    STATE(63), 1,
      aux_sym_options_repeat2,
    ACTIONS(272), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1556] = 4,
    ACTIONS(276), 1,
      aux_sym_options_token1,
    STATE(42), 1,
      aux_sym_options_repeat1,
    ACTIONS(272), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(274), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1571] = 4,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_options,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(279), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1586] = 4,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_options,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(281), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1601] = 4,
    ACTIONS(270), 1,
      aux_sym_options_token1,
    STATE(42), 1,
      aux_sym_options_repeat1,
    ACTIONS(272), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(283), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1616] = 4,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    ACTIONS(287), 1,
      aux_sym_useenv_decl_token1,
    STATE(61), 1,
      aux_sym_useenv_decl_repeat2,
    ACTIONS(272), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1630] = 4,
    ACTIONS(289), 1,
      aux_sym_inline_math_token1,
    ACTIONS(292), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(47), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(272), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1644] = 4,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
    ACTIONS(296), 1,
      aux_sym_mandantory_arg_token1,
    STATE(58), 1,
      aux_sym_mandantory_arg_repeat1,
    ACTIONS(272), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1658] = 4,
    ACTIONS(298), 1,
      aux_sym_optional_arg_token1,
    ACTIONS(300), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      aux_sym_optional_arg_repeat1,
    ACTIONS(272), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1672] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(302), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1682] = 4,
    ACTIONS(304), 1,
      anon_sym_DOLLAR,
    ACTIONS(306), 1,
      aux_sym_inline_math_token1,
    STATE(74), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(272), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1696] = 4,
    ACTIONS(308), 1,
      aux_sym_inline_math_token1,
    ACTIONS(310), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(47), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(272), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1710] = 4,
    ACTIONS(312), 1,
      anon_sym_LF,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 1,
      sym_class_pkg_name,
    ACTIONS(272), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1724] = 4,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1738] = 4,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1752] = 4,
    ACTIONS(287), 1,
      aux_sym_useenv_decl_token1,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      aux_sym_useenv_decl_repeat2,
    ACTIONS(272), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1766] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(324), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1776] = 4,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
    ACTIONS(328), 1,
      aux_sym_mandantory_arg_token1,
    STATE(69), 1,
      aux_sym_mandantory_arg_repeat1,
    ACTIONS(272), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1790] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(330), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1800] = 4,
    ACTIONS(332), 1,
      aux_sym_optional_arg_token1,
    ACTIONS(334), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym_optional_arg_repeat1,
    ACTIONS(272), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1814] = 4,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
    ACTIONS(338), 1,
      aux_sym_useenv_decl_token1,
    STATE(61), 1,
      aux_sym_useenv_decl_repeat2,
    ACTIONS(272), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1828] = 4,
    ACTIONS(341), 1,
      aux_sym_useenv_decl_token1,
    STATE(46), 1,
      aux_sym_useenv_decl_repeat2,
    STATE(91), 1,
      sym_luacode_contents,
    ACTIONS(272), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1842] = 4,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      aux_sym_options_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1856] = 4,
    ACTIONS(316), 1,
      sym_class_pkg_name,
    ACTIONS(347), 1,
      anon_sym_LF,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    ACTIONS(272), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1870] = 4,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1884] = 4,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1898] = 4,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    ACTIONS(360), 1,
      aux_sym_inline_math_token1,
    STATE(51), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(272), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1912] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(362), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1922] = 4,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
    ACTIONS(366), 1,
      aux_sym_mandantory_arg_token1,
    STATE(69), 1,
      aux_sym_mandantory_arg_repeat1,
    ACTIONS(272), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1936] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(369), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1946] = 4,
    ACTIONS(371), 1,
      aux_sym_optional_arg_token1,
    ACTIONS(374), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym_optional_arg_repeat1,
    ACTIONS(272), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1960] = 4,
    ACTIONS(287), 1,
      aux_sym_useenv_decl_token1,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      aux_sym_useenv_decl_repeat2,
    ACTIONS(272), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1974] = 4,
    ACTIONS(378), 1,
      aux_sym_inline_math_token1,
    ACTIONS(380), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(52), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(272), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1988] = 4,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(382), 1,
      aux_sym_inline_math_token1,
    STATE(74), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(272), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2002] = 4,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      aux_sym_options_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2016] = 4,
    ACTIONS(316), 1,
      sym_class_pkg_name,
    ACTIONS(390), 1,
      anon_sym_LF,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
    ACTIONS(272), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2030] = 3,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    ACTIONS(394), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2041] = 3,
    ACTIONS(396), 1,
      aux_sym_options_token1,
    STATE(45), 1,
      aux_sym_options_repeat1,
    ACTIONS(272), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2052] = 3,
    ACTIONS(398), 1,
      aux_sym_useenv_decl_token1,
    STATE(72), 1,
      aux_sym_useenv_decl_repeat2,
    ACTIONS(272), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2063] = 3,
    ACTIONS(400), 1,
      aux_sym_options_token1,
    STATE(41), 1,
      aux_sym_options_repeat1,
    ACTIONS(272), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2074] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(281), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2083] = 3,
    ACTIONS(394), 1,
      sym_class_pkg_name,
    ACTIONS(402), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2094] = 3,
    ACTIONS(316), 1,
      sym_class_pkg_name,
    ACTIONS(404), 1,
      anon_sym_LF,
    ACTIONS(272), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2105] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(406), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2114] = 3,
    ACTIONS(408), 1,
      anon_sym_LBRACE,
    ACTIONS(410), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2125] = 3,
    ACTIONS(394), 1,
      sym_class_pkg_name,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2136] = 3,
    ACTIONS(414), 1,
      aux_sym_useenv_decl_token1,
    STATE(56), 1,
      aux_sym_useenv_decl_repeat2,
    ACTIONS(272), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2147] = 2,
    ACTIONS(416), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2155] = 2,
    ACTIONS(418), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2163] = 2,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2171] = 2,
    ACTIONS(422), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2179] = 2,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2187] = 2,
    ACTIONS(426), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2195] = 2,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2203] = 2,
    ACTIONS(430), 1,
      sym_env_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2211] = 2,
    ACTIONS(432), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2219] = 2,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2227] = 2,
    ACTIONS(436), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2235] = 2,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2243] = 2,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2251] = 2,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2259] = 2,
    ACTIONS(444), 1,
      sym_env_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2267] = 2,
    ACTIONS(446), 1,
      sym_env_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2275] = 2,
    ACTIONS(448), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2283] = 2,
    ACTIONS(450), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2291] = 2,
    ACTIONS(452), 1,
      sym_letter,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2299] = 2,
    ACTIONS(454), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2307] = 2,
    ACTIONS(394), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2315] = 2,
    ACTIONS(456), 1,
      sym_latex_function_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2323] = 2,
    ACTIONS(458), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 58,
  [SMALL_STATE(6)] = 116,
  [SMALL_STATE(7)] = 162,
  [SMALL_STATE(8)] = 208,
  [SMALL_STATE(9)] = 257,
  [SMALL_STATE(10)] = 306,
  [SMALL_STATE(11)] = 350,
  [SMALL_STATE(12)] = 394,
  [SMALL_STATE(13)] = 438,
  [SMALL_STATE(14)] = 482,
  [SMALL_STATE(15)] = 526,
  [SMALL_STATE(16)] = 570,
  [SMALL_STATE(17)] = 614,
  [SMALL_STATE(18)] = 658,
  [SMALL_STATE(19)] = 702,
  [SMALL_STATE(20)] = 746,
  [SMALL_STATE(21)] = 790,
  [SMALL_STATE(22)] = 834,
  [SMALL_STATE(23)] = 878,
  [SMALL_STATE(24)] = 922,
  [SMALL_STATE(25)] = 966,
  [SMALL_STATE(26)] = 1010,
  [SMALL_STATE(27)] = 1054,
  [SMALL_STATE(28)] = 1098,
  [SMALL_STATE(29)] = 1142,
  [SMALL_STATE(30)] = 1186,
  [SMALL_STATE(31)] = 1230,
  [SMALL_STATE(32)] = 1274,
  [SMALL_STATE(33)] = 1318,
  [SMALL_STATE(34)] = 1362,
  [SMALL_STATE(35)] = 1406,
  [SMALL_STATE(36)] = 1428,
  [SMALL_STATE(37)] = 1450,
  [SMALL_STATE(38)] = 1472,
  [SMALL_STATE(39)] = 1494,
  [SMALL_STATE(40)] = 1516,
  [SMALL_STATE(41)] = 1536,
  [SMALL_STATE(42)] = 1556,
  [SMALL_STATE(43)] = 1571,
  [SMALL_STATE(44)] = 1586,
  [SMALL_STATE(45)] = 1601,
  [SMALL_STATE(46)] = 1616,
  [SMALL_STATE(47)] = 1630,
  [SMALL_STATE(48)] = 1644,
  [SMALL_STATE(49)] = 1658,
  [SMALL_STATE(50)] = 1672,
  [SMALL_STATE(51)] = 1682,
  [SMALL_STATE(52)] = 1696,
  [SMALL_STATE(53)] = 1710,
  [SMALL_STATE(54)] = 1724,
  [SMALL_STATE(55)] = 1738,
  [SMALL_STATE(56)] = 1752,
  [SMALL_STATE(57)] = 1766,
  [SMALL_STATE(58)] = 1776,
  [SMALL_STATE(59)] = 1790,
  [SMALL_STATE(60)] = 1800,
  [SMALL_STATE(61)] = 1814,
  [SMALL_STATE(62)] = 1828,
  [SMALL_STATE(63)] = 1842,
  [SMALL_STATE(64)] = 1856,
  [SMALL_STATE(65)] = 1870,
  [SMALL_STATE(66)] = 1884,
  [SMALL_STATE(67)] = 1898,
  [SMALL_STATE(68)] = 1912,
  [SMALL_STATE(69)] = 1922,
  [SMALL_STATE(70)] = 1936,
  [SMALL_STATE(71)] = 1946,
  [SMALL_STATE(72)] = 1960,
  [SMALL_STATE(73)] = 1974,
  [SMALL_STATE(74)] = 1988,
  [SMALL_STATE(75)] = 2002,
  [SMALL_STATE(76)] = 2016,
  [SMALL_STATE(77)] = 2030,
  [SMALL_STATE(78)] = 2041,
  [SMALL_STATE(79)] = 2052,
  [SMALL_STATE(80)] = 2063,
  [SMALL_STATE(81)] = 2074,
  [SMALL_STATE(82)] = 2083,
  [SMALL_STATE(83)] = 2094,
  [SMALL_STATE(84)] = 2105,
  [SMALL_STATE(85)] = 2114,
  [SMALL_STATE(86)] = 2125,
  [SMALL_STATE(87)] = 2136,
  [SMALL_STATE(88)] = 2147,
  [SMALL_STATE(89)] = 2155,
  [SMALL_STATE(90)] = 2163,
  [SMALL_STATE(91)] = 2171,
  [SMALL_STATE(92)] = 2179,
  [SMALL_STATE(93)] = 2187,
  [SMALL_STATE(94)] = 2195,
  [SMALL_STATE(95)] = 2203,
  [SMALL_STATE(96)] = 2211,
  [SMALL_STATE(97)] = 2219,
  [SMALL_STATE(98)] = 2227,
  [SMALL_STATE(99)] = 2235,
  [SMALL_STATE(100)] = 2243,
  [SMALL_STATE(101)] = 2251,
  [SMALL_STATE(102)] = 2259,
  [SMALL_STATE(103)] = 2267,
  [SMALL_STATE(104)] = 2275,
  [SMALL_STATE(105)] = 2283,
  [SMALL_STATE(106)] = 2291,
  [SMALL_STATE(107)] = 2299,
  [SMALL_STATE(108)] = 2307,
  [SMALL_STATE(109)] = 2315,
  [SMALL_STATE(110)] = 2323,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vesti_content, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 3),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 3), SHIFT_REPEAT(18),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 3), SHIFT_REPEAT(20),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 3), SHIFT_REPEAT(20),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 3), SHIFT_REPEAT(18),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1, 0, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 4, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 4, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 3, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docclass_decl, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docclass_decl, 2, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singlepkg_decl, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_singlepkg_decl, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singlepkg_decl, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_singlepkg_decl, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endenv_decl, 2, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endenv_decl, 2, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_math, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display_math, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_latex_function, 3, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_latex_function, 3, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_math, 3, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display_math, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docclass_decl, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docclass_decl, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 1, 0, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 1, 0, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begenv_decl, 3, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begenv_decl, 3, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 4, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 4, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importmod_decl, 4, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_importmod_decl, 4, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importfile_decl, 4, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_importfile_decl, 4, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importves_decl, 4, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_importves_decl, 4, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_getfp_decl, 4, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_getfp_decl, 4, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begenv_decl, 4, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begenv_decl, 4, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_luacode, 4, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_luacode, 4, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 5, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 5, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_useenv_decl, 5, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_useenv_decl, 5, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 6, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 6, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_useenv_decl, 6, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_useenv_decl, 6, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 7, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 7, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 8, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 8, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_useenv_decl_repeat1, 2, 0, 0),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_useenv_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_useenv_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_repeat1, 2, 0, 0),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipkg_decl_repeat1, 2, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipkg_decl_repeat1, 3, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_repeat2, 2, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_luacode_contents, 1, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_math_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_math_repeat1, 2, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_arg, 1, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mandantory_arg, 2, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_arg, 2, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_useenv_decl_repeat2, 2, 0, 0),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_useenv_decl_repeat2, 2, 0, 0), SHIFT_REPEAT(61),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipkg_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mandantory_arg, 3, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mandantory_arg_repeat1, 2, 0, 0),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mandantory_arg_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_arg, 3, 0, 0),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_optional_arg_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_optional_arg_repeat1, 2, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_math_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat2, 2, 0, 0), SHIFT_REPEAT(78),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_repeat2, 2, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipkg_decl_repeat1, 4, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [436] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_vesti(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
