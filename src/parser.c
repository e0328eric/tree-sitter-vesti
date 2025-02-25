#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 203
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 76
#define ALIAS_COUNT 1
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  aux_sym_docclass_decl_token1 = 1,
  anon_sym_LBRACE = 2,
  anon_sym_COMMA = 3,
  anon_sym_RBRACE = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  sym_class_pkg_name = 7,
  sym_option_name = 8,
  aux_sym_begenv_decl_token1 = 9,
  aux_sym_mandantory_arg_token1 = 10,
  anon_sym_LBRACK = 11,
  aux_sym_optional_arg_token1 = 12,
  anon_sym_RBRACK = 13,
  sym_KEYWORD_docclass = 14,
  sym_KEYWORD_importpkg = 15,
  sym_KEYWORD_importmod = 16,
  sym_KEYWORD_importfile = 17,
  sym_KEYWORD_importves = 18,
  sym_KEYWORD_useltx3 = 19,
  sym_KEYWORD_getfp = 20,
  sym_KEYWORD_startdoc = 21,
  sym_KEYWORD_useenv = 22,
  sym_KEYWORD_begenv = 23,
  sym_KEYWORD_endenv = 24,
  sym_KEYWORD_makeatletter = 25,
  sym_KEYWORD_makeatother = 26,
  sym_KEYWORD_ltx3on = 27,
  sym_KEYWORD_ltx3off = 28,
  sym_KEYWORD_nonstopmode = 29,
  sym_KEYWORD_luacode = 30,
  anon_sym_DOLLAR = 31,
  aux_sym_inline_math_token1 = 32,
  anon_sym_DOLLAR_DOLLAR = 33,
  sym_word = 34,
  sym_placeholder = 35,
  sym_delimiter = 36,
  sym_latex_function = 37,
  sym_filepath = 38,
  sym_env_name = 39,
  sym_singleline_raw_latex = 40,
  sym_multiline_raw_latex = 41,
  sym_line_comment = 42,
  sym_multiline_comment = 43,
  sym_vesti_content = 44,
  sym__statement = 45,
  sym_docclass_decl = 46,
  sym_singlepkg_decl = 47,
  sym_multipkg_decl = 48,
  sym_options = 49,
  sym_importmod_decl = 50,
  sym_importfile_decl = 51,
  sym_importves_decl = 52,
  sym_getfp_decl = 53,
  sym_useenv_decl = 54,
  sym_begenv_decl = 55,
  sym_endenv_decl = 56,
  sym_env_arg = 57,
  sym_mandantory_arg = 58,
  sym_optional_arg = 59,
  sym_luacode = 60,
  sym__text_content = 61,
  sym_brace_group = 62,
  sym_paren_group = 63,
  sym__math = 64,
  sym_inline_math = 65,
  sym_display_math = 66,
  sym_text = 67,
  aux_sym_vesti_content_repeat1 = 68,
  aux_sym_multipkg_decl_repeat1 = 69,
  aux_sym_options_repeat1 = 70,
  aux_sym_useenv_decl_repeat1 = 71,
  aux_sym_mandantory_arg_repeat1 = 72,
  aux_sym_optional_arg_repeat1 = 73,
  aux_sym_inline_math_repeat1 = 74,
  aux_sym_text_repeat1 = 75,
  alias_sym_luacode_contents = 76,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_docclass_decl_token1] = "docclass_decl_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_class_pkg_name] = "class_pkg_name",
  [sym_option_name] = "option_name",
  [aux_sym_begenv_decl_token1] = "begenv_decl_token1",
  [aux_sym_mandantory_arg_token1] = "mandantory_arg_token1",
  [anon_sym_LBRACK] = "[",
  [aux_sym_optional_arg_token1] = "optional_arg_token1",
  [anon_sym_RBRACK] = "]",
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
  [anon_sym_DOLLAR] = "$",
  [aux_sym_inline_math_token1] = "inline_math_token1",
  [anon_sym_DOLLAR_DOLLAR] = "$$",
  [sym_word] = "word",
  [sym_placeholder] = "placeholder",
  [sym_delimiter] = "delimiter",
  [sym_latex_function] = "latex_function",
  [sym_filepath] = "filepath",
  [sym_env_name] = "env_name",
  [sym_singleline_raw_latex] = "singleline_raw_latex",
  [sym_multiline_raw_latex] = "multiline_raw_latex",
  [sym_line_comment] = "line_comment",
  [sym_multiline_comment] = "multiline_comment",
  [sym_vesti_content] = "vesti_content",
  [sym__statement] = "_statement",
  [sym_docclass_decl] = "docclass_decl",
  [sym_singlepkg_decl] = "singlepkg_decl",
  [sym_multipkg_decl] = "multipkg_decl",
  [sym_options] = "options",
  [sym_importmod_decl] = "importmod_decl",
  [sym_importfile_decl] = "importfile_decl",
  [sym_importves_decl] = "importves_decl",
  [sym_getfp_decl] = "getfp_decl",
  [sym_useenv_decl] = "useenv_decl",
  [sym_begenv_decl] = "begenv_decl",
  [sym_endenv_decl] = "endenv_decl",
  [sym_env_arg] = "env_arg",
  [sym_mandantory_arg] = "mandantory_arg",
  [sym_optional_arg] = "optional_arg",
  [sym_luacode] = "luacode",
  [sym__text_content] = "_text_content",
  [sym_brace_group] = "brace_group",
  [sym_paren_group] = "paren_group",
  [sym__math] = "_math",
  [sym_inline_math] = "inline_math",
  [sym_display_math] = "display_math",
  [sym_text] = "text",
  [aux_sym_vesti_content_repeat1] = "vesti_content_repeat1",
  [aux_sym_multipkg_decl_repeat1] = "multipkg_decl_repeat1",
  [aux_sym_options_repeat1] = "options_repeat1",
  [aux_sym_useenv_decl_repeat1] = "useenv_decl_repeat1",
  [aux_sym_mandantory_arg_repeat1] = "mandantory_arg_repeat1",
  [aux_sym_optional_arg_repeat1] = "optional_arg_repeat1",
  [aux_sym_inline_math_repeat1] = "inline_math_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
  [alias_sym_luacode_contents] = "luacode_contents",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_docclass_decl_token1] = aux_sym_docclass_decl_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_class_pkg_name] = sym_class_pkg_name,
  [sym_option_name] = sym_option_name,
  [aux_sym_begenv_decl_token1] = aux_sym_begenv_decl_token1,
  [aux_sym_mandantory_arg_token1] = aux_sym_mandantory_arg_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_optional_arg_token1] = aux_sym_optional_arg_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_inline_math_token1] = aux_sym_inline_math_token1,
  [anon_sym_DOLLAR_DOLLAR] = anon_sym_DOLLAR_DOLLAR,
  [sym_word] = sym_word,
  [sym_placeholder] = sym_placeholder,
  [sym_delimiter] = sym_delimiter,
  [sym_latex_function] = sym_latex_function,
  [sym_filepath] = sym_filepath,
  [sym_env_name] = sym_env_name,
  [sym_singleline_raw_latex] = sym_singleline_raw_latex,
  [sym_multiline_raw_latex] = sym_multiline_raw_latex,
  [sym_line_comment] = sym_line_comment,
  [sym_multiline_comment] = sym_multiline_comment,
  [sym_vesti_content] = sym_vesti_content,
  [sym__statement] = sym__statement,
  [sym_docclass_decl] = sym_docclass_decl,
  [sym_singlepkg_decl] = sym_singlepkg_decl,
  [sym_multipkg_decl] = sym_multipkg_decl,
  [sym_options] = sym_options,
  [sym_importmod_decl] = sym_importmod_decl,
  [sym_importfile_decl] = sym_importfile_decl,
  [sym_importves_decl] = sym_importves_decl,
  [sym_getfp_decl] = sym_getfp_decl,
  [sym_useenv_decl] = sym_useenv_decl,
  [sym_begenv_decl] = sym_begenv_decl,
  [sym_endenv_decl] = sym_endenv_decl,
  [sym_env_arg] = sym_env_arg,
  [sym_mandantory_arg] = sym_mandantory_arg,
  [sym_optional_arg] = sym_optional_arg,
  [sym_luacode] = sym_luacode,
  [sym__text_content] = sym__text_content,
  [sym_brace_group] = sym_brace_group,
  [sym_paren_group] = sym_paren_group,
  [sym__math] = sym__math,
  [sym_inline_math] = sym_inline_math,
  [sym_display_math] = sym_display_math,
  [sym_text] = sym_text,
  [aux_sym_vesti_content_repeat1] = aux_sym_vesti_content_repeat1,
  [aux_sym_multipkg_decl_repeat1] = aux_sym_multipkg_decl_repeat1,
  [aux_sym_options_repeat1] = aux_sym_options_repeat1,
  [aux_sym_useenv_decl_repeat1] = aux_sym_useenv_decl_repeat1,
  [aux_sym_mandantory_arg_repeat1] = aux_sym_mandantory_arg_repeat1,
  [aux_sym_optional_arg_repeat1] = aux_sym_optional_arg_repeat1,
  [aux_sym_inline_math_repeat1] = aux_sym_inline_math_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
  [alias_sym_luacode_contents] = alias_sym_luacode_contents,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_docclass_decl_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [sym_class_pkg_name] = {
    .visible = true,
    .named = true,
  },
  [sym_option_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_begenv_decl_token1] = {
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
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_placeholder] = {
    .visible = true,
    .named = true,
  },
  [sym_delimiter] = {
    .visible = true,
    .named = true,
  },
  [sym_latex_function] = {
    .visible = true,
    .named = true,
  },
  [sym_filepath] = {
    .visible = true,
    .named = true,
  },
  [sym_env_name] = {
    .visible = true,
    .named = true,
  },
  [sym_singleline_raw_latex] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_raw_latex] = {
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
  [sym__statement] = {
    .visible = false,
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
  [sym_options] = {
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
  [sym_luacode] = {
    .visible = true,
    .named = true,
  },
  [sym__text_content] = {
    .visible = false,
    .named = true,
  },
  [sym_brace_group] = {
    .visible = true,
    .named = true,
  },
  [sym_paren_group] = {
    .visible = true,
    .named = true,
  },
  [sym__math] = {
    .visible = false,
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
  [sym_text] = {
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
  [aux_sym_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_useenv_decl_repeat1] = {
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
  [aux_sym_inline_math_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_luacode_contents] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = alias_sym_luacode_contents,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_vesti_content, 2,
    sym_vesti_content,
    alias_sym_luacode_contents,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 5,
  [6] = 2,
  [7] = 7,
  [8] = 8,
  [9] = 8,
  [10] = 5,
  [11] = 7,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 12,
  [16] = 16,
  [17] = 13,
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
  [41] = 21,
  [42] = 22,
  [43] = 23,
  [44] = 28,
  [45] = 14,
  [46] = 18,
  [47] = 24,
  [48] = 25,
  [49] = 26,
  [50] = 27,
  [51] = 29,
  [52] = 31,
  [53] = 30,
  [54] = 32,
  [55] = 33,
  [56] = 34,
  [57] = 35,
  [58] = 36,
  [59] = 37,
  [60] = 38,
  [61] = 39,
  [62] = 40,
  [63] = 16,
  [64] = 19,
  [65] = 20,
  [66] = 66,
  [67] = 66,
  [68] = 68,
  [69] = 68,
  [70] = 70,
  [71] = 71,
  [72] = 70,
  [73] = 73,
  [74] = 71,
  [75] = 73,
  [76] = 76,
  [77] = 76,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 81,
  [83] = 83,
  [84] = 84,
  [85] = 80,
  [86] = 84,
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
  [100] = 99,
  [101] = 101,
  [102] = 87,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 110,
  [112] = 112,
  [113] = 91,
  [114] = 92,
  [115] = 101,
  [116] = 103,
  [117] = 106,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 97,
  [122] = 98,
  [123] = 123,
  [124] = 124,
  [125] = 108,
  [126] = 126,
  [127] = 120,
  [128] = 124,
  [129] = 109,
  [130] = 112,
  [131] = 94,
  [132] = 118,
  [133] = 119,
  [134] = 123,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 136,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 135,
  [143] = 143,
  [144] = 144,
  [145] = 140,
  [146] = 137,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 150,
  [162] = 153,
  [163] = 154,
  [164] = 156,
  [165] = 157,
  [166] = 166,
  [167] = 167,
  [168] = 151,
  [169] = 152,
  [170] = 170,
  [171] = 148,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 170,
  [177] = 177,
  [178] = 166,
  [179] = 159,
  [180] = 180,
  [181] = 181,
  [182] = 172,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 180,
  [188] = 188,
  [189] = 147,
  [190] = 186,
  [191] = 175,
  [192] = 183,
  [193] = 193,
  [194] = 158,
  [195] = 177,
  [196] = 193,
  [197] = 181,
  [198] = 184,
  [199] = 188,
  [200] = 155,
  [201] = 160,
  [202] = 174,
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(111);
      ADVANCE_MAP(
        '#', 6,
        '$', 172,
        '%', 19,
        '&', 266,
        '(', 116,
        ')', 117,
        ',', 114,
        '[', 132,
        '\\', 269,
        ']', 136,
        'b', 39,
        'd', 73,
        'e', 68,
        'g', 44,
        'i', 66,
        'l', 94,
        'm', 25,
        'n', 75,
        's', 100,
        'u', 91,
        '{', 113,
        '}', 115,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == '[') ADVANCE(132);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == ',') ADVANCE(114);
      if (lookahead == '}') ADVANCE(115);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(176);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(171);
      if (lookahead == '%') ADVANCE(175);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 10:
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '%') ADVANCE(175);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(277);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == '%') ADVANCE(275);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '}') ADVANCE(115);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 14:
      if (lookahead == '%') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 15:
      if (lookahead == '%') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (set_contains(sym_filepath_character_set_1, 430, lookahead)) ADVANCE(270);
      END_STATE();
    case 16:
      if (lookahead == '%') ADVANCE(135);
      if (lookahead == ']') ADVANCE(136);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0) ADVANCE(133);
      END_STATE();
    case 17:
      if (lookahead == '%') ADVANCE(131);
      if (lookahead == ')') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(129);
      END_STATE();
    case 18:
      if (lookahead == '%') ADVANCE(123);
      if (lookahead == ')') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(127);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(126);
      END_STATE();
    case 19:
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '!') ADVANCE(1);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '-') ADVANCE(1);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(12);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '3') ADVANCE(147);
      END_STATE();
    case 24:
      if (lookahead == '3') ADVANCE(74);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(141);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 53:
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 'm') ADVANCE(76);
      if (lookahead == 'p') ADVANCE(61);
      if (lookahead == 'v') ADVANCE(51);
      END_STATE();
    case 54:
      if (lookahead == 'f') ADVANCE(165);
      END_STATE();
    case 55:
      if (lookahead == 'f') ADVANCE(82);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(139);
      END_STATE();
    case 58:
      if (lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 59:
      if (lookahead == 'h') ADVANCE(45);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 61:
      if (lookahead == 'k') ADVANCE(57);
      END_STATE();
    case 62:
      if (lookahead == 'k') ADVANCE(49);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 66:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 67:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 82:
      if (lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 83:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 84:
      if (lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 105:
      if (lookahead == 'v') ADVANCE(155);
      END_STATE();
    case 106:
      if (lookahead == 'v') ADVANCE(157);
      END_STATE();
    case 107:
      if (lookahead == 'v') ADVANCE(153);
      END_STATE();
    case 108:
      if (lookahead == 'x') ADVANCE(24);
      END_STATE();
    case 109:
      if (lookahead == 'x') ADVANCE(23);
      END_STATE();
    case 110:
      if (eof) ADVANCE(111);
      ADVANCE_MAP(
        '#', 6,
        '$', 172,
        '%', 19,
        '&', 266,
        '(', 116,
        ')', 117,
        '\\', 269,
        'b', 193,
        'd', 227,
        'e', 222,
        'g', 198,
        'i', 220,
        'l', 248,
        'm', 179,
        'n', 229,
        's', 254,
        'u', 245,
        '{', 113,
        '}', 115,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(110);
      if (lookahead != 0 &&
          (lookahead < '[' || '_' < lookahead)) ADVANCE(264);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_docclass_decl_token1);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '\r') ADVANCE(5);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_class_pkg_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(1);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(1);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead == '%') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(127);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(126);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead == '%') ADVANCE(125);
      if (lookahead == '*') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(124);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(21);
      if (lookahead != 0) ADVANCE(125);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead == '!' ||
          lookahead == '-') ADVANCE(126);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(1);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead == '*') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(124);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(21);
      if (lookahead != 0) ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead == '*') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(124);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(21);
      if (lookahead != 0) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead == '\\') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead == '\\') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(126);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_begenv_decl_token1);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '\r') ADVANCE(4);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_mandantory_arg_token1);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_mandantory_arg_token1);
      if (lookahead == '%') ADVANCE(131);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_mandantory_arg_token1);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '-') ADVANCE(1);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_optional_arg_token1);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_optional_arg_token1);
      if (lookahead == '%') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_optional_arg_token1);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '-') ADVANCE(1);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_KEYWORD_docclass);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_KEYWORD_docclass);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_KEYWORD_importpkg);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_KEYWORD_importpkg);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_KEYWORD_importmod);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_KEYWORD_importmod);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_KEYWORD_importfile);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_KEYWORD_importfile);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_KEYWORD_importves);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_KEYWORD_importves);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_KEYWORD_useltx3);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_KEYWORD_useltx3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_KEYWORD_getfp);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_KEYWORD_getfp);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_KEYWORD_startdoc);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_KEYWORD_startdoc);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_KEYWORD_useenv);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_KEYWORD_useenv);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_KEYWORD_begenv);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_KEYWORD_begenv);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_KEYWORD_endenv);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_KEYWORD_endenv);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_KEYWORD_makeatletter);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_KEYWORD_makeatletter);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_KEYWORD_makeatother);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_KEYWORD_makeatother);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_KEYWORD_ltx3on);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_KEYWORD_ltx3on);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_KEYWORD_ltx3off);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_KEYWORD_ltx3off);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_KEYWORD_nonstopmode);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_KEYWORD_nonstopmode);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_KEYWORD_luacode);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_KEYWORD_luacode);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(176);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_inline_math_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_inline_math_token1);
      if (lookahead == '%') ADVANCE(175);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%') ADVANCE(173);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_inline_math_token1);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '-') ADVANCE(1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '3') ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '3') ADVANCE(228);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(241);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(251);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(184);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(233);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(195);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(197);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(232);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == 'l') ADVANCE(258);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(214);
      if (lookahead == 'm') ADVANCE(230);
      if (lookahead == 'p') ADVANCE(215);
      if (lookahead == 'v') ADVANCE(205);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(208);
      if (lookahead == 'n') ADVANCE(164);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(199);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'k') ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'k') ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(181);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(196);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(206);
      if (lookahead == 'o') ADVANCE(252);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(238);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(235);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(189);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(259);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(246);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(260);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(261);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(210);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(224);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(188);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(237);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(185);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(190);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(242);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(191);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(234);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(162);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(160);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(253);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(250);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(255);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(243);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(262);
      if (lookahead == 'u') ADVANCE(182);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(213);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(180);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(231);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(257);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(263);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'v') ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'v') ADVANCE(158);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'v') ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'x') ADVANCE(178);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'x') ADVANCE(177);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_placeholder);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_delimiter);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_latex_function);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_latex_function);
      if (lookahead == '*') ADVANCE(267);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_latex_function);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(267);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_filepath);
      if (set_contains(sym_filepath_character_set_1, 430, lookahead)) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_env_name);
      if (lookahead == '*') ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_env_name);
      if (lookahead == '*') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_singleline_raw_latex);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_multiline_raw_latex);
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_multiline_raw_latex);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_line_comment);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_multiline_comment);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 110},
  [2] = {.lex_state = 110},
  [3] = {.lex_state = 110},
  [4] = {.lex_state = 110},
  [5] = {.lex_state = 110},
  [6] = {.lex_state = 110},
  [7] = {.lex_state = 110},
  [8] = {.lex_state = 110},
  [9] = {.lex_state = 110},
  [10] = {.lex_state = 110},
  [11] = {.lex_state = 110},
  [12] = {.lex_state = 110},
  [13] = {.lex_state = 110},
  [14] = {.lex_state = 110},
  [15] = {.lex_state = 110},
  [16] = {.lex_state = 110},
  [17] = {.lex_state = 110},
  [18] = {.lex_state = 110},
  [19] = {.lex_state = 110},
  [20] = {.lex_state = 110},
  [21] = {.lex_state = 110},
  [22] = {.lex_state = 110},
  [23] = {.lex_state = 110},
  [24] = {.lex_state = 110},
  [25] = {.lex_state = 110},
  [26] = {.lex_state = 110},
  [27] = {.lex_state = 110},
  [28] = {.lex_state = 110},
  [29] = {.lex_state = 110},
  [30] = {.lex_state = 110},
  [31] = {.lex_state = 110},
  [32] = {.lex_state = 110},
  [33] = {.lex_state = 110},
  [34] = {.lex_state = 110},
  [35] = {.lex_state = 110},
  [36] = {.lex_state = 110},
  [37] = {.lex_state = 110},
  [38] = {.lex_state = 110},
  [39] = {.lex_state = 110},
  [40] = {.lex_state = 110},
  [41] = {.lex_state = 110},
  [42] = {.lex_state = 110},
  [43] = {.lex_state = 110},
  [44] = {.lex_state = 110},
  [45] = {.lex_state = 110},
  [46] = {.lex_state = 110},
  [47] = {.lex_state = 110},
  [48] = {.lex_state = 110},
  [49] = {.lex_state = 110},
  [50] = {.lex_state = 110},
  [51] = {.lex_state = 110},
  [52] = {.lex_state = 110},
  [53] = {.lex_state = 110},
  [54] = {.lex_state = 110},
  [55] = {.lex_state = 110},
  [56] = {.lex_state = 110},
  [57] = {.lex_state = 110},
  [58] = {.lex_state = 110},
  [59] = {.lex_state = 110},
  [60] = {.lex_state = 110},
  [61] = {.lex_state = 110},
  [62] = {.lex_state = 110},
  [63] = {.lex_state = 110},
  [64] = {.lex_state = 110},
  [65] = {.lex_state = 110},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 16},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 17},
  [98] = {.lex_state = 16},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 17},
  [121] = {.lex_state = 17},
  [122] = {.lex_state = 16},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 16},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 17},
  [127] = {.lex_state = 17},
  [128] = {.lex_state = 16},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 13},
  [136] = {.lex_state = 13},
  [137] = {.lex_state = 13},
  [138] = {.lex_state = 13},
  [139] = {.lex_state = 18},
  [140] = {.lex_state = 13},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 13},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 18},
  [145] = {.lex_state = 13},
  [146] = {.lex_state = 13},
  [147] = {.lex_state = 14},
  [148] = {.lex_state = 14},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 15},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 13},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 14},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 18},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 13},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 15},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 13},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 15},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 18},
  [186] = {.lex_state = 14},
  [187] = {.lex_state = 13},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 14},
  [190] = {.lex_state = 14},
  [191] = {.lex_state = 13},
  [192] = {.lex_state = 15},
  [193] = {.lex_state = 15},
  [194] = {.lex_state = 15},
  [195] = {.lex_state = 15},
  [196] = {.lex_state = 15},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_KEYWORD_docclass] = ACTIONS(1),
    [sym_KEYWORD_importpkg] = ACTIONS(1),
    [sym_KEYWORD_importmod] = ACTIONS(1),
    [sym_KEYWORD_importfile] = ACTIONS(1),
    [sym_KEYWORD_importves] = ACTIONS(1),
    [sym_KEYWORD_useltx3] = ACTIONS(1),
    [sym_KEYWORD_getfp] = ACTIONS(1),
    [sym_KEYWORD_startdoc] = ACTIONS(1),
    [sym_KEYWORD_useenv] = ACTIONS(1),
    [sym_KEYWORD_begenv] = ACTIONS(1),
    [sym_KEYWORD_endenv] = ACTIONS(1),
    [sym_KEYWORD_makeatletter] = ACTIONS(1),
    [sym_KEYWORD_makeatother] = ACTIONS(1),
    [sym_KEYWORD_ltx3on] = ACTIONS(1),
    [sym_KEYWORD_ltx3off] = ACTIONS(1),
    [sym_KEYWORD_nonstopmode] = ACTIONS(1),
    [sym_KEYWORD_luacode] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1),
    [sym_placeholder] = ACTIONS(1),
    [sym_delimiter] = ACTIONS(1),
    [sym_latex_function] = ACTIONS(1),
    [sym_singleline_raw_latex] = ACTIONS(1),
    [sym_multiline_raw_latex] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_vesti_content] = STATE(149),
    [sym__statement] = STATE(6),
    [sym_docclass_decl] = STATE(6),
    [sym_singlepkg_decl] = STATE(6),
    [sym_multipkg_decl] = STATE(6),
    [sym_importmod_decl] = STATE(6),
    [sym_importfile_decl] = STATE(6),
    [sym_importves_decl] = STATE(6),
    [sym_getfp_decl] = STATE(6),
    [sym_useenv_decl] = STATE(6),
    [sym_begenv_decl] = STATE(6),
    [sym_endenv_decl] = STATE(6),
    [sym_luacode] = STATE(6),
    [sym__text_content] = STATE(6),
    [sym_brace_group] = STATE(6),
    [sym_paren_group] = STATE(6),
    [sym__math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_text] = STATE(6),
    [aux_sym_vesti_content_repeat1] = STATE(6),
    [aux_sym_text_repeat1] = STATE(17),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_KEYWORD_docclass] = ACTIONS(9),
    [sym_KEYWORD_importpkg] = ACTIONS(11),
    [sym_KEYWORD_importmod] = ACTIONS(13),
    [sym_KEYWORD_importfile] = ACTIONS(15),
    [sym_KEYWORD_importves] = ACTIONS(17),
    [sym_KEYWORD_useltx3] = ACTIONS(19),
    [sym_KEYWORD_getfp] = ACTIONS(21),
    [sym_KEYWORD_startdoc] = ACTIONS(19),
    [sym_KEYWORD_useenv] = ACTIONS(23),
    [sym_KEYWORD_begenv] = ACTIONS(25),
    [sym_KEYWORD_endenv] = ACTIONS(27),
    [sym_KEYWORD_makeatletter] = ACTIONS(19),
    [sym_KEYWORD_makeatother] = ACTIONS(19),
    [sym_KEYWORD_ltx3on] = ACTIONS(19),
    [sym_KEYWORD_ltx3off] = ACTIONS(19),
    [sym_KEYWORD_nonstopmode] = ACTIONS(19),
    [sym_KEYWORD_luacode] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(33),
    [sym_word] = ACTIONS(35),
    [sym_placeholder] = ACTIONS(37),
    [sym_delimiter] = ACTIONS(37),
    [sym_latex_function] = ACTIONS(39),
    [sym_singleline_raw_latex] = ACTIONS(19),
    [sym_multiline_raw_latex] = ACTIONS(39),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__statement] = STATE(3),
    [sym_docclass_decl] = STATE(3),
    [sym_singlepkg_decl] = STATE(3),
    [sym_multipkg_decl] = STATE(3),
    [sym_importmod_decl] = STATE(3),
    [sym_importfile_decl] = STATE(3),
    [sym_importves_decl] = STATE(3),
    [sym_getfp_decl] = STATE(3),
    [sym_useenv_decl] = STATE(3),
    [sym_begenv_decl] = STATE(3),
    [sym_endenv_decl] = STATE(3),
    [sym_luacode] = STATE(3),
    [sym__text_content] = STATE(3),
    [sym_brace_group] = STATE(3),
    [sym_paren_group] = STATE(3),
    [sym__math] = STATE(3),
    [sym_inline_math] = STATE(3),
    [sym_display_math] = STATE(3),
    [sym_text] = STATE(3),
    [aux_sym_vesti_content_repeat1] = STATE(3),
    [aux_sym_text_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(43),
    [sym_KEYWORD_docclass] = ACTIONS(47),
    [sym_KEYWORD_importpkg] = ACTIONS(49),
    [sym_KEYWORD_importmod] = ACTIONS(51),
    [sym_KEYWORD_importfile] = ACTIONS(53),
    [sym_KEYWORD_importves] = ACTIONS(55),
    [sym_KEYWORD_useltx3] = ACTIONS(57),
    [sym_KEYWORD_getfp] = ACTIONS(59),
    [sym_KEYWORD_startdoc] = ACTIONS(57),
    [sym_KEYWORD_useenv] = ACTIONS(61),
    [sym_KEYWORD_begenv] = ACTIONS(63),
    [sym_KEYWORD_endenv] = ACTIONS(65),
    [sym_KEYWORD_makeatletter] = ACTIONS(57),
    [sym_KEYWORD_makeatother] = ACTIONS(57),
    [sym_KEYWORD_ltx3on] = ACTIONS(57),
    [sym_KEYWORD_ltx3off] = ACTIONS(57),
    [sym_KEYWORD_nonstopmode] = ACTIONS(57),
    [sym_KEYWORD_luacode] = ACTIONS(67),
    [anon_sym_DOLLAR] = ACTIONS(69),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(71),
    [sym_word] = ACTIONS(73),
    [sym_placeholder] = ACTIONS(75),
    [sym_delimiter] = ACTIONS(75),
    [sym_latex_function] = ACTIONS(77),
    [sym_singleline_raw_latex] = ACTIONS(57),
    [sym_multiline_raw_latex] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__statement] = STATE(3),
    [sym_docclass_decl] = STATE(3),
    [sym_singlepkg_decl] = STATE(3),
    [sym_multipkg_decl] = STATE(3),
    [sym_importmod_decl] = STATE(3),
    [sym_importfile_decl] = STATE(3),
    [sym_importves_decl] = STATE(3),
    [sym_getfp_decl] = STATE(3),
    [sym_useenv_decl] = STATE(3),
    [sym_begenv_decl] = STATE(3),
    [sym_endenv_decl] = STATE(3),
    [sym_luacode] = STATE(3),
    [sym__text_content] = STATE(3),
    [sym_brace_group] = STATE(3),
    [sym_paren_group] = STATE(3),
    [sym__math] = STATE(3),
    [sym_inline_math] = STATE(3),
    [sym_display_math] = STATE(3),
    [sym_text] = STATE(3),
    [aux_sym_vesti_content_repeat1] = STATE(3),
    [aux_sym_text_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(82),
    [sym_KEYWORD_docclass] = ACTIONS(87),
    [sym_KEYWORD_importpkg] = ACTIONS(90),
    [sym_KEYWORD_importmod] = ACTIONS(93),
    [sym_KEYWORD_importfile] = ACTIONS(96),
    [sym_KEYWORD_importves] = ACTIONS(99),
    [sym_KEYWORD_useltx3] = ACTIONS(102),
    [sym_KEYWORD_getfp] = ACTIONS(105),
    [sym_KEYWORD_startdoc] = ACTIONS(102),
    [sym_KEYWORD_useenv] = ACTIONS(108),
    [sym_KEYWORD_begenv] = ACTIONS(111),
    [sym_KEYWORD_endenv] = ACTIONS(114),
    [sym_KEYWORD_makeatletter] = ACTIONS(102),
    [sym_KEYWORD_makeatother] = ACTIONS(102),
    [sym_KEYWORD_ltx3on] = ACTIONS(102),
    [sym_KEYWORD_ltx3off] = ACTIONS(102),
    [sym_KEYWORD_nonstopmode] = ACTIONS(102),
    [sym_KEYWORD_luacode] = ACTIONS(117),
    [anon_sym_DOLLAR] = ACTIONS(120),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(123),
    [sym_word] = ACTIONS(126),
    [sym_placeholder] = ACTIONS(129),
    [sym_delimiter] = ACTIONS(129),
    [sym_latex_function] = ACTIONS(132),
    [sym_singleline_raw_latex] = ACTIONS(102),
    [sym_multiline_raw_latex] = ACTIONS(132),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__statement] = STATE(4),
    [sym_docclass_decl] = STATE(4),
    [sym_singlepkg_decl] = STATE(4),
    [sym_multipkg_decl] = STATE(4),
    [sym_importmod_decl] = STATE(4),
    [sym_importfile_decl] = STATE(4),
    [sym_importves_decl] = STATE(4),
    [sym_getfp_decl] = STATE(4),
    [sym_useenv_decl] = STATE(4),
    [sym_begenv_decl] = STATE(4),
    [sym_endenv_decl] = STATE(4),
    [sym_luacode] = STATE(4),
    [sym__text_content] = STATE(4),
    [sym_brace_group] = STATE(4),
    [sym_paren_group] = STATE(4),
    [sym__math] = STATE(4),
    [sym_inline_math] = STATE(4),
    [sym_display_math] = STATE(4),
    [sym_text] = STATE(4),
    [aux_sym_vesti_content_repeat1] = STATE(4),
    [aux_sym_text_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(138),
    [sym_KEYWORD_docclass] = ACTIONS(141),
    [sym_KEYWORD_importpkg] = ACTIONS(144),
    [sym_KEYWORD_importmod] = ACTIONS(147),
    [sym_KEYWORD_importfile] = ACTIONS(150),
    [sym_KEYWORD_importves] = ACTIONS(153),
    [sym_KEYWORD_useltx3] = ACTIONS(156),
    [sym_KEYWORD_getfp] = ACTIONS(159),
    [sym_KEYWORD_startdoc] = ACTIONS(156),
    [sym_KEYWORD_useenv] = ACTIONS(162),
    [sym_KEYWORD_begenv] = ACTIONS(165),
    [sym_KEYWORD_endenv] = ACTIONS(168),
    [sym_KEYWORD_makeatletter] = ACTIONS(156),
    [sym_KEYWORD_makeatother] = ACTIONS(156),
    [sym_KEYWORD_ltx3on] = ACTIONS(156),
    [sym_KEYWORD_ltx3off] = ACTIONS(156),
    [sym_KEYWORD_nonstopmode] = ACTIONS(156),
    [sym_KEYWORD_luacode] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(174),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(177),
    [sym_word] = ACTIONS(180),
    [sym_placeholder] = ACTIONS(183),
    [sym_delimiter] = ACTIONS(183),
    [sym_latex_function] = ACTIONS(186),
    [sym_singleline_raw_latex] = ACTIONS(156),
    [sym_multiline_raw_latex] = ACTIONS(186),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_vesti_content] = STATE(168),
    [sym__statement] = STATE(2),
    [sym_docclass_decl] = STATE(2),
    [sym_singlepkg_decl] = STATE(2),
    [sym_multipkg_decl] = STATE(2),
    [sym_importmod_decl] = STATE(2),
    [sym_importfile_decl] = STATE(2),
    [sym_importves_decl] = STATE(2),
    [sym_getfp_decl] = STATE(2),
    [sym_useenv_decl] = STATE(2),
    [sym_begenv_decl] = STATE(2),
    [sym_endenv_decl] = STATE(2),
    [sym_luacode] = STATE(2),
    [sym__text_content] = STATE(2),
    [sym_brace_group] = STATE(2),
    [sym_paren_group] = STATE(2),
    [sym__math] = STATE(2),
    [sym_inline_math] = STATE(2),
    [sym_display_math] = STATE(2),
    [sym_text] = STATE(2),
    [aux_sym_vesti_content_repeat1] = STATE(2),
    [aux_sym_text_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(45),
    [sym_KEYWORD_docclass] = ACTIONS(47),
    [sym_KEYWORD_importpkg] = ACTIONS(49),
    [sym_KEYWORD_importmod] = ACTIONS(51),
    [sym_KEYWORD_importfile] = ACTIONS(53),
    [sym_KEYWORD_importves] = ACTIONS(55),
    [sym_KEYWORD_useltx3] = ACTIONS(189),
    [sym_KEYWORD_getfp] = ACTIONS(59),
    [sym_KEYWORD_startdoc] = ACTIONS(189),
    [sym_KEYWORD_useenv] = ACTIONS(61),
    [sym_KEYWORD_begenv] = ACTIONS(63),
    [sym_KEYWORD_endenv] = ACTIONS(65),
    [sym_KEYWORD_makeatletter] = ACTIONS(189),
    [sym_KEYWORD_makeatother] = ACTIONS(189),
    [sym_KEYWORD_ltx3on] = ACTIONS(189),
    [sym_KEYWORD_ltx3off] = ACTIONS(189),
    [sym_KEYWORD_nonstopmode] = ACTIONS(189),
    [sym_KEYWORD_luacode] = ACTIONS(67),
    [anon_sym_DOLLAR] = ACTIONS(69),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(71),
    [sym_word] = ACTIONS(73),
    [sym_placeholder] = ACTIONS(75),
    [sym_delimiter] = ACTIONS(75),
    [sym_latex_function] = ACTIONS(191),
    [sym_singleline_raw_latex] = ACTIONS(189),
    [sym_multiline_raw_latex] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__statement] = STATE(4),
    [sym_docclass_decl] = STATE(4),
    [sym_singlepkg_decl] = STATE(4),
    [sym_multipkg_decl] = STATE(4),
    [sym_importmod_decl] = STATE(4),
    [sym_importfile_decl] = STATE(4),
    [sym_importves_decl] = STATE(4),
    [sym_getfp_decl] = STATE(4),
    [sym_useenv_decl] = STATE(4),
    [sym_begenv_decl] = STATE(4),
    [sym_endenv_decl] = STATE(4),
    [sym_luacode] = STATE(4),
    [sym__text_content] = STATE(4),
    [sym_brace_group] = STATE(4),
    [sym_paren_group] = STATE(4),
    [sym__math] = STATE(4),
    [sym_inline_math] = STATE(4),
    [sym_display_math] = STATE(4),
    [sym_text] = STATE(4),
    [aux_sym_vesti_content_repeat1] = STATE(4),
    [aux_sym_text_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_KEYWORD_docclass] = ACTIONS(9),
    [sym_KEYWORD_importpkg] = ACTIONS(11),
    [sym_KEYWORD_importmod] = ACTIONS(13),
    [sym_KEYWORD_importfile] = ACTIONS(15),
    [sym_KEYWORD_importves] = ACTIONS(17),
    [sym_KEYWORD_useltx3] = ACTIONS(193),
    [sym_KEYWORD_getfp] = ACTIONS(21),
    [sym_KEYWORD_startdoc] = ACTIONS(193),
    [sym_KEYWORD_useenv] = ACTIONS(23),
    [sym_KEYWORD_begenv] = ACTIONS(25),
    [sym_KEYWORD_endenv] = ACTIONS(27),
    [sym_KEYWORD_makeatletter] = ACTIONS(193),
    [sym_KEYWORD_makeatother] = ACTIONS(193),
    [sym_KEYWORD_ltx3on] = ACTIONS(193),
    [sym_KEYWORD_ltx3off] = ACTIONS(193),
    [sym_KEYWORD_nonstopmode] = ACTIONS(193),
    [sym_KEYWORD_luacode] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(33),
    [sym_word] = ACTIONS(35),
    [sym_placeholder] = ACTIONS(37),
    [sym_delimiter] = ACTIONS(37),
    [sym_latex_function] = ACTIONS(195),
    [sym_singleline_raw_latex] = ACTIONS(193),
    [sym_multiline_raw_latex] = ACTIONS(195),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_vesti_content] = STATE(176),
    [sym__statement] = STATE(2),
    [sym_docclass_decl] = STATE(2),
    [sym_singlepkg_decl] = STATE(2),
    [sym_multipkg_decl] = STATE(2),
    [sym_importmod_decl] = STATE(2),
    [sym_importfile_decl] = STATE(2),
    [sym_importves_decl] = STATE(2),
    [sym_getfp_decl] = STATE(2),
    [sym_useenv_decl] = STATE(2),
    [sym_begenv_decl] = STATE(2),
    [sym_endenv_decl] = STATE(2),
    [sym_luacode] = STATE(2),
    [sym__text_content] = STATE(2),
    [sym_brace_group] = STATE(2),
    [sym_paren_group] = STATE(2),
    [sym__math] = STATE(2),
    [sym_inline_math] = STATE(2),
    [sym_display_math] = STATE(2),
    [sym_text] = STATE(2),
    [aux_sym_vesti_content_repeat1] = STATE(2),
    [aux_sym_text_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(45),
    [sym_KEYWORD_docclass] = ACTIONS(47),
    [sym_KEYWORD_importpkg] = ACTIONS(49),
    [sym_KEYWORD_importmod] = ACTIONS(51),
    [sym_KEYWORD_importfile] = ACTIONS(53),
    [sym_KEYWORD_importves] = ACTIONS(55),
    [sym_KEYWORD_useltx3] = ACTIONS(189),
    [sym_KEYWORD_getfp] = ACTIONS(59),
    [sym_KEYWORD_startdoc] = ACTIONS(189),
    [sym_KEYWORD_useenv] = ACTIONS(61),
    [sym_KEYWORD_begenv] = ACTIONS(63),
    [sym_KEYWORD_endenv] = ACTIONS(65),
    [sym_KEYWORD_makeatletter] = ACTIONS(189),
    [sym_KEYWORD_makeatother] = ACTIONS(189),
    [sym_KEYWORD_ltx3on] = ACTIONS(189),
    [sym_KEYWORD_ltx3off] = ACTIONS(189),
    [sym_KEYWORD_nonstopmode] = ACTIONS(189),
    [sym_KEYWORD_luacode] = ACTIONS(67),
    [anon_sym_DOLLAR] = ACTIONS(69),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(71),
    [sym_word] = ACTIONS(73),
    [sym_placeholder] = ACTIONS(75),
    [sym_delimiter] = ACTIONS(75),
    [sym_latex_function] = ACTIONS(191),
    [sym_singleline_raw_latex] = ACTIONS(189),
    [sym_multiline_raw_latex] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_vesti_content] = STATE(169),
    [sym__statement] = STATE(2),
    [sym_docclass_decl] = STATE(2),
    [sym_singlepkg_decl] = STATE(2),
    [sym_multipkg_decl] = STATE(2),
    [sym_importmod_decl] = STATE(2),
    [sym_importfile_decl] = STATE(2),
    [sym_importves_decl] = STATE(2),
    [sym_getfp_decl] = STATE(2),
    [sym_useenv_decl] = STATE(2),
    [sym_begenv_decl] = STATE(2),
    [sym_endenv_decl] = STATE(2),
    [sym_luacode] = STATE(2),
    [sym__text_content] = STATE(2),
    [sym_brace_group] = STATE(2),
    [sym_paren_group] = STATE(2),
    [sym__math] = STATE(2),
    [sym_inline_math] = STATE(2),
    [sym_display_math] = STATE(2),
    [sym_text] = STATE(2),
    [aux_sym_vesti_content_repeat1] = STATE(2),
    [aux_sym_text_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(45),
    [sym_KEYWORD_docclass] = ACTIONS(47),
    [sym_KEYWORD_importpkg] = ACTIONS(49),
    [sym_KEYWORD_importmod] = ACTIONS(51),
    [sym_KEYWORD_importfile] = ACTIONS(53),
    [sym_KEYWORD_importves] = ACTIONS(55),
    [sym_KEYWORD_useltx3] = ACTIONS(189),
    [sym_KEYWORD_getfp] = ACTIONS(59),
    [sym_KEYWORD_startdoc] = ACTIONS(189),
    [sym_KEYWORD_useenv] = ACTIONS(61),
    [sym_KEYWORD_begenv] = ACTIONS(63),
    [sym_KEYWORD_endenv] = ACTIONS(65),
    [sym_KEYWORD_makeatletter] = ACTIONS(189),
    [sym_KEYWORD_makeatother] = ACTIONS(189),
    [sym_KEYWORD_ltx3on] = ACTIONS(189),
    [sym_KEYWORD_ltx3off] = ACTIONS(189),
    [sym_KEYWORD_nonstopmode] = ACTIONS(189),
    [sym_KEYWORD_luacode] = ACTIONS(67),
    [anon_sym_DOLLAR] = ACTIONS(69),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(71),
    [sym_word] = ACTIONS(73),
    [sym_placeholder] = ACTIONS(75),
    [sym_delimiter] = ACTIONS(75),
    [sym_latex_function] = ACTIONS(191),
    [sym_singleline_raw_latex] = ACTIONS(189),
    [sym_multiline_raw_latex] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_vesti_content] = STATE(152),
    [sym__statement] = STATE(2),
    [sym_docclass_decl] = STATE(2),
    [sym_singlepkg_decl] = STATE(2),
    [sym_multipkg_decl] = STATE(2),
    [sym_importmod_decl] = STATE(2),
    [sym_importfile_decl] = STATE(2),
    [sym_importves_decl] = STATE(2),
    [sym_getfp_decl] = STATE(2),
    [sym_useenv_decl] = STATE(2),
    [sym_begenv_decl] = STATE(2),
    [sym_endenv_decl] = STATE(2),
    [sym_luacode] = STATE(2),
    [sym__text_content] = STATE(2),
    [sym_brace_group] = STATE(2),
    [sym_paren_group] = STATE(2),
    [sym__math] = STATE(2),
    [sym_inline_math] = STATE(2),
    [sym_display_math] = STATE(2),
    [sym_text] = STATE(2),
    [aux_sym_vesti_content_repeat1] = STATE(2),
    [aux_sym_text_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(45),
    [sym_KEYWORD_docclass] = ACTIONS(47),
    [sym_KEYWORD_importpkg] = ACTIONS(49),
    [sym_KEYWORD_importmod] = ACTIONS(51),
    [sym_KEYWORD_importfile] = ACTIONS(53),
    [sym_KEYWORD_importves] = ACTIONS(55),
    [sym_KEYWORD_useltx3] = ACTIONS(189),
    [sym_KEYWORD_getfp] = ACTIONS(59),
    [sym_KEYWORD_startdoc] = ACTIONS(189),
    [sym_KEYWORD_useenv] = ACTIONS(61),
    [sym_KEYWORD_begenv] = ACTIONS(63),
    [sym_KEYWORD_endenv] = ACTIONS(65),
    [sym_KEYWORD_makeatletter] = ACTIONS(189),
    [sym_KEYWORD_makeatother] = ACTIONS(189),
    [sym_KEYWORD_ltx3on] = ACTIONS(189),
    [sym_KEYWORD_ltx3off] = ACTIONS(189),
    [sym_KEYWORD_nonstopmode] = ACTIONS(189),
    [sym_KEYWORD_luacode] = ACTIONS(67),
    [anon_sym_DOLLAR] = ACTIONS(69),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(71),
    [sym_word] = ACTIONS(73),
    [sym_placeholder] = ACTIONS(75),
    [sym_delimiter] = ACTIONS(75),
    [sym_latex_function] = ACTIONS(191),
    [sym_singleline_raw_latex] = ACTIONS(189),
    [sym_multiline_raw_latex] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_vesti_content] = STATE(151),
    [sym__statement] = STATE(2),
    [sym_docclass_decl] = STATE(2),
    [sym_singlepkg_decl] = STATE(2),
    [sym_multipkg_decl] = STATE(2),
    [sym_importmod_decl] = STATE(2),
    [sym_importfile_decl] = STATE(2),
    [sym_importves_decl] = STATE(2),
    [sym_getfp_decl] = STATE(2),
    [sym_useenv_decl] = STATE(2),
    [sym_begenv_decl] = STATE(2),
    [sym_endenv_decl] = STATE(2),
    [sym_luacode] = STATE(2),
    [sym__text_content] = STATE(2),
    [sym_brace_group] = STATE(2),
    [sym_paren_group] = STATE(2),
    [sym__math] = STATE(2),
    [sym_inline_math] = STATE(2),
    [sym_display_math] = STATE(2),
    [sym_text] = STATE(2),
    [aux_sym_vesti_content_repeat1] = STATE(2),
    [aux_sym_text_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(45),
    [sym_KEYWORD_docclass] = ACTIONS(47),
    [sym_KEYWORD_importpkg] = ACTIONS(49),
    [sym_KEYWORD_importmod] = ACTIONS(51),
    [sym_KEYWORD_importfile] = ACTIONS(53),
    [sym_KEYWORD_importves] = ACTIONS(55),
    [sym_KEYWORD_useltx3] = ACTIONS(189),
    [sym_KEYWORD_getfp] = ACTIONS(59),
    [sym_KEYWORD_startdoc] = ACTIONS(189),
    [sym_KEYWORD_useenv] = ACTIONS(61),
    [sym_KEYWORD_begenv] = ACTIONS(63),
    [sym_KEYWORD_endenv] = ACTIONS(65),
    [sym_KEYWORD_makeatletter] = ACTIONS(189),
    [sym_KEYWORD_makeatother] = ACTIONS(189),
    [sym_KEYWORD_ltx3on] = ACTIONS(189),
    [sym_KEYWORD_ltx3off] = ACTIONS(189),
    [sym_KEYWORD_nonstopmode] = ACTIONS(189),
    [sym_KEYWORD_luacode] = ACTIONS(67),
    [anon_sym_DOLLAR] = ACTIONS(69),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(71),
    [sym_word] = ACTIONS(73),
    [sym_placeholder] = ACTIONS(75),
    [sym_delimiter] = ACTIONS(75),
    [sym_latex_function] = ACTIONS(191),
    [sym_singleline_raw_latex] = ACTIONS(189),
    [sym_multiline_raw_latex] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_vesti_content] = STATE(170),
    [sym__statement] = STATE(2),
    [sym_docclass_decl] = STATE(2),
    [sym_singlepkg_decl] = STATE(2),
    [sym_multipkg_decl] = STATE(2),
    [sym_importmod_decl] = STATE(2),
    [sym_importfile_decl] = STATE(2),
    [sym_importves_decl] = STATE(2),
    [sym_getfp_decl] = STATE(2),
    [sym_useenv_decl] = STATE(2),
    [sym_begenv_decl] = STATE(2),
    [sym_endenv_decl] = STATE(2),
    [sym_luacode] = STATE(2),
    [sym__text_content] = STATE(2),
    [sym_brace_group] = STATE(2),
    [sym_paren_group] = STATE(2),
    [sym__math] = STATE(2),
    [sym_inline_math] = STATE(2),
    [sym_display_math] = STATE(2),
    [sym_text] = STATE(2),
    [aux_sym_vesti_content_repeat1] = STATE(2),
    [aux_sym_text_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(45),
    [sym_KEYWORD_docclass] = ACTIONS(47),
    [sym_KEYWORD_importpkg] = ACTIONS(49),
    [sym_KEYWORD_importmod] = ACTIONS(51),
    [sym_KEYWORD_importfile] = ACTIONS(53),
    [sym_KEYWORD_importves] = ACTIONS(55),
    [sym_KEYWORD_useltx3] = ACTIONS(189),
    [sym_KEYWORD_getfp] = ACTIONS(59),
    [sym_KEYWORD_startdoc] = ACTIONS(189),
    [sym_KEYWORD_useenv] = ACTIONS(61),
    [sym_KEYWORD_begenv] = ACTIONS(63),
    [sym_KEYWORD_endenv] = ACTIONS(65),
    [sym_KEYWORD_makeatletter] = ACTIONS(189),
    [sym_KEYWORD_makeatother] = ACTIONS(189),
    [sym_KEYWORD_ltx3on] = ACTIONS(189),
    [sym_KEYWORD_ltx3off] = ACTIONS(189),
    [sym_KEYWORD_nonstopmode] = ACTIONS(189),
    [sym_KEYWORD_luacode] = ACTIONS(67),
    [anon_sym_DOLLAR] = ACTIONS(69),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(71),
    [sym_word] = ACTIONS(73),
    [sym_placeholder] = ACTIONS(75),
    [sym_delimiter] = ACTIONS(75),
    [sym_latex_function] = ACTIONS(191),
    [sym_singleline_raw_latex] = ACTIONS(189),
    [sym_multiline_raw_latex] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(201), 1,
      sym_word,
    STATE(12), 1,
      aux_sym_text_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(204), 2,
      sym_placeholder,
      sym_delimiter,
    ACTIONS(197), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(199), 19,
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
      anon_sym_DOLLAR,
      sym_singleline_raw_latex,
  [45] = 6,
    ACTIONS(211), 1,
      sym_word,
    STATE(12), 1,
      aux_sym_text_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(213), 2,
      sym_placeholder,
      sym_delimiter,
    ACTIONS(207), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(209), 19,
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
      anon_sym_DOLLAR,
      sym_singleline_raw_latex,
  [90] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(215), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(217), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [128] = 6,
    ACTIONS(219), 1,
      sym_word,
    STATE(15), 1,
      aux_sym_text_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(222), 2,
      sym_placeholder,
      sym_delimiter,
    ACTIONS(197), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(199), 19,
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
      anon_sym_DOLLAR,
      sym_singleline_raw_latex,
  [172] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(225), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(227), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [210] = 6,
    ACTIONS(229), 1,
      sym_word,
    STATE(15), 1,
      aux_sym_text_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(231), 2,
      sym_placeholder,
      sym_delimiter,
    ACTIONS(207), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(209), 19,
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
      anon_sym_DOLLAR,
      sym_singleline_raw_latex,
  [254] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(233), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(235), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [292] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(237), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(239), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [330] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(241), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(243), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [368] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(245), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(247), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [406] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(249), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(251), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [444] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(253), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(255), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [482] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(257), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(259), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [520] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(261), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(263), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [558] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(265), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(267), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [596] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(269), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(271), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [634] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(273), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(275), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [672] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(277), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(279), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [710] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(281), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(283), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [748] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(285), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(287), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [786] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(289), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(291), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [824] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(293), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(295), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [862] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(297), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(299), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [900] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(301), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(303), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [938] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(305), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(307), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [976] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(309), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(311), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [1014] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(313), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(315), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [1052] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(317), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(319), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [1090] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(321), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(323), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [1128] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(245), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(247), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [1165] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(249), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(251), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [1202] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(253), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(255), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [1239] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(273), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(275), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [1276] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(215), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(217), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [1313] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(233), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(235), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [1350] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(257), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(259), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [1387] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(261), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(263), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [1424] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(265), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(267), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [1461] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(269), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(271), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [1498] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(277), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(279), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [1535] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(285), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(287), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [1572] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(281), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(283), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [1609] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(289), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(291), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [1646] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(293), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(295), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [1683] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(297), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(299), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [1720] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(301), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(303), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [1757] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(305), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(307), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [1794] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(309), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(311), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [1831] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(313), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(315), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [1868] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(317), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(319), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [1905] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(321), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(323), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [1942] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(225), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(227), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [1979] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(237), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(239), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [2016] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(241), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      sym_latex_function,
      sym_multiline_raw_latex,
    ACTIONS(243), 20,
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
      anon_sym_DOLLAR,
      sym_word,
      sym_singleline_raw_latex,
  [2053] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    STATE(56), 1,
      sym_brace_group,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(71), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(99), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [2078] = 7,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym_brace_group,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(71), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(99), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [2103] = 7,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_brace_group,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(67), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(99), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [2128] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym_brace_group,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(66), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(99), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [2153] = 6,
    ACTIONS(329), 1,
      anon_sym_LPAREN,
    ACTIONS(331), 1,
      aux_sym_begenv_decl_token1,
    ACTIONS(333), 1,
      anon_sym_LBRACK,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(75), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(100), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [2175] = 6,
    ACTIONS(337), 1,
      anon_sym_LBRACE,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(342), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(71), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(99), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [2197] = 6,
    ACTIONS(329), 1,
      anon_sym_LPAREN,
    ACTIONS(333), 1,
      anon_sym_LBRACK,
    ACTIONS(345), 1,
      aux_sym_begenv_decl_token1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(73), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(100), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [2219] = 6,
    ACTIONS(329), 1,
      anon_sym_LPAREN,
    ACTIONS(333), 1,
      anon_sym_LBRACK,
    ACTIONS(347), 1,
      aux_sym_begenv_decl_token1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(74), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(100), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [2241] = 6,
    ACTIONS(337), 1,
      aux_sym_begenv_decl_token1,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    ACTIONS(352), 1,
      anon_sym_LBRACK,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(74), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(100), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [2263] = 6,
    ACTIONS(329), 1,
      anon_sym_LPAREN,
    ACTIONS(333), 1,
      anon_sym_LBRACK,
    ACTIONS(355), 1,
      aux_sym_begenv_decl_token1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(74), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(100), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [2285] = 7,
    ACTIONS(357), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_options,
    STATE(85), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2308] = 7,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(365), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_multipkg_decl_repeat1,
    STATE(86), 1,
      sym_options,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2331] = 5,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_docclass_decl_token1,
    STATE(96), 1,
      sym_options,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(373), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2349] = 5,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      aux_sym_docclass_decl_token1,
    STATE(93), 1,
      sym_options,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(377), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2367] = 5,
    ACTIONS(379), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2384] = 5,
    ACTIONS(385), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(389), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2401] = 5,
    ACTIONS(391), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2418] = 5,
    ACTIONS(375), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(377), 1,
      anon_sym_RBRACE,
    ACTIONS(397), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2435] = 5,
    ACTIONS(400), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2452] = 5,
    ACTIONS(400), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2469] = 5,
    ACTIONS(379), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2486] = 4,
    ACTIONS(406), 1,
      anon_sym_DOLLAR,
    ACTIONS(408), 1,
      aux_sym_inline_math_token1,
    STATE(87), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2500] = 4,
    ACTIONS(411), 1,
      aux_sym_optional_arg_token1,
    ACTIONS(414), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      aux_sym_optional_arg_repeat1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2514] = 3,
    ACTIONS(416), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(418), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2526] = 4,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_options_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2540] = 4,
    ACTIONS(425), 1,
      anon_sym_DOLLAR,
    ACTIONS(427), 1,
      aux_sym_inline_math_token1,
    STATE(132), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2554] = 4,
    ACTIONS(429), 1,
      aux_sym_inline_math_token1,
    ACTIONS(431), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(133), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2568] = 3,
    ACTIONS(371), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(373), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2580] = 4,
    ACTIONS(433), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
    ACTIONS(437), 1,
      sym_class_pkg_name,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2594] = 3,
    ACTIONS(439), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(441), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2606] = 3,
    ACTIONS(443), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(445), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2618] = 4,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
    ACTIONS(449), 1,
      aux_sym_mandantory_arg_token1,
    STATE(120), 1,
      aux_sym_mandantory_arg_repeat1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2632] = 4,
    ACTIONS(451), 1,
      aux_sym_optional_arg_token1,
    ACTIONS(453), 1,
      anon_sym_RBRACK,
    STATE(124), 1,
      aux_sym_optional_arg_repeat1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2646] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(455), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [2656] = 3,
    ACTIONS(455), 1,
      aux_sym_begenv_decl_token1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(457), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [2668] = 4,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(459), 1,
      aux_sym_docclass_decl_token1,
    STATE(179), 1,
      sym_options,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2682] = 4,
    ACTIONS(406), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(461), 1,
      aux_sym_inline_math_token1,
    STATE(102), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2696] = 4,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(464), 1,
      aux_sym_docclass_decl_token1,
    STATE(150), 1,
      sym_options,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2710] = 3,
    ACTIONS(466), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(468), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2722] = 4,
    ACTIONS(470), 1,
      anon_sym_COMMA,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      aux_sym_options_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2736] = 3,
    ACTIONS(476), 1,
      aux_sym_begenv_decl_token1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(474), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [2748] = 4,
    ACTIONS(478), 1,
      anon_sym_COMMA,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_options_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2762] = 4,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
    ACTIONS(437), 1,
      sym_class_pkg_name,
    ACTIONS(482), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2776] = 4,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
    ACTIONS(437), 1,
      sym_class_pkg_name,
    ACTIONS(484), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2790] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(486), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [2800] = 3,
    ACTIONS(486), 1,
      aux_sym_begenv_decl_token1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(488), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [2812] = 3,
    ACTIONS(492), 1,
      aux_sym_begenv_decl_token1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(490), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [2824] = 4,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      aux_sym_inline_math_token1,
    STATE(118), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2838] = 4,
    ACTIONS(498), 1,
      aux_sym_inline_math_token1,
    ACTIONS(500), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(119), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2852] = 4,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      aux_sym_docclass_decl_token1,
    STATE(159), 1,
      sym_options,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2866] = 4,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(504), 1,
      aux_sym_docclass_decl_token1,
    STATE(161), 1,
      sym_options,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2880] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(476), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [2890] = 4,
    ACTIONS(506), 1,
      anon_sym_DOLLAR,
    ACTIONS(508), 1,
      aux_sym_inline_math_token1,
    STATE(87), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2904] = 4,
    ACTIONS(510), 1,
      aux_sym_inline_math_token1,
    ACTIONS(512), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(102), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2918] = 4,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
    ACTIONS(516), 1,
      aux_sym_mandantory_arg_token1,
    STATE(126), 1,
      aux_sym_mandantory_arg_repeat1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2932] = 4,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
    ACTIONS(520), 1,
      aux_sym_mandantory_arg_token1,
    STATE(127), 1,
      aux_sym_mandantory_arg_repeat1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2946] = 4,
    ACTIONS(522), 1,
      aux_sym_optional_arg_token1,
    ACTIONS(524), 1,
      anon_sym_RBRACK,
    STATE(128), 1,
      aux_sym_optional_arg_repeat1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2960] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(526), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [2970] = 4,
    ACTIONS(528), 1,
      aux_sym_optional_arg_token1,
    ACTIONS(530), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      aux_sym_optional_arg_repeat1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2984] = 4,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
    ACTIONS(437), 1,
      sym_class_pkg_name,
    ACTIONS(532), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2998] = 4,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    ACTIONS(536), 1,
      aux_sym_mandantory_arg_token1,
    STATE(126), 1,
      aux_sym_mandantory_arg_repeat1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3012] = 4,
    ACTIONS(516), 1,
      aux_sym_mandantory_arg_token1,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      aux_sym_mandantory_arg_repeat1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3026] = 4,
    ACTIONS(528), 1,
      aux_sym_optional_arg_token1,
    ACTIONS(541), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      aux_sym_optional_arg_repeat1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3040] = 4,
    ACTIONS(389), 1,
      anon_sym_RBRACE,
    ACTIONS(437), 1,
      sym_class_pkg_name,
    ACTIONS(543), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3054] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(492), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [3064] = 4,
    ACTIONS(437), 1,
      sym_class_pkg_name,
    ACTIONS(545), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3078] = 4,
    ACTIONS(508), 1,
      aux_sym_inline_math_token1,
    ACTIONS(549), 1,
      anon_sym_DOLLAR,
    STATE(87), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3092] = 4,
    ACTIONS(510), 1,
      aux_sym_inline_math_token1,
    ACTIONS(551), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(102), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3106] = 3,
    ACTIONS(526), 1,
      aux_sym_begenv_decl_token1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(553), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [3118] = 3,
    ACTIONS(555), 1,
      anon_sym_RBRACE,
    ACTIONS(557), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3129] = 3,
    ACTIONS(559), 1,
      anon_sym_LBRACE,
    ACTIONS(561), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3140] = 3,
    ACTIONS(557), 1,
      sym_class_pkg_name,
    ACTIONS(563), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3151] = 3,
    ACTIONS(565), 1,
      anon_sym_LBRACE,
    ACTIONS(567), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3162] = 3,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
    ACTIONS(571), 1,
      sym_option_name,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3173] = 3,
    ACTIONS(557), 1,
      sym_class_pkg_name,
    ACTIONS(573), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3184] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(423), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3193] = 3,
    ACTIONS(557), 1,
      sym_class_pkg_name,
    ACTIONS(575), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3204] = 3,
    ACTIONS(437), 1,
      sym_class_pkg_name,
    ACTIONS(577), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3215] = 3,
    ACTIONS(571), 1,
      sym_option_name,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3226] = 3,
    ACTIONS(557), 1,
      sym_class_pkg_name,
    ACTIONS(581), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3237] = 3,
    ACTIONS(557), 1,
      sym_class_pkg_name,
    ACTIONS(583), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3248] = 2,
    ACTIONS(585), 1,
      sym_env_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3256] = 2,
    ACTIONS(587), 1,
      sym_env_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3264] = 2,
    ACTIONS(589), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3272] = 2,
    ACTIONS(591), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3280] = 2,
    ACTIONS(593), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3288] = 2,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3296] = 2,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3304] = 2,
    ACTIONS(599), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3312] = 2,
    ACTIONS(601), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3320] = 2,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3328] = 2,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3336] = 2,
    ACTIONS(607), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3344] = 2,
    ACTIONS(609), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3352] = 2,
    ACTIONS(611), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3360] = 2,
    ACTIONS(613), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3368] = 2,
    ACTIONS(615), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3376] = 2,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3384] = 2,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3392] = 2,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3400] = 2,
    ACTIONS(555), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3408] = 2,
    ACTIONS(557), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3416] = 2,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3424] = 2,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3432] = 2,
    ACTIONS(627), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3440] = 2,
    ACTIONS(629), 1,
      sym_env_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3448] = 2,
    ACTIONS(573), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3456] = 2,
    ACTIONS(631), 1,
      sym_option_name,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3464] = 2,
    ACTIONS(633), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3472] = 2,
    ACTIONS(635), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3480] = 2,
    ACTIONS(637), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3488] = 2,
    ACTIONS(639), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3496] = 2,
    ACTIONS(575), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3504] = 2,
    ACTIONS(641), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3512] = 2,
    ACTIONS(643), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3520] = 2,
    ACTIONS(645), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3528] = 2,
    ACTIONS(581), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3536] = 2,
    ACTIONS(647), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3544] = 2,
    ACTIONS(649), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3552] = 2,
    ACTIONS(571), 1,
      sym_option_name,
    ACTIONS(335), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3560] = 2,
    ACTIONS(651), 1,
      sym_env_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3568] = 2,
    ACTIONS(653), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3576] = 2,
    ACTIONS(655), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3584] = 2,
    ACTIONS(657), 1,
      sym_env_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3592] = 2,
    ACTIONS(659), 1,
      sym_env_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3600] = 2,
    ACTIONS(661), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3608] = 2,
    ACTIONS(663), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3616] = 2,
    ACTIONS(665), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3624] = 2,
    ACTIONS(667), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3632] = 2,
    ACTIONS(669), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3640] = 2,
    ACTIONS(671), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3648] = 2,
    ACTIONS(673), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3656] = 2,
    ACTIONS(675), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3664] = 2,
    ACTIONS(677), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3672] = 2,
    ACTIONS(679), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3680] = 2,
    ACTIONS(681), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3688] = 2,
    ACTIONS(683), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 45,
  [SMALL_STATE(14)] = 90,
  [SMALL_STATE(15)] = 128,
  [SMALL_STATE(16)] = 172,
  [SMALL_STATE(17)] = 210,
  [SMALL_STATE(18)] = 254,
  [SMALL_STATE(19)] = 292,
  [SMALL_STATE(20)] = 330,
  [SMALL_STATE(21)] = 368,
  [SMALL_STATE(22)] = 406,
  [SMALL_STATE(23)] = 444,
  [SMALL_STATE(24)] = 482,
  [SMALL_STATE(25)] = 520,
  [SMALL_STATE(26)] = 558,
  [SMALL_STATE(27)] = 596,
  [SMALL_STATE(28)] = 634,
  [SMALL_STATE(29)] = 672,
  [SMALL_STATE(30)] = 710,
  [SMALL_STATE(31)] = 748,
  [SMALL_STATE(32)] = 786,
  [SMALL_STATE(33)] = 824,
  [SMALL_STATE(34)] = 862,
  [SMALL_STATE(35)] = 900,
  [SMALL_STATE(36)] = 938,
  [SMALL_STATE(37)] = 976,
  [SMALL_STATE(38)] = 1014,
  [SMALL_STATE(39)] = 1052,
  [SMALL_STATE(40)] = 1090,
  [SMALL_STATE(41)] = 1128,
  [SMALL_STATE(42)] = 1165,
  [SMALL_STATE(43)] = 1202,
  [SMALL_STATE(44)] = 1239,
  [SMALL_STATE(45)] = 1276,
  [SMALL_STATE(46)] = 1313,
  [SMALL_STATE(47)] = 1350,
  [SMALL_STATE(48)] = 1387,
  [SMALL_STATE(49)] = 1424,
  [SMALL_STATE(50)] = 1461,
  [SMALL_STATE(51)] = 1498,
  [SMALL_STATE(52)] = 1535,
  [SMALL_STATE(53)] = 1572,
  [SMALL_STATE(54)] = 1609,
  [SMALL_STATE(55)] = 1646,
  [SMALL_STATE(56)] = 1683,
  [SMALL_STATE(57)] = 1720,
  [SMALL_STATE(58)] = 1757,
  [SMALL_STATE(59)] = 1794,
  [SMALL_STATE(60)] = 1831,
  [SMALL_STATE(61)] = 1868,
  [SMALL_STATE(62)] = 1905,
  [SMALL_STATE(63)] = 1942,
  [SMALL_STATE(64)] = 1979,
  [SMALL_STATE(65)] = 2016,
  [SMALL_STATE(66)] = 2053,
  [SMALL_STATE(67)] = 2078,
  [SMALL_STATE(68)] = 2103,
  [SMALL_STATE(69)] = 2128,
  [SMALL_STATE(70)] = 2153,
  [SMALL_STATE(71)] = 2175,
  [SMALL_STATE(72)] = 2197,
  [SMALL_STATE(73)] = 2219,
  [SMALL_STATE(74)] = 2241,
  [SMALL_STATE(75)] = 2263,
  [SMALL_STATE(76)] = 2285,
  [SMALL_STATE(77)] = 2308,
  [SMALL_STATE(78)] = 2331,
  [SMALL_STATE(79)] = 2349,
  [SMALL_STATE(80)] = 2367,
  [SMALL_STATE(81)] = 2384,
  [SMALL_STATE(82)] = 2401,
  [SMALL_STATE(83)] = 2418,
  [SMALL_STATE(84)] = 2435,
  [SMALL_STATE(85)] = 2452,
  [SMALL_STATE(86)] = 2469,
  [SMALL_STATE(87)] = 2486,
  [SMALL_STATE(88)] = 2500,
  [SMALL_STATE(89)] = 2514,
  [SMALL_STATE(90)] = 2526,
  [SMALL_STATE(91)] = 2540,
  [SMALL_STATE(92)] = 2554,
  [SMALL_STATE(93)] = 2568,
  [SMALL_STATE(94)] = 2580,
  [SMALL_STATE(95)] = 2594,
  [SMALL_STATE(96)] = 2606,
  [SMALL_STATE(97)] = 2618,
  [SMALL_STATE(98)] = 2632,
  [SMALL_STATE(99)] = 2646,
  [SMALL_STATE(100)] = 2656,
  [SMALL_STATE(101)] = 2668,
  [SMALL_STATE(102)] = 2682,
  [SMALL_STATE(103)] = 2696,
  [SMALL_STATE(104)] = 2710,
  [SMALL_STATE(105)] = 2722,
  [SMALL_STATE(106)] = 2736,
  [SMALL_STATE(107)] = 2748,
  [SMALL_STATE(108)] = 2762,
  [SMALL_STATE(109)] = 2776,
  [SMALL_STATE(110)] = 2790,
  [SMALL_STATE(111)] = 2800,
  [SMALL_STATE(112)] = 2812,
  [SMALL_STATE(113)] = 2824,
  [SMALL_STATE(114)] = 2838,
  [SMALL_STATE(115)] = 2852,
  [SMALL_STATE(116)] = 2866,
  [SMALL_STATE(117)] = 2880,
  [SMALL_STATE(118)] = 2890,
  [SMALL_STATE(119)] = 2904,
  [SMALL_STATE(120)] = 2918,
  [SMALL_STATE(121)] = 2932,
  [SMALL_STATE(122)] = 2946,
  [SMALL_STATE(123)] = 2960,
  [SMALL_STATE(124)] = 2970,
  [SMALL_STATE(125)] = 2984,
  [SMALL_STATE(126)] = 2998,
  [SMALL_STATE(127)] = 3012,
  [SMALL_STATE(128)] = 3026,
  [SMALL_STATE(129)] = 3040,
  [SMALL_STATE(130)] = 3054,
  [SMALL_STATE(131)] = 3064,
  [SMALL_STATE(132)] = 3078,
  [SMALL_STATE(133)] = 3092,
  [SMALL_STATE(134)] = 3106,
  [SMALL_STATE(135)] = 3118,
  [SMALL_STATE(136)] = 3129,
  [SMALL_STATE(137)] = 3140,
  [SMALL_STATE(138)] = 3151,
  [SMALL_STATE(139)] = 3162,
  [SMALL_STATE(140)] = 3173,
  [SMALL_STATE(141)] = 3184,
  [SMALL_STATE(142)] = 3193,
  [SMALL_STATE(143)] = 3204,
  [SMALL_STATE(144)] = 3215,
  [SMALL_STATE(145)] = 3226,
  [SMALL_STATE(146)] = 3237,
  [SMALL_STATE(147)] = 3248,
  [SMALL_STATE(148)] = 3256,
  [SMALL_STATE(149)] = 3264,
  [SMALL_STATE(150)] = 3272,
  [SMALL_STATE(151)] = 3280,
  [SMALL_STATE(152)] = 3288,
  [SMALL_STATE(153)] = 3296,
  [SMALL_STATE(154)] = 3304,
  [SMALL_STATE(155)] = 3312,
  [SMALL_STATE(156)] = 3320,
  [SMALL_STATE(157)] = 3328,
  [SMALL_STATE(158)] = 3336,
  [SMALL_STATE(159)] = 3344,
  [SMALL_STATE(160)] = 3352,
  [SMALL_STATE(161)] = 3360,
  [SMALL_STATE(162)] = 3368,
  [SMALL_STATE(163)] = 3376,
  [SMALL_STATE(164)] = 3384,
  [SMALL_STATE(165)] = 3392,
  [SMALL_STATE(166)] = 3400,
  [SMALL_STATE(167)] = 3408,
  [SMALL_STATE(168)] = 3416,
  [SMALL_STATE(169)] = 3424,
  [SMALL_STATE(170)] = 3432,
  [SMALL_STATE(171)] = 3440,
  [SMALL_STATE(172)] = 3448,
  [SMALL_STATE(173)] = 3456,
  [SMALL_STATE(174)] = 3464,
  [SMALL_STATE(175)] = 3472,
  [SMALL_STATE(176)] = 3480,
  [SMALL_STATE(177)] = 3488,
  [SMALL_STATE(178)] = 3496,
  [SMALL_STATE(179)] = 3504,
  [SMALL_STATE(180)] = 3512,
  [SMALL_STATE(181)] = 3520,
  [SMALL_STATE(182)] = 3528,
  [SMALL_STATE(183)] = 3536,
  [SMALL_STATE(184)] = 3544,
  [SMALL_STATE(185)] = 3552,
  [SMALL_STATE(186)] = 3560,
  [SMALL_STATE(187)] = 3568,
  [SMALL_STATE(188)] = 3576,
  [SMALL_STATE(189)] = 3584,
  [SMALL_STATE(190)] = 3592,
  [SMALL_STATE(191)] = 3600,
  [SMALL_STATE(192)] = 3608,
  [SMALL_STATE(193)] = 3616,
  [SMALL_STATE(194)] = 3624,
  [SMALL_STATE(195)] = 3632,
  [SMALL_STATE(196)] = 3640,
  [SMALL_STATE(197)] = 3648,
  [SMALL_STATE(198)] = 3656,
  [SMALL_STATE(199)] = 3664,
  [SMALL_STATE(200)] = 3672,
  [SMALL_STATE(201)] = 3680,
  [SMALL_STATE(202)] = 3688,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vesti_content, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(197),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(189),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 2, 0, 0),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endenv_decl, 2, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endenv_decl, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_math, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display_math, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 3, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 3, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_group, 3, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_group, 3, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docclass_decl, 3, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docclass_decl, 3, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singlepkg_decl, 3, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_singlepkg_decl, 3, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_useenv_decl, 3, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_useenv_decl, 3, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begenv_decl, 3, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begenv_decl, 3, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 3, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 3, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_math, 3, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display_math, 3, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docclass_decl, 4, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docclass_decl, 4, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 4, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 4, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singlepkg_decl, 4, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_singlepkg_decl, 4, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importmod_decl, 4, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_importmod_decl, 4, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importfile_decl, 4, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_importfile_decl, 4, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importves_decl, 4, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_importves_decl, 4, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_getfp_decl, 4, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_getfp_decl, 4, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_useenv_decl, 4, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_useenv_decl, 4, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begenv_decl, 4, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begenv_decl, 4, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_luacode, 4, 0, 1),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_luacode, 4, 0, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 5, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 5, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 6, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 6, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 7, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 7, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 8, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 8, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_useenv_decl_repeat1, 2, 0, 0),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_useenv_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_useenv_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_useenv_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_useenv_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipkg_decl_repeat1, 3, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipkg_decl_repeat1, 3, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipkg_decl_repeat1, 2, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipkg_decl_repeat1, 2, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipkg_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_math_repeat1, 2, 0, 0),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_math_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_optional_arg_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_optional_arg_repeat1, 2, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 4, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 4, 0, 0),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 5, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 5, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipkg_decl_repeat1, 4, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipkg_decl_repeat1, 4, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_arg, 1, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_arg, 1, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [461] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_math_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 3, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 3, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mandantory_arg, 2, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mandantory_arg, 2, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mandantory_arg, 3, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mandantory_arg, 3, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_arg, 3, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_arg, 3, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_arg, 2, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mandantory_arg_repeat1, 2, 0, 0),
  [536] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mandantory_arg_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_arg, 2, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [589] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
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
