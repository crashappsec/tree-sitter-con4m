[
  (tuple_literal)
  (list_literal)
  (dict_literal)
] @indent.begin

((list_literal) @indent.align
 (#set! indent.open_delimiter "[")
 (#set! indent.close_delimiter "]")
)
((tuple_literal) @indent.align
 (#set! indent.open_delimiter "(")
 (#set! indent.close_delimiter ")")
)
((dict_literal) @indent.align
 (#set! indent.open_delimiter "{")
 (#set! indent.close_delimiter "}")
)

((for_stmt) @indent.begin
 (#set! indent.immediate 1))
((if_stmt) @indent.begin
 (#set! indent.immediate 1))

(if_stmt
  condition: (expression) @indent.align
  (#set! indent.open_delimiter "(")
  (#set! indent.close_delimiter ")")
  (#set! indent.avoid_last_matching_next 1)
)
