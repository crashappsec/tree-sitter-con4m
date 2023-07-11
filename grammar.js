const PREC = {
    primary: 7,
    unary: 6,
    multiplicative: 5,
    additive: 4,
    comparative: 3,
    and: 2,
    or: 1,
    composite_literal: -1,
  },
  multiplicative_operators = ["*", "/", "%"],
  additive_operators = ["+", "-"],
  comparative_operators = ["==", "!=", "<", "<=", ">", ">="],
  assignment_operators = [":", "=", ":="],
  newline = "\n",
  terminator = choice(newline, ";");
(hexDigit = /[0-9a-fA-F]/),
  (octalDigit = /[0-7]/),
  (decimalDigit = /[0-9]/),
  (binaryDigit = /[01]/),
  (hexDigits = seq(hexDigit, repeat(seq(optional("_"), hexDigit)))),
  (octalDigits = seq(octalDigit, repeat(seq(optional("_"), octalDigit)))),
  (decimalDigits = seq(decimalDigit, repeat(seq(optional("_"), decimalDigit)))),
  (binaryDigits = seq(binaryDigit, repeat(seq(optional("_"), binaryDigit)))),
  (hexLiteral = seq("0", choice("x", "X"), optional("_"), hexDigits)),
  (octalLiteral = seq(
    "0",
    optional(choice("o", "O")),
    optional("_"),
    octalDigits
  )),
  (decimalLiteral = choice(
    "0",
    seq(/[1-9]/, optional(seq(optional("_"), decimalDigits)))
  )),
  (binaryLiteral = seq("0", choice("b", "B"), optional("_"), binaryDigits)),
  (intLiteral = choice(
    binaryLiteral,
    decimalLiteral,
    octalLiteral,
    hexLiteral
  )),
  (decimalExponent = seq(
    choice("e", "E"),
    optional(choice("+", "-")),
    decimalDigits
  )),
  (decimalFloatLiteral = choice(
    seq(decimalDigits, ".", optional(decimalDigits), optional(decimalExponent)),
    seq(decimalDigits, decimalExponent),
    seq(".", decimalDigits, optional(decimalExponent))
  )),
  (hexExponent = seq(
    choice("p", "P"),
    optional(choice("+", "-")),
    decimalDigits
  )),
  (hexMantissa = choice(
    seq(optional("_"), hexDigits, ".", optional(hexDigits)),
    seq(optional("_"), hexDigits),
    seq(".", hexDigits)
  )),
  (hexFloatLiteral = seq("0", choice("x", "X"), hexMantissa, hexExponent)),
  (floatLiteral = choice(decimalFloatLiteral, hexFloatLiteral)),
  (imaginaryLiteral = seq(
    choice(decimalDigits, intLiteral, floatLiteral),
    "i"
  ));

