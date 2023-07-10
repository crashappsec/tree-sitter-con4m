(function_declaration
  "func" @structure.anchor
  body: (block
    "{" @structure.open
    "}" @structure.close
  )
)

(function_declaration
  (identifier) @structure.anchor
  (parameter_list
    "(" @structure.open
    ("," @structure.separator (_))*
    ")" @structure.close
  )
)
