/**
 * @file tree-sitter parser for vesti
 * @author Sungbae Jeong <almagest0328@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "vesti",

  extras: ($) => [/\s/, $.line_comment, $.multiline_comment],

  rules: {
    vesti_content: ($) => repeat1($.statement),

    statement: ($) =>
      choice($.docclass_decl, $.singlepkg_decl, $.multipkg_decl, $.env_decl),

    docclass_decl: ($) =>
      seq($.KEYWORD_docclass, $.class_pkg_name, optional($.options)),

    singlepkg_decl: ($) =>
      seq($.KEYWORD_importpkg, $.class_pkg_name, optional($.options)),

    multipkg_decl: ($) =>
      seq(
        $.KEYWORD_importpkg,
        "{",
        seq($.class_pkg_name, optional($.options)),
        repeat(seq(",", optional("\n"), $.class_pkg_name, optional($.options))),
        optional(seq(",", optional("\n"))),
        "}",
      ),

    env_decl: ($) =>
      seq(
        $.KEYWORD_useenv,
        $.env_name,
        repeat($.env_arg),
        "{",
        repeat1(/[^}]/),
        "}",
      ),

    options: ($) =>
      seq(
        "(",
        repeat1(/[^,]/),
        optional(repeat(seq(",", repeat1(/[^,]/)))),
        ")",
      ),

    env_arg: ($) => choice($.mandantory_arg, $.optional_arg),
    mandantory_arg: ($) => seq("(", repeat(/[^)]/), ")"),
    optional_arg: ($) => seq("[", repeat(/[^\]]/), "]"),

    class_pkg_name: ($) => token(/[A-Za-z0-9-]+/),

    env_name: ($) => token(/[A-Za-z][A-Za-z0-9-]*(\*)*/),

    KEYWORD_docclass: ($) => token("docclass"),
    KEYWORD_importpkg: ($) => token("importpkg"),
    KEYWORD_useenv: ($) => token("useenv"),

    digit: ($) => token(/[0-9]/),
    ascii_letter: ($) => token(/[A-Za-z]/),
    letter: ($) => token(/\p{L}/u),

    line_comment: ($) => token(/%([^\*\!\-])[^\n]*/),
    multiline_comment: ($) => token(/%\*[\s\S]*?\*\%/),
  },
});
