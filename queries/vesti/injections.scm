(luacode_block
  (luacode_payload) @injection.content
  (#set! injection.language "lua"))

((multiline_raw_latex) @raw)
(#set! injection.language "latex")
(#set! injection.content @raw)

((singleline_raw_latex) @raw)
(#set! injection.language "latex")
(#set! injection.content @raw)
