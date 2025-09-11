; Tree-sitter highlighting queries for the vesti language

;; Keywords
((KEYWORD_docclass) @keyword)
((KEYWORD_importpkg) @keyword)
((KEYWORD_importmod) @keyword)
((KEYWORD_copyfile) @keyword)
((KEYWORD_importves) @keyword)
((KEYWORD_useltx3) @keyword)
((KEYWORD_getfp) @keyword)
((KEYWORD_startdoc) @keyword)
((KEYWORD_useenv) @keyword)
((KEYWORD_begenv) @keyword)
((KEYWORD_endenv) @keyword)
((KEYWORD_defun) @keyword)
((KEYWORD_defenv) @keyword)
((KEYWORD_makeatletter) @keyword)
((KEYWORD_makeatother) @keyword)
((KEYWORD_ltx3on) @keyword)
((KEYWORD_ltx3off) @keyword)
((KEYWORD_nonstopmode) @keyword)
((KEYWORD_mathmode) @keyword)
((KEYWORD_compty) @keyword)
((KEYWORD_pycode) @function)
((KEYWORD_endpycode) @function)

;; Identifiers
((class_pkg_name) @type)
((env_name) @type)
((latex_function_name) @function)

((inline_math) @string)
((display_math) @string)

((singleline_raw_latex) @type)
((multiline_raw_latex) @type)

;; Options and environment arguments
((options) @constant)
((mandantory_arg) @constant)
((optional_arg) @constant)
((defenv_optional_arg) @function)

;; Comments
((comment) @comment)
