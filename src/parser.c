#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 411
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 148
#define ALIAS_COUNT 0
#define TOKEN_COUNT 79
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 12

enum {
  sym_identifier = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_COMMA = 4,
  anon_sym_EQ = 5,
  anon_sym_COLON = 6,
  anon_sym_COLON_EQ = 7,
  anon_sym_enum = 8,
  anon_sym_if = 9,
  anon_sym_elif = 10,
  anon_sym_else = 11,
  anon_sym_for = 12,
  anon_sym_from = 13,
  anon_sym_to = 14,
  anon_sym_func = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_var = 18,
  anon_sym_export = 19,
  anon_sym_void = 20,
  anon_sym_bool = 21,
  anon_sym_int = 22,
  anon_sym_char = 23,
  anon_sym_string = 24,
  anon_sym_float = 25,
  anon_sym_Duration = 26,
  anon_sym_IpAddr = 27,
  anon_sym_CIDR = 28,
  anon_sym_Size = 29,
  anon_sym_Date = 30,
  anon_sym_Time = 31,
  anon_sym_DateType = 32,
  anon_sym_BQUOTE = 33,
  anon_sym_typespec = 34,
  anon_sym_LBRACK = 35,
  anon_sym_RBRACK = 36,
  anon_sym_tuple = 37,
  anon_sym_list = 38,
  anon_sym_dict = 39,
  anon_sym_STAR = 40,
  anon_sym_DASH_GT = 41,
  anon_sym_PLUS = 42,
  anon_sym_DASH = 43,
  anon_sym_not = 44,
  anon_sym_DOLLAR = 45,
  anon_sym_DOT = 46,
  anon_sym_true = 47,
  anon_sym_True = 48,
  anon_sym_false = 49,
  anon_sym_False = 50,
  anon_sym_PIPE_PIPE = 51,
  anon_sym_or = 52,
  anon_sym_AMP_AMP = 53,
  anon_sym_and = 54,
  anon_sym_BANG_EQ = 55,
  anon_sym_EQ_EQ = 56,
  anon_sym_GT_EQ = 57,
  anon_sym_LT_EQ = 58,
  anon_sym_GT = 59,
  anon_sym_LT = 60,
  anon_sym_PERCENT = 61,
  anon_sym_SLASH = 62,
  sym_newline = 63,
  anon_sym_SEMI = 64,
  sym_comment = 65,
  sym_line_continuation = 66,
  sym_integer = 67,
  sym_float = 68,
  anon_sym_LT_LT = 69,
  aux_sym_other_lit_token1 = 70,
  anon_sym_GT_GT = 71,
  anon_sym_DQUOTE = 72,
  anon_sym_SQUOTE = 73,
  sym_escape_sequence = 74,
  aux_sym__quoted_string_content_double_token1 = 75,
  aux_sym__quoted_string_content_single_token1 = 76,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 77,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 78,
  sym_source_file = 79,
  sym__statement = 80,
  sym_block = 81,
  sym_section_declaration = 82,
  sym__statement_list = 83,
  sym_assignment_statement = 84,
  sym_eq_op = 85,
  sym_enum_statement = 86,
  sym_if_statement = 87,
  sym_elif_clause = 88,
  sym_else_clause = 89,
  sym_for_statement = 90,
  sym_function_declaration = 91,
  sym_formal_spec = 92,
  sym_param_spec = 93,
  sym_var_decl_item = 94,
  sym_var_statement = 95,
  sym_base_type_spec = 96,
  sym_type_spec = 97,
  sym_type_spec_r = 98,
  sym_func_spec = 99,
  sym_expression = 100,
  sym_unary_expr = 101,
  sym_not_expr = 102,
  sym_access_expr = 103,
  sym_paren_expr = 104,
  sym_member_expr = 105,
  sym_index_expr = 106,
  sym_call_actuals = 107,
  sym_literal = 108,
  sym_true = 109,
  sym_false = 110,
  sym_tuple_literal = 111,
  sym_list_literal = 112,
  sym_dict_literal = 113,
  sym_or_expr = 114,
  sym_and_expr = 115,
  sym_ne_expr = 116,
  sym_eq_expr = 117,
  sym_gte_expr = 118,
  sym_lte_expr = 119,
  sym_gt_expr = 120,
  sym_lt_expr = 121,
  sym_plus_expr = 122,
  sym_minus_expr = 123,
  sym_mod_expr = 124,
  sym_mul_expr = 125,
  sym_div_expr = 126,
  sym_terminator = 127,
  sym_number = 128,
  sym_other_lit = 129,
  sym_quoted_string = 130,
  aux_sym__quoted_string_content_double = 131,
  aux_sym__quoted_string_content_single = 132,
  sym_multiline_string = 133,
  aux_sym_source_file_repeat1 = 134,
  aux_sym__statement_list_repeat1 = 135,
  aux_sym_assignment_statement_repeat1 = 136,
  aux_sym_enum_statement_repeat1 = 137,
  aux_sym_if_statement_repeat1 = 138,
  aux_sym_formal_spec_repeat1 = 139,
  aux_sym_var_statement_repeat1 = 140,
  aux_sym_base_type_spec_repeat1 = 141,
  aux_sym_func_spec_repeat1 = 142,
  aux_sym_access_expr_repeat1 = 143,
  aux_sym_call_actuals_repeat1 = 144,
  aux_sym_dict_literal_repeat1 = 145,
  aux_sym_terminator_repeat1 = 146,
  aux_sym_other_lit_repeat1 = 147,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_enum] = "enum",
  [anon_sym_if] = "if",
  [anon_sym_elif] = "elif",
  [anon_sym_else] = "else",
  [anon_sym_for] = "for",
  [anon_sym_from] = "from",
  [anon_sym_to] = "to",
  [anon_sym_func] = "func",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_var] = "var",
  [anon_sym_export] = "export",
  [anon_sym_void] = "void",
  [anon_sym_bool] = "bool",
  [anon_sym_int] = "int",
  [anon_sym_char] = "char",
  [anon_sym_string] = "string",
  [anon_sym_float] = "float",
  [anon_sym_Duration] = "Duration",
  [anon_sym_IpAddr] = "IpAddr",
  [anon_sym_CIDR] = "CIDR",
  [anon_sym_Size] = "Size",
  [anon_sym_Date] = "Date",
  [anon_sym_Time] = "Time",
  [anon_sym_DateType] = "DateType",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_typespec] = "typespec",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_tuple] = "tuple",
  [anon_sym_list] = "list",
  [anon_sym_dict] = "dict",
  [anon_sym_STAR] = "*",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_not] = "not",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOT] = ".",
  [anon_sym_true] = "true",
  [anon_sym_True] = "True",
  [anon_sym_false] = "false",
  [anon_sym_False] = "False",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_or] = "or",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_and] = "and",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_PERCENT] = "%",
  [anon_sym_SLASH] = "/",
  [sym_newline] = "newline",
  [anon_sym_SEMI] = ";",
  [sym_comment] = "comment",
  [sym_line_continuation] = "line_continuation",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [anon_sym_LT_LT] = "<<",
  [aux_sym_other_lit_token1] = "other_lit_token1",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym__quoted_string_content_double_token1] = "_quoted_string_content_double_token1",
  [aux_sym__quoted_string_content_single_token1] = "_quoted_string_content_single_token1",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_block] = "block",
  [sym_section_declaration] = "section_declaration",
  [sym__statement_list] = "_statement_list",
  [sym_assignment_statement] = "assignment_statement",
  [sym_eq_op] = "eq_op",
  [sym_enum_statement] = "enum_statement",
  [sym_if_statement] = "if_statement",
  [sym_elif_clause] = "elif_clause",
  [sym_else_clause] = "else_clause",
  [sym_for_statement] = "for_statement",
  [sym_function_declaration] = "function_declaration",
  [sym_formal_spec] = "formal_spec",
  [sym_param_spec] = "param_spec",
  [sym_var_decl_item] = "var_decl_item",
  [sym_var_statement] = "var_statement",
  [sym_base_type_spec] = "base_type_spec",
  [sym_type_spec] = "type_spec",
  [sym_type_spec_r] = "type_spec_r",
  [sym_func_spec] = "func_spec",
  [sym_expression] = "expression",
  [sym_unary_expr] = "unary_expr",
  [sym_not_expr] = "not_expr",
  [sym_access_expr] = "access_expr",
  [sym_paren_expr] = "paren_expr",
  [sym_member_expr] = "member_expr",
  [sym_index_expr] = "index_expr",
  [sym_call_actuals] = "call_actuals",
  [sym_literal] = "literal",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_tuple_literal] = "tuple_literal",
  [sym_list_literal] = "list_literal",
  [sym_dict_literal] = "dict_literal",
  [sym_or_expr] = "or_expr",
  [sym_and_expr] = "and_expr",
  [sym_ne_expr] = "ne_expr",
  [sym_eq_expr] = "eq_expr",
  [sym_gte_expr] = "gte_expr",
  [sym_lte_expr] = "lte_expr",
  [sym_gt_expr] = "gt_expr",
  [sym_lt_expr] = "lt_expr",
  [sym_plus_expr] = "plus_expr",
  [sym_minus_expr] = "minus_expr",
  [sym_mod_expr] = "mod_expr",
  [sym_mul_expr] = "mul_expr",
  [sym_div_expr] = "div_expr",
  [sym_terminator] = "terminator",
  [sym_number] = "number",
  [sym_other_lit] = "other_lit",
  [sym_quoted_string] = "quoted_string",
  [aux_sym__quoted_string_content_double] = "_quoted_string_content_double",
  [aux_sym__quoted_string_content_single] = "_quoted_string_content_single",
  [sym_multiline_string] = "multiline_string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__statement_list_repeat1] = "_statement_list_repeat1",
  [aux_sym_assignment_statement_repeat1] = "assignment_statement_repeat1",
  [aux_sym_enum_statement_repeat1] = "enum_statement_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_formal_spec_repeat1] = "formal_spec_repeat1",
  [aux_sym_var_statement_repeat1] = "var_statement_repeat1",
  [aux_sym_base_type_spec_repeat1] = "base_type_spec_repeat1",
  [aux_sym_func_spec_repeat1] = "func_spec_repeat1",
  [aux_sym_access_expr_repeat1] = "access_expr_repeat1",
  [aux_sym_call_actuals_repeat1] = "call_actuals_repeat1",
  [aux_sym_dict_literal_repeat1] = "dict_literal_repeat1",
  [aux_sym_terminator_repeat1] = "terminator_repeat1",
  [aux_sym_other_lit_repeat1] = "other_lit_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elif] = anon_sym_elif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_Duration] = anon_sym_Duration,
  [anon_sym_IpAddr] = anon_sym_IpAddr,
  [anon_sym_CIDR] = anon_sym_CIDR,
  [anon_sym_Size] = anon_sym_Size,
  [anon_sym_Date] = anon_sym_Date,
  [anon_sym_Time] = anon_sym_Time,
  [anon_sym_DateType] = anon_sym_DateType,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_typespec] = anon_sym_typespec,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_tuple] = anon_sym_tuple,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_dict] = anon_sym_dict,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_False] = anon_sym_False,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_newline] = sym_newline,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_comment] = sym_comment,
  [sym_line_continuation] = sym_line_continuation,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [aux_sym_other_lit_token1] = aux_sym_other_lit_token1,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym__quoted_string_content_double_token1] = aux_sym__quoted_string_content_double_token1,
  [aux_sym__quoted_string_content_single_token1] = aux_sym__quoted_string_content_single_token1,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_block] = sym_block,
  [sym_section_declaration] = sym_section_declaration,
  [sym__statement_list] = sym__statement_list,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym_eq_op] = sym_eq_op,
  [sym_enum_statement] = sym_enum_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_elif_clause] = sym_elif_clause,
  [sym_else_clause] = sym_else_clause,
  [sym_for_statement] = sym_for_statement,
  [sym_function_declaration] = sym_function_declaration,
  [sym_formal_spec] = sym_formal_spec,
  [sym_param_spec] = sym_param_spec,
  [sym_var_decl_item] = sym_var_decl_item,
  [sym_var_statement] = sym_var_statement,
  [sym_base_type_spec] = sym_base_type_spec,
  [sym_type_spec] = sym_type_spec,
  [sym_type_spec_r] = sym_type_spec_r,
  [sym_func_spec] = sym_func_spec,
  [sym_expression] = sym_expression,
  [sym_unary_expr] = sym_unary_expr,
  [sym_not_expr] = sym_not_expr,
  [sym_access_expr] = sym_access_expr,
  [sym_paren_expr] = sym_paren_expr,
  [sym_member_expr] = sym_member_expr,
  [sym_index_expr] = sym_index_expr,
  [sym_call_actuals] = sym_call_actuals,
  [sym_literal] = sym_literal,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_tuple_literal] = sym_tuple_literal,
  [sym_list_literal] = sym_list_literal,
  [sym_dict_literal] = sym_dict_literal,
  [sym_or_expr] = sym_or_expr,
  [sym_and_expr] = sym_and_expr,
  [sym_ne_expr] = sym_ne_expr,
  [sym_eq_expr] = sym_eq_expr,
  [sym_gte_expr] = sym_gte_expr,
  [sym_lte_expr] = sym_lte_expr,
  [sym_gt_expr] = sym_gt_expr,
  [sym_lt_expr] = sym_lt_expr,
  [sym_plus_expr] = sym_plus_expr,
  [sym_minus_expr] = sym_minus_expr,
  [sym_mod_expr] = sym_mod_expr,
  [sym_mul_expr] = sym_mul_expr,
  [sym_div_expr] = sym_div_expr,
  [sym_terminator] = sym_terminator,
  [sym_number] = sym_number,
  [sym_other_lit] = sym_other_lit,
  [sym_quoted_string] = sym_quoted_string,
  [aux_sym__quoted_string_content_double] = aux_sym__quoted_string_content_double,
  [aux_sym__quoted_string_content_single] = aux_sym__quoted_string_content_single,
  [sym_multiline_string] = sym_multiline_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__statement_list_repeat1] = aux_sym__statement_list_repeat1,
  [aux_sym_assignment_statement_repeat1] = aux_sym_assignment_statement_repeat1,
  [aux_sym_enum_statement_repeat1] = aux_sym_enum_statement_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym_formal_spec_repeat1] = aux_sym_formal_spec_repeat1,
  [aux_sym_var_statement_repeat1] = aux_sym_var_statement_repeat1,
  [aux_sym_base_type_spec_repeat1] = aux_sym_base_type_spec_repeat1,
  [aux_sym_func_spec_repeat1] = aux_sym_func_spec_repeat1,
  [aux_sym_access_expr_repeat1] = aux_sym_access_expr_repeat1,
  [aux_sym_call_actuals_repeat1] = aux_sym_call_actuals_repeat1,
  [aux_sym_dict_literal_repeat1] = aux_sym_dict_literal_repeat1,
  [aux_sym_terminator_repeat1] = aux_sym_terminator_repeat1,
  [aux_sym_other_lit_repeat1] = aux_sym_other_lit_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Duration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IpAddr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CIDR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Size] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DateType] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typespec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tuple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dict] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_newline] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_other_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__quoted_string_content_double_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quoted_string_content_single_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_section_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_list] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_eq_op] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_elif_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_formal_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_param_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_var_decl_item] = {
    .visible = true,
    .named = true,
  },
  [sym_var_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_base_type_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_type_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_type_spec_r] = {
    .visible = true,
    .named = true,
  },
  [sym_func_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_not_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_access_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_paren_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_member_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_index_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_call_actuals] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_list_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_dict_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_or_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_and_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_ne_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_eq_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_gte_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_lte_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_gt_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_lt_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_plus_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_minus_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_mod_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_mul_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_div_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_terminator] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_other_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__quoted_string_content_double] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quoted_string_content_single] = {
    .visible = false,
    .named = false,
  },
  [sym_multiline_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__statement_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assignment_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_formal_spec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_var_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_base_type_spec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_func_spec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_access_expr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_actuals_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dict_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_terminator_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_other_lit_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alternative = 1,
  field_arguments = 2,
  field_body = 3,
  field_condition = 4,
  field_consequence = 5,
  field_name = 6,
  field_parameters = 7,
  field_section_declaration_name = 8,
  field_section_declaration_type = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_section_declaration_name] = "section_declaration_name",
  [field_section_declaration_type] = "section_declaration_type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 3},
  [6] = {.index = 10, .length = 1},
  [7] = {.index = 11, .length = 3},
  [8] = {.index = 14, .length = 3},
  [9] = {.index = 17, .length = 3},
  [10] = {.index = 20, .length = 4},
  [11] = {.index = 24, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_arguments, 1},
    {field_name, 0},
  [3] =
    {field_body, 1},
    {field_section_declaration_type, 0},
  [5] =
    {field_condition, 1},
    {field_consequence, 2},
  [7] =
    {field_body, 2},
    {field_section_declaration_name, 1},
    {field_section_declaration_type, 0},
  [10] =
    {field_alternative, 0},
  [11] =
    {field_alternative, 3},
    {field_condition, 1},
    {field_consequence, 2},
  [14] =
    {field_alternative, 3, .inherited = true},
    {field_condition, 1},
    {field_consequence, 2},
  [17] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [20] =
    {field_alternative, 3, .inherited = true},
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 2},
  [24] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 2,
  [10] = 7,
  [11] = 4,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 8,
  [17] = 12,
  [18] = 13,
  [19] = 19,
  [20] = 14,
  [21] = 5,
  [22] = 22,
  [23] = 15,
  [24] = 19,
  [25] = 25,
  [26] = 6,
  [27] = 3,
  [28] = 25,
  [29] = 22,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 30,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 37,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 39,
  [44] = 44,
  [45] = 45,
  [46] = 40,
  [47] = 32,
  [48] = 36,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 52,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 76,
  [78] = 78,
  [79] = 79,
  [80] = 79,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 83,
  [86] = 86,
  [87] = 87,
  [88] = 87,
  [89] = 89,
  [90] = 90,
  [91] = 90,
  [92] = 89,
  [93] = 86,
  [94] = 94,
  [95] = 95,
  [96] = 95,
  [97] = 84,
  [98] = 81,
  [99] = 82,
  [100] = 100,
  [101] = 101,
  [102] = 101,
  [103] = 100,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 142,
  [146] = 146,
  [147] = 146,
  [148] = 148,
  [149] = 68,
  [150] = 69,
  [151] = 67,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 70,
  [156] = 74,
  [157] = 73,
  [158] = 72,
  [159] = 71,
  [160] = 160,
  [161] = 75,
  [162] = 162,
  [163] = 163,
  [164] = 54,
  [165] = 165,
  [166] = 58,
  [167] = 132,
  [168] = 61,
  [169] = 62,
  [170] = 64,
  [171] = 60,
  [172] = 59,
  [173] = 57,
  [174] = 55,
  [175] = 56,
  [176] = 108,
  [177] = 63,
  [178] = 65,
  [179] = 179,
  [180] = 107,
  [181] = 117,
  [182] = 182,
  [183] = 183,
  [184] = 113,
  [185] = 185,
  [186] = 110,
  [187] = 187,
  [188] = 133,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 125,
  [193] = 193,
  [194] = 123,
  [195] = 105,
  [196] = 135,
  [197] = 197,
  [198] = 130,
  [199] = 120,
  [200] = 118,
  [201] = 122,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 134,
  [206] = 106,
  [207] = 137,
  [208] = 131,
  [209] = 138,
  [210] = 127,
  [211] = 126,
  [212] = 128,
  [213] = 115,
  [214] = 124,
  [215] = 104,
  [216] = 109,
  [217] = 112,
  [218] = 111,
  [219] = 114,
  [220] = 220,
  [221] = 129,
  [222] = 136,
  [223] = 116,
  [224] = 119,
  [225] = 121,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 231,
  [243] = 240,
  [244] = 244,
  [245] = 230,
  [246] = 233,
  [247] = 234,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 249,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 256,
  [267] = 267,
  [268] = 268,
  [269] = 263,
  [270] = 270,
  [271] = 262,
  [272] = 252,
  [273] = 257,
  [274] = 270,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 203,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 289,
  [299] = 290,
  [300] = 291,
  [301] = 295,
  [302] = 292,
  [303] = 303,
  [304] = 303,
  [305] = 305,
  [306] = 285,
  [307] = 307,
  [308] = 307,
  [309] = 309,
  [310] = 309,
  [311] = 311,
  [312] = 312,
  [313] = 312,
  [314] = 288,
  [315] = 315,
  [316] = 315,
  [317] = 317,
  [318] = 278,
  [319] = 319,
  [320] = 305,
  [321] = 321,
  [322] = 288,
  [323] = 323,
  [324] = 293,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 327,
  [330] = 317,
  [331] = 280,
  [332] = 281,
  [333] = 333,
  [334] = 294,
  [335] = 335,
  [336] = 336,
  [337] = 286,
  [338] = 338,
  [339] = 339,
  [340] = 296,
  [341] = 282,
  [342] = 319,
  [343] = 283,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 346,
  [349] = 349,
  [350] = 347,
  [351] = 351,
  [352] = 345,
  [353] = 237,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 359,
  [364] = 364,
  [365] = 361,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 358,
  [371] = 371,
  [372] = 336,
  [373] = 373,
  [374] = 374,
  [375] = 360,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 362,
  [381] = 381,
  [382] = 382,
  [383] = 379,
  [384] = 374,
  [385] = 385,
  [386] = 369,
  [387] = 387,
  [388] = 382,
  [389] = 389,
  [390] = 364,
  [391] = 391,
  [392] = 392,
  [393] = 381,
  [394] = 394,
  [395] = 371,
  [396] = 179,
  [397] = 367,
  [398] = 377,
  [399] = 399,
  [400] = 366,
  [401] = 394,
  [402] = 392,
  [403] = 391,
  [404] = 297,
  [405] = 405,
  [406] = 182,
  [407] = 407,
  [408] = 408,
  [409] = 378,
  [410] = 376,
};

