; Tree-sitter highlighting queries for the vesti language

;; Keywords
((KEYWORD_docclass) @keyword)
((KEYWORD_importpkg) @keyword)
((KEYWORD_useenv) @keyword)

;; Identifiers
((class_pkg_name) @type)
((env_name) @variable)

;; Options and environment arguments
((options) @constant)
((mandantory_arg) @constant)
((optional_arg) @constant)

;; Comments
((line_comment) @comment)
((multiline_comment) @comment)

