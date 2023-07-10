(function_declaration
  "func" @structure.anchor
  body: (body
    "{" @structure.open
    "}" @structure.close
  )
)

(function_declaration
  (identifier) @structure.anchor
  (formal_spec
    "(" @structure.open
    ("," @structure.separator (_))*
    ")" @structure.close
  )
)
