/**
 * @file tree-sitter parser for vesti
 * @author Sungbae Jeong <almagest0328@gmail.com>
 * @license MIT
 */

///// <reference types="tree-sitter-cli/dsl" />
//// @ts-check

module.exports = grammar({
  name: "vesti",

  extras: ($) => [/\s/, $.line_comment, $.multiline_comment],

  rules: {
    vesti_content: ($) => repeat1($._statement),
    _statement: ($) =>
      choice(
        $.docclass_decl,
        $.singlepkg_decl,
        $.multipkg_decl,
        $.importmod_decl,
        $.importfile_decl,
        $.importves_decl,
        $.getfp_decl,
        $.useenv_decl,
        $.begenv_decl,
        $.endenv_decl,
        $.luacode,
        $.KEYWORD_useltx3,
        $.KEYWORD_startdoc,
        $.KEYWORD_makeatletter,
        $.KEYWORD_makeatother,
        $.KEYWORD_ltx3on,
        $.KEYWORD_ltx3off,
        $.KEYWORD_nonstopmode,
        $.singleline_raw_latex,
        $.multiline_raw_latex,
        $._text_content,
      ),

    docclass_decl: ($) =>
      seq($.KEYWORD_docclass, $.class_pkg_name, optional($.options), /\r?\n/),
    singlepkg_decl: ($) =>
      seq($.KEYWORD_importpkg, $.class_pkg_name, optional($.options), /\r?\n/),
    multipkg_decl: ($) =>
      seq(
        $.KEYWORD_importpkg,
        "{",
        $.class_pkg_name,
        optional($.options),
        repeat(
          seq(",", optional(/\r?\n/), $.class_pkg_name, optional($.options)),
        ),
        optional(","),
        optional(/\r?\n/),
        "}",
      ),

    options: ($) =>
      seq(
        "(",
        $.option_name,
        repeat(seq(",", $.option_name)),
        optional(","),
        ")",
      ),

    class_pkg_name: ($) => /[\w\d-]+/,
    option_name: ($) => /([^,()]|\\,|\\(|\\))+/,

    importmod_decl: ($) =>
      prec.right(2, seq($.KEYWORD_importmod, "(", $.filepath, ")")),
    importfile_decl: ($) =>
      prec.right(2, seq($.KEYWORD_importfile, "(", $.filepath, ")")),
    importves_decl: ($) =>
      prec.right(2, seq($.KEYWORD_importves, "(", $.filepath, ")")),
    getfp_decl: ($) =>
      prec.right(2, seq($.KEYWORD_getfp, "(", $.filepath, ")")),
    useenv_decl: ($) =>
      prec.right(
        1,
        seq($.KEYWORD_useenv, $.env_name, repeat($.env_arg), $.brace_group),
      ),
    begenv_decl: ($) =>
      prec.right(
        1,
        seq($.KEYWORD_begenv, $.env_name, repeat($.env_arg), /(\r)?\n/),
      ),
    endenv_decl: ($) => seq($.KEYWORD_endenv, $.env_name),
    env_arg: ($) => choice($.mandantory_arg, $.optional_arg),
    mandantory_arg: ($) => seq("(", repeat(/[^)]/), ")"),
    optional_arg: ($) => seq("[", repeat(/[^\]]/), "]"),

    luacode: ($) =>
      seq(
        $.KEYWORD_luacode,
        "{",
        alias($.vesti_content, $.luacode_contents),
        "}",
      ),

    KEYWORD_docclass: ($) => token("docclass"),
    KEYWORD_importpkg: ($) => token("importpkg"),
    KEYWORD_importmod: ($) => token("importmod"),
    KEYWORD_importfile: ($) => token("importfile"),
    KEYWORD_importves: ($) => token("importves"),
    KEYWORD_useltx3: ($) => token("useltx3"),
    KEYWORD_getfp: ($) => token("getfp"),
    KEYWORD_startdoc: ($) => token("startdoc"),
    KEYWORD_useenv: ($) => token("useenv"),
    KEYWORD_begenv: ($) => token("begenv"),
    KEYWORD_endenv: ($) => token("endenv"),
    KEYWORD_makeatletter: ($) => token("makeatletter"),
    KEYWORD_makeatother: ($) => token("makeatother"),
    KEYWORD_ltx3on: ($) => token("ltx3on"),
    KEYWORD_ltx3off: ($) => token("ltx3off"),
    KEYWORD_nonstopmode: ($) => token("nonstopmode"),
    KEYWORD_luacode: ($) => token("luacode"),

    // NOTE: stolen from https://github.com/latex-lsp/tree-sitter-latex/blob/master/grammar.js
    _text_content: ($) =>
      prec.right(
        1,
        choice($.brace_group, $.paren_group, $.latex_function, $.text, $._math),
      ),

    brace_group: ($) => seq("{", $.vesti_content, "}"),
    paren_group: ($) => seq("(", $.vesti_content, ")"),

    _math: ($) => choice($.inline_math, $.display_math),
    inline_math: ($) => seq("$", repeat(/[^$]/), "$"),
    display_math: ($) => seq("$$", repeat(/[^$]/), "$$"),

    text: ($) =>
      prec.right(
        repeat1(
          choice(
            $.word,
            $.delimiter,
            $.placeholder,
            $.subscript,
            $.superscript,
          ),
        ),
      ),
    word: ($) => /[^\s\\%\{\}\$\[\]\(\)\#&_\^]+/,
    placeholder: ($) => /#+\d/,
    delimiter: ($) => /&/,
    subscript: ($) =>
      seq("_", choice($.brace_group, $.letter, $.latex_function)),
    superscript: ($) =>
      seq("^", choice($.brace_group, $.letter, $.latex_function)),

    latex_function: ($) =>
      prec.right(seq($.latex_function_name, repeat($.brace_group))),
    latex_function_name: ($) => /\\([^\r\n]|[@a-zA-Z]+\*?)?/,
    letter: ($) => /[^\\%\{\}\$\#_\^]/,
    digit: ($) => /[0-9]/,
    ascii_letter: ($) => /[A-Za-z]/,
    filepath: ($) => token(/[\p{L}@/]+/),
    env_name: ($) => token(/[A-Za-z][A-Za-z0-9-]*(\*)*/),

    singleline_raw_latex: ($) => /%-#[^\n]*\n/,
    multiline_raw_latex: ($) => /%\-(.|\n)*?\-%/,

    // Comments
    line_comment: ($) => /%[^!*-][^\n]*\n/,
    multiline_comment: ($) => /%\*(.|\n)*?\*%/,
  },
});
