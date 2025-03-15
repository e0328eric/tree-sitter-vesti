#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 223
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 84
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
  sym_sqparen_group = 67,
  sym__math = 68,
  sym_inline_math = 69,
  sym_display_math = 70,
  sym_text = 71,
  sym_subscript = 72,
  sym_superscript = 73,
  sym_latex_function = 74,
  aux_sym_vesti_content_repeat1 = 75,
  aux_sym_multipkg_decl_repeat1 = 76,
  aux_sym_options_repeat1 = 77,
  aux_sym_useenv_decl_repeat1 = 78,
  aux_sym_mandantory_arg_repeat1 = 79,
  aux_sym_optional_arg_repeat1 = 80,
  aux_sym_inline_math_repeat1 = 81,
  aux_sym_text_repeat1 = 82,
  aux_sym_latex_function_repeat1 = 83,
  alias_sym_luacode_contents = 84,
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
  [sym_sqparen_group] = "sqparen_group",
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
  [sym_sqparen_group] = sym_sqparen_group,
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
  [sym_sqparen_group] = {
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
  [6] = 3,
  [7] = 7,
  [8] = 8,
  [9] = 2,
  [10] = 4,
  [11] = 5,
  [12] = 7,
  [13] = 8,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 14,
  [20] = 15,
  [21] = 21,
  [22] = 22,
  [23] = 17,
  [24] = 16,
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
  [38] = 18,
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
  [52] = 31,
  [53] = 22,
  [54] = 25,
  [55] = 33,
  [56] = 34,
  [57] = 21,
  [58] = 35,
  [59] = 26,
  [60] = 27,
  [61] = 28,
  [62] = 36,
  [63] = 37,
  [64] = 39,
  [65] = 40,
  [66] = 41,
  [67] = 42,
  [68] = 43,
  [69] = 44,
  [70] = 45,
  [71] = 46,
  [72] = 47,
  [73] = 48,
  [74] = 49,
  [75] = 50,
  [76] = 51,
  [77] = 29,
  [78] = 30,
  [79] = 32,
  [80] = 80,
  [81] = 81,
  [82] = 80,
  [83] = 81,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 84,
  [88] = 85,
  [89] = 86,
  [90] = 90,
  [91] = 90,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 94,
  [97] = 95,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 98,
  [103] = 100,
  [104] = 101,
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
  [117] = 113,
  [118] = 118,
  [119] = 115,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 126,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 121,
  [133] = 123,
  [134] = 134,
  [135] = 135,
  [136] = 106,
  [137] = 114,
  [138] = 120,
  [139] = 122,
  [140] = 111,
  [141] = 112,
  [142] = 142,
  [143] = 118,
  [144] = 127,
  [145] = 129,
  [146] = 142,
  [147] = 130,
  [148] = 108,
  [149] = 149,
  [150] = 131,
  [151] = 151,
  [152] = 124,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 158,
  [161] = 157,
  [162] = 159,
  [163] = 155,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 171,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 169,
  [180] = 173,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 165,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 177,
  [191] = 191,
  [192] = 170,
  [193] = 193,
  [194] = 194,
  [195] = 181,
  [196] = 189,
  [197] = 187,
  [198] = 182,
  [199] = 183,
  [200] = 200,
  [201] = 201,
  [202] = 184,
  [203] = 203,
  [204] = 204,
  [205] = 201,
  [206] = 178,
  [207] = 204,
  [208] = 208,
  [209] = 176,
  [210] = 188,
  [211] = 193,
  [212] = 208,
  [213] = 191,
  [214] = 214,
  [215] = 167,
  [216] = 214,
  [217] = 175,
  [218] = 203,
  [219] = 174,
  [220] = 168,
  [221] = 194,
  [222] = 222,
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
      if (eof) ADVANCE(110);
      ADVANCE_MAP(
        '#', 7,
        '$', 171,
        '%', 1,
        '&', 265,
        '(', 115,
        ')', 116,
        ',', 113,
        '[', 131,
        '\\', 270,
        ']', 135,
        '^', 267,
        '_', 266,
        'b', 38,
        'd', 72,
        'e', 67,
        'g', 43,
        'i', 65,
        'l', 93,
        'm', 24,
        'n', 74,
        's', 99,
        'u', 90,
        '{', 112,
        '}', 114,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(279);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '!') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(279);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '-') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(278);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(127);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '%') ADVANCE(2);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == '[') ADVANCE(131);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '%') ADVANCE(2);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ',') ADVANCE(113);
      if (lookahead == '}') ADVANCE(114);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(175);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '%') ADVANCE(173);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 10:
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '%') ADVANCE(173);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(280);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == '%') ADVANCE(277);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == '%') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(270);
      if (lookahead == '{') ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0 &&
          (lookahead < '#' || '%' < lookahead) &&
          lookahead != '^' &&
          lookahead != '_' &&
          lookahead != '}') ADVANCE(271);
      END_STATE();
    case 14:
      if (lookahead == '%') ADVANCE(2);
      if (lookahead == '{') ADVANCE(112);
      if (lookahead == '}') ADVANCE(114);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 15:
      if (lookahead == '%') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (set_contains(sym_filepath_character_set_1, 430, lookahead)) ADVANCE(273);
      END_STATE();
    case 16:
      if (lookahead == '%') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 17:
      if (lookahead == '%') ADVANCE(129);
      if (lookahead == ')') ADVANCE(116);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 18:
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == ']') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 19:
      if (lookahead == '%') ADVANCE(120);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(125);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(12);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '3') ADVANCE(146);
      END_STATE();
    case 23:
      if (lookahead == '3') ADVANCE(73);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == 'm') ADVANCE(75);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == 'v') ADVANCE(50);
      END_STATE();
    case 53:
      if (lookahead == 'f') ADVANCE(164);
      END_STATE();
    case 54:
      if (lookahead == 'f') ADVANCE(81);
      END_STATE();
    case 55:
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(138);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(45);
      END_STATE();
    case 58:
      if (lookahead == 'h') ADVANCE(44);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 60:
      if (lookahead == 'k') ADVANCE(56);
      END_STATE();
    case 61:
      if (lookahead == 'k') ADVANCE(48);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 65:
      if (lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 66:
      if (lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 81:
      if (lookahead == 'p') ADVANCE(148);
      END_STATE();
    case 82:
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 83:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 104:
      if (lookahead == 'v') ADVANCE(154);
      END_STATE();
    case 105:
      if (lookahead == 'v') ADVANCE(156);
      END_STATE();
    case 106:
      if (lookahead == 'v') ADVANCE(152);
      END_STATE();
    case 107:
      if (lookahead == 'x') ADVANCE(23);
      END_STATE();
    case 108:
      if (lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 109:
      if (eof) ADVANCE(110);
      ADVANCE_MAP(
        '#', 7,
        '$', 171,
        '%', 1,
        '&', 265,
        '(', 115,
        ')', 116,
        '[', 131,
        '\\', 270,
        ']', 135,
        '^', 267,
        '_', 266,
        'b', 192,
        'd', 226,
        'e', 221,
        'g', 197,
        'i', 219,
        'l', 247,
        'm', 178,
        'n', 228,
        's', 253,
        'u', 244,
        '{', 112,
        '}', 114,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(109);
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_docclass_decl_token1);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '\r') ADVANCE(6);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_class_pkg_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(118);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(3);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(118);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(3);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_option_name);
      ADVANCE_MAP(
        '\n', 119,
        '*', 124,
        '\\', 118,
        '!', 125,
        '#', 125,
        '-', 125,
        '(', 3,
        ')', 3,
        ',', 3,
      );
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead == '%') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(125);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead == '%') ADVANCE(124);
      if (lookahead == '*') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(123);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(20);
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead == '*') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(123);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(20);
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead == '*') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(123);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(20);
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead == '\\') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead == '\\') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(125);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_begenv_decl_token1);
      if (lookahead == '\n') ADVANCE(127);
      if (lookahead == '\r') ADVANCE(5);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_mandantory_arg_token1);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_mandantory_arg_token1);
      if (lookahead == '\n') ADVANCE(279);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '-') ADVANCE(3);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_mandantory_arg_token1);
      if (lookahead == '%') ADVANCE(129);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(128);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_optional_arg_token1);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_optional_arg_token1);
      if (lookahead == '\n') ADVANCE(279);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '-') ADVANCE(3);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_optional_arg_token1);
      if (lookahead == '%') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(132);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_KEYWORD_docclass);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_KEYWORD_docclass);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_KEYWORD_importpkg);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_KEYWORD_importpkg);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_KEYWORD_importmod);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_KEYWORD_importmod);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_KEYWORD_importfile);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_KEYWORD_importfile);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_KEYWORD_importves);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_KEYWORD_importves);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_KEYWORD_useltx3);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_KEYWORD_useltx3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_KEYWORD_getfp);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_KEYWORD_getfp);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_KEYWORD_startdoc);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_KEYWORD_startdoc);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_KEYWORD_useenv);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_KEYWORD_useenv);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_KEYWORD_begenv);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_KEYWORD_begenv);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_KEYWORD_endenv);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_KEYWORD_endenv);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_KEYWORD_makeatletter);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_KEYWORD_makeatletter);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_KEYWORD_makeatother);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_KEYWORD_makeatother);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_KEYWORD_ltx3on);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_KEYWORD_ltx3on);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_KEYWORD_ltx3off);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_KEYWORD_ltx3off);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_KEYWORD_nonstopmode);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_KEYWORD_nonstopmode);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_KEYWORD_luacode);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_KEYWORD_luacode);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(175);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_inline_math_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_inline_math_token1);
      if (lookahead == '\n') ADVANCE(279);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '-') ADVANCE(3);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_inline_math_token1);
      if (lookahead == '%') ADVANCE(173);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%') ADVANCE(172);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '3') ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '3') ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(246);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(250);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(216);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(183);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(232);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 190:
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
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(231);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 194:
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
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(222);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 200:
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
          lookahead != '}') ADVANCE(263);
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
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(213);
      if (lookahead == 'm') ADVANCE(229);
      if (lookahead == 'p') ADVANCE(214);
      if (lookahead == 'v') ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(235);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(207);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(199);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'k') ADVANCE(210);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'k') ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(180);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(195);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(251);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(237);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(234);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(188);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 224:
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
          lookahead != '}') ADVANCE(263);
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
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 226:
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
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(223);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 229:
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
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(184);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 232:
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
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(241);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 234:
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
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(149);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(233);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 238:
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
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(249);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(193);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(254);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(242);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == 'u') ADVANCE(181);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 248:
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
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(230);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(262);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 258:
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
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 259:
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
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'v') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 261:
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
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'x') ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_placeholder);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_delimiter);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_latex_function_name);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_latex_function_name);
      if (lookahead == '*') ADVANCE(268);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_latex_function_name);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(268);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_letter);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_letter);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0 &&
          (lookahead < '#' || '%' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(271);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_filepath);
      if (set_contains(sym_filepath_character_set_1, 430, lookahead)) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_env_name);
      if (lookahead == '*') ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_env_name);
      if (lookahead == '*') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_singleline_raw_latex);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_multiline_raw_latex);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_line_comment);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(278);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_multiline_comment);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 109},
  [2] = {.lex_state = 109},
  [3] = {.lex_state = 109},
  [4] = {.lex_state = 109},
  [5] = {.lex_state = 109},
  [6] = {.lex_state = 109},
  [7] = {.lex_state = 109},
  [8] = {.lex_state = 109},
  [9] = {.lex_state = 109},
  [10] = {.lex_state = 109},
  [11] = {.lex_state = 109},
  [12] = {.lex_state = 109},
  [13] = {.lex_state = 109},
  [14] = {.lex_state = 109},
  [15] = {.lex_state = 109},
  [16] = {.lex_state = 109},
  [17] = {.lex_state = 109},
  [18] = {.lex_state = 109},
  [19] = {.lex_state = 109},
  [20] = {.lex_state = 109},
  [21] = {.lex_state = 109},
  [22] = {.lex_state = 109},
  [23] = {.lex_state = 109},
  [24] = {.lex_state = 109},
  [25] = {.lex_state = 109},
  [26] = {.lex_state = 109},
  [27] = {.lex_state = 109},
  [28] = {.lex_state = 109},
  [29] = {.lex_state = 109},
  [30] = {.lex_state = 109},
  [31] = {.lex_state = 109},
  [32] = {.lex_state = 109},
  [33] = {.lex_state = 109},
  [34] = {.lex_state = 109},
  [35] = {.lex_state = 109},
  [36] = {.lex_state = 109},
  [37] = {.lex_state = 109},
  [38] = {.lex_state = 109},
  [39] = {.lex_state = 109},
  [40] = {.lex_state = 109},
  [41] = {.lex_state = 109},
  [42] = {.lex_state = 109},
  [43] = {.lex_state = 109},
  [44] = {.lex_state = 109},
  [45] = {.lex_state = 109},
  [46] = {.lex_state = 109},
  [47] = {.lex_state = 109},
  [48] = {.lex_state = 109},
  [49] = {.lex_state = 109},
  [50] = {.lex_state = 109},
  [51] = {.lex_state = 109},
  [52] = {.lex_state = 109},
  [53] = {.lex_state = 109},
  [54] = {.lex_state = 109},
  [55] = {.lex_state = 109},
  [56] = {.lex_state = 109},
  [57] = {.lex_state = 109},
  [58] = {.lex_state = 109},
  [59] = {.lex_state = 109},
  [60] = {.lex_state = 109},
  [61] = {.lex_state = 109},
  [62] = {.lex_state = 109},
  [63] = {.lex_state = 109},
  [64] = {.lex_state = 109},
  [65] = {.lex_state = 109},
  [66] = {.lex_state = 109},
  [67] = {.lex_state = 109},
  [68] = {.lex_state = 109},
  [69] = {.lex_state = 109},
  [70] = {.lex_state = 109},
  [71] = {.lex_state = 109},
  [72] = {.lex_state = 109},
  [73] = {.lex_state = 109},
  [74] = {.lex_state = 109},
  [75] = {.lex_state = 109},
  [76] = {.lex_state = 109},
  [77] = {.lex_state = 109},
  [78] = {.lex_state = 109},
  [79] = {.lex_state = 109},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 13},
  [95] = {.lex_state = 13},
  [96] = {.lex_state = 13},
  [97] = {.lex_state = 13},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 17},
  [112] = {.lex_state = 18},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 17},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 18},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 17},
  [141] = {.lex_state = 18},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 17},
  [145] = {.lex_state = 18},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 17},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 18},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 14},
  [156] = {.lex_state = 19},
  [157] = {.lex_state = 14},
  [158] = {.lex_state = 14},
  [159] = {.lex_state = 14},
  [160] = {.lex_state = 14},
  [161] = {.lex_state = 14},
  [162] = {.lex_state = 14},
  [163] = {.lex_state = 14},
  [164] = {.lex_state = 19},
  [165] = {.lex_state = 15},
  [166] = {.lex_state = 19},
  [167] = {.lex_state = 15},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 16},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 15},
  [186] = {.lex_state = 14},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 16},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 16},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 14},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 14},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 6},
  [207] = {.lex_state = 14},
  [208] = {.lex_state = 15},
  [209] = {.lex_state = 16},
  [210] = {.lex_state = 16},
  [211] = {.lex_state = 14},
  [212] = {.lex_state = 15},
  [213] = {.lex_state = 16},
  [214] = {.lex_state = 15},
  [215] = {.lex_state = 15},
  [216] = {.lex_state = 15},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 19},
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
    [sym_vesti_content] = STATE(200),
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
    [sym_sqparen_group] = STATE(6),
    [sym__math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_text] = STATE(6),
    [sym_subscript] = STATE(20),
    [sym_superscript] = STATE(20),
    [sym_latex_function] = STATE(6),
    [aux_sym_vesti_content_repeat1] = STATE(6),
    [aux_sym_text_repeat1] = STATE(20),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_KEYWORD_docclass] = ACTIONS(11),
    [sym_KEYWORD_importpkg] = ACTIONS(13),
    [sym_KEYWORD_importmod] = ACTIONS(15),
    [sym_KEYWORD_importfile] = ACTIONS(17),
    [sym_KEYWORD_importves] = ACTIONS(19),
    [sym_KEYWORD_useltx3] = ACTIONS(21),
    [sym_KEYWORD_getfp] = ACTIONS(23),
    [sym_KEYWORD_startdoc] = ACTIONS(21),
    [sym_KEYWORD_useenv] = ACTIONS(25),
    [sym_KEYWORD_begenv] = ACTIONS(27),
    [sym_KEYWORD_endenv] = ACTIONS(29),
    [sym_KEYWORD_makeatletter] = ACTIONS(21),
    [sym_KEYWORD_makeatother] = ACTIONS(21),
    [sym_KEYWORD_ltx3on] = ACTIONS(21),
    [sym_KEYWORD_ltx3off] = ACTIONS(21),
    [sym_KEYWORD_nonstopmode] = ACTIONS(21),
    [sym_KEYWORD_luacode] = ACTIONS(31),
    [anon_sym_DOLLAR] = ACTIONS(33),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(35),
    [sym_word] = ACTIONS(37),
    [sym_placeholder] = ACTIONS(39),
    [sym_delimiter] = ACTIONS(39),
    [anon_sym__] = ACTIONS(41),
    [anon_sym_CARET] = ACTIONS(43),
    [sym_latex_function_name] = ACTIONS(45),
    [sym_singleline_raw_latex] = ACTIONS(47),
    [sym_multiline_raw_latex] = ACTIONS(47),
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
    [sym_sqparen_group] = STATE(2),
    [sym__math] = STATE(2),
    [sym_inline_math] = STATE(2),
    [sym_display_math] = STATE(2),
    [sym_text] = STATE(2),
    [sym_subscript] = STATE(15),
    [sym_superscript] = STATE(15),
    [sym_latex_function] = STATE(2),
    [aux_sym_vesti_content_repeat1] = STATE(2),
    [aux_sym_text_repeat1] = STATE(15),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(52),
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_RPAREN] = ACTIONS(52),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_RBRACK] = ACTIONS(52),
    [sym_KEYWORD_docclass] = ACTIONS(60),
    [sym_KEYWORD_importpkg] = ACTIONS(63),
    [sym_KEYWORD_importmod] = ACTIONS(66),
    [sym_KEYWORD_importfile] = ACTIONS(69),
    [sym_KEYWORD_importves] = ACTIONS(72),
    [sym_KEYWORD_useltx3] = ACTIONS(75),
    [sym_KEYWORD_getfp] = ACTIONS(78),
    [sym_KEYWORD_startdoc] = ACTIONS(75),
    [sym_KEYWORD_useenv] = ACTIONS(81),
    [sym_KEYWORD_begenv] = ACTIONS(84),
    [sym_KEYWORD_endenv] = ACTIONS(87),
    [sym_KEYWORD_makeatletter] = ACTIONS(75),
    [sym_KEYWORD_makeatother] = ACTIONS(75),
    [sym_KEYWORD_ltx3on] = ACTIONS(75),
    [sym_KEYWORD_ltx3off] = ACTIONS(75),
    [sym_KEYWORD_nonstopmode] = ACTIONS(75),
    [sym_KEYWORD_luacode] = ACTIONS(90),
    [anon_sym_DOLLAR] = ACTIONS(93),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(96),
    [sym_word] = ACTIONS(99),
    [sym_placeholder] = ACTIONS(102),
    [sym_delimiter] = ACTIONS(102),
    [anon_sym__] = ACTIONS(105),
    [anon_sym_CARET] = ACTIONS(108),
    [sym_latex_function_name] = ACTIONS(111),
    [sym_singleline_raw_latex] = ACTIONS(114),
    [sym_multiline_raw_latex] = ACTIONS(114),
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
    [sym_sqparen_group] = STATE(2),
    [sym__math] = STATE(2),
    [sym_inline_math] = STATE(2),
    [sym_display_math] = STATE(2),
    [sym_text] = STATE(2),
    [sym_subscript] = STATE(15),
    [sym_superscript] = STATE(15),
    [sym_latex_function] = STATE(2),
    [aux_sym_vesti_content_repeat1] = STATE(2),
    [aux_sym_text_repeat1] = STATE(15),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_RBRACK] = ACTIONS(119),
    [sym_KEYWORD_docclass] = ACTIONS(125),
    [sym_KEYWORD_importpkg] = ACTIONS(127),
    [sym_KEYWORD_importmod] = ACTIONS(129),
    [sym_KEYWORD_importfile] = ACTIONS(131),
    [sym_KEYWORD_importves] = ACTIONS(133),
    [sym_KEYWORD_useltx3] = ACTIONS(135),
    [sym_KEYWORD_getfp] = ACTIONS(137),
    [sym_KEYWORD_startdoc] = ACTIONS(135),
    [sym_KEYWORD_useenv] = ACTIONS(139),
    [sym_KEYWORD_begenv] = ACTIONS(141),
    [sym_KEYWORD_endenv] = ACTIONS(143),
    [sym_KEYWORD_makeatletter] = ACTIONS(135),
    [sym_KEYWORD_makeatother] = ACTIONS(135),
    [sym_KEYWORD_ltx3on] = ACTIONS(135),
    [sym_KEYWORD_ltx3off] = ACTIONS(135),
    [sym_KEYWORD_nonstopmode] = ACTIONS(135),
    [sym_KEYWORD_luacode] = ACTIONS(145),
    [anon_sym_DOLLAR] = ACTIONS(147),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(149),
    [sym_word] = ACTIONS(151),
    [sym_placeholder] = ACTIONS(153),
    [sym_delimiter] = ACTIONS(153),
    [anon_sym__] = ACTIONS(155),
    [anon_sym_CARET] = ACTIONS(157),
    [sym_latex_function_name] = ACTIONS(159),
    [sym_singleline_raw_latex] = ACTIONS(161),
    [sym_multiline_raw_latex] = ACTIONS(161),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_vesti_content] = STATE(192),
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
    [sym_sqparen_group] = STATE(3),
    [sym__math] = STATE(3),
    [sym_inline_math] = STATE(3),
    [sym_display_math] = STATE(3),
    [sym_text] = STATE(3),
    [sym_subscript] = STATE(15),
    [sym_superscript] = STATE(15),
    [sym_latex_function] = STATE(3),
    [aux_sym_vesti_content_repeat1] = STATE(3),
    [aux_sym_text_repeat1] = STATE(15),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [sym_KEYWORD_docclass] = ACTIONS(125),
    [sym_KEYWORD_importpkg] = ACTIONS(127),
    [sym_KEYWORD_importmod] = ACTIONS(129),
    [sym_KEYWORD_importfile] = ACTIONS(131),
    [sym_KEYWORD_importves] = ACTIONS(133),
    [sym_KEYWORD_useltx3] = ACTIONS(163),
    [sym_KEYWORD_getfp] = ACTIONS(137),
    [sym_KEYWORD_startdoc] = ACTIONS(163),
    [sym_KEYWORD_useenv] = ACTIONS(139),
    [sym_KEYWORD_begenv] = ACTIONS(141),
    [sym_KEYWORD_endenv] = ACTIONS(143),
    [sym_KEYWORD_makeatletter] = ACTIONS(163),
    [sym_KEYWORD_makeatother] = ACTIONS(163),
    [sym_KEYWORD_ltx3on] = ACTIONS(163),
    [sym_KEYWORD_ltx3off] = ACTIONS(163),
    [sym_KEYWORD_nonstopmode] = ACTIONS(163),
    [sym_KEYWORD_luacode] = ACTIONS(145),
    [anon_sym_DOLLAR] = ACTIONS(147),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(149),
    [sym_word] = ACTIONS(151),
    [sym_placeholder] = ACTIONS(153),
    [sym_delimiter] = ACTIONS(153),
    [anon_sym__] = ACTIONS(155),
    [anon_sym_CARET] = ACTIONS(157),
    [sym_latex_function_name] = ACTIONS(159),
    [sym_singleline_raw_latex] = ACTIONS(165),
    [sym_multiline_raw_latex] = ACTIONS(165),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_vesti_content] = STATE(179),
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
    [sym_sqparen_group] = STATE(3),
    [sym__math] = STATE(3),
    [sym_inline_math] = STATE(3),
    [sym_display_math] = STATE(3),
    [sym_text] = STATE(3),
    [sym_subscript] = STATE(15),
    [sym_superscript] = STATE(15),
    [sym_latex_function] = STATE(3),
    [aux_sym_vesti_content_repeat1] = STATE(3),
    [aux_sym_text_repeat1] = STATE(15),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [sym_KEYWORD_docclass] = ACTIONS(125),
    [sym_KEYWORD_importpkg] = ACTIONS(127),
    [sym_KEYWORD_importmod] = ACTIONS(129),
    [sym_KEYWORD_importfile] = ACTIONS(131),
    [sym_KEYWORD_importves] = ACTIONS(133),
    [sym_KEYWORD_useltx3] = ACTIONS(163),
    [sym_KEYWORD_getfp] = ACTIONS(137),
    [sym_KEYWORD_startdoc] = ACTIONS(163),
    [sym_KEYWORD_useenv] = ACTIONS(139),
    [sym_KEYWORD_begenv] = ACTIONS(141),
    [sym_KEYWORD_endenv] = ACTIONS(143),
    [sym_KEYWORD_makeatletter] = ACTIONS(163),
    [sym_KEYWORD_makeatother] = ACTIONS(163),
    [sym_KEYWORD_ltx3on] = ACTIONS(163),
    [sym_KEYWORD_ltx3off] = ACTIONS(163),
    [sym_KEYWORD_nonstopmode] = ACTIONS(163),
    [sym_KEYWORD_luacode] = ACTIONS(145),
    [anon_sym_DOLLAR] = ACTIONS(147),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(149),
    [sym_word] = ACTIONS(151),
    [sym_placeholder] = ACTIONS(153),
    [sym_delimiter] = ACTIONS(153),
    [anon_sym__] = ACTIONS(155),
    [anon_sym_CARET] = ACTIONS(157),
    [sym_latex_function_name] = ACTIONS(159),
    [sym_singleline_raw_latex] = ACTIONS(165),
    [sym_multiline_raw_latex] = ACTIONS(165),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__statement] = STATE(9),
    [sym_docclass_decl] = STATE(9),
    [sym_singlepkg_decl] = STATE(9),
    [sym_multipkg_decl] = STATE(9),
    [sym_importmod_decl] = STATE(9),
    [sym_importfile_decl] = STATE(9),
    [sym_importves_decl] = STATE(9),
    [sym_getfp_decl] = STATE(9),
    [sym_useenv_decl] = STATE(9),
    [sym_begenv_decl] = STATE(9),
    [sym_endenv_decl] = STATE(9),
    [sym_luacode] = STATE(9),
    [sym__text_content] = STATE(9),
    [sym_brace_group] = STATE(9),
    [sym_paren_group] = STATE(9),
    [sym_sqparen_group] = STATE(9),
    [sym__math] = STATE(9),
    [sym_inline_math] = STATE(9),
    [sym_display_math] = STATE(9),
    [sym_text] = STATE(9),
    [sym_subscript] = STATE(20),
    [sym_superscript] = STATE(20),
    [sym_latex_function] = STATE(9),
    [aux_sym_vesti_content_repeat1] = STATE(9),
    [aux_sym_text_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_KEYWORD_docclass] = ACTIONS(11),
    [sym_KEYWORD_importpkg] = ACTIONS(13),
    [sym_KEYWORD_importmod] = ACTIONS(15),
    [sym_KEYWORD_importfile] = ACTIONS(17),
    [sym_KEYWORD_importves] = ACTIONS(19),
    [sym_KEYWORD_useltx3] = ACTIONS(167),
    [sym_KEYWORD_getfp] = ACTIONS(23),
    [sym_KEYWORD_startdoc] = ACTIONS(167),
    [sym_KEYWORD_useenv] = ACTIONS(25),
    [sym_KEYWORD_begenv] = ACTIONS(27),
    [sym_KEYWORD_endenv] = ACTIONS(29),
    [sym_KEYWORD_makeatletter] = ACTIONS(167),
    [sym_KEYWORD_makeatother] = ACTIONS(167),
    [sym_KEYWORD_ltx3on] = ACTIONS(167),
    [sym_KEYWORD_ltx3off] = ACTIONS(167),
    [sym_KEYWORD_nonstopmode] = ACTIONS(167),
    [sym_KEYWORD_luacode] = ACTIONS(31),
    [anon_sym_DOLLAR] = ACTIONS(33),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(35),
    [sym_word] = ACTIONS(37),
    [sym_placeholder] = ACTIONS(39),
    [sym_delimiter] = ACTIONS(39),
    [anon_sym__] = ACTIONS(41),
    [anon_sym_CARET] = ACTIONS(43),
    [sym_latex_function_name] = ACTIONS(45),
    [sym_singleline_raw_latex] = ACTIONS(169),
    [sym_multiline_raw_latex] = ACTIONS(169),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_vesti_content] = STATE(172),
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
    [sym_sqparen_group] = STATE(3),
    [sym__math] = STATE(3),
    [sym_inline_math] = STATE(3),
    [sym_display_math] = STATE(3),
    [sym_text] = STATE(3),
    [sym_subscript] = STATE(15),
    [sym_superscript] = STATE(15),
    [sym_latex_function] = STATE(3),
    [aux_sym_vesti_content_repeat1] = STATE(3),
    [aux_sym_text_repeat1] = STATE(15),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [sym_KEYWORD_docclass] = ACTIONS(125),
    [sym_KEYWORD_importpkg] = ACTIONS(127),
    [sym_KEYWORD_importmod] = ACTIONS(129),
    [sym_KEYWORD_importfile] = ACTIONS(131),
    [sym_KEYWORD_importves] = ACTIONS(133),
    [sym_KEYWORD_useltx3] = ACTIONS(163),
    [sym_KEYWORD_getfp] = ACTIONS(137),
    [sym_KEYWORD_startdoc] = ACTIONS(163),
    [sym_KEYWORD_useenv] = ACTIONS(139),
    [sym_KEYWORD_begenv] = ACTIONS(141),
    [sym_KEYWORD_endenv] = ACTIONS(143),
    [sym_KEYWORD_makeatletter] = ACTIONS(163),
    [sym_KEYWORD_makeatother] = ACTIONS(163),
    [sym_KEYWORD_ltx3on] = ACTIONS(163),
    [sym_KEYWORD_ltx3off] = ACTIONS(163),
    [sym_KEYWORD_nonstopmode] = ACTIONS(163),
    [sym_KEYWORD_luacode] = ACTIONS(145),
    [anon_sym_DOLLAR] = ACTIONS(147),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(149),
    [sym_word] = ACTIONS(151),
    [sym_placeholder] = ACTIONS(153),
    [sym_delimiter] = ACTIONS(153),
    [anon_sym__] = ACTIONS(155),
    [anon_sym_CARET] = ACTIONS(157),
    [sym_latex_function_name] = ACTIONS(159),
    [sym_singleline_raw_latex] = ACTIONS(165),
    [sym_multiline_raw_latex] = ACTIONS(165),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_vesti_content] = STATE(196),
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
    [sym_sqparen_group] = STATE(3),
    [sym__math] = STATE(3),
    [sym_inline_math] = STATE(3),
    [sym_display_math] = STATE(3),
    [sym_text] = STATE(3),
    [sym_subscript] = STATE(15),
    [sym_superscript] = STATE(15),
    [sym_latex_function] = STATE(3),
    [aux_sym_vesti_content_repeat1] = STATE(3),
    [aux_sym_text_repeat1] = STATE(15),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [sym_KEYWORD_docclass] = ACTIONS(125),
    [sym_KEYWORD_importpkg] = ACTIONS(127),
    [sym_KEYWORD_importmod] = ACTIONS(129),
    [sym_KEYWORD_importfile] = ACTIONS(131),
    [sym_KEYWORD_importves] = ACTIONS(133),
    [sym_KEYWORD_useltx3] = ACTIONS(163),
    [sym_KEYWORD_getfp] = ACTIONS(137),
    [sym_KEYWORD_startdoc] = ACTIONS(163),
    [sym_KEYWORD_useenv] = ACTIONS(139),
    [sym_KEYWORD_begenv] = ACTIONS(141),
    [sym_KEYWORD_endenv] = ACTIONS(143),
    [sym_KEYWORD_makeatletter] = ACTIONS(163),
    [sym_KEYWORD_makeatother] = ACTIONS(163),
    [sym_KEYWORD_ltx3on] = ACTIONS(163),
    [sym_KEYWORD_ltx3off] = ACTIONS(163),
    [sym_KEYWORD_nonstopmode] = ACTIONS(163),
    [sym_KEYWORD_luacode] = ACTIONS(145),
    [anon_sym_DOLLAR] = ACTIONS(147),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(149),
    [sym_word] = ACTIONS(151),
    [sym_placeholder] = ACTIONS(153),
    [sym_delimiter] = ACTIONS(153),
    [anon_sym__] = ACTIONS(155),
    [anon_sym_CARET] = ACTIONS(157),
    [sym_latex_function_name] = ACTIONS(159),
    [sym_singleline_raw_latex] = ACTIONS(165),
    [sym_multiline_raw_latex] = ACTIONS(165),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__statement] = STATE(9),
    [sym_docclass_decl] = STATE(9),
    [sym_singlepkg_decl] = STATE(9),
    [sym_multipkg_decl] = STATE(9),
    [sym_importmod_decl] = STATE(9),
    [sym_importfile_decl] = STATE(9),
    [sym_importves_decl] = STATE(9),
    [sym_getfp_decl] = STATE(9),
    [sym_useenv_decl] = STATE(9),
    [sym_begenv_decl] = STATE(9),
    [sym_endenv_decl] = STATE(9),
    [sym_luacode] = STATE(9),
    [sym__text_content] = STATE(9),
    [sym_brace_group] = STATE(9),
    [sym_paren_group] = STATE(9),
    [sym_sqparen_group] = STATE(9),
    [sym__math] = STATE(9),
    [sym_inline_math] = STATE(9),
    [sym_display_math] = STATE(9),
    [sym_text] = STATE(9),
    [sym_subscript] = STATE(20),
    [sym_superscript] = STATE(20),
    [sym_latex_function] = STATE(9),
    [aux_sym_vesti_content_repeat1] = STATE(9),
    [aux_sym_text_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_LBRACE] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(177),
    [sym_KEYWORD_docclass] = ACTIONS(180),
    [sym_KEYWORD_importpkg] = ACTIONS(183),
    [sym_KEYWORD_importmod] = ACTIONS(186),
    [sym_KEYWORD_importfile] = ACTIONS(189),
    [sym_KEYWORD_importves] = ACTIONS(192),
    [sym_KEYWORD_useltx3] = ACTIONS(195),
    [sym_KEYWORD_getfp] = ACTIONS(198),
    [sym_KEYWORD_startdoc] = ACTIONS(195),
    [sym_KEYWORD_useenv] = ACTIONS(201),
    [sym_KEYWORD_begenv] = ACTIONS(204),
    [sym_KEYWORD_endenv] = ACTIONS(207),
    [sym_KEYWORD_makeatletter] = ACTIONS(195),
    [sym_KEYWORD_makeatother] = ACTIONS(195),
    [sym_KEYWORD_ltx3on] = ACTIONS(195),
    [sym_KEYWORD_ltx3off] = ACTIONS(195),
    [sym_KEYWORD_nonstopmode] = ACTIONS(195),
    [sym_KEYWORD_luacode] = ACTIONS(210),
    [anon_sym_DOLLAR] = ACTIONS(213),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(216),
    [sym_word] = ACTIONS(219),
    [sym_placeholder] = ACTIONS(222),
    [sym_delimiter] = ACTIONS(222),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_CARET] = ACTIONS(228),
    [sym_latex_function_name] = ACTIONS(231),
    [sym_singleline_raw_latex] = ACTIONS(234),
    [sym_multiline_raw_latex] = ACTIONS(234),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_vesti_content] = STATE(170),
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
    [sym_sqparen_group] = STATE(3),
    [sym__math] = STATE(3),
    [sym_inline_math] = STATE(3),
    [sym_display_math] = STATE(3),
    [sym_text] = STATE(3),
    [sym_subscript] = STATE(15),
    [sym_superscript] = STATE(15),
    [sym_latex_function] = STATE(3),
    [aux_sym_vesti_content_repeat1] = STATE(3),
    [aux_sym_text_repeat1] = STATE(15),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [sym_KEYWORD_docclass] = ACTIONS(125),
    [sym_KEYWORD_importpkg] = ACTIONS(127),
    [sym_KEYWORD_importmod] = ACTIONS(129),
    [sym_KEYWORD_importfile] = ACTIONS(131),
    [sym_KEYWORD_importves] = ACTIONS(133),
    [sym_KEYWORD_useltx3] = ACTIONS(163),
    [sym_KEYWORD_getfp] = ACTIONS(137),
    [sym_KEYWORD_startdoc] = ACTIONS(163),
    [sym_KEYWORD_useenv] = ACTIONS(139),
    [sym_KEYWORD_begenv] = ACTIONS(141),
    [sym_KEYWORD_endenv] = ACTIONS(143),
    [sym_KEYWORD_makeatletter] = ACTIONS(163),
    [sym_KEYWORD_makeatother] = ACTIONS(163),
    [sym_KEYWORD_ltx3on] = ACTIONS(163),
    [sym_KEYWORD_ltx3off] = ACTIONS(163),
    [sym_KEYWORD_nonstopmode] = ACTIONS(163),
    [sym_KEYWORD_luacode] = ACTIONS(145),
    [anon_sym_DOLLAR] = ACTIONS(147),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(149),
    [sym_word] = ACTIONS(151),
    [sym_placeholder] = ACTIONS(153),
    [sym_delimiter] = ACTIONS(153),
    [anon_sym__] = ACTIONS(155),
    [anon_sym_CARET] = ACTIONS(157),
    [sym_latex_function_name] = ACTIONS(159),
    [sym_singleline_raw_latex] = ACTIONS(165),
    [sym_multiline_raw_latex] = ACTIONS(165),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_vesti_content] = STATE(169),
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
    [sym_sqparen_group] = STATE(3),
    [sym__math] = STATE(3),
    [sym_inline_math] = STATE(3),
    [sym_display_math] = STATE(3),
    [sym_text] = STATE(3),
    [sym_subscript] = STATE(15),
    [sym_superscript] = STATE(15),
    [sym_latex_function] = STATE(3),
    [aux_sym_vesti_content_repeat1] = STATE(3),
    [aux_sym_text_repeat1] = STATE(15),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [sym_KEYWORD_docclass] = ACTIONS(125),
    [sym_KEYWORD_importpkg] = ACTIONS(127),
    [sym_KEYWORD_importmod] = ACTIONS(129),
    [sym_KEYWORD_importfile] = ACTIONS(131),
    [sym_KEYWORD_importves] = ACTIONS(133),
    [sym_KEYWORD_useltx3] = ACTIONS(163),
    [sym_KEYWORD_getfp] = ACTIONS(137),
    [sym_KEYWORD_startdoc] = ACTIONS(163),
    [sym_KEYWORD_useenv] = ACTIONS(139),
    [sym_KEYWORD_begenv] = ACTIONS(141),
    [sym_KEYWORD_endenv] = ACTIONS(143),
    [sym_KEYWORD_makeatletter] = ACTIONS(163),
    [sym_KEYWORD_makeatother] = ACTIONS(163),
    [sym_KEYWORD_ltx3on] = ACTIONS(163),
    [sym_KEYWORD_ltx3off] = ACTIONS(163),
    [sym_KEYWORD_nonstopmode] = ACTIONS(163),
    [sym_KEYWORD_luacode] = ACTIONS(145),
    [anon_sym_DOLLAR] = ACTIONS(147),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(149),
    [sym_word] = ACTIONS(151),
    [sym_placeholder] = ACTIONS(153),
    [sym_delimiter] = ACTIONS(153),
    [anon_sym__] = ACTIONS(155),
    [anon_sym_CARET] = ACTIONS(157),
    [sym_latex_function_name] = ACTIONS(159),
    [sym_singleline_raw_latex] = ACTIONS(165),
    [sym_multiline_raw_latex] = ACTIONS(165),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_vesti_content] = STATE(171),
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
    [sym_sqparen_group] = STATE(3),
    [sym__math] = STATE(3),
    [sym_inline_math] = STATE(3),
    [sym_display_math] = STATE(3),
    [sym_text] = STATE(3),
    [sym_subscript] = STATE(15),
    [sym_superscript] = STATE(15),
    [sym_latex_function] = STATE(3),
    [aux_sym_vesti_content_repeat1] = STATE(3),
    [aux_sym_text_repeat1] = STATE(15),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [sym_KEYWORD_docclass] = ACTIONS(125),
    [sym_KEYWORD_importpkg] = ACTIONS(127),
    [sym_KEYWORD_importmod] = ACTIONS(129),
    [sym_KEYWORD_importfile] = ACTIONS(131),
    [sym_KEYWORD_importves] = ACTIONS(133),
    [sym_KEYWORD_useltx3] = ACTIONS(163),
    [sym_KEYWORD_getfp] = ACTIONS(137),
    [sym_KEYWORD_startdoc] = ACTIONS(163),
    [sym_KEYWORD_useenv] = ACTIONS(139),
    [sym_KEYWORD_begenv] = ACTIONS(141),
    [sym_KEYWORD_endenv] = ACTIONS(143),
    [sym_KEYWORD_makeatletter] = ACTIONS(163),
    [sym_KEYWORD_makeatother] = ACTIONS(163),
    [sym_KEYWORD_ltx3on] = ACTIONS(163),
    [sym_KEYWORD_ltx3off] = ACTIONS(163),
    [sym_KEYWORD_nonstopmode] = ACTIONS(163),
    [sym_KEYWORD_luacode] = ACTIONS(145),
    [anon_sym_DOLLAR] = ACTIONS(147),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(149),
    [sym_word] = ACTIONS(151),
    [sym_placeholder] = ACTIONS(153),
    [sym_delimiter] = ACTIONS(153),
    [anon_sym__] = ACTIONS(155),
    [anon_sym_CARET] = ACTIONS(157),
    [sym_latex_function_name] = ACTIONS(159),
    [sym_singleline_raw_latex] = ACTIONS(165),
    [sym_multiline_raw_latex] = ACTIONS(165),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_vesti_content] = STATE(189),
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
    [sym_sqparen_group] = STATE(3),
    [sym__math] = STATE(3),
    [sym_inline_math] = STATE(3),
    [sym_display_math] = STATE(3),
    [sym_text] = STATE(3),
    [sym_subscript] = STATE(15),
    [sym_superscript] = STATE(15),
    [sym_latex_function] = STATE(3),
    [aux_sym_vesti_content_repeat1] = STATE(3),
    [aux_sym_text_repeat1] = STATE(15),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [sym_KEYWORD_docclass] = ACTIONS(125),
    [sym_KEYWORD_importpkg] = ACTIONS(127),
    [sym_KEYWORD_importmod] = ACTIONS(129),
    [sym_KEYWORD_importfile] = ACTIONS(131),
    [sym_KEYWORD_importves] = ACTIONS(133),
    [sym_KEYWORD_useltx3] = ACTIONS(163),
    [sym_KEYWORD_getfp] = ACTIONS(137),
    [sym_KEYWORD_startdoc] = ACTIONS(163),
    [sym_KEYWORD_useenv] = ACTIONS(139),
    [sym_KEYWORD_begenv] = ACTIONS(141),
    [sym_KEYWORD_endenv] = ACTIONS(143),
    [sym_KEYWORD_makeatletter] = ACTIONS(163),
    [sym_KEYWORD_makeatother] = ACTIONS(163),
    [sym_KEYWORD_ltx3on] = ACTIONS(163),
    [sym_KEYWORD_ltx3off] = ACTIONS(163),
    [sym_KEYWORD_nonstopmode] = ACTIONS(163),
    [sym_KEYWORD_luacode] = ACTIONS(145),
    [anon_sym_DOLLAR] = ACTIONS(147),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(149),
    [sym_word] = ACTIONS(151),
    [sym_placeholder] = ACTIONS(153),
    [sym_delimiter] = ACTIONS(153),
    [anon_sym__] = ACTIONS(155),
    [anon_sym_CARET] = ACTIONS(157),
    [sym_latex_function_name] = ACTIONS(159),
    [sym_singleline_raw_latex] = ACTIONS(165),
    [sym_multiline_raw_latex] = ACTIONS(165),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(241), 1,
      sym_word,
    ACTIONS(247), 1,
      anon_sym__,
    ACTIONS(250), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(244), 2,
      sym_placeholder,
      sym_delimiter,
    STATE(14), 3,
      sym_subscript,
      sym_superscript,
      aux_sym_text_repeat1,
    ACTIONS(237), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(239), 18,
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
  [55] = 8,
    ACTIONS(155), 1,
      anon_sym__,
    ACTIONS(157), 1,
      anon_sym_CARET,
    ACTIONS(257), 1,
      sym_word,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(259), 2,
      sym_placeholder,
      sym_delimiter,
    STATE(14), 3,
      sym_subscript,
      sym_superscript,
      aux_sym_text_repeat1,
    ACTIONS(253), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(255), 18,
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
  [110] = 5,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(18), 2,
      sym_brace_group,
      aux_sym_latex_function_repeat1,
    ACTIONS(261), 13,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(263), 19,
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
  [158] = 5,
    ACTIONS(265), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(17), 2,
      sym_brace_group,
      aux_sym_latex_function_repeat1,
    ACTIONS(268), 13,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(270), 19,
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
  [206] = 5,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(17), 2,
      sym_brace_group,
      aux_sym_latex_function_repeat1,
    ACTIONS(272), 13,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(274), 19,
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
  [254] = 8,
    ACTIONS(276), 1,
      sym_word,
    ACTIONS(282), 1,
      anon_sym__,
    ACTIONS(285), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(279), 2,
      sym_placeholder,
      sym_delimiter,
    STATE(19), 3,
      sym_subscript,
      sym_superscript,
      aux_sym_text_repeat1,
    ACTIONS(237), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(239), 18,
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
  [307] = 8,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(43), 1,
      anon_sym_CARET,
    ACTIONS(288), 1,
      sym_word,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(290), 2,
      sym_placeholder,
      sym_delimiter,
    STATE(19), 3,
      sym_subscript,
      sym_superscript,
      aux_sym_text_repeat1,
    ACTIONS(253), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(255), 18,
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
  [360] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(292), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(294), 19,
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
  [402] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(296), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(298), 19,
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
  [444] = 5,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(23), 2,
      sym_brace_group,
      aux_sym_latex_function_repeat1,
    ACTIONS(268), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(270), 19,
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
  [490] = 5,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(38), 2,
      sym_brace_group,
      aux_sym_latex_function_repeat1,
    ACTIONS(261), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(263), 19,
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
  [536] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(303), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(305), 19,
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
  [578] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(307), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(309), 19,
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
  [620] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(311), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(313), 19,
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
  [662] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(315), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(317), 19,
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
  [704] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(319), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(321), 19,
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
  [746] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(323), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(325), 19,
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
  [788] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(327), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(329), 19,
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
  [830] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(331), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(333), 19,
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
  [872] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(335), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(337), 19,
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
  [914] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(339), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(341), 19,
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
  [956] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(343), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(345), 19,
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
  [998] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(347), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(349), 19,
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
  [1040] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(351), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(353), 19,
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
  [1082] = 5,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(23), 2,
      sym_brace_group,
      aux_sym_latex_function_repeat1,
    ACTIONS(272), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(274), 19,
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
  [1128] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(355), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(357), 19,
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
  [1170] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(359), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(361), 19,
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
  [1212] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(363), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(365), 19,
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
  [1254] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(367), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(369), 19,
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
  [1296] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(371), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(373), 19,
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
  [1338] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(375), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(377), 19,
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
  [1380] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(379), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(381), 19,
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
  [1422] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(383), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(385), 19,
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
  [1464] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(387), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(389), 19,
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
  [1506] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(391), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(393), 19,
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
  [1548] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(395), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(397), 19,
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
  [1590] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(399), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(401), 19,
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
  [1632] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(403), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(405), 19,
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
  [1674] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(327), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(329), 19,
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
  [1714] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(296), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(298), 19,
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
  [1754] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(303), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(305), 19,
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
  [1794] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(335), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(337), 19,
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
  [1834] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(339), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(341), 19,
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
  [1874] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(292), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(294), 19,
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
  [1914] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(343), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(345), 19,
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
  [1954] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(307), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(309), 19,
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
  [1994] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(311), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(313), 19,
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
  [2034] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(315), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(317), 19,
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
  [2074] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(347), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(349), 19,
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
  [2114] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(351), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(353), 19,
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
  [2154] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(355), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(357), 19,
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
  [2194] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(359), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(361), 19,
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
  [2234] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(363), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(365), 19,
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
  [2274] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(367), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(369), 19,
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
  [2314] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(371), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(373), 19,
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
  [2354] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(375), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(377), 19,
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
  [2394] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(379), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(381), 19,
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
  [2434] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(383), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(385), 19,
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
  [2474] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(387), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(389), 19,
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
  [2514] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(391), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(393), 19,
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
  [2554] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(395), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(397), 19,
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
  [2594] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(399), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(401), 19,
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
  [2634] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(403), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(405), 19,
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
  [2674] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(319), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(321), 19,
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
  [2714] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(323), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(325), 19,
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
  [2754] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(331), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_DOLLAR,
      sym_placeholder,
      sym_delimiter,
      anon_sym__,
      anon_sym_CARET,
      sym_latex_function_name,
      sym_singleline_raw_latex,
      sym_multiline_raw_latex,
    ACTIONS(333), 19,
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
  [2794] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_LBRACK,
    STATE(71), 1,
      sym_brace_group,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(88), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(113), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [2819] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_LBRACK,
    STATE(56), 1,
      sym_brace_group,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(80), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(113), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [2844] = 7,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_LBRACK,
    STATE(46), 1,
      sym_brace_group,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(88), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(113), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [2869] = 7,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym_brace_group,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(82), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(113), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [2894] = 6,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      aux_sym_begenv_decl_token1,
    ACTIONS(415), 1,
      anon_sym_LBRACK,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(86), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(117), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [2916] = 6,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      aux_sym_begenv_decl_token1,
    ACTIONS(424), 1,
      anon_sym_LBRACK,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(85), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(117), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [2938] = 6,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(415), 1,
      anon_sym_LBRACK,
    ACTIONS(427), 1,
      aux_sym_begenv_decl_token1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(85), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(117), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [2960] = 6,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(415), 1,
      anon_sym_LBRACK,
    ACTIONS(429), 1,
      aux_sym_begenv_decl_token1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(89), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(117), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [2982] = 6,
    ACTIONS(422), 1,
      anon_sym_LBRACE,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(88), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(113), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [3004] = 6,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(415), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      aux_sym_begenv_decl_token1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(85), 2,
      sym_env_arg,
      aux_sym_useenv_decl_repeat1,
    STATE(117), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [3026] = 7,
    ACTIONS(439), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(441), 1,
      anon_sym_COMMA,
    ACTIONS(443), 1,
      anon_sym_RBRACE,
    ACTIONS(445), 1,
      anon_sym_LPAREN,
    STATE(100), 1,
      sym_options,
    STATE(104), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3049] = 7,
    ACTIONS(445), 1,
      anon_sym_LPAREN,
    ACTIONS(447), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(451), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      aux_sym_multipkg_decl_repeat1,
    STATE(103), 1,
      sym_options,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3072] = 5,
    ACTIONS(445), 1,
      anon_sym_LPAREN,
    ACTIONS(453), 1,
      aux_sym_docclass_decl_token1,
    STATE(107), 1,
      sym_options,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(455), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3090] = 5,
    ACTIONS(445), 1,
      anon_sym_LPAREN,
    ACTIONS(457), 1,
      aux_sym_docclass_decl_token1,
    STATE(110), 1,
      sym_options,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(459), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3108] = 5,
    ACTIONS(461), 1,
      anon_sym_LBRACE,
    ACTIONS(463), 1,
      sym_latex_function_name,
    ACTIONS(465), 1,
      sym_letter,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(27), 2,
      sym_brace_group,
      sym_latex_function,
  [3126] = 5,
    ACTIONS(461), 1,
      anon_sym_LBRACE,
    ACTIONS(463), 1,
      sym_latex_function_name,
    ACTIONS(467), 1,
      sym_letter,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(28), 2,
      sym_brace_group,
      sym_latex_function,
  [3144] = 5,
    ACTIONS(469), 1,
      anon_sym_LBRACE,
    ACTIONS(471), 1,
      sym_latex_function_name,
    ACTIONS(473), 1,
      sym_letter,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(60), 2,
      sym_brace_group,
      sym_latex_function,
  [3162] = 5,
    ACTIONS(469), 1,
      anon_sym_LBRACE,
    ACTIONS(471), 1,
      sym_latex_function_name,
    ACTIONS(475), 1,
      sym_letter,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(61), 2,
      sym_brace_group,
      sym_latex_function,
  [3180] = 5,
    ACTIONS(477), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    ACTIONS(481), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3197] = 5,
    ACTIONS(453), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(455), 1,
      anon_sym_RBRACE,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3214] = 5,
    ACTIONS(486), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3231] = 5,
    ACTIONS(492), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    ACTIONS(496), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3248] = 5,
    ACTIONS(498), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(500), 1,
      anon_sym_COMMA,
    ACTIONS(502), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3265] = 5,
    ACTIONS(492), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    ACTIONS(496), 1,
      anon_sym_RBRACE,
    STATE(102), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3282] = 5,
    ACTIONS(486), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3299] = 4,
    ACTIONS(504), 1,
      anon_sym_COMMA,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_options_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3313] = 4,
    ACTIONS(445), 1,
      anon_sym_LPAREN,
    ACTIONS(509), 1,
      aux_sym_docclass_decl_token1,
    STATE(206), 1,
      sym_options,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3327] = 3,
    ACTIONS(457), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(459), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3339] = 4,
    ACTIONS(511), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(513), 1,
      anon_sym_RBRACE,
    ACTIONS(515), 1,
      sym_class_pkg_name,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3353] = 3,
    ACTIONS(517), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(519), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3365] = 3,
    ACTIONS(521), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(523), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3377] = 4,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    ACTIONS(527), 1,
      aux_sym_mandantory_arg_token1,
    STATE(127), 1,
      aux_sym_mandantory_arg_repeat1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3391] = 4,
    ACTIONS(529), 1,
      aux_sym_optional_arg_token1,
    ACTIONS(531), 1,
      anon_sym_RBRACK,
    STATE(129), 1,
      aux_sym_optional_arg_repeat1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3405] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(533), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [3415] = 4,
    ACTIONS(445), 1,
      anon_sym_LPAREN,
    ACTIONS(535), 1,
      aux_sym_docclass_decl_token1,
    STATE(173), 1,
      sym_options,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3429] = 4,
    ACTIONS(537), 1,
      anon_sym_DOLLAR,
    ACTIONS(539), 1,
      aux_sym_inline_math_token1,
    STATE(115), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3443] = 4,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      aux_sym_options_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3457] = 3,
    ACTIONS(533), 1,
      aux_sym_begenv_decl_token1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(546), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [3469] = 4,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
    ACTIONS(515), 1,
      sym_class_pkg_name,
    ACTIONS(548), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3483] = 4,
    ACTIONS(537), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(550), 1,
      aux_sym_inline_math_token1,
    STATE(119), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3497] = 4,
    ACTIONS(553), 1,
      anon_sym_DOLLAR,
    ACTIONS(555), 1,
      aux_sym_inline_math_token1,
    STATE(115), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3511] = 4,
    ACTIONS(557), 1,
      anon_sym_DOLLAR,
    ACTIONS(559), 1,
      aux_sym_inline_math_token1,
    STATE(120), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3525] = 4,
    ACTIONS(561), 1,
      aux_sym_inline_math_token1,
    ACTIONS(563), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(119), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3539] = 4,
    ACTIONS(565), 1,
      aux_sym_inline_math_token1,
    ACTIONS(567), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(122), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3553] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(569), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [3563] = 3,
    ACTIONS(571), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(573), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3575] = 3,
    ACTIONS(577), 1,
      aux_sym_begenv_decl_token1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(575), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [3587] = 4,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
    ACTIONS(581), 1,
      aux_sym_mandantory_arg_token1,
    STATE(149), 1,
      aux_sym_mandantory_arg_repeat1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3601] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(577), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [3611] = 4,
    ACTIONS(583), 1,
      aux_sym_optional_arg_token1,
    ACTIONS(585), 1,
      anon_sym_RBRACK,
    STATE(151), 1,
      aux_sym_optional_arg_repeat1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3625] = 3,
    ACTIONS(589), 1,
      aux_sym_begenv_decl_token1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(587), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [3637] = 3,
    ACTIONS(593), 1,
      aux_sym_begenv_decl_token1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(591), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [3649] = 4,
    ACTIONS(595), 1,
      anon_sym_DOLLAR,
    ACTIONS(597), 1,
      aux_sym_inline_math_token1,
    STATE(138), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3663] = 4,
    ACTIONS(599), 1,
      aux_sym_inline_math_token1,
    ACTIONS(601), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(139), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3677] = 3,
    ACTIONS(603), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(605), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3689] = 4,
    ACTIONS(607), 1,
      anon_sym_COMMA,
    ACTIONS(609), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_options_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3703] = 4,
    ACTIONS(445), 1,
      anon_sym_LPAREN,
    ACTIONS(611), 1,
      aux_sym_docclass_decl_token1,
    STATE(178), 1,
      sym_options,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3717] = 4,
    ACTIONS(445), 1,
      anon_sym_LPAREN,
    ACTIONS(613), 1,
      aux_sym_docclass_decl_token1,
    STATE(180), 1,
      sym_options,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3731] = 4,
    ACTIONS(555), 1,
      aux_sym_inline_math_token1,
    ACTIONS(615), 1,
      anon_sym_DOLLAR,
    STATE(115), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3745] = 4,
    ACTIONS(561), 1,
      aux_sym_inline_math_token1,
    ACTIONS(617), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(119), 1,
      aux_sym_inline_math_repeat1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3759] = 4,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
    ACTIONS(621), 1,
      aux_sym_mandantory_arg_token1,
    STATE(144), 1,
      aux_sym_mandantory_arg_repeat1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3773] = 4,
    ACTIONS(623), 1,
      aux_sym_optional_arg_token1,
    ACTIONS(625), 1,
      anon_sym_RBRACK,
    STATE(145), 1,
      aux_sym_optional_arg_repeat1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3787] = 4,
    ACTIONS(481), 1,
      anon_sym_RBRACE,
    ACTIONS(515), 1,
      sym_class_pkg_name,
    ACTIONS(627), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3801] = 4,
    ACTIONS(496), 1,
      anon_sym_RBRACE,
    ACTIONS(515), 1,
      sym_class_pkg_name,
    ACTIONS(629), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3815] = 4,
    ACTIONS(581), 1,
      aux_sym_mandantory_arg_token1,
    ACTIONS(631), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      aux_sym_mandantory_arg_repeat1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3829] = 4,
    ACTIONS(583), 1,
      aux_sym_optional_arg_token1,
    ACTIONS(633), 1,
      anon_sym_RBRACK,
    STATE(151), 1,
      aux_sym_optional_arg_repeat1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3843] = 4,
    ACTIONS(502), 1,
      anon_sym_RBRACE,
    ACTIONS(515), 1,
      sym_class_pkg_name,
    ACTIONS(635), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3857] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(589), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [3867] = 4,
    ACTIONS(515), 1,
      sym_class_pkg_name,
    ACTIONS(637), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(639), 1,
      anon_sym_RBRACE,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3881] = 4,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
    ACTIONS(643), 1,
      aux_sym_mandantory_arg_token1,
    STATE(149), 1,
      aux_sym_mandantory_arg_repeat1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3895] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(593), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [3905] = 4,
    ACTIONS(646), 1,
      aux_sym_optional_arg_token1,
    ACTIONS(649), 1,
      anon_sym_RBRACK,
    STATE(151), 1,
      aux_sym_optional_arg_repeat1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3919] = 3,
    ACTIONS(569), 1,
      aux_sym_begenv_decl_token1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(651), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [3931] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(507), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3940] = 3,
    ACTIONS(515), 1,
      sym_class_pkg_name,
    ACTIONS(653), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3951] = 3,
    ACTIONS(655), 1,
      anon_sym_LBRACE,
    ACTIONS(657), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3962] = 3,
    ACTIONS(659), 1,
      anon_sym_RPAREN,
    ACTIONS(661), 1,
      sym_option_name,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3973] = 3,
    ACTIONS(663), 1,
      anon_sym_RBRACE,
    ACTIONS(665), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3984] = 3,
    ACTIONS(665), 1,
      sym_class_pkg_name,
    ACTIONS(667), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [3995] = 3,
    ACTIONS(665), 1,
      sym_class_pkg_name,
    ACTIONS(669), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4006] = 3,
    ACTIONS(665), 1,
      sym_class_pkg_name,
    ACTIONS(671), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4017] = 3,
    ACTIONS(665), 1,
      sym_class_pkg_name,
    ACTIONS(673), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4028] = 3,
    ACTIONS(665), 1,
      sym_class_pkg_name,
    ACTIONS(675), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4039] = 3,
    ACTIONS(677), 1,
      anon_sym_LBRACE,
    ACTIONS(679), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4050] = 3,
    ACTIONS(661), 1,
      sym_option_name,
    ACTIONS(681), 1,
      anon_sym_RPAREN,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4061] = 2,
    ACTIONS(683), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4069] = 2,
    ACTIONS(661), 1,
      sym_option_name,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4077] = 2,
    ACTIONS(685), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4085] = 2,
    ACTIONS(687), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4093] = 2,
    ACTIONS(689), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4101] = 2,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4109] = 2,
    ACTIONS(693), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4117] = 2,
    ACTIONS(695), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4125] = 2,
    ACTIONS(697), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4133] = 2,
    ACTIONS(699), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4141] = 2,
    ACTIONS(701), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4149] = 2,
    ACTIONS(703), 1,
      sym_env_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4157] = 2,
    ACTIONS(705), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4165] = 2,
    ACTIONS(707), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4173] = 2,
    ACTIONS(709), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4181] = 2,
    ACTIONS(711), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4189] = 2,
    ACTIONS(713), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4197] = 2,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4205] = 2,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4213] = 2,
    ACTIONS(719), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4221] = 2,
    ACTIONS(721), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4229] = 2,
    ACTIONS(665), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4237] = 2,
    ACTIONS(667), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4245] = 2,
    ACTIONS(723), 1,
      sym_env_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4253] = 2,
    ACTIONS(725), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4261] = 2,
    ACTIONS(727), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4269] = 2,
    ACTIONS(729), 1,
      sym_env_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4277] = 2,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4285] = 2,
    ACTIONS(733), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4293] = 2,
    ACTIONS(735), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4301] = 2,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4309] = 2,
    ACTIONS(739), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4317] = 2,
    ACTIONS(671), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4325] = 2,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4333] = 2,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4341] = 2,
    ACTIONS(745), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4349] = 2,
    ACTIONS(673), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4357] = 2,
    ACTIONS(747), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4365] = 2,
    ACTIONS(749), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4373] = 2,
    ACTIONS(751), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4381] = 2,
    ACTIONS(663), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4389] = 2,
    ACTIONS(753), 1,
      aux_sym_docclass_decl_token1,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4397] = 2,
    ACTIONS(755), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4405] = 2,
    ACTIONS(757), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4413] = 2,
    ACTIONS(759), 1,
      sym_env_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4421] = 2,
    ACTIONS(761), 1,
      sym_env_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4429] = 2,
    ACTIONS(763), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4437] = 2,
    ACTIONS(765), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4445] = 2,
    ACTIONS(767), 1,
      sym_env_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4453] = 2,
    ACTIONS(769), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4461] = 2,
    ACTIONS(771), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4469] = 2,
    ACTIONS(773), 1,
      sym_filepath,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4477] = 2,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4485] = 2,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4493] = 2,
    ACTIONS(779), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4501] = 2,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4509] = 2,
    ACTIONS(783), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [4517] = 2,
    ACTIONS(785), 1,
      sym_option_name,
    ACTIONS(417), 2,
      sym_line_comment,
      sym_multiline_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 55,
  [SMALL_STATE(16)] = 110,
  [SMALL_STATE(17)] = 158,
  [SMALL_STATE(18)] = 206,
  [SMALL_STATE(19)] = 254,
  [SMALL_STATE(20)] = 307,
  [SMALL_STATE(21)] = 360,
  [SMALL_STATE(22)] = 402,
  [SMALL_STATE(23)] = 444,
  [SMALL_STATE(24)] = 490,
  [SMALL_STATE(25)] = 536,
  [SMALL_STATE(26)] = 578,
  [SMALL_STATE(27)] = 620,
  [SMALL_STATE(28)] = 662,
  [SMALL_STATE(29)] = 704,
  [SMALL_STATE(30)] = 746,
  [SMALL_STATE(31)] = 788,
  [SMALL_STATE(32)] = 830,
  [SMALL_STATE(33)] = 872,
  [SMALL_STATE(34)] = 914,
  [SMALL_STATE(35)] = 956,
  [SMALL_STATE(36)] = 998,
  [SMALL_STATE(37)] = 1040,
  [SMALL_STATE(38)] = 1082,
  [SMALL_STATE(39)] = 1128,
  [SMALL_STATE(40)] = 1170,
  [SMALL_STATE(41)] = 1212,
  [SMALL_STATE(42)] = 1254,
  [SMALL_STATE(43)] = 1296,
  [SMALL_STATE(44)] = 1338,
  [SMALL_STATE(45)] = 1380,
  [SMALL_STATE(46)] = 1422,
  [SMALL_STATE(47)] = 1464,
  [SMALL_STATE(48)] = 1506,
  [SMALL_STATE(49)] = 1548,
  [SMALL_STATE(50)] = 1590,
  [SMALL_STATE(51)] = 1632,
  [SMALL_STATE(52)] = 1674,
  [SMALL_STATE(53)] = 1714,
  [SMALL_STATE(54)] = 1754,
  [SMALL_STATE(55)] = 1794,
  [SMALL_STATE(56)] = 1834,
  [SMALL_STATE(57)] = 1874,
  [SMALL_STATE(58)] = 1914,
  [SMALL_STATE(59)] = 1954,
  [SMALL_STATE(60)] = 1994,
  [SMALL_STATE(61)] = 2034,
  [SMALL_STATE(62)] = 2074,
  [SMALL_STATE(63)] = 2114,
  [SMALL_STATE(64)] = 2154,
  [SMALL_STATE(65)] = 2194,
  [SMALL_STATE(66)] = 2234,
  [SMALL_STATE(67)] = 2274,
  [SMALL_STATE(68)] = 2314,
  [SMALL_STATE(69)] = 2354,
  [SMALL_STATE(70)] = 2394,
  [SMALL_STATE(71)] = 2434,
  [SMALL_STATE(72)] = 2474,
  [SMALL_STATE(73)] = 2514,
  [SMALL_STATE(74)] = 2554,
  [SMALL_STATE(75)] = 2594,
  [SMALL_STATE(76)] = 2634,
  [SMALL_STATE(77)] = 2674,
  [SMALL_STATE(78)] = 2714,
  [SMALL_STATE(79)] = 2754,
  [SMALL_STATE(80)] = 2794,
  [SMALL_STATE(81)] = 2819,
  [SMALL_STATE(82)] = 2844,
  [SMALL_STATE(83)] = 2869,
  [SMALL_STATE(84)] = 2894,
  [SMALL_STATE(85)] = 2916,
  [SMALL_STATE(86)] = 2938,
  [SMALL_STATE(87)] = 2960,
  [SMALL_STATE(88)] = 2982,
  [SMALL_STATE(89)] = 3004,
  [SMALL_STATE(90)] = 3026,
  [SMALL_STATE(91)] = 3049,
  [SMALL_STATE(92)] = 3072,
  [SMALL_STATE(93)] = 3090,
  [SMALL_STATE(94)] = 3108,
  [SMALL_STATE(95)] = 3126,
  [SMALL_STATE(96)] = 3144,
  [SMALL_STATE(97)] = 3162,
  [SMALL_STATE(98)] = 3180,
  [SMALL_STATE(99)] = 3197,
  [SMALL_STATE(100)] = 3214,
  [SMALL_STATE(101)] = 3231,
  [SMALL_STATE(102)] = 3248,
  [SMALL_STATE(103)] = 3265,
  [SMALL_STATE(104)] = 3282,
  [SMALL_STATE(105)] = 3299,
  [SMALL_STATE(106)] = 3313,
  [SMALL_STATE(107)] = 3327,
  [SMALL_STATE(108)] = 3339,
  [SMALL_STATE(109)] = 3353,
  [SMALL_STATE(110)] = 3365,
  [SMALL_STATE(111)] = 3377,
  [SMALL_STATE(112)] = 3391,
  [SMALL_STATE(113)] = 3405,
  [SMALL_STATE(114)] = 3415,
  [SMALL_STATE(115)] = 3429,
  [SMALL_STATE(116)] = 3443,
  [SMALL_STATE(117)] = 3457,
  [SMALL_STATE(118)] = 3469,
  [SMALL_STATE(119)] = 3483,
  [SMALL_STATE(120)] = 3497,
  [SMALL_STATE(121)] = 3511,
  [SMALL_STATE(122)] = 3525,
  [SMALL_STATE(123)] = 3539,
  [SMALL_STATE(124)] = 3553,
  [SMALL_STATE(125)] = 3563,
  [SMALL_STATE(126)] = 3575,
  [SMALL_STATE(127)] = 3587,
  [SMALL_STATE(128)] = 3601,
  [SMALL_STATE(129)] = 3611,
  [SMALL_STATE(130)] = 3625,
  [SMALL_STATE(131)] = 3637,
  [SMALL_STATE(132)] = 3649,
  [SMALL_STATE(133)] = 3663,
  [SMALL_STATE(134)] = 3677,
  [SMALL_STATE(135)] = 3689,
  [SMALL_STATE(136)] = 3703,
  [SMALL_STATE(137)] = 3717,
  [SMALL_STATE(138)] = 3731,
  [SMALL_STATE(139)] = 3745,
  [SMALL_STATE(140)] = 3759,
  [SMALL_STATE(141)] = 3773,
  [SMALL_STATE(142)] = 3787,
  [SMALL_STATE(143)] = 3801,
  [SMALL_STATE(144)] = 3815,
  [SMALL_STATE(145)] = 3829,
  [SMALL_STATE(146)] = 3843,
  [SMALL_STATE(147)] = 3857,
  [SMALL_STATE(148)] = 3867,
  [SMALL_STATE(149)] = 3881,
  [SMALL_STATE(150)] = 3895,
  [SMALL_STATE(151)] = 3905,
  [SMALL_STATE(152)] = 3919,
  [SMALL_STATE(153)] = 3931,
  [SMALL_STATE(154)] = 3940,
  [SMALL_STATE(155)] = 3951,
  [SMALL_STATE(156)] = 3962,
  [SMALL_STATE(157)] = 3973,
  [SMALL_STATE(158)] = 3984,
  [SMALL_STATE(159)] = 3995,
  [SMALL_STATE(160)] = 4006,
  [SMALL_STATE(161)] = 4017,
  [SMALL_STATE(162)] = 4028,
  [SMALL_STATE(163)] = 4039,
  [SMALL_STATE(164)] = 4050,
  [SMALL_STATE(165)] = 4061,
  [SMALL_STATE(166)] = 4069,
  [SMALL_STATE(167)] = 4077,
  [SMALL_STATE(168)] = 4085,
  [SMALL_STATE(169)] = 4093,
  [SMALL_STATE(170)] = 4101,
  [SMALL_STATE(171)] = 4109,
  [SMALL_STATE(172)] = 4117,
  [SMALL_STATE(173)] = 4125,
  [SMALL_STATE(174)] = 4133,
  [SMALL_STATE(175)] = 4141,
  [SMALL_STATE(176)] = 4149,
  [SMALL_STATE(177)] = 4157,
  [SMALL_STATE(178)] = 4165,
  [SMALL_STATE(179)] = 4173,
  [SMALL_STATE(180)] = 4181,
  [SMALL_STATE(181)] = 4189,
  [SMALL_STATE(182)] = 4197,
  [SMALL_STATE(183)] = 4205,
  [SMALL_STATE(184)] = 4213,
  [SMALL_STATE(185)] = 4221,
  [SMALL_STATE(186)] = 4229,
  [SMALL_STATE(187)] = 4237,
  [SMALL_STATE(188)] = 4245,
  [SMALL_STATE(189)] = 4253,
  [SMALL_STATE(190)] = 4261,
  [SMALL_STATE(191)] = 4269,
  [SMALL_STATE(192)] = 4277,
  [SMALL_STATE(193)] = 4285,
  [SMALL_STATE(194)] = 4293,
  [SMALL_STATE(195)] = 4301,
  [SMALL_STATE(196)] = 4309,
  [SMALL_STATE(197)] = 4317,
  [SMALL_STATE(198)] = 4325,
  [SMALL_STATE(199)] = 4333,
  [SMALL_STATE(200)] = 4341,
  [SMALL_STATE(201)] = 4349,
  [SMALL_STATE(202)] = 4357,
  [SMALL_STATE(203)] = 4365,
  [SMALL_STATE(204)] = 4373,
  [SMALL_STATE(205)] = 4381,
  [SMALL_STATE(206)] = 4389,
  [SMALL_STATE(207)] = 4397,
  [SMALL_STATE(208)] = 4405,
  [SMALL_STATE(209)] = 4413,
  [SMALL_STATE(210)] = 4421,
  [SMALL_STATE(211)] = 4429,
  [SMALL_STATE(212)] = 4437,
  [SMALL_STATE(213)] = 4445,
  [SMALL_STATE(214)] = 4453,
  [SMALL_STATE(215)] = 4461,
  [SMALL_STATE(216)] = 4469,
  [SMALL_STATE(217)] = 4477,
  [SMALL_STATE(218)] = 4485,
  [SMALL_STATE(219)] = 4493,
  [SMALL_STATE(220)] = 4501,
  [SMALL_STATE(221)] = 4509,
  [SMALL_STATE(222)] = 4517,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(218),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(209),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vesti_content, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(203),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_latex_function, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_latex_function, 1, 0, 0),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_latex_function_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_latex_function_repeat1, 2, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_latex_function_repeat1, 2, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_latex_function, 2, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_latex_function, 2, 0, 0),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 2, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 2, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 8, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 8, 0, 0),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_latex_function_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endenv_decl, 2, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endenv_decl, 2, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_math, 2, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display_math, 2, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subscript, 2, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscript, 2, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_superscript, 2, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_superscript, 2, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 3, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 3, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_group, 3, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_group, 3, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sqparen_group, 3, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sqparen_group, 3, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docclass_decl, 3, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docclass_decl, 3, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singlepkg_decl, 3, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_singlepkg_decl, 3, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_useenv_decl, 3, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_useenv_decl, 3, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begenv_decl, 3, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begenv_decl, 3, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 3, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 3, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_math, 3, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display_math, 3, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docclass_decl, 4, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docclass_decl, 4, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 4, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 4, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singlepkg_decl, 4, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_singlepkg_decl, 4, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importmod_decl, 4, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_importmod_decl, 4, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importfile_decl, 4, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_importfile_decl, 4, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importves_decl, 4, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_importves_decl, 4, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_getfp_decl, 4, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_getfp_decl, 4, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_useenv_decl, 4, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_useenv_decl, 4, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begenv_decl, 4, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begenv_decl, 4, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_luacode, 4, 0, 1),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_luacode, 4, 0, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 5, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 5, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 6, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 6, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 7, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipkg_decl, 7, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_useenv_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_useenv_decl_repeat1, 2, 0, 0),
  [424] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_useenv_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_useenv_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_useenv_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipkg_decl_repeat1, 2, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipkg_decl_repeat1, 2, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipkg_decl_repeat1, 3, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipkg_decl_repeat1, 3, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [483] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipkg_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 5, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 5, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipkg_decl_repeat1, 4, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipkg_decl_repeat1, 4, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_arg, 1, 0, 0),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_math_repeat1, 2, 0, 0),
  [539] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_math_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_arg, 1, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [550] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_math_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mandantory_arg, 2, 0, 0),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 4, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 4, 0, 0),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_arg, 2, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_arg, 2, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mandantory_arg, 3, 0, 0),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mandantory_arg, 3, 0, 0),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_arg, 3, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_arg, 3, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 3, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 3, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mandantory_arg_repeat1, 2, 0, 0),
  [643] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mandantory_arg_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [646] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_optional_arg_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_optional_arg_repeat1, 2, 0, 0),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mandantory_arg, 2, 0, 0),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [745] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
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
