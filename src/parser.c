#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 117
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 91
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
  aux_sym_luacode_contents_token1 = 7,
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
  sym_latex_function_arg = 70,
  sym_inline_math = 71,
  sym_display_math = 72,
  sym_options = 73,
  sym_env_arg = 74,
  sym_mandantory_arg = 75,
  sym_optional_arg = 76,
  sym__text_content = 77,
  sym_text = 78,
  sym_operator = 79,
  aux_sym_vesti_content_repeat1 = 80,
  aux_sym_multipkg_decl_repeat1 = 81,
  aux_sym_useenv_decl_repeat1 = 82,
  aux_sym_luacode_contents_repeat1 = 83,
  aux_sym_latex_function_repeat1 = 84,
  aux_sym_inline_math_repeat1 = 85,
  aux_sym_options_repeat1 = 86,
  aux_sym_options_repeat2 = 87,
  aux_sym_mandantory_arg_repeat1 = 88,
  aux_sym_optional_arg_repeat1 = 89,
  aux_sym_text_repeat1 = 90,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_LF] = "\n",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_luacode_contents_token1] = "luacode_contents_token1",
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
  [sym_latex_function_arg] = "latex_function_arg",
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
  [aux_sym_luacode_contents_repeat1] = "luacode_contents_repeat1",
  [aux_sym_latex_function_repeat1] = "latex_function_repeat1",
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
  [aux_sym_luacode_contents_token1] = aux_sym_luacode_contents_token1,
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
  [sym_latex_function_arg] = sym_latex_function_arg,
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
  [aux_sym_luacode_contents_repeat1] = aux_sym_luacode_contents_repeat1,
  [aux_sym_latex_function_repeat1] = aux_sym_latex_function_repeat1,
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
  [aux_sym_luacode_contents_token1] = {
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
  [sym_latex_function_arg] = {
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
  [aux_sym_luacode_contents_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_latex_function_repeat1] = {
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
  [68] = 55,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
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
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
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
      if (set_contains(sym_latex_function_name_character_set_1, 667, lookahead)) ADVANCE(30);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (set_contains(sym_letter_character_set_1, 429, lookahead)) ADVANCE(177);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (set_contains(sym_filepath_character_set_1, 430, lookahead)) ADVANCE(49);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
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
        '{', 20,
        '|', 169,
        '}', 23,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (lookahead != 0 &&
          (lookahead < '#' || '-' < lookahead) &&
          (lookahead < '<' || '>' < lookahead) &&
          (lookahead < '[' || '_' < lookahead)) ADVANCE(157);
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
      ACCEPT_TOKEN(aux_sym_luacode_contents_token1);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_luacode_contents_token1);
      if (lookahead == '%') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(26);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_luacode_contents_token1);
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
  [35] = {.lex_state = 18},
  [36] = {.lex_state = 18},
  [37] = {.lex_state = 18},
  [38] = {.lex_state = 18},
  [39] = {.lex_state = 18},
  [40] = {.lex_state = 18},
  [41] = {.lex_state = 18},
  [42] = {.lex_state = 18},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 13},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 14},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 15},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 13},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 14},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 15},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 14},
  [80] = {.lex_state = 15},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 12},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 12},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 13},
  [111] = {.lex_state = 9},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 8},
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
    [sym_vesti_content] = STATE(107),
    [sym_statement] = STATE(3),
    [sym_docclass_decl] = STATE(42),
    [sym_singlepkg_decl] = STATE(42),
    [sym_multipkg_decl] = STATE(42),
    [sym_importmod_decl] = STATE(42),
    [sym_importfile_decl] = STATE(42),
    [sym_importves_decl] = STATE(42),
    [sym_getfp_decl] = STATE(42),
    [sym_useenv_decl] = STATE(42),
    [sym_begenv_decl] = STATE(42),
    [sym_endenv_decl] = STATE(42),
    [sym_luacode] = STATE(42),
    [sym_latex_function] = STATE(42),
    [sym_inline_math] = STATE(42),
    [sym_display_math] = STATE(42),
    [sym__text_content] = STATE(42),
    [sym_text] = STATE(42),
    [sym_operator] = STATE(33),
    [aux_sym_vesti_content_repeat1] = STATE(3),
    [aux_sym_text_repeat1] = STATE(12),
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
    [sym_statement] = STATE(2),
    [sym_docclass_decl] = STATE(42),
    [sym_singlepkg_decl] = STATE(42),
    [sym_multipkg_decl] = STATE(42),
    [sym_importmod_decl] = STATE(42),
    [sym_importfile_decl] = STATE(42),
    [sym_importves_decl] = STATE(42),
    [sym_getfp_decl] = STATE(42),
    [sym_useenv_decl] = STATE(42),
    [sym_begenv_decl] = STATE(42),
    [sym_endenv_decl] = STATE(42),
    [sym_luacode] = STATE(42),
    [sym_latex_function] = STATE(42),
    [sym_inline_math] = STATE(42),
    [sym_display_math] = STATE(42),
    [sym__text_content] = STATE(42),
    [sym_text] = STATE(42),
    [sym_operator] = STATE(33),
    [aux_sym_vesti_content_repeat1] = STATE(2),
    [aux_sym_text_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(48),
    [anon_sym_DOLLAR] = ACTIONS(51),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(54),
    [sym_KEYWORD_docclass] = ACTIONS(57),
    [sym_KEYWORD_importpkg] = ACTIONS(60),
    [sym_KEYWORD_importmod] = ACTIONS(63),
    [sym_KEYWORD_importfile] = ACTIONS(66),
    [sym_KEYWORD_importves] = ACTIONS(69),
    [sym_KEYWORD_useltx3] = ACTIONS(72),
    [sym_KEYWORD_getfp] = ACTIONS(75),
    [sym_KEYWORD_startdoc] = ACTIONS(72),
    [sym_KEYWORD_useenv] = ACTIONS(78),
    [sym_KEYWORD_begenv] = ACTIONS(81),
    [sym_KEYWORD_endenv] = ACTIONS(84),
    [sym_KEYWORD_makeatletter] = ACTIONS(72),
    [sym_KEYWORD_makeatother] = ACTIONS(72),
    [sym_KEYWORD_ltx3on] = ACTIONS(72),
    [sym_KEYWORD_ltx3off] = ACTIONS(72),
    [sym_KEYWORD_nonstopmode] = ACTIONS(72),
    [sym_KEYWORD_luacode] = ACTIONS(87),
    [sym_word] = ACTIONS(90),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_STAR] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(96),
    [anon_sym_GT] = ACTIONS(96),
    [anon_sym_BANG] = ACTIONS(96),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(96),
    [anon_sym_SQUOTE] = ACTIONS(96),
    [sym_delimiter] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_statement] = STATE(2),
    [sym_docclass_decl] = STATE(42),
    [sym_singlepkg_decl] = STATE(42),
    [sym_multipkg_decl] = STATE(42),
    [sym_importmod_decl] = STATE(42),
    [sym_importfile_decl] = STATE(42),
    [sym_importves_decl] = STATE(42),
    [sym_getfp_decl] = STATE(42),
    [sym_useenv_decl] = STATE(42),
    [sym_begenv_decl] = STATE(42),
    [sym_endenv_decl] = STATE(42),
    [sym_luacode] = STATE(42),
    [sym_latex_function] = STATE(42),
    [sym_inline_math] = STATE(42),
    [sym_display_math] = STATE(42),
    [sym__text_content] = STATE(42),
    [sym_text] = STATE(42),
    [sym_operator] = STATE(33),
    [aux_sym_vesti_content_repeat1] = STATE(2),
    [aux_sym_text_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(102),
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
  [4] = {
    [sym_statement] = STATE(7),
    [sym_docclass_decl] = STATE(42),
    [sym_singlepkg_decl] = STATE(42),
    [sym_multipkg_decl] = STATE(42),
    [sym_importmod_decl] = STATE(42),
    [sym_importfile_decl] = STATE(42),
    [sym_importves_decl] = STATE(42),
    [sym_getfp_decl] = STATE(42),
    [sym_useenv_decl] = STATE(42),
    [sym_begenv_decl] = STATE(42),
    [sym_endenv_decl] = STATE(42),
    [sym_luacode] = STATE(42),
    [sym_latex_function] = STATE(42),
    [sym_inline_math] = STATE(42),
    [sym_display_math] = STATE(42),
    [sym__text_content] = STATE(42),
    [sym_text] = STATE(42),
    [sym_operator] = STATE(33),
    [aux_sym_vesti_content_repeat1] = STATE(7),
    [aux_sym_text_repeat1] = STATE(12),
    [anon_sym_RBRACE] = ACTIONS(104),
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
  [5] = {
    [sym_statement] = STATE(6),
    [sym_docclass_decl] = STATE(42),
    [sym_singlepkg_decl] = STATE(42),
    [sym_multipkg_decl] = STATE(42),
    [sym_importmod_decl] = STATE(42),
    [sym_importfile_decl] = STATE(42),
    [sym_importves_decl] = STATE(42),
    [sym_getfp_decl] = STATE(42),
    [sym_useenv_decl] = STATE(42),
    [sym_begenv_decl] = STATE(42),
    [sym_endenv_decl] = STATE(42),
    [sym_luacode] = STATE(42),
    [sym_latex_function] = STATE(42),
    [sym_inline_math] = STATE(42),
    [sym_display_math] = STATE(42),
    [sym__text_content] = STATE(42),
    [sym_text] = STATE(42),
    [sym_operator] = STATE(33),
    [aux_sym_vesti_content_repeat1] = STATE(6),
    [aux_sym_text_repeat1] = STATE(12),
    [anon_sym_RBRACE] = ACTIONS(106),
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
  [6] = {
    [sym_statement] = STATE(2),
    [sym_docclass_decl] = STATE(42),
    [sym_singlepkg_decl] = STATE(42),
    [sym_multipkg_decl] = STATE(42),
    [sym_importmod_decl] = STATE(42),
    [sym_importfile_decl] = STATE(42),
    [sym_importves_decl] = STATE(42),
    [sym_getfp_decl] = STATE(42),
    [sym_useenv_decl] = STATE(42),
    [sym_begenv_decl] = STATE(42),
    [sym_endenv_decl] = STATE(42),
    [sym_luacode] = STATE(42),
    [sym_latex_function] = STATE(42),
    [sym_inline_math] = STATE(42),
    [sym_display_math] = STATE(42),
    [sym__text_content] = STATE(42),
    [sym_text] = STATE(42),
    [sym_operator] = STATE(33),
    [aux_sym_vesti_content_repeat1] = STATE(2),
    [aux_sym_text_repeat1] = STATE(12),
    [anon_sym_RBRACE] = ACTIONS(108),
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
  [7] = {
    [sym_statement] = STATE(2),
    [sym_docclass_decl] = STATE(42),
    [sym_singlepkg_decl] = STATE(42),
    [sym_multipkg_decl] = STATE(42),
    [sym_importmod_decl] = STATE(42),
    [sym_importfile_decl] = STATE(42),
    [sym_importves_decl] = STATE(42),
    [sym_getfp_decl] = STATE(42),
    [sym_useenv_decl] = STATE(42),
    [sym_begenv_decl] = STATE(42),
    [sym_endenv_decl] = STATE(42),
    [sym_luacode] = STATE(42),
    [sym_latex_function] = STATE(42),
    [sym_inline_math] = STATE(42),
    [sym_display_math] = STATE(42),
    [sym__text_content] = STATE(42),
    [sym_text] = STATE(42),
    [sym_operator] = STATE(33),
    [aux_sym_vesti_content_repeat1] = STATE(2),
    [aux_sym_text_repeat1] = STATE(12),
    [anon_sym_RBRACE] = ACTIONS(106),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(9), 2,
      sym_latex_function_arg,
      aux_sym_latex_function_repeat1,
    ACTIONS(110), 11,
      ts_builtin_sym_end,
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
    ACTIONS(114), 25,
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
  [52] = 5,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(10), 2,
      sym_latex_function_arg,
      aux_sym_latex_function_repeat1,
    ACTIONS(116), 11,
      ts_builtin_sym_end,
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
    ACTIONS(118), 25,
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
  [104] = 5,
    ACTIONS(122), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(10), 2,
      sym_latex_function_arg,
      aux_sym_latex_function_repeat1,
    ACTIONS(120), 11,
      ts_builtin_sym_end,
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
    ACTIONS(125), 25,
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
  [156] = 9,
    ACTIONS(131), 1,
      sym_word,
    ACTIONS(140), 1,
      sym_delimiter,
    STATE(11), 1,
      aux_sym_text_repeat1,
    STATE(33), 1,
      sym_operator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(134), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(127), 6,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(137), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
    ACTIONS(129), 18,
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
  [215] = 9,
    ACTIONS(35), 1,
      sym_word,
    ACTIONS(41), 1,
      sym_delimiter,
    STATE(11), 1,
      aux_sym_text_repeat1,
    STATE(33), 1,
      sym_operator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(37), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(39), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_SQUOTE,
    ACTIONS(143), 6,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(145), 18,
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
  [274] = 5,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_options,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(147), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_delimiter,
    ACTIONS(151), 25,
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
  [324] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(153), 12,
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
    ACTIONS(155), 25,
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
  [370] = 5,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_options,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(157), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_delimiter,
    ACTIONS(159), 25,
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
  [420] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(161), 12,
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
    ACTIONS(163), 25,
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
  [466] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(165), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
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
    ACTIONS(167), 25,
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
  [512] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(169), 11,
      ts_builtin_sym_end,
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
    ACTIONS(171), 25,
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
  [557] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(173), 11,
      ts_builtin_sym_end,
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
    ACTIONS(175), 25,
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
  [602] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(177), 11,
      ts_builtin_sym_end,
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
    ACTIONS(179), 25,
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
  [647] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(181), 11,
      ts_builtin_sym_end,
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
    ACTIONS(183), 25,
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
  [692] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(185), 11,
      ts_builtin_sym_end,
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
    ACTIONS(187), 25,
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
  [737] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(189), 11,
      ts_builtin_sym_end,
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
    ACTIONS(191), 25,
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
  [782] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(193), 11,
      ts_builtin_sym_end,
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
    ACTIONS(195), 25,
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
  [827] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(197), 11,
      ts_builtin_sym_end,
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
    ACTIONS(199), 25,
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
  [872] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(201), 11,
      ts_builtin_sym_end,
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
    ACTIONS(203), 25,
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
  [917] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(205), 11,
      ts_builtin_sym_end,
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
    ACTIONS(207), 25,
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
  [962] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(209), 11,
      ts_builtin_sym_end,
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
    ACTIONS(211), 25,
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
  [1007] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(213), 11,
      ts_builtin_sym_end,
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
    ACTIONS(215), 25,
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
  [1052] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(217), 11,
      ts_builtin_sym_end,
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
    ACTIONS(219), 25,
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
  [1097] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(221), 11,
      ts_builtin_sym_end,
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
    ACTIONS(223), 25,
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
    ACTIONS(225), 11,
      ts_builtin_sym_end,
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
    ACTIONS(227), 25,
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
  [1187] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(229), 11,
      ts_builtin_sym_end,
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
    ACTIONS(231), 25,
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
  [1232] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(233), 11,
      ts_builtin_sym_end,
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
    ACTIONS(235), 25,
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
  [1277] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(237), 11,
      ts_builtin_sym_end,
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
    ACTIONS(239), 25,
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
  [1322] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(241), 11,
      ts_builtin_sym_end,
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
    ACTIONS(243), 25,
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
  [1367] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(245), 11,
      ts_builtin_sym_end,
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
    ACTIONS(247), 25,
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
  [1412] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(249), 11,
      ts_builtin_sym_end,
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
    ACTIONS(251), 25,
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
  [1457] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(253), 11,
      ts_builtin_sym_end,
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
    ACTIONS(255), 25,
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
  [1502] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(257), 11,
      ts_builtin_sym_end,
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
    ACTIONS(259), 25,
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
  [1547] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(261), 11,
      ts_builtin_sym_end,
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
    ACTIONS(263), 25,
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
  [1592] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(265), 11,
      ts_builtin_sym_end,
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
    ACTIONS(267), 25,
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
  [1637] = 6,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(45), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(81), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [1659] = 6,
    ACTIONS(275), 1,
      anon_sym_LBRACE,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(44), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(81), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [1681] = 6,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(44), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(81), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [1703] = 6,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(44), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(81), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [1725] = 6,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(287), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(46), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(81), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [1747] = 6,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      sym_options,
    STATE(59), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1767] = 6,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    ACTIONS(297), 1,
      aux_sym_options_token1,
    STATE(53), 1,
      aux_sym_options_repeat1,
    STATE(69), 1,
      aux_sym_options_repeat2,
    ACTIONS(299), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1787] = 4,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym_options,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(301), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1802] = 4,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    STATE(90), 1,
      sym_options,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(303), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1817] = 4,
    ACTIONS(297), 1,
      aux_sym_options_token1,
    STATE(53), 1,
      aux_sym_options_repeat1,
    ACTIONS(299), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(305), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1832] = 4,
    ACTIONS(309), 1,
      aux_sym_options_token1,
    STATE(53), 1,
      aux_sym_options_repeat1,
    ACTIONS(299), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(307), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1847] = 4,
    ACTIONS(312), 1,
      anon_sym_LF,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 1,
      sym_class_pkg_name,
    ACTIONS(299), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1861] = 4,
    ACTIONS(318), 1,
      aux_sym_inline_math_token1,
    ACTIONS(321), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(55), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(299), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1875] = 4,
    ACTIONS(323), 1,
      aux_sym_inline_math_token1,
    ACTIONS(325), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(55), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(299), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1889] = 4,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
    ACTIONS(329), 1,
      aux_sym_luacode_contents_token1,
    STATE(66), 1,
      aux_sym_luacode_contents_repeat1,
    ACTIONS(299), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1903] = 4,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1917] = 4,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1931] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(335), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1941] = 4,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    ACTIONS(339), 1,
      aux_sym_mandantory_arg_token1,
    STATE(74), 1,
      aux_sym_mandantory_arg_repeat1,
    ACTIONS(299), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1955] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(341), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1965] = 4,
    ACTIONS(343), 1,
      aux_sym_optional_arg_token1,
    ACTIONS(345), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      aux_sym_optional_arg_repeat1,
    ACTIONS(299), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1979] = 4,
    ACTIONS(347), 1,
      aux_sym_luacode_contents_token1,
    STATE(57), 1,
      aux_sym_luacode_contents_repeat1,
    STATE(98), 1,
      sym_luacode_contents,
    ACTIONS(299), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1993] = 4,
    ACTIONS(349), 1,
      anon_sym_DOLLAR,
    ACTIONS(351), 1,
      aux_sym_inline_math_token1,
    STATE(82), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(299), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2007] = 4,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    ACTIONS(355), 1,
      aux_sym_luacode_contents_token1,
    STATE(66), 1,
      aux_sym_luacode_contents_repeat1,
    ACTIONS(299), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2021] = 4,
    ACTIONS(358), 1,
      aux_sym_inline_math_token1,
    ACTIONS(360), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(56), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(299), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2035] = 4,
    ACTIONS(321), 1,
      anon_sym_DOLLAR,
    ACTIONS(362), 1,
      aux_sym_inline_math_token1,
    STATE(68), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(299), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2049] = 4,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_options_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2063] = 4,
    ACTIONS(316), 1,
      sym_class_pkg_name,
    ACTIONS(369), 1,
      anon_sym_LF,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    ACTIONS(299), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2077] = 4,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    ACTIONS(375), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2091] = 4,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    ACTIONS(377), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2105] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(380), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [2115] = 4,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    ACTIONS(384), 1,
      aux_sym_mandantory_arg_token1,
    STATE(74), 1,
      aux_sym_mandantory_arg_repeat1,
    ACTIONS(299), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2129] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(387), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [2139] = 4,
    ACTIONS(389), 1,
      aux_sym_optional_arg_token1,
    ACTIONS(392), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      aux_sym_optional_arg_repeat1,
    ACTIONS(299), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2153] = 4,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_options_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2167] = 4,
    ACTIONS(316), 1,
      sym_class_pkg_name,
    ACTIONS(399), 1,
      anon_sym_LF,
    ACTIONS(401), 1,
      anon_sym_RBRACE,
    ACTIONS(299), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2181] = 4,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    ACTIONS(405), 1,
      aux_sym_mandantory_arg_token1,
    STATE(61), 1,
      aux_sym_mandantory_arg_repeat1,
    ACTIONS(299), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2195] = 4,
    ACTIONS(407), 1,
      aux_sym_optional_arg_token1,
    ACTIONS(409), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym_optional_arg_repeat1,
    ACTIONS(299), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2209] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(411), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [2219] = 4,
    ACTIONS(413), 1,
      anon_sym_DOLLAR,
    ACTIONS(415), 1,
      aux_sym_inline_math_token1,
    STATE(68), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(299), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2233] = 3,
    ACTIONS(417), 1,
      aux_sym_options_token1,
    STATE(52), 1,
      aux_sym_options_repeat1,
    ACTIONS(299), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2244] = 3,
    ACTIONS(375), 1,
      anon_sym_RBRACE,
    ACTIONS(419), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2255] = 3,
    ACTIONS(421), 1,
      aux_sym_options_token1,
    STATE(49), 1,
      aux_sym_options_repeat1,
    ACTIONS(299), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2266] = 3,
    ACTIONS(423), 1,
      anon_sym_LBRACE,
    ACTIONS(425), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2277] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(303), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2286] = 3,
    ACTIONS(419), 1,
      sym_class_pkg_name,
    ACTIONS(427), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2297] = 3,
    ACTIONS(316), 1,
      sym_class_pkg_name,
    ACTIONS(429), 1,
      anon_sym_LF,
    ACTIONS(299), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2308] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(431), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2317] = 3,
    ACTIONS(419), 1,
      sym_class_pkg_name,
    ACTIONS(433), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2328] = 2,
    ACTIONS(435), 1,
      sym_latex_function_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2336] = 2,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2344] = 2,
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2352] = 2,
    ACTIONS(441), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2360] = 2,
    ACTIONS(443), 1,
      sym_letter,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2368] = 2,
    ACTIONS(445), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2376] = 2,
    ACTIONS(447), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2384] = 2,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2392] = 2,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2400] = 2,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2408] = 2,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2416] = 2,
    ACTIONS(457), 1,
      sym_env_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2424] = 2,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2432] = 2,
    ACTIONS(461), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2440] = 2,
    ACTIONS(463), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2448] = 2,
    ACTIONS(465), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2456] = 2,
    ACTIONS(467), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2464] = 2,
    ACTIONS(469), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2472] = 2,
    ACTIONS(471), 1,
      aux_sym_luacode_contents_token1,
    ACTIONS(299), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2480] = 2,
    ACTIONS(473), 1,
      sym_env_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2488] = 2,
    ACTIONS(475), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2496] = 2,
    ACTIONS(477), 1,
      sym_env_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2504] = 2,
    ACTIONS(419), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2512] = 2,
    ACTIONS(479), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2520] = 2,
    ACTIONS(481), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 52,
  [SMALL_STATE(10)] = 104,
  [SMALL_STATE(11)] = 156,
  [SMALL_STATE(12)] = 215,
  [SMALL_STATE(13)] = 274,
  [SMALL_STATE(14)] = 324,
  [SMALL_STATE(15)] = 370,
  [SMALL_STATE(16)] = 420,
  [SMALL_STATE(17)] = 466,
  [SMALL_STATE(18)] = 512,
  [SMALL_STATE(19)] = 557,
  [SMALL_STATE(20)] = 602,
  [SMALL_STATE(21)] = 647,
  [SMALL_STATE(22)] = 692,
  [SMALL_STATE(23)] = 737,
  [SMALL_STATE(24)] = 782,
  [SMALL_STATE(25)] = 827,
  [SMALL_STATE(26)] = 872,
  [SMALL_STATE(27)] = 917,
  [SMALL_STATE(28)] = 962,
  [SMALL_STATE(29)] = 1007,
  [SMALL_STATE(30)] = 1052,
  [SMALL_STATE(31)] = 1097,
  [SMALL_STATE(32)] = 1142,
  [SMALL_STATE(33)] = 1187,
  [SMALL_STATE(34)] = 1232,
  [SMALL_STATE(35)] = 1277,
  [SMALL_STATE(36)] = 1322,
  [SMALL_STATE(37)] = 1367,
  [SMALL_STATE(38)] = 1412,
  [SMALL_STATE(39)] = 1457,
  [SMALL_STATE(40)] = 1502,
  [SMALL_STATE(41)] = 1547,
  [SMALL_STATE(42)] = 1592,
  [SMALL_STATE(43)] = 1637,
  [SMALL_STATE(44)] = 1659,
  [SMALL_STATE(45)] = 1681,
  [SMALL_STATE(46)] = 1703,
  [SMALL_STATE(47)] = 1725,
  [SMALL_STATE(48)] = 1747,
  [SMALL_STATE(49)] = 1767,
  [SMALL_STATE(50)] = 1787,
  [SMALL_STATE(51)] = 1802,
  [SMALL_STATE(52)] = 1817,
  [SMALL_STATE(53)] = 1832,
  [SMALL_STATE(54)] = 1847,
  [SMALL_STATE(55)] = 1861,
  [SMALL_STATE(56)] = 1875,
  [SMALL_STATE(57)] = 1889,
  [SMALL_STATE(58)] = 1903,
  [SMALL_STATE(59)] = 1917,
  [SMALL_STATE(60)] = 1931,
  [SMALL_STATE(61)] = 1941,
  [SMALL_STATE(62)] = 1955,
  [SMALL_STATE(63)] = 1965,
  [SMALL_STATE(64)] = 1979,
  [SMALL_STATE(65)] = 1993,
  [SMALL_STATE(66)] = 2007,
  [SMALL_STATE(67)] = 2021,
  [SMALL_STATE(68)] = 2035,
  [SMALL_STATE(69)] = 2049,
  [SMALL_STATE(70)] = 2063,
  [SMALL_STATE(71)] = 2077,
  [SMALL_STATE(72)] = 2091,
  [SMALL_STATE(73)] = 2105,
  [SMALL_STATE(74)] = 2115,
  [SMALL_STATE(75)] = 2129,
  [SMALL_STATE(76)] = 2139,
  [SMALL_STATE(77)] = 2153,
  [SMALL_STATE(78)] = 2167,
  [SMALL_STATE(79)] = 2181,
  [SMALL_STATE(80)] = 2195,
  [SMALL_STATE(81)] = 2209,
  [SMALL_STATE(82)] = 2219,
  [SMALL_STATE(83)] = 2233,
  [SMALL_STATE(84)] = 2244,
  [SMALL_STATE(85)] = 2255,
  [SMALL_STATE(86)] = 2266,
  [SMALL_STATE(87)] = 2277,
  [SMALL_STATE(88)] = 2286,
  [SMALL_STATE(89)] = 2297,
  [SMALL_STATE(90)] = 2308,
  [SMALL_STATE(91)] = 2317,
  [SMALL_STATE(92)] = 2328,
  [SMALL_STATE(93)] = 2336,
  [SMALL_STATE(94)] = 2344,
  [SMALL_STATE(95)] = 2352,
  [SMALL_STATE(96)] = 2360,
  [SMALL_STATE(97)] = 2368,
  [SMALL_STATE(98)] = 2376,
  [SMALL_STATE(99)] = 2384,
  [SMALL_STATE(100)] = 2392,
  [SMALL_STATE(101)] = 2400,
  [SMALL_STATE(102)] = 2408,
  [SMALL_STATE(103)] = 2416,
  [SMALL_STATE(104)] = 2424,
  [SMALL_STATE(105)] = 2432,
  [SMALL_STATE(106)] = 2440,
  [SMALL_STATE(107)] = 2448,
  [SMALL_STATE(108)] = 2456,
  [SMALL_STATE(109)] = 2464,
  [SMALL_STATE(110)] = 2472,
  [SMALL_STATE(111)] = 2480,
  [SMALL_STATE(112)] = 2488,
  [SMALL_STATE(113)] = 2496,
  [SMALL_STATE(114)] = 2504,
  [SMALL_STATE(115)] = 2512,
  [SMALL_STATE(116)] = 2520,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vesti_content, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_latex_function, 3, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_latex_function, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_latex_function, 4, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_latex_function, 4, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_latex_function_repeat1, 2, 0, 0),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_latex_function_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_latex_function_repeat1, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 3),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 3), SHIFT_REPEAT(33),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 3), SHIFT_REPEAT(20),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 3), SHIFT_REPEAT(20),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 3), SHIFT_REPEAT(33),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1, 0, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docclass_decl, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docclass_decl, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 4, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 4, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singlepkg_decl, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_singlepkg_decl, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_latex_function_arg, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_latex_function_arg, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 5, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 5, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singlepkg_decl, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_singlepkg_decl, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begenv_decl, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begenv_decl, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 4, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 4, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importmod_decl, 4, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_importmod_decl, 4, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importfile_decl, 4, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_importfile_decl, 4, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importves_decl, 4, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_importves_decl, 4, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_getfp_decl, 4, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_getfp_decl, 4, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_useenv_decl, 4, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_useenv_decl, 4, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endenv_decl, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endenv_decl, 2, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begenv_decl, 4, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begenv_decl, 4, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_luacode, 4, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_luacode, 4, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_math, 2, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display_math, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 1, 0, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 1, 0, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 3, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 3, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_useenv_decl, 5, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_useenv_decl, 5, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_math, 3, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display_math, 3, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docclass_decl, 3, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docclass_decl, 3, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 6, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 6, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_useenv_decl, 6, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_useenv_decl, 6, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 7, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 7, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 8, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 8, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_useenv_decl_repeat1, 2, 0, 0),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_useenv_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_useenv_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipkg_decl_repeat1, 2, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipkg_decl_repeat1, 3, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_repeat2, 2, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_repeat1, 2, 0, 0),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_math_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_math_repeat1, 2, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_luacode_contents, 1, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mandantory_arg, 2, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_arg, 2, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_luacode_contents_repeat1, 2, 0, 0),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_luacode_contents_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_math_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipkg_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mandantory_arg, 3, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mandantory_arg_repeat1, 2, 0, 0),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mandantory_arg_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_arg, 3, 0, 0),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_optional_arg_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_optional_arg_repeat1, 2, 0, 0),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat2, 2, 0, 0), SHIFT_REPEAT(83),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_repeat2, 2, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_arg, 1, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipkg_decl_repeat1, 4, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [465] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
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