module.exports = grammar({
  name: "con4m",

  extras: ($) => [$.comment, /\s/],

  word: ($) => $.identifier,

  conflicts: ($) => [
    [$.dict_kv, $.expression_list],
    [$._if_stmt, $._if_elif_stmt, $._if_else_stmt, $._if_elif_else_stmt],
    [$._if_elif_stmt, $._if_elif_else_stmt],
  ],

  supertypes: ($) => [$._expression, $._statement],
  rules: {
    source_file: ($) =>
      seq(
        repeat(seq($._top_level_item, repeat1(terminator))),
        optional($._top_level_item)
      ),

    _top_level_item: ($) => choice($._statement, $._declaration),

    _declaration: ($) =>
      choice($.function_declaration, $.var_declaration, $.enum_declaration),

    _statement: ($) =>
      choice(
        $._expression,
        $.export_statement,
        $.return_statement,
        $.if_statement,
        $.for_statement,
        $.assignment_statement,
        $.break_statement,
        $.continue_statement,
        $.block,
        $.section
      ),

    unary_expression: ($) =>
      prec(
        PREC.unary,
        seq(
          // TODO add ! for negation
          field("operator", choice("+", "-")),
          field("operand", $._expression)
        )
      ),
    _expression: ($) =>
      choice(
        $.binary_expression,
        $.unary_expression,
        $.selector_expression,
        $.index_expression,
        $.call_expression,
        $.identifier,
        $.composite_literal,
        $.string_literal,
        $.int_literal,
        $.float_literal,
        $.imaginary_literal,
        $.true,
        $.false,
        $.parenthesized_expression
      ),

    composite_literal: ($) =>
      prec(
        PREC.composite_literal,
        choice($.tuple_literal, $.list_literal, $.dict_literal)
      ),

    selector_expression: ($) =>
      prec(
        PREC.primary,
        seq(
          field("operand", $._expression),
          ".",
          field("field", $.field_identifier)
        )
      ),

    index_expression: ($) =>
      prec(
        PREC.primary,
        seq(
          field("operand", $._expression),
          "[",
          field("index", $._expression),
          "]"
        )
      ),
    parenthesized_expression: ($) => seq("(", $._expression, ")"),
    expression_list: ($) => commaSep1($._expression),

    block: ($) => seq("{", optional($._statement_list), "}"),
    _statement_list: ($) =>
      choice(
        seq(
          $._statement,
          repeat(seq(terminator, $._statement)),
          optional(terminator)
        )
      ),

    assignment_statement: ($) =>
      seq(
        field("left", $.expression_list),
        field("operator", choice(...assignment_operators)),
        field("right", $.expression_list)
      ),
    eq_op: ($) => choice("=", ":", ":="),
    enum_declaration: ($) =>
      seq("enum", $.identifier, repeat(seq(",", $.identifier))),

    for_statement: ($) =>
      seq("for", $.identifier, $.for_range_clause, field("body", $.block)),

    for_range_clause: ($) =>
      seq(
        "from",
        field("left", $._expression),
        "to",
        field("right", $._expression)
      ),

    call_expression: ($) =>
      prec(
        PREC.primary,
        seq(
          field("function", choice($.identifier, "$")),
          field("arguments", $.argument_list)
        )
      ),

    argument_list: ($) => seq("(", commaSep($._expression), ")"),

    // break up if statement so at to allow new lines between conditional clauses
    if_statement: ($) =>
      choice(
        $._if_stmt,
        $._if_elif_stmt,
        $._if_elif_else_stmt,
        $._if_else_stmt
      ),
    _if_stmt: ($) =>
      seq(
        "if",
        field("condition", $._expression),
        field("consequence", $.block)
      ),
    _if_elif_stmt: ($) =>
      seq(
        "if",
        field("condition", $._expression),
        field("consequence", $.block),
        repeat(newline),
        repeat1(field("alternative_conditional", $.elif_clause))
      ),
    _if_elif_else_stmt: ($) =>
      seq(
        "if",
        field("condition", $._expression),
        field("consequence", $.block),
        repeat(newline),
        repeat1(field("alternative_conditional", $.elif_clause)),
        repeat(newline),
        field("alternative_catchall", $.else_clause)
      ),
    _if_else_stmt: ($) =>
      seq(
        "if",
        field("condition", $._expression),
        field("consequence", $.block),
        repeat(newline),
        field("alternative_catchall", $.else_clause)
      ),
    elif_clause: ($) =>
      seq(
        "elif",
        seq(field("condition", $._expression), field("consequence", $.block))
      ),
    else_clause: ($) => seq("else", field("consequence", $.block)),

    binary_expression: ($) => {
      const table = [
        [PREC.multiplicative, choice(...multiplicative_operators)],
        [PREC.additive, choice(...additive_operators)],
        [PREC.comparative, choice(...comparative_operators)],
        [PREC.and, choice("&&", "and")],
        [PREC.or, choice("||", "or")],
      ];

      return choice(
        ...table.map(([precedence, operator]) =>
          prec.left(
            precedence,
            seq(
              field("left", $._expression),
              field("operator", operator),
              field("right", $._expression)
            )
          )
        )
      );
    },

    base_type_spec: ($) =>
      choice(
        "void",
        "bool",
        "int",
        "char",
        "string",
        "float",
        "Duration",
        "IpAddr",
        "CIDR",
        "Size",
        "Date",
        "Time",
        "DateType",
        seq("`", $.identifier),
        seq("typespec", optional(seq("[", "`", $.identifier, "]"))),
        seq("tuple", "[", $.type_spec_r, ",", repeat1($.type_spec_r), "]"),
        seq("list", "[", $.type_spec_r, "]"),
        seq("dict", "[", $.type_spec_r, ",", $.type_spec_r, "]")
      ),

    type_spec: ($) => choice($.base_type_spec, seq("func", $.func_spec)),
    type_spec_r: ($) =>
      choice($.base_type_spec, seq(optional("func"), $.func_spec)),

    func_spec: ($) =>
      seq(
        "(",
        $.type_spec_r,
        repeat(seq(",", $.type_spec_r)),
        optional(seq("*", $.type_spec_r)),
        ")",
        "->",
        $.type_spec_r
      ),

    section: ($) =>
      seq(
        field("section_type", $.identifier),
        optional(field("section_name", $.identifier)),
        field("body", $.block)
      ),

    function_declaration: ($) =>
      seq(
        "func",
        field("name", $.identifier),
        field("parameters", seq("(", commaSep($.param_spec), ")")),
        field("body", $.block)
      ),

    var_declaration: ($) => seq("var", commaSep1($.var_decl_item)),

    var_decl_item: ($) =>
      seq(
        field("name", commaSep1($.identifier)),
        ":",
        field("type", $.type_spec)
      ),

    param_spec: ($) =>
      seq(
        field("param", $.identifier),
        field("param_type", optional(seq(":", $.type_spec)))
      ),

    export_statement: ($) => seq("export", commaSep1($.identifier)),
    comment: ($) =>
      token(
        choice(
          seq("//", /.*/),
          seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),
          seq(choice("#", "//"), /.*/)
        )
      ),
    other_lit: ($) => seq("<<", repeat(/./), ">>"),
    int_literal: ($) => token(intLiteral),

    float_literal: ($) => token(floatLiteral),
    tuple_literal: ($) =>
      seq("(", $._expression, repeat1(seq(",", $._expression)), ")"),

    list_literal: ($) => seq("[", commaSep($._expression), "]"),
    dict_literal: ($) => seq("{", commaSep1($.dict_kv), "}"),
    dict_kv: ($) =>
      seq(field("key", $._expression), ":", field("value", $._expression)),

    imaginary_literal: ($) => token(imaginaryLiteral),
    true: ($) => choice("true", "True"),
    false: ($) => choice("false", "False"),
    continue_statement: ($) => "continue",
    break_statement: ($) => "break",
    return_statement: ($) => seq("return", optional($.expression_list)),
    quoted_string: ($) =>
      choice(
        seq('"', '"'),
        seq("'", "'"),
        seq('"', $._quoted_string_content_double, '"'),
        seq("'", $._quoted_string_content_single, "'")
      ),

    escape_sequence: ($) =>
      token.immediate(seq("\\", /(\"|\'|\\|\/|b|f|n|r|t|u)/)),

    //  Use repeat1 here instead of repeat, as treesitter doesn't support matching with empty string
    _quoted_string_content_double: ($) =>
      repeat1(choice(token.immediate(/[^\\"\n]+/), $.escape_sequence)),
    _quoted_string_content_single: ($) =>
      repeat1(choice(token.immediate(/[^\'\n]+/), $.escape_sequence)),

    multiline_string: ($) =>
      choice(seq("'''", repeat(/./), "'''"), seq('"""', repeat(/./), '"""')),

    string_literal: ($) => choice($.quoted_string, $.multiline_string),

    identifier: ($) => /[_\p{XID_Start}][_\p{XID_Continue}]*/,
    field_identifier: ($) => alias($.identifier, $.field_identifier),
  },
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
