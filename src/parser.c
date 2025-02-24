#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 66
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
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
  anon_sym_LPAREN = 6,
  aux_sym_options_token1 = 7,
  anon_sym_RPAREN = 8,
  aux_sym_mandantory_arg_token1 = 9,
  anon_sym_LBRACK = 10,
  aux_sym_optional_arg_token1 = 11,
  anon_sym_RBRACK = 12,
  sym_class_pkg_name = 13,
  sym_env_name = 14,
  sym_KEYWORD_docclass = 15,
  sym_KEYWORD_importpkg = 16,
  sym_KEYWORD_useenv = 17,
  sym_digit = 18,
  sym_ascii_letter = 19,
  sym_letter = 20,
  sym_line_comment = 21,
  sym_multiline_comment = 22,
  sym_vesti_content = 23,
  sym_statement = 24,
  sym_docclass_decl = 25,
  sym_singlepkg_decl = 26,
  sym_multipkg_decl = 27,
  sym_env_decl = 28,
  sym_options = 29,
  sym_env_arg = 30,
  sym_mandantory_arg = 31,
  sym_optional_arg = 32,
  aux_sym_vesti_content_repeat1 = 33,
  aux_sym_multipkg_decl_repeat1 = 34,
  aux_sym_env_decl_repeat1 = 35,
  aux_sym_env_decl_repeat2 = 36,
  aux_sym_options_repeat1 = 37,
  aux_sym_options_repeat2 = 38,
  aux_sym_mandantory_arg_repeat1 = 39,
  aux_sym_optional_arg_repeat1 = 40,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_LF] = "\n",
  [anon_sym_RBRACE] = "}",
  [aux_sym_env_decl_token1] = "env_decl_token1",
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
  [sym_KEYWORD_useenv] = "KEYWORD_useenv",
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
  [sym_options] = "options",
  [sym_env_arg] = "env_arg",
  [sym_mandantory_arg] = "mandantory_arg",
  [sym_optional_arg] = "optional_arg",
  [aux_sym_vesti_content_repeat1] = "vesti_content_repeat1",
  [aux_sym_multipkg_decl_repeat1] = "multipkg_decl_repeat1",
  [aux_sym_env_decl_repeat1] = "env_decl_repeat1",
  [aux_sym_env_decl_repeat2] = "env_decl_repeat2",
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
  [sym_KEYWORD_useenv] = sym_KEYWORD_useenv,
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
  [sym_options] = sym_options,
  [sym_env_arg] = sym_env_arg,
  [sym_mandantory_arg] = sym_mandantory_arg,
  [sym_optional_arg] = sym_optional_arg,
  [aux_sym_vesti_content_repeat1] = aux_sym_vesti_content_repeat1,
  [aux_sym_multipkg_decl_repeat1] = aux_sym_multipkg_decl_repeat1,
  [aux_sym_env_decl_repeat1] = aux_sym_env_decl_repeat1,
  [aux_sym_env_decl_repeat2] = aux_sym_env_decl_repeat2,
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
  [sym_KEYWORD_useenv] = {
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
      if (eof) ADVANCE(33);
      ADVANCE_MAP(
        '%', 10,
        '(', 41,
        ')', 46,
        ',', 35,
        '[', 50,
        ']', 54,
        'd', 64,
        'i', 63,
        'u', 65,
        '{', 34,
        '}', 37,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      if (set_contains(sym_letter_character_set_1, 429, lookahead)) ADVANCE(66);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '}') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '}') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(68);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(45);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == ',') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(53);
      if (lookahead == ']') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(49);
      if (lookahead == ')') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(40);
      if (lookahead == '}') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '-') ADVANCE(67);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'g') ADVANCE(59);
      END_STATE();
    case 18:
      if (lookahead == 'k') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 31:
      if (lookahead == 'v') ADVANCE(60);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead == '}') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_env_decl_token1);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_env_decl_token1);
      if (lookahead == '%') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(38);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_env_decl_token1);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '-') ADVANCE(67);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_options_token1);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_options_token1);
      if (lookahead == '%') ADVANCE(45);
      if (lookahead == ')') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(42);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_options_token1);
      if (lookahead == '%') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(42);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_options_token1);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '-') ADVANCE(67);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_mandantory_arg_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_mandantory_arg_token1);
      if (lookahead == '%') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(47);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_mandantory_arg_token1);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '-') ADVANCE(67);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_optional_arg_token1);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_optional_arg_token1);
      if (lookahead == '%') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_optional_arg_token1);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '-') ADVANCE(67);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_class_pkg_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_env_name);
      if (lookahead == '*') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_env_name);
      if (lookahead == '*') ADVANCE(56);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_KEYWORD_docclass);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_KEYWORD_importpkg);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_KEYWORD_useenv);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_digit);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_ascii_letter);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_ascii_letter);
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_ascii_letter);
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_ascii_letter);
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_letter);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_multiline_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 32},
  [2] = {.lex_state = 32},
  [3] = {.lex_state = 32},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 32},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 32},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 32},
  [15] = {.lex_state = 32},
  [16] = {.lex_state = 32},
  [17] = {.lex_state = 32},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 32},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 32},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 32},
  [24] = {.lex_state = 32},
  [25] = {.lex_state = 32},
  [26] = {.lex_state = 32},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 0},
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
    [sym_KEYWORD_useenv] = ACTIONS(1),
    [sym_digit] = ACTIONS(1),
    [sym_ascii_letter] = ACTIONS(1),
    [sym_letter] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_vesti_content] = STATE(65),
    [sym_statement] = STATE(2),
    [sym_docclass_decl] = STATE(16),
    [sym_singlepkg_decl] = STATE(16),
    [sym_multipkg_decl] = STATE(16),
    [sym_env_decl] = STATE(16),
    [aux_sym_vesti_content_repeat1] = STATE(2),
    [sym_KEYWORD_docclass] = ACTIONS(5),
    [sym_KEYWORD_importpkg] = ACTIONS(7),
    [sym_KEYWORD_useenv] = ACTIONS(9),
    [sym_line_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      sym_KEYWORD_docclass,
    ACTIONS(7), 1,
      sym_KEYWORD_importpkg,
    ACTIONS(9), 1,
      sym_KEYWORD_useenv,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(3), 2,
      sym_statement,
      aux_sym_vesti_content_repeat1,
    STATE(16), 4,
      sym_docclass_decl,
      sym_singlepkg_decl,
      sym_multipkg_decl,
      sym_env_decl,
  [27] = 7,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_KEYWORD_docclass,
    ACTIONS(18), 1,
      sym_KEYWORD_importpkg,
    ACTIONS(21), 1,
      sym_KEYWORD_useenv,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(3), 2,
      sym_statement,
      aux_sym_vesti_content_repeat1,
    STATE(16), 4,
      sym_docclass_decl,
      sym_singlepkg_decl,
      sym_multipkg_decl,
      sym_env_decl,
  [54] = 6,
    ACTIONS(24), 1,
      anon_sym_LBRACE,
    ACTIONS(26), 1,
      anon_sym_LPAREN,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(5), 2,
      sym_env_arg,
      aux_sym_env_decl_repeat1,
    STATE(30), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [76] = 6,
    ACTIONS(30), 1,
      anon_sym_LBRACE,
    ACTIONS(32), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(5), 2,
      sym_env_arg,
      aux_sym_env_decl_repeat1,
    STATE(30), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [98] = 6,
    ACTIONS(26), 1,
      anon_sym_LPAREN,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    STATE(4), 2,
      sym_env_arg,
      aux_sym_env_decl_repeat1,
    STATE(30), 2,
      sym_mandantory_arg,
      sym_optional_arg,
  [120] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(40), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useenv,
  [133] = 4,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_options,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(42), 4,
      ts_builtin_sym_end,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useenv,
  [150] = 4,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_options,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(46), 4,
      ts_builtin_sym_end,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useenv,
  [167] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(48), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useenv,
  [180] = 6,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym_options,
    STATE(44), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [200] = 6,
    ACTIONS(54), 1,
      anon_sym_COMMA,
    ACTIONS(56), 1,
      aux_sym_options_token1,
    ACTIONS(58), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      aux_sym_options_repeat1,
    STATE(29), 1,
      aux_sym_options_repeat2,
    ACTIONS(60), 2,
      sym_line_comment,
      sym_multiline_comment,
  [220] = 4,
    ACTIONS(64), 1,
      aux_sym_options_token1,
    STATE(13), 1,
      aux_sym_options_repeat1,
    ACTIONS(60), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(62), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [235] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useenv,
  [246] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(69), 4,
      ts_builtin_sym_end,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useenv,
  [257] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(71), 4,
      ts_builtin_sym_end,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useenv,
  [268] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(73), 4,
      ts_builtin_sym_end,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useenv,
  [279] = 4,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym_options,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(75), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [294] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(77), 4,
      ts_builtin_sym_end,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useenv,
  [305] = 4,
    ACTIONS(56), 1,
      aux_sym_options_token1,
    STATE(13), 1,
      aux_sym_options_repeat1,
    ACTIONS(60), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(79), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [320] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(81), 4,
      ts_builtin_sym_end,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useenv,
  [331] = 4,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym_options,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(83), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [346] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(85), 4,
      ts_builtin_sym_end,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useenv,
  [357] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(87), 4,
      ts_builtin_sym_end,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useenv,
  [368] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(89), 4,
      ts_builtin_sym_end,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useenv,
  [379] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(91), 4,
      ts_builtin_sym_end,
      sym_KEYWORD_docclass,
      sym_KEYWORD_importpkg,
      sym_KEYWORD_useenv,
  [390] = 4,
    ACTIONS(93), 1,
      aux_sym_optional_arg_token1,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    STATE(40), 1,
      aux_sym_optional_arg_repeat1,
    ACTIONS(60), 2,
      sym_line_comment,
      sym_multiline_comment,
  [404] = 4,
    ACTIONS(97), 1,
      aux_sym_optional_arg_token1,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    STATE(27), 1,
      aux_sym_optional_arg_repeat1,
    ACTIONS(60), 2,
      sym_line_comment,
      sym_multiline_comment,
  [418] = 4,
    ACTIONS(101), 1,
      anon_sym_COMMA,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_options_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [432] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(105), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [442] = 4,
    ACTIONS(107), 1,
      anon_sym_LF,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    ACTIONS(111), 1,
      sym_class_pkg_name,
    ACTIONS(60), 2,
      sym_line_comment,
      sym_multiline_comment,
  [456] = 4,
    ACTIONS(111), 1,
      sym_class_pkg_name,
    ACTIONS(113), 1,
      anon_sym_LF,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    ACTIONS(60), 2,
      sym_line_comment,
      sym_multiline_comment,
  [470] = 4,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [484] = 4,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [498] = 4,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    ACTIONS(126), 1,
      aux_sym_mandantory_arg_token1,
    STATE(48), 1,
      aux_sym_mandantory_arg_repeat1,
    ACTIONS(60), 2,
      sym_line_comment,
      sym_multiline_comment,
  [512] = 4,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    ACTIONS(130), 1,
      aux_sym_env_decl_token1,
    STATE(36), 1,
      aux_sym_env_decl_repeat2,
    ACTIONS(60), 2,
      sym_line_comment,
      sym_multiline_comment,
  [526] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(133), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [536] = 4,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    ACTIONS(137), 1,
      aux_sym_mandantory_arg_token1,
    STATE(38), 1,
      aux_sym_mandantory_arg_repeat1,
    ACTIONS(60), 2,
      sym_line_comment,
      sym_multiline_comment,
  [550] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(140), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [560] = 4,
    ACTIONS(142), 1,
      aux_sym_optional_arg_token1,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    STATE(40), 1,
      aux_sym_optional_arg_repeat1,
    ACTIONS(60), 2,
      sym_line_comment,
      sym_multiline_comment,
  [574] = 4,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 1,
      aux_sym_env_decl_token1,
    STATE(36), 1,
      aux_sym_env_decl_repeat2,
    ACTIONS(60), 2,
      sym_line_comment,
      sym_multiline_comment,
  [588] = 4,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [602] = 4,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_options_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [616] = 4,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      aux_sym_multipkg_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [630] = 4,
    ACTIONS(149), 1,
      aux_sym_env_decl_token1,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym_env_decl_repeat2,
    ACTIONS(60), 2,
      sym_line_comment,
      sym_multiline_comment,
  [644] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(162), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [654] = 4,
    ACTIONS(111), 1,
      sym_class_pkg_name,
    ACTIONS(164), 1,
      anon_sym_LF,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    ACTIONS(60), 2,
      sym_line_comment,
      sym_multiline_comment,
  [668] = 4,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    ACTIONS(170), 1,
      aux_sym_mandantory_arg_token1,
    STATE(38), 1,
      aux_sym_mandantory_arg_repeat1,
    ACTIONS(60), 2,
      sym_line_comment,
      sym_multiline_comment,
  [682] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(172), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [692] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(83), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [701] = 3,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    ACTIONS(176), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [712] = 3,
    ACTIONS(178), 1,
      aux_sym_options_token1,
    STATE(12), 1,
      aux_sym_options_repeat1,
    ACTIONS(60), 2,
      sym_line_comment,
      sym_multiline_comment,
  [723] = 3,
    ACTIONS(180), 1,
      aux_sym_env_decl_token1,
    STATE(45), 1,
      aux_sym_env_decl_repeat2,
    ACTIONS(60), 2,
      sym_line_comment,
      sym_multiline_comment,
  [734] = 3,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [745] = 3,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    ACTIONS(176), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [756] = 3,
    ACTIONS(186), 1,
      aux_sym_options_token1,
    STATE(20), 1,
      aux_sym_options_repeat1,
    ACTIONS(60), 2,
      sym_line_comment,
      sym_multiline_comment,
  [767] = 3,
    ACTIONS(176), 1,
      sym_class_pkg_name,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [778] = 3,
    ACTIONS(190), 1,
      aux_sym_env_decl_token1,
    STATE(41), 1,
      aux_sym_env_decl_repeat2,
    ACTIONS(60), 2,
      sym_line_comment,
      sym_multiline_comment,
  [789] = 3,
    ACTIONS(111), 1,
      sym_class_pkg_name,
    ACTIONS(192), 1,
      anon_sym_LF,
    ACTIONS(60), 2,
      sym_line_comment,
      sym_multiline_comment,
  [800] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(194), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [809] = 2,
    ACTIONS(196), 1,
      sym_env_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [817] = 2,
    ACTIONS(198), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [825] = 2,
    ACTIONS(200), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [833] = 2,
    ACTIONS(176), 1,
      sym_class_pkg_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
  [841] = 2,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_multiline_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 76,
  [SMALL_STATE(6)] = 98,
  [SMALL_STATE(7)] = 120,
  [SMALL_STATE(8)] = 133,
  [SMALL_STATE(9)] = 150,
  [SMALL_STATE(10)] = 167,
  [SMALL_STATE(11)] = 180,
  [SMALL_STATE(12)] = 200,
  [SMALL_STATE(13)] = 220,
  [SMALL_STATE(14)] = 235,
  [SMALL_STATE(15)] = 246,
  [SMALL_STATE(16)] = 257,
  [SMALL_STATE(17)] = 268,
  [SMALL_STATE(18)] = 279,
  [SMALL_STATE(19)] = 294,
  [SMALL_STATE(20)] = 305,
  [SMALL_STATE(21)] = 320,
  [SMALL_STATE(22)] = 331,
  [SMALL_STATE(23)] = 346,
  [SMALL_STATE(24)] = 357,
  [SMALL_STATE(25)] = 368,
  [SMALL_STATE(26)] = 379,
  [SMALL_STATE(27)] = 390,
  [SMALL_STATE(28)] = 404,
  [SMALL_STATE(29)] = 418,
  [SMALL_STATE(30)] = 432,
  [SMALL_STATE(31)] = 442,
  [SMALL_STATE(32)] = 456,
  [SMALL_STATE(33)] = 470,
  [SMALL_STATE(34)] = 484,
  [SMALL_STATE(35)] = 498,
  [SMALL_STATE(36)] = 512,
  [SMALL_STATE(37)] = 526,
  [SMALL_STATE(38)] = 536,
  [SMALL_STATE(39)] = 550,
  [SMALL_STATE(40)] = 560,
  [SMALL_STATE(41)] = 574,
  [SMALL_STATE(42)] = 588,
  [SMALL_STATE(43)] = 602,
  [SMALL_STATE(44)] = 616,
  [SMALL_STATE(45)] = 630,
  [SMALL_STATE(46)] = 644,
  [SMALL_STATE(47)] = 654,
  [SMALL_STATE(48)] = 668,
  [SMALL_STATE(49)] = 682,
  [SMALL_STATE(50)] = 692,
  [SMALL_STATE(51)] = 701,
  [SMALL_STATE(52)] = 712,
  [SMALL_STATE(53)] = 723,
  [SMALL_STATE(54)] = 734,
  [SMALL_STATE(55)] = 745,
  [SMALL_STATE(56)] = 756,
  [SMALL_STATE(57)] = 767,
  [SMALL_STATE(58)] = 778,
  [SMALL_STATE(59)] = 789,
  [SMALL_STATE(60)] = 800,
  [SMALL_STATE(61)] = 809,
  [SMALL_STATE(62)] = 817,
  [SMALL_STATE(63)] = 825,
  [SMALL_STATE(64)] = 833,
  [SMALL_STATE(65)] = 841,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vesti_content, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vesti_content_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_decl_repeat1, 2, 0, 0),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_env_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_env_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 3, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singlepkg_decl, 2, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docclass_decl, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 4, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_repeat1, 2, 0, 0),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singlepkg_decl, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 4, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 8, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipkg_decl_repeat1, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_decl, 5, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_repeat2, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 6, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipkg_decl_repeat1, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docclass_decl, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_decl, 6, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 7, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipkg_decl, 5, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_arg, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipkg_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_decl_repeat2, 2, 0, 0),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_decl_repeat2, 2, 0, 0), SHIFT_REPEAT(36),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mandantory_arg, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mandantory_arg_repeat1, 2, 0, 0),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mandantory_arg_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_arg, 3, 0, 0),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_optional_arg_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_optional_arg_repeat1, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat2, 2, 0, 0), SHIFT_REPEAT(56),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_repeat2, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mandantory_arg, 2, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_arg, 2, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipkg_decl_repeat1, 4, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [202] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
