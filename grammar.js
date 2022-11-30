// parser for vesti
// alsmost copied from the tree-sitter-latex
// https://github.com/latex-lsp/tree-sitter-latex/blob/master/grammar.js

const sepBy1 = (rule, sep) => seq(rule, repeat(seq(sep, rule)), optional(sep));

const sepBy = (rule, sep) => optional(sepBy1(rule, sep));

module.exports = grammar({
    name : 'vesti',
    extras : $ => [$._whitespace, $.comment],

    rules : {
        source_file: $ => repeat($._root_content),

        // trivia
        _whitespace: $ => /\s+/,

        // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
        comment: $ => choice(
            seq("%", /(\\(.|\r?\n)|[^\\\n])*/),
            seq(
                "%*",
                /[^*]*\*+([^%*][^*]*\*+)*/,
                "%",
            )
        ),

        // Root
        _root_content: $ => choice(
            $._preliminary,
            $._text_with_env_content,
        ),

        _preliminary: $ => choice(
            $.docclass,
            $.import,
            $.document_start,
        ),

        _flat_content: $ => prec.right(
            choice(
                $._text_with_env_content,
                "[",
                "]",
            ),
        ),
        
        _text_with_env_content: $ => prec.right(
            choice(
                ",",
                "=",
                $._text_content,
                $.environment,
            ),
        ),
        
        _text_content: $ => prec.right(
            1,
            choice(
                $.paren_group,
                $.brace_group,
                $.text,
                $.command,
            )
        ),

        // group
        paren_group: $ => seq("(", repeat($._flat_content), ")"),
        paren_group_text: $ => seq("(", field("text", $.text), ")"),
        paren_group_text_list: $ => seq("(", sepBy(field("text", $.text), ","), ")"),
        paren_group_key_val: $ => seq("(", sepBy(field("pair", $.key_value_pair), ","), ")"),

        brace_group: $ => seq("{", repeat($._flat_content), "}"),

        sq_brace_group: $ => seq("[", repeat(choice($._text_with_env_content, $.sq_brace_group)), "]"),
        sq_brace_group_text: $ => seq("[", field("text", $.text), "]"),
        sq_brace_group_text_list: $ => seq("[", sepBy(field("text", $.text), ","), "]"),
        sq_brace_group_key_val: $ => seq("[", sepBy(field("pair", $.key_value_pair), ","), "]"),

        // Text
        text: $ => prec.right(
            repeat1(
                field(
                    'word',
                    choice(
                        $.operator,
                        $.word,
                        $.placeholder,
                        // $.raw_latex, TODO: Implement it
                    ),
                )
            )
        ),

        word: $ => /[^\s\\%\{\},\$\[\]\(\)=\#]+/,

        placeholder: $ => /#\d/,

        path: $ => /[^\s\*\"\[\]\(\):;,\|\{\}<>]+/,

        operator: $ =>
            choice('+', '-', '*', '/', '^', '_', '<', '>', '!', '|', ':', "'"),

        // Key-Value
        key_value_pair: $ =>
            seq(field("key", $.text), optional(seq("=", field("value", $.value)))),
        
        value: $ => repeat1(choice($._text_content, $.sq_brace_group)),

        // Preliminary
        docclass: $ => prec.right(
            seq(
                'docclass',
                field('name', $.path),
                optional(field("param", $.paren_group_text_list)),
            )
        ),

        import: $ => seq('import', field('pkgs', $.pkg_list)),

        pkg_list: $ => choice(
             $.package,
             seq('{', sepBy1($.package, ','), '}'),
         ),

        package: $ => prec.right(
            seq(
                field('name', $.path),
                optional(field("param", $.paren_group_key_val)),
            )
        ),
        
        document_start: $ => token("startdoc"),
        
        // Content
        environment: $ => seq(
            "useenv",
            field("name", $.text),
            optional(
                repeat1(
                    choice(
                        field("necessary_arg", $.paren_group),
                        field("optional_arg", $.sq_brace_group),
                    )
                )
            ),
            field(
                "body",
                seq(
                    "{",
                    repeat($._text_with_env_content),
                    "}",
                ),
            ),
        ),

        command: $ => prec.right(
            seq(
                field("command", $.command_name),
                repeat(field("arg", $.paren_group))
            )
        ),

        command_name: $ => /\\([^\r\n]|[@a-zA-Z:_]+\*?)?/,
    },
});
