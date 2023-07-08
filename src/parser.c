#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 382
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 143
#define ALIAS_COUNT 0
#define TOKEN_COUNT 83
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

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
  sym_continue_stmt = 16,
  sym_break_stmt = 17,
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
  anon_sym_POUND = 70,
  anon_sym_SLASH_STAR = 71,
  aux_sym_LONGCOMMENT_token1 = 72,
  sym_integer = 73,
  sym_float = 74,
  anon_sym_LT_LT = 75,
  anon_sym_GT_GT = 76,
  anon_sym_DQUOTE = 77,
  anon_sym_SQUOTE = 78,
  sym_escape_sequence = 79,
  aux_sym__quoted_string_content_token1 = 80,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 81,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 82,
  sym_source_file = 83,
  sym_toplevel_items = 84,
  sym_body = 85,
  sym_body_items = 86,
  sym_assignment = 87,
  sym_eq_op = 88,
  sym_section = 89,
  sym_if_stmt = 90,
  sym_for_stmt = 91,
  sym_return_stmt = 92,
  sym_var_decl_item = 93,
  sym_var_stmt = 94,
  sym_base_type_spec = 95,
  sym_type_spec = 96,
  sym_type_spec_r = 97,
  sym_func_spec = 98,
  sym_expression = 99,
  sym_unary_expr = 100,
  sym_not_expr = 101,
  sym_access_expr = 102,
  sym_paren_expr = 103,
  sym_member_expr = 104,
  sym_index_expr = 105,
  sym_call_actuals = 106,
  sym_literal = 107,
  sym_tuple_literal = 108,
  sym_list_literal = 109,
  sym_dict_literal = 110,
  sym_or_expr = 111,
  sym_and_expr = 112,
  sym_ne_expr = 113,
  sym_eq_expr = 114,
  sym_gte_expr = 115,
  sym_lte_expr = 116,
  sym_gt_expr = 117,
  sym_lt_expr = 118,
  sym_plus_expr = 119,
  sym_minus_expr = 120,
  sym_mod_expr = 121,
  sym_mul_expr = 122,
  sym_div_expr = 123,
  sym_NUM = 124,
  sym_other_lit = 125,
  sym_quoted_string = 126,
  aux_sym__quoted_string_content = 127,
  sym_multiline_string = 128,
  sym_STR = 129,
  aux_sym_source_file_repeat1 = 130,
  aux_sym_source_file_repeat2 = 131,
  aux_sym_body_repeat1 = 132,
  aux_sym_assignment_repeat1 = 133,
  aux_sym_enum_stmt_repeat1 = 134,
  aux_sym_if_stmt_repeat1 = 135,
  aux_sym_var_stmt_repeat1 = 136,
  aux_sym_base_type_spec_repeat1 = 137,
  aux_sym_func_spec_repeat1 = 138,
  aux_sym_access_expr_repeat1 = 139,
  aux_sym_call_actuals_repeat1 = 140,
  aux_sym_dict_literal_repeat1 = 141,
  aux_sym_LONGCOMMENT_repeat1 = 142,
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
  [sym_continue_stmt] = "continue_stmt",
  [sym_break_stmt] = "break_stmt",
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
  [anon_sym_POUND] = "#",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_LONGCOMMENT_token1] = "LONGCOMMENT_token1",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym__quoted_string_content_token1] = "_quoted_string_content_token1",
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
  [sym_return_stmt] = "return_stmt",
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
  [sym_NUM] = "NUM",
  [sym_other_lit] = "other_lit",
  [sym_quoted_string] = "quoted_string",
  [aux_sym__quoted_string_content] = "_quoted_string_content",
  [sym_multiline_string] = "multiline_string",
  [sym_STR] = "STR",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_assignment_repeat1] = "assignment_repeat1",
  [aux_sym_enum_stmt_repeat1] = "enum_stmt_repeat1",
  [aux_sym_if_stmt_repeat1] = "if_stmt_repeat1",
  [aux_sym_var_stmt_repeat1] = "var_stmt_repeat1",
  [aux_sym_base_type_spec_repeat1] = "base_type_spec_repeat1",
  [aux_sym_func_spec_repeat1] = "func_spec_repeat1",
  [aux_sym_access_expr_repeat1] = "access_expr_repeat1",
  [aux_sym_call_actuals_repeat1] = "call_actuals_repeat1",
  [aux_sym_dict_literal_repeat1] = "dict_literal_repeat1",
  [aux_sym_LONGCOMMENT_repeat1] = "LONGCOMMENT_repeat1",
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
  [sym_continue_stmt] = sym_continue_stmt,
  [sym_break_stmt] = sym_break_stmt,
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
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_LONGCOMMENT_token1] = aux_sym_LONGCOMMENT_token1,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym__quoted_string_content_token1] = aux_sym__quoted_string_content_token1,
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
  [sym_return_stmt] = sym_return_stmt,
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
  [sym_NUM] = sym_NUM,
  [sym_other_lit] = sym_other_lit,
  [sym_quoted_string] = sym_quoted_string,
  [aux_sym__quoted_string_content] = aux_sym__quoted_string_content,
  [sym_multiline_string] = sym_multiline_string,
  [sym_STR] = sym_STR,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_assignment_repeat1] = aux_sym_assignment_repeat1,
  [aux_sym_enum_stmt_repeat1] = aux_sym_enum_stmt_repeat1,
  [aux_sym_if_stmt_repeat1] = aux_sym_if_stmt_repeat1,
  [aux_sym_var_stmt_repeat1] = aux_sym_var_stmt_repeat1,
  [aux_sym_base_type_spec_repeat1] = aux_sym_base_type_spec_repeat1,
  [aux_sym_func_spec_repeat1] = aux_sym_func_spec_repeat1,
  [aux_sym_access_expr_repeat1] = aux_sym_access_expr_repeat1,
  [aux_sym_call_actuals_repeat1] = aux_sym_call_actuals_repeat1,
  [aux_sym_dict_literal_repeat1] = aux_sym_dict_literal_repeat1,
  [aux_sym_LONGCOMMENT_repeat1] = aux_sym_LONGCOMMENT_repeat1,
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
  [sym_continue_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_break_stmt] = {
    .visible = true,
    .named = true,
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_LONGCOMMENT_token1] = {
    .visible = false,
    .named = false,
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
  [aux_sym__quoted_string_content_token1] = {
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
  [sym_return_stmt] = {
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
  [sym_NUM] = {
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
  [aux_sym__quoted_string_content] = {
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
  [aux_sym_LONGCOMMENT_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [15] = 15,
  [16] = 9,
  [17] = 17,
  [18] = 18,
  [19] = 11,
  [20] = 13,
  [21] = 21,
  [22] = 21,
  [23] = 23,
  [24] = 24,
  [25] = 23,
  [26] = 10,
  [27] = 8,
  [28] = 12,
  [29] = 14,
  [30] = 15,
  [31] = 18,
  [32] = 32,
  [33] = 32,
  [34] = 17,
  [35] = 24,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 37,
  [42] = 38,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 43,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 50,
  [54] = 48,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 57,
  [59] = 59,
  [60] = 60,
  [61] = 60,
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
  [89] = 87,
  [90] = 90,
  [91] = 90,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 93,
  [101] = 101,
  [102] = 97,
  [103] = 103,
  [104] = 95,
  [105] = 92,
  [106] = 94,
  [107] = 99,
  [108] = 108,
  [109] = 98,
  [110] = 96,
  [111] = 108,
  [112] = 112,
  [113] = 103,
  [114] = 101,
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
  [151] = 79,
  [152] = 77,
  [153] = 78,
  [154] = 83,
  [155] = 81,
  [156] = 80,
  [157] = 84,
  [158] = 85,
  [159] = 86,
  [160] = 160,
  [161] = 64,
  [162] = 65,
  [163] = 68,
  [164] = 164,
  [165] = 72,
  [166] = 166,
  [167] = 71,
  [168] = 66,
  [169] = 74,
  [170] = 170,
  [171] = 75,
  [172] = 73,
  [173] = 130,
  [174] = 69,
  [175] = 67,
  [176] = 121,
  [177] = 70,
  [178] = 144,
  [179] = 136,
  [180] = 132,
  [181] = 124,
  [182] = 182,
  [183] = 123,
  [184] = 184,
  [185] = 119,
  [186] = 186,
  [187] = 122,
  [188] = 128,
  [189] = 189,
  [190] = 115,
  [191] = 135,
  [192] = 127,
  [193] = 193,
  [194] = 120,
  [195] = 138,
  [196] = 116,
  [197] = 197,
  [198] = 148,
  [199] = 141,
  [200] = 137,
  [201] = 147,
  [202] = 118,
  [203] = 117,
  [204] = 125,
  [205] = 134,
  [206] = 206,
  [207] = 145,
  [208] = 142,
  [209] = 126,
  [210] = 139,
  [211] = 129,
  [212] = 212,
  [213] = 143,
  [214] = 131,
  [215] = 146,
  [216] = 216,
  [217] = 133,
  [218] = 218,
  [219] = 140,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 222,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 229,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 226,
  [236] = 236,
  [237] = 227,
  [238] = 221,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 246,
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
  [259] = 259,
  [260] = 252,
  [261] = 253,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 242,
  [267] = 267,
  [268] = 250,
  [269] = 269,
  [270] = 243,
  [271] = 245,
  [272] = 272,
  [273] = 273,
  [274] = 274,
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
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 285,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 281,
  [299] = 285,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 275,
  [304] = 304,
  [305] = 286,
  [306] = 300,
  [307] = 307,
  [308] = 287,
  [309] = 290,
  [310] = 310,
  [311] = 311,
  [312] = 288,
  [313] = 292,
  [314] = 295,
  [315] = 283,
  [316] = 282,
  [317] = 297,
  [318] = 273,
  [319] = 319,
  [320] = 280,
  [321] = 274,
  [322] = 301,
  [323] = 289,
  [324] = 324,
  [325] = 272,
  [326] = 319,
  [327] = 327,
  [328] = 304,
  [329] = 310,
  [330] = 284,
  [331] = 331,
  [332] = 311,
  [333] = 327,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 335,
  [341] = 336,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 345,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 350,
  [352] = 352,
  [353] = 353,
  [354] = 349,
  [355] = 344,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 348,
  [360] = 360,
  [361] = 361,
  [362] = 346,
  [363] = 363,
  [364] = 342,
  [365] = 365,
  [366] = 366,
  [367] = 361,
  [368] = 368,
  [369] = 369,
  [370] = 360,
  [371] = 369,
  [372] = 365,
  [373] = 373,
  [374] = 368,
  [375] = 375,
  [376] = 363,
  [377] = 357,
  [378] = 373,
  [379] = 352,
  [380] = 375,
  [381] = 356,
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
      if (eof) ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(34)
      if (lookahead == '\r') SKIP(34)
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '$') ADVANCE(56);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(104);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '+') ADVANCE(53);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '0') ADVANCE(89);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(67);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == '`') ADVANCE(48);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '|') ADVANCE(19);
      if (lookahead == '}') ADVANCE(39);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(75);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') ADVANCE(106);
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(103);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(106);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') ADVANCE(79);
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(79);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\r') ADVANCE(80);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '>') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(80);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') ADVANCE(81);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(83);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(81);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(111);
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(60);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(110);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(74);
      END_STATE();
    case 10:
      if (lookahead == '<') ADVANCE(99);
      END_STATE();
    case 11:
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(52);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(23);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(91);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(92);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 19:
      if (lookahead == '|') ADVANCE(59);
      END_STATE();
    case 20:
      if (lookahead == 0 ||
          lookahead == '\n') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 21:
      if (lookahead == 0 ||
          lookahead == '\n') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(1);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(105);
      END_STATE();
    case 22:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 23:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(91);
      END_STATE();
    case 24:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(24)
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '+') ADVANCE(53);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(66);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == '`') ADVANCE(48);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '|') ADVANCE(19);
      if (lookahead == '}') ADVANCE(39);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 25:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(25)
      if (lookahead == '\r') SKIP(25)
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '+') ADVANCE(53);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(66);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '|') ADVANCE(19);
      if (lookahead == '}') ADVANCE(39);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 26:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(26)
      if (lookahead == '\r') SKIP(26)
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(103);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '\\') ADVANCE(20);
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
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == '>') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '|') ADVANCE(19);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(92);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 32:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\r') ADVANCE(73);
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '$') ADVANCE(56);
      if (lookahead == '\'') ADVANCE(104);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == '+') ADVANCE(53);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(89);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '`') ADVANCE(48);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '|') ADVANCE(19);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(32)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 33:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\r') ADVANCE(73);
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(104);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '|') ADVANCE(19);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(33)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 34:
      if (eof) ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(34)
      if (lookahead == '\r') SKIP(34)
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '$') ADVANCE(56);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(104);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '+') ADVANCE(53);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '0') ADVANCE(89);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(67);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == '`') ADVANCE(48);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '|') ADVANCE(19);
      if (lookahead == '}') ADVANCE(39);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(35)
      if (lookahead == '\r') SKIP(35)
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '$') ADVANCE(56);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(104);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '+') ADVANCE(53);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '0') ADVANCE(89);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == '`') ADVANCE(48);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '|') ADVANCE(19);
      if (lookahead == '}') ADVANCE(39);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(52);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '>') ADVANCE(100);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '/') ADVANCE(74);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_NL);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\r') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_LONGCOMMENT_token1);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_LONGCOMMENT_token1);
      if (lookahead == '\r') ADVANCE(79);
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_LONGCOMMENT_token1);
      if (lookahead == '\r') ADVANCE(80);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '>') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_LONGCOMMENT_token1);
      if (lookahead == '\r') ADVANCE(81);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(83);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_LONGCOMMENT_token1);
      if (lookahead == '"') ADVANCE(6);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_LONGCOMMENT_token1);
      if (lookahead == '\'') ADVANCE(8);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_LONGCOMMENT_token1);
      if (lookahead == '/') ADVANCE(74);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_LONGCOMMENT_token1);
      if (lookahead == '>') ADVANCE(100);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_LONGCOMMENT_token1);
      if (lookahead == 0 ||
          lookahead == '\n') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '_') ADVANCE(90);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(16);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(17);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(18);
      if (lookahead == '_') ADVANCE(90);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(23);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(87);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(28);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(97);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(98);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(6);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(8);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_token1);
      if (lookahead == '\r') ADVANCE(106);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(109);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_token1);
      if (lookahead == '/') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(109);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
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
      ACCEPT_TOKEN(sym_break_stmt);
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
      ACCEPT_TOKEN(sym_continue_stmt);
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
  [1] = {.lex_state = 35},
  [2] = {.lex_state = 35},
  [3] = {.lex_state = 35},
  [4] = {.lex_state = 35},
  [5] = {.lex_state = 35},
  [6] = {.lex_state = 35},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 35},
  [9] = {.lex_state = 35},
  [10] = {.lex_state = 35},
  [11] = {.lex_state = 35},
  [12] = {.lex_state = 35},
  [13] = {.lex_state = 35},
  [14] = {.lex_state = 35},
  [15] = {.lex_state = 35},
  [16] = {.lex_state = 35},
  [17] = {.lex_state = 35},
  [18] = {.lex_state = 35},
  [19] = {.lex_state = 35},
  [20] = {.lex_state = 35},
  [21] = {.lex_state = 35},
  [22] = {.lex_state = 35},
  [23] = {.lex_state = 35},
  [24] = {.lex_state = 35},
  [25] = {.lex_state = 35},
  [26] = {.lex_state = 35},
  [27] = {.lex_state = 35},
  [28] = {.lex_state = 35},
  [29] = {.lex_state = 35},
  [30] = {.lex_state = 35},
  [31] = {.lex_state = 35},
  [32] = {.lex_state = 35},
  [33] = {.lex_state = 35},
  [34] = {.lex_state = 35},
  [35] = {.lex_state = 35},
  [36] = {.lex_state = 35},
  [37] = {.lex_state = 35},
  [38] = {.lex_state = 35},
  [39] = {.lex_state = 35},
  [40] = {.lex_state = 35},
  [41] = {.lex_state = 35},
  [42] = {.lex_state = 35},
  [43] = {.lex_state = 35},
  [44] = {.lex_state = 35},
  [45] = {.lex_state = 35},
  [46] = {.lex_state = 35},
  [47] = {.lex_state = 35},
  [48] = {.lex_state = 35},
  [49] = {.lex_state = 35},
  [50] = {.lex_state = 35},
  [51] = {.lex_state = 35},
  [52] = {.lex_state = 35},
  [53] = {.lex_state = 35},
  [54] = {.lex_state = 35},
  [55] = {.lex_state = 35},
  [56] = {.lex_state = 35},
  [57] = {.lex_state = 35},
  [58] = {.lex_state = 35},
  [59] = {.lex_state = 32},
  [60] = {.lex_state = 35},
  [61] = {.lex_state = 35},
  [62] = {.lex_state = 32},
  [63] = {.lex_state = 32},
  [64] = {.lex_state = 24},
  [65] = {.lex_state = 24},
  [66] = {.lex_state = 24},
  [67] = {.lex_state = 24},
  [68] = {.lex_state = 24},
  [69] = {.lex_state = 24},
  [70] = {.lex_state = 24},
  [71] = {.lex_state = 24},
  [72] = {.lex_state = 24},
  [73] = {.lex_state = 24},
  [74] = {.lex_state = 24},
  [75] = {.lex_state = 24},
  [76] = {.lex_state = 35},
  [77] = {.lex_state = 25},
  [78] = {.lex_state = 25},
  [79] = {.lex_state = 25},
  [80] = {.lex_state = 25},
  [81] = {.lex_state = 25},
  [82] = {.lex_state = 33},
  [83] = {.lex_state = 25},
  [84] = {.lex_state = 25},
  [85] = {.lex_state = 25},
  [86] = {.lex_state = 25},
  [87] = {.lex_state = 35},
  [88] = {.lex_state = 35},
  [89] = {.lex_state = 35},
  [90] = {.lex_state = 35},
  [91] = {.lex_state = 35},
  [92] = {.lex_state = 35},
  [93] = {.lex_state = 35},
  [94] = {.lex_state = 35},
  [95] = {.lex_state = 35},
  [96] = {.lex_state = 35},
  [97] = {.lex_state = 35},
  [98] = {.lex_state = 35},
  [99] = {.lex_state = 35},
  [100] = {.lex_state = 35},
  [101] = {.lex_state = 35},
  [102] = {.lex_state = 35},
  [103] = {.lex_state = 35},
  [104] = {.lex_state = 35},
  [105] = {.lex_state = 35},
  [106] = {.lex_state = 35},
  [107] = {.lex_state = 35},
  [108] = {.lex_state = 35},
  [109] = {.lex_state = 35},
  [110] = {.lex_state = 35},
  [111] = {.lex_state = 35},
  [112] = {.lex_state = 35},
  [113] = {.lex_state = 35},
  [114] = {.lex_state = 35},
  [115] = {.lex_state = 24},
  [116] = {.lex_state = 24},
  [117] = {.lex_state = 24},
  [118] = {.lex_state = 24},
  [119] = {.lex_state = 24},
  [120] = {.lex_state = 24},
  [121] = {.lex_state = 24},
  [122] = {.lex_state = 24},
  [123] = {.lex_state = 24},
  [124] = {.lex_state = 24},
  [125] = {.lex_state = 24},
  [126] = {.lex_state = 24},
  [127] = {.lex_state = 24},
  [128] = {.lex_state = 24},
  [129] = {.lex_state = 24},
  [130] = {.lex_state = 24},
  [131] = {.lex_state = 24},
  [132] = {.lex_state = 24},
  [133] = {.lex_state = 24},
  [134] = {.lex_state = 24},
  [135] = {.lex_state = 24},
  [136] = {.lex_state = 24},
  [137] = {.lex_state = 24},
  [138] = {.lex_state = 24},
  [139] = {.lex_state = 24},
  [140] = {.lex_state = 24},
  [141] = {.lex_state = 24},
  [142] = {.lex_state = 24},
  [143] = {.lex_state = 24},
  [144] = {.lex_state = 24},
  [145] = {.lex_state = 24},
  [146] = {.lex_state = 24},
  [147] = {.lex_state = 24},
  [148] = {.lex_state = 24},
  [149] = {.lex_state = 35},
  [150] = {.lex_state = 35},
  [151] = {.lex_state = 33},
  [152] = {.lex_state = 33},
  [153] = {.lex_state = 33},
  [154] = {.lex_state = 33},
  [155] = {.lex_state = 33},
  [156] = {.lex_state = 33},
  [157] = {.lex_state = 33},
  [158] = {.lex_state = 33},
  [159] = {.lex_state = 33},
  [160] = {.lex_state = 32},
  [161] = {.lex_state = 32},
  [162] = {.lex_state = 32},
  [163] = {.lex_state = 32},
  [164] = {.lex_state = 32},
  [165] = {.lex_state = 32},
  [166] = {.lex_state = 32},
  [167] = {.lex_state = 32},
  [168] = {.lex_state = 32},
  [169] = {.lex_state = 32},
  [170] = {.lex_state = 32},
  [171] = {.lex_state = 32},
  [172] = {.lex_state = 32},
  [173] = {.lex_state = 32},
  [174] = {.lex_state = 32},
  [175] = {.lex_state = 32},
  [176] = {.lex_state = 32},
  [177] = {.lex_state = 32},
  [178] = {.lex_state = 32},
  [179] = {.lex_state = 32},
  [180] = {.lex_state = 32},
  [181] = {.lex_state = 32},
  [182] = {.lex_state = 32},
  [183] = {.lex_state = 32},
  [184] = {.lex_state = 32},
  [185] = {.lex_state = 32},
  [186] = {.lex_state = 35},
  [187] = {.lex_state = 32},
  [188] = {.lex_state = 32},
  [189] = {.lex_state = 32},
  [190] = {.lex_state = 32},
  [191] = {.lex_state = 32},
  [192] = {.lex_state = 32},
  [193] = {.lex_state = 32},
  [194] = {.lex_state = 32},
  [195] = {.lex_state = 32},
  [196] = {.lex_state = 32},
  [197] = {.lex_state = 32},
  [198] = {.lex_state = 32},
  [199] = {.lex_state = 32},
  [200] = {.lex_state = 32},
  [201] = {.lex_state = 32},
  [202] = {.lex_state = 32},
  [203] = {.lex_state = 32},
  [204] = {.lex_state = 32},
  [205] = {.lex_state = 32},
  [206] = {.lex_state = 32},
  [207] = {.lex_state = 32},
  [208] = {.lex_state = 32},
  [209] = {.lex_state = 32},
  [210] = {.lex_state = 32},
  [211] = {.lex_state = 32},
  [212] = {.lex_state = 32},
  [213] = {.lex_state = 32},
  [214] = {.lex_state = 32},
  [215] = {.lex_state = 32},
  [216] = {.lex_state = 32},
  [217] = {.lex_state = 32},
  [218] = {.lex_state = 32},
  [219] = {.lex_state = 32},
  [220] = {.lex_state = 32},
  [221] = {.lex_state = 35},
  [222] = {.lex_state = 35},
  [223] = {.lex_state = 35},
  [224] = {.lex_state = 35},
  [225] = {.lex_state = 32},
  [226] = {.lex_state = 35},
  [227] = {.lex_state = 35},
  [228] = {.lex_state = 32},
  [229] = {.lex_state = 35},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 35},
  [232] = {.lex_state = 35},
  [233] = {.lex_state = 32},
  [234] = {.lex_state = 32},
  [235] = {.lex_state = 35},
  [236] = {.lex_state = 32},
  [237] = {.lex_state = 35},
  [238] = {.lex_state = 35},
  [239] = {.lex_state = 35},
  [240] = {.lex_state = 35},
  [241] = {.lex_state = 35},
  [242] = {.lex_state = 35},
  [243] = {.lex_state = 2},
  [244] = {.lex_state = 35},
  [245] = {.lex_state = 35},
  [246] = {.lex_state = 35},
  [247] = {.lex_state = 32},
  [248] = {.lex_state = 35},
  [249] = {.lex_state = 32},
  [250] = {.lex_state = 2},
  [251] = {.lex_state = 35},
  [252] = {.lex_state = 2},
  [253] = {.lex_state = 2},
  [254] = {.lex_state = 35},
  [255] = {.lex_state = 35},
  [256] = {.lex_state = 35},
  [257] = {.lex_state = 32},
  [258] = {.lex_state = 32},
  [259] = {.lex_state = 32},
  [260] = {.lex_state = 2},
  [261] = {.lex_state = 2},
  [262] = {.lex_state = 35},
  [263] = {.lex_state = 32},
  [264] = {.lex_state = 35},
  [265] = {.lex_state = 32},
  [266] = {.lex_state = 35},
  [267] = {.lex_state = 32},
  [268] = {.lex_state = 2},
  [269] = {.lex_state = 32},
  [270] = {.lex_state = 2},
  [271] = {.lex_state = 35},
  [272] = {.lex_state = 35},
  [273] = {.lex_state = 3},
  [274] = {.lex_state = 35},
  [275] = {.lex_state = 4},
  [276] = {.lex_state = 35},
  [277] = {.lex_state = 35},
  [278] = {.lex_state = 35},
  [279] = {.lex_state = 35},
  [280] = {.lex_state = 35},
  [281] = {.lex_state = 35},
  [282] = {.lex_state = 3},
  [283] = {.lex_state = 5},
  [284] = {.lex_state = 35},
  [285] = {.lex_state = 5},
  [286] = {.lex_state = 35},
  [287] = {.lex_state = 35},
  [288] = {.lex_state = 4},
  [289] = {.lex_state = 35},
  [290] = {.lex_state = 35},
  [291] = {.lex_state = 4},
  [292] = {.lex_state = 35},
  [293] = {.lex_state = 32},
  [294] = {.lex_state = 32},
  [295] = {.lex_state = 27},
  [296] = {.lex_state = 35},
  [297] = {.lex_state = 35},
  [298] = {.lex_state = 35},
  [299] = {.lex_state = 3},
  [300] = {.lex_state = 5},
  [301] = {.lex_state = 35},
  [302] = {.lex_state = 35},
  [303] = {.lex_state = 4},
  [304] = {.lex_state = 27},
  [305] = {.lex_state = 35},
  [306] = {.lex_state = 5},
  [307] = {.lex_state = 32},
  [308] = {.lex_state = 35},
  [309] = {.lex_state = 35},
  [310] = {.lex_state = 35},
  [311] = {.lex_state = 24},
  [312] = {.lex_state = 4},
  [313] = {.lex_state = 35},
  [314] = {.lex_state = 27},
  [315] = {.lex_state = 5},
  [316] = {.lex_state = 3},
  [317] = {.lex_state = 35},
  [318] = {.lex_state = 3},
  [319] = {.lex_state = 35},
  [320] = {.lex_state = 35},
  [321] = {.lex_state = 35},
  [322] = {.lex_state = 35},
  [323] = {.lex_state = 35},
  [324] = {.lex_state = 32},
  [325] = {.lex_state = 35},
  [326] = {.lex_state = 35},
  [327] = {.lex_state = 35},
  [328] = {.lex_state = 27},
  [329] = {.lex_state = 35},
  [330] = {.lex_state = 35},
  [331] = {.lex_state = 35},
  [332] = {.lex_state = 24},
  [333] = {.lex_state = 35},
  [334] = {.lex_state = 35},
  [335] = {.lex_state = 35},
  [336] = {.lex_state = 35},
  [337] = {.lex_state = 35},
  [338] = {.lex_state = 35},
  [339] = {.lex_state = 35},
  [340] = {.lex_state = 35},
  [341] = {.lex_state = 35},
  [342] = {.lex_state = 27},
  [343] = {.lex_state = 35},
  [344] = {.lex_state = 27},
  [345] = {.lex_state = 27},
  [346] = {.lex_state = 35},
  [347] = {.lex_state = 27},
  [348] = {.lex_state = 35},
  [349] = {.lex_state = 35},
  [350] = {.lex_state = 27},
  [351] = {.lex_state = 27},
  [352] = {.lex_state = 35},
  [353] = {.lex_state = 35},
  [354] = {.lex_state = 35},
  [355] = {.lex_state = 27},
  [356] = {.lex_state = 35},
  [357] = {.lex_state = 35},
  [358] = {.lex_state = 35},
  [359] = {.lex_state = 35},
  [360] = {.lex_state = 35},
  [361] = {.lex_state = 35},
  [362] = {.lex_state = 35},
  [363] = {.lex_state = 35},
  [364] = {.lex_state = 27},
  [365] = {.lex_state = 35},
  [366] = {.lex_state = 35},
  [367] = {.lex_state = 35},
  [368] = {.lex_state = 35},
  [369] = {.lex_state = 35},
  [370] = {.lex_state = 35},
  [371] = {.lex_state = 35},
  [372] = {.lex_state = 35},
  [373] = {.lex_state = 35},
  [374] = {.lex_state = 35},
  [375] = {.lex_state = 35},
  [376] = {.lex_state = 35},
  [377] = {.lex_state = 35},
  [378] = {.lex_state = 35},
  [379] = {.lex_state = 35},
  [380] = {.lex_state = 35},
  [381] = {.lex_state = 35},
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
    [sym_continue_stmt] = ACTIONS(1),
    [sym_break_stmt] = ACTIONS(1),
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
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
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
    [sym_source_file] = STATE(343),
    [sym_toplevel_items] = STATE(267),
    [sym_assignment] = STATE(324),
    [sym_section] = STATE(324),
    [sym_if_stmt] = STATE(324),
    [sym_for_stmt] = STATE(324),
    [sym_var_stmt] = STATE(324),
    [sym_base_type_spec] = STATE(176),
    [sym_type_spec] = STATE(181),
    [sym_expression] = STATE(220),
    [sym_unary_expr] = STATE(194),
    [sym_not_expr] = STATE(194),
    [sym_access_expr] = STATE(160),
    [sym_paren_expr] = STATE(152),
    [sym_literal] = STATE(202),
    [sym_tuple_literal] = STATE(181),
    [sym_list_literal] = STATE(181),
    [sym_dict_literal] = STATE(181),
    [sym_or_expr] = STATE(194),
    [sym_NUM] = STATE(181),
    [sym_other_lit] = STATE(181),
    [sym_quoted_string] = STATE(203),
    [sym_multiline_string] = STATE(203),
    [sym_STR] = STATE(181),
    [aux_sym_source_file_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_for] = ACTIONS(15),
    [anon_sym_func] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_var] = ACTIONS(21),
    [anon_sym_void] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_char] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_Duration] = ACTIONS(23),
    [anon_sym_IpAddr] = ACTIONS(23),
    [anon_sym_CIDR] = ACTIONS(23),
    [anon_sym_Size] = ACTIONS(23),
    [anon_sym_Date] = ACTIONS(23),
    [anon_sym_Time] = ACTIONS(23),
    [anon_sym_DateType] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_typespec] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_tuple] = ACTIONS(31),
    [anon_sym_list] = ACTIONS(33),
    [anon_sym_dict] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_not] = ACTIONS(39),
    [anon_sym_DOLLAR] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_True] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_False] = ACTIONS(43),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym_integer] = ACTIONS(45),
    [sym_float] = ACTIONS(47),
    [anon_sym_LT_LT] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(55),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(57),
  },
  [2] = {
    [sym_body_items] = STATE(307),
    [sym_assignment] = STATE(293),
    [sym_section] = STATE(293),
    [sym_if_stmt] = STATE(293),
    [sym_for_stmt] = STATE(293),
    [sym_return_stmt] = STATE(293),
    [sym_var_stmt] = STATE(293),
    [sym_base_type_spec] = STATE(176),
    [sym_type_spec] = STATE(181),
    [sym_expression] = STATE(225),
    [sym_unary_expr] = STATE(194),
    [sym_not_expr] = STATE(194),
    [sym_access_expr] = STATE(160),
    [sym_paren_expr] = STATE(152),
    [sym_literal] = STATE(202),
    [sym_tuple_literal] = STATE(181),
    [sym_list_literal] = STATE(181),
    [sym_dict_literal] = STATE(181),
    [sym_or_expr] = STATE(194),
    [sym_NUM] = STATE(181),
    [sym_other_lit] = STATE(181),
    [sym_quoted_string] = STATE(203),
    [sym_multiline_string] = STATE(203),
    [sym_STR] = STATE(181),
    [aux_sym_body_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(62),
    [anon_sym_RBRACE] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_for] = ACTIONS(70),
    [sym_continue_stmt] = ACTIONS(73),
    [sym_break_stmt] = ACTIONS(73),
    [anon_sym_return] = ACTIONS(76),
    [anon_sym_func] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(82),
    [anon_sym_var] = ACTIONS(85),
    [anon_sym_void] = ACTIONS(88),
    [anon_sym_bool] = ACTIONS(88),
    [anon_sym_int] = ACTIONS(88),
    [anon_sym_char] = ACTIONS(88),
    [anon_sym_string] = ACTIONS(88),
    [anon_sym_float] = ACTIONS(88),
    [anon_sym_Duration] = ACTIONS(88),
    [anon_sym_IpAddr] = ACTIONS(88),
    [anon_sym_CIDR] = ACTIONS(88),
    [anon_sym_Size] = ACTIONS(88),
    [anon_sym_Date] = ACTIONS(88),
    [anon_sym_Time] = ACTIONS(88),
    [anon_sym_DateType] = ACTIONS(88),
    [anon_sym_BQUOTE] = ACTIONS(91),
    [anon_sym_typespec] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_tuple] = ACTIONS(100),
    [anon_sym_list] = ACTIONS(103),
    [anon_sym_dict] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_not] = ACTIONS(112),
    [anon_sym_DOLLAR] = ACTIONS(115),
    [anon_sym_true] = ACTIONS(118),
    [anon_sym_True] = ACTIONS(118),
    [anon_sym_false] = ACTIONS(118),
    [anon_sym_False] = ACTIONS(118),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym_integer] = ACTIONS(121),
    [sym_float] = ACTIONS(124),
    [anon_sym_LT_LT] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(136),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(139),
  },
  [3] = {
    [sym_body_items] = STATE(257),
    [sym_assignment] = STATE(293),
    [sym_section] = STATE(293),
    [sym_if_stmt] = STATE(293),
    [sym_for_stmt] = STATE(293),
    [sym_return_stmt] = STATE(293),
    [sym_var_stmt] = STATE(293),
    [sym_base_type_spec] = STATE(176),
    [sym_type_spec] = STATE(181),
    [sym_expression] = STATE(225),
    [sym_unary_expr] = STATE(194),
    [sym_not_expr] = STATE(194),
    [sym_access_expr] = STATE(160),
    [sym_paren_expr] = STATE(152),
    [sym_literal] = STATE(202),
    [sym_tuple_literal] = STATE(181),
    [sym_list_literal] = STATE(181),
    [sym_dict_literal] = STATE(181),
    [sym_or_expr] = STATE(194),
    [sym_NUM] = STATE(181),
    [sym_other_lit] = STATE(181),
    [sym_quoted_string] = STATE(203),
    [sym_multiline_string] = STATE(203),
    [sym_STR] = STATE(181),
    [aux_sym_body_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(142),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_for] = ACTIONS(15),
    [sym_continue_stmt] = ACTIONS(144),
    [sym_break_stmt] = ACTIONS(144),
    [anon_sym_return] = ACTIONS(146),
    [anon_sym_func] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_var] = ACTIONS(21),
    [anon_sym_void] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_char] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_Duration] = ACTIONS(23),
    [anon_sym_IpAddr] = ACTIONS(23),
    [anon_sym_CIDR] = ACTIONS(23),
    [anon_sym_Size] = ACTIONS(23),
    [anon_sym_Date] = ACTIONS(23),
    [anon_sym_Time] = ACTIONS(23),
    [anon_sym_DateType] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_typespec] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_tuple] = ACTIONS(31),
    [anon_sym_list] = ACTIONS(33),
    [anon_sym_dict] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_not] = ACTIONS(39),
    [anon_sym_DOLLAR] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_True] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_False] = ACTIONS(43),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym_integer] = ACTIONS(45),
    [sym_float] = ACTIONS(47),
    [anon_sym_LT_LT] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(55),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(57),
  },
  [4] = {
    [sym_body_items] = STATE(249),
    [sym_assignment] = STATE(293),
    [sym_section] = STATE(293),
    [sym_if_stmt] = STATE(293),
    [sym_for_stmt] = STATE(293),
    [sym_return_stmt] = STATE(293),
    [sym_var_stmt] = STATE(293),
    [sym_base_type_spec] = STATE(176),
    [sym_type_spec] = STATE(181),
    [sym_expression] = STATE(225),
    [sym_unary_expr] = STATE(194),
    [sym_not_expr] = STATE(194),
    [sym_access_expr] = STATE(160),
    [sym_paren_expr] = STATE(152),
    [sym_literal] = STATE(202),
    [sym_tuple_literal] = STATE(181),
    [sym_list_literal] = STATE(181),
    [sym_dict_literal] = STATE(181),
    [sym_or_expr] = STATE(194),
    [sym_NUM] = STATE(181),
    [sym_other_lit] = STATE(181),
    [sym_quoted_string] = STATE(203),
    [sym_multiline_string] = STATE(203),
    [sym_STR] = STATE(181),
    [aux_sym_body_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(148),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_for] = ACTIONS(15),
    [sym_continue_stmt] = ACTIONS(144),
    [sym_break_stmt] = ACTIONS(144),
    [anon_sym_return] = ACTIONS(146),
    [anon_sym_func] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_var] = ACTIONS(21),
    [anon_sym_void] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_char] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_Duration] = ACTIONS(23),
    [anon_sym_IpAddr] = ACTIONS(23),
    [anon_sym_CIDR] = ACTIONS(23),
    [anon_sym_Size] = ACTIONS(23),
    [anon_sym_Date] = ACTIONS(23),
    [anon_sym_Time] = ACTIONS(23),
    [anon_sym_DateType] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_typespec] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_tuple] = ACTIONS(31),
    [anon_sym_list] = ACTIONS(33),
    [anon_sym_dict] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_not] = ACTIONS(39),
    [anon_sym_DOLLAR] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_True] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_False] = ACTIONS(43),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym_integer] = ACTIONS(45),
    [sym_float] = ACTIONS(47),
    [anon_sym_LT_LT] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(55),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(57),
  },
  [5] = {
    [sym_toplevel_items] = STATE(269),
    [sym_assignment] = STATE(324),
    [sym_section] = STATE(324),
    [sym_if_stmt] = STATE(324),
    [sym_for_stmt] = STATE(324),
    [sym_var_stmt] = STATE(324),
    [sym_base_type_spec] = STATE(176),
    [sym_type_spec] = STATE(181),
    [sym_expression] = STATE(220),
    [sym_unary_expr] = STATE(194),
    [sym_not_expr] = STATE(194),
    [sym_access_expr] = STATE(160),
    [sym_paren_expr] = STATE(152),
    [sym_literal] = STATE(202),
    [sym_tuple_literal] = STATE(181),
    [sym_list_literal] = STATE(181),
    [sym_dict_literal] = STATE(181),
    [sym_or_expr] = STATE(194),
    [sym_NUM] = STATE(181),
    [sym_other_lit] = STATE(181),
    [sym_quoted_string] = STATE(203),
    [sym_multiline_string] = STATE(203),
    [sym_STR] = STATE(181),
    [aux_sym_source_file_repeat2] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(150),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_for] = ACTIONS(15),
    [anon_sym_func] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_var] = ACTIONS(21),
    [anon_sym_void] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_char] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_Duration] = ACTIONS(23),
    [anon_sym_IpAddr] = ACTIONS(23),
    [anon_sym_CIDR] = ACTIONS(23),
    [anon_sym_Size] = ACTIONS(23),
    [anon_sym_Date] = ACTIONS(23),
    [anon_sym_Time] = ACTIONS(23),
    [anon_sym_DateType] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_typespec] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_tuple] = ACTIONS(31),
    [anon_sym_list] = ACTIONS(33),
    [anon_sym_dict] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_not] = ACTIONS(39),
    [anon_sym_DOLLAR] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_True] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_False] = ACTIONS(43),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym_integer] = ACTIONS(45),
    [sym_float] = ACTIONS(47),
    [anon_sym_LT_LT] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(55),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(57),
  },
  [6] = {
    [sym_toplevel_items] = STATE(294),
    [sym_assignment] = STATE(324),
    [sym_section] = STATE(324),
    [sym_if_stmt] = STATE(324),
    [sym_for_stmt] = STATE(324),
    [sym_var_stmt] = STATE(324),
    [sym_base_type_spec] = STATE(176),
    [sym_type_spec] = STATE(181),
    [sym_expression] = STATE(220),
    [sym_unary_expr] = STATE(194),
    [sym_not_expr] = STATE(194),
    [sym_access_expr] = STATE(160),
    [sym_paren_expr] = STATE(152),
    [sym_literal] = STATE(202),
    [sym_tuple_literal] = STATE(181),
    [sym_list_literal] = STATE(181),
    [sym_dict_literal] = STATE(181),
    [sym_or_expr] = STATE(194),
    [sym_NUM] = STATE(181),
    [sym_other_lit] = STATE(181),
    [sym_quoted_string] = STATE(203),
    [sym_multiline_string] = STATE(203),
    [sym_STR] = STATE(181),
    [aux_sym_source_file_repeat2] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(152),
    [sym_identifier] = ACTIONS(154),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_if] = ACTIONS(160),
    [anon_sym_for] = ACTIONS(163),
    [anon_sym_func] = ACTIONS(166),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym_var] = ACTIONS(172),
    [anon_sym_void] = ACTIONS(175),
    [anon_sym_bool] = ACTIONS(175),
    [anon_sym_int] = ACTIONS(175),
    [anon_sym_char] = ACTIONS(175),
    [anon_sym_string] = ACTIONS(175),
    [anon_sym_float] = ACTIONS(175),
    [anon_sym_Duration] = ACTIONS(175),
    [anon_sym_IpAddr] = ACTIONS(175),
    [anon_sym_CIDR] = ACTIONS(175),
    [anon_sym_Size] = ACTIONS(175),
    [anon_sym_Date] = ACTIONS(175),
    [anon_sym_Time] = ACTIONS(175),
    [anon_sym_DateType] = ACTIONS(175),
    [anon_sym_BQUOTE] = ACTIONS(178),
    [anon_sym_typespec] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(184),
    [anon_sym_tuple] = ACTIONS(187),
    [anon_sym_list] = ACTIONS(190),
    [anon_sym_dict] = ACTIONS(193),
    [anon_sym_PLUS] = ACTIONS(196),
    [anon_sym_DASH] = ACTIONS(196),
    [anon_sym_not] = ACTIONS(199),
    [anon_sym_DOLLAR] = ACTIONS(202),
    [anon_sym_true] = ACTIONS(205),
    [anon_sym_True] = ACTIONS(205),
    [anon_sym_false] = ACTIONS(205),
    [anon_sym_False] = ACTIONS(205),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym_integer] = ACTIONS(208),
    [sym_float] = ACTIONS(211),
    [anon_sym_LT_LT] = ACTIONS(214),
    [anon_sym_DQUOTE] = ACTIONS(217),
    [anon_sym_SQUOTE] = ACTIONS(220),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(223),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(226),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 30,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(27), 1,
      anon_sym_typespec,
    ACTIONS(31), 1,
      anon_sym_tuple,
    ACTIONS(33), 1,
      anon_sym_list,
    ACTIONS(35), 1,
      anon_sym_dict,
    ACTIONS(39), 1,
      anon_sym_not,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_LBRACE,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_BQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(243), 1,
      sym_NL,
    ACTIONS(245), 1,
      anon_sym_LT_LT,
    ACTIONS(247), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(152), 1,
      sym_paren_expr,
    STATE(176), 1,
      sym_base_type_spec,
    STATE(233), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(45), 2,
      sym_integer,
      sym_float,
    ACTIONS(229), 2,
      anon_sym_DOLLAR,
      sym_identifier,
    ACTIONS(231), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(241), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(202), 2,
      sym_access_expr,
      sym_literal,
    STATE(203), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(194), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(43), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(181), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(23), 13,
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
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(219), 1,
      sym_plus_expr,
    STATE(313), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(144), 1,
      sym_and_expr,
    STATE(248), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(199), 1,
      sym_minus_expr,
    STATE(309), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(119), 1,
      sym_ne_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(321), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(217), 1,
      sym_lt_expr,
    STATE(314), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(238), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(214), 1,
      sym_gt_expr,
    STATE(317), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(211), 1,
      sym_lte_expr,
    STATE(322), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(178), 1,
      sym_and_expr,
    STATE(246), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(235), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(209), 1,
      sym_gte_expr,
    STATE(328), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(185), 1,
      sym_ne_expr,
    STATE(274), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(299), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(221), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(198), 1,
      sym_div_expr,
    STATE(298), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(148), 1,
      sym_div_expr,
    STATE(281), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(145), 1,
      sym_mul_expr,
    STATE(286), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(142), 1,
      sym_mod_expr,
    STATE(287), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(207), 1,
      sym_mul_expr,
    STATE(305), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(141), 1,
      sym_minus_expr,
    STATE(290), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(140), 1,
      sym_plus_expr,
    STATE(292), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(133), 1,
      sym_lt_expr,
    STATE(295), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(131), 1,
      sym_gt_expr,
    STATE(297), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(129), 1,
      sym_lte_expr,
    STATE(301), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(126), 1,
      sym_gte_expr,
    STATE(304), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(204), 1,
      sym_eq_expr,
    STATE(332), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(125), 1,
      sym_eq_expr,
    STATE(311), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(226), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
  [3388] = 31,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(208), 1,
      sym_mod_expr,
    STATE(308), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
  [3509] = 30,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(264), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
  [3627] = 30,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(325), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
  [3745] = 30,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(222), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
  [3863] = 30,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(254), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
  [3981] = 30,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(232), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
  [4099] = 30,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(272), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
  [4217] = 30,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(223), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
  [4335] = 30,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(284), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
  [4453] = 30,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(262), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
  [4571] = 30,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(296), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
  [4689] = 30,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(278), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
  [4807] = 30,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(330), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
  [4925] = 30,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(323), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
  [5043] = 30,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(256), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
  [5161] = 30,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(237), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
  [5279] = 30,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_typespec,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_tuple,
    ACTIONS(33), 1,
      anon_sym_list,
    ACTIONS(35), 1,
      anon_sym_dict,
    ACTIONS(39), 1,
      anon_sym_not,
    ACTIONS(41), 1,
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
    ACTIONS(229), 1,
      sym_identifier,
    STATE(152), 1,
      sym_paren_expr,
    STATE(176), 1,
      sym_base_type_spec,
    STATE(212), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(202), 2,
      sym_access_expr,
      sym_literal,
    STATE(203), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(194), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(43), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(181), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(23), 13,
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
  [5397] = 30,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(240), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
  [5515] = 30,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(227), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
  [5633] = 30,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(289), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
  [5751] = 30,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_typespec,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_tuple,
    ACTIONS(33), 1,
      anon_sym_list,
    ACTIONS(35), 1,
      anon_sym_dict,
    ACTIONS(39), 1,
      anon_sym_not,
    ACTIONS(41), 1,
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
    ACTIONS(229), 1,
      sym_identifier,
    STATE(152), 1,
      sym_paren_expr,
    STATE(176), 1,
      sym_base_type_spec,
    STATE(193), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(202), 2,
      sym_access_expr,
      sym_literal,
    STATE(203), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(194), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(43), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(181), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(23), 13,
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
  [5869] = 30,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(241), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
  [5987] = 30,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(275), 1,
      anon_sym_not,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    STATE(143), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(118), 2,
      sym_access_expr,
      sym_literal,
    STATE(120), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
  [6105] = 30,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_typespec,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_tuple,
    ACTIONS(33), 1,
      anon_sym_list,
    ACTIONS(35), 1,
      anon_sym_dict,
    ACTIONS(39), 1,
      anon_sym_not,
    ACTIONS(41), 1,
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
    ACTIONS(229), 1,
      sym_identifier,
    STATE(152), 1,
      sym_paren_expr,
    STATE(176), 1,
      sym_base_type_spec,
    STATE(213), 1,
      sym_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(202), 2,
      sym_access_expr,
      sym_literal,
    STATE(203), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(194), 3,
      sym_unary_expr,
      sym_not_expr,
      sym_or_expr,
    ACTIONS(43), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(181), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(23), 13,
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
  [6223] = 6,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    ACTIONS(307), 1,
      anon_sym_SEMI,
    ACTIONS(310), 1,
      sym_NL,
    STATE(59), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(305), 45,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_if,
      anon_sym_for,
      sym_continue_stmt,
      sym_break_stmt,
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
  [6287] = 26,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_func,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_typespec,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_tuple,
    ACTIONS(269), 1,
      anon_sym_list,
    ACTIONS(271), 1,
      anon_sym_dict,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    ACTIONS(283), 1,
      sym_float,
    ACTIONS(285), 1,
      anon_sym_LT_LT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym_paren_expr,
    STATE(121), 1,
      sym_base_type_spec,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(139), 2,
      sym_access_expr,
      sym_literal,
    ACTIONS(279), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(124), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(259), 13,
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
  [6390] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_typespec,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_tuple,
    ACTIONS(33), 1,
      anon_sym_list,
    ACTIONS(35), 1,
      anon_sym_dict,
    ACTIONS(41), 1,
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
    ACTIONS(229), 1,
      sym_identifier,
    STATE(152), 1,
      sym_paren_expr,
    STATE(176), 1,
      sym_base_type_spec,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(203), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(210), 2,
      sym_access_expr,
      sym_literal,
    ACTIONS(43), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(181), 7,
      sym_type_spec,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
      sym_NUM,
      sym_other_lit,
      sym_STR,
    ACTIONS(23), 13,
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
  [6493] = 5,
    ACTIONS(315), 1,
      anon_sym_SEMI,
    ACTIONS(317), 1,
      sym_NL,
    STATE(59), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(313), 45,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_if,
      anon_sym_for,
      sym_continue_stmt,
      sym_break_stmt,
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
  [6554] = 6,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(315), 1,
      anon_sym_SEMI,
    ACTIONS(317), 1,
      sym_NL,
    STATE(59), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(319), 41,
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
  [6614] = 4,
    ACTIONS(325), 1,
      anon_sym_LBRACK,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(323), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(321), 38,
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
  [6668] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(329), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(327), 38,
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
  [6719] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(333), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(331), 38,
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
  [6770] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(337), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(335), 38,
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
  [6821] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(341), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(339), 38,
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
  [6872] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(345), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(343), 38,
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
  [6923] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(349), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(347), 38,
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
  [6974] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(353), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(351), 38,
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
  [7025] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(323), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(321), 38,
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
  [7076] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(357), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(355), 38,
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
  [7127] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(361), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(359), 38,
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
  [7178] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(365), 4,
      anon_sym_Date,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(363), 38,
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
  [7229] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(369), 11,
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
    ACTIONS(367), 27,
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
  [7276] = 7,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      anon_sym_LBRACK,
    ACTIONS(379), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(78), 4,
      sym_member_expr,
      sym_index_expr,
      sym_call_actuals,
      aux_sym_access_expr_repeat1,
    ACTIONS(373), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(371), 19,
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
  [7324] = 7,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      anon_sym_LBRACK,
    ACTIONS(379), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(79), 4,
      sym_member_expr,
      sym_index_expr,
      sym_call_actuals,
      aux_sym_access_expr_repeat1,
    ACTIONS(383), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(381), 19,
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
  [7372] = 7,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    ACTIONS(392), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(79), 4,
      sym_member_expr,
      sym_index_expr,
      sym_call_actuals,
      aux_sym_access_expr_repeat1,
    ACTIONS(387), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(385), 19,
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
  [7420] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(400), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(398), 22,
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
  [7456] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(404), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(402), 22,
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
  [7492] = 16,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      sym_identifier,
    ACTIONS(408), 1,
      anon_sym_LBRACE,
    ACTIONS(410), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_LBRACK,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(418), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(263), 1,
      sym_body,
    STATE(337), 1,
      sym_STR,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(371), 2,
      ts_builtin_sym_end,
      sym_NL,
    STATE(117), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(153), 4,
      sym_member_expr,
      sym_index_expr,
      sym_call_actuals,
      aux_sym_access_expr_repeat1,
    ACTIONS(373), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_COLON_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [7554] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(422), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(420), 22,
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
  [7590] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(426), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(424), 22,
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
  [7626] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(430), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(428), 22,
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
  [7662] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(434), 5,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(432), 22,
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
  [7698] = 13,
    ACTIONS(259), 1,
      anon_sym_Date,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(436), 1,
      anon_sym_func,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_typespec,
    ACTIONS(444), 1,
      anon_sym_RBRACK,
    ACTIONS(446), 1,
      anon_sym_tuple,
    ACTIONS(448), 1,
      anon_sym_list,
    ACTIONS(450), 1,
      anon_sym_dict,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(66), 2,
      sym_base_type_spec,
      sym_func_spec,
    STATE(88), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    ACTIONS(440), 12,
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
  [7752] = 13,
    ACTIONS(452), 1,
      anon_sym_func,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(461), 1,
      anon_sym_Date,
    ACTIONS(464), 1,
      anon_sym_BQUOTE,
    ACTIONS(467), 1,
      anon_sym_typespec,
    ACTIONS(470), 1,
      anon_sym_RBRACK,
    ACTIONS(472), 1,
      anon_sym_tuple,
    ACTIONS(475), 1,
      anon_sym_list,
    ACTIONS(478), 1,
      anon_sym_dict,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(66), 2,
      sym_base_type_spec,
      sym_func_spec,
    STATE(88), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    ACTIONS(458), 12,
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
  [7806] = 13,
    ACTIONS(259), 1,
      anon_sym_Date,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(436), 1,
      anon_sym_func,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_typespec,
    ACTIONS(446), 1,
      anon_sym_tuple,
    ACTIONS(448), 1,
      anon_sym_list,
    ACTIONS(450), 1,
      anon_sym_dict,
    ACTIONS(481), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(66), 2,
      sym_base_type_spec,
      sym_func_spec,
    STATE(88), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    ACTIONS(440), 12,
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
  [7860] = 12,
    ACTIONS(259), 1,
      anon_sym_Date,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(436), 1,
      anon_sym_func,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_typespec,
    ACTIONS(446), 1,
      anon_sym_tuple,
    ACTIONS(448), 1,
      anon_sym_list,
    ACTIONS(450), 1,
      anon_sym_dict,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(66), 2,
      sym_base_type_spec,
      sym_func_spec,
    STATE(87), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    ACTIONS(440), 12,
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
  [7911] = 12,
    ACTIONS(259), 1,
      anon_sym_Date,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(436), 1,
      anon_sym_func,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_typespec,
    ACTIONS(446), 1,
      anon_sym_tuple,
    ACTIONS(448), 1,
      anon_sym_list,
    ACTIONS(450), 1,
      anon_sym_dict,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(66), 2,
      sym_base_type_spec,
      sym_func_spec,
    STATE(89), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    ACTIONS(440), 12,
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
  [7962] = 12,
    ACTIONS(259), 1,
      anon_sym_Date,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(436), 1,
      anon_sym_func,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_typespec,
    ACTIONS(446), 1,
      anon_sym_tuple,
    ACTIONS(448), 1,
      anon_sym_list,
    ACTIONS(450), 1,
      anon_sym_dict,
    STATE(67), 1,
      sym_type_spec_r,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(66), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(440), 12,
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
  [8012] = 12,
    ACTIONS(259), 1,
      anon_sym_Date,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(436), 1,
      anon_sym_func,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_typespec,
    ACTIONS(446), 1,
      anon_sym_tuple,
    ACTIONS(448), 1,
      anon_sym_list,
    ACTIONS(450), 1,
      anon_sym_dict,
    STATE(70), 1,
      sym_type_spec_r,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(66), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(440), 12,
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
  [8062] = 12,
    ACTIONS(259), 1,
      anon_sym_Date,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(436), 1,
      anon_sym_func,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_typespec,
    ACTIONS(446), 1,
      anon_sym_tuple,
    ACTIONS(448), 1,
      anon_sym_list,
    ACTIONS(450), 1,
      anon_sym_dict,
    STATE(373), 1,
      sym_type_spec_r,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(66), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(440), 12,
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
  [8112] = 12,
    ACTIONS(259), 1,
      anon_sym_Date,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(436), 1,
      anon_sym_func,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_typespec,
    ACTIONS(446), 1,
      anon_sym_tuple,
    ACTIONS(448), 1,
      anon_sym_list,
    ACTIONS(450), 1,
      anon_sym_dict,
    STATE(359), 1,
      sym_type_spec_r,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(66), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(440), 12,
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
  [8162] = 12,
    ACTIONS(259), 1,
      anon_sym_Date,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(436), 1,
      anon_sym_func,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_typespec,
    ACTIONS(446), 1,
      anon_sym_tuple,
    ACTIONS(448), 1,
      anon_sym_list,
    ACTIONS(450), 1,
      anon_sym_dict,
    STATE(357), 1,
      sym_type_spec_r,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(66), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(440), 12,
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
  [8212] = 12,
    ACTIONS(259), 1,
      anon_sym_Date,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(436), 1,
      anon_sym_func,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_typespec,
    ACTIONS(446), 1,
      anon_sym_tuple,
    ACTIONS(448), 1,
      anon_sym_list,
    ACTIONS(450), 1,
      anon_sym_dict,
    STATE(271), 1,
      sym_type_spec_r,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(66), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(440), 12,
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
  [8262] = 12,
    ACTIONS(259), 1,
      anon_sym_Date,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(436), 1,
      anon_sym_func,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_typespec,
    ACTIONS(446), 1,
      anon_sym_tuple,
    ACTIONS(448), 1,
      anon_sym_list,
    ACTIONS(450), 1,
      anon_sym_dict,
    STATE(349), 1,
      sym_type_spec_r,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(66), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(440), 12,
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
  [8312] = 12,
    ACTIONS(259), 1,
      anon_sym_Date,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(436), 1,
      anon_sym_func,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_typespec,
    ACTIONS(446), 1,
      anon_sym_tuple,
    ACTIONS(448), 1,
      anon_sym_list,
    ACTIONS(450), 1,
      anon_sym_dict,
    STATE(360), 1,
      sym_type_spec_r,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(66), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(440), 12,
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
  [8362] = 12,
    ACTIONS(23), 1,
      anon_sym_Date,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(483), 1,
      anon_sym_func,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_typespec,
    ACTIONS(491), 1,
      anon_sym_tuple,
    ACTIONS(493), 1,
      anon_sym_list,
    ACTIONS(495), 1,
      anon_sym_dict,
    STATE(177), 1,
      sym_type_spec_r,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(168), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(487), 12,
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
  [8412] = 12,
    ACTIONS(23), 1,
      anon_sym_Date,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(483), 1,
      anon_sym_func,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_typespec,
    ACTIONS(491), 1,
      anon_sym_tuple,
    ACTIONS(493), 1,
      anon_sym_list,
    ACTIONS(495), 1,
      anon_sym_dict,
    STATE(174), 1,
      sym_type_spec_r,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(168), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(487), 12,
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
  [8462] = 12,
    ACTIONS(259), 1,
      anon_sym_Date,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(436), 1,
      anon_sym_func,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_typespec,
    ACTIONS(446), 1,
      anon_sym_tuple,
    ACTIONS(448), 1,
      anon_sym_list,
    ACTIONS(450), 1,
      anon_sym_dict,
    STATE(245), 1,
      sym_type_spec_r,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(66), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(440), 12,
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
  [8512] = 12,
    ACTIONS(23), 1,
      anon_sym_Date,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(483), 1,
      anon_sym_func,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_typespec,
    ACTIONS(491), 1,
      anon_sym_tuple,
    ACTIONS(493), 1,
      anon_sym_list,
    ACTIONS(495), 1,
      anon_sym_dict,
    STATE(163), 1,
      sym_type_spec_r,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(168), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(487), 12,
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
  [8562] = 12,
    ACTIONS(259), 1,
      anon_sym_Date,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(436), 1,
      anon_sym_func,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_typespec,
    ACTIONS(446), 1,
      anon_sym_tuple,
    ACTIONS(448), 1,
      anon_sym_list,
    ACTIONS(450), 1,
      anon_sym_dict,
    STATE(348), 1,
      sym_type_spec_r,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(66), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(440), 12,
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
  [8612] = 12,
    ACTIONS(23), 1,
      anon_sym_Date,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(483), 1,
      anon_sym_func,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_typespec,
    ACTIONS(491), 1,
      anon_sym_tuple,
    ACTIONS(493), 1,
      anon_sym_list,
    ACTIONS(495), 1,
      anon_sym_dict,
    STATE(175), 1,
      sym_type_spec_r,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(168), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(487), 12,
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
  [8662] = 12,
    ACTIONS(259), 1,
      anon_sym_Date,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(436), 1,
      anon_sym_func,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_typespec,
    ACTIONS(446), 1,
      anon_sym_tuple,
    ACTIONS(448), 1,
      anon_sym_list,
    ACTIONS(450), 1,
      anon_sym_dict,
    STATE(378), 1,
      sym_type_spec_r,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(66), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(440), 12,
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
  [8712] = 12,
    ACTIONS(259), 1,
      anon_sym_Date,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(436), 1,
      anon_sym_func,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_typespec,
    ACTIONS(446), 1,
      anon_sym_tuple,
    ACTIONS(448), 1,
      anon_sym_list,
    ACTIONS(450), 1,
      anon_sym_dict,
    STATE(370), 1,
      sym_type_spec_r,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(66), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(440), 12,
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
  [8762] = 12,
    ACTIONS(259), 1,
      anon_sym_Date,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(436), 1,
      anon_sym_func,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_typespec,
    ACTIONS(446), 1,
      anon_sym_tuple,
    ACTIONS(448), 1,
      anon_sym_list,
    ACTIONS(450), 1,
      anon_sym_dict,
    STATE(368), 1,
      sym_type_spec_r,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(66), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(440), 12,
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
  [8812] = 12,
    ACTIONS(259), 1,
      anon_sym_Date,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(436), 1,
      anon_sym_func,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_typespec,
    ACTIONS(446), 1,
      anon_sym_tuple,
    ACTIONS(448), 1,
      anon_sym_list,
    ACTIONS(450), 1,
      anon_sym_dict,
    STATE(354), 1,
      sym_type_spec_r,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(66), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(440), 12,
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
  [8862] = 12,
    ACTIONS(259), 1,
      anon_sym_Date,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(436), 1,
      anon_sym_func,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_typespec,
    ACTIONS(446), 1,
      anon_sym_tuple,
    ACTIONS(448), 1,
      anon_sym_list,
    ACTIONS(450), 1,
      anon_sym_dict,
    STATE(377), 1,
      sym_type_spec_r,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(66), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(440), 12,
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
  [8912] = 12,
    ACTIONS(259), 1,
      anon_sym_Date,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(436), 1,
      anon_sym_func,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_typespec,
    ACTIONS(446), 1,
      anon_sym_tuple,
    ACTIONS(448), 1,
      anon_sym_list,
    ACTIONS(450), 1,
      anon_sym_dict,
    STATE(374), 1,
      sym_type_spec_r,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(66), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(440), 12,
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
  [8962] = 12,
    ACTIONS(259), 1,
      anon_sym_Date,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(436), 1,
      anon_sym_func,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_typespec,
    ACTIONS(446), 1,
      anon_sym_tuple,
    ACTIONS(448), 1,
      anon_sym_list,
    ACTIONS(450), 1,
      anon_sym_dict,
    STATE(276), 1,
      sym_type_spec_r,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(66), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(440), 12,
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
  [9012] = 12,
    ACTIONS(259), 1,
      anon_sym_Date,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(436), 1,
      anon_sym_func,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_typespec,
    ACTIONS(446), 1,
      anon_sym_tuple,
    ACTIONS(448), 1,
      anon_sym_list,
    ACTIONS(450), 1,
      anon_sym_dict,
    STATE(68), 1,
      sym_type_spec_r,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(66), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(440), 12,
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
  [9062] = 12,
    ACTIONS(259), 1,
      anon_sym_Date,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(436), 1,
      anon_sym_func,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_typespec,
    ACTIONS(446), 1,
      anon_sym_tuple,
    ACTIONS(448), 1,
      anon_sym_list,
    ACTIONS(450), 1,
      anon_sym_dict,
    STATE(69), 1,
      sym_type_spec_r,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(66), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(440), 12,
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
  [9112] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(499), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(497), 19,
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
  [9143] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(503), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(501), 19,
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
  [9174] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(507), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(505), 19,
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
  [9205] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(511), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(509), 19,
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
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(515), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(513), 19,
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
  [9267] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(519), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(517), 19,
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
  [9298] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(523), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(521), 19,
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
  [9329] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(527), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(525), 19,
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
  [9360] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(531), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(529), 19,
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
  [9391] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(535), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(533), 19,
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
  [9422] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(539), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(537), 19,
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
  [9453] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(543), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(541), 19,
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
  [9484] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(547), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(545), 19,
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
  [9515] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(551), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(549), 19,
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
  [9546] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(555), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(553), 19,
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
  [9577] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(559), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(557), 19,
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
  [9608] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(563), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(561), 19,
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
  [9639] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(567), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(565), 19,
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
  [9670] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(571), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(569), 19,
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
  [9701] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(575), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(573), 19,
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
  [9732] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(579), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(577), 19,
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
  [9763] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(583), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(581), 19,
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
  [9794] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(587), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(585), 19,
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
  [9825] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(591), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(589), 19,
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
  [9856] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(595), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(593), 19,
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
  [9887] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(599), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(597), 19,
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
  [9918] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(603), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(601), 19,
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
  [9949] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(607), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(605), 19,
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
  [9980] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(611), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(609), 19,
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
  [10011] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(615), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(613), 19,
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
  [10042] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(619), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(617), 19,
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
  [10073] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(623), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(621), 19,
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
  [10104] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(627), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(625), 19,
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
  [10135] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(631), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(629), 19,
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
  [10166] = 11,
    ACTIONS(23), 1,
      anon_sym_Date,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(489), 1,
      anon_sym_typespec,
    ACTIONS(491), 1,
      anon_sym_tuple,
    ACTIONS(493), 1,
      anon_sym_list,
    ACTIONS(495), 1,
      anon_sym_dict,
    ACTIONS(633), 1,
      anon_sym_func,
    STATE(176), 1,
      sym_base_type_spec,
    STATE(236), 1,
      sym_type_spec,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(487), 12,
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
  [10212] = 11,
    ACTIONS(23), 1,
      anon_sym_Date,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(489), 1,
      anon_sym_typespec,
    ACTIONS(491), 1,
      anon_sym_tuple,
    ACTIONS(493), 1,
      anon_sym_list,
    ACTIONS(495), 1,
      anon_sym_dict,
    ACTIONS(633), 1,
      anon_sym_func,
    STATE(176), 1,
      sym_base_type_spec,
    STATE(234), 1,
      sym_type_spec,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(487), 12,
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
  [10258] = 7,
    ACTIONS(635), 1,
      anon_sym_LPAREN,
    ACTIONS(638), 1,
      anon_sym_LBRACK,
    ACTIONS(641), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(385), 2,
      ts_builtin_sym_end,
      sym_NL,
    STATE(151), 4,
      sym_member_expr,
      sym_index_expr,
      sym_call_actuals,
      aux_sym_access_expr_repeat1,
    ACTIONS(387), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_COLON_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10292] = 7,
    ACTIONS(410), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_LBRACK,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(371), 2,
      ts_builtin_sym_end,
      sym_NL,
    STATE(153), 4,
      sym_member_expr,
      sym_index_expr,
      sym_call_actuals,
      aux_sym_access_expr_repeat1,
    ACTIONS(373), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_COLON_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10326] = 7,
    ACTIONS(410), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_LBRACK,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(381), 2,
      ts_builtin_sym_end,
      sym_NL,
    STATE(151), 4,
      sym_member_expr,
      sym_index_expr,
      sym_call_actuals,
      aux_sym_access_expr_repeat1,
    ACTIONS(383), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_COLON_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10360] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(420), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(422), 11,
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
  [10382] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(402), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(404), 11,
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
  [10404] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(398), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(400), 11,
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
  [10426] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(424), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(426), 11,
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
  [10448] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(428), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(430), 11,
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
  [10470] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(432), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(434), 11,
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
  [10492] = 7,
    ACTIONS(644), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      sym_eq_op,
    STATE(186), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(509), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(646), 3,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_COLON_EQ,
    ACTIONS(511), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10521] = 4,
    ACTIONS(648), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(321), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(323), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10540] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(327), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(329), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10556] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(339), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(341), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10572] = 5,
    ACTIONS(654), 1,
      anon_sym_elif,
    STATE(164), 1,
      aux_sym_if_stmt_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(650), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(652), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_else,
  [10592] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(321), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(323), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10608] = 6,
    ACTIONS(661), 1,
      anon_sym_elif,
    ACTIONS(663), 1,
      anon_sym_else,
    STATE(170), 1,
      aux_sym_if_stmt_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(657), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(659), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [10630] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(351), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(353), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10646] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(331), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(333), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10662] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(359), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(361), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10678] = 6,
    ACTIONS(661), 1,
      anon_sym_elif,
    ACTIONS(669), 1,
      anon_sym_else,
    STATE(164), 1,
      aux_sym_if_stmt_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(665), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(667), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [10700] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(363), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(365), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10716] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(355), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(357), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10732] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(557), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(559), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10748] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(343), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(345), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10764] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(335), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(337), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10780] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(521), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(523), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10796] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(347), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(349), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10812] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(613), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(615), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10827] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(581), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(583), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10842] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(565), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(567), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10857] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(533), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(535), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10872] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(671), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(673), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
  [10887] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(529), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(531), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10902] = 5,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    STATE(218), 1,
      aux_sym_var_stmt_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(675), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(677), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [10921] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(513), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(515), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10936] = 6,
    ACTIONS(646), 1,
      anon_sym_COLON,
    ACTIONS(681), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      sym_eq_op,
    STATE(239), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(683), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [10957] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(525), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(527), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10972] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(549), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(551), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [10987] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(685), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(687), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
  [11002] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(497), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(499), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11017] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(577), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(579), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11032] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(545), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(547), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11047] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(689), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(691), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(693), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11064] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(517), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(519), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11079] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(589), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(591), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11094] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(501), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(503), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11109] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(695), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(697), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
  [11124] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(629), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(631), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11139] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(601), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(603), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11154] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(585), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(587), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11169] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(625), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(627), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11184] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(509), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(511), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11199] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(505), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(507), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11214] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(537), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(539), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11229] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(573), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(575), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11244] = 5,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_var_stmt_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(699), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(701), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11263] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(617), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(619), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11278] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(605), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(607), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11293] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(541), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(543), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11308] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(593), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(595), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11323] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(553), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(555), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11338] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(693), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(703), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(705), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11355] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(609), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(611), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11370] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(561), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(563), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11385] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(621), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(623), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11400] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(707), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(709), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
  [11415] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(569), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(571), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11430] = 5,
    ACTIONS(715), 1,
      anon_sym_COMMA,
    STATE(218), 1,
      aux_sym_var_stmt_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(711), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(713), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11449] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(597), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(599), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11464] = 4,
    ACTIONS(720), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(693), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(718), 2,
      ts_builtin_sym_end,
      sym_NL,
  [11480] = 5,
    ACTIONS(722), 1,
      anon_sym_COMMA,
    ACTIONS(724), 1,
      anon_sym_RBRACK,
    STATE(320), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11498] = 5,
    ACTIONS(722), 1,
      anon_sym_COMMA,
    ACTIONS(728), 1,
      anon_sym_RPAREN,
    STATE(319), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11516] = 5,
    ACTIONS(722), 1,
      anon_sym_COMMA,
    ACTIONS(730), 1,
      anon_sym_RPAREN,
    STATE(326), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11534] = 5,
    ACTIONS(732), 1,
      anon_sym_LPAREN,
    STATE(77), 1,
      sym_paren_expr,
    STATE(244), 1,
      sym_access_expr,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(277), 2,
      anon_sym_DOLLAR,
      sym_identifier,
  [11552] = 4,
    ACTIONS(736), 1,
      sym_NL,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(693), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(734), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11568] = 5,
    ACTIONS(722), 1,
      anon_sym_COMMA,
    ACTIONS(738), 1,
      anon_sym_RPAREN,
    STATE(327), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11586] = 5,
    ACTIONS(740), 1,
      anon_sym_RBRACE,
    ACTIONS(742), 1,
      anon_sym_COMMA,
    STATE(329), 1,
      aux_sym_dict_literal_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11604] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(711), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(713), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [11618] = 5,
    ACTIONS(732), 1,
      anon_sym_LPAREN,
    STATE(77), 1,
      sym_paren_expr,
    STATE(116), 1,
      sym_access_expr,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(277), 2,
      anon_sym_DOLLAR,
      sym_identifier,
  [11636] = 5,
    ACTIONS(746), 1,
      sym_escape_sequence,
    ACTIONS(749), 1,
      aux_sym__quoted_string_content_token1,
    STATE(230), 1,
      aux_sym__quoted_string_content,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(744), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [11654] = 5,
    ACTIONS(752), 1,
      anon_sym_LPAREN,
    STATE(152), 1,
      sym_paren_expr,
    STATE(196), 1,
      sym_access_expr,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(41), 2,
      anon_sym_DOLLAR,
      sym_identifier,
  [11672] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(754), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [11686] = 4,
    ACTIONS(758), 1,
      sym_NL,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(693), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(756), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11702] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(760), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(762), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [11716] = 5,
    ACTIONS(722), 1,
      anon_sym_COMMA,
    ACTIONS(764), 1,
      anon_sym_RPAREN,
    STATE(333), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11734] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(766), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(768), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [11748] = 5,
    ACTIONS(742), 1,
      anon_sym_COMMA,
    ACTIONS(770), 1,
      anon_sym_RBRACE,
    STATE(310), 1,
      aux_sym_dict_literal_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11766] = 5,
    ACTIONS(722), 1,
      anon_sym_COMMA,
    ACTIONS(772), 1,
      anon_sym_RBRACK,
    STATE(280), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11784] = 5,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(779), 1,
      anon_sym_COLON,
    STATE(239), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(777), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [11802] = 4,
    ACTIONS(781), 1,
      anon_sym_LBRACE,
    STATE(189), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11817] = 4,
    ACTIONS(781), 1,
      anon_sym_LBRACE,
    STATE(265), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11832] = 5,
    ACTIONS(783), 1,
      anon_sym_COMMA,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
    ACTIONS(787), 1,
      anon_sym_STAR,
    STATE(255), 1,
      aux_sym_func_spec_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11849] = 5,
    ACTIONS(789), 1,
      anon_sym_DQUOTE,
    ACTIONS(791), 1,
      sym_escape_sequence,
    ACTIONS(793), 1,
      aux_sym__quoted_string_content_token1,
    STATE(252), 1,
      aux_sym__quoted_string_content,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [11866] = 3,
    ACTIONS(779), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(777), 3,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [11879] = 5,
    ACTIONS(783), 1,
      anon_sym_COMMA,
    ACTIONS(795), 1,
      anon_sym_RPAREN,
    ACTIONS(797), 1,
      anon_sym_STAR,
    STATE(242), 1,
      aux_sym_func_spec_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11896] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(799), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
  [11909] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(801), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(803), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11922] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(805), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
  [11935] = 5,
    ACTIONS(807), 1,
      anon_sym_SEMI,
    ACTIONS(809), 1,
      anon_sym_RBRACE,
    ACTIONS(811), 1,
      sym_NL,
    STATE(62), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [11952] = 5,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(813), 1,
      sym_escape_sequence,
    ACTIONS(815), 1,
      aux_sym__quoted_string_content_token1,
    STATE(253), 1,
      aux_sym__quoted_string_content,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [11969] = 4,
    ACTIONS(817), 1,
      anon_sym_COMMA,
    STATE(251), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(754), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [11984] = 5,
    ACTIONS(820), 1,
      anon_sym_DQUOTE,
    ACTIONS(822), 1,
      sym_escape_sequence,
    ACTIONS(824), 1,
      aux_sym__quoted_string_content_token1,
    STATE(230), 1,
      aux_sym__quoted_string_content,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12001] = 5,
    ACTIONS(820), 1,
      anon_sym_SQUOTE,
    ACTIONS(822), 1,
      sym_escape_sequence,
    ACTIONS(824), 1,
      aux_sym__quoted_string_content_token1,
    STATE(230), 1,
      aux_sym__quoted_string_content,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12018] = 4,
    ACTIONS(781), 1,
      anon_sym_LBRACE,
    STATE(166), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12033] = 4,
    ACTIONS(826), 1,
      anon_sym_COMMA,
    STATE(255), 1,
      aux_sym_func_spec_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(829), 2,
      anon_sym_RPAREN,
      anon_sym_STAR,
  [12048] = 3,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(831), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [12061] = 5,
    ACTIONS(807), 1,
      anon_sym_SEMI,
    ACTIONS(811), 1,
      sym_NL,
    ACTIONS(833), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12078] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(835), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(837), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12091] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(839), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(841), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12104] = 5,
    ACTIONS(822), 1,
      sym_escape_sequence,
    ACTIONS(824), 1,
      aux_sym__quoted_string_content_token1,
    ACTIONS(843), 1,
      anon_sym_DQUOTE,
    STATE(230), 1,
      aux_sym__quoted_string_content,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12121] = 5,
    ACTIONS(822), 1,
      sym_escape_sequence,
    ACTIONS(824), 1,
      aux_sym__quoted_string_content_token1,
    ACTIONS(843), 1,
      anon_sym_SQUOTE,
    STATE(230), 1,
      aux_sym__quoted_string_content,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12138] = 4,
    ACTIONS(781), 1,
      anon_sym_LBRACE,
    STATE(258), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12153] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(845), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(847), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12166] = 4,
    ACTIONS(781), 1,
      anon_sym_LBRACE,
    STATE(259), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12181] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(849), 2,
      ts_builtin_sym_end,
      sym_NL,
    ACTIONS(851), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12194] = 5,
    ACTIONS(783), 1,
      anon_sym_COMMA,
    ACTIONS(853), 1,
      anon_sym_RPAREN,
    ACTIONS(855), 1,
      anon_sym_STAR,
    STATE(255), 1,
      aux_sym_func_spec_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12211] = 5,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(857), 1,
      anon_sym_SEMI,
    ACTIONS(859), 1,
      sym_NL,
    STATE(63), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12228] = 5,
    ACTIONS(861), 1,
      anon_sym_SQUOTE,
    ACTIONS(863), 1,
      sym_escape_sequence,
    ACTIONS(865), 1,
      aux_sym__quoted_string_content_token1,
    STATE(261), 1,
      aux_sym__quoted_string_content,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12245] = 5,
    ACTIONS(857), 1,
      anon_sym_SEMI,
    ACTIONS(859), 1,
      sym_NL,
    ACTIONS(867), 1,
      ts_builtin_sym_end,
    STATE(63), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12262] = 5,
    ACTIONS(861), 1,
      anon_sym_DQUOTE,
    ACTIONS(869), 1,
      sym_escape_sequence,
    ACTIONS(871), 1,
      aux_sym__quoted_string_content_token1,
    STATE(260), 1,
      aux_sym__quoted_string_content,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12279] = 5,
    ACTIONS(783), 1,
      anon_sym_COMMA,
    ACTIONS(873), 1,
      anon_sym_RPAREN,
    ACTIONS(875), 1,
      anon_sym_STAR,
    STATE(266), 1,
      aux_sym_func_spec_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12296] = 3,
    ACTIONS(730), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12308] = 4,
    ACTIONS(877), 1,
      aux_sym_LONGCOMMENT_token1,
    ACTIONS(879), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(316), 1,
      aux_sym_LONGCOMMENT_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12322] = 3,
    ACTIONS(881), 1,
      anon_sym_BANG_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12334] = 4,
    ACTIONS(883), 1,
      aux_sym_LONGCOMMENT_token1,
    ACTIONS(885), 1,
      anon_sym_GT_GT,
    STATE(288), 1,
      aux_sym_LONGCOMMENT_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12348] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(829), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
  [12358] = 4,
    ACTIONS(887), 1,
      anon_sym_COMMA,
    ACTIONS(889), 1,
      anon_sym_COLON,
    STATE(331), 1,
      aux_sym_enum_stmt_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12372] = 3,
    ACTIONS(891), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12384] = 4,
    ACTIONS(893), 1,
      anon_sym_RBRACE,
    ACTIONS(895), 1,
      anon_sym_COMMA,
    STATE(279), 1,
      aux_sym_dict_literal_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12398] = 4,
    ACTIONS(722), 1,
      anon_sym_COMMA,
    ACTIONS(898), 1,
      anon_sym_RBRACK,
    STATE(251), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12412] = 3,
    ACTIONS(900), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12424] = 4,
    ACTIONS(902), 1,
      aux_sym_LONGCOMMENT_token1,
    ACTIONS(904), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(299), 1,
      aux_sym_LONGCOMMENT_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12438] = 4,
    ACTIONS(904), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(906), 1,
      aux_sym_LONGCOMMENT_token1,
    STATE(285), 1,
      aux_sym_LONGCOMMENT_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12452] = 3,
    ACTIONS(908), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12464] = 4,
    ACTIONS(910), 1,
      aux_sym_LONGCOMMENT_token1,
    ACTIONS(913), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(285), 1,
      aux_sym_LONGCOMMENT_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12478] = 3,
    ACTIONS(915), 1,
      anon_sym_STAR,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12490] = 3,
    ACTIONS(917), 1,
      anon_sym_PERCENT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12502] = 4,
    ACTIONS(919), 1,
      aux_sym_LONGCOMMENT_token1,
    ACTIONS(921), 1,
      anon_sym_GT_GT,
    STATE(291), 1,
      aux_sym_LONGCOMMENT_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12516] = 3,
    ACTIONS(923), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12528] = 3,
    ACTIONS(925), 1,
      anon_sym_DASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12540] = 4,
    ACTIONS(913), 1,
      anon_sym_GT_GT,
    ACTIONS(927), 1,
      aux_sym_LONGCOMMENT_token1,
    STATE(291), 1,
      aux_sym_LONGCOMMENT_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12554] = 3,
    ACTIONS(930), 1,
      anon_sym_PLUS,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12566] = 3,
    ACTIONS(736), 1,
      sym_NL,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(734), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12578] = 4,
    ACTIONS(857), 1,
      anon_sym_SEMI,
    ACTIONS(859), 1,
      sym_NL,
    STATE(63), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12592] = 3,
    ACTIONS(932), 1,
      anon_sym_LT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12604] = 3,
    ACTIONS(934), 1,
      anon_sym_to,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12616] = 3,
    ACTIONS(936), 1,
      anon_sym_GT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12628] = 3,
    ACTIONS(938), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12640] = 4,
    ACTIONS(913), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(940), 1,
      aux_sym_LONGCOMMENT_token1,
    STATE(299), 1,
      aux_sym_LONGCOMMENT_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12654] = 4,
    ACTIONS(943), 1,
      aux_sym_LONGCOMMENT_token1,
    ACTIONS(945), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(283), 1,
      aux_sym_LONGCOMMENT_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12668] = 3,
    ACTIONS(947), 1,
      anon_sym_LT_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12680] = 4,
    ACTIONS(887), 1,
      anon_sym_COMMA,
    ACTIONS(949), 1,
      anon_sym_COLON,
    STATE(277), 1,
      aux_sym_enum_stmt_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12694] = 4,
    ACTIONS(951), 1,
      aux_sym_LONGCOMMENT_token1,
    ACTIONS(953), 1,
      anon_sym_GT_GT,
    STATE(312), 1,
      aux_sym_LONGCOMMENT_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12708] = 3,
    ACTIONS(955), 1,
      anon_sym_GT_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12720] = 3,
    ACTIONS(957), 1,
      anon_sym_STAR,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12732] = 4,
    ACTIONS(879), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(959), 1,
      aux_sym_LONGCOMMENT_token1,
    STATE(315), 1,
      aux_sym_LONGCOMMENT_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12746] = 4,
    ACTIONS(807), 1,
      anon_sym_SEMI,
    ACTIONS(811), 1,
      sym_NL,
    STATE(62), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12760] = 3,
    ACTIONS(961), 1,
      anon_sym_PERCENT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12772] = 3,
    ACTIONS(963), 1,
      anon_sym_DASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12784] = 4,
    ACTIONS(742), 1,
      anon_sym_COMMA,
    ACTIONS(965), 1,
      anon_sym_RBRACE,
    STATE(279), 1,
      aux_sym_dict_literal_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12798] = 3,
    ACTIONS(967), 1,
      anon_sym_EQ_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12810] = 4,
    ACTIONS(919), 1,
      aux_sym_LONGCOMMENT_token1,
    ACTIONS(969), 1,
      anon_sym_GT_GT,
    STATE(291), 1,
      aux_sym_LONGCOMMENT_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12824] = 3,
    ACTIONS(971), 1,
      anon_sym_PLUS,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12836] = 3,
    ACTIONS(973), 1,
      anon_sym_LT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12848] = 4,
    ACTIONS(906), 1,
      aux_sym_LONGCOMMENT_token1,
    ACTIONS(975), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(285), 1,
      aux_sym_LONGCOMMENT_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12862] = 4,
    ACTIONS(902), 1,
      aux_sym_LONGCOMMENT_token1,
    ACTIONS(975), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(299), 1,
      aux_sym_LONGCOMMENT_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12876] = 3,
    ACTIONS(977), 1,
      anon_sym_GT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12888] = 4,
    ACTIONS(945), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(979), 1,
      aux_sym_LONGCOMMENT_token1,
    STATE(282), 1,
      aux_sym_LONGCOMMENT_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [12902] = 4,
    ACTIONS(722), 1,
      anon_sym_COMMA,
    ACTIONS(981), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12916] = 4,
    ACTIONS(722), 1,
      anon_sym_COMMA,
    ACTIONS(983), 1,
      anon_sym_RBRACK,
    STATE(251), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12930] = 3,
    ACTIONS(985), 1,
      anon_sym_BANG_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12942] = 3,
    ACTIONS(987), 1,
      anon_sym_LT_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12954] = 3,
    ACTIONS(989), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12966] = 3,
    ACTIONS(720), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(718), 2,
      ts_builtin_sym_end,
      sym_NL,
  [12978] = 3,
    ACTIONS(728), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [12990] = 4,
    ACTIONS(722), 1,
      anon_sym_COMMA,
    ACTIONS(991), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13004] = 4,
    ACTIONS(722), 1,
      anon_sym_COMMA,
    ACTIONS(993), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13018] = 3,
    ACTIONS(995), 1,
      anon_sym_GT_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [13030] = 4,
    ACTIONS(742), 1,
      anon_sym_COMMA,
    ACTIONS(997), 1,
      anon_sym_RBRACE,
    STATE(279), 1,
      aux_sym_dict_literal_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13044] = 3,
    ACTIONS(999), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [13056] = 4,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1004), 1,
      anon_sym_COLON,
    STATE(331), 1,
      aux_sym_enum_stmt_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13070] = 3,
    ACTIONS(1006), 1,
      anon_sym_EQ_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(726), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [13082] = 4,
    ACTIONS(722), 1,
      anon_sym_COMMA,
    ACTIONS(1008), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      aux_sym_call_actuals_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13096] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(1004), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [13105] = 3,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    STATE(167), 1,
      sym_func_spec,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13116] = 3,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_func_spec,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13127] = 3,
    ACTIONS(781), 1,
      anon_sym_LBRACE,
    STATE(247), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13138] = 3,
    ACTIONS(1010), 1,
      sym_identifier,
    STATE(206), 1,
      sym_var_decl_item,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13149] = 3,
    ACTIONS(1010), 1,
      sym_identifier,
    STATE(228), 1,
      sym_var_decl_item,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13160] = 3,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      sym_func_spec,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13171] = 3,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    STATE(173), 1,
      sym_func_spec,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13182] = 2,
    ACTIONS(1012), 1,
      anon_sym_DASH_GT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13190] = 2,
    ACTIONS(1014), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13198] = 2,
    ACTIONS(1016), 1,
      anon_sym_DASH_GT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13206] = 2,
    ACTIONS(1018), 1,
      anon_sym_DASH_GT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13214] = 2,
    ACTIONS(1020), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13222] = 2,
    ACTIONS(1022), 1,
      anon_sym_DASH_GT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13230] = 2,
    ACTIONS(1024), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13238] = 2,
    ACTIONS(481), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13246] = 2,
    ACTIONS(1026), 1,
      anon_sym_DASH_GT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13254] = 2,
    ACTIONS(1028), 1,
      anon_sym_DASH_GT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13262] = 2,
    ACTIONS(1030), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13270] = 2,
    ACTIONS(1032), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13278] = 2,
    ACTIONS(444), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13286] = 2,
    ACTIONS(1034), 1,
      anon_sym_DASH_GT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13294] = 2,
    ACTIONS(1036), 1,
      anon_sym_LBRACK,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13302] = 2,
    ACTIONS(1038), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13310] = 2,
    ACTIONS(1040), 1,
      anon_sym_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13318] = 2,
    ACTIONS(1042), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13326] = 2,
    ACTIONS(1044), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13334] = 2,
    ACTIONS(1046), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13342] = 2,
    ACTIONS(1048), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13350] = 2,
    ACTIONS(1050), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13358] = 2,
    ACTIONS(1052), 1,
      anon_sym_DASH_GT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13366] = 2,
    ACTIONS(1054), 1,
      anon_sym_BQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13374] = 2,
    ACTIONS(1056), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13382] = 2,
    ACTIONS(1058), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13390] = 2,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13398] = 2,
    ACTIONS(1062), 1,
      anon_sym_LBRACK,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13406] = 2,
    ACTIONS(1064), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13414] = 2,
    ACTIONS(1066), 1,
      anon_sym_LBRACK,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13422] = 2,
    ACTIONS(1068), 1,
      anon_sym_BQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13430] = 2,
    ACTIONS(1070), 1,
      anon_sym_COMMA,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13438] = 2,
    ACTIONS(1072), 1,
      anon_sym_COMMA,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13446] = 2,
    ACTIONS(1074), 1,
      anon_sym_LBRACK,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13454] = 2,
    ACTIONS(1076), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13462] = 2,
    ACTIONS(1078), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13470] = 2,
    ACTIONS(1080), 1,
      anon_sym_COMMA,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13478] = 2,
    ACTIONS(1082), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13486] = 2,
    ACTIONS(1084), 1,
      anon_sym_LBRACK,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13494] = 2,
    ACTIONS(1086), 1,
      anon_sym_LBRACK,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 121,
  [SMALL_STATE(9)] = 242,
  [SMALL_STATE(10)] = 363,
  [SMALL_STATE(11)] = 484,
  [SMALL_STATE(12)] = 605,
  [SMALL_STATE(13)] = 726,
  [SMALL_STATE(14)] = 847,
  [SMALL_STATE(15)] = 968,
  [SMALL_STATE(16)] = 1089,
  [SMALL_STATE(17)] = 1210,
  [SMALL_STATE(18)] = 1331,
  [SMALL_STATE(19)] = 1452,
  [SMALL_STATE(20)] = 1573,
  [SMALL_STATE(21)] = 1694,
  [SMALL_STATE(22)] = 1815,
  [SMALL_STATE(23)] = 1936,
  [SMALL_STATE(24)] = 2057,
  [SMALL_STATE(25)] = 2178,
  [SMALL_STATE(26)] = 2299,
  [SMALL_STATE(27)] = 2420,
  [SMALL_STATE(28)] = 2541,
  [SMALL_STATE(29)] = 2662,
  [SMALL_STATE(30)] = 2783,
  [SMALL_STATE(31)] = 2904,
  [SMALL_STATE(32)] = 3025,
  [SMALL_STATE(33)] = 3146,
  [SMALL_STATE(34)] = 3267,
  [SMALL_STATE(35)] = 3388,
  [SMALL_STATE(36)] = 3509,
  [SMALL_STATE(37)] = 3627,
  [SMALL_STATE(38)] = 3745,
  [SMALL_STATE(39)] = 3863,
  [SMALL_STATE(40)] = 3981,
  [SMALL_STATE(41)] = 4099,
  [SMALL_STATE(42)] = 4217,
  [SMALL_STATE(43)] = 4335,
  [SMALL_STATE(44)] = 4453,
  [SMALL_STATE(45)] = 4571,
  [SMALL_STATE(46)] = 4689,
  [SMALL_STATE(47)] = 4807,
  [SMALL_STATE(48)] = 4925,
  [SMALL_STATE(49)] = 5043,
  [SMALL_STATE(50)] = 5161,
  [SMALL_STATE(51)] = 5279,
  [SMALL_STATE(52)] = 5397,
  [SMALL_STATE(53)] = 5515,
  [SMALL_STATE(54)] = 5633,
  [SMALL_STATE(55)] = 5751,
  [SMALL_STATE(56)] = 5869,
  [SMALL_STATE(57)] = 5987,
  [SMALL_STATE(58)] = 6105,
  [SMALL_STATE(59)] = 6223,
  [SMALL_STATE(60)] = 6287,
  [SMALL_STATE(61)] = 6390,
  [SMALL_STATE(62)] = 6493,
  [SMALL_STATE(63)] = 6554,
  [SMALL_STATE(64)] = 6614,
  [SMALL_STATE(65)] = 6668,
  [SMALL_STATE(66)] = 6719,
  [SMALL_STATE(67)] = 6770,
  [SMALL_STATE(68)] = 6821,
  [SMALL_STATE(69)] = 6872,
  [SMALL_STATE(70)] = 6923,
  [SMALL_STATE(71)] = 6974,
  [SMALL_STATE(72)] = 7025,
  [SMALL_STATE(73)] = 7076,
  [SMALL_STATE(74)] = 7127,
  [SMALL_STATE(75)] = 7178,
  [SMALL_STATE(76)] = 7229,
  [SMALL_STATE(77)] = 7276,
  [SMALL_STATE(78)] = 7324,
  [SMALL_STATE(79)] = 7372,
  [SMALL_STATE(80)] = 7420,
  [SMALL_STATE(81)] = 7456,
  [SMALL_STATE(82)] = 7492,
  [SMALL_STATE(83)] = 7554,
  [SMALL_STATE(84)] = 7590,
  [SMALL_STATE(85)] = 7626,
  [SMALL_STATE(86)] = 7662,
  [SMALL_STATE(87)] = 7698,
  [SMALL_STATE(88)] = 7752,
  [SMALL_STATE(89)] = 7806,
  [SMALL_STATE(90)] = 7860,
  [SMALL_STATE(91)] = 7911,
  [SMALL_STATE(92)] = 7962,
  [SMALL_STATE(93)] = 8012,
  [SMALL_STATE(94)] = 8062,
  [SMALL_STATE(95)] = 8112,
  [SMALL_STATE(96)] = 8162,
  [SMALL_STATE(97)] = 8212,
  [SMALL_STATE(98)] = 8262,
  [SMALL_STATE(99)] = 8312,
  [SMALL_STATE(100)] = 8362,
  [SMALL_STATE(101)] = 8412,
  [SMALL_STATE(102)] = 8462,
  [SMALL_STATE(103)] = 8512,
  [SMALL_STATE(104)] = 8562,
  [SMALL_STATE(105)] = 8612,
  [SMALL_STATE(106)] = 8662,
  [SMALL_STATE(107)] = 8712,
  [SMALL_STATE(108)] = 8762,
  [SMALL_STATE(109)] = 8812,
  [SMALL_STATE(110)] = 8862,
  [SMALL_STATE(111)] = 8912,
  [SMALL_STATE(112)] = 8962,
  [SMALL_STATE(113)] = 9012,
  [SMALL_STATE(114)] = 9062,
  [SMALL_STATE(115)] = 9112,
  [SMALL_STATE(116)] = 9143,
  [SMALL_STATE(117)] = 9174,
  [SMALL_STATE(118)] = 9205,
  [SMALL_STATE(119)] = 9236,
  [SMALL_STATE(120)] = 9267,
  [SMALL_STATE(121)] = 9298,
  [SMALL_STATE(122)] = 9329,
  [SMALL_STATE(123)] = 9360,
  [SMALL_STATE(124)] = 9391,
  [SMALL_STATE(125)] = 9422,
  [SMALL_STATE(126)] = 9453,
  [SMALL_STATE(127)] = 9484,
  [SMALL_STATE(128)] = 9515,
  [SMALL_STATE(129)] = 9546,
  [SMALL_STATE(130)] = 9577,
  [SMALL_STATE(131)] = 9608,
  [SMALL_STATE(132)] = 9639,
  [SMALL_STATE(133)] = 9670,
  [SMALL_STATE(134)] = 9701,
  [SMALL_STATE(135)] = 9732,
  [SMALL_STATE(136)] = 9763,
  [SMALL_STATE(137)] = 9794,
  [SMALL_STATE(138)] = 9825,
  [SMALL_STATE(139)] = 9856,
  [SMALL_STATE(140)] = 9887,
  [SMALL_STATE(141)] = 9918,
  [SMALL_STATE(142)] = 9949,
  [SMALL_STATE(143)] = 9980,
  [SMALL_STATE(144)] = 10011,
  [SMALL_STATE(145)] = 10042,
  [SMALL_STATE(146)] = 10073,
  [SMALL_STATE(147)] = 10104,
  [SMALL_STATE(148)] = 10135,
  [SMALL_STATE(149)] = 10166,
  [SMALL_STATE(150)] = 10212,
  [SMALL_STATE(151)] = 10258,
  [SMALL_STATE(152)] = 10292,
  [SMALL_STATE(153)] = 10326,
  [SMALL_STATE(154)] = 10360,
  [SMALL_STATE(155)] = 10382,
  [SMALL_STATE(156)] = 10404,
  [SMALL_STATE(157)] = 10426,
  [SMALL_STATE(158)] = 10448,
  [SMALL_STATE(159)] = 10470,
  [SMALL_STATE(160)] = 10492,
  [SMALL_STATE(161)] = 10521,
  [SMALL_STATE(162)] = 10540,
  [SMALL_STATE(163)] = 10556,
  [SMALL_STATE(164)] = 10572,
  [SMALL_STATE(165)] = 10592,
  [SMALL_STATE(166)] = 10608,
  [SMALL_STATE(167)] = 10630,
  [SMALL_STATE(168)] = 10646,
  [SMALL_STATE(169)] = 10662,
  [SMALL_STATE(170)] = 10678,
  [SMALL_STATE(171)] = 10700,
  [SMALL_STATE(172)] = 10716,
  [SMALL_STATE(173)] = 10732,
  [SMALL_STATE(174)] = 10748,
  [SMALL_STATE(175)] = 10764,
  [SMALL_STATE(176)] = 10780,
  [SMALL_STATE(177)] = 10796,
  [SMALL_STATE(178)] = 10812,
  [SMALL_STATE(179)] = 10827,
  [SMALL_STATE(180)] = 10842,
  [SMALL_STATE(181)] = 10857,
  [SMALL_STATE(182)] = 10872,
  [SMALL_STATE(183)] = 10887,
  [SMALL_STATE(184)] = 10902,
  [SMALL_STATE(185)] = 10921,
  [SMALL_STATE(186)] = 10936,
  [SMALL_STATE(187)] = 10957,
  [SMALL_STATE(188)] = 10972,
  [SMALL_STATE(189)] = 10987,
  [SMALL_STATE(190)] = 11002,
  [SMALL_STATE(191)] = 11017,
  [SMALL_STATE(192)] = 11032,
  [SMALL_STATE(193)] = 11047,
  [SMALL_STATE(194)] = 11064,
  [SMALL_STATE(195)] = 11079,
  [SMALL_STATE(196)] = 11094,
  [SMALL_STATE(197)] = 11109,
  [SMALL_STATE(198)] = 11124,
  [SMALL_STATE(199)] = 11139,
  [SMALL_STATE(200)] = 11154,
  [SMALL_STATE(201)] = 11169,
  [SMALL_STATE(202)] = 11184,
  [SMALL_STATE(203)] = 11199,
  [SMALL_STATE(204)] = 11214,
  [SMALL_STATE(205)] = 11229,
  [SMALL_STATE(206)] = 11244,
  [SMALL_STATE(207)] = 11263,
  [SMALL_STATE(208)] = 11278,
  [SMALL_STATE(209)] = 11293,
  [SMALL_STATE(210)] = 11308,
  [SMALL_STATE(211)] = 11323,
  [SMALL_STATE(212)] = 11338,
  [SMALL_STATE(213)] = 11355,
  [SMALL_STATE(214)] = 11370,
  [SMALL_STATE(215)] = 11385,
  [SMALL_STATE(216)] = 11400,
  [SMALL_STATE(217)] = 11415,
  [SMALL_STATE(218)] = 11430,
  [SMALL_STATE(219)] = 11449,
  [SMALL_STATE(220)] = 11464,
  [SMALL_STATE(221)] = 11480,
  [SMALL_STATE(222)] = 11498,
  [SMALL_STATE(223)] = 11516,
  [SMALL_STATE(224)] = 11534,
  [SMALL_STATE(225)] = 11552,
  [SMALL_STATE(226)] = 11568,
  [SMALL_STATE(227)] = 11586,
  [SMALL_STATE(228)] = 11604,
  [SMALL_STATE(229)] = 11618,
  [SMALL_STATE(230)] = 11636,
  [SMALL_STATE(231)] = 11654,
  [SMALL_STATE(232)] = 11672,
  [SMALL_STATE(233)] = 11686,
  [SMALL_STATE(234)] = 11702,
  [SMALL_STATE(235)] = 11716,
  [SMALL_STATE(236)] = 11734,
  [SMALL_STATE(237)] = 11748,
  [SMALL_STATE(238)] = 11766,
  [SMALL_STATE(239)] = 11784,
  [SMALL_STATE(240)] = 11802,
  [SMALL_STATE(241)] = 11817,
  [SMALL_STATE(242)] = 11832,
  [SMALL_STATE(243)] = 11849,
  [SMALL_STATE(244)] = 11866,
  [SMALL_STATE(245)] = 11879,
  [SMALL_STATE(246)] = 11896,
  [SMALL_STATE(247)] = 11909,
  [SMALL_STATE(248)] = 11922,
  [SMALL_STATE(249)] = 11935,
  [SMALL_STATE(250)] = 11952,
  [SMALL_STATE(251)] = 11969,
  [SMALL_STATE(252)] = 11984,
  [SMALL_STATE(253)] = 12001,
  [SMALL_STATE(254)] = 12018,
  [SMALL_STATE(255)] = 12033,
  [SMALL_STATE(256)] = 12048,
  [SMALL_STATE(257)] = 12061,
  [SMALL_STATE(258)] = 12078,
  [SMALL_STATE(259)] = 12091,
  [SMALL_STATE(260)] = 12104,
  [SMALL_STATE(261)] = 12121,
  [SMALL_STATE(262)] = 12138,
  [SMALL_STATE(263)] = 12153,
  [SMALL_STATE(264)] = 12166,
  [SMALL_STATE(265)] = 12181,
  [SMALL_STATE(266)] = 12194,
  [SMALL_STATE(267)] = 12211,
  [SMALL_STATE(268)] = 12228,
  [SMALL_STATE(269)] = 12245,
  [SMALL_STATE(270)] = 12262,
  [SMALL_STATE(271)] = 12279,
  [SMALL_STATE(272)] = 12296,
  [SMALL_STATE(273)] = 12308,
  [SMALL_STATE(274)] = 12322,
  [SMALL_STATE(275)] = 12334,
  [SMALL_STATE(276)] = 12348,
  [SMALL_STATE(277)] = 12358,
  [SMALL_STATE(278)] = 12372,
  [SMALL_STATE(279)] = 12384,
  [SMALL_STATE(280)] = 12398,
  [SMALL_STATE(281)] = 12412,
  [SMALL_STATE(282)] = 12424,
  [SMALL_STATE(283)] = 12438,
  [SMALL_STATE(284)] = 12452,
  [SMALL_STATE(285)] = 12464,
  [SMALL_STATE(286)] = 12478,
  [SMALL_STATE(287)] = 12490,
  [SMALL_STATE(288)] = 12502,
  [SMALL_STATE(289)] = 12516,
  [SMALL_STATE(290)] = 12528,
  [SMALL_STATE(291)] = 12540,
  [SMALL_STATE(292)] = 12554,
  [SMALL_STATE(293)] = 12566,
  [SMALL_STATE(294)] = 12578,
  [SMALL_STATE(295)] = 12592,
  [SMALL_STATE(296)] = 12604,
  [SMALL_STATE(297)] = 12616,
  [SMALL_STATE(298)] = 12628,
  [SMALL_STATE(299)] = 12640,
  [SMALL_STATE(300)] = 12654,
  [SMALL_STATE(301)] = 12668,
  [SMALL_STATE(302)] = 12680,
  [SMALL_STATE(303)] = 12694,
  [SMALL_STATE(304)] = 12708,
  [SMALL_STATE(305)] = 12720,
  [SMALL_STATE(306)] = 12732,
  [SMALL_STATE(307)] = 12746,
  [SMALL_STATE(308)] = 12760,
  [SMALL_STATE(309)] = 12772,
  [SMALL_STATE(310)] = 12784,
  [SMALL_STATE(311)] = 12798,
  [SMALL_STATE(312)] = 12810,
  [SMALL_STATE(313)] = 12824,
  [SMALL_STATE(314)] = 12836,
  [SMALL_STATE(315)] = 12848,
  [SMALL_STATE(316)] = 12862,
  [SMALL_STATE(317)] = 12876,
  [SMALL_STATE(318)] = 12888,
  [SMALL_STATE(319)] = 12902,
  [SMALL_STATE(320)] = 12916,
  [SMALL_STATE(321)] = 12930,
  [SMALL_STATE(322)] = 12942,
  [SMALL_STATE(323)] = 12954,
  [SMALL_STATE(324)] = 12966,
  [SMALL_STATE(325)] = 12978,
  [SMALL_STATE(326)] = 12990,
  [SMALL_STATE(327)] = 13004,
  [SMALL_STATE(328)] = 13018,
  [SMALL_STATE(329)] = 13030,
  [SMALL_STATE(330)] = 13044,
  [SMALL_STATE(331)] = 13056,
  [SMALL_STATE(332)] = 13070,
  [SMALL_STATE(333)] = 13082,
  [SMALL_STATE(334)] = 13096,
  [SMALL_STATE(335)] = 13105,
  [SMALL_STATE(336)] = 13116,
  [SMALL_STATE(337)] = 13127,
  [SMALL_STATE(338)] = 13138,
  [SMALL_STATE(339)] = 13149,
  [SMALL_STATE(340)] = 13160,
  [SMALL_STATE(341)] = 13171,
  [SMALL_STATE(342)] = 13182,
  [SMALL_STATE(343)] = 13190,
  [SMALL_STATE(344)] = 13198,
  [SMALL_STATE(345)] = 13206,
  [SMALL_STATE(346)] = 13214,
  [SMALL_STATE(347)] = 13222,
  [SMALL_STATE(348)] = 13230,
  [SMALL_STATE(349)] = 13238,
  [SMALL_STATE(350)] = 13246,
  [SMALL_STATE(351)] = 13254,
  [SMALL_STATE(352)] = 13262,
  [SMALL_STATE(353)] = 13270,
  [SMALL_STATE(354)] = 13278,
  [SMALL_STATE(355)] = 13286,
  [SMALL_STATE(356)] = 13294,
  [SMALL_STATE(357)] = 13302,
  [SMALL_STATE(358)] = 13310,
  [SMALL_STATE(359)] = 13318,
  [SMALL_STATE(360)] = 13326,
  [SMALL_STATE(361)] = 13334,
  [SMALL_STATE(362)] = 13342,
  [SMALL_STATE(363)] = 13350,
  [SMALL_STATE(364)] = 13358,
  [SMALL_STATE(365)] = 13366,
  [SMALL_STATE(366)] = 13374,
  [SMALL_STATE(367)] = 13382,
  [SMALL_STATE(368)] = 13390,
  [SMALL_STATE(369)] = 13398,
  [SMALL_STATE(370)] = 13406,
  [SMALL_STATE(371)] = 13414,
  [SMALL_STATE(372)] = 13422,
  [SMALL_STATE(373)] = 13430,
  [SMALL_STATE(374)] = 13438,
  [SMALL_STATE(375)] = 13446,
  [SMALL_STATE(376)] = 13454,
  [SMALL_STATE(377)] = 13462,
  [SMALL_STATE(378)] = 13470,
  [SMALL_STATE(379)] = 13478,
  [SMALL_STATE(380)] = 13486,
  [SMALL_STATE(381)] = 13494,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(82),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(47),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(39),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(366),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(293),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(7),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(341),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(42),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(338),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(165),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(376),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(161),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(13),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(375),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(371),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(356),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(61),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(58),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(152),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(181),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(183),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(183),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(275),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(270),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(268),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(300),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(318),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(82),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(47),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(39),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(366),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(341),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(42),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(338),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(165),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(376),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(161),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(13),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(375),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(371),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(356),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(61),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(58),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(152),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(181),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(183),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(183),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(275),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(270),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(268),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(300),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(318),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_stmt, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_stmt, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 1),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 6),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 6),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec_r, 1),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_spec_r, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_spec, 5),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_spec, 5),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_spec, 6),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_spec, 6),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_spec, 7),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_spec, 7),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_spec, 8),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_spec, 8),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec_r, 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_spec_r, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 5),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 5),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 4),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 4),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 2),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 2),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eq_op, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eq_op, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_expr, 1),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_expr, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_expr, 2),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_expr, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_expr_repeat1, 2),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_access_expr_repeat1, 2),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_expr_repeat1, 2), SHIFT_REPEAT(34),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_expr_repeat1, 2), SHIFT_REPEAT(48),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_expr_repeat1, 2), SHIFT_REPEAT(361),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_actuals, 3),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_actuals, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_expr, 3),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_expr, 3),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_actuals, 4),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_actuals, 4),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expr, 2),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expr, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_actuals, 2),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_actuals, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expr, 3),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expr, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(340),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(97),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(72),
  [461] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(72),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(363),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(64),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(380),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(369),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(381),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 2),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div_expr, 3),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div_expr, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STR, 1),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STR, 1),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 1),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expr, 3),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_expr, 3),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec, 1),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_spec, 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_literal, 6),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_literal, 6),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NUM, 1),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NUM, 1),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ne_expr, 3),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ne_expr, 3),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eq_expr, 3),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eq_expr, 3),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 4),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 4),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 3),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 3),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gte_expr, 3),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gte_expr, 3),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec, 2),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_spec, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lte_expr, 3),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lte_expr, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 4),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_literal, 4),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gt_expr, 3),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gt_expr, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_lit, 3),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_other_lit, 3),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lt_expr, 3),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lt_expr, 3),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plus_expr, 3),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plus_expr, 3),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minus_expr, 3),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_minus_expr, 3),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_expr, 2),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_expr, 2),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expr, 3),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_or_expr, 3),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_expr, 3),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod_expr, 3),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_literal, 5),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_literal, 5),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_lit, 2),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_other_lit, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mul_expr, 3),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mul_expr, 3),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [635] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_access_expr_repeat1, 2), SHIFT_REPEAT(17),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_access_expr_repeat1, 2), SHIFT_REPEAT(54),
  [641] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_access_expr_repeat1, 2), SHIFT_REPEAT(367),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_stmt_repeat1, 2),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_stmt_repeat1, 2),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_stmt_repeat1, 2), SHIFT_REPEAT(52),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 3),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_stmt, 3),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 4),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_stmt, 4),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 4),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 4),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_stmt, 3),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_stmt, 3),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_stmt_repeat1, 3),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_stmt_repeat1, 3),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_stmt, 2),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_stmt, 2),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_stmt_repeat1, 2),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_var_stmt_repeat1, 2),
  [715] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_var_stmt_repeat1, 2), SHIFT_REPEAT(339),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toplevel_items, 1),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_toplevel_items, 1),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_items, 1),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_items, 1),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_content, 2),
  [746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_content, 2), SHIFT_REPEAT(230),
  [749] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_content, 2), SHIFT_REPEAT(230),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_actuals_repeat1, 2),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_stmt, 2),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_stmt, 2),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_decl_item, 3),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_decl_item, 3),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_decl_item, 4),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_decl_item, 4),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2), SHIFT_REPEAT(224),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assignment_repeat1, 2),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [817] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_actuals_repeat1, 2), SHIFT_REPEAT(40),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [826] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_spec_repeat1, 2), SHIFT_REPEAT(112),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_spec_repeat1, 2),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_literal_repeat1, 4),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 7),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_stmt, 7),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 7),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_stmt, 7),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 6),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_stmt, 6),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_literal_repeat1, 2),
  [895] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_literal_repeat1, 2), SHIFT_REPEAT(46),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [910] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_LONGCOMMENT_repeat1, 2), SHIFT_REPEAT(285),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_LONGCOMMENT_repeat1, 2),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [927] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_LONGCOMMENT_repeat1, 2), SHIFT_REPEAT(291),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [940] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_LONGCOMMENT_repeat1, 2), SHIFT_REPEAT(299),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1001] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_stmt_repeat1, 2), SHIFT_REPEAT(353),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_stmt_repeat1, 2),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1014] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
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