static inline bool sym_escape_sequence_character_set_1(int32_t c) {
  return (c < 'b'
    ? (c < '/'
      ? (c < '\''
        ? c == '"'
        : c <= '\'')
      : (c <= '/' || c == '\\'))
    : (c <= 'b' || (c < 'r'
      ? (c < 'n'
        ? c == 'f'
        : c <= 'n')
      : (c <= 'r' || (c >= 't' && c <= 'u')))));
}

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(39);
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead == '%') ADVANCE(72);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(104);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == ';') ADVANCE(75);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(69);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == '`') ADVANCE(50);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(78);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '#') ADVANCE(114);
      if (lookahead == '\'') ADVANCE(103);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '#') ADVANCE(111);
      if (lookahead == '/') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(93);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(96);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '%') ADVANCE(72);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(68);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(122);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '%') ADVANCE(72);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(68);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == '`') ADVANCE(50);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead == '\'') ADVANCE(104);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(67);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == '`') ADVANCE(50);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '\'') ADVANCE(104);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '<') ADVANCE(70);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(22);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(122);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(121);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '\'') ADVANCE(103);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '&') ADVANCE(62);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(120);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(77);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '<') ADVANCE(91);
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(65);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(83);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(84);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 27:
      if (lookahead == '|') ADVANCE(61);
      END_STATE();
    case 28:
      if (lookahead == 0 ||
          lookahead == '\n') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 29:
      if (lookahead == 0 ||
          lookahead == '\n') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(1);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(105);
      END_STATE();
    case 30:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 31:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(83);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(84);
      END_STATE();
    case 33:
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(105);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 37:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ';') ADVANCE(75);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(122);
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead == '%') ADVANCE(72);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(104);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == ';') ADVANCE(75);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(69);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == '`') ADVANCE(50);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(54);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(65);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '>') ADVANCE(100);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(77);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(82);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(24);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(25);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(26);
      if (lookahead == '_') ADVANCE(82);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(79);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(90);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      if (lookahead == '"') ADVANCE(11);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      if (lookahead == '"') ADVANCE(93);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      if (lookahead == '\'') ADVANCE(15);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(77);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      if (lookahead == '>') ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(11);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(15);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(119);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_double_token1);
      if (lookahead == '#') ADVANCE(111);
      if (lookahead == '/') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(112);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_double_token1);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(112);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_double_token1);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(18);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_double_token1);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(18);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_double_token1);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_double_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead == '#') ADVANCE(114);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(119);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead == '*') ADVANCE(117);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(119);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == '/') ADVANCE(119);
      if (lookahead == '\n' ||
          lookahead == '\'') ADVANCE(18);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == '\n' ||
          lookahead == '\'') ADVANCE(18);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(122);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'C') ADVANCE(1);
      if (lookahead == 'D') ADVANCE(2);
      if (lookahead == 'F') ADVANCE(3);
      if (lookahead == 'I') ADVANCE(4);
      if (lookahead == 'S') ADVANCE(5);
      if (lookahead == 'T') ADVANCE(6);
      if (lookahead == 'a') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(8);
      if (lookahead == 'c') ADVANCE(9);
      if (lookahead == 'd') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(16);
      if (lookahead == 's') ADVANCE(17);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == 'v') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'I') ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == 'h') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(48);
      if (lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 20:
      if (lookahead == 'D') ADVANCE(52);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(56);
      END_STATE();
    case 25:
      if (lookahead == 'z') ADVANCE(57);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 52:
      if (lookahead == 'R') ADVANCE(82);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 64:
      if (lookahead == 'f') ADVANCE(93);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 66:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_CIDR);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_Date);
      if (lookahead == 'T') ADVANCE(107);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_Size);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_Time);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_dict);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 107:
      if (lookahead == 'y') ADVANCE(117);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(121);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_tuple);
      END_STATE();
    case 116:
      if (lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_IpAddr);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 125:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DateType);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_Duration);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_typespec);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 10},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 37},
  [150] = {.lex_state = 37},
  [151] = {.lex_state = 37},
  [152] = {.lex_state = 37},
  [153] = {.lex_state = 37},
  [154] = {.lex_state = 37},
  [155] = {.lex_state = 37},
  [156] = {.lex_state = 37},
  [157] = {.lex_state = 37},
  [158] = {.lex_state = 37},
  [159] = {.lex_state = 37},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 37},
  [162] = {.lex_state = 37},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 37},
  [165] = {.lex_state = 37},
  [166] = {.lex_state = 37},
  [167] = {.lex_state = 37},
  [168] = {.lex_state = 37},
  [169] = {.lex_state = 37},
  [170] = {.lex_state = 37},
  [171] = {.lex_state = 37},
  [172] = {.lex_state = 37},
  [173] = {.lex_state = 37},
  [174] = {.lex_state = 37},
  [175] = {.lex_state = 37},
  [176] = {.lex_state = 37},
  [177] = {.lex_state = 37},
  [178] = {.lex_state = 37},
  [179] = {.lex_state = 37},
  [180] = {.lex_state = 37},
  [181] = {.lex_state = 37},
  [182] = {.lex_state = 37},
  [183] = {.lex_state = 37},
  [184] = {.lex_state = 37},
  [185] = {.lex_state = 37},
  [186] = {.lex_state = 37},
  [187] = {.lex_state = 37},
  [188] = {.lex_state = 37},
  [189] = {.lex_state = 37},
  [190] = {.lex_state = 37},
  [191] = {.lex_state = 37},
  [192] = {.lex_state = 37},
  [193] = {.lex_state = 37},
  [194] = {.lex_state = 37},
  [195] = {.lex_state = 37},
  [196] = {.lex_state = 37},
  [197] = {.lex_state = 37},
  [198] = {.lex_state = 37},
  [199] = {.lex_state = 37},
  [200] = {.lex_state = 37},
  [201] = {.lex_state = 37},
  [202] = {.lex_state = 37},
  [203] = {.lex_state = 37},
  [204] = {.lex_state = 9},
  [205] = {.lex_state = 37},
  [206] = {.lex_state = 37},
  [207] = {.lex_state = 37},
  [208] = {.lex_state = 37},
  [209] = {.lex_state = 37},
  [210] = {.lex_state = 37},
  [211] = {.lex_state = 37},
  [212] = {.lex_state = 37},
  [213] = {.lex_state = 37},
  [214] = {.lex_state = 37},
  [215] = {.lex_state = 37},
  [216] = {.lex_state = 37},
  [217] = {.lex_state = 37},
  [218] = {.lex_state = 37},
  [219] = {.lex_state = 37},
  [220] = {.lex_state = 37},
  [221] = {.lex_state = 37},
  [222] = {.lex_state = 37},
  [223] = {.lex_state = 37},
  [224] = {.lex_state = 37},
  [225] = {.lex_state = 37},
  [226] = {.lex_state = 37},
  [227] = {.lex_state = 37},
  [228] = {.lex_state = 9},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 37},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 37},
  [236] = {.lex_state = 37},
  [237] = {.lex_state = 37},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 9},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 37},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 37},
  [249] = {.lex_state = 2},
  [250] = {.lex_state = 9},
  [251] = {.lex_state = 37},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 3},
  [255] = {.lex_state = 2},
  [256] = {.lex_state = 3},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 2},
  [260] = {.lex_state = 37},
  [261] = {.lex_state = 37},
  [262] = {.lex_state = 3},
  [263] = {.lex_state = 2},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 37},
  [266] = {.lex_state = 3},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 2},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 3},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 37},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 4},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 4},
  [283] = {.lex_state = 5},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 5},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 9},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 6},
  [297] = {.lex_state = 37},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 9},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 10},
  [304] = {.lex_state = 10},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 9},
  [308] = {.lex_state = 9},
  [309] = {.lex_state = 9},
  [310] = {.lex_state = 9},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 10},
  [313] = {.lex_state = 10},
  [314] = {.lex_state = 6},
  [315] = {.lex_state = 8},
  [316] = {.lex_state = 8},
  [317] = {.lex_state = 5},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 4},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 37},
  [327] = {.lex_state = 6},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 6},
  [330] = {.lex_state = 5},
  [331] = {.lex_state = 4},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 37},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 37},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 6},
  [341] = {.lex_state = 4},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 5},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 10},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 10},
  [363] = {.lex_state = 10},
  [364] = {.lex_state = 10},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 10},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 10},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 10},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 10},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_Duration] = ACTIONS(1),
    [anon_sym_IpAddr] = ACTIONS(1),
    [anon_sym_CIDR] = ACTIONS(1),
    [anon_sym_Size] = ACTIONS(1),
    [anon_sym_Date] = ACTIONS(1),
    [anon_sym_Time] = ACTIONS(1),
    [anon_sym_DateType] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_typespec] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_tuple] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_dict] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(405),
    [sym__statement] = STATE(232),
    [sym_section_declaration] = STATE(232),
    [sym_assignment_statement] = STATE(232),
    [sym_enum_statement] = STATE(232),
    [sym_if_statement] = STATE(232),
    [sym_for_statement] = STATE(232),
    [sym_function_declaration] = STATE(232),
    [sym_var_statement] = STATE(232),
    [sym_access_expr] = STATE(228),
    [sym_paren_expr] = STATE(67),
    [aux_sym_source_file_repeat1] = STATE(143),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_enum] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(13),
    [anon_sym_func] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_var] = ACTIONS(19),
    [anon_sym_DOLLAR] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(127), 1,
      sym_div_expr,
    STATE(294), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [121] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(107), 1,
      sym_minus_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(300), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [242] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(137), 1,
      sym_ne_expr,
    STATE(342), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [363] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(243), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [484] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(109), 1,
      sym_plus_expr,
    STATE(301), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [605] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(130), 1,
      sym_and_expr,
    STATE(257), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [726] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(129), 1,
      sym_eq_expr,
    STATE(315), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [847] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(210), 1,
      sym_div_expr,
    STATE(334), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [968] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(198), 1,
      sym_and_expr,
    STATE(273), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [1089] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(207), 1,
      sym_ne_expr,
    STATE(319), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [1210] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(121), 1,
      sym_gte_expr,
    STATE(313), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [1331] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(119), 1,
      sym_lte_expr,
    STATE(310), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [1452] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(116), 1,
      sym_gt_expr,
    STATE(308), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [1573] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(211), 1,
      sym_mul_expr,
    STATE(289), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [1694] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(221), 1,
      sym_eq_expr,
    STATE(316), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [1815] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(225), 1,
      sym_gte_expr,
    STATE(312), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [1936] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(224), 1,
      sym_lte_expr,
    STATE(309), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [2057] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(112), 1,
      sym_lt_expr,
    STATE(304), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [2178] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(223), 1,
      sym_gt_expr,
    STATE(307), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [2299] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(240), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [2420] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(245), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [2541] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(126), 1,
      sym_mul_expr,
    STATE(298), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [2662] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(217), 1,
      sym_lt_expr,
    STATE(303), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [2783] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(115), 1,
      sym_mod_expr,
    STATE(299), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [2904] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(216), 1,
      sym_plus_expr,
    STATE(295), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [3025] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(180), 1,
      sym_minus_expr,
    STATE(291), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [3146] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(213), 1,
      sym_mod_expr,
    STATE(290), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [3267] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(230), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [3388] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(246), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [3506] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(279), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [3624] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(285), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [3742] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(264), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [3860] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(233), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [3978] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      anon_sym_func,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(87), 1,
      anon_sym_typespec,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_tuple,
    ACTIONS(93), 1,
      anon_sym_list,
    ACTIONS(95), 1,
      anon_sym_dict,
    ACTIONS(99), 1,
      anon_sym_not,
    ACTIONS(101), 1,
      anon_sym_DOLLAR,
    ACTIONS(107), 1,
      sym_integer,
    ACTIONS(109), 1,
      sym_float,
    ACTIONS(111), 1,
      anon_sym_LT_LT,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(119), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(151), 1,
      sym_paren_expr,
    STATE(176), 1,
      sym_base_type_spec,
    STATE(183), 1,
      sym_expression,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(105), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(199), 2,
      sym_access_expr,
      sym_literal,
    STATE(205), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(206), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(83), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [4096] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(113), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [4214] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(281), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [4332] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(332), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [4450] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(242), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [4568] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(324), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [4686] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      anon_sym_func,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(87), 1,
      anon_sym_typespec,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_tuple,
    ACTIONS(93), 1,
      anon_sym_list,
    ACTIONS(95), 1,
      anon_sym_dict,
    ACTIONS(99), 1,
      anon_sym_not,
    ACTIONS(101), 1,
      anon_sym_DOLLAR,
    ACTIONS(107), 1,
      sym_integer,
    ACTIONS(109), 1,
      sym_float,
    ACTIONS(111), 1,
      anon_sym_LT_LT,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(119), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(151), 1,
      sym_paren_expr,
    STATE(176), 1,
      sym_base_type_spec,
    STATE(202), 1,
      sym_expression,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(105), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(199), 2,
      sym_access_expr,
      sym_literal,
    STATE(205), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(206), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(83), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [4804] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(229), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [4922] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(231), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [5040] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(338), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [5158] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(268), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [5276] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(293), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [5394] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(306), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [5512] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      anon_sym_func,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(87), 1,
      anon_sym_typespec,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_tuple,
    ACTIONS(93), 1,
      anon_sym_list,
    ACTIONS(95), 1,
      anon_sym_dict,
    ACTIONS(99), 1,
      anon_sym_not,
    ACTIONS(101), 1,
      anon_sym_DOLLAR,
    ACTIONS(107), 1,
      sym_integer,
    ACTIONS(109), 1,
      sym_float,
    ACTIONS(111), 1,
      anon_sym_LT_LT,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(119), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(151), 1,
      sym_paren_expr,
    STATE(176), 1,
      sym_base_type_spec,
    STATE(184), 1,
      sym_expression,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(105), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(199), 2,
      sym_access_expr,
      sym_literal,
    STATE(205), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(206), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(83), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [5630] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(258), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [5748] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(253), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [5866] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(47), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(277), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(120), 2,
      sym_access_expr,
      sym_literal,
    STATE(134), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [5984] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      anon_sym_func,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(87), 1,
      anon_sym_typespec,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_tuple,
    ACTIONS(93), 1,
      anon_sym_list,
    ACTIONS(95), 1,
      anon_sym_dict,
    ACTIONS(101), 1,
      anon_sym_DOLLAR,
    ACTIONS(107), 1,
      sym_integer,
    ACTIONS(109), 1,
      sym_float,
    ACTIONS(111), 1,
      anon_sym_LT_LT,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(119), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(151), 1,
      sym_paren_expr,
    STATE(176), 1,
      sym_base_type_spec,
    ACTIONS(103), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(105), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(186), 2,
      sym_access_expr,
      sym_literal,
    STATE(206), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(83), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [6087] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_func,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_typespec,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_dict,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(108), 1,
      sym_base_type_spec,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(110), 2,
      sym_access_expr,
      sym_literal,
    STATE(106), 10,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 13,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
  [6190] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(121), 38,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_func,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
      anon_sym_BQUOTE,
      anon_sym_typespec,
      anon_sym_RBRACK,
      anon_sym_tuple,
      anon_sym_list,
      anon_sym_dict,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [6243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(127), 38,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_func,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
      anon_sym_BQUOTE,
      anon_sym_typespec,
      anon_sym_RBRACK,
      anon_sym_tuple,
      anon_sym_list,
      anon_sym_dict,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [6293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(121), 38,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_func,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
      anon_sym_BQUOTE,
      anon_sym_typespec,
      anon_sym_RBRACK,
      anon_sym_tuple,
      anon_sym_list,
      anon_sym_dict,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [6343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(131), 38,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_func,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
      anon_sym_BQUOTE,
      anon_sym_typespec,
      anon_sym_RBRACK,
      anon_sym_tuple,
      anon_sym_list,
      anon_sym_dict,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [6393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(135), 38,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_func,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
      anon_sym_BQUOTE,
      anon_sym_typespec,
      anon_sym_RBRACK,
      anon_sym_tuple,
      anon_sym_list,
      anon_sym_dict,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [6443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(139), 38,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_func,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
      anon_sym_BQUOTE,
      anon_sym_typespec,
      anon_sym_RBRACK,
      anon_sym_tuple,
      anon_sym_list,
      anon_sym_dict,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [6493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(143), 38,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_func,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
      anon_sym_BQUOTE,
      anon_sym_typespec,
      anon_sym_RBRACK,
      anon_sym_tuple,
      anon_sym_list,
      anon_sym_dict,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [6543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(147), 38,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_func,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
      anon_sym_BQUOTE,
      anon_sym_typespec,
      anon_sym_RBRACK,
      anon_sym_tuple,
      anon_sym_list,
      anon_sym_dict,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [6593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(151), 38,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_func,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
      anon_sym_BQUOTE,
      anon_sym_typespec,
      anon_sym_RBRACK,
      anon_sym_tuple,
      anon_sym_list,
      anon_sym_dict,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [6643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(155), 38,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_func,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
      anon_sym_BQUOTE,
      anon_sym_typespec,
      anon_sym_RBRACK,
      anon_sym_tuple,
      anon_sym_list,
      anon_sym_dict,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [6693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(159), 38,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_func,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
      anon_sym_BQUOTE,
      anon_sym_typespec,
      anon_sym_RBRACK,
      anon_sym_tuple,
      anon_sym_list,
      anon_sym_dict,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [6743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(163), 38,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_func,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
      anon_sym_BQUOTE,
      anon_sym_typespec,
      anon_sym_RBRACK,
      anon_sym_tuple,
      anon_sym_list,
      anon_sym_dict,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [6793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 11,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOLLAR,
      sym_float,
      anon_sym_LT_LT,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(167), 27,
      anon_sym_func,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Date,
      anon_sym_Time,
      anon_sym_DateType,
      anon_sym_typespec,
      anon_sym_tuple,
      anon_sym_list,
      anon_sym_dict,
      anon_sym_not,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
      sym_integer,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [6839] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(179), 1,
      anon_sym_DOT,
    STATE(69), 4,
      sym_member_expr,
      sym_index_expr,
      sym_call_actuals,
      aux_sym_access_expr_repeat1,
    ACTIONS(173), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(171), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [6886] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(191), 1,
      anon_sym_DOT,
    STATE(68), 4,
      sym_member_expr,
      sym_index_expr,
      sym_call_actuals,
      aux_sym_access_expr_repeat1,
    ACTIONS(183), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(181), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [6933] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(179), 1,
      anon_sym_DOT,
    STATE(68), 4,
      sym_member_expr,
      sym_index_expr,
      sym_call_actuals,
      aux_sym_access_expr_repeat1,
    ACTIONS(196), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(194), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [6980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(198), 22,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [7015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(202), 22,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [7050] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(206), 22,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [7085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(210), 22,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [7120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(214), 22,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [7155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(218), 22,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [7190] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_Date,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(222), 1,
      anon_sym_func,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_typespec,
    ACTIONS(230), 1,
      anon_sym_RBRACK,
    ACTIONS(232), 1,
      anon_sym_tuple,
    ACTIONS(234), 1,
      anon_sym_list,
    ACTIONS(236), 1,
      anon_sym_dict,
    STATE(64), 2,
      sym_base_type_spec,
      sym_func_spec,
    STATE(78), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    ACTIONS(226), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [7243] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_Date,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(222), 1,
      anon_sym_func,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_typespec,
    ACTIONS(232), 1,
      anon_sym_tuple,
    ACTIONS(234), 1,
      anon_sym_list,
    ACTIONS(236), 1,
      anon_sym_dict,
    ACTIONS(238), 1,
      anon_sym_RBRACK,
    STATE(64), 2,
      sym_base_type_spec,
      sym_func_spec,
    STATE(78), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    ACTIONS(226), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [7296] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_func,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_Date,
    ACTIONS(252), 1,
      anon_sym_BQUOTE,
    ACTIONS(255), 1,
      anon_sym_typespec,
    ACTIONS(258), 1,
      anon_sym_RBRACK,
    ACTIONS(260), 1,
      anon_sym_tuple,
    ACTIONS(263), 1,
      anon_sym_list,
    ACTIONS(266), 1,
      anon_sym_dict,
    STATE(64), 2,
      sym_base_type_spec,
      sym_func_spec,
    STATE(78), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    ACTIONS(246), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [7349] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_Date,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(222), 1,
      anon_sym_func,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_typespec,
    ACTIONS(232), 1,
      anon_sym_tuple,
    ACTIONS(234), 1,
      anon_sym_list,
    ACTIONS(236), 1,
      anon_sym_dict,
    STATE(64), 2,
      sym_base_type_spec,
      sym_func_spec,
    STATE(77), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    ACTIONS(226), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [7399] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_Date,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(222), 1,
      anon_sym_func,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_typespec,
    ACTIONS(232), 1,
      anon_sym_tuple,
    ACTIONS(234), 1,
      anon_sym_list,
    ACTIONS(236), 1,
      anon_sym_dict,
    STATE(64), 2,
      sym_base_type_spec,
      sym_func_spec,
    STATE(76), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    ACTIONS(226), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [7449] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_Date,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(222), 1,
      anon_sym_func,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_typespec,
    ACTIONS(232), 1,
      anon_sym_tuple,
    ACTIONS(234), 1,
      anon_sym_list,
    ACTIONS(236), 1,
      anon_sym_dict,
    STATE(382), 1,
      sym_type_spec_r,
    STATE(64), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(226), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [7498] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_Date,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      anon_sym_func,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_typespec,
    ACTIONS(277), 1,
      anon_sym_tuple,
    ACTIONS(279), 1,
      anon_sym_list,
    ACTIONS(281), 1,
      anon_sym_dict,
    STATE(174), 1,
      sym_type_spec_r,
    STATE(170), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(273), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [7547] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_Date,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      anon_sym_func,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_typespec,
    ACTIONS(277), 1,
      anon_sym_tuple,
    ACTIONS(279), 1,
      anon_sym_list,
    ACTIONS(281), 1,
      anon_sym_dict,
    STATE(166), 1,
      sym_type_spec_r,
    STATE(170), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(273), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [7596] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_Date,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(222), 1,
      anon_sym_func,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_typespec,
    ACTIONS(232), 1,
      anon_sym_tuple,
    ACTIONS(234), 1,
      anon_sym_list,
    ACTIONS(236), 1,
      anon_sym_dict,
    STATE(403), 1,
      sym_type_spec_r,
    STATE(64), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(226), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [7645] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_Date,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(222), 1,
      anon_sym_func,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_typespec,
    ACTIONS(232), 1,
      anon_sym_tuple,
    ACTIONS(234), 1,
      anon_sym_list,
    ACTIONS(236), 1,
      anon_sym_dict,
    STATE(58), 1,
      sym_type_spec_r,
    STATE(64), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(226), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [7694] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_Date,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(222), 1,
      anon_sym_func,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_typespec,
    ACTIONS(232), 1,
      anon_sym_tuple,
    ACTIONS(234), 1,
      anon_sym_list,
    ACTIONS(236), 1,
      anon_sym_dict,
    STATE(252), 1,
      sym_type_spec_r,
    STATE(64), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(226), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [7743] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_Date,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(222), 1,
      anon_sym_func,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_typespec,
    ACTIONS(232), 1,
      anon_sym_tuple,
    ACTIONS(234), 1,
      anon_sym_list,
    ACTIONS(236), 1,
      anon_sym_dict,
    STATE(369), 1,
      sym_type_spec_r,
    STATE(64), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(226), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [7792] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_Date,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(222), 1,
      anon_sym_func,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_typespec,
    ACTIONS(232), 1,
      anon_sym_tuple,
    ACTIONS(234), 1,
      anon_sym_list,
    ACTIONS(236), 1,
      anon_sym_dict,
    STATE(386), 1,
      sym_type_spec_r,
    STATE(64), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(226), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [7841] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_Date,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(222), 1,
      anon_sym_func,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_typespec,
    ACTIONS(232), 1,
      anon_sym_tuple,
    ACTIONS(234), 1,
      anon_sym_list,
    ACTIONS(236), 1,
      anon_sym_dict,
    STATE(60), 1,
      sym_type_spec_r,
    STATE(64), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(226), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [7890] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_Date,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(222), 1,
      anon_sym_func,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_typespec,
    ACTIONS(232), 1,
      anon_sym_tuple,
    ACTIONS(234), 1,
      anon_sym_list,
    ACTIONS(236), 1,
      anon_sym_dict,
    STATE(57), 1,
      sym_type_spec_r,
    STATE(64), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(226), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [7939] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_Date,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      anon_sym_func,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_typespec,
    ACTIONS(277), 1,
      anon_sym_tuple,
    ACTIONS(279), 1,
      anon_sym_list,
    ACTIONS(281), 1,
      anon_sym_dict,
    STATE(173), 1,
      sym_type_spec_r,
    STATE(170), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(273), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [7988] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_Date,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      anon_sym_func,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_typespec,
    ACTIONS(277), 1,
      anon_sym_tuple,
    ACTIONS(279), 1,
      anon_sym_list,
    ACTIONS(281), 1,
      anon_sym_dict,
    STATE(171), 1,
      sym_type_spec_r,
    STATE(170), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(273), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [8037] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_Date,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(222), 1,
      anon_sym_func,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_typespec,
    ACTIONS(232), 1,
      anon_sym_tuple,
    ACTIONS(234), 1,
      anon_sym_list,
    ACTIONS(236), 1,
      anon_sym_dict,
    STATE(272), 1,
      sym_type_spec_r,
    STATE(64), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(226), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [8086] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_Date,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(222), 1,
      anon_sym_func,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_typespec,
    ACTIONS(232), 1,
      anon_sym_tuple,
    ACTIONS(234), 1,
      anon_sym_list,
    ACTIONS(236), 1,
      anon_sym_dict,
    STATE(339), 1,
      sym_type_spec_r,
    STATE(64), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(226), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [8135] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_Date,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(222), 1,
      anon_sym_func,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_typespec,
    ACTIONS(232), 1,
      anon_sym_tuple,
    ACTIONS(234), 1,
      anon_sym_list,
    ACTIONS(236), 1,
      anon_sym_dict,
    STATE(361), 1,
      sym_type_spec_r,
    STATE(64), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(226), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [8184] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_Date,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(222), 1,
      anon_sym_func,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_typespec,
    ACTIONS(232), 1,
      anon_sym_tuple,
    ACTIONS(234), 1,
      anon_sym_list,
    ACTIONS(236), 1,
      anon_sym_dict,
    STATE(365), 1,
      sym_type_spec_r,
    STATE(64), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(226), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [8233] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_Date,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(222), 1,
      anon_sym_func,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_typespec,
    ACTIONS(232), 1,
      anon_sym_tuple,
    ACTIONS(234), 1,
      anon_sym_list,
    ACTIONS(236), 1,
      anon_sym_dict,
    STATE(391), 1,
      sym_type_spec_r,
    STATE(64), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(226), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [8282] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_Date,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(222), 1,
      anon_sym_func,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_typespec,
    ACTIONS(232), 1,
      anon_sym_tuple,
    ACTIONS(234), 1,
      anon_sym_list,
    ACTIONS(236), 1,
      anon_sym_dict,
    STATE(388), 1,
      sym_type_spec_r,
    STATE(64), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(226), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [8331] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_Date,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(222), 1,
      anon_sym_func,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_typespec,
    ACTIONS(232), 1,
      anon_sym_tuple,
    ACTIONS(234), 1,
      anon_sym_list,
    ACTIONS(236), 1,
      anon_sym_dict,
    STATE(55), 1,
      sym_type_spec_r,
    STATE(64), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(226), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [8380] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_Date,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(222), 1,
      anon_sym_func,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_typespec,
    ACTIONS(232), 1,
      anon_sym_tuple,
    ACTIONS(234), 1,
      anon_sym_list,
    ACTIONS(236), 1,
      anon_sym_dict,
    STATE(358), 1,
      sym_type_spec_r,
    STATE(64), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(226), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [8429] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_Date,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(222), 1,
      anon_sym_func,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_typespec,
    ACTIONS(232), 1,
      anon_sym_tuple,
    ACTIONS(234), 1,
      anon_sym_list,
    ACTIONS(236), 1,
      anon_sym_dict,
    STATE(392), 1,
      sym_type_spec_r,
    STATE(64), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(226), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [8478] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_Date,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(222), 1,
      anon_sym_func,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_typespec,
    ACTIONS(232), 1,
      anon_sym_tuple,
    ACTIONS(234), 1,
      anon_sym_list,
    ACTIONS(236), 1,
      anon_sym_dict,
    STATE(402), 1,
      sym_type_spec_r,
    STATE(64), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(226), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [8527] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_Date,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(222), 1,
      anon_sym_func,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_typespec,
    ACTIONS(232), 1,
      anon_sym_tuple,
    ACTIONS(234), 1,
      anon_sym_list,
    ACTIONS(236), 1,
      anon_sym_dict,
    STATE(370), 1,
      sym_type_spec_r,
    STATE(64), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(226), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [8576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(283), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [8606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(287), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [8636] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(291), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [8666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(295), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [8696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(299), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [8726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(303), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [8756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(307), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [8786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(311), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [8816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(315), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [8846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(319), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [8876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(323), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [8906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(327), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [8936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(331), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [8966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(335), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [8996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(339), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [9026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(343), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [9056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(347), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [9086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(351), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [9116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(355), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [9146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(359), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [9176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(363), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [9206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(367), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [9236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(371), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [9266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(375), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [9296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(379), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [9326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(383), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [9356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(387), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [9386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(391), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [9416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(395), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [9446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(399), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [9476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(403), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [9506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(407), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [9536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(411), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [9566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(415), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [9596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(419), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_to,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [9626] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_Date,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(275), 1,
      anon_sym_typespec,
    ACTIONS(277), 1,
      anon_sym_tuple,
    ACTIONS(279), 1,
      anon_sym_list,
    ACTIONS(281), 1,
      anon_sym_dict,
    ACTIONS(423), 1,
      anon_sym_func,
    STATE(176), 1,
      sym_base_type_spec,
    STATE(248), 1,
      sym_type_spec,
    ACTIONS(273), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9671] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_Date,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(275), 1,
      anon_sym_typespec,
    ACTIONS(277), 1,
      anon_sym_tuple,
    ACTIONS(279), 1,
      anon_sym_list,
    ACTIONS(281), 1,
      anon_sym_dict,
    ACTIONS(423), 1,
      anon_sym_func,
    STATE(176), 1,
      sym_base_type_spec,
    STATE(236), 1,
      sym_type_spec,
    ACTIONS(273), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9716] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_Date,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(228), 1,
      anon_sym_typespec,
    ACTIONS(232), 1,
      anon_sym_tuple,
    ACTIONS(234), 1,
      anon_sym_list,
    ACTIONS(236), 1,
      anon_sym_dict,
    ACTIONS(425), 1,
      anon_sym_func,
    STATE(108), 1,
      sym_base_type_spec,
    STATE(344), 1,
      sym_type_spec,
    ACTIONS(226), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9761] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(173), 1,
      anon_sym_COLON,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(427), 1,
      sym_identifier,
    ACTIONS(429), 1,
      anon_sym_LBRACE,
    STATE(336), 1,
      sym_block,
    STATE(352), 2,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(171), 3,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
    STATE(69), 4,
      sym_member_expr,
      sym_index_expr,
      sym_call_actuals,
      aux_sym_access_expr_repeat1,
  [9813] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_enum,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_for,
    ACTIONS(15), 1,
      anon_sym_func,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_var,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(431), 1,
      ts_builtin_sym_end,
    STATE(67), 1,
      sym_paren_expr,
    STATE(144), 1,
      aux_sym_source_file_repeat1,
    STATE(228), 1,
      sym_access_expr,
    STATE(235), 8,
      sym__statement,
      sym_section_declaration,
      sym_assignment_statement,
      sym_enum_statement,
      sym_if_statement,
      sym_for_statement,
      sym_function_declaration,
      sym_var_statement,
  [9863] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      ts_builtin_sym_end,
    ACTIONS(435), 1,
      sym_identifier,
    ACTIONS(438), 1,
      anon_sym_enum,
    ACTIONS(441), 1,
      anon_sym_if,
    ACTIONS(444), 1,
      anon_sym_for,
    ACTIONS(447), 1,
      anon_sym_func,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    ACTIONS(453), 1,
      anon_sym_var,
    ACTIONS(456), 1,
      anon_sym_DOLLAR,
    STATE(67), 1,
      sym_paren_expr,
    STATE(144), 1,
      aux_sym_source_file_repeat1,
    STATE(228), 1,
      sym_access_expr,
    STATE(251), 8,
      sym__statement,
      sym_section_declaration,
      sym_assignment_statement,
      sym_enum_statement,
      sym_if_statement,
      sym_for_statement,
      sym_function_declaration,
      sym_var_statement,
  [9913] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(173), 1,
      anon_sym_COLON,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(459), 1,
      sym_identifier,
    ACTIONS(461), 1,
      anon_sym_LBRACE,
    STATE(372), 1,
      sym_block,
    STATE(345), 2,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(171), 3,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
    STATE(69), 4,
      sym_member_expr,
      sym_index_expr,
      sym_call_actuals,
      aux_sym_access_expr_repeat1,
  [9965] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_enum,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_var,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(465), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(228), 1,
      sym_access_expr,
    STATE(395), 2,
      sym_section_declaration,
      sym__statement_list,
    STATE(190), 6,
      sym__statement,
      sym_assignment_statement,
      sym_enum_statement,
      sym_if_statement,
      sym_for_statement,
      sym_var_statement,
  [10011] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_enum,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_var,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(467), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_paren_expr,
    STATE(228), 1,
      sym_access_expr,
    STATE(371), 2,
      sym_section_declaration,
      sym__statement_list,
    STATE(190), 6,
      sym__statement,
      sym_assignment_statement,
      sym_enum_statement,
      sym_if_statement,
      sym_for_statement,
      sym_var_statement,
  [10057] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_enum,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_var,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(67), 1,
      sym_paren_expr,
    STATE(228), 1,
      sym_access_expr,
    STATE(326), 6,
      sym__statement,
      sym_assignment_statement,
      sym_enum_statement,
      sym_if_statement,
      sym_for_statement,
      sym_var_statement,
  [10096] = 7,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(472), 1,
      anon_sym_LBRACK,
    ACTIONS(475), 1,
      anon_sym_DOT,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(181), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(183), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
    STATE(149), 4,
      sym_member_expr,
      sym_index_expr,
      sym_call_actuals,
      aux_sym_access_expr_repeat1,
  [10125] = 7,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_LPAREN,
    ACTIONS(482), 1,
      anon_sym_LBRACK,
    ACTIONS(484), 1,
      anon_sym_DOT,
    ACTIONS(194), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(196), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
    STATE(149), 4,
      sym_member_expr,
      sym_index_expr,
      sym_call_actuals,
      aux_sym_access_expr_repeat1,
  [10154] = 7,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_LPAREN,
    ACTIONS(482), 1,
      anon_sym_LBRACK,
    ACTIONS(484), 1,
      anon_sym_DOT,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(173), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
    STATE(150), 4,
      sym_member_expr,
      sym_index_expr,
      sym_call_actuals,
      aux_sym_access_expr_repeat1,
  [10183] = 5,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(486), 1,
      ts_builtin_sym_end,
    ACTIONS(490), 1,
      sym_newline,
    STATE(152), 1,
      aux_sym_terminator_repeat1,
    ACTIONS(488), 8,
      anon_sym_enum,
      anon_sym_if,
      anon_sym_for,
      anon_sym_func,
      anon_sym_LPAREN,
      anon_sym_var,
      anon_sym_DOLLAR,
      sym_identifier,
  [10206] = 5,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(493), 1,
      ts_builtin_sym_end,
    ACTIONS(497), 1,
      sym_newline,
    STATE(152), 1,
      aux_sym_terminator_repeat1,
    ACTIONS(495), 8,
      anon_sym_enum,
      anon_sym_if,
      anon_sym_for,
      anon_sym_func,
      anon_sym_LPAREN,
      anon_sym_var,
      anon_sym_DOLLAR,
      sym_identifier,
  [10229] = 8,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_elif,
    ACTIONS(505), 1,
      anon_sym_else,
    STATE(162), 1,
      aux_sym_if_statement_repeat1,
    STATE(187), 1,
      sym_elif_clause,
    STATE(260), 1,
      sym_else_clause,
    ACTIONS(499), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(501), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [10256] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(200), 7,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [10273] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(214), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(216), 7,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [10290] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(210), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(212), 7,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [10307] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(206), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(208), 7,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [10324] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(202), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(204), 7,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [10341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
    ACTIONS(495), 6,
      anon_sym_enum,
      anon_sym_if,
      anon_sym_for,
      anon_sym_func,
      anon_sym_var,
      sym_identifier,
  [10358] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(218), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(220), 7,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [10375] = 8,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_elif,
    ACTIONS(505), 1,
      anon_sym_else,
    STATE(165), 1,
      aux_sym_if_statement_repeat1,
    STATE(187), 1,
      sym_elif_clause,
    STATE(276), 1,
      sym_else_clause,
    ACTIONS(507), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(509), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [10402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
    ACTIONS(511), 6,
      anon_sym_enum,
      anon_sym_if,
      anon_sym_for,
      anon_sym_func,
      anon_sym_var,
      sym_identifier,
  [10419] = 4,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(123), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [10437] = 6,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_elif,
    STATE(165), 1,
      aux_sym_if_statement_repeat1,
    STATE(187), 1,
      sym_elif_clause,
    ACTIONS(515), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(517), 3,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_SEMI,
  [10459] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(137), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [10474] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(395), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(397), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [10489] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(149), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [10504] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(153), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [10519] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(161), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [10534] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(145), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [10549] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(141), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [10564] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(133), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [10579] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(129), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [10594] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(123), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [10609] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(299), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(301), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [10624] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(157), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [10639] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(165), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [10654] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(522), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(524), 4,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_SEMI,
  [10668] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(295), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(297), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [10682] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(335), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(337), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [10696] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(526), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(528), 4,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_SEMI,
  [10710] = 4,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(530), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(532), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(534), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10726] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(319), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(321), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [10740] = 7,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_RBRACE,
    ACTIONS(538), 1,
      sym_newline,
    ACTIONS(541), 1,
      anon_sym_SEMI,
    STATE(148), 1,
      sym_terminator,
    STATE(153), 1,
      aux_sym_terminator_repeat1,
    STATE(185), 1,
      aux_sym__statement_list_repeat1,
  [10762] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(307), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(309), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [10776] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(544), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(546), 4,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_SEMI,
  [10790] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(399), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(401), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [10804] = 5,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    STATE(220), 1,
      aux_sym_var_statement_repeat1,
    ACTIONS(548), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(550), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [10822] = 7,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_RBRACE,
    ACTIONS(556), 1,
      sym_newline,
    ACTIONS(558), 1,
      anon_sym_SEMI,
    STATE(148), 1,
      sym_terminator,
    STATE(153), 1,
      aux_sym_terminator_repeat1,
    STATE(191), 1,
      aux_sym__statement_list_repeat1,
  [10844] = 7,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(556), 1,
      sym_newline,
    ACTIONS(558), 1,
      anon_sym_SEMI,
    ACTIONS(560), 1,
      anon_sym_RBRACE,
    STATE(148), 1,
      sym_terminator,
    STATE(153), 1,
      aux_sym_terminator_repeat1,
    STATE(185), 1,
      aux_sym__statement_list_repeat1,
  [10866] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(367), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(369), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [10880] = 5,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym_var_statement_repeat1,
    ACTIONS(562), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(564), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [10898] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(359), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(361), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [10912] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(287), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(289), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [10926] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(407), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(409), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [10940] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(569), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(571), 4,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_SEMI,
  [10954] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(387), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(389), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [10968] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(347), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(349), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [10982] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(339), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(341), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [10996] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(355), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(357), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [11010] = 4,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(534), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(573), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(575), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [11026] = 5,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_enum_statement_repeat1,
    ACTIONS(577), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(579), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [11044] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_COMMA,
    ACTIONS(588), 1,
      anon_sym_COLON,
    STATE(35), 1,
      sym_eq_op,
    STATE(239), 1,
      aux_sym_assignment_statement_repeat1,
    ACTIONS(586), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [11064] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(403), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(405), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [11078] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(291), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(293), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [11092] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(415), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(417), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [11106] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(391), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(393), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [11120] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(419), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(421), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [11134] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(375), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(377), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [11148] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(371), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(373), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [11162] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(379), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(381), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [11176] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(327), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(329), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [11190] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(363), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(365), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [11204] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(283), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(285), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [11218] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(303), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(305), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [11232] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(315), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(317), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [11246] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(311), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(313), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [11260] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(323), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(325), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [11274] = 5,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym_var_statement_repeat1,
    ACTIONS(590), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(592), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [11292] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(383), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(385), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [11306] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(411), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(413), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [11320] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(331), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(333), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [11334] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(343), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(345), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [11348] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(351), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(353), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
  [11362] = 5,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      aux_sym_enum_statement_repeat1,
    ACTIONS(594), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(596), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [11380] = 5,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_enum_statement_repeat1,
    ACTIONS(600), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(602), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [11398] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_COMMA,
    ACTIONS(588), 1,
      anon_sym_COLON,
    STATE(41), 1,
      sym_eq_op,
    STATE(204), 1,
      aux_sym_assignment_statement_repeat1,
    ACTIONS(586), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [11418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(604), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [11431] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(610), 1,
      anon_sym_RPAREN,
    STATE(292), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11448] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11465] = 6,
    ACTIONS(431), 1,
      ts_builtin_sym_end,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(556), 1,
      sym_newline,
    ACTIONS(558), 1,
      anon_sym_SEMI,
    STATE(153), 1,
      aux_sym_terminator_repeat1,
    STATE(163), 1,
      sym_terminator,
  [11484] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_RBRACE,
    ACTIONS(616), 1,
      anon_sym_COMMA,
    STATE(337), 1,
      aux_sym_dict_literal_repeat1,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11501] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_LPAREN,
    STATE(151), 1,
      sym_paren_expr,
    STATE(208), 1,
      sym_access_expr,
    ACTIONS(101), 2,
      anon_sym_DOLLAR,
      sym_identifier,
  [11518] = 6,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(556), 1,
      sym_newline,
    ACTIONS(558), 1,
      anon_sym_SEMI,
    ACTIONS(620), 1,
      ts_builtin_sym_end,
    STATE(153), 1,
      aux_sym_terminator_repeat1,
    STATE(163), 1,
      sym_terminator,
  [11537] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(622), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(624), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11550] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(577), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(579), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11563] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym_identifier,
    ACTIONS(628), 1,
      anon_sym_COMMA,
    ACTIONS(630), 1,
      anon_sym_RPAREN,
    STATE(321), 1,
      sym_param_spec,
    STATE(328), 1,
      aux_sym_formal_spec_repeat1,
  [11582] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      anon_sym_COLON,
    STATE(239), 1,
      aux_sym_assignment_statement_repeat1,
    ACTIONS(635), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [11599] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(639), 1,
      anon_sym_RBRACK,
    STATE(278), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11616] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym_paren_expr,
    STATE(250), 1,
      sym_access_expr,
    ACTIONS(21), 2,
      anon_sym_DOLLAR,
      sym_identifier,
  [11633] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
    STATE(320), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11650] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(643), 1,
      anon_sym_RBRACK,
    STATE(318), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11667] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(562), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(564), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11680] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(645), 1,
      anon_sym_RPAREN,
    STATE(302), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11697] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_COMMA,
    ACTIONS(647), 1,
      anon_sym_RBRACE,
    STATE(286), 1,
      aux_sym_dict_literal_repeat1,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11714] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym_paren_expr,
    STATE(131), 1,
      sym_access_expr,
    ACTIONS(21), 2,
      anon_sym_DOLLAR,
      sym_identifier,
  [11731] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(649), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(651), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11744] = 4,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_SQUOTE,
    STATE(255), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(655), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [11758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_COLON,
    ACTIONS(635), 3,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [11770] = 5,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(556), 1,
      sym_newline,
    ACTIONS(558), 1,
      anon_sym_SEMI,
    STATE(153), 1,
      aux_sym_terminator_repeat1,
    STATE(163), 1,
      sym_terminator,
  [11786] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_COMMA,
    ACTIONS(659), 1,
      anon_sym_RPAREN,
    ACTIONS(661), 1,
      anon_sym_STAR,
    STATE(270), 1,
      aux_sym_func_spec_repeat1,
  [11802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_LBRACE,
    STATE(197), 1,
      sym_block,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11816] = 5,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_DQUOTE,
    ACTIONS(665), 1,
      sym_escape_sequence,
    ACTIONS(668), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(254), 1,
      aux_sym__quoted_string_content_double,
  [11832] = 4,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_SQUOTE,
    STATE(255), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(673), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [11846] = 5,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      sym_escape_sequence,
    ACTIONS(680), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(254), 1,
      aux_sym__quoted_string_content_double,
  [11862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(682), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
  [11874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(684), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [11886] = 4,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_SQUOTE,
    STATE(255), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(655), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [11900] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(686), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(688), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [11912] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(690), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(692), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [11924] = 5,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_DQUOTE,
    ACTIONS(696), 1,
      sym_escape_sequence,
    ACTIONS(698), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(266), 1,
      aux_sym__quoted_string_content_double,
  [11940] = 4,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_SQUOTE,
    STATE(249), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(700), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [11954] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_LBRACE,
    STATE(261), 1,
      sym_block,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11968] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(702), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(704), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [11980] = 5,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      sym_escape_sequence,
    ACTIONS(680), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(254), 1,
      aux_sym__quoted_string_content_double,
  [11996] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym_func_spec_repeat1,
    ACTIONS(709), 2,
      anon_sym_RPAREN,
      anon_sym_STAR,
  [12010] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_LBRACE,
    STATE(154), 1,
      sym_block,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12024] = 4,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_SQUOTE,
    STATE(259), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(713), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [12038] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_COMMA,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
    ACTIONS(717), 1,
      anon_sym_STAR,
    STATE(267), 1,
      aux_sym_func_spec_repeat1,
  [12054] = 5,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_DQUOTE,
    ACTIONS(719), 1,
      sym_escape_sequence,
    ACTIONS(721), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(256), 1,
      aux_sym__quoted_string_content_double,
  [12070] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_COMMA,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
    ACTIONS(725), 1,
      anon_sym_STAR,
    STATE(274), 1,
      aux_sym_func_spec_repeat1,
  [12086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(727), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
  [12098] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_COMMA,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
    ACTIONS(731), 1,
      anon_sym_STAR,
    STATE(267), 1,
      aux_sym_func_spec_repeat1,
  [12114] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_COMMA,
    STATE(275), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(604), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [12128] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(736), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(738), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [12140] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_LBRACE,
    STATE(265), 1,
      sym_block,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12154] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(740), 1,
      anon_sym_RBRACK,
    STATE(275), 1,
      aux_sym_call_actuals_repeat1,
  [12167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_to,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12178] = 4,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(744), 1,
      aux_sym_other_lit_token1,
    ACTIONS(746), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(282), 1,
      aux_sym_other_lit_repeat1,
  [12191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12202] = 4,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(748), 1,
      aux_sym_other_lit_token1,
    ACTIONS(750), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(322), 1,
      aux_sym_other_lit_repeat1,
  [12215] = 4,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(752), 1,
      aux_sym_other_lit_token1,
    STATE(288), 1,
      aux_sym_other_lit_repeat1,
  [12228] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_COMMA,
    ACTIONS(756), 1,
      anon_sym_COLON,
    STATE(311), 1,
      aux_sym_enum_statement_repeat1,
  [12241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_COLON,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12252] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_COMMA,
    ACTIONS(760), 1,
      anon_sym_RBRACE,
    STATE(335), 1,
      aux_sym_dict_literal_repeat1,
  [12265] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_COLON,
    ACTIONS(762), 1,
      anon_sym_COMMA,
    STATE(287), 1,
      aux_sym_enum_statement_repeat1,
  [12278] = 4,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(765), 1,
      aux_sym_other_lit_token1,
    ACTIONS(768), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(288), 1,
      aux_sym_other_lit_repeat1,
  [12291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_STAR,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_PERCENT,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_DASH,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12324] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
    STATE(275), 1,
      aux_sym_call_actuals_repeat1,
  [12337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_RBRACK,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_SLASH,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_PLUS,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12370] = 4,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(784), 1,
      aux_sym_other_lit_token1,
    ACTIONS(786), 1,
      anon_sym_GT_GT,
    STATE(314), 1,
      aux_sym_other_lit_repeat1,
  [12383] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_SEMI,
    ACTIONS(788), 2,
      ts_builtin_sym_end,
      sym_newline,
  [12394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_STAR,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_PERCENT,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_DASH,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_PLUS,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(800), 1,
      anon_sym_RPAREN,
    STATE(275), 1,
      aux_sym_call_actuals_repeat1,
  [12451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_LT,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12462] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_LT,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12473] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(806), 1,
      anon_sym_RPAREN,
    STATE(275), 1,
      aux_sym_call_actuals_repeat1,
  [12486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_COLON,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_GT,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_GT,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_LT_EQ,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_LT_EQ,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12541] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_COMMA,
    ACTIONS(818), 1,
      anon_sym_COLON,
    STATE(287), 1,
      aux_sym_enum_statement_repeat1,
  [12554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_GT_EQ,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_GT_EQ,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12576] = 4,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_GT_GT,
    ACTIONS(824), 1,
      aux_sym_other_lit_token1,
    STATE(314), 1,
      aux_sym_other_lit_repeat1,
  [12589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_EQ_EQ,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_EQ_EQ,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12611] = 4,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(831), 1,
      aux_sym_other_lit_token1,
    STATE(283), 1,
      aux_sym_other_lit_repeat1,
  [12624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(833), 1,
      anon_sym_RBRACK,
    STATE(275), 1,
      aux_sym_call_actuals_repeat1,
  [12637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_BANG_EQ,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12648] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(837), 1,
      anon_sym_RPAREN,
    STATE(275), 1,
      aux_sym_call_actuals_repeat1,
  [12661] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_COMMA,
    ACTIONS(839), 1,
      anon_sym_RPAREN,
    STATE(323), 1,
      aux_sym_formal_spec_repeat1,
  [12674] = 4,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(841), 1,
      aux_sym_other_lit_token1,
    STATE(322), 1,
      aux_sym_other_lit_repeat1,
  [12687] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_COMMA,
    ACTIONS(844), 1,
      anon_sym_RPAREN,
    STATE(325), 1,
      aux_sym_formal_spec_repeat1,
  [12700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_RBRACK,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12711] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(851), 1,
      anon_sym_RPAREN,
    STATE(325), 1,
      aux_sym_formal_spec_repeat1,
  [12724] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(853), 1,
      sym_newline,
    ACTIONS(536), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [12735] = 4,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(855), 1,
      aux_sym_other_lit_token1,
    ACTIONS(857), 1,
      anon_sym_GT_GT,
    STATE(340), 1,
      aux_sym_other_lit_repeat1,
  [12748] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_COMMA,
    ACTIONS(839), 1,
      anon_sym_RPAREN,
    STATE(325), 1,
      aux_sym_formal_spec_repeat1,
  [12761] = 4,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(859), 1,
      aux_sym_other_lit_token1,
    ACTIONS(861), 1,
      anon_sym_GT_GT,
    STATE(296), 1,
      aux_sym_other_lit_repeat1,
  [12774] = 4,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(863), 1,
      aux_sym_other_lit_token1,
    ACTIONS(865), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(343), 1,
      aux_sym_other_lit_repeat1,
  [12787] = 4,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(867), 1,
      aux_sym_other_lit_token1,
    STATE(341), 1,
      aux_sym_other_lit_repeat1,
  [12800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12811] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_SEMI,
    ACTIONS(869), 2,
      ts_builtin_sym_end,
      sym_newline,
  [12822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_SLASH,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12833] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_RBRACE,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    STATE(335), 1,
      aux_sym_dict_literal_repeat1,
  [12846] = 3,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_SEMI,
    ACTIONS(880), 2,
      ts_builtin_sym_end,
      sym_newline,
  [12857] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_COMMA,
    ACTIONS(884), 1,
      anon_sym_RBRACE,
    STATE(335), 1,
      aux_sym_dict_literal_repeat1,
  [12870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_COLON,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
  [12890] = 4,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(784), 1,
      aux_sym_other_lit_token1,
    ACTIONS(888), 1,
      anon_sym_GT_GT,
    STATE(314), 1,
      aux_sym_other_lit_repeat1,
  [12903] = 4,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(748), 1,
      aux_sym_other_lit_token1,
    ACTIONS(890), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(322), 1,
      aux_sym_other_lit_repeat1,
  [12916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_BANG_EQ,
    ACTIONS(606), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12927] = 4,
    ACTIONS(478), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym_other_lit_token1,
    ACTIONS(890), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(288), 1,
      aux_sym_other_lit_repeat1,
  [12940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12948] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_LBRACE,
    STATE(404), 1,
      sym_block,
  [12958] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    STATE(167), 1,
      sym_func_spec,
  [12968] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    STATE(178), 1,
      sym_func_spec,
  [12978] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    STATE(132), 1,
      sym_func_spec,
  [12988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym_identifier,
    STATE(354), 1,
      sym_param_spec,
  [12998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      sym_func_spec,
  [13008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      sym_identifier,
    STATE(244), 1,
      sym_var_decl_item,
  [13018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_LBRACE,
    STATE(297), 1,
      sym_block,
  [13028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [13036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_LBRACE,
    STATE(333), 1,
      sym_block,
  [13054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_LPAREN,
    STATE(355), 1,
      sym_formal_spec,
  [13064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      sym_identifier,
    STATE(189), 1,
      sym_var_decl_item,
  [13074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_RBRACK,
  [13081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_DASH_GT,
  [13088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      sym_identifier,
  [13095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_RBRACK,
  [13102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_DASH_GT,
  [13109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_DASH_GT,
  [13116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      anon_sym_DASH_GT,
  [13123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_RBRACK,
  [13130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_DASH_GT,
  [13137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_RBRACK,
  [13144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_from,
  [13151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      anon_sym_RPAREN,
  [13158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_RBRACK,
  [13165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      anon_sym_RBRACE,
  [13172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_RBRACE,
  [13179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_LBRACE,
  [13186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      sym_identifier,
  [13193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      sym_identifier,
  [13200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_LBRACK,
  [13207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_LBRACK,
  [13214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 1,
      anon_sym_LBRACK,
  [13221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      sym_identifier,
  [13228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_DASH_GT,
  [13235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      sym_identifier,
  [13242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 1,
      anon_sym_RPAREN,
  [13249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      sym_identifier,
  [13256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      sym_identifier,
  [13263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_LBRACE,
  [13270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      anon_sym_RPAREN,
  [13277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 1,
      anon_sym_COLON,
  [13284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_RPAREN,
  [13291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 1,
      anon_sym_LBRACE,
  [13298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 1,
      anon_sym_DASH_GT,
  [13305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_COMMA,
  [13312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_COMMA,
  [13319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 1,
      sym_identifier,
  [13326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      anon_sym_BQUOTE,
  [13333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_RBRACE,
  [13340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_RBRACE,
  [13347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_RBRACK,
  [13354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 1,
      anon_sym_LBRACK,
  [13361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 1,
      sym_identifier,
  [13368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(976), 1,
      anon_sym_DASH_GT,
  [13375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 1,
      anon_sym_BQUOTE,
  [13382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_COMMA,
  [13389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_COMMA,
  [13396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_RBRACE,
  [13403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 1,
      ts_builtin_sym_end,
  [13410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_RBRACE,
  [13417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 1,
      sym_identifier,
  [13424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 1,
      sym_identifier,
  [13431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 1,
      anon_sym_LBRACK,
  [13438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_LBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 121,
  [SMALL_STATE(4)] = 242,
  [SMALL_STATE(5)] = 363,
  [SMALL_STATE(6)] = 484,
  [SMALL_STATE(7)] = 605,
  [SMALL_STATE(8)] = 726,
  [SMALL_STATE(9)] = 847,
  [SMALL_STATE(10)] = 968,
  [SMALL_STATE(11)] = 1089,
  [SMALL_STATE(12)] = 1210,
  [SMALL_STATE(13)] = 1331,
  [SMALL_STATE(14)] = 1452,
  [SMALL_STATE(15)] = 1573,
  [SMALL_STATE(16)] = 1694,
  [SMALL_STATE(17)] = 1815,
  [SMALL_STATE(18)] = 1936,
  [SMALL_STATE(19)] = 2057,
  [SMALL_STATE(20)] = 2178,
  [SMALL_STATE(21)] = 2299,
  [SMALL_STATE(22)] = 2420,
  [SMALL_STATE(23)] = 2541,
  [SMALL_STATE(24)] = 2662,
  [SMALL_STATE(25)] = 2783,
  [SMALL_STATE(26)] = 2904,
  [SMALL_STATE(27)] = 3025,
  [SMALL_STATE(28)] = 3146,
  [SMALL_STATE(29)] = 3267,
  [SMALL_STATE(30)] = 3388,
  [SMALL_STATE(31)] = 3506,
  [SMALL_STATE(32)] = 3624,
  [SMALL_STATE(33)] = 3742,
  [SMALL_STATE(34)] = 3860,
  [SMALL_STATE(35)] = 3978,
  [SMALL_STATE(36)] = 4096,
  [SMALL_STATE(37)] = 4214,
  [SMALL_STATE(38)] = 4332,
  [SMALL_STATE(39)] = 4450,
  [SMALL_STATE(40)] = 4568,
  [SMALL_STATE(41)] = 4686,
  [SMALL_STATE(42)] = 4804,
  [SMALL_STATE(43)] = 4922,
  [SMALL_STATE(44)] = 5040,
  [SMALL_STATE(45)] = 5158,
  [SMALL_STATE(46)] = 5276,
  [SMALL_STATE(47)] = 5394,
  [SMALL_STATE(48)] = 5512,
  [SMALL_STATE(49)] = 5630,
  [SMALL_STATE(50)] = 5748,
  [SMALL_STATE(51)] = 5866,
  [SMALL_STATE(52)] = 5984,
  [SMALL_STATE(53)] = 6087,
  [SMALL_STATE(54)] = 6190,
  [SMALL_STATE(55)] = 6243,
  [SMALL_STATE(56)] = 6293,
  [SMALL_STATE(57)] = 6343,
  [SMALL_STATE(58)] = 6393,
  [SMALL_STATE(59)] = 6443,
  [SMALL_STATE(60)] = 6493,
  [SMALL_STATE(61)] = 6543,
  [SMALL_STATE(62)] = 6593,
  [SMALL_STATE(63)] = 6643,
  [SMALL_STATE(64)] = 6693,
  [SMALL_STATE(65)] = 6743,
  [SMALL_STATE(66)] = 6793,
  [SMALL_STATE(67)] = 6839,
  [SMALL_STATE(68)] = 6886,
  [SMALL_STATE(69)] = 6933,
  [SMALL_STATE(70)] = 6980,
  [SMALL_STATE(71)] = 7015,
  [SMALL_STATE(72)] = 7050,
  [SMALL_STATE(73)] = 7085,
  [SMALL_STATE(74)] = 7120,
  [SMALL_STATE(75)] = 7155,
  [SMALL_STATE(76)] = 7190,
  [SMALL_STATE(77)] = 7243,
  [SMALL_STATE(78)] = 7296,
  [SMALL_STATE(79)] = 7349,
  [SMALL_STATE(80)] = 7399,
  [SMALL_STATE(81)] = 7449,
  [SMALL_STATE(82)] = 7498,
  [SMALL_STATE(83)] = 7547,
  [SMALL_STATE(84)] = 7596,
  [SMALL_STATE(85)] = 7645,
  [SMALL_STATE(86)] = 7694,
  [SMALL_STATE(87)] = 7743,
  [SMALL_STATE(88)] = 7792,
  [SMALL_STATE(89)] = 7841,
  [SMALL_STATE(90)] = 7890,
  [SMALL_STATE(91)] = 7939,
  [SMALL_STATE(92)] = 7988,
  [SMALL_STATE(93)] = 8037,
  [SMALL_STATE(94)] = 8086,
  [SMALL_STATE(95)] = 8135,
  [SMALL_STATE(96)] = 8184,
  [SMALL_STATE(97)] = 8233,
  [SMALL_STATE(98)] = 8282,
  [SMALL_STATE(99)] = 8331,
  [SMALL_STATE(100)] = 8380,
  [SMALL_STATE(101)] = 8429,
  [SMALL_STATE(102)] = 8478,
  [SMALL_STATE(103)] = 8527,
  [SMALL_STATE(104)] = 8576,
  [SMALL_STATE(105)] = 8606,
  [SMALL_STATE(106)] = 8636,
  [SMALL_STATE(107)] = 8666,
  [SMALL_STATE(108)] = 8696,
  [SMALL_STATE(109)] = 8726,
  [SMALL_STATE(110)] = 8756,
  [SMALL_STATE(111)] = 8786,
  [SMALL_STATE(112)] = 8816,
  [SMALL_STATE(113)] = 8846,
  [SMALL_STATE(114)] = 8876,
  [SMALL_STATE(115)] = 8906,
  [SMALL_STATE(116)] = 8936,
  [SMALL_STATE(117)] = 8966,
  [SMALL_STATE(118)] = 8996,
  [SMALL_STATE(119)] = 9026,
  [SMALL_STATE(120)] = 9056,
  [SMALL_STATE(121)] = 9086,
  [SMALL_STATE(122)] = 9116,
  [SMALL_STATE(123)] = 9146,
  [SMALL_STATE(124)] = 9176,
  [SMALL_STATE(125)] = 9206,
  [SMALL_STATE(126)] = 9236,
  [SMALL_STATE(127)] = 9266,
  [SMALL_STATE(128)] = 9296,
  [SMALL_STATE(129)] = 9326,
  [SMALL_STATE(130)] = 9356,
  [SMALL_STATE(131)] = 9386,
  [SMALL_STATE(132)] = 9416,
  [SMALL_STATE(133)] = 9446,
  [SMALL_STATE(134)] = 9476,
  [SMALL_STATE(135)] = 9506,
  [SMALL_STATE(136)] = 9536,
  [SMALL_STATE(137)] = 9566,
  [SMALL_STATE(138)] = 9596,
  [SMALL_STATE(139)] = 9626,
  [SMALL_STATE(140)] = 9671,
  [SMALL_STATE(141)] = 9716,
  [SMALL_STATE(142)] = 9761,
  [SMALL_STATE(143)] = 9813,
  [SMALL_STATE(144)] = 9863,
  [SMALL_STATE(145)] = 9913,
  [SMALL_STATE(146)] = 9965,
  [SMALL_STATE(147)] = 10011,
  [SMALL_STATE(148)] = 10057,
  [SMALL_STATE(149)] = 10096,
  [SMALL_STATE(150)] = 10125,
  [SMALL_STATE(151)] = 10154,
  [SMALL_STATE(152)] = 10183,
  [SMALL_STATE(153)] = 10206,
  [SMALL_STATE(154)] = 10229,
  [SMALL_STATE(155)] = 10256,
  [SMALL_STATE(156)] = 10273,
  [SMALL_STATE(157)] = 10290,
  [SMALL_STATE(158)] = 10307,
  [SMALL_STATE(159)] = 10324,
  [SMALL_STATE(160)] = 10341,
  [SMALL_STATE(161)] = 10358,
  [SMALL_STATE(162)] = 10375,
  [SMALL_STATE(163)] = 10402,
  [SMALL_STATE(164)] = 10419,
  [SMALL_STATE(165)] = 10437,
  [SMALL_STATE(166)] = 10459,
  [SMALL_STATE(167)] = 10474,
  [SMALL_STATE(168)] = 10489,
  [SMALL_STATE(169)] = 10504,
  [SMALL_STATE(170)] = 10519,
  [SMALL_STATE(171)] = 10534,
  [SMALL_STATE(172)] = 10549,
  [SMALL_STATE(173)] = 10564,
  [SMALL_STATE(174)] = 10579,
  [SMALL_STATE(175)] = 10594,
  [SMALL_STATE(176)] = 10609,
  [SMALL_STATE(177)] = 10624,
  [SMALL_STATE(178)] = 10639,
  [SMALL_STATE(179)] = 10654,
  [SMALL_STATE(180)] = 10668,
  [SMALL_STATE(181)] = 10682,
  [SMALL_STATE(182)] = 10696,
  [SMALL_STATE(183)] = 10710,
  [SMALL_STATE(184)] = 10726,
  [SMALL_STATE(185)] = 10740,
  [SMALL_STATE(186)] = 10762,
  [SMALL_STATE(187)] = 10776,
  [SMALL_STATE(188)] = 10790,
  [SMALL_STATE(189)] = 10804,
  [SMALL_STATE(190)] = 10822,
  [SMALL_STATE(191)] = 10844,
  [SMALL_STATE(192)] = 10866,
  [SMALL_STATE(193)] = 10880,
  [SMALL_STATE(194)] = 10898,
  [SMALL_STATE(195)] = 10912,
  [SMALL_STATE(196)] = 10926,
  [SMALL_STATE(197)] = 10940,
  [SMALL_STATE(198)] = 10954,
  [SMALL_STATE(199)] = 10968,
  [SMALL_STATE(200)] = 10982,
  [SMALL_STATE(201)] = 10996,
  [SMALL_STATE(202)] = 11010,
  [SMALL_STATE(203)] = 11026,
  [SMALL_STATE(204)] = 11044,
  [SMALL_STATE(205)] = 11064,
  [SMALL_STATE(206)] = 11078,
  [SMALL_STATE(207)] = 11092,
  [SMALL_STATE(208)] = 11106,
  [SMALL_STATE(209)] = 11120,
  [SMALL_STATE(210)] = 11134,
  [SMALL_STATE(211)] = 11148,
  [SMALL_STATE(212)] = 11162,
  [SMALL_STATE(213)] = 11176,
  [SMALL_STATE(214)] = 11190,
  [SMALL_STATE(215)] = 11204,
  [SMALL_STATE(216)] = 11218,
  [SMALL_STATE(217)] = 11232,
  [SMALL_STATE(218)] = 11246,
  [SMALL_STATE(219)] = 11260,
  [SMALL_STATE(220)] = 11274,
  [SMALL_STATE(221)] = 11292,
  [SMALL_STATE(222)] = 11306,
  [SMALL_STATE(223)] = 11320,
  [SMALL_STATE(224)] = 11334,
  [SMALL_STATE(225)] = 11348,
  [SMALL_STATE(226)] = 11362,
  [SMALL_STATE(227)] = 11380,
  [SMALL_STATE(228)] = 11398,
  [SMALL_STATE(229)] = 11418,
  [SMALL_STATE(230)] = 11431,
  [SMALL_STATE(231)] = 11448,
  [SMALL_STATE(232)] = 11465,
  [SMALL_STATE(233)] = 11484,
  [SMALL_STATE(234)] = 11501,
  [SMALL_STATE(235)] = 11518,
  [SMALL_STATE(236)] = 11537,
  [SMALL_STATE(237)] = 11550,
  [SMALL_STATE(238)] = 11563,
  [SMALL_STATE(239)] = 11582,
  [SMALL_STATE(240)] = 11599,
  [SMALL_STATE(241)] = 11616,
  [SMALL_STATE(242)] = 11633,
  [SMALL_STATE(243)] = 11650,
  [SMALL_STATE(244)] = 11667,
  [SMALL_STATE(245)] = 11680,
  [SMALL_STATE(246)] = 11697,
  [SMALL_STATE(247)] = 11714,
  [SMALL_STATE(248)] = 11731,
  [SMALL_STATE(249)] = 11744,
  [SMALL_STATE(250)] = 11758,
  [SMALL_STATE(251)] = 11770,
  [SMALL_STATE(252)] = 11786,
  [SMALL_STATE(253)] = 11802,
  [SMALL_STATE(254)] = 11816,
  [SMALL_STATE(255)] = 11832,
  [SMALL_STATE(256)] = 11846,
  [SMALL_STATE(257)] = 11862,
  [SMALL_STATE(258)] = 11874,
  [SMALL_STATE(259)] = 11886,
  [SMALL_STATE(260)] = 11900,
  [SMALL_STATE(261)] = 11912,
  [SMALL_STATE(262)] = 11924,
  [SMALL_STATE(263)] = 11940,
  [SMALL_STATE(264)] = 11954,
  [SMALL_STATE(265)] = 11968,
  [SMALL_STATE(266)] = 11980,
  [SMALL_STATE(267)] = 11996,
  [SMALL_STATE(268)] = 12010,
  [SMALL_STATE(269)] = 12024,
  [SMALL_STATE(270)] = 12038,
  [SMALL_STATE(271)] = 12054,
  [SMALL_STATE(272)] = 12070,
  [SMALL_STATE(273)] = 12086,
  [SMALL_STATE(274)] = 12098,
  [SMALL_STATE(275)] = 12114,
  [SMALL_STATE(276)] = 12128,
  [SMALL_STATE(277)] = 12140,
  [SMALL_STATE(278)] = 12154,
  [SMALL_STATE(279)] = 12167,
  [SMALL_STATE(280)] = 12178,
  [SMALL_STATE(281)] = 12191,
  [SMALL_STATE(282)] = 12202,
  [SMALL_STATE(283)] = 12215,
  [SMALL_STATE(284)] = 12228,
  [SMALL_STATE(285)] = 12241,
  [SMALL_STATE(286)] = 12252,
  [SMALL_STATE(287)] = 12265,
  [SMALL_STATE(288)] = 12278,
  [SMALL_STATE(289)] = 12291,
  [SMALL_STATE(290)] = 12302,
  [SMALL_STATE(291)] = 12313,
  [SMALL_STATE(292)] = 12324,
  [SMALL_STATE(293)] = 12337,
  [SMALL_STATE(294)] = 12348,
  [SMALL_STATE(295)] = 12359,
  [SMALL_STATE(296)] = 12370,
  [SMALL_STATE(297)] = 12383,
  [SMALL_STATE(298)] = 12394,
  [SMALL_STATE(299)] = 12405,
  [SMALL_STATE(300)] = 12416,
  [SMALL_STATE(301)] = 12427,
  [SMALL_STATE(302)] = 12438,
  [SMALL_STATE(303)] = 12451,
  [SMALL_STATE(304)] = 12462,
  [SMALL_STATE(305)] = 12473,
  [SMALL_STATE(306)] = 12486,
  [SMALL_STATE(307)] = 12497,
  [SMALL_STATE(308)] = 12508,
  [SMALL_STATE(309)] = 12519,
  [SMALL_STATE(310)] = 12530,
  [SMALL_STATE(311)] = 12541,
  [SMALL_STATE(312)] = 12554,
  [SMALL_STATE(313)] = 12565,
  [SMALL_STATE(314)] = 12576,
  [SMALL_STATE(315)] = 12589,
  [SMALL_STATE(316)] = 12600,
  [SMALL_STATE(317)] = 12611,
  [SMALL_STATE(318)] = 12624,
  [SMALL_STATE(319)] = 12637,
  [SMALL_STATE(320)] = 12648,
  [SMALL_STATE(321)] = 12661,
  [SMALL_STATE(322)] = 12674,
  [SMALL_STATE(323)] = 12687,
  [SMALL_STATE(324)] = 12700,
  [SMALL_STATE(325)] = 12711,
  [SMALL_STATE(326)] = 12724,
  [SMALL_STATE(327)] = 12735,
  [SMALL_STATE(328)] = 12748,
  [SMALL_STATE(329)] = 12761,
  [SMALL_STATE(330)] = 12774,
  [SMALL_STATE(331)] = 12787,
  [SMALL_STATE(332)] = 12800,
  [SMALL_STATE(333)] = 12811,
  [SMALL_STATE(334)] = 12822,
  [SMALL_STATE(335)] = 12833,
  [SMALL_STATE(336)] = 12846,
  [SMALL_STATE(337)] = 12857,
  [SMALL_STATE(338)] = 12870,
  [SMALL_STATE(339)] = 12881,
  [SMALL_STATE(340)] = 12890,
  [SMALL_STATE(341)] = 12903,
  [SMALL_STATE(342)] = 12916,
  [SMALL_STATE(343)] = 12927,
  [SMALL_STATE(344)] = 12940,
  [SMALL_STATE(345)] = 12948,
  [SMALL_STATE(346)] = 12958,
  [SMALL_STATE(347)] = 12968,
  [SMALL_STATE(348)] = 12978,
  [SMALL_STATE(349)] = 12988,
  [SMALL_STATE(350)] = 12998,
  [SMALL_STATE(351)] = 13008,
  [SMALL_STATE(352)] = 13018,
  [SMALL_STATE(353)] = 13028,
  [SMALL_STATE(354)] = 13036,
  [SMALL_STATE(355)] = 13044,
  [SMALL_STATE(356)] = 13054,
  [SMALL_STATE(357)] = 13064,
  [SMALL_STATE(358)] = 13074,
  [SMALL_STATE(359)] = 13081,
  [SMALL_STATE(360)] = 13088,
  [SMALL_STATE(361)] = 13095,
  [SMALL_STATE(362)] = 13102,
  [SMALL_STATE(363)] = 13109,
  [SMALL_STATE(364)] = 13116,
  [SMALL_STATE(365)] = 13123,
  [SMALL_STATE(366)] = 13130,
  [SMALL_STATE(367)] = 13137,
  [SMALL_STATE(368)] = 13144,
  [SMALL_STATE(369)] = 13151,
  [SMALL_STATE(370)] = 13158,
  [SMALL_STATE(371)] = 13165,
  [SMALL_STATE(372)] = 13172,
  [SMALL_STATE(373)] = 13179,
  [SMALL_STATE(374)] = 13186,
  [SMALL_STATE(375)] = 13193,
  [SMALL_STATE(376)] = 13200,
  [SMALL_STATE(377)] = 13207,
  [SMALL_STATE(378)] = 13214,
  [SMALL_STATE(379)] = 13221,
  [SMALL_STATE(380)] = 13228,
  [SMALL_STATE(381)] = 13235,
  [SMALL_STATE(382)] = 13242,
  [SMALL_STATE(383)] = 13249,
  [SMALL_STATE(384)] = 13256,
  [SMALL_STATE(385)] = 13263,
  [SMALL_STATE(386)] = 13270,
  [SMALL_STATE(387)] = 13277,
  [SMALL_STATE(388)] = 13284,
  [SMALL_STATE(389)] = 13291,
  [SMALL_STATE(390)] = 13298,
  [SMALL_STATE(391)] = 13305,
  [SMALL_STATE(392)] = 13312,
  [SMALL_STATE(393)] = 13319,
  [SMALL_STATE(394)] = 13326,
  [SMALL_STATE(395)] = 13333,
  [SMALL_STATE(396)] = 13340,
  [SMALL_STATE(397)] = 13347,
  [SMALL_STATE(398)] = 13354,
  [SMALL_STATE(399)] = 13361,
  [SMALL_STATE(400)] = 13368,
  [SMALL_STATE(401)] = 13375,
  [SMALL_STATE(402)] = 13382,
  [SMALL_STATE(403)] = 13389,
  [SMALL_STATE(404)] = 13396,
  [SMALL_STATE(405)] = 13403,
  [SMALL_STATE(406)] = 13410,
  [SMALL_STATE(407)] = 13417,
  [SMALL_STATE(408)] = 13424,
  [SMALL_STATE(409)] = 13431,
  [SMALL_STATE(410)] = 13438,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_spec, 8),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_spec, 8),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_spec, 7),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_spec, 7),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_spec, 6),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_spec, 6),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 6),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 6),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_spec, 5),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_spec, 5),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 5),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 5),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec_r, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_spec_r, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec_r, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_spec_r, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eq_op, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eq_op, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_expr, 1, .production_id = 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_expr, 1, .production_id = 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_expr_repeat1, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_access_expr_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_expr_repeat1, 2), SHIFT_REPEAT(29),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_expr_repeat1, 2), SHIFT_REPEAT(46),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_expr_repeat1, 2), SHIFT_REPEAT(360),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_expr, 2, .production_id = 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_expr, 2, .production_id = 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_actuals, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_actuals, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expr, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expr, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_actuals, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_actuals, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expr, 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expr, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_expr, 3),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_expr, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_actuals, 4),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_actuals, 4),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(350),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(86),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(56),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(56),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(379),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(54),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(378),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(377),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(376),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plus_expr, 3),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plus_expr, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec, 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_spec, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lt_expr, 3),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lt_expr, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_false, 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_false, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gt_expr, 3),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gt_expr, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_expr, 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_expr, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_true, 1),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_true, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minus_expr, 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_minus_expr, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lte_expr, 3),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lte_expr, 3),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_lit, 2),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_other_lit, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 3),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gte_expr, 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gte_expr, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 1),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eq_expr, 3),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eq_expr, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_literal, 5),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_literal, 5),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_lit, 3),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_other_lit, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 4),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_literal, 4),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_expr, 3),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod_expr, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mul_expr, 3),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mul_expr, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ne_expr, 3),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ne_expr, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expr, 3),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_or_expr, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div_expr, 3),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div_expr, 3),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec, 2),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_spec, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 2),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 4),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 4),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expr, 3),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_expr, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_literal, 6),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_literal, 6),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(142),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(399),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(408),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(407),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(357),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [469] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_access_expr_repeat1, 2), SHIFT_REPEAT(22),
  [472] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_access_expr_repeat1, 2), SHIFT_REPEAT(40),
  [475] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_access_expr_repeat1, 2), SHIFT_REPEAT(375),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_terminator_repeat1, 2),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_terminator_repeat1, 2),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_terminator_repeat1, 2), SHIFT_REPEAT(152),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_terminator, 1),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_terminator, 1),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 4),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 4),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, .production_id = 8),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, .production_id = 8),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 11),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 11),
  [519] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 11), SHIFT_REPEAT(50),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 4),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 4),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(153),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(160),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 6),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 6),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_statement, 2),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_statement, 2),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_statement_repeat1, 2),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_var_statement_repeat1, 2),
  [566] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_var_statement_repeat1, 2), SHIFT_REPEAT(351),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_clause, 3, .production_id = 4),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif_clause, 3, .production_id = 4),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 3),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_statement_repeat1, 2),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_statement_repeat1, 2),
  [581] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_statement_repeat1, 2), SHIFT_REPEAT(384),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_statement, 3),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_statement, 3),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_statement, 2),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_statement, 2),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_statement, 3),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_statement, 3),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_actuals_repeat1, 2),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_decl_item, 3),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_decl_item, 3),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_statement_repeat1, 2), SHIFT_REPEAT(241),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_statement_repeat1, 2),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assignment_statement_repeat1, 2),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_decl_item, 4),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_decl_item, 4),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_content_double, 2),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_content_double, 2), SHIFT_REPEAT(254),
  [668] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_content_double, 2), SHIFT_REPEAT(254),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_content_single, 2),
  [673] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_content_single, 2), SHIFT_REPEAT(255),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_literal_repeat1, 4),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, .production_id = 7),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, .production_id = 7),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 7),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 3, .production_id = 4),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 3, .production_id = 4),
  [706] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_spec_repeat1, 2), SHIFT_REPEAT(94),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_spec_repeat1, 2),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [733] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_actuals_repeat1, 2), SHIFT_REPEAT(42),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 10),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 10),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [762] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_statement_repeat1, 2), SHIFT_REPEAT(374),
  [765] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_other_lit_repeat1, 2), SHIFT_REPEAT(288),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_other_lit_repeat1, 2),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_declaration, 3, .production_id = 5),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_declaration, 3, .production_id = 5),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [824] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_other_lit_repeat1, 2), SHIFT_REPEAT(314),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [841] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_other_lit_repeat1, 2), SHIFT_REPEAT(322),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [848] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_spec_repeat1, 2), SHIFT_REPEAT(349),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_spec_repeat1, 2),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 9),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 9),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_literal_repeat1, 2),
  [877] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_literal_repeat1, 2), SHIFT_REPEAT(44),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_declaration, 2, .production_id = 3),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_declaration, 2, .production_id = 3),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_spec, 3),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_spec, 4),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_spec, 3),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_spec, 2),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [984] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_con4m(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
