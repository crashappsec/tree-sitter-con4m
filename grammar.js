const PREC = {
    unary: 8,
    if_elif_else: 7,
    if_elif: 6,
    if_else: 6,
    if: 5,
  },
  multiplicative_operators = ["*", "/", "%", "<<", ">>", "&", "&^"],
  additive_operators = ["+", "-", "|", "^"],
  comparative_operators = ["==", "!=", "<", "<=", ">", ">="],
  assignment_operators = multiplicative_operators
    .concat(additive_operators)
    .map((operator) => operator + "=")
    .concat("="),
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

  supertypes: ($) => [$._expression, $._statement, $._simple_statement],
  rules: {
    source_file: ($) =>
      seq(
        repeat(seq(choice($._statement), terminator)),
        optional(choice($._statement))
      ),

    _statement: ($) =>
      choice(
        $.return_statement,
        $.if_statement,
        $.assignment_statement,
        $.break_statement,
        $.continue_statement
      ),

    _simple_statement: ($) => choice($._expression, $.assignment_statement),

    unary_expression: ($) =>
      prec(
        PREC.unary,
        seq(
          // TODO add !
          field("operator", choice("+", "-")),
          field("operand", $._expression)
        )
      ),
    _expression: ($) =>
      choice(
        $.unary_expression,
        // $.call_expression,
        $.identifier,
        // $._string_literal,
        $.int_literal,
        $.float_literal,
        // $.imaginary_literal,
        $.true,
        $.false
        // $.parenthesized_expression
      ),
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
    enum_statement: ($) =>
      seq("enum", $.identifier, repeat(seq(",", $.identifier))),

    if_statement: ($) =>
      choice(
        $._if_stmt,
        $._if_elif_stmt,
        $._if_elif_else_stmt,
        $._if_else_stmt
      ),
    _if_stmt: ($) =>
      prec(
        PREC.if,
        seq(
          "if",
          field("condition", $._expression),
          field("consequence", $.block)
        )
      ),
    _if_elif_stmt: ($) =>
      prec(
        PREC.if_elif,
        seq(
          "if",
          field("condition", $._expression),
          field("consequence", $.block),
          repeat(newline),
          repeat1(field("alternative_conditional", $.elif_clause))
        )
      ),
    _if_elif_else_stmt: ($) =>
      prec(
        PREC.if_elif_else,
        seq(
          "if",
          field("condition", $._expression),
          field("consequence", $.block),
          repeat(newline),
          repeat1(field("alternative_conditional", $.elif_clause)),
          repeat(newline),
          field("alternative_catchall", $.else_clause)
        )
      ),
    _if_else_stmt: ($) =>
      prec(
        PREC.if_else,
        seq(
          "if",
          field("condition", $._expression),
          field("consequence", $.block),
          repeat(newline),
          field("alternative_catchall", $.else_clause)
        )
      ),
    elif_clause: ($) =>
      seq(
        "elif",
        seq(field("condition", $._expression), field("consequence", $.block))
      ),
    else_clause: ($) => seq("else", field("consequence", $.block)),

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

    imaginary_literal: ($) => token(imaginaryLiteral),
    true: ($) => choice("true", "True"),
    false: ($) => choice("false", "False"),
    empty_statement: ($) => ";",
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

    _string_literal: ($) => choice($.quoted_string, $.multiline_string),

    identifier: ($) => /[_\p{XID_Start}][_\p{XID_Continue}]*/,
  },
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
