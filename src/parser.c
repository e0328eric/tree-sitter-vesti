#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 85
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  anon_sym_COMMA = 2,
  anon_sym_LF = 3,
  anon_sym_RBRACE = 4,
  aux_sym_env_decl_token1 = 5,
  anon_sym_BSLASH = 6,
  anon_sym_AT = 7,
  anon_sym_DOLLAR = 8,
  aux_sym_inline_math_token1 = 9,
  anon_sym_DOLLAR_DOLLAR = 10,
  anon_sym_LPAREN = 11,
  aux_sym_options_token1 = 12,
  anon_sym_RPAREN = 13,
  aux_sym_mandantory_arg_token1 = 14,
  anon_sym_LBRACK = 15,
  aux_sym_optional_arg_token1 = 16,
  anon_sym_RBRACK = 17,
  sym_class_pkg_name = 18,
  sym_env_name = 19,
  sym_KEYWORD_docclass = 20,
  sym_KEYWORD_importpkg = 21,
  sym_KEYWORD_useltx3 = 22,
  sym_KEYWORD_startdoc = 23,
  sym_KEYWORD_useenv = 24,
  sym_KEYWORD_makeatletter = 25,
  sym_KEYWORD_makeatother = 26,
  sym_KEYWORD_ltx3on = 27,
  sym_KEYWORD_ltx3off = 28,
  sym_KEYWORD_nonstopmode = 29,
  sym_KEYWORD_luacode = 30,
  sym_digit = 31,
  sym_ascii_letter = 32,
  sym_letter = 33,
  sym_line_comment = 34,
  sym_multiline_comment = 35,
  sym_vesti_content = 36,
  sym_statement = 37,
  sym_docclass_decl = 38,
  sym_singlepkg_decl = 39,
  sym_multipkg_decl = 40,
  sym_env_decl = 41,
  sym_luacode = 42,
  sym_luacode_contents = 43,
  sym_latex_function = 44,
  sym_inline_math = 45,
  sym_display_math = 46,
  sym_options = 47,
  sym_env_arg = 48,
  sym_mandantory_arg = 49,
  sym_optional_arg = 50,
  aux_sym_vesti_content_repeat1 = 51,
  aux_sym_multipkg_decl_repeat1 = 52,
  aux_sym_env_decl_repeat1 = 53,
  aux_sym_env_decl_repeat2 = 54,
  aux_sym_latex_function_repeat1 = 55,
  aux_sym_inline_math_repeat1 = 56,
  aux_sym_options_repeat1 = 57,
  aux_sym_options_repeat2 = 58,
  aux_sym_mandantory_arg_repeat1 = 59,
  aux_sym_optional_arg_repeat1 = 60,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_LF] = "\n",
  [anon_sym_RBRACE] = "}",
  [aux_sym_env_decl_token1] = "env_decl_token1",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_AT] = "@",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_inline_math_token1] = "inline_math_token1",
  [anon_sym_DOLLAR_DOLLAR] = "$$",
  [anon_sym_LPAREN] = "(",
  [aux_sym_options_token1] = "options_token1",
  [anon_sym_RPAREN] = ")",
  [aux_sym_mandantory_arg_token1] = "mandantory_arg_token1",
  [anon_sym_LBRACK] = "[",
  [aux_sym_optional_arg_token1] = "optional_arg_token1",
  [anon_sym_RBRACK] = "]",
  [sym_class_pkg_name] = "class_pkg_name",
  [sym_env_name] = "env_name",
  [sym_KEYWORD_docclass] = "KEYWORD_docclass",
  [sym_KEYWORD_importpkg] = "KEYWORD_importpkg",
  [sym_KEYWORD_useltx3] = "KEYWORD_useltx3",
  [sym_KEYWORD_startdoc] = "KEYWORD_startdoc",
  [sym_KEYWORD_useenv] = "KEYWORD_useenv",
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
  [sym_env_decl] = "env_decl",
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
  [aux_sym_env_decl_repeat1] = "env_decl_repeat1",
  [aux_sym_env_decl_repeat2] = "env_decl_repeat2",
  [aux_sym_latex_function_repeat1] = "latex_function_repeat1",
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
  [aux_sym_env_decl_token1] = aux_sym_env_decl_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_inline_math_token1] = aux_sym_inline_math_token1,
  [anon_sym_DOLLAR_DOLLAR] = anon_sym_DOLLAR_DOLLAR,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_options_token1] = aux_sym_options_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_mandantory_arg_token1] = aux_sym_mandantory_arg_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_optional_arg_token1] = aux_sym_optional_arg_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_class_pkg_name] = sym_class_pkg_name,
  [sym_env_name] = sym_env_name,
  [sym_KEYWORD_docclass] = sym_KEYWORD_docclass,
  [sym_KEYWORD_importpkg] = sym_KEYWORD_importpkg,
  [sym_KEYWORD_useltx3] = sym_KEYWORD_useltx3,
  [sym_KEYWORD_startdoc] = sym_KEYWORD_startdoc,
  [sym_KEYWORD_useenv] = sym_KEYWORD_useenv,
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
  [sym_env_decl] = sym_env_decl,
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
  [aux_sym_env_decl_repeat1] = aux_sym_env_decl_repeat1,
  [aux_sym_env_decl_repeat2] = aux_sym_env_decl_repeat2,
  [aux_sym_latex_function_repeat1] = aux_sym_latex_function_repeat1,
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
  [aux_sym_env_decl_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_options_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
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
  [sym_env_decl] = {
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
  [aux_sym_env_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_env_decl_repeat2] = {
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
  [64] = 48,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
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
      if (eof) ADVANCE(76);
      ADVANCE_MAP(
        '$', 87,
        '%', 14,
        '(', 92,
        ')', 97,
        ',', 78,
        '@', 85,
        '[', 101,
        '\\', 84,
        ']', 105,
        'd', 124,
        'i', 123,
        'l', 127,
        'm', 122,
        'n', 125,
        's', 128,
        'u', 126,
        '{', 77,
        '}', 80,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      if (set_contains(sym_letter_character_set_1, 429, lookahead)) ADVANCE(129);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '%') ADVANCE(14);
      if (lookahead == '}') ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(91);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(86);
      if (lookahead == '%') ADVANCE(90);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '%') ADVANCE(90);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(14);
      if (lookahead == '{') ADVANCE(77);
      if (lookahead == '}') ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (set_contains(sym_letter_character_set_1, 429, lookahead)) ADVANCE(129);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(138);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(96);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == ',') ADVANCE(78);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(96);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(93);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '}') ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 12:
      if (lookahead == '%') ADVANCE(100);
      if (lookahead == ')') ADVANCE(97);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 13:
      if (lookahead == '%') ADVANCE(104);
      if (lookahead == ']') ADVANCE(105);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '-') ADVANCE(137);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '3') ADVANCE(111);
      END_STATE();
    case 17:
      if (lookahead == '3') ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(117);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(110);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(33);
      END_STATE();
    case 41:
      if (lookahead == 'k') ADVANCE(39);
      END_STATE();
    case 42:
      if (lookahead == 'k') ADVANCE(34);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 72:
      if (lookahead == 'v') ADVANCE(113);
      END_STATE();
    case 73:
      if (lookahead == 'x') ADVANCE(17);
      END_STATE();
    case 74:
      if (lookahead == 'x') ADVANCE(16);
      END_STATE();
    case 75:
      if (eof) ADVANCE(76);
      ADVANCE_MAP(
        '$', 87,
        '%', 14,
        '(', 92,
        ',', 78,
        '@', 85,
        '\\', 84,
        'd', 132,
        'i', 131,
        'l', 135,
        'm', 130,
        'n', 133,
        's', 136,
        'u', 134,
        '}', 80,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(75);
      if (set_contains(sym_letter_character_set_1, 429, lookahead)) ADVANCE(129);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_env_decl_token1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_env_decl_token1);
      if (lookahead == '%') ADVANCE(83);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(81);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_env_decl_token1);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '-') ADVANCE(137);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_inline_math_token1);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_inline_math_token1);
      if (lookahead == '%') ADVANCE(90);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%') ADVANCE(88);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_inline_math_token1);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '-') ADVANCE(137);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_options_token1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_options_token1);
      if (lookahead == '%') ADVANCE(96);
      if (lookahead == ')') ADVANCE(97);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(93);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_options_token1);
      if (lookahead == '%') ADVANCE(96);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(93);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_options_token1);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '-') ADVANCE(137);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_mandantory_arg_token1);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_mandantory_arg_token1);
      if (lookahead == '%') ADVANCE(100);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(98);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_mandantory_arg_token1);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '-') ADVANCE(137);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_optional_arg_token1);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_optional_arg_token1);
      if (lookahead == '%') ADVANCE(104);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(102);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_optional_arg_token1);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '-') ADVANCE(137);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_class_pkg_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_env_name);
      if (lookahead == '*') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_env_name);
      if (lookahead == '*') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_KEYWORD_docclass);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_KEYWORD_importpkg);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_KEYWORD_useltx3);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_KEYWORD_startdoc);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_KEYWORD_useenv);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_KEYWORD_makeatletter);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_KEYWORD_makeatother);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_KEYWORD_ltx3on);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_KEYWORD_ltx3off);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_KEYWORD_nonstopmode);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_KEYWORD_luacode);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_digit);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_ascii_letter);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_ascii_letter);
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_ascii_letter);
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_ascii_letter);
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_ascii_letter);
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_ascii_letter);
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_ascii_letter);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_ascii_letter);
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_letter);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_letter);
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_letter);
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_letter);
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_letter);
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_letter);
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_letter);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_letter);
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_multiline_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 75},
  [2] = {.lex_state = 75},
  [3] = {.lex_state = 75},
  [4] = {.lex_state = 75},
  [5] = {.lex_state = 75},
  [6] = {.lex_state = 75},
  [7] = {.lex_state = 75},
  [8] = {.lex_state = 75},
  [9] = {.lex_state = 75},
  [10] = {.lex_state = 75},
  [11] = {.lex_state = 75},
  [12] = {.lex_state = 75},
  [13] = {.lex_state = 75},
  [14] = {.lex_state = 75},
  [15] = {.lex_state = 75},
  [16] = {.lex_state = 75},
  [17] = {.lex_state = 75},
  [18] = {.lex_state = 75},
  [19] = {.lex_state = 75},
  [20] = {.lex_state = 75},
  [21] = {.lex_state = 75},
  [22] = {.lex_state = 75},
  [23] = {.lex_state = 75},
  [24] = {.lex_state = 75},
  [25] = {.lex_state = 75},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 13},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 13},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 11},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 7},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_KEYWORD_docclass] = ACTIONS(1),
    [sym_KEYWORD_importpkg] = ACTIONS(1),
    [sym_KEYWORD_useltx3] = ACTIONS(1),
    [sym_KEYWORD_startdoc] = ACTIONS(1),
    [sym_KEYWORD_useenv] = ACTIONS(1),
    [sym_KEYWORD_makeatletter] = ACTIONS(1),
    [sym_KEYWORD_makeatother] = ACTIONS(1),
    [sym_KEYWORD_ltx3on] = ACTIONS(1),
    [sym_KEYWORD_ltx3off] = ACTIONS(1),
    [sym_KEYWORD_nonstopmode] = ACTIONS(1),
    [sym_KEYWORD_luacode] = ACTIONS(1),
    [sym_digit] = ACTIONS(1),
    [sym_ascii_letter] = ACTIONS(1),
    [sym_letter] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_vesti_content] = STATE(80),
    [sym_statement] = STATE(2),
    [sym_docclass_decl] = STATE(12),
    [sym_singlepkg_decl] = STATE(12),
    [sym_multipkg_decl] = STATE(12),
    [sym_env_decl] = STATE(12),
    [sym_luacode] = STATE(12),
    [sym_latex_function] = STATE(12),
    [sym_inline_math] = STATE(12),
    [sym_display_math] = STATE(12),
    [aux_sym_vesti_content_repeat1] = STATE(2),
    [anon_sym_BSLASH] = ACTIONS(5),
    [anon_sym_DOLLAR] = ACTIONS(7),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(9),
    [sym_KEYWORD_docclass] = ACTIONS(11),
    [sym_KEYWORD_importpkg] = ACTIONS(13),
    [sym_KEYWORD_useltx3] = ACTIONS(15),
    [sym_KEYWORD_startdoc] = ACTIONS(15),
    [sym_KEYWORD_useenv] = ACTIONS(17),
    [sym_KEYWORD_makeatletter] = ACTIONS(15),
    [sym_KEYWORD_makeatother] = ACTIONS(15),
    [sym_KEYWORD_ltx3on] = ACTIONS(15),
    [sym_KEYWORD_ltx3off] = ACTIONS(15),
    [sym_KEYWORD_nonstopmode] = ACTIONS(15),
    [sym_KEYWORD_luacode] = ACTIONS(19),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(5), 1,
      anon_sym_BSLASH,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(11), 1,
      sym_KEYWORD_docclass,
    ACTIONS(13), 1,
      sym_KEYWORD_importpkg,
    ACTIONS(17), 1,
      sym_KEYWORD_useenv,
    ACTIONS(19), 1,
      sym_KEYWORD_luacode,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(3), 2,
      sym_statement,
      aux_sym_vesti_content_repeat1,
    ACTIONS(15), 7,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
    STATE(12), 8,
      sym_docclass_decl,
      sym_singlepkg_decl,
      sym_multipkg_decl,
      sym_env_decl,
      sym_luacode,
      sym_latex_function,
      sym_inline_math,
      sym_display_math,
  [52] = 12,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(28), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(34), 1,
      sym_KEYWORD_docclass,
    ACTIONS(37), 1,
      sym_KEYWORD_importpkg,
    ACTIONS(43), 1,
      sym_KEYWORD_useenv,
    ACTIONS(46), 1,
      sym_KEYWORD_luacode,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(3), 2,
      sym_statement,
      aux_sym_vesti_content_repeat1,
    ACTIONS(40), 7,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
    STATE(12), 8,
      sym_docclass_decl,
      sym_singlepkg_decl,
      sym_multipkg_decl,
      sym_env_decl,
      sym_luacode,
      sym_latex_function,
      sym_inline_math,
      sym_display_math,
  [104] = 6,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      anon_sym_DOLLAR,
    ACTIONS(55), 1,
      sym_letter,
    STATE(5), 1,
      aux_sym_latex_function_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(49), 14,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
  [137] = 6,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      sym_letter,
    STATE(6), 1,
      aux_sym_latex_function_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(57), 14,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
  [170] = 6,
    ACTIONS(67), 1,
      anon_sym_AT,
    ACTIONS(70), 1,
      anon_sym_DOLLAR,
    ACTIONS(72), 1,
      sym_letter,
    STATE(6), 1,
      aux_sym_latex_function_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(65), 14,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
  [203] = 5,
    ACTIONS(77), 1,
      anon_sym_DOLLAR,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_options,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(75), 14,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
  [233] = 5,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DOLLAR,
    STATE(17), 1,
      sym_options,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(81), 14,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
  [263] = 3,
    ACTIONS(87), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(85), 16,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
  [289] = 3,
    ACTIONS(91), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(89), 16,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
  [315] = 3,
    ACTIONS(95), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(93), 14,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
  [339] = 3,
    ACTIONS(99), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(97), 14,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
  [363] = 3,
    ACTIONS(103), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(101), 14,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
  [387] = 3,
    ACTIONS(107), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(105), 14,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
  [411] = 3,
    ACTIONS(111), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(109), 14,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
  [435] = 3,
    ACTIONS(115), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(113), 14,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
  [459] = 3,
    ACTIONS(119), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(117), 14,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
  [483] = 3,
    ACTIONS(123), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(121), 14,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
  [507] = 3,
    ACTIONS(127), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(125), 14,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
  [531] = 3,
    ACTIONS(131), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(129), 14,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
  [555] = 3,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(133), 14,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
  [579] = 3,
    ACTIONS(139), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(137), 14,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
  [603] = 3,
    ACTIONS(143), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(141), 14,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
  [627] = 3,
    ACTIONS(147), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(145), 14,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
  [651] = 3,
    ACTIONS(151), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(149), 14,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_DOLLAR_DOLLAR,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useltx3,
      sym_KEYWORD_startdoc,
      sym_KEYWORD_useenv,
      sym_KEYWORD_makeatletter,
      sym_KEYWORD_makeatother,
      sym_KEYWORD_ltx3on,
      sym_KEYWORD_ltx3off,
      sym_KEYWORD_nonstopmode,
      sym_KEYWORD_luacode,
  [675] = 6,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(27), 2,
      sym_env_arg,
      aux_sym_env_decl_repeat1,
    STATE(63), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [697] = 6,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(27), 2,
      sym_env_arg,
      aux_sym_env_decl_repeat1,
    STATE(63), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [719] = 6,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(26), 2,
      sym_env_arg,
      aux_sym_env_decl_repeat1,
    STATE(63), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [741] = 6,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      aux_sym_options_token1,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      aux_sym_options_repeat1,
    STATE(49), 1,
      aux_sym_options_repeat2,
    ACTIONS(175), 2,
      sym_line_comment,
      sym_multiline_comment,
  [761] = 6,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym_options,
    STATE(39), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [781] = 4,
    ACTIONS(171), 1,
      aux_sym_options_token1,
    STATE(33), 1,
      aux_sym_options_repeat1,
    ACTIONS(175), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(181), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [796] = 4,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
      sym_options,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(183), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [811] = 4,
    ACTIONS(187), 1,
      aux_sym_options_token1,
    STATE(33), 1,
      aux_sym_options_repeat1,
    ACTIONS(175), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(185), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [826] = 4,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym_options,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(190), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [841] = 4,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    ACTIONS(194), 1,
      aux_sym_env_decl_token1,
    STATE(46), 1,
      aux_sym_env_decl_repeat2,
    ACTIONS(175), 2,
      sym_line_comment,
      sym_multiline_comment,
  [855] = 4,
    ACTIONS(194), 1,
      aux_sym_env_decl_token1,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      aux_sym_env_decl_repeat2,
    ACTIONS(175), 2,
      sym_line_comment,
      sym_multiline_comment,
  [869] = 4,
    ACTIONS(198), 1,
      anon_sym_LF,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(202), 1,
      sym_class_pkg_name,
    ACTIONS(175), 2,
      sym_line_comment,
      sym_multiline_comment,
  [883] = 4,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [897] = 4,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [911] = 4,
    ACTIONS(208), 1,
      aux_sym_env_decl_token1,
    STATE(36), 1,
      aux_sym_env_decl_repeat2,
    STATE(78), 1,
      sym_luacode_contents,
    ACTIONS(175), 2,
      sym_line_comment,
      sym_multiline_comment,
  [925] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(210), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [935] = 4,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    ACTIONS(214), 1,
      aux_sym_mandantory_arg_token1,
    STATE(54), 1,
      aux_sym_mandantory_arg_repeat1,
    ACTIONS(175), 2,
      sym_line_comment,
      sym_multiline_comment,
  [949] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(216), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [959] = 4,
    ACTIONS(218), 1,
      aux_sym_optional_arg_token1,
    ACTIONS(220), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_optional_arg_repeat1,
    ACTIONS(175), 2,
      sym_line_comment,
      sym_multiline_comment,
  [973] = 4,
    ACTIONS(222), 1,
      anon_sym_DOLLAR,
    ACTIONS(224), 1,
      aux_sym_inline_math_token1,
    STATE(52), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(175), 2,
      sym_line_comment,
      sym_multiline_comment,
  [987] = 4,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    ACTIONS(228), 1,
      aux_sym_env_decl_token1,
    STATE(46), 1,
      aux_sym_env_decl_repeat2,
    ACTIONS(175), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1001] = 4,
    ACTIONS(231), 1,
      aux_sym_inline_math_token1,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(58), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(175), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1015] = 4,
    ACTIONS(235), 1,
      anon_sym_DOLLAR,
    ACTIONS(237), 1,
      aux_sym_inline_math_token1,
    STATE(48), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(175), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1029] = 4,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_options_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1043] = 4,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1057] = 4,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1071] = 4,
    ACTIONS(251), 1,
      anon_sym_DOLLAR,
    ACTIONS(253), 1,
      aux_sym_inline_math_token1,
    STATE(48), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(175), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1085] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(255), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1095] = 4,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    ACTIONS(259), 1,
      aux_sym_mandantory_arg_token1,
    STATE(54), 1,
      aux_sym_mandantory_arg_repeat1,
    ACTIONS(175), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1109] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(262), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1119] = 4,
    ACTIONS(264), 1,
      aux_sym_optional_arg_token1,
    ACTIONS(267), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_optional_arg_repeat1,
    ACTIONS(175), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1133] = 4,
    ACTIONS(194), 1,
      aux_sym_env_decl_token1,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      aux_sym_env_decl_repeat2,
    ACTIONS(175), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1147] = 4,
    ACTIONS(271), 1,
      aux_sym_inline_math_token1,
    ACTIONS(273), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(64), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(175), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1161] = 4,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_options_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1175] = 4,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    ACTIONS(282), 1,
      aux_sym_mandantory_arg_token1,
    STATE(42), 1,
      aux_sym_mandantory_arg_repeat1,
    ACTIONS(175), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1189] = 4,
    ACTIONS(202), 1,
      sym_class_pkg_name,
    ACTIONS(284), 1,
      anon_sym_LF,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
    ACTIONS(175), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1203] = 4,
    ACTIONS(288), 1,
      aux_sym_optional_arg_token1,
    ACTIONS(290), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      aux_sym_optional_arg_repeat1,
    ACTIONS(175), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1217] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(292), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1227] = 4,
    ACTIONS(235), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(294), 1,
      aux_sym_inline_math_token1,
    STATE(64), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(175), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1241] = 4,
    ACTIONS(202), 1,
      sym_class_pkg_name,
    ACTIONS(297), 1,
      anon_sym_LF,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    ACTIONS(175), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1255] = 3,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    ACTIONS(303), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1266] = 3,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    ACTIONS(305), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1277] = 3,
    ACTIONS(307), 1,
      aux_sym_options_token1,
    STATE(29), 1,
      aux_sym_options_repeat1,
    ACTIONS(175), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1288] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(183), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1297] = 3,
    ACTIONS(309), 1,
      aux_sym_env_decl_token1,
    STATE(35), 1,
      aux_sym_env_decl_repeat2,
    ACTIONS(175), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1308] = 3,
    ACTIONS(305), 1,
      sym_class_pkg_name,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1319] = 3,
    ACTIONS(313), 1,
      aux_sym_options_token1,
    STATE(31), 1,
      aux_sym_options_repeat1,
    ACTIONS(175), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1330] = 3,
    ACTIONS(202), 1,
      sym_class_pkg_name,
    ACTIONS(315), 1,
      anon_sym_LF,
    ACTIONS(175), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1341] = 3,
    ACTIONS(305), 1,
      sym_class_pkg_name,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1352] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(319), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1361] = 3,
    ACTIONS(321), 1,
      aux_sym_env_decl_token1,
    STATE(57), 1,
      aux_sym_env_decl_repeat2,
    ACTIONS(175), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1372] = 2,
    ACTIONS(323), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1380] = 2,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1388] = 2,
    ACTIONS(327), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1396] = 2,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1404] = 2,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1412] = 2,
    ACTIONS(333), 1,
      sym_env_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1420] = 2,
    ACTIONS(305), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [1428] = 2,
    ACTIONS(335), 1,
      sym_letter,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 137,
  [SMALL_STATE(6)] = 170,
  [SMALL_STATE(7)] = 203,
  [SMALL_STATE(8)] = 233,
  [SMALL_STATE(9)] = 263,
  [SMALL_STATE(10)] = 289,
  [SMALL_STATE(11)] = 315,
  [SMALL_STATE(12)] = 339,
  [SMALL_STATE(13)] = 363,
  [SMALL_STATE(14)] = 387,
  [SMALL_STATE(15)] = 411,
  [SMALL_STATE(16)] = 435,
  [SMALL_STATE(17)] = 459,
  [SMALL_STATE(18)] = 483,
  [SMALL_STATE(19)] = 507,
  [SMALL_STATE(20)] = 531,
  [SMALL_STATE(21)] = 555,
  [SMALL_STATE(22)] = 579,
  [SMALL_STATE(23)] = 603,
  [SMALL_STATE(24)] = 627,
  [SMALL_STATE(25)] = 651,
  [SMALL_STATE(26)] = 675,
  [SMALL_STATE(27)] = 697,
  [SMALL_STATE(28)] = 719,
  [SMALL_STATE(29)] = 741,
  [SMALL_STATE(30)] = 761,
  [SMALL_STATE(31)] = 781,
  [SMALL_STATE(32)] = 796,
  [SMALL_STATE(33)] = 811,
  [SMALL_STATE(34)] = 826,
  [SMALL_STATE(35)] = 841,
  [SMALL_STATE(36)] = 855,
  [SMALL_STATE(37)] = 869,
  [SMALL_STATE(38)] = 883,
  [SMALL_STATE(39)] = 897,
  [SMALL_STATE(40)] = 911,
  [SMALL_STATE(41)] = 925,
  [SMALL_STATE(42)] = 935,
  [SMALL_STATE(43)] = 949,
  [SMALL_STATE(44)] = 959,
  [SMALL_STATE(45)] = 973,
  [SMALL_STATE(46)] = 987,
  [SMALL_STATE(47)] = 1001,
  [SMALL_STATE(48)] = 1015,
  [SMALL_STATE(49)] = 1029,
  [SMALL_STATE(50)] = 1043,
  [SMALL_STATE(51)] = 1057,
  [SMALL_STATE(52)] = 1071,
  [SMALL_STATE(53)] = 1085,
  [SMALL_STATE(54)] = 1095,
  [SMALL_STATE(55)] = 1109,
  [SMALL_STATE(56)] = 1119,
  [SMALL_STATE(57)] = 1133,
  [SMALL_STATE(58)] = 1147,
  [SMALL_STATE(59)] = 1161,
  [SMALL_STATE(60)] = 1175,
  [SMALL_STATE(61)] = 1189,
  [SMALL_STATE(62)] = 1203,
  [SMALL_STATE(63)] = 1217,
  [SMALL_STATE(64)] = 1227,
  [SMALL_STATE(65)] = 1241,
  [SMALL_STATE(66)] = 1255,
  [SMALL_STATE(67)] = 1266,
  [SMALL_STATE(68)] = 1277,
  [SMALL_STATE(69)] = 1288,
  [SMALL_STATE(70)] = 1297,
  [SMALL_STATE(71)] = 1308,
  [SMALL_STATE(72)] = 1319,
  [SMALL_STATE(73)] = 1330,
  [SMALL_STATE(74)] = 1341,
  [SMALL_STATE(75)] = 1352,
  [SMALL_STATE(76)] = 1361,
  [SMALL_STATE(77)] = 1372,
  [SMALL_STATE(78)] = 1380,
  [SMALL_STATE(79)] = 1388,
  [SMALL_STATE(80)] = 1396,
  [SMALL_STATE(81)] = 1404,
  [SMALL_STATE(82)] = 1412,
  [SMALL_STATE(83)] = 1420,
  [SMALL_STATE(84)] = 1428,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vesti_content, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_latex_function, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_latex_function, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_latex_function, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_latex_function, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_latex_function_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_latex_function_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_latex_function_repeat1, 2, 0, 0),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_latex_function_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docclass_decl, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docclass_decl, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singlepkg_decl, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_singlepkg_decl, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 4, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 4, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_math, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display_math, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_math, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display_math, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docclass_decl, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docclass_decl, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singlepkg_decl, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_singlepkg_decl, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_luacode, 4, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_luacode, 4, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 4, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 4, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_decl, 5, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_decl, 5, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 5, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 5, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 6, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 6, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_decl, 6, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_decl, 6, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 7, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 7, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 8, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 8, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_decl_repeat1, 2, 0, 0),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_env_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_env_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_repeat2, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipkg_decl_repeat1, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_repeat1, 2, 0, 0),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipkg_decl_repeat1, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_luacode_contents, 1, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mandantory_arg, 2, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_arg, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_decl_repeat2, 2, 0, 0),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_decl_repeat2, 2, 0, 0), SHIFT_REPEAT(46),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_math_repeat1, 2, 0, 0),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_math_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipkg_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mandantory_arg, 3, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mandantory_arg_repeat1, 2, 0, 0),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mandantory_arg_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_arg, 3, 0, 0),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_optional_arg_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_optional_arg_repeat1, 2, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat2, 2, 0, 0), SHIFT_REPEAT(72),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_repeat2, 2, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_arg, 1, 0, 0),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_math_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipkg_decl_repeat1, 4, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [329] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
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
