#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 217
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 83
#define ALIAS_COUNT 1
#define TOKEN_COUNT 47
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
  anon_sym__ = 37,
  anon_sym_CARET = 38,
  sym_latex_function_name = 39,
  sym_letter = 40,
  sym_filepath = 41,
  sym_env_name = 42,
  sym_singleline_raw_latex = 43,
  sym_multiline_raw_latex = 44,
  sym_line_comment = 45,
  sym_multiline_comment = 46,
  sym_vesti_content = 47,
  sym__statement = 48,
  sym_docclass_decl = 49,
  sym_singlepkg_decl = 50,
  sym_multipkg_decl = 51,
  sym_options = 52,
  sym_importmod_decl = 53,
  sym_importfile_decl = 54,
  sym_importves_decl = 55,
  sym_getfp_decl = 56,
  sym_useenv_decl = 57,
  sym_begenv_decl = 58,
  sym_endenv_decl = 59,
  sym_env_arg = 60,
  sym_mandantory_arg = 61,
  sym_optional_arg = 62,
  sym_luacode = 63,
  sym__text_content = 64,
  sym_brace_group = 65,
  sym_paren_group = 66,
  sym__math = 67,
  sym_inline_math = 68,
  sym_display_math = 69,
  sym_text = 70,
  sym_subscript = 71,
  sym_superscript = 72,
  sym_latex_function = 73,
  aux_sym_vesti_content_repeat1 = 74,
  aux_sym_multipkg_decl_repeat1 = 75,
  aux_sym_options_repeat1 = 76,
  aux_sym_useenv_decl_repeat1 = 77,
  aux_sym_mandantory_arg_repeat1 = 78,
  aux_sym_optional_arg_repeat1 = 79,
  aux_sym_inline_math_repeat1 = 80,
  aux_sym_text_repeat1 = 81,
  aux_sym_latex_function_repeat1 = 82,
  alias_sym_luacode_contents = 83,
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
  [anon_sym__] = "_",
  [anon_sym_CARET] = "^",
  [sym_latex_function_name] = "latex_function_name",
  [sym_letter] = "letter",
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
  [sym_subscript] = "subscript",
  [sym_superscript] = "superscript",
  [sym_latex_function] = "latex_function",
  [aux_sym_vesti_content_repeat1] = "vesti_content_repeat1",
  [aux_sym_multipkg_decl_repeat1] = "multipkg_decl_repeat1",
  [aux_sym_options_repeat1] = "options_repeat1",
  [aux_sym_useenv_decl_repeat1] = "useenv_decl_repeat1",
  [aux_sym_mandantory_arg_repeat1] = "mandantory_arg_repeat1",
  [aux_sym_optional_arg_repeat1] = "optional_arg_repeat1",
  [aux_sym_inline_math_repeat1] = "inline_math_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
  [aux_sym_latex_function_repeat1] = "latex_function_repeat1",
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
  [anon_sym__] = anon_sym__,
  [anon_sym_CARET] = anon_sym_CARET,
  [sym_latex_function_name] = sym_latex_function_name,
  [sym_letter] = sym_letter,
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
  [sym_subscript] = sym_subscript,
  [sym_superscript] = sym_superscript,
  [sym_latex_function] = sym_latex_function,
  [aux_sym_vesti_content_repeat1] = aux_sym_vesti_content_repeat1,
  [aux_sym_multipkg_decl_repeat1] = aux_sym_multipkg_decl_repeat1,
  [aux_sym_options_repeat1] = aux_sym_options_repeat1,
  [aux_sym_useenv_decl_repeat1] = aux_sym_useenv_decl_repeat1,
  [aux_sym_mandantory_arg_repeat1] = aux_sym_mandantory_arg_repeat1,
  [aux_sym_optional_arg_repeat1] = aux_sym_optional_arg_repeat1,
  [aux_sym_inline_math_repeat1] = aux_sym_inline_math_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
  [aux_sym_latex_function_repeat1] = aux_sym_latex_function_repeat1,
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
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [sym_latex_function_name] = {
    .visible = true,
    .named = true,
  },
  [sym_letter] = {
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
  [sym_subscript] = {
    .visible = true,
    .named = true,
  },
  [sym_superscript] = {
    .visible = true,
    .named = true,
  },
  [sym_latex_function] = {
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
  [aux_sym_latex_function_repeat1] = {
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
  [4] = 4,
  [5] = 5,
  [6] = 2,
  [7] = 3,
  [8] = 4,
  [9] = 9,
  [10] = 9,
  [11] = 5,
  [12] = 12,
  [13] = 13,
  [14] = 12,
  [15] = 13,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 16,
  [20] = 17,
  [21] = 18,
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
  [49] = 31,
  [50] = 46,
  [51] = 47,
  [52] = 48,
  [53] = 35,
  [54] = 23,
  [55] = 24,
  [56] = 25,
  [57] = 27,
  [58] = 28,
  [59] = 29,
  [60] = 30,
  [61] = 22,
  [62] = 32,
  [63] = 33,
  [64] = 34,
  [65] = 26,
  [66] = 36,
  [67] = 37,
  [68] = 38,
  [69] = 39,
  [70] = 40,
  [71] = 41,
  [72] = 42,
  [73] = 43,
  [74] = 44,
  [75] = 45,
  [76] = 76,
  [77] = 77,
  [78] = 76,
  [79] = 77,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 82,
  [84] = 81,
  [85] = 80,
  [86] = 86,
  [87] = 86,
  [88] = 88,
  [89] = 88,
  [90] = 90,
  [91] = 91,
  [92] = 91,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 96,
  [99] = 97,
  [100] = 95,
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
  [116] = 105,
  [117] = 117,
  [118] = 111,
  [119] = 119,
  [120] = 101,
  [121] = 121,
  [122] = 122,
  [123] = 119,
  [124] = 121,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 102,
  [130] = 130,
  [131] = 113,
  [132] = 117,
  [133] = 133,
  [134] = 110,
  [135] = 112,
  [136] = 136,
  [137] = 104,
  [138] = 136,
  [139] = 125,
  [140] = 115,
  [141] = 141,
  [142] = 126,
  [143] = 130,
  [144] = 122,
  [145] = 133,
  [146] = 146,
  [147] = 107,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 153,
  [157] = 152,
  [158] = 158,
  [159] = 155,
  [160] = 154,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 163,
  [177] = 177,
  [178] = 164,
  [179] = 174,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 166,
  [186] = 161,
  [187] = 187,
  [188] = 188,
  [189] = 173,
  [190] = 165,
  [191] = 175,
  [192] = 169,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 162,
  [197] = 197,
  [198] = 177,
  [199] = 199,
  [200] = 200,
  [201] = 171,
  [202] = 199,
  [203] = 197,
  [204] = 204,
  [205] = 167,
  [206] = 181,
  [207] = 183,
  [208] = 204,
  [209] = 187,
  [210] = 184,
  [211] = 182,
  [212] = 180,
  [213] = 193,
  [214] = 194,
  [215] = 200,
  [216] = 168,
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
      if (eof) ADVANCE(112);
      ADVANCE_MAP(
        '#', 6,
        '$', 173,
        '%', 20,
        '&', 267,
        '(', 117,
        ')', 118,
        ',', 115,
        '[', 133,
        '\\', 272,
        ']', 137,
        '^', 269,
        '_', 268,
        'b', 40,
        'd', 74,
        'e', 69,
        'g', 45,
        'i', 67,
        'l', 95,
        'm', 26,
        'n', 76,
        's', 101,
        'u', 92,
        '{', 114,
        '}', 116,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(278);
      if (lookahead == '%') ADVANCE(279);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(278);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '%') ADVANCE(21);
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == '[') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '%') ADVANCE(21);
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == ',') ADVANCE(115);
      if (lookahead == '}') ADVANCE(116);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(177);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(172);
      if (lookahead == '%') ADVANCE(176);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(175);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 10:
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '%') ADVANCE(176);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(175);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(282);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == '%') ADVANCE(280);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == '%') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(272);
      if (lookahead == '{') ADVANCE(114);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead != 0 &&
          (lookahead < '#' || '%' < lookahead) &&
          lookahead != '^' &&
          lookahead != '_' &&
          lookahead != '}') ADVANCE(273);
      END_STATE();
    case 14:
      if (lookahead == '%') ADVANCE(21);
      if (lookahead == '{') ADVANCE(114);
      if (lookahead == '}') ADVANCE(116);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 15:
      if (lookahead == '%') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (set_contains(sym_filepath_character_set_1, 430, lookahead)) ADVANCE(275);
      END_STATE();
    case 16:
      if (lookahead == '%') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 17:
      if (lookahead == '%') ADVANCE(132);
      if (lookahead == ')') ADVANCE(118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0) ADVANCE(130);
      END_STATE();
    case 18:
      if (lookahead == '%') ADVANCE(136);
      if (lookahead == ']') ADVANCE(137);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 19:
      if (lookahead == '%') ADVANCE(124);
      if (lookahead == ')') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(127);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '!') ADVANCE(1);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '-') ADVANCE(1);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(12);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '3') ADVANCE(148);
      END_STATE();
    case 25:
      if (lookahead == '3') ADVANCE(75);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(152);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 54:
      if (lookahead == 'f') ADVANCE(61);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 'p') ADVANCE(62);
      if (lookahead == 'v') ADVANCE(52);
      END_STATE();
    case 55:
      if (lookahead == 'f') ADVANCE(166);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(83);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 58:
      if (lookahead == 'g') ADVANCE(140);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 60:
      if (lookahead == 'h') ADVANCE(46);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 62:
      if (lookahead == 'k') ADVANCE(58);
      END_STATE();
    case 63:
      if (lookahead == 'k') ADVANCE(50);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 67:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 83:
      if (lookahead == 'p') ADVANCE(150);
      END_STATE();
    case 84:
      if (lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 85:
      if (lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 106:
      if (lookahead == 'v') ADVANCE(156);
      END_STATE();
    case 107:
      if (lookahead == 'v') ADVANCE(158);
      END_STATE();
    case 108:
      if (lookahead == 'v') ADVANCE(154);
      END_STATE();
    case 109:
      if (lookahead == 'x') ADVANCE(25);
      END_STATE();
    case 110:
      if (lookahead == 'x') ADVANCE(24);
      END_STATE();
    case 111:
      if (eof) ADVANCE(112);
      ADVANCE_MAP(
        '#', 6,
        '$', 173,
        '%', 20,
        '&', 267,
        '(', 117,
        ')', 118,
        '\\', 272,
        '^', 269,
        '_', 268,
        'b', 194,
        'd', 228,
        'e', 223,
        'g', 199,
        'i', 221,
        'l', 249,
        'm', 180,
        'n', 230,
        's', 255,
        'u', 246,
        '{', 114,
        '}', 116,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(111);
      if (lookahead != 0 &&
          (lookahead < '[' || '_' < lookahead)) ADVANCE(265);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_docclass_decl_token1);
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == '\r') ADVANCE(5);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_class_pkg_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead == '\n') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(120);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(1);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead == '\n') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(120);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(1);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead == '%') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(127);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead == '%') ADVANCE(126);
      if (lookahead == '*') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(125);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(22);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead == '*') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '-') ADVANCE(127);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(1);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead == '*') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(125);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(22);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead == '*') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(125);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(22);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead == '\\') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead == '\\') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(127);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_begenv_decl_token1);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(4);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_mandantory_arg_token1);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_mandantory_arg_token1);
      if (lookahead == '%') ADVANCE(132);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_mandantory_arg_token1);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '-') ADVANCE(1);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_optional_arg_token1);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_optional_arg_token1);
      if (lookahead == '%') ADVANCE(136);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_optional_arg_token1);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '-') ADVANCE(1);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_KEYWORD_docclass);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_KEYWORD_docclass);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_KEYWORD_importpkg);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_KEYWORD_importpkg);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_KEYWORD_importmod);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_KEYWORD_importmod);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_KEYWORD_importfile);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_KEYWORD_importfile);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_KEYWORD_importves);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_KEYWORD_importves);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_KEYWORD_useltx3);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_KEYWORD_useltx3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_KEYWORD_getfp);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_KEYWORD_getfp);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_KEYWORD_startdoc);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_KEYWORD_startdoc);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_KEYWORD_useenv);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_KEYWORD_useenv);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_KEYWORD_begenv);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_KEYWORD_begenv);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_KEYWORD_endenv);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_KEYWORD_endenv);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_KEYWORD_makeatletter);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_KEYWORD_makeatletter);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_KEYWORD_makeatother);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_KEYWORD_makeatother);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_KEYWORD_ltx3on);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_KEYWORD_ltx3on);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_KEYWORD_ltx3off);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_KEYWORD_ltx3off);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_KEYWORD_nonstopmode);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_KEYWORD_nonstopmode);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_KEYWORD_luacode);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_KEYWORD_luacode);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(177);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_inline_math_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_inline_math_token1);
      if (lookahead == '%') ADVANCE(176);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%') ADVANCE(174);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_inline_math_token1);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '-') ADVANCE(1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '3') ADVANCE(149);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '3') ADVANCE(229);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(248);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(185);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(234);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(196);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(233);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 200:
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
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(241);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == 'l') ADVANCE(259);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(215);
      if (lookahead == 'm') ADVANCE(231);
      if (lookahead == 'p') ADVANCE(216);
      if (lookahead == 'v') ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(167);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(237);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(209);
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'k') ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'k') ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(182);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(197);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(207);
      if (lookahead == 'o') ADVANCE(253);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(239);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(190);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 224:
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
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
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
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(189);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(238);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 233:
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
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 234:
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
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(243);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(222);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(235);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(254);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(251);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(195);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(263);
      if (lookahead == 'u') ADVANCE(183);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(210);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(208);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(214);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(193);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(232);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(258);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(264);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'v') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'v') ADVANCE(159);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'v') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'x') ADVANCE(179);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 264:
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
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_placeholder);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_delimiter);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_latex_function_name);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_latex_function_name);
      if (lookahead == '*') ADVANCE(270);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_latex_function_name);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_letter);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_letter);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead != 0 &&
          (lookahead < '#' || '%' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(273);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_filepath);
      if (set_contains(sym_filepath_character_set_1, 430, lookahead)) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_env_name);
      if (lookahead == '*') ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_env_name);
      if (lookahead == '*') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_singleline_raw_latex);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_multiline_raw_latex);
      if (lookahead == '\n') ADVANCE(278);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_multiline_raw_latex);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_line_comment);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_multiline_comment);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 111},
  [2] = {.lex_state = 111},
  [3] = {.lex_state = 111},
  [4] = {.lex_state = 111},
  [5] = {.lex_state = 111},
  [6] = {.lex_state = 111},
  [7] = {.lex_state = 111},
  [8] = {.lex_state = 111},
  [9] = {.lex_state = 111},
  [10] = {.lex_state = 111},
  [11] = {.lex_state = 111},
  [12] = {.lex_state = 111},
  [13] = {.lex_state = 111},
  [14] = {.lex_state = 111},
  [15] = {.lex_state = 111},
  [16] = {.lex_state = 111},
  [17] = {.lex_state = 111},
  [18] = {.lex_state = 111},
  [19] = {.lex_state = 111},
  [20] = {.lex_state = 111},
  [21] = {.lex_state = 111},
  [22] = {.lex_state = 111},
  [23] = {.lex_state = 111},
  [24] = {.lex_state = 111},
  [25] = {.lex_state = 111},
  [26] = {.lex_state = 111},
  [27] = {.lex_state = 111},
  [28] = {.lex_state = 111},
  [29] = {.lex_state = 111},
  [30] = {.lex_state = 111},
  [31] = {.lex_state = 111},
  [32] = {.lex_state = 111},
  [33] = {.lex_state = 111},
  [34] = {.lex_state = 111},
  [35] = {.lex_state = 111},
  [36] = {.lex_state = 111},
  [37] = {.lex_state = 111},
  [38] = {.lex_state = 111},
  [39] = {.lex_state = 111},
  [40] = {.lex_state = 111},
  [41] = {.lex_state = 111},
  [42] = {.lex_state = 111},
  [43] = {.lex_state = 111},
  [44] = {.lex_state = 111},
  [45] = {.lex_state = 111},
  [46] = {.lex_state = 111},
  [47] = {.lex_state = 111},
  [48] = {.lex_state = 111},
  [49] = {.lex_state = 111},
  [50] = {.lex_state = 111},
  [51] = {.lex_state = 111},
  [52] = {.lex_state = 111},
  [53] = {.lex_state = 111},
  [54] = {.lex_state = 111},
  [55] = {.lex_state = 111},
  [56] = {.lex_state = 111},
  [57] = {.lex_state = 111},
  [58] = {.lex_state = 111},
  [59] = {.lex_state = 111},
  [60] = {.lex_state = 111},
  [61] = {.lex_state = 111},
  [62] = {.lex_state = 111},
  [63] = {.lex_state = 111},
  [64] = {.lex_state = 111},
  [65] = {.lex_state = 111},
  [66] = {.lex_state = 111},
  [67] = {.lex_state = 111},
  [68] = {.lex_state = 111},
  [69] = {.lex_state = 111},
  [70] = {.lex_state = 111},
  [71] = {.lex_state = 111},
  [72] = {.lex_state = 111},
  [73] = {.lex_state = 111},
  [74] = {.lex_state = 111},
  [75] = {.lex_state = 111},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 13},
  [89] = {.lex_state = 13},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 13},
  [92] = {.lex_state = 13},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 17},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 18},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 9},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 17},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 18},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 9},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 17},
  [137] = {.lex_state = 18},
  [138] = {.lex_state = 17},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 17},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 10},
  [144] = {.lex_state = 18},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 18},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 19},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 14},
  [153] = {.lex_state = 14},
  [154] = {.lex_state = 14},
  [155] = {.lex_state = 14},
  [156] = {.lex_state = 14},
  [157] = {.lex_state = 14},
  [158] = {.lex_state = 19},
  [159] = {.lex_state = 14},
  [160] = {.lex_state = 14},
  [161] = {.lex_state = 15},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 14},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 14},
  [172] = {.lex_state = 14},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 5},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 15},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 15},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 15},
  [187] = {.lex_state = 15},
  [188] = {.lex_state = 19},
  [189] = {.lex_state = 5},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 5},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 19},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 16},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 16},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 14},
  [202] = {.lex_state = 16},
  [203] = {.lex_state = 16},
  [204] = {.lex_state = 16},
  [205] = {.lex_state = 14},
  [206] = {.lex_state = 15},
  [207] = {.lex_state = 15},
  [208] = {.lex_state = 16},
  [209] = {.lex_state = 15},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
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
    [anon_sym__] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [sym_latex_function_name] = ACTIONS(1),
    [sym_singleline_raw_latex] = ACTIONS(1),
    [sym_multiline_raw_latex] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_vesti_content] = STATE(170),
    [sym__statement] = STATE(7),
    [sym_docclass_decl] = STATE(7),
    [sym_singlepkg_decl] = STATE(7),
    [sym_multipkg_decl] = STATE(7),
    [sym_importmod_decl] = STATE(7),
    [sym_importfile_decl] = STATE(7),
    [sym_importves_decl] = STATE(7),
    [sym_getfp_decl] = STATE(7),
    [sym_useenv_decl] = STATE(7),
    [sym_begenv_decl] = STATE(7),
    [sym_endenv_decl] = STATE(7),
    [sym_luacode] = STATE(7),
    [sym__text_content] = STATE(7),
    [sym_brace_group] = STATE(7),
    [sym_paren_group] = STATE(7),
    [sym__math] = STATE(7),
    [sym_inline_math] = STATE(7),
    [sym_display_math] = STATE(7),
    [sym_text] = STATE(7),
    [sym_subscript] = STATE(14),
    [sym_superscript] = STATE(14),
    [sym_latex_function] = STATE(7),
    [aux_sym_vesti_content_repeat1] = STATE(7),
    [aux_sym_text_repeat1] = STATE(14),
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
    [anon_sym__] = ACTIONS(39),
    [anon_sym_CARET] = ACTIONS(41),
    [sym_latex_function_name] = ACTIONS(43),
    [sym_singleline_raw_latex] = ACTIONS(19),
    [sym_multiline_raw_latex] = ACTIONS(45),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [2] = {
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
    [sym_subscript] = STATE(12),
    [sym_superscript] = STATE(12),
    [sym_latex_function] = STATE(2),
    [aux_sym_vesti_content_repeat1] = STATE(2),
    [aux_sym_text_repeat1] = STATE(12),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(50),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_RPAREN] = ACTIONS(50),
    [sym_KEYWORD_docclass] = ACTIONS(55),
    [sym_KEYWORD_importpkg] = ACTIONS(58),
    [sym_KEYWORD_importmod] = ACTIONS(61),
    [sym_KEYWORD_importfile] = ACTIONS(64),
    [sym_KEYWORD_importves] = ACTIONS(67),
    [sym_KEYWORD_useltx3] = ACTIONS(70),
    [sym_KEYWORD_getfp] = ACTIONS(73),
    [sym_KEYWORD_startdoc] = ACTIONS(70),
    [sym_KEYWORD_useenv] = ACTIONS(76),
    [sym_KEYWORD_begenv] = ACTIONS(79),
    [sym_KEYWORD_endenv] = ACTIONS(82),
    [sym_KEYWORD_makeatletter] = ACTIONS(70),
    [sym_KEYWORD_makeatother] = ACTIONS(70),
    [sym_KEYWORD_ltx3on] = ACTIONS(70),
    [sym_KEYWORD_ltx3off] = ACTIONS(70),
    [sym_KEYWORD_nonstopmode] = ACTIONS(70),
    [sym_KEYWORD_luacode] = ACTIONS(85),
    [anon_sym_DOLLAR] = ACTIONS(88),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(91),
    [sym_word] = ACTIONS(94),
    [sym_placeholder] = ACTIONS(97),
    [sym_delimiter] = ACTIONS(97),
    [anon_sym__] = ACTIONS(100),
    [anon_sym_CARET] = ACTIONS(103),
    [sym_latex_function_name] = ACTIONS(106),
    [sym_singleline_raw_latex] = ACTIONS(70),
    [sym_multiline_raw_latex] = ACTIONS(109),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [3] = {
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
    [sym_subscript] = STATE(12),
    [sym_superscript] = STATE(12),
    [sym_latex_function] = STATE(2),
    [aux_sym_vesti_content_repeat1] = STATE(2),
    [aux_sym_text_repeat1] = STATE(12),
    [anon_sym_LBRACE] = ACTIONS(112),
    [anon_sym_RBRACE] = ACTIONS(114),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(114),
    [sym_KEYWORD_docclass] = ACTIONS(118),
    [sym_KEYWORD_importpkg] = ACTIONS(120),
    [sym_KEYWORD_importmod] = ACTIONS(122),
    [sym_KEYWORD_importfile] = ACTIONS(124),
    [sym_KEYWORD_importves] = ACTIONS(126),
    [sym_KEYWORD_useltx3] = ACTIONS(128),
    [sym_KEYWORD_getfp] = ACTIONS(130),
    [sym_KEYWORD_startdoc] = ACTIONS(128),
    [sym_KEYWORD_useenv] = ACTIONS(132),
    [sym_KEYWORD_begenv] = ACTIONS(134),
    [sym_KEYWORD_endenv] = ACTIONS(136),
    [sym_KEYWORD_makeatletter] = ACTIONS(128),
    [sym_KEYWORD_makeatother] = ACTIONS(128),
    [sym_KEYWORD_ltx3on] = ACTIONS(128),
    [sym_KEYWORD_ltx3off] = ACTIONS(128),
    [sym_KEYWORD_nonstopmode] = ACTIONS(128),
    [sym_KEYWORD_luacode] = ACTIONS(138),
    [anon_sym_DOLLAR] = ACTIONS(140),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(142),
    [sym_word] = ACTIONS(144),
    [sym_placeholder] = ACTIONS(146),
    [sym_delimiter] = ACTIONS(146),
    [anon_sym__] = ACTIONS(148),
    [anon_sym_CARET] = ACTIONS(150),
    [sym_latex_function_name] = ACTIONS(152),
    [sym_singleline_raw_latex] = ACTIONS(128),
    [sym_multiline_raw_latex] = ACTIONS(154),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_vesti_content] = STATE(190),
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
    [sym_subscript] = STATE(12),
    [sym_superscript] = STATE(12),
    [sym_latex_function] = STATE(3),
    [aux_sym_vesti_content_repeat1] = STATE(3),
    [aux_sym_text_repeat1] = STATE(12),
    [anon_sym_LBRACE] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(116),
    [sym_KEYWORD_docclass] = ACTIONS(118),
    [sym_KEYWORD_importpkg] = ACTIONS(120),
    [sym_KEYWORD_importmod] = ACTIONS(122),
    [sym_KEYWORD_importfile] = ACTIONS(124),
    [sym_KEYWORD_importves] = ACTIONS(126),
    [sym_KEYWORD_useltx3] = ACTIONS(156),
    [sym_KEYWORD_getfp] = ACTIONS(130),
    [sym_KEYWORD_startdoc] = ACTIONS(156),
    [sym_KEYWORD_useenv] = ACTIONS(132),
    [sym_KEYWORD_begenv] = ACTIONS(134),
    [sym_KEYWORD_endenv] = ACTIONS(136),
    [sym_KEYWORD_makeatletter] = ACTIONS(156),
    [sym_KEYWORD_makeatother] = ACTIONS(156),
    [sym_KEYWORD_ltx3on] = ACTIONS(156),
    [sym_KEYWORD_ltx3off] = ACTIONS(156),
    [sym_KEYWORD_nonstopmode] = ACTIONS(156),
    [sym_KEYWORD_luacode] = ACTIONS(138),
    [anon_sym_DOLLAR] = ACTIONS(140),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(142),
    [sym_word] = ACTIONS(144),
    [sym_placeholder] = ACTIONS(146),
    [sym_delimiter] = ACTIONS(146),
    [anon_sym__] = ACTIONS(148),
    [anon_sym_CARET] = ACTIONS(150),
    [sym_latex_function_name] = ACTIONS(152),
    [sym_singleline_raw_latex] = ACTIONS(156),
    [sym_multiline_raw_latex] = ACTIONS(158),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_vesti_content] = STATE(210),
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
    [sym_subscript] = STATE(12),
    [sym_superscript] = STATE(12),
    [sym_latex_function] = STATE(3),
    [aux_sym_vesti_content_repeat1] = STATE(3),
    [aux_sym_text_repeat1] = STATE(12),
    [anon_sym_LBRACE] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(116),
    [sym_KEYWORD_docclass] = ACTIONS(118),
    [sym_KEYWORD_importpkg] = ACTIONS(120),
    [sym_KEYWORD_importmod] = ACTIONS(122),
    [sym_KEYWORD_importfile] = ACTIONS(124),
    [sym_KEYWORD_importves] = ACTIONS(126),
    [sym_KEYWORD_useltx3] = ACTIONS(156),
    [sym_KEYWORD_getfp] = ACTIONS(130),
    [sym_KEYWORD_startdoc] = ACTIONS(156),
    [sym_KEYWORD_useenv] = ACTIONS(132),
    [sym_KEYWORD_begenv] = ACTIONS(134),
    [sym_KEYWORD_endenv] = ACTIONS(136),
    [sym_KEYWORD_makeatletter] = ACTIONS(156),
    [sym_KEYWORD_makeatother] = ACTIONS(156),
    [sym_KEYWORD_ltx3on] = ACTIONS(156),
    [sym_KEYWORD_ltx3off] = ACTIONS(156),
    [sym_KEYWORD_nonstopmode] = ACTIONS(156),
    [sym_KEYWORD_luacode] = ACTIONS(138),
    [anon_sym_DOLLAR] = ACTIONS(140),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(142),
    [sym_word] = ACTIONS(144),
    [sym_placeholder] = ACTIONS(146),
    [sym_delimiter] = ACTIONS(146),
    [anon_sym__] = ACTIONS(148),
    [anon_sym_CARET] = ACTIONS(150),
    [sym_latex_function_name] = ACTIONS(152),
    [sym_singleline_raw_latex] = ACTIONS(156),
    [sym_multiline_raw_latex] = ACTIONS(158),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [6] = {
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
    [sym_subscript] = STATE(14),
    [sym_superscript] = STATE(14),
    [sym_latex_function] = STATE(6),
    [aux_sym_vesti_content_repeat1] = STATE(6),
    [aux_sym_text_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(50),
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_LPAREN] = ACTIONS(163),
    [sym_KEYWORD_docclass] = ACTIONS(166),
    [sym_KEYWORD_importpkg] = ACTIONS(169),
    [sym_KEYWORD_importmod] = ACTIONS(172),
    [sym_KEYWORD_importfile] = ACTIONS(175),
    [sym_KEYWORD_importves] = ACTIONS(178),
    [sym_KEYWORD_useltx3] = ACTIONS(181),
    [sym_KEYWORD_getfp] = ACTIONS(184),
    [sym_KEYWORD_startdoc] = ACTIONS(181),
    [sym_KEYWORD_useenv] = ACTIONS(187),
    [sym_KEYWORD_begenv] = ACTIONS(190),
    [sym_KEYWORD_endenv] = ACTIONS(193),
    [sym_KEYWORD_makeatletter] = ACTIONS(181),
    [sym_KEYWORD_makeatother] = ACTIONS(181),
    [sym_KEYWORD_ltx3on] = ACTIONS(181),
    [sym_KEYWORD_ltx3off] = ACTIONS(181),
    [sym_KEYWORD_nonstopmode] = ACTIONS(181),
    [sym_KEYWORD_luacode] = ACTIONS(196),
    [anon_sym_DOLLAR] = ACTIONS(199),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(202),
    [sym_word] = ACTIONS(205),
    [sym_placeholder] = ACTIONS(208),
    [sym_delimiter] = ACTIONS(208),
    [anon_sym__] = ACTIONS(211),
    [anon_sym_CARET] = ACTIONS(214),
    [sym_latex_function_name] = ACTIONS(217),
    [sym_singleline_raw_latex] = ACTIONS(181),
    [sym_multiline_raw_latex] = ACTIONS(220),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [7] = {
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
    [sym_subscript] = STATE(14),
    [sym_superscript] = STATE(14),
    [sym_latex_function] = STATE(6),
    [aux_sym_vesti_content_repeat1] = STATE(6),
    [aux_sym_text_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(114),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_KEYWORD_docclass] = ACTIONS(9),
    [sym_KEYWORD_importpkg] = ACTIONS(11),
    [sym_KEYWORD_importmod] = ACTIONS(13),
    [sym_KEYWORD_importfile] = ACTIONS(15),
    [sym_KEYWORD_importves] = ACTIONS(17),
    [sym_KEYWORD_useltx3] = ACTIONS(223),
    [sym_KEYWORD_getfp] = ACTIONS(21),
    [sym_KEYWORD_startdoc] = ACTIONS(223),
    [sym_KEYWORD_useenv] = ACTIONS(23),
    [sym_KEYWORD_begenv] = ACTIONS(25),
    [sym_KEYWORD_endenv] = ACTIONS(27),
    [sym_KEYWORD_makeatletter] = ACTIONS(223),
    [sym_KEYWORD_makeatother] = ACTIONS(223),
    [sym_KEYWORD_ltx3on] = ACTIONS(223),
    [sym_KEYWORD_ltx3off] = ACTIONS(223),
    [sym_KEYWORD_nonstopmode] = ACTIONS(223),
    [sym_KEYWORD_luacode] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(33),
    [sym_word] = ACTIONS(35),
    [sym_placeholder] = ACTIONS(37),
    [sym_delimiter] = ACTIONS(37),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_CARET] = ACTIONS(41),
    [sym_latex_function_name] = ACTIONS(43),
    [sym_singleline_raw_latex] = ACTIONS(223),
    [sym_multiline_raw_latex] = ACTIONS(225),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_vesti_content] = STATE(165),
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
    [sym_subscript] = STATE(12),
    [sym_superscript] = STATE(12),
    [sym_latex_function] = STATE(3),
    [aux_sym_vesti_content_repeat1] = STATE(3),
    [aux_sym_text_repeat1] = STATE(12),
    [anon_sym_LBRACE] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(116),
    [sym_KEYWORD_docclass] = ACTIONS(118),
    [sym_KEYWORD_importpkg] = ACTIONS(120),
    [sym_KEYWORD_importmod] = ACTIONS(122),
    [sym_KEYWORD_importfile] = ACTIONS(124),
    [sym_KEYWORD_importves] = ACTIONS(126),
    [sym_KEYWORD_useltx3] = ACTIONS(156),
    [sym_KEYWORD_getfp] = ACTIONS(130),
    [sym_KEYWORD_startdoc] = ACTIONS(156),
    [sym_KEYWORD_useenv] = ACTIONS(132),
    [sym_KEYWORD_begenv] = ACTIONS(134),
    [sym_KEYWORD_endenv] = ACTIONS(136),
    [sym_KEYWORD_makeatletter] = ACTIONS(156),
    [sym_KEYWORD_makeatother] = ACTIONS(156),
    [sym_KEYWORD_ltx3on] = ACTIONS(156),
    [sym_KEYWORD_ltx3off] = ACTIONS(156),
    [sym_KEYWORD_nonstopmode] = ACTIONS(156),
    [sym_KEYWORD_luacode] = ACTIONS(138),
    [anon_sym_DOLLAR] = ACTIONS(140),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(142),
    [sym_word] = ACTIONS(144),
    [sym_placeholder] = ACTIONS(146),
    [sym_delimiter] = ACTIONS(146),
    [anon_sym__] = ACTIONS(148),
    [anon_sym_CARET] = ACTIONS(150),
    [sym_latex_function_name] = ACTIONS(152),
    [sym_singleline_raw_latex] = ACTIONS(156),
    [sym_multiline_raw_latex] = ACTIONS(158),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_vesti_content] = STATE(185),
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
    [sym_subscript] = STATE(12),
    [sym_superscript] = STATE(12),
    [sym_latex_function] = STATE(3),
    [aux_sym_vesti_content_repeat1] = STATE(3),
    [aux_sym_text_repeat1] = STATE(12),
    [anon_sym_LBRACE] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(116),
    [sym_KEYWORD_docclass] = ACTIONS(118),
    [sym_KEYWORD_importpkg] = ACTIONS(120),
    [sym_KEYWORD_importmod] = ACTIONS(122),
    [sym_KEYWORD_importfile] = ACTIONS(124),
    [sym_KEYWORD_importves] = ACTIONS(126),
    [sym_KEYWORD_useltx3] = ACTIONS(156),
    [sym_KEYWORD_getfp] = ACTIONS(130),
    [sym_KEYWORD_startdoc] = ACTIONS(156),
    [sym_KEYWORD_useenv] = ACTIONS(132),
    [sym_KEYWORD_begenv] = ACTIONS(134),
    [sym_KEYWORD_endenv] = ACTIONS(136),
    [sym_KEYWORD_makeatletter] = ACTIONS(156),
    [sym_KEYWORD_makeatother] = ACTIONS(156),
    [sym_KEYWORD_ltx3on] = ACTIONS(156),
    [sym_KEYWORD_ltx3off] = ACTIONS(156),
    [sym_KEYWORD_nonstopmode] = ACTIONS(156),
    [sym_KEYWORD_luacode] = ACTIONS(138),
    [anon_sym_DOLLAR] = ACTIONS(140),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(142),
    [sym_word] = ACTIONS(144),
    [sym_placeholder] = ACTIONS(146),
    [sym_delimiter] = ACTIONS(146),
    [anon_sym__] = ACTIONS(148),
    [anon_sym_CARET] = ACTIONS(150),
    [sym_latex_function_name] = ACTIONS(152),
    [sym_singleline_raw_latex] = ACTIONS(156),
    [sym_multiline_raw_latex] = ACTIONS(158),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_vesti_content] = STATE(166),
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
    [sym_subscript] = STATE(12),
    [sym_superscript] = STATE(12),
    [sym_latex_function] = STATE(3),
    [aux_sym_vesti_content_repeat1] = STATE(3),
    [aux_sym_text_repeat1] = STATE(12),
    [anon_sym_LBRACE] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(116),
    [sym_KEYWORD_docclass] = ACTIONS(118),
    [sym_KEYWORD_importpkg] = ACTIONS(120),
    [sym_KEYWORD_importmod] = ACTIONS(122),
    [sym_KEYWORD_importfile] = ACTIONS(124),
    [sym_KEYWORD_importves] = ACTIONS(126),
    [sym_KEYWORD_useltx3] = ACTIONS(156),
    [sym_KEYWORD_getfp] = ACTIONS(130),
    [sym_KEYWORD_startdoc] = ACTIONS(156),
    [sym_KEYWORD_useenv] = ACTIONS(132),
    [sym_KEYWORD_begenv] = ACTIONS(134),
    [sym_KEYWORD_endenv] = ACTIONS(136),
    [sym_KEYWORD_makeatletter] = ACTIONS(156),
    [sym_KEYWORD_makeatother] = ACTIONS(156),
    [sym_KEYWORD_ltx3on] = ACTIONS(156),
    [sym_KEYWORD_ltx3off] = ACTIONS(156),
    [sym_KEYWORD_nonstopmode] = ACTIONS(156),
    [sym_KEYWORD_luacode] = ACTIONS(138),
    [anon_sym_DOLLAR] = ACTIONS(140),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(142),
    [sym_word] = ACTIONS(144),
    [sym_placeholder] = ACTIONS(146),
    [sym_delimiter] = ACTIONS(146),
    [anon_sym__] = ACTIONS(148),
    [anon_sym_CARET] = ACTIONS(150),
    [sym_latex_function_name] = ACTIONS(152),
    [sym_singleline_raw_latex] = ACTIONS(156),
    [sym_multiline_raw_latex] = ACTIONS(158),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_vesti_content] = STATE(184),
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
    [sym_subscript] = STATE(12),
    [sym_superscript] = STATE(12),
    [sym_latex_function] = STATE(3),
    [aux_sym_vesti_content_repeat1] = STATE(3),
    [aux_sym_text_repeat1] = STATE(12),
    [anon_sym_LBRACE] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(116),
    [sym_KEYWORD_docclass] = ACTIONS(118),
    [sym_KEYWORD_importpkg] = ACTIONS(120),
    [sym_KEYWORD_importmod] = ACTIONS(122),
    [sym_KEYWORD_importfile] = ACTIONS(124),
    [sym_KEYWORD_importves] = ACTIONS(126),
    [sym_KEYWORD_useltx3] = ACTIONS(156),
    [sym_KEYWORD_getfp] = ACTIONS(130),
    [sym_KEYWORD_startdoc] = ACTIONS(156),
    [sym_KEYWORD_useenv] = ACTIONS(132),
    [sym_KEYWORD_begenv] = ACTIONS(134),
    [sym_KEYWORD_endenv] = ACTIONS(136),
    [sym_KEYWORD_makeatletter] = ACTIONS(156),
    [sym_KEYWORD_makeatother] = ACTIONS(156),
    [sym_KEYWORD_ltx3on] = ACTIONS(156),
    [sym_KEYWORD_ltx3off] = ACTIONS(156),
    [sym_KEYWORD_nonstopmode] = ACTIONS(156),
    [sym_KEYWORD_luacode] = ACTIONS(138),
    [anon_sym_DOLLAR] = ACTIONS(140),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(142),
    [sym_word] = ACTIONS(144),
    [sym_placeholder] = ACTIONS(146),
    [sym_delimiter] = ACTIONS(146),
    [anon_sym__] = ACTIONS(148),
    [anon_sym_CARET] = ACTIONS(150),
    [sym_latex_function_name] = ACTIONS(152),
    [sym_singleline_raw_latex] = ACTIONS(156),
    [sym_multiline_raw_latex] = ACTIONS(158),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(148), 1,
      anon_sym__,
    ACTIONS(150), 1,
      anon_sym_CARET,
    ACTIONS(231), 1,
      sym_word,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(233), 2,
      sym_placeholder,
      sym_delimiter,
    STATE(13), 3,
      sym_subscript,
      sym_superscript,
      aux_sym_text_repeat1,
    ACTIONS(227), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(229), 19,
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
  [53] = 8,
    ACTIONS(239), 1,
      sym_word,
    ACTIONS(245), 1,
      anon_sym__,
    ACTIONS(248), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(242), 2,
      sym_placeholder,
      sym_delimiter,
    STATE(13), 3,
      sym_subscript,
      sym_superscript,
      aux_sym_text_repeat1,
    ACTIONS(235), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(237), 19,
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
  [106] = 8,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(41), 1,
      anon_sym_CARET,
    ACTIONS(251), 1,
      sym_word,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(253), 2,
      sym_placeholder,
      sym_delimiter,
    STATE(15), 3,
      sym_subscript,
      sym_superscript,
      aux_sym_text_repeat1,
    ACTIONS(227), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(229), 19,
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
  [158] = 8,
    ACTIONS(255), 1,
      sym_word,
    ACTIONS(261), 1,
      anon_sym__,
    ACTIONS(264), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(258), 2,
      sym_placeholder,
      sym_delimiter,
    STATE(15), 3,
      sym_subscript,
      sym_superscript,
      aux_sym_text_repeat1,
    ACTIONS(235), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(237), 19,
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
  [210] = 5,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(17), 2,
      sym_brace_group,
      aux_sym_latex_function_repeat1,
    ACTIONS(267), 10,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(269), 20,
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
  [256] = 5,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(18), 2,
      sym_brace_group,
      aux_sym_latex_function_repeat1,
    ACTIONS(271), 10,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(273), 20,
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
  [302] = 5,
    ACTIONS(275), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(18), 2,
      sym_brace_group,
      aux_sym_latex_function_repeat1,
    ACTIONS(278), 10,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(280), 20,
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
  [348] = 5,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(20), 2,
      sym_brace_group,
      aux_sym_latex_function_repeat1,
    ACTIONS(267), 9,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(269), 20,
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
  [393] = 5,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(21), 2,
      sym_brace_group,
      aux_sym_latex_function_repeat1,
    ACTIONS(271), 9,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(273), 20,
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
  [438] = 5,
    ACTIONS(282), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(21), 2,
      sym_brace_group,
      aux_sym_latex_function_repeat1,
    ACTIONS(278), 9,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(280), 20,
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
  [483] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(285), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
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
  [523] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(289), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
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
  [563] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(293), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
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
  [603] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(297), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
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
  [643] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(301), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
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
  [683] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(305), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
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
  [723] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(309), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
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
  [763] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(313), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
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
  [803] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(317), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
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
  [843] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(321), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
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
  [883] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(325), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(327), 20,
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
  [923] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(329), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(331), 20,
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
  [963] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(333), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(335), 20,
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
  [1003] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(337), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(339), 20,
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
  [1043] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(341), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(343), 20,
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
  [1083] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(345), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(347), 20,
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
  [1123] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(349), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(351), 20,
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
  [1163] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(353), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(355), 20,
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
  [1203] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(357), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(359), 20,
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
  [1243] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(361), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(363), 20,
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
  [1283] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(365), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(367), 20,
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
  [1323] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(369), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(371), 20,
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
  [1363] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(373), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(375), 20,
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
  [1403] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(377), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(379), 20,
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
  [1443] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(381), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(383), 20,
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
  [1483] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(385), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(387), 20,
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
  [1523] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(389), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(391), 20,
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
  [1563] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(321), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
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
  [1602] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(381), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(383), 20,
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
  [1641] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(385), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(387), 20,
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
  [1680] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(389), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(391), 20,
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
  [1719] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(337), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(339), 20,
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
  [1758] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(289), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
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
  [1797] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(293), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
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
  [1836] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(297), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
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
  [1875] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(305), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
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
  [1914] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(309), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
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
  [1953] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(313), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
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
  [1992] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(317), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
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
  [2031] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(285), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
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
  [2070] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(325), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(327), 20,
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
  [2109] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(329), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(331), 20,
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
  [2148] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(333), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(335), 20,
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
  [2187] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(301), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
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
  [2226] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(341), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(343), 20,
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
  [2265] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(345), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(347), 20,
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
  [2304] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(349), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(351), 20,
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
  [2343] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(353), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(355), 20,
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
  [2382] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(357), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(359), 20,
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
  [2421] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(361), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(363), 20,
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
  [2460] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(365), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(367), 20,
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
  [2499] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(369), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(371), 20,
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
  [2538] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(373), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(375), 20,
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
  [2577] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(377), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_multiline_raw_latex,
    ACTIONS(379), 20,
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
  [2616] = 7,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym_brace_group,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(79), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(105), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [2641] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      anon_sym_LBRACK,
    STATE(73), 1,
      sym_brace_group,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(81), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(105), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [2666] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      anon_sym_LBRACK,
    STATE(61), 1,
      sym_brace_group,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(77), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(105), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [2691] = 7,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym_brace_group,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(81), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(105), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [2716] = 6,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      aux_sym_begenv_decl_token1,
    ACTIONS(401), 1,
      anon_sym_LBRACK,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(84), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(116), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [2738] = 6,
    ACTIONS(405), 1,
      anon_sym_LBRACE,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(81), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(105), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [2760] = 6,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_LBRACK,
    ACTIONS(413), 1,
      aux_sym_begenv_decl_token1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(80), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(116), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [2782] = 6,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      aux_sym_begenv_decl_token1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(85), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(116), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [2804] = 6,
    ACTIONS(405), 1,
      aux_sym_begenv_decl_token1,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_LBRACK,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(84), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(116), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [2826] = 6,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_LBRACK,
    ACTIONS(423), 1,
      aux_sym_begenv_decl_token1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(84), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(116), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [2848] = 7,
    ACTIONS(425), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(427), 1,
      anon_sym_COMMA,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      sym_options,
    STATE(97), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2871] = 7,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(435), 1,
      anon_sym_COMMA,
    ACTIONS(437), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      sym_options,
    STATE(99), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [2894] = 5,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
    ACTIONS(441), 1,
      sym_latex_function_name,
    ACTIONS(443), 1,
      sym_letter,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(25), 2,
      sym_brace_group,
      sym_latex_function,
  [2912] = 5,
    ACTIONS(445), 1,
      anon_sym_LBRACE,
    ACTIONS(447), 1,
      sym_latex_function_name,
    ACTIONS(449), 1,
      sym_letter,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(56), 2,
      sym_brace_group,
      sym_latex_function,
  [2930] = 5,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(451), 1,
      aux_sym_docclass_decl_token1,
    STATE(106), 1,
      sym_options,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(453), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2948] = 5,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
    ACTIONS(441), 1,
      sym_latex_function_name,
    ACTIONS(455), 1,
      sym_letter,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(24), 2,
      sym_brace_group,
      sym_latex_function,
  [2966] = 5,
    ACTIONS(445), 1,
      anon_sym_LBRACE,
    ACTIONS(447), 1,
      sym_latex_function_name,
    ACTIONS(457), 1,
      sym_letter,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(55), 2,
      sym_brace_group,
      sym_latex_function,
  [2984] = 5,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(459), 1,
      aux_sym_docclass_decl_token1,
    STATE(109), 1,
      sym_options,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(461), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3002] = 5,
    ACTIONS(451), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
    ACTIONS(463), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3019] = 5,
    ACTIONS(466), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(468), 1,
      anon_sym_COMMA,
    ACTIONS(470), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3036] = 5,
    ACTIONS(472), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3053] = 5,
    ACTIONS(472), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3070] = 5,
    ACTIONS(478), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(480), 1,
      anon_sym_COMMA,
    ACTIONS(482), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3087] = 5,
    ACTIONS(478), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(480), 1,
      anon_sym_COMMA,
    ACTIONS(482), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3104] = 5,
    ACTIONS(484), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    ACTIONS(488), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3121] = 4,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
    ACTIONS(492), 1,
      aux_sym_mandantory_arg_token1,
    STATE(141), 1,
      aux_sym_mandantory_arg_repeat1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3135] = 4,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      aux_sym_inline_math_token1,
    STATE(110), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3149] = 4,
    ACTIONS(498), 1,
      anon_sym_COMMA,
    ACTIONS(501), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_options_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3163] = 4,
    ACTIONS(503), 1,
      aux_sym_optional_arg_token1,
    ACTIONS(505), 1,
      anon_sym_RBRACK,
    STATE(122), 1,
      aux_sym_optional_arg_repeat1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3177] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(507), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [3187] = 3,
    ACTIONS(459), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(461), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3199] = 4,
    ACTIONS(509), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(511), 1,
      anon_sym_RBRACE,
    ACTIONS(513), 1,
      sym_class_pkg_name,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3213] = 3,
    ACTIONS(515), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(517), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3225] = 3,
    ACTIONS(519), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(521), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3237] = 4,
    ACTIONS(523), 1,
      anon_sym_DOLLAR,
    ACTIONS(525), 1,
      aux_sym_inline_math_token1,
    STATE(111), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3251] = 4,
    ACTIONS(527), 1,
      anon_sym_DOLLAR,
    ACTIONS(529), 1,
      aux_sym_inline_math_token1,
    STATE(111), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3265] = 4,
    ACTIONS(532), 1,
      aux_sym_inline_math_token1,
    ACTIONS(534), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(118), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3279] = 4,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(536), 1,
      aux_sym_docclass_decl_token1,
    STATE(189), 1,
      sym_options,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3293] = 4,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      aux_sym_options_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3307] = 4,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
    ACTIONS(513), 1,
      sym_class_pkg_name,
    ACTIONS(542), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3321] = 3,
    ACTIONS(507), 1,
      aux_sym_begenv_decl_token1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(544), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [3333] = 4,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(546), 1,
      aux_sym_docclass_decl_token1,
    STATE(191), 1,
      sym_options,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3347] = 4,
    ACTIONS(527), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(548), 1,
      aux_sym_inline_math_token1,
    STATE(118), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3361] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(551), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [3371] = 4,
    ACTIONS(492), 1,
      aux_sym_mandantory_arg_token1,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      aux_sym_mandantory_arg_repeat1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3385] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(555), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [3395] = 4,
    ACTIONS(557), 1,
      aux_sym_optional_arg_token1,
    ACTIONS(559), 1,
      anon_sym_RBRACK,
    STATE(146), 1,
      aux_sym_optional_arg_repeat1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3409] = 3,
    ACTIONS(551), 1,
      aux_sym_begenv_decl_token1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(561), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [3421] = 3,
    ACTIONS(555), 1,
      aux_sym_begenv_decl_token1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(563), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [3433] = 3,
    ACTIONS(567), 1,
      aux_sym_begenv_decl_token1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(565), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [3445] = 3,
    ACTIONS(571), 1,
      aux_sym_begenv_decl_token1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(569), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [3457] = 3,
    ACTIONS(573), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(575), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3469] = 4,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_options_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3483] = 4,
    ACTIONS(581), 1,
      anon_sym_DOLLAR,
    ACTIONS(583), 1,
      aux_sym_inline_math_token1,
    STATE(134), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3497] = 4,
    ACTIONS(585), 1,
      aux_sym_inline_math_token1,
    ACTIONS(587), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(135), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3511] = 4,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(589), 1,
      aux_sym_docclass_decl_token1,
    STATE(173), 1,
      sym_options,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3525] = 4,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(591), 1,
      aux_sym_docclass_decl_token1,
    STATE(175), 1,
      sym_options,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3539] = 4,
    ACTIONS(470), 1,
      anon_sym_RBRACE,
    ACTIONS(513), 1,
      sym_class_pkg_name,
    ACTIONS(593), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3553] = 4,
    ACTIONS(525), 1,
      aux_sym_inline_math_token1,
    ACTIONS(595), 1,
      anon_sym_DOLLAR,
    STATE(111), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3567] = 4,
    ACTIONS(532), 1,
      aux_sym_inline_math_token1,
    ACTIONS(597), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(118), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3581] = 4,
    ACTIONS(599), 1,
      anon_sym_RPAREN,
    ACTIONS(601), 1,
      aux_sym_mandantory_arg_token1,
    STATE(101), 1,
      aux_sym_mandantory_arg_repeat1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3595] = 4,
    ACTIONS(603), 1,
      aux_sym_optional_arg_token1,
    ACTIONS(605), 1,
      anon_sym_RBRACK,
    STATE(144), 1,
      aux_sym_optional_arg_repeat1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3609] = 4,
    ACTIONS(607), 1,
      anon_sym_RPAREN,
    ACTIONS(609), 1,
      aux_sym_mandantory_arg_token1,
    STATE(120), 1,
      aux_sym_mandantory_arg_repeat1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3623] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(567), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [3633] = 4,
    ACTIONS(482), 1,
      anon_sym_RBRACE,
    ACTIONS(513), 1,
      sym_class_pkg_name,
    ACTIONS(611), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3647] = 4,
    ACTIONS(613), 1,
      anon_sym_RPAREN,
    ACTIONS(615), 1,
      aux_sym_mandantory_arg_token1,
    STATE(141), 1,
      aux_sym_mandantory_arg_repeat1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3661] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(571), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [3671] = 4,
    ACTIONS(618), 1,
      aux_sym_inline_math_token1,
    ACTIONS(620), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(112), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3685] = 4,
    ACTIONS(557), 1,
      aux_sym_optional_arg_token1,
    ACTIONS(622), 1,
      anon_sym_RBRACK,
    STATE(146), 1,
      aux_sym_optional_arg_repeat1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3699] = 4,
    ACTIONS(488), 1,
      anon_sym_RBRACE,
    ACTIONS(513), 1,
      sym_class_pkg_name,
    ACTIONS(624), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3713] = 4,
    ACTIONS(626), 1,
      aux_sym_optional_arg_token1,
    ACTIONS(629), 1,
      anon_sym_RBRACK,
    STATE(146), 1,
      aux_sym_optional_arg_repeat1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3727] = 4,
    ACTIONS(513), 1,
      sym_class_pkg_name,
    ACTIONS(631), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(633), 1,
      anon_sym_RBRACE,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3741] = 3,
    ACTIONS(635), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(637), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3753] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(501), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3762] = 3,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
    ACTIONS(641), 1,
      sym_option_name,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3773] = 3,
    ACTIONS(513), 1,
      sym_class_pkg_name,
    ACTIONS(643), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3784] = 3,
    ACTIONS(645), 1,
      anon_sym_RBRACE,
    ACTIONS(647), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3795] = 3,
    ACTIONS(647), 1,
      sym_class_pkg_name,
    ACTIONS(649), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3806] = 3,
    ACTIONS(651), 1,
      anon_sym_LBRACE,
    ACTIONS(653), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3817] = 3,
    ACTIONS(647), 1,
      sym_class_pkg_name,
    ACTIONS(655), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3828] = 3,
    ACTIONS(647), 1,
      sym_class_pkg_name,
    ACTIONS(657), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3839] = 3,
    ACTIONS(647), 1,
      sym_class_pkg_name,
    ACTIONS(659), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3850] = 3,
    ACTIONS(641), 1,
      sym_option_name,
    ACTIONS(661), 1,
      anon_sym_RPAREN,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3861] = 3,
    ACTIONS(647), 1,
      sym_class_pkg_name,
    ACTIONS(663), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3872] = 3,
    ACTIONS(665), 1,
      anon_sym_LBRACE,
    ACTIONS(667), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3883] = 2,
    ACTIONS(669), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3891] = 2,
    ACTIONS(645), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3899] = 2,
    ACTIONS(671), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3907] = 2,
    ACTIONS(673), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3915] = 2,
    ACTIONS(675), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3923] = 2,
    ACTIONS(677), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3931] = 2,
    ACTIONS(679), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3939] = 2,
    ACTIONS(681), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3947] = 2,
    ACTIONS(649), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3955] = 2,
    ACTIONS(683), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3963] = 2,
    ACTIONS(685), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3971] = 2,
    ACTIONS(647), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3979] = 2,
    ACTIONS(687), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3987] = 2,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3995] = 2,
    ACTIONS(691), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4003] = 2,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4011] = 2,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4019] = 2,
    ACTIONS(697), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4027] = 2,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4035] = 2,
    ACTIONS(701), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4043] = 2,
    ACTIONS(703), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4051] = 2,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4059] = 2,
    ACTIONS(707), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4067] = 2,
    ACTIONS(709), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4075] = 2,
    ACTIONS(711), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4083] = 2,
    ACTIONS(713), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4091] = 2,
    ACTIONS(715), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4099] = 2,
    ACTIONS(717), 1,
      sym_option_name,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4107] = 2,
    ACTIONS(719), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4115] = 2,
    ACTIONS(721), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4123] = 2,
    ACTIONS(723), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4131] = 2,
    ACTIONS(657), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4139] = 2,
    ACTIONS(725), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4147] = 2,
    ACTIONS(727), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4155] = 2,
    ACTIONS(641), 1,
      sym_option_name,
    ACTIONS(403), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4163] = 2,
    ACTIONS(659), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4171] = 2,
    ACTIONS(729), 1,
      sym_env_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4179] = 2,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4187] = 2,
    ACTIONS(733), 1,
      sym_env_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4195] = 2,
    ACTIONS(735), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4203] = 2,
    ACTIONS(737), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4211] = 2,
    ACTIONS(739), 1,
      sym_env_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4219] = 2,
    ACTIONS(741), 1,
      sym_env_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4227] = 2,
    ACTIONS(743), 1,
      sym_env_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4235] = 2,
    ACTIONS(745), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4243] = 2,
    ACTIONS(747), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4251] = 2,
    ACTIONS(749), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4259] = 2,
    ACTIONS(751), 1,
      sym_env_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4267] = 2,
    ACTIONS(753), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4275] = 2,
    ACTIONS(755), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4283] = 2,
    ACTIONS(757), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4291] = 2,
    ACTIONS(759), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4299] = 2,
    ACTIONS(761), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4307] = 2,
    ACTIONS(763), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4315] = 2,
    ACTIONS(765), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4323] = 2,
    ACTIONS(767), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 53,
  [SMALL_STATE(14)] = 106,
  [SMALL_STATE(15)] = 158,
  [SMALL_STATE(16)] = 210,
  [SMALL_STATE(17)] = 256,
  [SMALL_STATE(18)] = 302,
  [SMALL_STATE(19)] = 348,
  [SMALL_STATE(20)] = 393,
  [SMALL_STATE(21)] = 438,
  [SMALL_STATE(22)] = 483,
  [SMALL_STATE(23)] = 523,
  [SMALL_STATE(24)] = 563,
  [SMALL_STATE(25)] = 603,
  [SMALL_STATE(26)] = 643,
  [SMALL_STATE(27)] = 683,
  [SMALL_STATE(28)] = 723,
  [SMALL_STATE(29)] = 763,
  [SMALL_STATE(30)] = 803,
  [SMALL_STATE(31)] = 843,
  [SMALL_STATE(32)] = 883,
  [SMALL_STATE(33)] = 923,
  [SMALL_STATE(34)] = 963,
  [SMALL_STATE(35)] = 1003,
  [SMALL_STATE(36)] = 1043,
  [SMALL_STATE(37)] = 1083,
  [SMALL_STATE(38)] = 1123,
  [SMALL_STATE(39)] = 1163,
  [SMALL_STATE(40)] = 1203,
  [SMALL_STATE(41)] = 1243,
  [SMALL_STATE(42)] = 1283,
  [SMALL_STATE(43)] = 1323,
  [SMALL_STATE(44)] = 1363,
  [SMALL_STATE(45)] = 1403,
  [SMALL_STATE(46)] = 1443,
  [SMALL_STATE(47)] = 1483,
  [SMALL_STATE(48)] = 1523,
  [SMALL_STATE(49)] = 1563,
  [SMALL_STATE(50)] = 1602,
  [SMALL_STATE(51)] = 1641,
  [SMALL_STATE(52)] = 1680,
  [SMALL_STATE(53)] = 1719,
  [SMALL_STATE(54)] = 1758,
  [SMALL_STATE(55)] = 1797,
  [SMALL_STATE(56)] = 1836,
  [SMALL_STATE(57)] = 1875,
  [SMALL_STATE(58)] = 1914,
  [SMALL_STATE(59)] = 1953,
  [SMALL_STATE(60)] = 1992,
  [SMALL_STATE(61)] = 2031,
  [SMALL_STATE(62)] = 2070,
  [SMALL_STATE(63)] = 2109,
  [SMALL_STATE(64)] = 2148,
  [SMALL_STATE(65)] = 2187,
  [SMALL_STATE(66)] = 2226,
  [SMALL_STATE(67)] = 2265,
  [SMALL_STATE(68)] = 2304,
  [SMALL_STATE(69)] = 2343,
  [SMALL_STATE(70)] = 2382,
  [SMALL_STATE(71)] = 2421,
  [SMALL_STATE(72)] = 2460,
  [SMALL_STATE(73)] = 2499,
  [SMALL_STATE(74)] = 2538,
  [SMALL_STATE(75)] = 2577,
  [SMALL_STATE(76)] = 2616,
  [SMALL_STATE(77)] = 2641,
  [SMALL_STATE(78)] = 2666,
  [SMALL_STATE(79)] = 2691,
  [SMALL_STATE(80)] = 2716,
  [SMALL_STATE(81)] = 2738,
  [SMALL_STATE(82)] = 2760,
  [SMALL_STATE(83)] = 2782,
  [SMALL_STATE(84)] = 2804,
  [SMALL_STATE(85)] = 2826,
  [SMALL_STATE(86)] = 2848,
  [SMALL_STATE(87)] = 2871,
  [SMALL_STATE(88)] = 2894,
  [SMALL_STATE(89)] = 2912,
  [SMALL_STATE(90)] = 2930,
  [SMALL_STATE(91)] = 2948,
  [SMALL_STATE(92)] = 2966,
  [SMALL_STATE(93)] = 2984,
  [SMALL_STATE(94)] = 3002,
  [SMALL_STATE(95)] = 3019,
  [SMALL_STATE(96)] = 3036,
  [SMALL_STATE(97)] = 3053,
  [SMALL_STATE(98)] = 3070,
  [SMALL_STATE(99)] = 3087,
  [SMALL_STATE(100)] = 3104,
  [SMALL_STATE(101)] = 3121,
  [SMALL_STATE(102)] = 3135,
  [SMALL_STATE(103)] = 3149,
  [SMALL_STATE(104)] = 3163,
  [SMALL_STATE(105)] = 3177,
  [SMALL_STATE(106)] = 3187,
  [SMALL_STATE(107)] = 3199,
  [SMALL_STATE(108)] = 3213,
  [SMALL_STATE(109)] = 3225,
  [SMALL_STATE(110)] = 3237,
  [SMALL_STATE(111)] = 3251,
  [SMALL_STATE(112)] = 3265,
  [SMALL_STATE(113)] = 3279,
  [SMALL_STATE(114)] = 3293,
  [SMALL_STATE(115)] = 3307,
  [SMALL_STATE(116)] = 3321,
  [SMALL_STATE(117)] = 3333,
  [SMALL_STATE(118)] = 3347,
  [SMALL_STATE(119)] = 3361,
  [SMALL_STATE(120)] = 3371,
  [SMALL_STATE(121)] = 3385,
  [SMALL_STATE(122)] = 3395,
  [SMALL_STATE(123)] = 3409,
  [SMALL_STATE(124)] = 3421,
  [SMALL_STATE(125)] = 3433,
  [SMALL_STATE(126)] = 3445,
  [SMALL_STATE(127)] = 3457,
  [SMALL_STATE(128)] = 3469,
  [SMALL_STATE(129)] = 3483,
  [SMALL_STATE(130)] = 3497,
  [SMALL_STATE(131)] = 3511,
  [SMALL_STATE(132)] = 3525,
  [SMALL_STATE(133)] = 3539,
  [SMALL_STATE(134)] = 3553,
  [SMALL_STATE(135)] = 3567,
  [SMALL_STATE(136)] = 3581,
  [SMALL_STATE(137)] = 3595,
  [SMALL_STATE(138)] = 3609,
  [SMALL_STATE(139)] = 3623,
  [SMALL_STATE(140)] = 3633,
  [SMALL_STATE(141)] = 3647,
  [SMALL_STATE(142)] = 3661,
  [SMALL_STATE(143)] = 3671,
  [SMALL_STATE(144)] = 3685,
  [SMALL_STATE(145)] = 3699,
  [SMALL_STATE(146)] = 3713,
  [SMALL_STATE(147)] = 3727,
  [SMALL_STATE(148)] = 3741,
  [SMALL_STATE(149)] = 3753,
  [SMALL_STATE(150)] = 3762,
  [SMALL_STATE(151)] = 3773,
  [SMALL_STATE(152)] = 3784,
  [SMALL_STATE(153)] = 3795,
  [SMALL_STATE(154)] = 3806,
  [SMALL_STATE(155)] = 3817,
  [SMALL_STATE(156)] = 3828,
  [SMALL_STATE(157)] = 3839,
  [SMALL_STATE(158)] = 3850,
  [SMALL_STATE(159)] = 3861,
  [SMALL_STATE(160)] = 3872,
  [SMALL_STATE(161)] = 3883,
  [SMALL_STATE(162)] = 3891,
  [SMALL_STATE(163)] = 3899,
  [SMALL_STATE(164)] = 3907,
  [SMALL_STATE(165)] = 3915,
  [SMALL_STATE(166)] = 3923,
  [SMALL_STATE(167)] = 3931,
  [SMALL_STATE(168)] = 3939,
  [SMALL_STATE(169)] = 3947,
  [SMALL_STATE(170)] = 3955,
  [SMALL_STATE(171)] = 3963,
  [SMALL_STATE(172)] = 3971,
  [SMALL_STATE(173)] = 3979,
  [SMALL_STATE(174)] = 3987,
  [SMALL_STATE(175)] = 3995,
  [SMALL_STATE(176)] = 4003,
  [SMALL_STATE(177)] = 4011,
  [SMALL_STATE(178)] = 4019,
  [SMALL_STATE(179)] = 4027,
  [SMALL_STATE(180)] = 4035,
  [SMALL_STATE(181)] = 4043,
  [SMALL_STATE(182)] = 4051,
  [SMALL_STATE(183)] = 4059,
  [SMALL_STATE(184)] = 4067,
  [SMALL_STATE(185)] = 4075,
  [SMALL_STATE(186)] = 4083,
  [SMALL_STATE(187)] = 4091,
  [SMALL_STATE(188)] = 4099,
  [SMALL_STATE(189)] = 4107,
  [SMALL_STATE(190)] = 4115,
  [SMALL_STATE(191)] = 4123,
  [SMALL_STATE(192)] = 4131,
  [SMALL_STATE(193)] = 4139,
  [SMALL_STATE(194)] = 4147,
  [SMALL_STATE(195)] = 4155,
  [SMALL_STATE(196)] = 4163,
  [SMALL_STATE(197)] = 4171,
  [SMALL_STATE(198)] = 4179,
  [SMALL_STATE(199)] = 4187,
  [SMALL_STATE(200)] = 4195,
  [SMALL_STATE(201)] = 4203,
  [SMALL_STATE(202)] = 4211,
  [SMALL_STATE(203)] = 4219,
  [SMALL_STATE(204)] = 4227,
  [SMALL_STATE(205)] = 4235,
  [SMALL_STATE(206)] = 4243,
  [SMALL_STATE(207)] = 4251,
  [SMALL_STATE(208)] = 4259,
  [SMALL_STATE(209)] = 4267,
  [SMALL_STATE(210)] = 4275,
  [SMALL_STATE(211)] = 4283,
  [SMALL_STATE(212)] = 4291,
  [SMALL_STATE(213)] = 4299,
  [SMALL_STATE(214)] = 4307,
  [SMALL_STATE(215)] = 4315,
  [SMALL_STATE(216)] = 4323,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(203),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(202),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vesti_content, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(197),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_latex_function, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_latex_function, 1, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_latex_function, 2, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_latex_function, 2, 0, 0),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_latex_function_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_latex_function_repeat1, 2, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_latex_function_repeat1, 2, 0, 0),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_latex_function_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_useenv_decl, 3, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_useenv_decl, 3, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_math, 2, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display_math, 2, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subscript, 2, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscript, 2, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_superscript, 2, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_superscript, 2, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endenv_decl, 2, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endenv_decl, 2, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 3, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 3, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_group, 3, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_group, 3, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docclass_decl, 3, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docclass_decl, 3, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singlepkg_decl, 3, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_singlepkg_decl, 3, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 8, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 8, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begenv_decl, 3, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begenv_decl, 3, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 3, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 3, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_math, 3, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display_math, 3, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 2, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 2, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docclass_decl, 4, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docclass_decl, 4, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 4, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 4, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singlepkg_decl, 4, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_singlepkg_decl, 4, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importmod_decl, 4, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_importmod_decl, 4, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importfile_decl, 4, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_importfile_decl, 4, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importves_decl, 4, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_importves_decl, 4, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_getfp_decl, 4, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_getfp_decl, 4, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_useenv_decl, 4, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_useenv_decl, 4, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begenv_decl, 4, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begenv_decl, 4, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_luacode, 4, 0, 1),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_luacode, 4, 0, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 5, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 5, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 6, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 6, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 7, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 7, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_useenv_decl_repeat1, 2, 0, 0),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_useenv_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_useenv_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_useenv_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_useenv_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipkg_decl_repeat1, 2, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipkg_decl_repeat1, 2, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipkg_decl_repeat1, 3, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipkg_decl_repeat1, 3, 0, 0),
  [463] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipkg_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_arg, 1, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 5, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 5, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipkg_decl_repeat1, 4, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipkg_decl_repeat1, 4, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_math_repeat1, 2, 0, 0),
  [529] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_math_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_arg, 1, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [548] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_math_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mandantory_arg, 2, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_arg, 2, 0, 0),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mandantory_arg, 2, 0, 0),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_arg, 2, 0, 0),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mandantory_arg, 3, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mandantory_arg, 3, 0, 0),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_arg, 3, 0, 0),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_arg, 3, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 3, 0, 0),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 3, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mandantory_arg_repeat1, 2, 0, 0),
  [615] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mandantory_arg_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [626] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_optional_arg_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_optional_arg_repeat1, 2, 0, 0),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 4, 0, 0),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 4, 0, 0),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [683] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
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
