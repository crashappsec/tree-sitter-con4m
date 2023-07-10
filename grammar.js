const PREC = {
  section_declaration: 1,
  if_statement: 10, // Prefer ifelse over sections
};
const SEMICOLON = ";";

module.exports = grammar({
  name: "con4m",

  extras: ($) => [
    $.comment,
    /[\s\f\uFEFF\u2060\u200B]|\r?\n/,
    $.line_continuation,
  ],

  inline: ($) => [$._string_literal, $._top_level_declaration],
  word: ($) => $.identifier,

  conflicts: ($) => [[$.if_statement, $.section_declaration]],
  rules: {
    source_file: ($) =>
      seq(
        repeat(
          choice(
            // Unlike a Go compiler, we accept statements at top-level to enable
            // parsing of partial code snippets in documentation (see #63).
            seq($._statement, $.terminator),
            seq($._top_level_declaration, $.terminator)
          )
        ),
        optional(choice($._top_level_declaration, $._statement))
      ),

    _top_level_declaration: ($) =>
      choice($.function_declaration, $.section_declaration),

    _statement: ($) =>
      choice(
        $.if_statement,
        $.for_statement,
        $.var_statement,
        $.enum_statement,
        $.assignment_statement
      ),

    _simple_statement: ($) => choice($.expression, $.assignment_statement),

    block: ($) =>
      seq("{", optional(choice($._statement_list, $.section_declaration)), "}"),
    section_declaration: ($) =>
      prec(
        PREC.section_declaration,
        seq(
          field("section_declaration_type", $.identifier),
          field(
            "section_declaration_name",
            optional(choice($._string_literal, $.identifier))
          ),
          field("body", $.block)
        )
      ),
    _statement_list: ($) =>
      choice(seq($._statement, repeat(seq($.terminator, $._statement)))),

    assignment_statement: ($) =>
      seq(
        $.access_expr,
        repeat(seq(",", $.access_expr)),
        $.eq_op,
        $.expression
      ),
    eq_op: ($) => choice("=", ":", ":="),
    enum_statement: ($) =>
      seq("enum", $.identifier, repeat(seq(",", $.identifier))),

    if_statement: ($) =>
      prec(
        PREC.if_statement,
        seq(
          "if",
          seq(field("condition", $.expression), field("consequence", $.block)),
          repeat(field("alternative", $.elif_clause)),
          optional(field("alternative", $.else_clause))
        )
      ),
    elif_clause: ($) =>
      seq(
        "elif",
        seq(field("condition", $.expression), field("consequence", $.block))
      ),
    else_clause: ($) =>
      seq(
        "else",
        seq(field("condition", $.expression), field("consequence", $.block))
      ),

    for_statement: ($) =>
      seq(
        "for",
        $.identifier,
        "from",
        $.expression,
        "to",
        $.expression,
        $.block
      ),
    function_declaration: ($) =>
      seq(
        "func",
        field("name", $.identifier),
        field("parameters", $.formal_spec),
        field("body", $.block)
      ),
    formal_spec: ($) =>
      seq("(", optional($.param_spec), repeat(seq(",", $.param_spec)), ")"),
    param_spec: ($) => seq($.identifier, seq(":", $.type_spec)),
    var_decl_item: ($) =>
      seq($.identifier, repeat(seq(",", $.identifier)), ":", $.type_spec),
    var_statement: ($) =>
      seq("var", $.var_decl_item, repeat(seq(",", $.var_decl_item))),
    export_statement: ($) =>
      seq("export", $.identifier, repeat(seq(",", $.identifier))),

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

    expression: ($) => choice($.unary_expr, $.not_expr, $.or_expr),
    unary_expr: ($) =>
      seq(optional(choice("+", "-")), choice($.access_expr, $.literal)),

    not_expr: ($) => prec(2, seq(choice(("!", "not")), $.expression)),

    access_expr: ($) =>
      seq(
        field("name", choice($.identifier, "$", $.paren_expr)),
        field(
          "arguments",
          repeat(choice($.member_expr, $.index_expr, $.call_actuals))
        )
      ),
    paren_expr: ($) => seq("(", $.expression, ")"),
    member_expr: ($) => seq(".", $.identifier),
    index_expr: ($) => seq("[", $.expression, "]"),
    call_actuals: ($) =>
      seq(
        "(",
        optional(seq($.expression, repeat(seq(",", $.expression)))),
        ")"
      ),

    literal: ($) =>
      choice(
        $.number,
        $._string_literal,
        $.list_literal,
        $.tuple_literal,
        $.dict_literal,
        $.type_spec,
        $.other_lit,
        $.true,
        $.false
      ),

    true: ($) => choice("true", "True"),
    false: ($) => choice("false", "False"),
    tuple_literal: ($) =>
      seq("(", $.expression, repeat1(seq(",", $.expression)), ")"),

    list_literal: ($) =>
      seq(
        "[",
        optional(seq($.expression, repeat(seq(",", $.expression)))),
        "]"
      ),
    dict_literal: ($) =>
      seq(
        "{",
        seq(
          $.expression,
          ":",
          $.expression,
          repeat(seq(",", $.expression, ":", $.expression))
        ),
        "}"
      ),

    or_expr: ($) => seq($.expression, choice("||", "or"), $.and_expr),
    and_expr: ($) => seq($.expression, choice("&&", "and"), $.ne_expr),
    ne_expr: ($) => seq($.expression, "!=", $.eq_expr),
    eq_expr: ($) => seq($.expression, "==", $.gte_expr),
    gte_expr: ($) => seq($.expression, ">=", $.lte_expr),
    lte_expr: ($) => seq($.expression, "<=", $.gt_expr),
    gt_expr: ($) => seq($.expression, ">", $.lt_expr),
    lt_expr: ($) => seq($.expression, "<", $.plus_expr),
    plus_expr: ($) => seq($.expression, "+", $.minus_expr),
    minus_expr: ($) => seq($.expression, "-", $.mod_expr),
    mod_expr: ($) => seq($.expression, "%", $.mul_expr),
    mul_expr: ($) => seq($.expression, "*", $.div_expr),
    div_expr: ($) => seq($.expression, "/", $.access_expr),

    newline: ($) => /\n/,
    terminator: ($) => choice(repeat1($.newline), ";"),
    comment: ($) =>
      token(
        choice(
          seq("//", /.*/),
          seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),
          seq(choice("#", "//"), /.*/)
        )
      ),
    line_continuation: ($) =>
      token(seq("\\", choice(seq(optional("\r"), "\n"), "\0"))),
    integer: ($) =>
      token(
        choice(
          seq(choice("0x", "0X"), repeat1(/_?[A-Fa-f0-9]+/), optional(/[Ll]/)),
          seq(choice("0o", "0O"), repeat1(/_?[0-7]+/), optional(/[Ll]/)),
          seq(choice("0b", "0B"), repeat1(/_?[0-1]+/), optional(/[Ll]/)),
          seq(
            repeat1(/[0-9]+_?/),
            choice(
              optional(/[Ll]/), // long numbers
              optional(/[jJ]/) // complex numbers
            )
          )
        )
      ),

    float: ($) => {
      const digits = repeat1(/[0-9]+_?/);
      const exponent = seq(/[eE][\+-]?/, digits);

      return token(
        seq(
          choice(
            seq(digits, ".", optional(digits), optional(exponent)),
            seq(optional(digits), ".", digits, optional(exponent)),
            seq(digits, exponent)
          ),
          optional(choice(/[Ll]/, /[jJ]/))
        )
      );
    },
    number: ($) => choice($.integer, $.float),
    other_lit: ($) => seq("<<", repeat(/./), ">>"),
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
