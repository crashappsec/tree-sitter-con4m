#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 406
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 151
#define ALIAS_COUNT 0
#define TOKEN_COUNT 82
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 12

enum {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_COMMA = 5,
  anon_sym_EQ = 6,
  anon_sym_COLON = 7,
  anon_sym_COLON_EQ = 8,
  anon_sym_enum = 9,
  anon_sym_if = 10,
  anon_sym_elif = 11,
  anon_sym_else = 12,
  anon_sym_for = 13,
  anon_sym_from = 14,
  anon_sym_to = 15,
  anon_sym_continue = 16,
  anon_sym_break = 17,
  anon_sym_return = 18,
  anon_sym_func = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  anon_sym_var = 22,
  anon_sym_export = 23,
  anon_sym_void = 24,
  anon_sym_bool = 25,
  anon_sym_int = 26,
  anon_sym_char = 27,
  anon_sym_string = 28,
  anon_sym_float = 29,
  anon_sym_Duration = 30,
  anon_sym_IpAddr = 31,
  anon_sym_CIDR = 32,
  anon_sym_Size = 33,
  anon_sym_Date = 34,
  anon_sym_Time = 35,
  anon_sym_DateType = 36,
  anon_sym_BQUOTE = 37,
  anon_sym_typespec = 38,
  anon_sym_LBRACK = 39,
  anon_sym_RBRACK = 40,
  anon_sym_tuple = 41,
  anon_sym_list = 42,
  anon_sym_dict = 43,
  anon_sym_STAR = 44,
  anon_sym_DASH_GT = 45,
  anon_sym_PLUS = 46,
  anon_sym_DASH = 47,
  anon_sym_not = 48,
  anon_sym_DOLLAR = 49,
  anon_sym_DOT = 50,
  anon_sym_true = 51,
  anon_sym_True = 52,
  anon_sym_false = 53,
  anon_sym_False = 54,
  anon_sym_PIPE_PIPE = 55,
  anon_sym_or = 56,
  anon_sym_AMP_AMP = 57,
  anon_sym_and = 58,
  anon_sym_BANG_EQ = 59,
  anon_sym_EQ_EQ = 60,
  anon_sym_GT_EQ = 61,
  anon_sym_LT_EQ = 62,
  anon_sym_GT = 63,
  anon_sym_LT = 64,
  anon_sym_PERCENT = 65,
  anon_sym_SLASH = 66,
  sym_NL = 67,
  sym_comment = 68,
  sym_line_continuation = 69,
  sym_integer = 70,
  sym_float = 71,
  anon_sym_LT_LT = 72,
  aux_sym_other_lit_token1 = 73,
  anon_sym_GT_GT = 74,
  anon_sym_DQUOTE = 75,
  anon_sym_SQUOTE = 76,
  sym_escape_sequence = 77,
  aux_sym__quoted_string_content_double_token1 = 78,
  aux_sym__quoted_string_content_single_token1 = 79,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 80,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 81,
  sym_source_file = 82,
  sym_toplevel_items = 83,
  sym_body = 84,
  sym_body_items = 85,
  sym_assignment = 86,
  sym_eq_op = 87,
  sym_section = 88,
  sym_if_stmt = 89,
  sym_for_stmt = 90,
  sym_continue_stmt = 91,
  sym_break_stmt = 92,
  sym_return_stmt = 93,
  sym_function_declaration = 94,
  sym_formal_spec = 95,
  sym_param_spec = 96,
  sym_var_decl_item = 97,
  sym_var_stmt = 98,
  sym_base_type_spec = 99,
  sym_type_spec = 100,
  sym_type_spec_r = 101,
  sym_func_spec = 102,
  sym_expression = 103,
  sym_unary_expr = 104,
  sym_not_expr = 105,
  sym_access_expr = 106,
  sym_paren_expr = 107,
  sym_member_expr = 108,
  sym_index_expr = 109,
  sym_call_actuals = 110,
  sym_literal = 111,
  sym_true = 112,
  sym_false = 113,
  sym_tuple_literal = 114,
  sym_list_literal = 115,
  sym_dict_literal = 116,
  sym_or_expr = 117,
  sym_and_expr = 118,
  sym_ne_expr = 119,
  sym_eq_expr = 120,
  sym_gte_expr = 121,
  sym_lte_expr = 122,
  sym_gt_expr = 123,
  sym_lt_expr = 124,
  sym_plus_expr = 125,
  sym_minus_expr = 126,
  sym_mod_expr = 127,
  sym_mul_expr = 128,
  sym_div_expr = 129,
  sym_number = 130,
  sym_other_lit = 131,
  sym_quoted_string = 132,
  aux_sym__quoted_string_content_double = 133,
  aux_sym__quoted_string_content_single = 134,
  sym_multiline_string = 135,
  sym_STR = 136,
  aux_sym_source_file_repeat1 = 137,
  aux_sym_source_file_repeat2 = 138,
  aux_sym_body_repeat1 = 139,
  aux_sym_assignment_repeat1 = 140,
  aux_sym_enum_stmt_repeat1 = 141,
  aux_sym_if_stmt_repeat1 = 142,
  aux_sym_formal_spec_repeat1 = 143,
  aux_sym_var_stmt_repeat1 = 144,
  aux_sym_base_type_spec_repeat1 = 145,
  aux_sym_func_spec_repeat1 = 146,
  aux_sym_access_expr_repeat1 = 147,
  aux_sym_call_actuals_repeat1 = 148,
  aux_sym_dict_literal_repeat1 = 149,
  aux_sym_other_lit_repeat1 = 150,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
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
  [anon_sym_continue] = "continue",
  [anon_sym_break] = "break",
  [anon_sym_return] = "return",
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
  [sym_NL] = "NL",
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
  [sym_toplevel_items] = "toplevel_items",
  [sym_body] = "body",
  [sym_body_items] = "body_items",
  [sym_assignment] = "assignment",
  [sym_eq_op] = "eq_op",
  [sym_section] = "section",
  [sym_if_stmt] = "if_stmt",
  [sym_for_stmt] = "for_stmt",
  [sym_continue_stmt] = "continue_stmt",
  [sym_break_stmt] = "break_stmt",
  [sym_return_stmt] = "return_stmt",
  [sym_function_declaration] = "function_declaration",
  [sym_formal_spec] = "formal_spec",
  [sym_param_spec] = "param_spec",
  [sym_var_decl_item] = "var_decl_item",
  [sym_var_stmt] = "var_stmt",
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
  [sym_number] = "number",
  [sym_other_lit] = "other_lit",
  [sym_quoted_string] = "quoted_string",
  [aux_sym__quoted_string_content_double] = "_quoted_string_content_double",
  [aux_sym__quoted_string_content_single] = "_quoted_string_content_single",
  [sym_multiline_string] = "multiline_string",
  [sym_STR] = "STR",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_assignment_repeat1] = "assignment_repeat1",
  [aux_sym_enum_stmt_repeat1] = "enum_stmt_repeat1",
  [aux_sym_if_stmt_repeat1] = "if_stmt_repeat1",
  [aux_sym_formal_spec_repeat1] = "formal_spec_repeat1",
  [aux_sym_var_stmt_repeat1] = "var_stmt_repeat1",
  [aux_sym_base_type_spec_repeat1] = "base_type_spec_repeat1",
  [aux_sym_func_spec_repeat1] = "func_spec_repeat1",
  [aux_sym_access_expr_repeat1] = "access_expr_repeat1",
  [aux_sym_call_actuals_repeat1] = "call_actuals_repeat1",
  [aux_sym_dict_literal_repeat1] = "dict_literal_repeat1",
  [aux_sym_other_lit_repeat1] = "other_lit_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_return] = anon_sym_return,
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
  [sym_NL] = sym_NL,
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
  [sym_toplevel_items] = sym_toplevel_items,
  [sym_body] = sym_body,
  [sym_body_items] = sym_body_items,
  [sym_assignment] = sym_assignment,
  [sym_eq_op] = sym_eq_op,
  [sym_section] = sym_section,
  [sym_if_stmt] = sym_if_stmt,
  [sym_for_stmt] = sym_for_stmt,
  [sym_continue_stmt] = sym_continue_stmt,
  [sym_break_stmt] = sym_break_stmt,
  [sym_return_stmt] = sym_return_stmt,
  [sym_function_declaration] = sym_function_declaration,
  [sym_formal_spec] = sym_formal_spec,
  [sym_param_spec] = sym_param_spec,
  [sym_var_decl_item] = sym_var_decl_item,
  [sym_var_stmt] = sym_var_stmt,
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
  [sym_number] = sym_number,
  [sym_other_lit] = sym_other_lit,
  [sym_quoted_string] = sym_quoted_string,
  [aux_sym__quoted_string_content_double] = aux_sym__quoted_string_content_double,
  [aux_sym__quoted_string_content_single] = aux_sym__quoted_string_content_single,
  [sym_multiline_string] = sym_multiline_string,
  [sym_STR] = sym_STR,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_assignment_repeat1] = aux_sym_assignment_repeat1,
  [aux_sym_enum_stmt_repeat1] = aux_sym_enum_stmt_repeat1,
  [aux_sym_if_stmt_repeat1] = aux_sym_if_stmt_repeat1,
  [aux_sym_formal_spec_repeat1] = aux_sym_formal_spec_repeat1,
  [aux_sym_var_stmt_repeat1] = aux_sym_var_stmt_repeat1,
  [aux_sym_base_type_spec_repeat1] = aux_sym_base_type_spec_repeat1,
  [aux_sym_func_spec_repeat1] = aux_sym_func_spec_repeat1,
  [aux_sym_access_expr_repeat1] = aux_sym_access_expr_repeat1,
  [aux_sym_call_actuals_repeat1] = aux_sym_call_actuals_repeat1,
  [aux_sym_dict_literal_repeat1] = aux_sym_dict_literal_repeat1,
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
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
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
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
  [sym_NL] = {
    .visible = true,
    .named = true,
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
  [sym_toplevel_items] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_body_items] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_eq_op] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_if_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_for_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_continue_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_break_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_return_stmt] = {
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
  [sym_var_stmt] = {
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
  [sym_STR] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assignment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_formal_spec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_var_stmt_repeat1] = {
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
  field_final = 6,
  field_name = 7,
  field_parameters = 8,
  field_section_name = 9,
  field_section_type = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_final] = "final",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_section_name] = "section_name",
  [field_section_type] = "section_type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 3},
  [6] = {.index = 10, .length = 4},
  [7] = {.index = 14, .length = 3},
  [8] = {.index = 17, .length = 4},
  [9] = {.index = 21, .length = 2},
  [10] = {.index = 23, .length = 4},
  [11] = {.index = 27, .length = 6},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_arguments, 1},
    {field_name, 0},
  [3] =
    {field_body, 1},
    {field_section_type, 0},
  [5] =
    {field_condition, 1},
    {field_consequence, 2},
  [7] =
    {field_body, 2},
    {field_section_name, 1},
    {field_section_type, 0},
  [10] =
    {field_alternative, 3, .inherited = true},
    {field_condition, 1},
    {field_consequence, 2},
    {field_consequence, 3, .inherited = true},
  [14] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [17] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
    {field_consequence, 0, .inherited = true},
    {field_consequence, 1, .inherited = true},
  [21] =
    {field_alternative, 1},
    {field_consequence, 2},
  [23] =
    {field_condition, 1},
    {field_consequence, 2},
    {field_consequence, 5},
    {field_final, 4},
  [27] =
    {field_alternative, 3, .inherited = true},
    {field_condition, 1},
    {field_consequence, 2},
    {field_consequence, 3, .inherited = true},
    {field_consequence, 6},
    {field_final, 5},
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
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 11,
  [16] = 16,
  [17] = 9,
  [18] = 18,
  [19] = 12,
  [20] = 20,
  [21] = 21,
  [22] = 13,
  [23] = 14,
  [24] = 16,
  [25] = 10,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 26,
  [30] = 28,
  [31] = 21,
  [32] = 20,
  [33] = 18,
  [34] = 27,
  [35] = 8,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 39,
  [47] = 41,
  [48] = 42,
  [49] = 43,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 40,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 36,
  [59] = 59,
  [60] = 59,
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
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 88,
  [90] = 90,
  [91] = 90,
  [92] = 92,
  [93] = 93,
  [94] = 93,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 97,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 104,
  [106] = 101,
  [107] = 96,
  [108] = 102,
  [109] = 99,
  [110] = 110,
  [111] = 98,
  [112] = 95,
  [113] = 103,
  [114] = 92,
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
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 79,
  [155] = 77,
  [156] = 78,
  [157] = 85,
  [158] = 84,
  [159] = 81,
  [160] = 80,
  [161] = 86,
  [162] = 83,
  [163] = 163,
  [164] = 64,
  [165] = 165,
  [166] = 69,
  [167] = 72,
  [168] = 70,
  [169] = 71,
  [170] = 68,
  [171] = 121,
  [172] = 172,
  [173] = 67,
  [174] = 129,
  [175] = 66,
  [176] = 65,
  [177] = 177,
  [178] = 73,
  [179] = 75,
  [180] = 74,
  [181] = 181,
  [182] = 136,
  [183] = 116,
  [184] = 131,
  [185] = 148,
  [186] = 186,
  [187] = 132,
  [188] = 188,
  [189] = 130,
  [190] = 138,
  [191] = 191,
  [192] = 143,
  [193] = 193,
  [194] = 194,
  [195] = 142,
  [196] = 196,
  [197] = 141,
  [198] = 127,
  [199] = 150,
  [200] = 147,
  [201] = 145,
  [202] = 126,
  [203] = 140,
  [204] = 144,
  [205] = 119,
  [206] = 137,
  [207] = 207,
  [208] = 124,
  [209] = 122,
  [210] = 135,
  [211] = 139,
  [212] = 146,
  [213] = 133,
  [214] = 214,
  [215] = 118,
  [216] = 120,
  [217] = 117,
  [218] = 128,
  [219] = 115,
  [220] = 125,
  [221] = 221,
  [222] = 134,
  [223] = 149,
  [224] = 123,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 231,
  [236] = 236,
  [237] = 237,
  [238] = 236,
  [239] = 239,
  [240] = 240,
  [241] = 232,
  [242] = 242,
  [243] = 237,
  [244] = 227,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 247,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 249,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 245,
  [271] = 267,
  [272] = 272,
  [273] = 260,
  [274] = 274,
  [275] = 268,
  [276] = 259,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 281,
  [287] = 287,
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
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 285,
  [310] = 310,
  [311] = 287,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 290,
  [316] = 316,
  [317] = 292,
  [318] = 294,
  [319] = 319,
  [320] = 320,
  [321] = 295,
  [322] = 322,
  [323] = 281,
  [324] = 304,
  [325] = 297,
  [326] = 314,
  [327] = 327,
  [328] = 300,
  [329] = 329,
  [330] = 330,
  [331] = 329,
  [332] = 330,
  [333] = 301,
  [334] = 302,
  [335] = 335,
  [336] = 312,
  [337] = 337,
  [338] = 338,
  [339] = 307,
  [340] = 306,
  [341] = 341,
  [342] = 338,
  [343] = 279,
  [344] = 288,
  [345] = 284,
  [346] = 296,
  [347] = 282,
  [348] = 303,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 353,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 356,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 368,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 363,
  [379] = 365,
  [380] = 380,
  [381] = 381,
  [382] = 372,
  [383] = 367,
  [384] = 376,
  [385] = 385,
  [386] = 386,
  [387] = 381,
  [388] = 388,
  [389] = 389,
  [390] = 362,
  [391] = 391,
  [392] = 386,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 371,
  [397] = 391,
  [398] = 394,
  [399] = 393,
  [400] = 400,
  [401] = 370,
  [402] = 364,
  [403] = 385,
  [404] = 400,
  [405] = 395,
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
      if (eof) ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(38)
      if (lookahead == '\r') SKIP(38)
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '0') ADVANCE(82);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == ']') ADVANCE(54);
      if (lookahead == '`') ADVANCE(52);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '}') ADVANCE(43);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(79);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '\r') ADVANCE(118);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(118);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') ADVANCE(109);
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(109);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\r') ADVANCE(94);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '>') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(94);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') ADVANCE(95);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '\'') ADVANCE(98);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(95);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\r') ADVANCE(96);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(96);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(125);
      END_STATE();
    case 8:
      if (lookahead == '&') ADVANCE(64);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(124);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(78);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '<') ADVANCE(92);
      END_STATE();
    case 14:
      if (lookahead == '<') ADVANCE(92);
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(65);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(67);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(56);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(84);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(85);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 22:
      if (lookahead == '|') ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == 0 ||
          lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 24:
      if (lookahead == 0 ||
          lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(1);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 25:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 26:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(84);
      END_STATE();
    case 27:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(27)
      if (lookahead == '\r') SKIP(27)
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(70);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ']') ADVANCE(54);
      if (lookahead == '`') ADVANCE(52);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '}') ADVANCE(43);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 28:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(28)
      if (lookahead == '\r') SKIP(28)
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(70);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ']') ADVANCE(54);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '}') ADVANCE(43);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    case 29:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(29)
      if (lookahead == '\r') SKIP(29)
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(23);
      END_STATE();
    case 30:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(30)
      if (lookahead == '\r') SKIP(30)
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(23);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(31)
      if (lookahead == '\r') SKIP(31)
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '|') ADVANCE(22);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(85);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 36:
      if (eof) ADVANCE(40);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\r') ADVANCE(76);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(82);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '`') ADVANCE(52);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(36)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 37:
      if (eof) ADVANCE(40);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\r') ADVANCE(76);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(37)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    case 38:
      if (eof) ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(38)
      if (lookahead == '\r') SKIP(38)
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '0') ADVANCE(82);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ']') ADVANCE(54);
      if (lookahead == '`') ADVANCE(52);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '}') ADVANCE(43);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 39:
      if (eof) ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(39)
      if (lookahead == '\r') SKIP(39)
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(82);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(69);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ']') ADVANCE(54);
      if (lookahead == '`') ADVANCE(52);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '}') ADVANCE(43);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(56);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(67);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead == '>') ADVANCE(102);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(78);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_NL);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\r') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(19);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(20);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(21);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(80);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(35);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(90);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      if (lookahead == '\r') ADVANCE(94);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '>') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      if (lookahead == '\r') ADVANCE(95);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '\'') ADVANCE(98);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      if (lookahead == '\r') ADVANCE(96);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      if (lookahead == '"') ADVANCE(7);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      if (lookahead == '\'') ADVANCE(9);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(78);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      if (lookahead == '>') ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      if (lookahead == 0 ||
          lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(7);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(9);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(123);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_double_token1);
      if (lookahead == '\r') ADVANCE(109);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(114);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_double_token1);
      if (lookahead == '*') ADVANCE(112);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(114);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_double_token1);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(12);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_double_token1);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(12);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_double_token1);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_double_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead == 0) ADVANCE(123);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(117);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead == 0) ADVANCE(123);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(123);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(123);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead == '\r') ADVANCE(118);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(123);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead == '*') ADVANCE(122);
      if (lookahead == '/') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(123);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead == '*') ADVANCE(121);
      if (lookahead == '/') ADVANCE(123);
      if (lookahead == '\n' ||
          lookahead == '\'') ADVANCE(12);
      if (lookahead != 0) ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead == '*') ADVANCE(121);
      if (lookahead == '\n' ||
          lookahead == '\'') ADVANCE(12);
      if (lookahead != 0) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(126);
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (lookahead == '\r') SKIP(0)
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
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == 's') ADVANCE(18);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == 'v') ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == 'I') ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 4:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead == 'h') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 'x') ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead == 'y') ADVANCE(53);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 21:
      if (lookahead == 'D') ADVANCE(56);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(60);
      END_STATE();
    case 26:
      if (lookahead == 'z') ADVANCE(61);
      END_STATE();
    case 27:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(86);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 56:
      if (lookahead == 'R') ADVANCE(89);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(102);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_CIDR);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_Date);
      if (lookahead == 'T') ADVANCE(117);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_Size);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_Time);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 98:
      if (lookahead == 'k') ADVANCE(121);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_dict);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 117:
      if (lookahead == 'y') ADVANCE(130);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 127:
      if (lookahead == 'g') ADVANCE(136);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_tuple);
      END_STATE();
    case 129:
      if (lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 130:
      if (lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_IpAddr);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_DateType);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_Duration);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_typespec);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 39},
  [2] = {.lex_state = 39},
  [3] = {.lex_state = 39},
  [4] = {.lex_state = 39},
  [5] = {.lex_state = 39},
  [6] = {.lex_state = 39},
  [7] = {.lex_state = 36},
  [8] = {.lex_state = 39},
  [9] = {.lex_state = 39},
  [10] = {.lex_state = 39},
  [11] = {.lex_state = 39},
  [12] = {.lex_state = 39},
  [13] = {.lex_state = 39},
  [14] = {.lex_state = 39},
  [15] = {.lex_state = 39},
  [16] = {.lex_state = 39},
  [17] = {.lex_state = 39},
  [18] = {.lex_state = 39},
  [19] = {.lex_state = 39},
  [20] = {.lex_state = 39},
  [21] = {.lex_state = 39},
  [22] = {.lex_state = 39},
  [23] = {.lex_state = 39},
  [24] = {.lex_state = 39},
  [25] = {.lex_state = 39},
  [26] = {.lex_state = 39},
  [27] = {.lex_state = 39},
  [28] = {.lex_state = 39},
  [29] = {.lex_state = 39},
  [30] = {.lex_state = 39},
  [31] = {.lex_state = 39},
  [32] = {.lex_state = 39},
  [33] = {.lex_state = 39},
  [34] = {.lex_state = 39},
  [35] = {.lex_state = 39},
  [36] = {.lex_state = 39},
  [37] = {.lex_state = 39},
  [38] = {.lex_state = 39},
  [39] = {.lex_state = 39},
  [40] = {.lex_state = 39},
  [41] = {.lex_state = 39},
  [42] = {.lex_state = 39},
  [43] = {.lex_state = 39},
  [44] = {.lex_state = 39},
  [45] = {.lex_state = 39},
  [46] = {.lex_state = 39},
  [47] = {.lex_state = 39},
  [48] = {.lex_state = 39},
  [49] = {.lex_state = 39},
  [50] = {.lex_state = 39},
  [51] = {.lex_state = 39},
  [52] = {.lex_state = 39},
  [53] = {.lex_state = 39},
  [54] = {.lex_state = 39},
  [55] = {.lex_state = 39},
  [56] = {.lex_state = 39},
  [57] = {.lex_state = 39},
  [58] = {.lex_state = 39},
  [59] = {.lex_state = 39},
  [60] = {.lex_state = 39},
  [61] = {.lex_state = 36},
  [62] = {.lex_state = 36},
  [63] = {.lex_state = 36},
  [64] = {.lex_state = 27},
  [65] = {.lex_state = 27},
  [66] = {.lex_state = 27},
  [67] = {.lex_state = 27},
  [68] = {.lex_state = 27},
  [69] = {.lex_state = 27},
  [70] = {.lex_state = 27},
  [71] = {.lex_state = 27},
  [72] = {.lex_state = 27},
  [73] = {.lex_state = 27},
  [74] = {.lex_state = 27},
  [75] = {.lex_state = 27},
  [76] = {.lex_state = 39},
  [77] = {.lex_state = 28},
  [78] = {.lex_state = 28},
  [79] = {.lex_state = 28},
  [80] = {.lex_state = 28},
  [81] = {.lex_state = 28},
  [82] = {.lex_state = 37},
  [83] = {.lex_state = 28},
  [84] = {.lex_state = 28},
  [85] = {.lex_state = 28},
  [86] = {.lex_state = 28},
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
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 27},
  [116] = {.lex_state = 27},
  [117] = {.lex_state = 27},
  [118] = {.lex_state = 27},
  [119] = {.lex_state = 27},
  [120] = {.lex_state = 27},
  [121] = {.lex_state = 27},
  [122] = {.lex_state = 27},
  [123] = {.lex_state = 27},
  [124] = {.lex_state = 27},
  [125] = {.lex_state = 27},
  [126] = {.lex_state = 27},
  [127] = {.lex_state = 27},
  [128] = {.lex_state = 27},
  [129] = {.lex_state = 27},
  [130] = {.lex_state = 27},
  [131] = {.lex_state = 27},
  [132] = {.lex_state = 27},
  [133] = {.lex_state = 27},
  [134] = {.lex_state = 27},
  [135] = {.lex_state = 27},
  [136] = {.lex_state = 27},
  [137] = {.lex_state = 27},
  [138] = {.lex_state = 27},
  [139] = {.lex_state = 27},
  [140] = {.lex_state = 27},
  [141] = {.lex_state = 27},
  [142] = {.lex_state = 27},
  [143] = {.lex_state = 27},
  [144] = {.lex_state = 27},
  [145] = {.lex_state = 27},
  [146] = {.lex_state = 27},
  [147] = {.lex_state = 27},
  [148] = {.lex_state = 27},
  [149] = {.lex_state = 27},
  [150] = {.lex_state = 27},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 37},
  [155] = {.lex_state = 37},
  [156] = {.lex_state = 37},
  [157] = {.lex_state = 37},
  [158] = {.lex_state = 37},
  [159] = {.lex_state = 37},
  [160] = {.lex_state = 37},
  [161] = {.lex_state = 37},
  [162] = {.lex_state = 37},
  [163] = {.lex_state = 36},
  [164] = {.lex_state = 36},
  [165] = {.lex_state = 36},
  [166] = {.lex_state = 36},
  [167] = {.lex_state = 36},
  [168] = {.lex_state = 36},
  [169] = {.lex_state = 36},
  [170] = {.lex_state = 36},
  [171] = {.lex_state = 36},
  [172] = {.lex_state = 36},
  [173] = {.lex_state = 36},
  [174] = {.lex_state = 36},
  [175] = {.lex_state = 36},
  [176] = {.lex_state = 36},
  [177] = {.lex_state = 36},
  [178] = {.lex_state = 36},
  [179] = {.lex_state = 36},
  [180] = {.lex_state = 36},
  [181] = {.lex_state = 36},
  [182] = {.lex_state = 36},
  [183] = {.lex_state = 36},
  [184] = {.lex_state = 36},
  [185] = {.lex_state = 36},
  [186] = {.lex_state = 36},
  [187] = {.lex_state = 36},
  [188] = {.lex_state = 36},
  [189] = {.lex_state = 36},
  [190] = {.lex_state = 36},
  [191] = {.lex_state = 36},
  [192] = {.lex_state = 36},
  [193] = {.lex_state = 36},
  [194] = {.lex_state = 39},
  [195] = {.lex_state = 36},
  [196] = {.lex_state = 36},
  [197] = {.lex_state = 36},
  [198] = {.lex_state = 36},
  [199] = {.lex_state = 36},
  [200] = {.lex_state = 36},
  [201] = {.lex_state = 36},
  [202] = {.lex_state = 36},
  [203] = {.lex_state = 36},
  [204] = {.lex_state = 36},
  [205] = {.lex_state = 36},
  [206] = {.lex_state = 36},
  [207] = {.lex_state = 36},
  [208] = {.lex_state = 36},
  [209] = {.lex_state = 36},
  [210] = {.lex_state = 36},
  [211] = {.lex_state = 36},
  [212] = {.lex_state = 36},
  [213] = {.lex_state = 36},
  [214] = {.lex_state = 36},
  [215] = {.lex_state = 36},
  [216] = {.lex_state = 36},
  [217] = {.lex_state = 36},
  [218] = {.lex_state = 36},
  [219] = {.lex_state = 36},
  [220] = {.lex_state = 36},
  [221] = {.lex_state = 36},
  [222] = {.lex_state = 36},
  [223] = {.lex_state = 36},
  [224] = {.lex_state = 36},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 36},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 36},
  [229] = {.lex_state = 36},
  [230] = {.lex_state = 36},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 39},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 36},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 36},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 2},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 3},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 2},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 36},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 36},
  [254] = {.lex_state = 36},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 36},
  [257] = {.lex_state = 3},
  [258] = {.lex_state = 36},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 36},
  [262] = {.lex_state = 2},
  [263] = {.lex_state = 36},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 39},
  [267] = {.lex_state = 3},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 36},
  [270] = {.lex_state = 2},
  [271] = {.lex_state = 3},
  [272] = {.lex_state = 36},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 2},
  [278] = {.lex_state = 3},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 4},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 5},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 36},
  [290] = {.lex_state = 39},
  [291] = {.lex_state = 36},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 31},
  [295] = {.lex_state = 39},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 39},
  [298] = {.lex_state = 36},
  [299] = {.lex_state = 36},
  [300] = {.lex_state = 31},
  [301] = {.lex_state = 27},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 6},
  [307] = {.lex_state = 5},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 4},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 4},
  [315] = {.lex_state = 39},
  [316] = {.lex_state = 36},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 31},
  [319] = {.lex_state = 36},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 39},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 6},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 39},
  [326] = {.lex_state = 4},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 31},
  [329] = {.lex_state = 5},
  [330] = {.lex_state = 6},
  [331] = {.lex_state = 5},
  [332] = {.lex_state = 6},
  [333] = {.lex_state = 27},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 36},
  [336] = {.lex_state = 4},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 5},
  [340] = {.lex_state = 6},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
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
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 31},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 31},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 31},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 31},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 31},
  [384] = {.lex_state = 31},
  [385] = {.lex_state = 31},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 31},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
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
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
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
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
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
    [sym_source_file] = STATE(369),
    [sym_toplevel_items] = STATE(256),
    [sym_assignment] = STATE(335),
    [sym_section] = STATE(335),
    [sym_if_stmt] = STATE(335),
    [sym_for_stmt] = STATE(335),
    [sym_function_declaration] = STATE(335),
    [sym_var_stmt] = STATE(335),
    [sym_base_type_spec] = STATE(174),
    [sym_type_spec] = STATE(198),
    [sym_expression] = STATE(242),
    [sym_unary_expr] = STATE(202),
    [sym_not_expr] = STATE(202),
    [sym_access_expr] = STATE(163),
    [sym_paren_expr] = STATE(155),
    [sym_literal] = STATE(208),
    [sym_true] = STATE(198),
    [sym_false] = STATE(198),
    [sym_tuple_literal] = STATE(198),
    [sym_list_literal] = STATE(198),
    [sym_dict_literal] = STATE(198),
    [sym_or_expr] = STATE(202),
    [sym_number] = STATE(198),
    [sym_other_lit] = STATE(198),
    [sym_quoted_string] = STATE(209),
    [sym_multiline_string] = STATE(209),
    [sym_STR] = STATE(198),
    [aux_sym_source_file_repeat2] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(13),
    [anon_sym_func] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_var] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(21),
    [anon_sym_bool] = ACTIONS(21),
    [anon_sym_int] = ACTIONS(21),
    [anon_sym_char] = ACTIONS(21),
    [anon_sym_string] = ACTIONS(21),
    [anon_sym_float] = ACTIONS(21),
    [anon_sym_Duration] = ACTIONS(21),
    [anon_sym_IpAddr] = ACTIONS(21),
    [anon_sym_CIDR] = ACTIONS(21),
    [anon_sym_Size] = ACTIONS(21),
    [anon_sym_Date] = ACTIONS(21),
    [anon_sym_Time] = ACTIONS(21),
    [anon_sym_DateType] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_typespec] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_tuple] = ACTIONS(29),
    [anon_sym_list] = ACTIONS(31),
    [anon_sym_dict] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_not] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_True] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_False] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
    [sym_integer] = ACTIONS(45),
    [sym_float] = ACTIONS(47),
    [anon_sym_LT_LT] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(55),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(57),
  },
  [2] = {
    [sym_body_items] = STATE(319),
    [sym_assignment] = STATE(298),
    [sym_section] = STATE(298),
    [sym_if_stmt] = STATE(298),
    [sym_for_stmt] = STATE(298),
    [sym_continue_stmt] = STATE(298),
    [sym_break_stmt] = STATE(298),
    [sym_return_stmt] = STATE(298),
    [sym_var_stmt] = STATE(298),
    [sym_base_type_spec] = STATE(174),
    [sym_type_spec] = STATE(198),
    [sym_expression] = STATE(228),
    [sym_unary_expr] = STATE(202),
    [sym_not_expr] = STATE(202),
    [sym_access_expr] = STATE(163),
    [sym_paren_expr] = STATE(155),
    [sym_literal] = STATE(208),
    [sym_true] = STATE(198),
    [sym_false] = STATE(198),
    [sym_tuple_literal] = STATE(198),
    [sym_list_literal] = STATE(198),
    [sym_dict_literal] = STATE(198),
    [sym_or_expr] = STATE(202),
    [sym_number] = STATE(198),
    [sym_other_lit] = STATE(198),
    [sym_quoted_string] = STATE(209),
    [sym_multiline_string] = STATE(209),
    [sym_STR] = STATE(198),
    [aux_sym_body_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(62),
    [anon_sym_RBRACE] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_for] = ACTIONS(70),
    [anon_sym_continue] = ACTIONS(73),
    [anon_sym_break] = ACTIONS(76),
    [anon_sym_return] = ACTIONS(79),
    [anon_sym_func] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_var] = ACTIONS(88),
    [anon_sym_void] = ACTIONS(91),
    [anon_sym_bool] = ACTIONS(91),
    [anon_sym_int] = ACTIONS(91),
    [anon_sym_char] = ACTIONS(91),
    [anon_sym_string] = ACTIONS(91),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_Duration] = ACTIONS(91),
    [anon_sym_IpAddr] = ACTIONS(91),
    [anon_sym_CIDR] = ACTIONS(91),
    [anon_sym_Size] = ACTIONS(91),
    [anon_sym_Date] = ACTIONS(91),
    [anon_sym_Time] = ACTIONS(91),
    [anon_sym_DateType] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(94),
    [anon_sym_typespec] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_tuple] = ACTIONS(103),
    [anon_sym_list] = ACTIONS(106),
    [anon_sym_dict] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [anon_sym_not] = ACTIONS(115),
    [anon_sym_DOLLAR] = ACTIONS(118),
    [anon_sym_true] = ACTIONS(121),
    [anon_sym_True] = ACTIONS(121),
    [anon_sym_false] = ACTIONS(124),
    [anon_sym_False] = ACTIONS(124),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
    [sym_integer] = ACTIONS(127),
    [sym_float] = ACTIONS(130),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(136),
    [anon_sym_SQUOTE] = ACTIONS(139),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(142),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(145),
  },
  [3] = {
    [sym_body_items] = STATE(253),
    [sym_assignment] = STATE(298),
    [sym_section] = STATE(298),
    [sym_if_stmt] = STATE(298),
    [sym_for_stmt] = STATE(298),
    [sym_continue_stmt] = STATE(298),
    [sym_break_stmt] = STATE(298),
    [sym_return_stmt] = STATE(298),
    [sym_var_stmt] = STATE(298),
    [sym_base_type_spec] = STATE(174),
    [sym_type_spec] = STATE(198),
    [sym_expression] = STATE(228),
    [sym_unary_expr] = STATE(202),
    [sym_not_expr] = STATE(202),
    [sym_access_expr] = STATE(163),
    [sym_paren_expr] = STATE(155),
    [sym_literal] = STATE(208),
    [sym_true] = STATE(198),
    [sym_false] = STATE(198),
    [sym_tuple_literal] = STATE(198),
    [sym_list_literal] = STATE(198),
    [sym_dict_literal] = STATE(198),
    [sym_or_expr] = STATE(202),
    [sym_number] = STATE(198),
    [sym_other_lit] = STATE(198),
    [sym_quoted_string] = STATE(209),
    [sym_multiline_string] = STATE(209),
    [sym_STR] = STATE(198),
    [aux_sym_body_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(148),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(13),
    [anon_sym_continue] = ACTIONS(150),
    [anon_sym_break] = ACTIONS(152),
    [anon_sym_return] = ACTIONS(154),
    [anon_sym_func] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_var] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(21),
    [anon_sym_bool] = ACTIONS(21),
    [anon_sym_int] = ACTIONS(21),
    [anon_sym_char] = ACTIONS(21),
    [anon_sym_string] = ACTIONS(21),
    [anon_sym_float] = ACTIONS(21),
    [anon_sym_Duration] = ACTIONS(21),
    [anon_sym_IpAddr] = ACTIONS(21),
    [anon_sym_CIDR] = ACTIONS(21),
    [anon_sym_Size] = ACTIONS(21),
    [anon_sym_Date] = ACTIONS(21),
    [anon_sym_Time] = ACTIONS(21),
    [anon_sym_DateType] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_typespec] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_tuple] = ACTIONS(29),
    [anon_sym_list] = ACTIONS(31),
    [anon_sym_dict] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_not] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_True] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_False] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
    [sym_integer] = ACTIONS(45),
    [sym_float] = ACTIONS(47),
    [anon_sym_LT_LT] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(55),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(57),
  },
  [4] = {
    [sym_body_items] = STATE(272),
    [sym_assignment] = STATE(298),
    [sym_section] = STATE(298),
    [sym_if_stmt] = STATE(298),
    [sym_for_stmt] = STATE(298),
    [sym_continue_stmt] = STATE(298),
    [sym_break_stmt] = STATE(298),
    [sym_return_stmt] = STATE(298),
    [sym_var_stmt] = STATE(298),
    [sym_base_type_spec] = STATE(174),
    [sym_type_spec] = STATE(198),
    [sym_expression] = STATE(228),
    [sym_unary_expr] = STATE(202),
    [sym_not_expr] = STATE(202),
    [sym_access_expr] = STATE(163),
    [sym_paren_expr] = STATE(155),
    [sym_literal] = STATE(208),
    [sym_true] = STATE(198),
    [sym_false] = STATE(198),
    [sym_tuple_literal] = STATE(198),
    [sym_list_literal] = STATE(198),
    [sym_dict_literal] = STATE(198),
    [sym_or_expr] = STATE(202),
    [sym_number] = STATE(198),
    [sym_other_lit] = STATE(198),
    [sym_quoted_string] = STATE(209),
    [sym_multiline_string] = STATE(209),
    [sym_STR] = STATE(198),
    [aux_sym_body_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(158),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(13),
    [anon_sym_continue] = ACTIONS(150),
    [anon_sym_break] = ACTIONS(152),
    [anon_sym_return] = ACTIONS(154),
    [anon_sym_func] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_var] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(21),
    [anon_sym_bool] = ACTIONS(21),
    [anon_sym_int] = ACTIONS(21),
    [anon_sym_char] = ACTIONS(21),
    [anon_sym_string] = ACTIONS(21),
    [anon_sym_float] = ACTIONS(21),
    [anon_sym_Duration] = ACTIONS(21),
    [anon_sym_IpAddr] = ACTIONS(21),
    [anon_sym_CIDR] = ACTIONS(21),
    [anon_sym_Size] = ACTIONS(21),
    [anon_sym_Date] = ACTIONS(21),
    [anon_sym_Time] = ACTIONS(21),
    [anon_sym_DateType] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_typespec] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_tuple] = ACTIONS(29),
    [anon_sym_list] = ACTIONS(31),
    [anon_sym_dict] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_not] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_True] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_False] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
    [sym_integer] = ACTIONS(45),
    [sym_float] = ACTIONS(47),
    [anon_sym_LT_LT] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(55),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(57),
  },
  [5] = {
    [sym_toplevel_items] = STATE(299),
    [sym_assignment] = STATE(335),
    [sym_section] = STATE(335),
    [sym_if_stmt] = STATE(335),
    [sym_for_stmt] = STATE(335),
    [sym_function_declaration] = STATE(335),
    [sym_var_stmt] = STATE(335),
    [sym_base_type_spec] = STATE(174),
    [sym_type_spec] = STATE(198),
    [sym_expression] = STATE(242),
    [sym_unary_expr] = STATE(202),
    [sym_not_expr] = STATE(202),
    [sym_access_expr] = STATE(163),
    [sym_paren_expr] = STATE(155),
    [sym_literal] = STATE(208),
    [sym_true] = STATE(198),
    [sym_false] = STATE(198),
    [sym_tuple_literal] = STATE(198),
    [sym_list_literal] = STATE(198),
    [sym_dict_literal] = STATE(198),
    [sym_or_expr] = STATE(202),
    [sym_number] = STATE(198),
    [sym_other_lit] = STATE(198),
    [sym_quoted_string] = STATE(209),
    [sym_multiline_string] = STATE(209),
    [sym_STR] = STATE(198),
    [aux_sym_source_file_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(160),
    [sym_identifier] = ACTIONS(162),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_if] = ACTIONS(168),
    [anon_sym_for] = ACTIONS(171),
    [anon_sym_func] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_var] = ACTIONS(180),
    [anon_sym_void] = ACTIONS(183),
    [anon_sym_bool] = ACTIONS(183),
    [anon_sym_int] = ACTIONS(183),
    [anon_sym_char] = ACTIONS(183),
    [anon_sym_string] = ACTIONS(183),
    [anon_sym_float] = ACTIONS(183),
    [anon_sym_Duration] = ACTIONS(183),
    [anon_sym_IpAddr] = ACTIONS(183),
    [anon_sym_CIDR] = ACTIONS(183),
    [anon_sym_Size] = ACTIONS(183),
    [anon_sym_Date] = ACTIONS(183),
    [anon_sym_Time] = ACTIONS(183),
    [anon_sym_DateType] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(186),
    [anon_sym_typespec] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(192),
    [anon_sym_tuple] = ACTIONS(195),
    [anon_sym_list] = ACTIONS(198),
    [anon_sym_dict] = ACTIONS(201),
    [anon_sym_PLUS] = ACTIONS(204),
    [anon_sym_DASH] = ACTIONS(204),
    [anon_sym_not] = ACTIONS(207),
    [anon_sym_DOLLAR] = ACTIONS(210),
    [anon_sym_true] = ACTIONS(213),
    [anon_sym_True] = ACTIONS(213),
    [anon_sym_false] = ACTIONS(216),
    [anon_sym_False] = ACTIONS(216),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
    [sym_integer] = ACTIONS(219),
    [sym_float] = ACTIONS(222),
    [anon_sym_LT_LT] = ACTIONS(225),
    [anon_sym_DQUOTE] = ACTIONS(228),
    [anon_sym_SQUOTE] = ACTIONS(231),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(234),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(237),
  },
  [6] = {
    [sym_toplevel_items] = STATE(258),
    [sym_assignment] = STATE(335),
    [sym_section] = STATE(335),
    [sym_if_stmt] = STATE(335),
    [sym_for_stmt] = STATE(335),
    [sym_function_declaration] = STATE(335),
    [sym_var_stmt] = STATE(335),
    [sym_base_type_spec] = STATE(174),
    [sym_type_spec] = STATE(198),
    [sym_expression] = STATE(242),
    [sym_unary_expr] = STATE(202),
    [sym_not_expr] = STATE(202),
    [sym_access_expr] = STATE(163),
    [sym_paren_expr] = STATE(155),
    [sym_literal] = STATE(208),
    [sym_true] = STATE(198),
    [sym_false] = STATE(198),
    [sym_tuple_literal] = STATE(198),
    [sym_list_literal] = STATE(198),
    [sym_dict_literal] = STATE(198),
    [sym_or_expr] = STATE(202),
    [sym_number] = STATE(198),
    [sym_other_lit] = STATE(198),
    [sym_quoted_string] = STATE(209),
    [sym_multiline_string] = STATE(209),
    [sym_STR] = STATE(198),
    [aux_sym_source_file_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(240),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(13),
    [anon_sym_func] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_var] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(21),
    [anon_sym_bool] = ACTIONS(21),
    [anon_sym_int] = ACTIONS(21),
    [anon_sym_char] = ACTIONS(21),
    [anon_sym_string] = ACTIONS(21),
    [anon_sym_float] = ACTIONS(21),
    [anon_sym_Duration] = ACTIONS(21),
    [anon_sym_IpAddr] = ACTIONS(21),
    [anon_sym_CIDR] = ACTIONS(21),
    [anon_sym_Size] = ACTIONS(21),
    [anon_sym_Date] = ACTIONS(21),
    [anon_sym_Time] = ACTIONS(21),
    [anon_sym_DateType] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_typespec] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_tuple] = ACTIONS(29),
    [anon_sym_list] = ACTIONS(31),
    [anon_sym_dict] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_not] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_True] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_False] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
    [sym_integer] = ACTIONS(45),
    [sym_float] = ACTIONS(47),
    [anon_sym_LT_LT] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(55),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(57),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 31,
    ACTIONS(25), 1,
      anon_sym_typespec,
    ACTIONS(29), 1,
      anon_sym_tuple,
    ACTIONS(31), 1,
      anon_sym_list,
    ACTIONS(33), 1,
      anon_sym_dict,
    ACTIONS(37), 1,
      anon_sym_not,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(156), 1,
      anon_sym_func,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      anon_sym_BQUOTE,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      sym_NL,
    ACTIONS(260), 1,
      anon_sym_LT_LT,
    ACTIONS(262), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(264), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(155), 1,
      sym_paren_expr,
    STATE(174), 1,
      sym_base_type_spec,
    STATE(226), 1,
      sym_expression,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(43), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(45), 2,
      sym_integer,
      sym_float,
    ACTIONS(242), 2,
      anon_sym_DOLLAR,
      sym_identifier,
    ACTIONS(244), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(254), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    STATE(208), 2,
      sym_access_expr,
      sym_literal,
    STATE(209), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(202), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(198), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(21), 13,
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
  [125] = 32,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(223), 1,
      sym_eq_expr,
    STATE(333), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [250] = 32,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(150), 1,
      sym_ne_expr,
    STATE(302), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [375] = 32,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(205), 1,
      sym_mod_expr,
    STATE(311), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [500] = 32,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(312), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(238), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [625] = 32,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(227), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [750] = 32,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(190), 1,
      sym_and_expr,
    STATE(268), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [875] = 32,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(197), 1,
      sym_div_expr,
    STATE(304), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [1000] = 32,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(316), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(236), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [1125] = 32,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(203), 1,
      sym_mul_expr,
    STATE(309), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [1250] = 32,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(199), 1,
      sym_ne_expr,
    STATE(334), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [1375] = 32,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(182), 1,
      sym_gte_expr,
    STATE(328), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [1500] = 32,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(244), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [1625] = 32,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(224), 1,
      sym_lte_expr,
    STATE(325), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [1750] = 32,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(220), 1,
      sym_gt_expr,
    STATE(321), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [1875] = 32,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(138), 1,
      sym_and_expr,
    STATE(275), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [2000] = 32,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(141), 1,
      sym_div_expr,
    STATE(324), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [2125] = 32,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(140), 1,
      sym_mul_expr,
    STATE(285), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [2250] = 32,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(119), 1,
      sym_mod_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(287), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [2375] = 32,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(218), 1,
      sym_lt_expr,
    STATE(318), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [2500] = 32,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(135), 1,
      sym_minus_expr,
    STATE(290), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [2625] = 32,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(133), 1,
      sym_plus_expr,
    STATE(292), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [2750] = 32,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(128), 1,
      sym_lt_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(294), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [2875] = 32,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(213), 1,
      sym_plus_expr,
    STATE(317), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [3000] = 32,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(125), 1,
      sym_gt_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(295), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [3125] = 32,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(123), 1,
      sym_lte_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(297), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [3250] = 32,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(136), 1,
      sym_gte_expr,
    STATE(300), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [3375] = 32,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(210), 1,
      sym_minus_expr,
    STATE(315), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [3500] = 32,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(149), 1,
      sym_eq_expr,
    STATE(301), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [3625] = 31,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(347), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [3747] = 31,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(320), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [3869] = 31,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(252), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [3991] = 31,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(235), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [4113] = 31,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(296), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [4235] = 31,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(345), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [4357] = 31,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(243), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [4479] = 31,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_typespec,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_tuple,
    ACTIONS(31), 1,
      anon_sym_list,
    ACTIONS(33), 1,
      anon_sym_dict,
    ACTIONS(37), 1,
      anon_sym_not,
    ACTIONS(39), 1,
      anon_sym_DOLLAR,
    ACTIONS(45), 1,
      sym_integer,
    ACTIONS(47), 1,
      sym_float,
    ACTIONS(49), 1,
      anon_sym_LT_LT,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(57), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(156), 1,
      anon_sym_func,
    ACTIONS(242), 1,
      sym_identifier,
    STATE(155), 1,
      sym_paren_expr,
    STATE(174), 1,
      sym_base_type_spec,
    STATE(212), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(43), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(208), 2,
      sym_access_expr,
      sym_literal,
    STATE(209), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(202), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(198), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(21), 13,
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
  [4601] = 31,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(240), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [4723] = 31,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_typespec,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_tuple,
    ACTIONS(31), 1,
      anon_sym_list,
    ACTIONS(33), 1,
      anon_sym_dict,
    ACTIONS(37), 1,
      anon_sym_not,
    ACTIONS(39), 1,
      anon_sym_DOLLAR,
    ACTIONS(45), 1,
      sym_integer,
    ACTIONS(47), 1,
      sym_float,
    ACTIONS(49), 1,
      anon_sym_LT_LT,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(57), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(156), 1,
      anon_sym_func,
    ACTIONS(242), 1,
      sym_identifier,
    STATE(155), 1,
      sym_paren_expr,
    STATE(174), 1,
      sym_base_type_spec,
    STATE(191), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(43), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(208), 2,
      sym_access_expr,
      sym_literal,
    STATE(209), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(202), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(198), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(21), 13,
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
  [4845] = 31,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(231), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [4967] = 31,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(284), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [5089] = 31,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(237), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [5211] = 31,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(146), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [5333] = 31,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(265), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [5455] = 31,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(264), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [5577] = 31,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(255), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [5699] = 31,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_typespec,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_tuple,
    ACTIONS(31), 1,
      anon_sym_list,
    ACTIONS(33), 1,
      anon_sym_dict,
    ACTIONS(37), 1,
      anon_sym_not,
    ACTIONS(39), 1,
      anon_sym_DOLLAR,
    ACTIONS(45), 1,
      sym_integer,
    ACTIONS(47), 1,
      sym_float,
    ACTIONS(49), 1,
      anon_sym_LT_LT,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(57), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(156), 1,
      anon_sym_func,
    ACTIONS(242), 1,
      sym_identifier,
    STATE(155), 1,
      sym_paren_expr,
    STATE(174), 1,
      sym_base_type_spec,
    STATE(214), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(43), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(208), 2,
      sym_access_expr,
      sym_literal,
    STATE(209), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(202), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(198), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(21), 13,
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
  [5821] = 31,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(346), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [5943] = 31,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(248), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [6065] = 31,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(337), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [6187] = 31,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(250), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [6309] = 31,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(290), 1,
      anon_sym_not,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(282), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 2,
      sym_access_expr,
      sym_literal,
    STATE(126), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [6431] = 27,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_func,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_typespec,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_tuple,
    ACTIONS(284), 1,
      anon_sym_list,
    ACTIONS(286), 1,
      anon_sym_dict,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    ACTIONS(302), 1,
      anon_sym_LT_LT,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(129), 1,
      sym_base_type_spec,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(294), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(296), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(117), 2,
      sym_access_expr,
      sym_literal,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(127), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(274), 13,
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
  [6538] = 27,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_typespec,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_tuple,
    ACTIONS(31), 1,
      anon_sym_list,
    ACTIONS(33), 1,
      anon_sym_dict,
    ACTIONS(39), 1,
      anon_sym_DOLLAR,
    ACTIONS(45), 1,
      sym_integer,
    ACTIONS(47), 1,
      sym_float,
    ACTIONS(49), 1,
      anon_sym_LT_LT,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(57), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(156), 1,
      anon_sym_func,
    ACTIONS(242), 1,
      sym_identifier,
    STATE(155), 1,
      sym_paren_expr,
    STATE(174), 1,
      sym_base_type_spec,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(43), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(209), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(217), 2,
      sym_access_expr,
      sym_literal,
    STATE(198), 9,
      sym_type_spec,
      sym_true,
      sym_false,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_number,
      sym_other_lit,
      sym_STR,
    ACTIONS(21), 13,
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
  [6645] = 6,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
    ACTIONS(324), 1,
      anon_sym_SEMI,
    ACTIONS(327), 1,
      sym_NL,
    STATE(61), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(322), 45,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_if,
      anon_sym_for,
      anon_sym_continue,
      anon_sym_break,
      anon_sym_return,
      anon_sym_func,
      anon_sym_LPAREN,
      anon_sym_var,
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
      anon_sym_BQUOTE,
      anon_sym_typespec,
      anon_sym_LBRACK,
      anon_sym_tuple,
      anon_sym_list,
      anon_sym_dict,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_DOLLAR,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
      sym_integer,
      sym_float,
      anon_sym_LT_LT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_identifier,
  [6709] = 5,
    ACTIONS(332), 1,
      anon_sym_SEMI,
    ACTIONS(334), 1,
      sym_NL,
    STATE(61), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(330), 45,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_if,
      anon_sym_for,
      anon_sym_continue,
      anon_sym_break,
      anon_sym_return,
      anon_sym_func,
      anon_sym_LPAREN,
      anon_sym_var,
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
      anon_sym_BQUOTE,
      anon_sym_typespec,
      anon_sym_LBRACK,
      anon_sym_tuple,
      anon_sym_list,
      anon_sym_dict,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_DOLLAR,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
      sym_integer,
      sym_float,
      anon_sym_LT_LT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_identifier,
  [6770] = 6,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(332), 1,
      anon_sym_SEMI,
    ACTIONS(334), 1,
      sym_NL,
    STATE(61), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(336), 41,
      anon_sym_LBRACE,
      anon_sym_if,
      anon_sym_for,
      anon_sym_func,
      anon_sym_LPAREN,
      anon_sym_var,
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
      anon_sym_BQUOTE,
      anon_sym_typespec,
      anon_sym_LBRACK,
      anon_sym_tuple,
      anon_sym_list,
      anon_sym_dict,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_DOLLAR,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
      sym_integer,
      sym_float,
      anon_sym_LT_LT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_identifier,
  [6830] = 4,
    ACTIONS(342), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(340), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(338), 38,
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
  [6884] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(346), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(344), 38,
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
  [6935] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(350), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(348), 38,
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
  [6986] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(354), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(352), 38,
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
  [7037] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(358), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(356), 38,
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
  [7088] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(362), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(360), 38,
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
  [7139] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(366), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(364), 38,
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
  [7190] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(370), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(368), 38,
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
  [7241] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(374), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(372), 38,
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
  [7292] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(340), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(338), 38,
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
  [7343] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(378), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(376), 38,
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
  [7394] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(382), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(380), 38,
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
  [7445] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(386), 11,
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
    ACTIONS(384), 27,
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
  [7492] = 7,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    ACTIONS(394), 1,
      anon_sym_LBRACK,
    ACTIONS(396), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(78), 4,
      sym_member_expr,
      sym_index_expr,
      sym_call_actuals,
      aux_sym_access_expr_repeat1,
    ACTIONS(390), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(388), 19,
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
  [7540] = 7,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    ACTIONS(394), 1,
      anon_sym_LBRACK,
    ACTIONS(396), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(79), 4,
      sym_member_expr,
      sym_index_expr,
      sym_call_actuals,
      aux_sym_access_expr_repeat1,
    ACTIONS(400), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(398), 19,
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
  [7588] = 7,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_LBRACK,
    ACTIONS(412), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(79), 4,
      sym_member_expr,
      sym_index_expr,
      sym_call_actuals,
      aux_sym_access_expr_repeat1,
    ACTIONS(404), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(402), 19,
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
  [7636] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(417), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(415), 22,
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
  [7672] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(421), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(419), 22,
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
  [7708] = 16,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(423), 1,
      sym_identifier,
    ACTIONS(425), 1,
      anon_sym_LBRACE,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      anon_sym_LBRACK,
    ACTIONS(431), 1,
      anon_sym_DOT,
    ACTIONS(433), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(261), 1,
      sym_body,
    STATE(358), 1,
      sym_STR,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(388), 2,
      ts_builtin_sym_end,
      sym_NL,
    STATE(122), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(156), 4,
      sym_member_expr,
      sym_index_expr,
      sym_call_actuals,
      aux_sym_access_expr_repeat1,
    ACTIONS(390), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_COLON_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [7770] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(439), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(437), 22,
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
  [7806] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(443), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(441), 22,
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
  [7842] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(447), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(445), 22,
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
  [7878] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(451), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(449), 22,
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
  [7914] = 13,
    ACTIONS(453), 1,
      anon_sym_func,
    ACTIONS(456), 1,
      anon_sym_LPAREN,
    ACTIONS(462), 1,
      anon_sym_Date,
    ACTIONS(465), 1,
      anon_sym_BQUOTE,
    ACTIONS(468), 1,
      anon_sym_typespec,
    ACTIONS(471), 1,
      anon_sym_RBRACK,
    ACTIONS(473), 1,
      anon_sym_tuple,
    ACTIONS(476), 1,
      anon_sym_list,
    ACTIONS(479), 1,
      anon_sym_dict,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(72), 2,
      sym_base_type_spec,
      sym_func_spec,
    STATE(87), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    ACTIONS(459), 12,
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
  [7968] = 13,
    ACTIONS(274), 1,
      anon_sym_Date,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(482), 1,
      anon_sym_func,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      anon_sym_typespec,
    ACTIONS(490), 1,
      anon_sym_RBRACK,
    ACTIONS(492), 1,
      anon_sym_tuple,
    ACTIONS(494), 1,
      anon_sym_list,
    ACTIONS(496), 1,
      anon_sym_dict,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(72), 2,
      sym_base_type_spec,
      sym_func_spec,
    STATE(87), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    ACTIONS(486), 12,
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
  [8022] = 13,
    ACTIONS(274), 1,
      anon_sym_Date,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(482), 1,
      anon_sym_func,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      anon_sym_typespec,
    ACTIONS(492), 1,
      anon_sym_tuple,
    ACTIONS(494), 1,
      anon_sym_list,
    ACTIONS(496), 1,
      anon_sym_dict,
    ACTIONS(498), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(72), 2,
      sym_base_type_spec,
      sym_func_spec,
    STATE(87), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    ACTIONS(486), 12,
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
  [8076] = 12,
    ACTIONS(274), 1,
      anon_sym_Date,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(482), 1,
      anon_sym_func,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      anon_sym_typespec,
    ACTIONS(492), 1,
      anon_sym_tuple,
    ACTIONS(494), 1,
      anon_sym_list,
    ACTIONS(496), 1,
      anon_sym_dict,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(72), 2,
      sym_base_type_spec,
      sym_func_spec,
    STATE(89), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    ACTIONS(486), 12,
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
  [8127] = 12,
    ACTIONS(274), 1,
      anon_sym_Date,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(482), 1,
      anon_sym_func,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      anon_sym_typespec,
    ACTIONS(492), 1,
      anon_sym_tuple,
    ACTIONS(494), 1,
      anon_sym_list,
    ACTIONS(496), 1,
      anon_sym_dict,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(72), 2,
      sym_base_type_spec,
      sym_func_spec,
    STATE(88), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    ACTIONS(486), 12,
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
  [8178] = 12,
    ACTIONS(274), 1,
      anon_sym_Date,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(482), 1,
      anon_sym_func,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      anon_sym_typespec,
    ACTIONS(492), 1,
      anon_sym_tuple,
    ACTIONS(494), 1,
      anon_sym_list,
    ACTIONS(496), 1,
      anon_sym_dict,
    STATE(386), 1,
      sym_type_spec_r,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(72), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(486), 12,
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
  [8228] = 12,
    ACTIONS(274), 1,
      anon_sym_Date,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(482), 1,
      anon_sym_func,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      anon_sym_typespec,
    ACTIONS(492), 1,
      anon_sym_tuple,
    ACTIONS(494), 1,
      anon_sym_list,
    ACTIONS(496), 1,
      anon_sym_dict,
    STATE(391), 1,
      sym_type_spec_r,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(72), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(486), 12,
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
  [8278] = 12,
    ACTIONS(274), 1,
      anon_sym_Date,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(482), 1,
      anon_sym_func,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      anon_sym_typespec,
    ACTIONS(492), 1,
      anon_sym_tuple,
    ACTIONS(494), 1,
      anon_sym_list,
    ACTIONS(496), 1,
      anon_sym_dict,
    STATE(397), 1,
      sym_type_spec_r,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(72), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(486), 12,
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
  [8328] = 12,
    ACTIONS(21), 1,
      anon_sym_Date,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(500), 1,
      anon_sym_func,
    ACTIONS(502), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_typespec,
    ACTIONS(508), 1,
      anon_sym_tuple,
    ACTIONS(510), 1,
      anon_sym_list,
    ACTIONS(512), 1,
      anon_sym_dict,
    STATE(179), 1,
      sym_type_spec_r,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(167), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(504), 12,
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
  [8378] = 12,
    ACTIONS(21), 1,
      anon_sym_Date,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(500), 1,
      anon_sym_func,
    ACTIONS(502), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_typespec,
    ACTIONS(508), 1,
      anon_sym_tuple,
    ACTIONS(510), 1,
      anon_sym_list,
    ACTIONS(512), 1,
      anon_sym_dict,
    STATE(176), 1,
      sym_type_spec_r,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(167), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(504), 12,
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
  [8428] = 12,
    ACTIONS(274), 1,
      anon_sym_Date,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(482), 1,
      anon_sym_func,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      anon_sym_typespec,
    ACTIONS(492), 1,
      anon_sym_tuple,
    ACTIONS(494), 1,
      anon_sym_list,
    ACTIONS(496), 1,
      anon_sym_dict,
    STATE(363), 1,
      sym_type_spec_r,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(72), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(486), 12,
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
    ACTIONS(274), 1,
      anon_sym_Date,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(482), 1,
      anon_sym_func,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      anon_sym_typespec,
    ACTIONS(492), 1,
      anon_sym_tuple,
    ACTIONS(494), 1,
      anon_sym_list,
    ACTIONS(496), 1,
      anon_sym_dict,
    STATE(66), 1,
      sym_type_spec_r,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(72), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(486), 12,
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
  [8528] = 12,
    ACTIONS(274), 1,
      anon_sym_Date,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(482), 1,
      anon_sym_func,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      anon_sym_typespec,
    ACTIONS(492), 1,
      anon_sym_tuple,
    ACTIONS(494), 1,
      anon_sym_list,
    ACTIONS(496), 1,
      anon_sym_dict,
    STATE(381), 1,
      sym_type_spec_r,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(72), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(486), 12,
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
  [8578] = 12,
    ACTIONS(274), 1,
      anon_sym_Date,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(482), 1,
      anon_sym_func,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      anon_sym_typespec,
    ACTIONS(492), 1,
      anon_sym_tuple,
    ACTIONS(494), 1,
      anon_sym_list,
    ACTIONS(496), 1,
      anon_sym_dict,
    STATE(378), 1,
      sym_type_spec_r,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(72), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(486), 12,
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
  [8628] = 12,
    ACTIONS(21), 1,
      anon_sym_Date,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(500), 1,
      anon_sym_func,
    ACTIONS(502), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_typespec,
    ACTIONS(508), 1,
      anon_sym_tuple,
    ACTIONS(510), 1,
      anon_sym_list,
    ACTIONS(512), 1,
      anon_sym_dict,
    STATE(168), 1,
      sym_type_spec_r,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(167), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(504), 12,
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
  [8678] = 12,
    ACTIONS(274), 1,
      anon_sym_Date,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(482), 1,
      anon_sym_func,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      anon_sym_typespec,
    ACTIONS(492), 1,
      anon_sym_tuple,
    ACTIONS(494), 1,
      anon_sym_list,
    ACTIONS(496), 1,
      anon_sym_dict,
    STATE(273), 1,
      sym_type_spec_r,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(72), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(486), 12,
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
  [8728] = 12,
    ACTIONS(274), 1,
      anon_sym_Date,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(482), 1,
      anon_sym_func,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      anon_sym_typespec,
    ACTIONS(492), 1,
      anon_sym_tuple,
    ACTIONS(494), 1,
      anon_sym_list,
    ACTIONS(496), 1,
      anon_sym_dict,
    STATE(398), 1,
      sym_type_spec_r,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(72), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(486), 12,
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
  [8778] = 12,
    ACTIONS(274), 1,
      anon_sym_Date,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(482), 1,
      anon_sym_func,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      anon_sym_typespec,
    ACTIONS(492), 1,
      anon_sym_tuple,
    ACTIONS(494), 1,
      anon_sym_list,
    ACTIONS(496), 1,
      anon_sym_dict,
    STATE(382), 1,
      sym_type_spec_r,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(72), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(486), 12,
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
  [8828] = 12,
    ACTIONS(274), 1,
      anon_sym_Date,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(482), 1,
      anon_sym_func,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      anon_sym_typespec,
    ACTIONS(492), 1,
      anon_sym_tuple,
    ACTIONS(494), 1,
      anon_sym_list,
    ACTIONS(496), 1,
      anon_sym_dict,
    STATE(372), 1,
      sym_type_spec_r,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(72), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(486), 12,
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
  [8878] = 12,
    ACTIONS(274), 1,
      anon_sym_Date,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(482), 1,
      anon_sym_func,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      anon_sym_typespec,
    ACTIONS(492), 1,
      anon_sym_tuple,
    ACTIONS(494), 1,
      anon_sym_list,
    ACTIONS(496), 1,
      anon_sym_dict,
    STATE(70), 1,
      sym_type_spec_r,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(72), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(486), 12,
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
  [8928] = 12,
    ACTIONS(274), 1,
      anon_sym_Date,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(482), 1,
      anon_sym_func,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      anon_sym_typespec,
    ACTIONS(492), 1,
      anon_sym_tuple,
    ACTIONS(494), 1,
      anon_sym_list,
    ACTIONS(496), 1,
      anon_sym_dict,
    STATE(65), 1,
      sym_type_spec_r,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(72), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(486), 12,
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
  [8978] = 12,
    ACTIONS(274), 1,
      anon_sym_Date,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(482), 1,
      anon_sym_func,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      anon_sym_typespec,
    ACTIONS(492), 1,
      anon_sym_tuple,
    ACTIONS(494), 1,
      anon_sym_list,
    ACTIONS(496), 1,
      anon_sym_dict,
    STATE(260), 1,
      sym_type_spec_r,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(72), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(486), 12,
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
  [9028] = 12,
    ACTIONS(274), 1,
      anon_sym_Date,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(482), 1,
      anon_sym_func,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      anon_sym_typespec,
    ACTIONS(492), 1,
      anon_sym_tuple,
    ACTIONS(494), 1,
      anon_sym_list,
    ACTIONS(496), 1,
      anon_sym_dict,
    STATE(387), 1,
      sym_type_spec_r,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(72), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(486), 12,
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
  [9078] = 12,
    ACTIONS(274), 1,
      anon_sym_Date,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(482), 1,
      anon_sym_func,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      anon_sym_typespec,
    ACTIONS(492), 1,
      anon_sym_tuple,
    ACTIONS(494), 1,
      anon_sym_list,
    ACTIONS(496), 1,
      anon_sym_dict,
    STATE(327), 1,
      sym_type_spec_r,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(72), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(486), 12,
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
  [9128] = 12,
    ACTIONS(21), 1,
      anon_sym_Date,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(500), 1,
      anon_sym_func,
    ACTIONS(502), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_typespec,
    ACTIONS(508), 1,
      anon_sym_tuple,
    ACTIONS(510), 1,
      anon_sym_list,
    ACTIONS(512), 1,
      anon_sym_dict,
    STATE(175), 1,
      sym_type_spec_r,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(167), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(504), 12,
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
  [9178] = 12,
    ACTIONS(274), 1,
      anon_sym_Date,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(482), 1,
      anon_sym_func,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      anon_sym_typespec,
    ACTIONS(492), 1,
      anon_sym_tuple,
    ACTIONS(494), 1,
      anon_sym_list,
    ACTIONS(496), 1,
      anon_sym_dict,
    STATE(75), 1,
      sym_type_spec_r,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(72), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(486), 12,
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
  [9228] = 12,
    ACTIONS(274), 1,
      anon_sym_Date,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(482), 1,
      anon_sym_func,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      anon_sym_typespec,
    ACTIONS(492), 1,
      anon_sym_tuple,
    ACTIONS(494), 1,
      anon_sym_list,
    ACTIONS(496), 1,
      anon_sym_dict,
    STATE(394), 1,
      sym_type_spec_r,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(72), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(486), 12,
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
  [9278] = 12,
    ACTIONS(274), 1,
      anon_sym_Date,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(482), 1,
      anon_sym_func,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      anon_sym_typespec,
    ACTIONS(492), 1,
      anon_sym_tuple,
    ACTIONS(494), 1,
      anon_sym_list,
    ACTIONS(496), 1,
      anon_sym_dict,
    STATE(392), 1,
      sym_type_spec_r,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(72), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(486), 12,
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
  [9328] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(516), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(514), 19,
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
  [9359] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(520), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(518), 19,
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
  [9390] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(524), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(522), 19,
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
  [9421] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(528), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(526), 19,
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
  [9452] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(532), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(530), 19,
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
  [9483] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(536), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(534), 19,
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
  [9514] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(540), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(538), 19,
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
  [9545] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(544), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(542), 19,
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
  [9576] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(548), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(546), 19,
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
  [9607] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(552), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(550), 19,
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
  [9638] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(556), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(554), 19,
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
  [9669] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(560), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(558), 19,
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
  [9700] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(564), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(562), 19,
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
  [9731] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(568), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(566), 19,
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
  [9762] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(572), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(570), 19,
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
  [9793] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(576), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(574), 19,
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
  [9824] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(580), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(578), 19,
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
  [9855] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(584), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(582), 19,
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
  [9886] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(588), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(586), 19,
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
  [9917] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(592), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(590), 19,
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
  [9948] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(596), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(594), 19,
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
  [9979] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(600), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(598), 19,
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
  [10010] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(604), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(602), 19,
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
  [10041] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(608), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(606), 19,
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
  [10072] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(612), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(610), 19,
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
  [10103] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(616), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(614), 19,
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
  [10134] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(620), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(618), 19,
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
  [10165] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(624), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(622), 19,
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
  [10196] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(628), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(626), 19,
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
  [10227] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(632), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(630), 19,
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
  [10258] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(636), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(634), 19,
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
  [10289] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(640), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(638), 19,
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
  [10320] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(644), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(642), 19,
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
  [10351] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(648), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(646), 19,
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
  [10382] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(652), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(650), 19,
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
  [10413] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(656), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(654), 19,
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
  [10444] = 11,
    ACTIONS(274), 1,
      anon_sym_Date,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(488), 1,
      anon_sym_typespec,
    ACTIONS(492), 1,
      anon_sym_tuple,
    ACTIONS(494), 1,
      anon_sym_list,
    ACTIONS(496), 1,
      anon_sym_dict,
    ACTIONS(658), 1,
      anon_sym_func,
    STATE(129), 1,
      sym_base_type_spec,
    STATE(359), 1,
      sym_type_spec,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(486), 12,
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
  [10490] = 11,
    ACTIONS(21), 1,
      anon_sym_Date,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(506), 1,
      anon_sym_typespec,
    ACTIONS(508), 1,
      anon_sym_tuple,
    ACTIONS(510), 1,
      anon_sym_list,
    ACTIONS(512), 1,
      anon_sym_dict,
    ACTIONS(660), 1,
      anon_sym_func,
    STATE(174), 1,
      sym_base_type_spec,
    STATE(229), 1,
      sym_type_spec,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(504), 12,
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
  [10536] = 11,
    ACTIONS(21), 1,
      anon_sym_Date,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(506), 1,
      anon_sym_typespec,
    ACTIONS(508), 1,
      anon_sym_tuple,
    ACTIONS(510), 1,
      anon_sym_list,
    ACTIONS(512), 1,
      anon_sym_dict,
    ACTIONS(660), 1,
      anon_sym_func,
    STATE(174), 1,
      sym_base_type_spec,
    STATE(230), 1,
      sym_type_spec,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(504), 12,
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
  [10582] = 7,
    ACTIONS(662), 1,
      anon_sym_LPAREN,
    ACTIONS(665), 1,
      anon_sym_LBRACK,
    ACTIONS(668), 1,
      anon_sym_DOT,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(402), 2,
      ts_builtin_sym_end,
      sym_NL,
    STATE(154), 4,
      sym_member_expr,
      sym_index_expr,
      sym_call_actuals,
      aux_sym_access_expr_repeat1,
    ACTIONS(404), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_COLON_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10616] = 7,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      anon_sym_LBRACK,
    ACTIONS(431), 1,
      anon_sym_DOT,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(388), 2,
      ts_builtin_sym_end,
      sym_NL,
    STATE(156), 4,
      sym_member_expr,
      sym_index_expr,
      sym_call_actuals,
      aux_sym_access_expr_repeat1,
    ACTIONS(390), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_COLON_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10650] = 7,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      anon_sym_LBRACK,
    ACTIONS(431), 1,
      anon_sym_DOT,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(398), 2,
      ts_builtin_sym_end,
      sym_NL,
    STATE(154), 4,
      sym_member_expr,
      sym_index_expr,
      sym_call_actuals,
      aux_sym_access_expr_repeat1,
    ACTIONS(400), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_COLON_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10684] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(445), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(447), 11,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_COLON_EQ,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10706] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(441), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(443), 11,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_COLON_EQ,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10728] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(419), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(421), 11,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_COLON_EQ,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10750] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(415), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(417), 11,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_COLON_EQ,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10772] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(449), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(451), 11,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_COLON_EQ,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10794] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(437), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(439), 11,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_COLON_EQ,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10816] = 7,
    ACTIONS(671), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      sym_eq_op,
    STATE(194), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(550), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(673), 3,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_COLON_EQ,
    ACTIONS(552), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10845] = 4,
    ACTIONS(675), 1,
      anon_sym_LBRACK,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(338), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(340), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10864] = 5,
    ACTIONS(681), 1,
      anon_sym_elif,
    STATE(165), 1,
      aux_sym_if_stmt_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(677), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(679), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_else,
  [10884] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(360), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(362), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10900] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(372), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(374), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10916] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(364), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(366), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10932] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(368), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(370), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10948] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(356), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(358), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10964] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(538), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(540), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10980] = 6,
    ACTIONS(688), 1,
      anon_sym_elif,
    ACTIONS(690), 1,
      anon_sym_else,
    STATE(177), 1,
      aux_sym_if_stmt_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(684), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(686), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11002] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(352), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(354), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11018] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(570), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(572), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11034] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(348), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(350), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11050] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(344), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(346), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11066] = 6,
    ACTIONS(688), 1,
      anon_sym_elif,
    ACTIONS(696), 1,
      anon_sym_else,
    STATE(165), 1,
      aux_sym_if_stmt_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(692), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(694), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11088] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(338), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(340), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11104] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(380), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(382), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11120] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(376), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(378), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11136] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(698), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(700), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
  [11151] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(598), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(600), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11166] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(518), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(520), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11181] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(578), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(580), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11196] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(646), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(648), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11211] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(702), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(704), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
  [11226] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(582), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(584), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11241] = 5,
    ACTIONS(710), 1,
      anon_sym_COMMA,
    STATE(207), 1,
      aux_sym_var_stmt_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(706), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(708), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11260] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(574), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(576), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11275] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(606), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(608), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11290] = 4,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(712), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(714), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(716), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11307] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(626), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(628), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11322] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(718), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(720), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
  [11337] = 6,
    ACTIONS(673), 1,
      anon_sym_COLON,
    ACTIONS(722), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      sym_eq_op,
    STATE(233), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(724), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [11358] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(622), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(624), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11373] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(728), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
  [11388] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(618), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(620), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11403] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(562), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(564), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11418] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(654), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(656), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11433] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(642), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(644), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11448] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(634), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(636), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11463] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(558), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(560), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11478] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(614), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(616), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11493] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(630), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(632), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11508] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(530), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(532), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11523] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(602), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(604), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11538] = 5,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    STATE(207), 1,
      aux_sym_var_stmt_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(730), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(732), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11557] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(550), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(552), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11572] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(542), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(544), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11587] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(594), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(596), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11602] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(610), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(612), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11617] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(638), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(640), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11632] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(586), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(588), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11647] = 4,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(716), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(737), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(739), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11664] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(526), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(528), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11679] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(534), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(536), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11694] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(522), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(524), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11709] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(566), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(568), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11724] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(514), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(516), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11739] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(554), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(556), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11754] = 5,
    ACTIONS(710), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_var_stmt_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(741), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(743), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11773] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(590), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(592), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11788] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(650), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(652), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11803] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(546), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(548), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11818] = 5,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    STATE(77), 1,
      sym_paren_expr,
    STATE(266), 1,
      sym_access_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(292), 2,
      anon_sym_DOLLAR,
      sym_identifier,
  [11836] = 4,
    ACTIONS(749), 1,
      sym_NL,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(716), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(747), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11852] = 5,
    ACTIONS(751), 1,
      anon_sym_COMMA,
    ACTIONS(753), 1,
      anon_sym_RPAREN,
    STATE(303), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11870] = 4,
    ACTIONS(759), 1,
      sym_NL,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(716), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(757), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11886] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(761), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(763), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [11900] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(765), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(767), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [11914] = 5,
    ACTIONS(751), 1,
      anon_sym_COMMA,
    ACTIONS(769), 1,
      anon_sym_RPAREN,
    STATE(279), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11932] = 5,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    STATE(77), 1,
      sym_paren_expr,
    STATE(142), 1,
      sym_access_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(292), 2,
      anon_sym_DOLLAR,
      sym_identifier,
  [11950] = 5,
    ACTIONS(771), 1,
      anon_sym_COMMA,
    ACTIONS(776), 1,
      anon_sym_COLON,
    STATE(233), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(774), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [11968] = 6,
    ACTIONS(778), 1,
      sym_identifier,
    ACTIONS(780), 1,
      anon_sym_COMMA,
    ACTIONS(782), 1,
      anon_sym_RPAREN,
    STATE(310), 1,
      sym_param_spec,
    STATE(313), 1,
      aux_sym_formal_spec_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [11988] = 5,
    ACTIONS(751), 1,
      anon_sym_COMMA,
    ACTIONS(784), 1,
      anon_sym_RPAREN,
    STATE(343), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12006] = 5,
    ACTIONS(751), 1,
      anon_sym_COMMA,
    ACTIONS(786), 1,
      anon_sym_RBRACK,
    STATE(344), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12024] = 5,
    ACTIONS(788), 1,
      anon_sym_RBRACE,
    ACTIONS(790), 1,
      anon_sym_COMMA,
    STATE(338), 1,
      aux_sym_dict_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12042] = 5,
    ACTIONS(751), 1,
      anon_sym_COMMA,
    ACTIONS(792), 1,
      anon_sym_RBRACK,
    STATE(288), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12060] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(730), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(732), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [12074] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(794), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [12088] = 5,
    ACTIONS(796), 1,
      anon_sym_LPAREN,
    STATE(155), 1,
      sym_paren_expr,
    STATE(195), 1,
      sym_access_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(39), 2,
      anon_sym_DOLLAR,
      sym_identifier,
  [12106] = 4,
    ACTIONS(800), 1,
      anon_sym_SEMI,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(716), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(798), 2,
      ts_builtin_sym_end,
      sym_NL,
  [12122] = 5,
    ACTIONS(790), 1,
      anon_sym_COMMA,
    ACTIONS(802), 1,
      anon_sym_RBRACE,
    STATE(342), 1,
      aux_sym_dict_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12140] = 5,
    ACTIONS(751), 1,
      anon_sym_COMMA,
    ACTIONS(804), 1,
      anon_sym_RPAREN,
    STATE(348), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12158] = 4,
    ACTIONS(806), 1,
      anon_sym_SQUOTE,
    STATE(249), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(808), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [12173] = 4,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    STATE(246), 1,
      aux_sym_func_spec_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(813), 2,
      anon_sym_RPAREN,
      anon_sym_STAR,
  [12188] = 5,
    ACTIONS(815), 1,
      anon_sym_DQUOTE,
    ACTIONS(817), 1,
      sym_escape_sequence,
    ACTIONS(819), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(278), 1,
      aux_sym__quoted_string_content_double,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
  [12205] = 4,
    ACTIONS(821), 1,
      anon_sym_LBRACE,
    STATE(263), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12220] = 4,
    ACTIONS(815), 1,
      anon_sym_SQUOTE,
    STATE(277), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(823), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [12235] = 4,
    ACTIONS(821), 1,
      anon_sym_LBRACE,
    STATE(254), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12250] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(825), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(827), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12263] = 4,
    ACTIONS(821), 1,
      anon_sym_LBRACE,
    STATE(172), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12278] = 5,
    ACTIONS(829), 1,
      anon_sym_SEMI,
    ACTIONS(831), 1,
      anon_sym_RBRACE,
    ACTIONS(833), 1,
      sym_NL,
    STATE(62), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
  [12295] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(835), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(837), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12308] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(839), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [12321] = 5,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(841), 1,
      anon_sym_SEMI,
    ACTIONS(843), 1,
      sym_NL,
    STATE(63), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
  [12338] = 5,
    ACTIONS(817), 1,
      sym_escape_sequence,
    ACTIONS(819), 1,
      aux_sym__quoted_string_content_double_token1,
    ACTIONS(845), 1,
      anon_sym_DQUOTE,
    STATE(278), 1,
      aux_sym__quoted_string_content_double,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
  [12355] = 5,
    ACTIONS(841), 1,
      anon_sym_SEMI,
    ACTIONS(843), 1,
      sym_NL,
    ACTIONS(847), 1,
      ts_builtin_sym_end,
    STATE(63), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
  [12372] = 5,
    ACTIONS(849), 1,
      anon_sym_COMMA,
    ACTIONS(851), 1,
      anon_sym_RPAREN,
    ACTIONS(853), 1,
      anon_sym_STAR,
    STATE(246), 1,
      aux_sym_func_spec_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12389] = 5,
    ACTIONS(849), 1,
      anon_sym_COMMA,
    ACTIONS(855), 1,
      anon_sym_RPAREN,
    ACTIONS(857), 1,
      anon_sym_STAR,
    STATE(259), 1,
      aux_sym_func_spec_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12406] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(859), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(861), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12419] = 4,
    ACTIONS(845), 1,
      anon_sym_SQUOTE,
    STATE(277), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(823), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [12434] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(863), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(865), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12447] = 4,
    ACTIONS(821), 1,
      anon_sym_LBRACE,
    STATE(181), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12462] = 4,
    ACTIONS(821), 1,
      anon_sym_LBRACE,
    STATE(251), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12477] = 3,
    ACTIONS(776), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(774), 3,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [12490] = 5,
    ACTIONS(867), 1,
      anon_sym_DQUOTE,
    ACTIONS(869), 1,
      sym_escape_sequence,
    ACTIONS(871), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(257), 1,
      aux_sym__quoted_string_content_double,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
  [12507] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(873), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
  [12520] = 3,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(875), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(877), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12533] = 4,
    ACTIONS(867), 1,
      anon_sym_SQUOTE,
    STATE(262), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(879), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [12548] = 5,
    ACTIONS(806), 1,
      anon_sym_DQUOTE,
    ACTIONS(881), 1,
      sym_escape_sequence,
    ACTIONS(883), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(247), 1,
      aux_sym__quoted_string_content_double,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
  [12565] = 5,
    ACTIONS(829), 1,
      anon_sym_SEMI,
    ACTIONS(833), 1,
      sym_NL,
    ACTIONS(885), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
  [12582] = 5,
    ACTIONS(849), 1,
      anon_sym_COMMA,
    ACTIONS(887), 1,
      anon_sym_RPAREN,
    ACTIONS(889), 1,
      anon_sym_STAR,
    STATE(276), 1,
      aux_sym_func_spec_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12599] = 4,
    ACTIONS(891), 1,
      anon_sym_COMMA,
    STATE(274), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(794), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [12614] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(894), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
  [12627] = 5,
    ACTIONS(849), 1,
      anon_sym_COMMA,
    ACTIONS(896), 1,
      anon_sym_RPAREN,
    ACTIONS(898), 1,
      anon_sym_STAR,
    STATE(246), 1,
      aux_sym_func_spec_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12644] = 4,
    ACTIONS(900), 1,
      anon_sym_SQUOTE,
    STATE(277), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(902), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [12659] = 5,
    ACTIONS(905), 1,
      anon_sym_DQUOTE,
    ACTIONS(907), 1,
      sym_escape_sequence,
    ACTIONS(910), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(278), 1,
      aux_sym__quoted_string_content_double,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
  [12676] = 4,
    ACTIONS(751), 1,
      anon_sym_COMMA,
    ACTIONS(913), 1,
      anon_sym_RPAREN,
    STATE(274), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12690] = 4,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    ACTIONS(918), 1,
      anon_sym_RPAREN,
    STATE(280), 1,
      aux_sym_formal_spec_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12704] = 4,
    ACTIONS(920), 1,
      aux_sym_other_lit_token1,
    ACTIONS(923), 1,
      anon_sym_GT_GT,
    STATE(281), 1,
      aux_sym_other_lit_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
  [12718] = 3,
    ACTIONS(925), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12730] = 4,
    ACTIONS(502), 1,
      anon_sym_LPAREN,
    ACTIONS(927), 1,
      sym_identifier,
    STATE(171), 1,
      sym_func_spec,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12744] = 3,
    ACTIONS(929), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12756] = 3,
    ACTIONS(931), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12768] = 4,
    ACTIONS(923), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(933), 1,
      aux_sym_other_lit_token1,
    STATE(286), 1,
      aux_sym_other_lit_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
  [12782] = 3,
    ACTIONS(936), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12794] = 4,
    ACTIONS(751), 1,
      anon_sym_COMMA,
    ACTIONS(938), 1,
      anon_sym_RBRACK,
    STATE(274), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12808] = 3,
    ACTIONS(942), 1,
      sym_NL,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(940), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12820] = 3,
    ACTIONS(944), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12832] = 3,
    ACTIONS(948), 1,
      sym_NL,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(946), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12844] = 3,
    ACTIONS(950), 1,
      anon_sym_PLUS,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12856] = 4,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    ACTIONS(954), 1,
      anon_sym_COLON,
    STATE(305), 1,
      aux_sym_enum_stmt_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12870] = 3,
    ACTIONS(956), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12882] = 3,
    ACTIONS(958), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12894] = 3,
    ACTIONS(769), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12906] = 3,
    ACTIONS(960), 1,
      anon_sym_LT_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12918] = 3,
    ACTIONS(759), 1,
      sym_NL,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(757), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12930] = 4,
    ACTIONS(841), 1,
      anon_sym_SEMI,
    ACTIONS(843), 1,
      sym_NL,
    STATE(63), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
  [12944] = 3,
    ACTIONS(962), 1,
      anon_sym_GT_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12956] = 3,
    ACTIONS(964), 1,
      anon_sym_EQ_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12968] = 3,
    ACTIONS(966), 1,
      anon_sym_BANG_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12980] = 4,
    ACTIONS(751), 1,
      anon_sym_COMMA,
    ACTIONS(968), 1,
      anon_sym_RPAREN,
    STATE(274), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12994] = 3,
    ACTIONS(970), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [13006] = 4,
    ACTIONS(972), 1,
      anon_sym_COMMA,
    ACTIONS(975), 1,
      anon_sym_COLON,
    STATE(305), 1,
      aux_sym_enum_stmt_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13020] = 4,
    ACTIONS(977), 1,
      aux_sym_other_lit_token1,
    ACTIONS(979), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(323), 1,
      aux_sym_other_lit_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
  [13034] = 4,
    ACTIONS(979), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(981), 1,
      aux_sym_other_lit_token1,
    STATE(286), 1,
      aux_sym_other_lit_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
  [13048] = 4,
    ACTIONS(780), 1,
      anon_sym_COMMA,
    ACTIONS(983), 1,
      anon_sym_RPAREN,
    STATE(280), 1,
      aux_sym_formal_spec_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13062] = 3,
    ACTIONS(985), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [13074] = 4,
    ACTIONS(780), 1,
      anon_sym_COMMA,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
    STATE(308), 1,
      aux_sym_formal_spec_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13088] = 3,
    ACTIONS(989), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [13100] = 4,
    ACTIONS(991), 1,
      aux_sym_other_lit_token1,
    ACTIONS(993), 1,
      anon_sym_GT_GT,
    STATE(281), 1,
      aux_sym_other_lit_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
  [13114] = 4,
    ACTIONS(780), 1,
      anon_sym_COMMA,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
    STATE(280), 1,
      aux_sym_formal_spec_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13128] = 4,
    ACTIONS(995), 1,
      aux_sym_other_lit_token1,
    ACTIONS(997), 1,
      anon_sym_GT_GT,
    STATE(312), 1,
      aux_sym_other_lit_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
  [13142] = 3,
    ACTIONS(999), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [13154] = 3,
    ACTIONS(1003), 1,
      anon_sym_SEMI,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(1001), 2,
      ts_builtin_sym_end,
      sym_NL,
  [13166] = 3,
    ACTIONS(1005), 1,
      anon_sym_PLUS,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [13178] = 3,
    ACTIONS(1007), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [13190] = 4,
    ACTIONS(829), 1,
      anon_sym_SEMI,
    ACTIONS(833), 1,
      sym_NL,
    STATE(62), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
  [13204] = 3,
    ACTIONS(1009), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [13216] = 3,
    ACTIONS(1011), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [13228] = 4,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    ACTIONS(1013), 1,
      anon_sym_COLON,
    STATE(293), 1,
      aux_sym_enum_stmt_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13242] = 4,
    ACTIONS(923), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(1015), 1,
      aux_sym_other_lit_token1,
    STATE(323), 1,
      aux_sym_other_lit_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
  [13256] = 3,
    ACTIONS(1018), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [13268] = 3,
    ACTIONS(1020), 1,
      anon_sym_LT_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [13280] = 4,
    ACTIONS(1022), 1,
      aux_sym_other_lit_token1,
    ACTIONS(1024), 1,
      anon_sym_GT_GT,
    STATE(336), 1,
      aux_sym_other_lit_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
  [13294] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(813), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
  [13304] = 3,
    ACTIONS(1026), 1,
      anon_sym_GT_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [13316] = 4,
    ACTIONS(1028), 1,
      aux_sym_other_lit_token1,
    ACTIONS(1030), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(339), 1,
      aux_sym_other_lit_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
  [13330] = 4,
    ACTIONS(1030), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(1032), 1,
      aux_sym_other_lit_token1,
    STATE(340), 1,
      aux_sym_other_lit_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
  [13344] = 4,
    ACTIONS(1034), 1,
      aux_sym_other_lit_token1,
    ACTIONS(1036), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(307), 1,
      aux_sym_other_lit_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
  [13358] = 4,
    ACTIONS(1036), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(1038), 1,
      aux_sym_other_lit_token1,
    STATE(306), 1,
      aux_sym_other_lit_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
  [13372] = 3,
    ACTIONS(1040), 1,
      anon_sym_EQ_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [13384] = 3,
    ACTIONS(1042), 1,
      anon_sym_BANG_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [13396] = 3,
    ACTIONS(800), 1,
      anon_sym_SEMI,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(798), 2,
      ts_builtin_sym_end,
      sym_NL,
  [13408] = 4,
    ACTIONS(991), 1,
      aux_sym_other_lit_token1,
    ACTIONS(1044), 1,
      anon_sym_GT_GT,
    STATE(281), 1,
      aux_sym_other_lit_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
  [13422] = 3,
    ACTIONS(1046), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [13434] = 4,
    ACTIONS(790), 1,
      anon_sym_COMMA,
    ACTIONS(1048), 1,
      anon_sym_RBRACE,
    STATE(341), 1,
      aux_sym_dict_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13448] = 4,
    ACTIONS(981), 1,
      aux_sym_other_lit_token1,
    ACTIONS(1050), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(286), 1,
      aux_sym_other_lit_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
  [13462] = 4,
    ACTIONS(977), 1,
      aux_sym_other_lit_token1,
    ACTIONS(1050), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(323), 1,
      aux_sym_other_lit_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym_line_continuation,
  [13476] = 4,
    ACTIONS(1052), 1,
      anon_sym_RBRACE,
    ACTIONS(1054), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      aux_sym_dict_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13490] = 4,
    ACTIONS(790), 1,
      anon_sym_COMMA,
    ACTIONS(1057), 1,
      anon_sym_RBRACE,
    STATE(341), 1,
      aux_sym_dict_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13504] = 4,
    ACTIONS(751), 1,
      anon_sym_COMMA,
    ACTIONS(1059), 1,
      anon_sym_RPAREN,
    STATE(274), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13518] = 4,
    ACTIONS(751), 1,
      anon_sym_COMMA,
    ACTIONS(1061), 1,
      anon_sym_RBRACK,
    STATE(274), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13532] = 3,
    ACTIONS(1063), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [13544] = 3,
    ACTIONS(784), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [13556] = 3,
    ACTIONS(1065), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(755), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [13568] = 4,
    ACTIONS(751), 1,
      anon_sym_COMMA,
    ACTIONS(1067), 1,
      anon_sym_RPAREN,
    STATE(274), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13582] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(975), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [13591] = 3,
    ACTIONS(1069), 1,
      sym_identifier,
    STATE(221), 1,
      sym_var_decl_item,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13602] = 3,
    ACTIONS(1069), 1,
      sym_identifier,
    STATE(239), 1,
      sym_var_decl_item,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13613] = 3,
    ACTIONS(821), 1,
      anon_sym_LBRACE,
    STATE(316), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13624] = 3,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym_func_spec,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13635] = 3,
    ACTIONS(502), 1,
      anon_sym_LPAREN,
    STATE(173), 1,
      sym_func_spec,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13646] = 3,
    ACTIONS(778), 1,
      sym_identifier,
    STATE(357), 1,
      sym_param_spec,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13657] = 3,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    STATE(121), 1,
      sym_func_spec,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13668] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(918), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13677] = 3,
    ACTIONS(821), 1,
      anon_sym_LBRACE,
    STATE(269), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13688] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(1071), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13697] = 3,
    ACTIONS(1073), 1,
      anon_sym_LPAREN,
    STATE(352), 1,
      sym_formal_spec,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13708] = 3,
    ACTIONS(502), 1,
      anon_sym_LPAREN,
    STATE(171), 1,
      sym_func_spec,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13719] = 2,
    ACTIONS(1075), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13727] = 2,
    ACTIONS(1077), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13735] = 2,
    ACTIONS(1079), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13743] = 2,
    ACTIONS(1081), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13751] = 2,
    ACTIONS(1083), 1,
      anon_sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13759] = 2,
    ACTIONS(1085), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13767] = 2,
    ACTIONS(1087), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13775] = 2,
    ACTIONS(1089), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13783] = 2,
    ACTIONS(1091), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13791] = 2,
    ACTIONS(1093), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13799] = 2,
    ACTIONS(490), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13807] = 2,
    ACTIONS(1095), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13815] = 2,
    ACTIONS(1097), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13823] = 2,
    ACTIONS(1099), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13831] = 2,
    ACTIONS(1101), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13839] = 2,
    ACTIONS(1103), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13847] = 2,
    ACTIONS(1105), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13855] = 2,
    ACTIONS(1107), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13863] = 2,
    ACTIONS(1109), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13871] = 2,
    ACTIONS(1111), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13879] = 2,
    ACTIONS(498), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13887] = 2,
    ACTIONS(1113), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13895] = 2,
    ACTIONS(1115), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13903] = 2,
    ACTIONS(1117), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13911] = 2,
    ACTIONS(1119), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13919] = 2,
    ACTIONS(1121), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13927] = 2,
    ACTIONS(1123), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13935] = 2,
    ACTIONS(1125), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13943] = 2,
    ACTIONS(1127), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13951] = 2,
    ACTIONS(1129), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13959] = 2,
    ACTIONS(1131), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13967] = 2,
    ACTIONS(1133), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13975] = 2,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13983] = 2,
    ACTIONS(1137), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13991] = 2,
    ACTIONS(1139), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [13999] = 2,
    ACTIONS(1141), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [14007] = 2,
    ACTIONS(1143), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [14015] = 2,
    ACTIONS(1145), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [14023] = 2,
    ACTIONS(1147), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [14031] = 2,
    ACTIONS(1149), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [14039] = 2,
    ACTIONS(1151), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [14047] = 2,
    ACTIONS(1153), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [14055] = 2,
    ACTIONS(1155), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [14063] = 2,
    ACTIONS(1157), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 125,
  [SMALL_STATE(9)] = 250,
  [SMALL_STATE(10)] = 375,
  [SMALL_STATE(11)] = 500,
  [SMALL_STATE(12)] = 625,
  [SMALL_STATE(13)] = 750,
  [SMALL_STATE(14)] = 875,
  [SMALL_STATE(15)] = 1000,
  [SMALL_STATE(16)] = 1125,
  [SMALL_STATE(17)] = 1250,
  [SMALL_STATE(18)] = 1375,
  [SMALL_STATE(19)] = 1500,
  [SMALL_STATE(20)] = 1625,
  [SMALL_STATE(21)] = 1750,
  [SMALL_STATE(22)] = 1875,
  [SMALL_STATE(23)] = 2000,
  [SMALL_STATE(24)] = 2125,
  [SMALL_STATE(25)] = 2250,
  [SMALL_STATE(26)] = 2375,
  [SMALL_STATE(27)] = 2500,
  [SMALL_STATE(28)] = 2625,
  [SMALL_STATE(29)] = 2750,
  [SMALL_STATE(30)] = 2875,
  [SMALL_STATE(31)] = 3000,
  [SMALL_STATE(32)] = 3125,
  [SMALL_STATE(33)] = 3250,
  [SMALL_STATE(34)] = 3375,
  [SMALL_STATE(35)] = 3500,
  [SMALL_STATE(36)] = 3625,
  [SMALL_STATE(37)] = 3747,
  [SMALL_STATE(38)] = 3869,
  [SMALL_STATE(39)] = 3991,
  [SMALL_STATE(40)] = 4113,
  [SMALL_STATE(41)] = 4235,
  [SMALL_STATE(42)] = 4357,
  [SMALL_STATE(43)] = 4479,
  [SMALL_STATE(44)] = 4601,
  [SMALL_STATE(45)] = 4723,
  [SMALL_STATE(46)] = 4845,
  [SMALL_STATE(47)] = 4967,
  [SMALL_STATE(48)] = 5089,
  [SMALL_STATE(49)] = 5211,
  [SMALL_STATE(50)] = 5333,
  [SMALL_STATE(51)] = 5455,
  [SMALL_STATE(52)] = 5577,
  [SMALL_STATE(53)] = 5699,
  [SMALL_STATE(54)] = 5821,
  [SMALL_STATE(55)] = 5943,
  [SMALL_STATE(56)] = 6065,
  [SMALL_STATE(57)] = 6187,
  [SMALL_STATE(58)] = 6309,
  [SMALL_STATE(59)] = 6431,
  [SMALL_STATE(60)] = 6538,
  [SMALL_STATE(61)] = 6645,
  [SMALL_STATE(62)] = 6709,
  [SMALL_STATE(63)] = 6770,
  [SMALL_STATE(64)] = 6830,
  [SMALL_STATE(65)] = 6884,
  [SMALL_STATE(66)] = 6935,
  [SMALL_STATE(67)] = 6986,
  [SMALL_STATE(68)] = 7037,
  [SMALL_STATE(69)] = 7088,
  [SMALL_STATE(70)] = 7139,
  [SMALL_STATE(71)] = 7190,
  [SMALL_STATE(72)] = 7241,
  [SMALL_STATE(73)] = 7292,
  [SMALL_STATE(74)] = 7343,
  [SMALL_STATE(75)] = 7394,
  [SMALL_STATE(76)] = 7445,
  [SMALL_STATE(77)] = 7492,
  [SMALL_STATE(78)] = 7540,
  [SMALL_STATE(79)] = 7588,
  [SMALL_STATE(80)] = 7636,
  [SMALL_STATE(81)] = 7672,
  [SMALL_STATE(82)] = 7708,
  [SMALL_STATE(83)] = 7770,
  [SMALL_STATE(84)] = 7806,
  [SMALL_STATE(85)] = 7842,
  [SMALL_STATE(86)] = 7878,
  [SMALL_STATE(87)] = 7914,
  [SMALL_STATE(88)] = 7968,
  [SMALL_STATE(89)] = 8022,
  [SMALL_STATE(90)] = 8076,
  [SMALL_STATE(91)] = 8127,
  [SMALL_STATE(92)] = 8178,
  [SMALL_STATE(93)] = 8228,
  [SMALL_STATE(94)] = 8278,
  [SMALL_STATE(95)] = 8328,
  [SMALL_STATE(96)] = 8378,
  [SMALL_STATE(97)] = 8428,
  [SMALL_STATE(98)] = 8478,
  [SMALL_STATE(99)] = 8528,
  [SMALL_STATE(100)] = 8578,
  [SMALL_STATE(101)] = 8628,
  [SMALL_STATE(102)] = 8678,
  [SMALL_STATE(103)] = 8728,
  [SMALL_STATE(104)] = 8778,
  [SMALL_STATE(105)] = 8828,
  [SMALL_STATE(106)] = 8878,
  [SMALL_STATE(107)] = 8928,
  [SMALL_STATE(108)] = 8978,
  [SMALL_STATE(109)] = 9028,
  [SMALL_STATE(110)] = 9078,
  [SMALL_STATE(111)] = 9128,
  [SMALL_STATE(112)] = 9178,
  [SMALL_STATE(113)] = 9228,
  [SMALL_STATE(114)] = 9278,
  [SMALL_STATE(115)] = 9328,
  [SMALL_STATE(116)] = 9359,
  [SMALL_STATE(117)] = 9390,
  [SMALL_STATE(118)] = 9421,
  [SMALL_STATE(119)] = 9452,
  [SMALL_STATE(120)] = 9483,
  [SMALL_STATE(121)] = 9514,
  [SMALL_STATE(122)] = 9545,
  [SMALL_STATE(123)] = 9576,
  [SMALL_STATE(124)] = 9607,
  [SMALL_STATE(125)] = 9638,
  [SMALL_STATE(126)] = 9669,
  [SMALL_STATE(127)] = 9700,
  [SMALL_STATE(128)] = 9731,
  [SMALL_STATE(129)] = 9762,
  [SMALL_STATE(130)] = 9793,
  [SMALL_STATE(131)] = 9824,
  [SMALL_STATE(132)] = 9855,
  [SMALL_STATE(133)] = 9886,
  [SMALL_STATE(134)] = 9917,
  [SMALL_STATE(135)] = 9948,
  [SMALL_STATE(136)] = 9979,
  [SMALL_STATE(137)] = 10010,
  [SMALL_STATE(138)] = 10041,
  [SMALL_STATE(139)] = 10072,
  [SMALL_STATE(140)] = 10103,
  [SMALL_STATE(141)] = 10134,
  [SMALL_STATE(142)] = 10165,
  [SMALL_STATE(143)] = 10196,
  [SMALL_STATE(144)] = 10227,
  [SMALL_STATE(145)] = 10258,
  [SMALL_STATE(146)] = 10289,
  [SMALL_STATE(147)] = 10320,
  [SMALL_STATE(148)] = 10351,
  [SMALL_STATE(149)] = 10382,
  [SMALL_STATE(150)] = 10413,
  [SMALL_STATE(151)] = 10444,
  [SMALL_STATE(152)] = 10490,
  [SMALL_STATE(153)] = 10536,
  [SMALL_STATE(154)] = 10582,
  [SMALL_STATE(155)] = 10616,
  [SMALL_STATE(156)] = 10650,
  [SMALL_STATE(157)] = 10684,
  [SMALL_STATE(158)] = 10706,
  [SMALL_STATE(159)] = 10728,
  [SMALL_STATE(160)] = 10750,
  [SMALL_STATE(161)] = 10772,
  [SMALL_STATE(162)] = 10794,
  [SMALL_STATE(163)] = 10816,
  [SMALL_STATE(164)] = 10845,
  [SMALL_STATE(165)] = 10864,
  [SMALL_STATE(166)] = 10884,
  [SMALL_STATE(167)] = 10900,
  [SMALL_STATE(168)] = 10916,
  [SMALL_STATE(169)] = 10932,
  [SMALL_STATE(170)] = 10948,
  [SMALL_STATE(171)] = 10964,
  [SMALL_STATE(172)] = 10980,
  [SMALL_STATE(173)] = 11002,
  [SMALL_STATE(174)] = 11018,
  [SMALL_STATE(175)] = 11034,
  [SMALL_STATE(176)] = 11050,
  [SMALL_STATE(177)] = 11066,
  [SMALL_STATE(178)] = 11088,
  [SMALL_STATE(179)] = 11104,
  [SMALL_STATE(180)] = 11120,
  [SMALL_STATE(181)] = 11136,
  [SMALL_STATE(182)] = 11151,
  [SMALL_STATE(183)] = 11166,
  [SMALL_STATE(184)] = 11181,
  [SMALL_STATE(185)] = 11196,
  [SMALL_STATE(186)] = 11211,
  [SMALL_STATE(187)] = 11226,
  [SMALL_STATE(188)] = 11241,
  [SMALL_STATE(189)] = 11260,
  [SMALL_STATE(190)] = 11275,
  [SMALL_STATE(191)] = 11290,
  [SMALL_STATE(192)] = 11307,
  [SMALL_STATE(193)] = 11322,
  [SMALL_STATE(194)] = 11337,
  [SMALL_STATE(195)] = 11358,
  [SMALL_STATE(196)] = 11373,
  [SMALL_STATE(197)] = 11388,
  [SMALL_STATE(198)] = 11403,
  [SMALL_STATE(199)] = 11418,
  [SMALL_STATE(200)] = 11433,
  [SMALL_STATE(201)] = 11448,
  [SMALL_STATE(202)] = 11463,
  [SMALL_STATE(203)] = 11478,
  [SMALL_STATE(204)] = 11493,
  [SMALL_STATE(205)] = 11508,
  [SMALL_STATE(206)] = 11523,
  [SMALL_STATE(207)] = 11538,
  [SMALL_STATE(208)] = 11557,
  [SMALL_STATE(209)] = 11572,
  [SMALL_STATE(210)] = 11587,
  [SMALL_STATE(211)] = 11602,
  [SMALL_STATE(212)] = 11617,
  [SMALL_STATE(213)] = 11632,
  [SMALL_STATE(214)] = 11647,
  [SMALL_STATE(215)] = 11664,
  [SMALL_STATE(216)] = 11679,
  [SMALL_STATE(217)] = 11694,
  [SMALL_STATE(218)] = 11709,
  [SMALL_STATE(219)] = 11724,
  [SMALL_STATE(220)] = 11739,
  [SMALL_STATE(221)] = 11754,
  [SMALL_STATE(222)] = 11773,
  [SMALL_STATE(223)] = 11788,
  [SMALL_STATE(224)] = 11803,
  [SMALL_STATE(225)] = 11818,
  [SMALL_STATE(226)] = 11836,
  [SMALL_STATE(227)] = 11852,
  [SMALL_STATE(228)] = 11870,
  [SMALL_STATE(229)] = 11886,
  [SMALL_STATE(230)] = 11900,
  [SMALL_STATE(231)] = 11914,
  [SMALL_STATE(232)] = 11932,
  [SMALL_STATE(233)] = 11950,
  [SMALL_STATE(234)] = 11968,
  [SMALL_STATE(235)] = 11988,
  [SMALL_STATE(236)] = 12006,
  [SMALL_STATE(237)] = 12024,
  [SMALL_STATE(238)] = 12042,
  [SMALL_STATE(239)] = 12060,
  [SMALL_STATE(240)] = 12074,
  [SMALL_STATE(241)] = 12088,
  [SMALL_STATE(242)] = 12106,
  [SMALL_STATE(243)] = 12122,
  [SMALL_STATE(244)] = 12140,
  [SMALL_STATE(245)] = 12158,
  [SMALL_STATE(246)] = 12173,
  [SMALL_STATE(247)] = 12188,
  [SMALL_STATE(248)] = 12205,
  [SMALL_STATE(249)] = 12220,
  [SMALL_STATE(250)] = 12235,
  [SMALL_STATE(251)] = 12250,
  [SMALL_STATE(252)] = 12263,
  [SMALL_STATE(253)] = 12278,
  [SMALL_STATE(254)] = 12295,
  [SMALL_STATE(255)] = 12308,
  [SMALL_STATE(256)] = 12321,
  [SMALL_STATE(257)] = 12338,
  [SMALL_STATE(258)] = 12355,
  [SMALL_STATE(259)] = 12372,
  [SMALL_STATE(260)] = 12389,
  [SMALL_STATE(261)] = 12406,
  [SMALL_STATE(262)] = 12419,
  [SMALL_STATE(263)] = 12434,
  [SMALL_STATE(264)] = 12447,
  [SMALL_STATE(265)] = 12462,
  [SMALL_STATE(266)] = 12477,
  [SMALL_STATE(267)] = 12490,
  [SMALL_STATE(268)] = 12507,
  [SMALL_STATE(269)] = 12520,
  [SMALL_STATE(270)] = 12533,
  [SMALL_STATE(271)] = 12548,
  [SMALL_STATE(272)] = 12565,
  [SMALL_STATE(273)] = 12582,
  [SMALL_STATE(274)] = 12599,
  [SMALL_STATE(275)] = 12614,
  [SMALL_STATE(276)] = 12627,
  [SMALL_STATE(277)] = 12644,
  [SMALL_STATE(278)] = 12659,
  [SMALL_STATE(279)] = 12676,
  [SMALL_STATE(280)] = 12690,
  [SMALL_STATE(281)] = 12704,
  [SMALL_STATE(282)] = 12718,
  [SMALL_STATE(283)] = 12730,
  [SMALL_STATE(284)] = 12744,
  [SMALL_STATE(285)] = 12756,
  [SMALL_STATE(286)] = 12768,
  [SMALL_STATE(287)] = 12782,
  [SMALL_STATE(288)] = 12794,
  [SMALL_STATE(289)] = 12808,
  [SMALL_STATE(290)] = 12820,
  [SMALL_STATE(291)] = 12832,
  [SMALL_STATE(292)] = 12844,
  [SMALL_STATE(293)] = 12856,
  [SMALL_STATE(294)] = 12870,
  [SMALL_STATE(295)] = 12882,
  [SMALL_STATE(296)] = 12894,
  [SMALL_STATE(297)] = 12906,
  [SMALL_STATE(298)] = 12918,
  [SMALL_STATE(299)] = 12930,
  [SMALL_STATE(300)] = 12944,
  [SMALL_STATE(301)] = 12956,
  [SMALL_STATE(302)] = 12968,
  [SMALL_STATE(303)] = 12980,
  [SMALL_STATE(304)] = 12994,
  [SMALL_STATE(305)] = 13006,
  [SMALL_STATE(306)] = 13020,
  [SMALL_STATE(307)] = 13034,
  [SMALL_STATE(308)] = 13048,
  [SMALL_STATE(309)] = 13062,
  [SMALL_STATE(310)] = 13074,
  [SMALL_STATE(311)] = 13088,
  [SMALL_STATE(312)] = 13100,
  [SMALL_STATE(313)] = 13114,
  [SMALL_STATE(314)] = 13128,
  [SMALL_STATE(315)] = 13142,
  [SMALL_STATE(316)] = 13154,
  [SMALL_STATE(317)] = 13166,
  [SMALL_STATE(318)] = 13178,
  [SMALL_STATE(319)] = 13190,
  [SMALL_STATE(320)] = 13204,
  [SMALL_STATE(321)] = 13216,
  [SMALL_STATE(322)] = 13228,
  [SMALL_STATE(323)] = 13242,
  [SMALL_STATE(324)] = 13256,
  [SMALL_STATE(325)] = 13268,
  [SMALL_STATE(326)] = 13280,
  [SMALL_STATE(327)] = 13294,
  [SMALL_STATE(328)] = 13304,
  [SMALL_STATE(329)] = 13316,
  [SMALL_STATE(330)] = 13330,
  [SMALL_STATE(331)] = 13344,
  [SMALL_STATE(332)] = 13358,
  [SMALL_STATE(333)] = 13372,
  [SMALL_STATE(334)] = 13384,
  [SMALL_STATE(335)] = 13396,
  [SMALL_STATE(336)] = 13408,
  [SMALL_STATE(337)] = 13422,
  [SMALL_STATE(338)] = 13434,
  [SMALL_STATE(339)] = 13448,
  [SMALL_STATE(340)] = 13462,
  [SMALL_STATE(341)] = 13476,
  [SMALL_STATE(342)] = 13490,
  [SMALL_STATE(343)] = 13504,
  [SMALL_STATE(344)] = 13518,
  [SMALL_STATE(345)] = 13532,
  [SMALL_STATE(346)] = 13544,
  [SMALL_STATE(347)] = 13556,
  [SMALL_STATE(348)] = 13568,
  [SMALL_STATE(349)] = 13582,
  [SMALL_STATE(350)] = 13591,
  [SMALL_STATE(351)] = 13602,
  [SMALL_STATE(352)] = 13613,
  [SMALL_STATE(353)] = 13624,
  [SMALL_STATE(354)] = 13635,
  [SMALL_STATE(355)] = 13646,
  [SMALL_STATE(356)] = 13657,
  [SMALL_STATE(357)] = 13668,
  [SMALL_STATE(358)] = 13677,
  [SMALL_STATE(359)] = 13688,
  [SMALL_STATE(360)] = 13697,
  [SMALL_STATE(361)] = 13708,
  [SMALL_STATE(362)] = 13719,
  [SMALL_STATE(363)] = 13727,
  [SMALL_STATE(364)] = 13735,
  [SMALL_STATE(365)] = 13743,
  [SMALL_STATE(366)] = 13751,
  [SMALL_STATE(367)] = 13759,
  [SMALL_STATE(368)] = 13767,
  [SMALL_STATE(369)] = 13775,
  [SMALL_STATE(370)] = 13783,
  [SMALL_STATE(371)] = 13791,
  [SMALL_STATE(372)] = 13799,
  [SMALL_STATE(373)] = 13807,
  [SMALL_STATE(374)] = 13815,
  [SMALL_STATE(375)] = 13823,
  [SMALL_STATE(376)] = 13831,
  [SMALL_STATE(377)] = 13839,
  [SMALL_STATE(378)] = 13847,
  [SMALL_STATE(379)] = 13855,
  [SMALL_STATE(380)] = 13863,
  [SMALL_STATE(381)] = 13871,
  [SMALL_STATE(382)] = 13879,
  [SMALL_STATE(383)] = 13887,
  [SMALL_STATE(384)] = 13895,
  [SMALL_STATE(385)] = 13903,
  [SMALL_STATE(386)] = 13911,
  [SMALL_STATE(387)] = 13919,
  [SMALL_STATE(388)] = 13927,
  [SMALL_STATE(389)] = 13935,
  [SMALL_STATE(390)] = 13943,
  [SMALL_STATE(391)] = 13951,
  [SMALL_STATE(392)] = 13959,
  [SMALL_STATE(393)] = 13967,
  [SMALL_STATE(394)] = 13975,
  [SMALL_STATE(395)] = 13983,
  [SMALL_STATE(396)] = 13991,
  [SMALL_STATE(397)] = 13999,
  [SMALL_STATE(398)] = 14007,
  [SMALL_STATE(399)] = 14015,
  [SMALL_STATE(400)] = 14023,
  [SMALL_STATE(401)] = 14031,
  [SMALL_STATE(402)] = 14039,
  [SMALL_STATE(403)] = 14047,
  [SMALL_STATE(404)] = 14055,
  [SMALL_STATE(405)] = 14063,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(82),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(41),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(38),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(374),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(289),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(291),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(7),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(361),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(46),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(350),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(178),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(401),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(164),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(11),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(400),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(399),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(395),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(60),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(43),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(155),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(183),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(184),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(189),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(189),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(314),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(271),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(245),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(331),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(332),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(82),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(41),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(38),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(374),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(283),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(46),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(350),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(178),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(401),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(164),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(11),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(400),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(399),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(395),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(60),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(43),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(155),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(183),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(184),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(189),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(189),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(314),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(271),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(245),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(331),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(332),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_stmt, 1),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_stmt, 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 1),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_spec, 7),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_spec, 7),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_spec, 6),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_spec, 6),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec_r, 2),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_spec_r, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 6),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 6),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 5),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 5),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_spec, 5),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_spec, 5),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec_r, 1),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_spec_r, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 4),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 4),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_spec, 8),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_spec, 8),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eq_op, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eq_op, 1),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_expr, 1, .production_id = 1),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_expr, 1, .production_id = 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_expr, 2, .production_id = 2),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_expr, 2, .production_id = 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_expr_repeat1, 2),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_access_expr_repeat1, 2),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_expr_repeat1, 2), SHIFT_REPEAT(19),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_expr_repeat1, 2), SHIFT_REPEAT(36),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_expr_repeat1, 2), SHIFT_REPEAT(368),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_actuals, 3),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_actuals, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expr, 2),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expr, 2),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_actuals, 4),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_actuals, 4),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expr, 3),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expr, 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_expr, 3),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_expr, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_actuals, 2),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_actuals, 2),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(353),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(102),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(73),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(73),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(370),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(64),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(404),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(393),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(405),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 2),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_true, 1),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_true, 1),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_literal, 5),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_literal, 5),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minus_expr, 3),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_minus_expr, 3),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 4),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 4),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec, 2),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_spec, 2),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STR, 1),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STR, 1),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gte_expr, 3),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gte_expr, 3),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 1),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 1),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lte_expr, 3),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lte_expr, 3),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gt_expr, 3),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gt_expr, 3),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec, 1),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_spec, 1),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_false, 1),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_false, 1),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 3),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 3),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lt_expr, 3),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lt_expr, 3),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 4),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_literal, 4),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plus_expr, 3),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plus_expr, 3),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eq_expr, 3),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eq_expr, 3),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expr, 3),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_or_expr, 3),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_lit, 2),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_other_lit, 2),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_expr, 3),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod_expr, 3),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mul_expr, 3),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mul_expr, 3),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div_expr, 3),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div_expr, 3),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_literal, 6),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_literal, 6),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_expr, 2),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_expr, 2),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_lit, 3),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_other_lit, 3),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ne_expr, 3),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ne_expr, 3),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expr, 3),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_expr, 3),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [662] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_access_expr_repeat1, 2), SHIFT_REPEAT(12),
  [665] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_access_expr_repeat1, 2), SHIFT_REPEAT(58),
  [668] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_access_expr_repeat1, 2), SHIFT_REPEAT(373),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_stmt_repeat1, 2, .production_id = 8),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_stmt_repeat1, 2, .production_id = 8),
  [681] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_stmt_repeat1, 2, .production_id = 8), SHIFT_REPEAT(51),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 3, .production_id = 4),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_stmt, 3, .production_id = 4),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 4, .production_id = 6),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_stmt, 4, .production_id = 6),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_stmt_repeat1, 3, .production_id = 9),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_stmt_repeat1, 3, .production_id = 9),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_stmt, 3),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_stmt, 3),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 4),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 4),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_stmt_repeat1, 2),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_var_stmt_repeat1, 2),
  [734] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_var_stmt_repeat1, 2), SHIFT_REPEAT(351),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_stmt, 2),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_stmt, 2),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_stmt, 2),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_stmt, 2),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_items, 1),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_items, 1),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_decl_item, 3),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_decl_item, 3),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_decl_item, 4),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_decl_item, 4),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [771] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2), SHIFT_REPEAT(225),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assignment_repeat1, 2),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_actuals_repeat1, 2),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toplevel_items, 1),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_toplevel_items, 1),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [810] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_spec_repeat1, 2), SHIFT_REPEAT(110),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_spec_repeat1, 2),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 6, .production_id = 10),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_stmt, 6, .production_id = 10),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 7, .production_id = 11),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_stmt, 7, .production_id = 11),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_literal_repeat1, 4),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, .production_id = 3),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2, .production_id = 3),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 7),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_stmt, 7),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, .production_id = 5),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3, .production_id = 5),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [891] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_actuals_repeat1, 2), SHIFT_REPEAT(44),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_content_single, 2),
  [902] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_content_single, 2), SHIFT_REPEAT(277),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_content_double, 2),
  [907] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_content_double, 2), SHIFT_REPEAT(278),
  [910] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_content_double, 2), SHIFT_REPEAT(278),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [915] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_spec_repeat1, 2), SHIFT_REPEAT(355),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_spec_repeat1, 2),
  [920] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_other_lit_repeat1, 2), SHIFT_REPEAT(281),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_other_lit_repeat1, 2),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [933] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_other_lit_repeat1, 2), SHIFT_REPEAT(286),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [940] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_stmt, 1),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_stmt, 1),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [946] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break_stmt, 1),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_stmt, 1),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [972] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_stmt_repeat1, 2), SHIFT_REPEAT(388),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_stmt_repeat1, 2),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 7),
  [1003] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 7),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1015] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_other_lit_repeat1, 2), SHIFT_REPEAT(323),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1028] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_literal_repeat1, 2),
  [1054] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_literal_repeat1, 2), SHIFT_REPEAT(56),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_spec, 3),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1089] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_spec, 3),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_spec, 2),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_spec, 4),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
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
