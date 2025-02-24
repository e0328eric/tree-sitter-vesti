#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 103
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

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
  sym_KEYWORD_startdoc = 27,
  sym_KEYWORD_useenv = 28,
  sym_KEYWORD_begenv = 29,
  sym_KEYWORD_endenv = 30,
  sym_KEYWORD_makeatletter = 31,
  sym_KEYWORD_makeatother = 32,
  sym_KEYWORD_ltx3on = 33,
  sym_KEYWORD_ltx3off = 34,
  sym_KEYWORD_nonstopmode = 35,
  sym_KEYWORD_luacode = 36,
  sym_digit = 37,
  sym_ascii_letter = 38,
  sym_letter = 39,
  sym_line_comment = 40,
  sym_multiline_comment = 41,
  sym_vesti_content = 42,
  sym_statement = 43,
  sym_docclass_decl = 44,
  sym_singlepkg_decl = 45,
  sym_multipkg_decl = 46,
  sym_importmod_decl = 47,
  sym_importfile_decl = 48,
  sym_importves_decl = 49,
  sym_useenv_decl = 50,
  sym_begenv_decl = 51,
  sym_endenv_decl = 52,
  sym_luacode = 53,
  sym_luacode_contents = 54,
  sym_latex_function = 55,
  sym_inline_math = 56,
  sym_display_math = 57,
  sym_options = 58,
  sym_env_arg = 59,
  sym_mandantory_arg = 60,
  sym_optional_arg = 61,
  aux_sym_vesti_content_repeat1 = 62,
  aux_sym_multipkg_decl_repeat1 = 63,
  aux_sym_useenv_decl_repeat1 = 64,
  aux_sym_useenv_decl_repeat2 = 65,
  aux_sym_inline_math_repeat1 = 66,
  aux_sym_options_repeat1 = 67,
  aux_sym_options_repeat2 = 68,
  aux_sym_mandantory_arg_repeat1 = 69,
  aux_sym_optional_arg_repeat1 = 70,
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
  [aux_sym_vesti_content_repeat1] = "vesti_content_repeat1",
  [aux_sym_multipkg_decl_repeat1] = "multipkg_decl_repeat1",
  [aux_sym_useenv_decl_repeat1] = "useenv_decl_repeat1",
  [aux_sym_useenv_decl_repeat2] = "useenv_decl_repeat2",
  [aux_sym_inline_math_repeat1] = "inline_math_repeat1",
  [aux_sym_options_repeat1] = "options_repeat1",
  [aux_sym_options_repeat2] = "options_repeat2",
  [aux_sym_mandantory_arg_repeat1] = "mandantory_arg_repeat1",
  [aux_sym_optional_arg_repeat1] = "optional_arg_repeat1",
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
  [aux_sym_vesti_content_repeat1] = aux_sym_vesti_content_repeat1,
  [aux_sym_multipkg_decl_repeat1] = aux_sym_multipkg_decl_repeat1,
  [aux_sym_useenv_decl_repeat1] = aux_sym_useenv_decl_repeat1,
  [aux_sym_useenv_decl_repeat2] = aux_sym_useenv_decl_repeat2,
  [aux_sym_inline_math_repeat1] = aux_sym_inline_math_repeat1,
  [aux_sym_options_repeat1] = aux_sym_options_repeat1,
  [aux_sym_options_repeat2] = aux_sym_options_repeat2,
  [aux_sym_mandantory_arg_repeat1] = aux_sym_mandantory_arg_repeat1,
  [aux_sym_optional_arg_repeat1] = aux_sym_optional_arg_repeat1,
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
  [71] = 70,
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
      if (eof) ADVANCE(102);
      ADVANCE_MAP(
        '$', 115,
        '%', 16,
        '(', 107,
        ')', 108,
        ',', 104,
        '[', 127,
        '\\', 112,
        ']', 131,
        '{', 103,
        '}', 106,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (set_contains(sym_letter_character_set_1, 429, lookahead)) ADVANCE(154);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '%') ADVANCE(16);
      if (lookahead == '}') ADVANCE(106);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(119);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(114);
      if (lookahead == '%') ADVANCE(118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '%') ADVANCE(118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(16);
      if (lookahead == '{') ADVANCE(103);
      if (lookahead == '}') ADVANCE(106);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (set_contains(sym_letter_character_set_1, 429, lookahead)) ADVANCE(154);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (set_contains(sym_filepath_character_set_1, 430, lookahead)) ADVANCE(132);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (set_contains(sym_latex_function_name_character_set_1, 667, lookahead)) ADVANCE(113);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(156);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(123);
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == ',') ADVANCE(104);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 12:
      if (lookahead == '%') ADVANCE(123);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(120);
      END_STATE();
    case 13:
      if (lookahead == '%') ADVANCE(111);
      if (lookahead == '}') ADVANCE(106);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 14:
      if (lookahead == '%') ADVANCE(126);
      if (lookahead == ')') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 15:
      if (lookahead == '%') ADVANCE(130);
      if (lookahead == ']') ADVANCE(131);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '-') ADVANCE(155);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '3') ADVANCE(141);
      END_STATE();
    case 19:
      if (lookahead == '3') ADVANCE(67);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 48:
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(70);
      if (lookahead == 'p') ADVANCE(54);
      if (lookahead == 'v') ADVANCE(45);
      END_STATE();
    case 49:
      if (lookahead == 'f') ADVANCE(149);
      END_STATE();
    case 50:
      if (lookahead == 'g') ADVANCE(137);
      END_STATE();
    case 51:
      if (lookahead == 'g') ADVANCE(40);
      END_STATE();
    case 52:
      if (lookahead == 'h') ADVANCE(39);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == 'k') ADVANCE(50);
      END_STATE();
    case 55:
      if (lookahead == 'k') ADVANCE(43);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 75:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 96:
      if (lookahead == 'v') ADVANCE(144);
      END_STATE();
    case 97:
      if (lookahead == 'v') ADVANCE(145);
      END_STATE();
    case 98:
      if (lookahead == 'v') ADVANCE(143);
      END_STATE();
    case 99:
      if (lookahead == 'x') ADVANCE(19);
      END_STATE();
    case 100:
      if (lookahead == 'x') ADVANCE(18);
      END_STATE();
    case 101:
      if (eof) ADVANCE(102);
      ADVANCE_MAP(
        '$', 115,
        '%', 16,
        '(', 107,
        ',', 104,
        '\\', 112,
        'b', 34,
        'd', 66,
        'e', 61,
        'i', 59,
        'l', 86,
        'm', 20,
        'n', 68,
        's', 91,
        'u', 83,
        '}', 106,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_useenv_decl_token1);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_useenv_decl_token1);
      if (lookahead == '%') ADVANCE(111);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_useenv_decl_token1);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '-') ADVANCE(155);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_latex_function_name);
      if (set_contains(sym_latex_function_name_character_set_2, 776, lookahead)) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(119);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_inline_math_token1);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_inline_math_token1);
      if (lookahead == '%') ADVANCE(118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%') ADVANCE(116);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_inline_math_token1);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '-') ADVANCE(155);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_options_token1);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_options_token1);
      if (lookahead == '%') ADVANCE(123);
      if (lookahead == ')') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(120);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_options_token1);
      if (lookahead == '%') ADVANCE(123);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(120);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_options_token1);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '-') ADVANCE(155);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_mandantory_arg_token1);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_mandantory_arg_token1);
      if (lookahead == '%') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(124);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_mandantory_arg_token1);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '-') ADVANCE(155);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_optional_arg_token1);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_optional_arg_token1);
      if (lookahead == '%') ADVANCE(130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_optional_arg_token1);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '-') ADVANCE(155);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_filepath);
      if (set_contains(sym_filepath_character_set_1, 430, lookahead)) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_class_pkg_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_env_name);
      if (lookahead == '*') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_env_name);
      if (lookahead == '*') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_KEYWORD_docclass);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_KEYWORD_importpkg);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_KEYWORD_importmod);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_KEYWORD_importfile);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_KEYWORD_importves);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_KEYWORD_useltx3);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_KEYWORD_startdoc);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_KEYWORD_useenv);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_KEYWORD_begenv);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_KEYWORD_endenv);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_KEYWORD_makeatletter);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_KEYWORD_makeatother);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_KEYWORD_ltx3on);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_KEYWORD_ltx3off);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_KEYWORD_nonstopmode);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_KEYWORD_luacode);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_digit);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_ascii_letter);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_letter);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_multiline_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 101},
  [2] = {.lex_state = 101},
  [3] = {.lex_state = 101},
  [4] = {.lex_state = 101},
  [5] = {.lex_state = 101},
  [6] = {.lex_state = 101},
  [7] = {.lex_state = 101},
  [8] = {.lex_state = 101},
  [9] = {.lex_state = 101},
  [10] = {.lex_state = 101},
  [11] = {.lex_state = 101},
  [12] = {.lex_state = 101},
  [13] = {.lex_state = 101},
  [14] = {.lex_state = 101},
  [15] = {.lex_state = 101},
  [16] = {.lex_state = 101},
  [17] = {.lex_state = 101},
  [18] = {.lex_state = 101},
  [19] = {.lex_state = 101},
  [20] = {.lex_state = 101},
  [21] = {.lex_state = 101},
  [22] = {.lex_state = 101},
  [23] = {.lex_state = 101},
  [24] = {.lex_state = 101},
  [25] = {.lex_state = 101},
  [26] = {.lex_state = 101},
  [27] = {.lex_state = 101},
  [28] = {.lex_state = 101},
  [29] = {.lex_state = 101},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 13},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 15},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 14},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 15},
  [66] = {.lex_state = 13},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 12},
  [73] = {.lex_state = 13},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 12},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
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
    [sym_digit] = ACTIONS(1),
    [sym_ascii_letter] = ACTIONS(1),
    [sym_letter] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_vesti_content] = STATE(101),
    [sym_statement] = STATE(2),
    [sym_docclass_decl] = STATE(8),
    [sym_singlepkg_decl] = STATE(8),
    [sym_multipkg_decl] = STATE(8),
    [sym_importmod_decl] = STATE(8),
    [sym_importfile_decl] = STATE(8),
    [sym_importves_decl] = STATE(8),
    [sym_useenv_decl] = STATE(8),
    [sym_begenv_decl] = STATE(8),
    [sym_endenv_decl] = STATE(8),
    [sym_luacode] = STATE(8),
    [sym_latex_function] = STATE(8),
    [sym_inline_math] = STATE(8),
    [sym_display_math] = STATE(8),
    [aux_sym_vesti_content_repeat1] = STATE(2),
    [anon_sym_BSLASH] = ACTIONS(5),
    [anon_sym_DOLLAR] = ACTIONS(7),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [sym_KEYWORD_docclass] = ACTIONS(11),
    [sym_KEYWORD_importpkg] = ACTIONS(13),
    [sym_KEYWORD_importmod] = ACTIONS(15),
    [sym_KEYWORD_importfile] = ACTIONS(17),
    [sym_KEYWORD_importves] = ACTIONS(19),
    [sym_KEYWORD_useltx3] = ACTIONS(21),
    [sym_KEYWORD_startdoc] = ACTIONS(21),
    [sym_KEYWORD_useenv] = ACTIONS(23),
    [sym_KEYWORD_begenv] = ACTIONS(25),
    [sym_KEYWORD_endenv] = ACTIONS(27),
    [sym_KEYWORD_makeatletter] = ACTIONS(21),
    [sym_KEYWORD_makeatother] = ACTIONS(21),
    [sym_KEYWORD_ltx3on] = ACTIONS(21),
    [sym_KEYWORD_ltx3off] = ACTIONS(21),
    [sym_KEYWORD_nonstopmode] = ACTIONS(21),
    [sym_KEYWORD_luacode] = ACTIONS(29),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_statement] = STATE(3),
    [sym_docclass_decl] = STATE(8),
    [sym_singlepkg_decl] = STATE(8),
    [sym_multipkg_decl] = STATE(8),
    [sym_importmod_decl] = STATE(8),
    [sym_importfile_decl] = STATE(8),
    [sym_importves_decl] = STATE(8),
    [sym_useenv_decl] = STATE(8),
    [sym_begenv_decl] = STATE(8),
    [sym_endenv_decl] = STATE(8),
    [sym_luacode] = STATE(8),
    [sym_latex_function] = STATE(8),
    [sym_inline_math] = STATE(8),
    [sym_display_math] = STATE(8),
    [aux_sym_vesti_content_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(5),
    [anon_sym_DOLLAR] = ACTIONS(7),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [sym_KEYWORD_docclass] = ACTIONS(11),
    [sym_KEYWORD_importpkg] = ACTIONS(13),
    [sym_KEYWORD_importmod] = ACTIONS(15),
    [sym_KEYWORD_importfile] = ACTIONS(17),
    [sym_KEYWORD_importves] = ACTIONS(19),
    [sym_KEYWORD_useltx3] = ACTIONS(21),
    [sym_KEYWORD_startdoc] = ACTIONS(21),
    [sym_KEYWORD_useenv] = ACTIONS(23),
    [sym_KEYWORD_begenv] = ACTIONS(25),
    [sym_KEYWORD_endenv] = ACTIONS(27),
    [sym_KEYWORD_makeatletter] = ACTIONS(21),
    [sym_KEYWORD_makeatother] = ACTIONS(21),
    [sym_KEYWORD_ltx3on] = ACTIONS(21),
    [sym_KEYWORD_ltx3off] = ACTIONS(21),
    [sym_KEYWORD_nonstopmode] = ACTIONS(21),
    [sym_KEYWORD_luacode] = ACTIONS(29),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_statement] = STATE(3),
    [sym_docclass_decl] = STATE(8),
    [sym_singlepkg_decl] = STATE(8),
    [sym_multipkg_decl] = STATE(8),
    [sym_importmod_decl] = STATE(8),
    [sym_importfile_decl] = STATE(8),
    [sym_importves_decl] = STATE(8),
    [sym_useenv_decl] = STATE(8),
    [sym_begenv_decl] = STATE(8),
    [sym_endenv_decl] = STATE(8),
    [sym_luacode] = STATE(8),
    [sym_latex_function] = STATE(8),
    [sym_inline_math] = STATE(8),
    [sym_display_math] = STATE(8),
    [aux_sym_vesti_content_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(35),
    [anon_sym_DOLLAR] = ACTIONS(38),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(41),
    [sym_KEYWORD_docclass] = ACTIONS(44),
    [sym_KEYWORD_importpkg] = ACTIONS(47),
    [sym_KEYWORD_importmod] = ACTIONS(50),
    [sym_KEYWORD_importfile] = ACTIONS(53),
    [sym_KEYWORD_importves] = ACTIONS(56),
    [sym_KEYWORD_useltx3] = ACTIONS(59),
    [sym_KEYWORD_startdoc] = ACTIONS(59),
    [sym_KEYWORD_useenv] = ACTIONS(62),
    [sym_KEYWORD_begenv] = ACTIONS(65),
    [sym_KEYWORD_endenv] = ACTIONS(68),
    [sym_KEYWORD_makeatletter] = ACTIONS(59),
    [sym_KEYWORD_makeatother] = ACTIONS(59),
    [sym_KEYWORD_ltx3on] = ACTIONS(59),
    [sym_KEYWORD_ltx3off] = ACTIONS(59),
    [sym_KEYWORD_nonstopmode] = ACTIONS(59),
    [sym_KEYWORD_luacode] = ACTIONS(71),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(74), 21,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
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
  [31] = 5,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    STATE(15), 1,
      sym_options,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(78), 19,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
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
  [66] = 5,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      anon_sym_DOLLAR,
    STATE(9), 1,
      sym_options,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(84), 19,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
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
  [101] = 3,
    ACTIONS(90), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(88), 21,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
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
  [132] = 3,
    ACTIONS(94), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(92), 19,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
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
  [161] = 3,
    ACTIONS(98), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(96), 19,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
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
  [190] = 3,
    ACTIONS(102), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(100), 19,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
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
  [219] = 3,
    ACTIONS(106), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(104), 19,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
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
  [248] = 3,
    ACTIONS(110), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(108), 19,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
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
  [277] = 3,
    ACTIONS(114), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(112), 19,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
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
  [306] = 3,
    ACTIONS(118), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(116), 19,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
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
  [335] = 3,
    ACTIONS(122), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(120), 19,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
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
  [364] = 3,
    ACTIONS(126), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(124), 19,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
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
  [393] = 3,
    ACTIONS(130), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(128), 19,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
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
  [422] = 3,
    ACTIONS(134), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(132), 19,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
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
  [451] = 3,
    ACTIONS(138), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(136), 19,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
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
  [480] = 3,
    ACTIONS(142), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(140), 19,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
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
  [509] = 3,
    ACTIONS(146), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(144), 19,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
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
  [538] = 3,
    ACTIONS(150), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(148), 19,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
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
  [567] = 3,
    ACTIONS(154), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(152), 19,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
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
  [596] = 3,
    ACTIONS(158), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(156), 19,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
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
  [625] = 3,
    ACTIONS(162), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(160), 19,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
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
  [654] = 3,
    ACTIONS(166), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(164), 19,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
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
  [683] = 3,
    ACTIONS(170), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(168), 19,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
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
  [712] = 3,
    ACTIONS(174), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(172), 19,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
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
  [741] = 3,
    ACTIONS(178), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(176), 19,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_importmod,
      sym_KEYWORD_importfile,
      sym_KEYWORD_importves,
      sym_KEYWORD_useltx3,
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
  [770] = 6,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(31), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(57), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [792] = 6,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(34), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(57), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [814] = 6,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(33), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(57), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [836] = 6,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(34), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(57), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [858] = 6,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(34), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(57), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [880] = 6,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_options,
    STATE(48), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [900] = 6,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    ACTIONS(208), 1,
      aux_sym_options_token1,
    STATE(39), 1,
      aux_sym_options_repeat1,
    STATE(56), 1,
      aux_sym_options_repeat2,
    ACTIONS(210), 2,
      sym_line_comment,
      sym_multiline_comment,
  [920] = 4,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_options,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(212), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [935] = 4,
    ACTIONS(208), 1,
      aux_sym_options_token1,
    STATE(39), 1,
      aux_sym_options_repeat1,
    ACTIONS(210), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(214), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [950] = 4,
    ACTIONS(218), 1,
      aux_sym_options_token1,
    STATE(39), 1,
      aux_sym_options_repeat1,
    ACTIONS(210), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(216), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [965] = 4,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym_options,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(221), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [980] = 4,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 1,
      aux_sym_useenv_decl_token1,
    STATE(41), 1,
      aux_sym_useenv_decl_repeat2,
    ACTIONS(210), 2,
      sym_line_comment,
      sym_multiline_comment,
  [994] = 4,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    ACTIONS(230), 1,
      aux_sym_mandantory_arg_token1,
    STATE(51), 1,
      aux_sym_mandantory_arg_repeat1,
    ACTIONS(210), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1008] = 4,
    ACTIONS(232), 1,
      anon_sym_DOLLAR,
    ACTIONS(234), 1,
      aux_sym_inline_math_token1,
    STATE(70), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(210), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1022] = 4,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    ACTIONS(238), 1,
      aux_sym_useenv_decl_token1,
    STATE(41), 1,
      aux_sym_useenv_decl_repeat2,
    ACTIONS(210), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1036] = 4,
    ACTIONS(240), 1,
      aux_sym_inline_math_token1,
    ACTIONS(242), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(71), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(210), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1050] = 4,
    ACTIONS(244), 1,
      anon_sym_LF,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    ACTIONS(248), 1,
      sym_class_pkg_name,
    ACTIONS(210), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1064] = 4,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1078] = 4,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1092] = 4,
    ACTIONS(238), 1,
      aux_sym_useenv_decl_token1,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_useenv_decl_repeat2,
    ACTIONS(210), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1106] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(256), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1116] = 4,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    ACTIONS(260), 1,
      aux_sym_mandantory_arg_token1,
    STATE(63), 1,
      aux_sym_mandantory_arg_repeat1,
    ACTIONS(210), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1130] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(262), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1140] = 4,
    ACTIONS(264), 1,
      aux_sym_optional_arg_token1,
    ACTIONS(266), 1,
      anon_sym_RBRACK,
    STATE(65), 1,
      aux_sym_optional_arg_repeat1,
    ACTIONS(210), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1154] = 4,
    ACTIONS(268), 1,
      anon_sym_DOLLAR,
    ACTIONS(270), 1,
      aux_sym_inline_math_token1,
    STATE(43), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(210), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1168] = 4,
    ACTIONS(272), 1,
      aux_sym_optional_arg_token1,
    ACTIONS(274), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      aux_sym_optional_arg_repeat1,
    ACTIONS(210), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1182] = 4,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_options_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1196] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(280), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1206] = 4,
    ACTIONS(248), 1,
      sym_class_pkg_name,
    ACTIONS(282), 1,
      anon_sym_LF,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    ACTIONS(210), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1220] = 4,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1234] = 4,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1248] = 4,
    ACTIONS(293), 1,
      aux_sym_useenv_decl_token1,
    STATE(44), 1,
      aux_sym_useenv_decl_repeat2,
    STATE(88), 1,
      sym_luacode_contents,
    ACTIONS(210), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1262] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(295), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1272] = 4,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
    ACTIONS(299), 1,
      aux_sym_mandantory_arg_token1,
    STATE(63), 1,
      aux_sym_mandantory_arg_repeat1,
    ACTIONS(210), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1286] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(302), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1296] = 4,
    ACTIONS(304), 1,
      aux_sym_optional_arg_token1,
    ACTIONS(307), 1,
      anon_sym_RBRACK,
    STATE(65), 1,
      aux_sym_optional_arg_repeat1,
    ACTIONS(210), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1310] = 4,
    ACTIONS(238), 1,
      aux_sym_useenv_decl_token1,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_useenv_decl_repeat2,
    ACTIONS(210), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1324] = 4,
    ACTIONS(311), 1,
      aux_sym_inline_math_token1,
    ACTIONS(313), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(45), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(210), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1338] = 4,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_options_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1352] = 4,
    ACTIONS(248), 1,
      sym_class_pkg_name,
    ACTIONS(320), 1,
      anon_sym_LF,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    ACTIONS(210), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1366] = 4,
    ACTIONS(324), 1,
      anon_sym_DOLLAR,
    ACTIONS(326), 1,
      aux_sym_inline_math_token1,
    STATE(70), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(210), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1380] = 4,
    ACTIONS(324), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(329), 1,
      aux_sym_inline_math_token1,
    STATE(71), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(210), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1394] = 3,
    ACTIONS(332), 1,
      aux_sym_options_token1,
    STATE(36), 1,
      aux_sym_options_repeat1,
    ACTIONS(210), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1405] = 3,
    ACTIONS(334), 1,
      aux_sym_useenv_decl_token1,
    STATE(66), 1,
      aux_sym_useenv_decl_repeat2,
    ACTIONS(210), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1416] = 3,
    ACTIONS(336), 1,
      aux_sym_useenv_decl_token1,
    STATE(49), 1,
      aux_sym_useenv_decl_repeat2,
    ACTIONS(210), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1427] = 3,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    ACTIONS(338), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1438] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(212), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1447] = 3,
    ACTIONS(340), 1,
      anon_sym_LBRACE,
    ACTIONS(342), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1458] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(344), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1467] = 3,
    ACTIONS(248), 1,
      sym_class_pkg_name,
    ACTIONS(346), 1,
      anon_sym_LF,
    ACTIONS(210), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1478] = 3,
    ACTIONS(348), 1,
      aux_sym_options_token1,
    STATE(38), 1,
      aux_sym_options_repeat1,
    ACTIONS(210), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1489] = 3,
    ACTIONS(338), 1,
      sym_class_pkg_name,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1500] = 3,
    ACTIONS(338), 1,
      sym_class_pkg_name,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1511] = 2,
    ACTIONS(354), 1,
      sym_letter,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1519] = 2,
    ACTIONS(356), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1527] = 2,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1535] = 2,
    ACTIONS(360), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1543] = 2,
    ACTIONS(362), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1551] = 2,
    ACTIONS(364), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1559] = 2,
    ACTIONS(366), 1,
      sym_latex_function_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1567] = 2,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1575] = 2,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1583] = 2,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1591] = 2,
    ACTIONS(374), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1599] = 2,
    ACTIONS(376), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1607] = 2,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1615] = 2,
    ACTIONS(380), 1,
      sym_env_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1623] = 2,
    ACTIONS(382), 1,
      sym_env_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1631] = 2,
    ACTIONS(384), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1639] = 2,
    ACTIONS(386), 1,
      sym_env_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1647] = 2,
    ACTIONS(338), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1655] = 2,
    ACTIONS(388), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1663] = 2,
    ACTIONS(390), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 31,
  [SMALL_STATE(6)] = 66,
  [SMALL_STATE(7)] = 101,
  [SMALL_STATE(8)] = 132,
  [SMALL_STATE(9)] = 161,
  [SMALL_STATE(10)] = 190,
  [SMALL_STATE(11)] = 219,
  [SMALL_STATE(12)] = 248,
  [SMALL_STATE(13)] = 277,
  [SMALL_STATE(14)] = 306,
  [SMALL_STATE(15)] = 335,
  [SMALL_STATE(16)] = 364,
  [SMALL_STATE(17)] = 393,
  [SMALL_STATE(18)] = 422,
  [SMALL_STATE(19)] = 451,
  [SMALL_STATE(20)] = 480,
  [SMALL_STATE(21)] = 509,
  [SMALL_STATE(22)] = 538,
  [SMALL_STATE(23)] = 567,
  [SMALL_STATE(24)] = 596,
  [SMALL_STATE(25)] = 625,
  [SMALL_STATE(26)] = 654,
  [SMALL_STATE(27)] = 683,
  [SMALL_STATE(28)] = 712,
  [SMALL_STATE(29)] = 741,
  [SMALL_STATE(30)] = 770,
  [SMALL_STATE(31)] = 792,
  [SMALL_STATE(32)] = 814,
  [SMALL_STATE(33)] = 836,
  [SMALL_STATE(34)] = 858,
  [SMALL_STATE(35)] = 880,
  [SMALL_STATE(36)] = 900,
  [SMALL_STATE(37)] = 920,
  [SMALL_STATE(38)] = 935,
  [SMALL_STATE(39)] = 950,
  [SMALL_STATE(40)] = 965,
  [SMALL_STATE(41)] = 980,
  [SMALL_STATE(42)] = 994,
  [SMALL_STATE(43)] = 1008,
  [SMALL_STATE(44)] = 1022,
  [SMALL_STATE(45)] = 1036,
  [SMALL_STATE(46)] = 1050,
  [SMALL_STATE(47)] = 1064,
  [SMALL_STATE(48)] = 1078,
  [SMALL_STATE(49)] = 1092,
  [SMALL_STATE(50)] = 1106,
  [SMALL_STATE(51)] = 1116,
  [SMALL_STATE(52)] = 1130,
  [SMALL_STATE(53)] = 1140,
  [SMALL_STATE(54)] = 1154,
  [SMALL_STATE(55)] = 1168,
  [SMALL_STATE(56)] = 1182,
  [SMALL_STATE(57)] = 1196,
  [SMALL_STATE(58)] = 1206,
  [SMALL_STATE(59)] = 1220,
  [SMALL_STATE(60)] = 1234,
  [SMALL_STATE(61)] = 1248,
  [SMALL_STATE(62)] = 1262,
  [SMALL_STATE(63)] = 1272,
  [SMALL_STATE(64)] = 1286,
  [SMALL_STATE(65)] = 1296,
  [SMALL_STATE(66)] = 1310,
  [SMALL_STATE(67)] = 1324,
  [SMALL_STATE(68)] = 1338,
  [SMALL_STATE(69)] = 1352,
  [SMALL_STATE(70)] = 1366,
  [SMALL_STATE(71)] = 1380,
  [SMALL_STATE(72)] = 1394,
  [SMALL_STATE(73)] = 1405,
  [SMALL_STATE(74)] = 1416,
  [SMALL_STATE(75)] = 1427,
  [SMALL_STATE(76)] = 1438,
  [SMALL_STATE(77)] = 1447,
  [SMALL_STATE(78)] = 1458,
  [SMALL_STATE(79)] = 1467,
  [SMALL_STATE(80)] = 1478,
  [SMALL_STATE(81)] = 1489,
  [SMALL_STATE(82)] = 1500,
  [SMALL_STATE(83)] = 1511,
  [SMALL_STATE(84)] = 1519,
  [SMALL_STATE(85)] = 1527,
  [SMALL_STATE(86)] = 1535,
  [SMALL_STATE(87)] = 1543,
  [SMALL_STATE(88)] = 1551,
  [SMALL_STATE(89)] = 1559,
  [SMALL_STATE(90)] = 1567,
  [SMALL_STATE(91)] = 1575,
  [SMALL_STATE(92)] = 1583,
  [SMALL_STATE(93)] = 1591,
  [SMALL_STATE(94)] = 1599,
  [SMALL_STATE(95)] = 1607,
  [SMALL_STATE(96)] = 1615,
  [SMALL_STATE(97)] = 1623,
  [SMALL_STATE(98)] = 1631,
  [SMALL_STATE(99)] = 1639,
  [SMALL_STATE(100)] = 1647,
  [SMALL_STATE(101)] = 1655,
  [SMALL_STATE(102)] = 1663,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vesti_content, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 3, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singlepkg_decl, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_singlepkg_decl, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docclass_decl, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docclass_decl, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 4, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 4, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docclass_decl, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docclass_decl, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endenv_decl, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endenv_decl, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_latex_function, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_latex_function, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_math, 3, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display_math, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singlepkg_decl, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_singlepkg_decl, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begenv_decl, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begenv_decl, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importfile_decl, 4, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_importfile_decl, 4, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importves_decl, 4, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_importves_decl, 4, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 6, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 6, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begenv_decl, 4, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begenv_decl, 4, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_luacode, 4, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_luacode, 4, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_math, 2, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display_math, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 5, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 5, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_useenv_decl, 5, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_useenv_decl, 5, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importmod_decl, 4, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_importmod_decl, 4, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 4, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 4, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_useenv_decl, 6, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_useenv_decl, 6, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 7, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 7, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 8, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 8, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_useenv_decl_repeat1, 2, 0, 0),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_useenv_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_useenv_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipkg_decl_repeat1, 3, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_repeat2, 2, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_repeat1, 2, 0, 0),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipkg_decl_repeat1, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_useenv_decl_repeat2, 2, 0, 0),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_useenv_decl_repeat2, 2, 0, 0), SHIFT_REPEAT(41),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_luacode_contents, 1, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mandantory_arg, 2, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_arg, 2, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_arg, 1, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipkg_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mandantory_arg, 3, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mandantory_arg_repeat1, 2, 0, 0),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mandantory_arg_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_arg, 3, 0, 0),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_optional_arg_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_optional_arg_repeat1, 2, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat2, 2, 0, 0), SHIFT_REPEAT(80),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_repeat2, 2, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_math_repeat1, 2, 0, 0),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_math_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_math_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipkg_decl_repeat1, 4, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [388] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
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
