#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 387
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 134
#define ALIAS_COUNT 1
#define TOKEN_COUNT 78
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 19
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 31

enum {
  sym_identifier = 1,
  anon_sym_LF = 2,
  anon_sym_SEMI = 3,
  anon_sym_PLUS = 4,
  anon_sym_DASH = 5,
  anon_sym_DOT = 6,
  anon_sym_LBRACK = 7,
  anon_sym_RBRACK = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_COMMA = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_COLON = 14,
  anon_sym_EQ = 15,
  anon_sym_COLON_EQ = 16,
  anon_sym_enum = 17,
  anon_sym_for = 18,
  anon_sym_from = 19,
  anon_sym_to = 20,
  anon_sym_if = 21,
  anon_sym_elif = 22,
  anon_sym_else = 23,
  anon_sym_STAR = 24,
  anon_sym_SLASH = 25,
  anon_sym_PERCENT = 26,
  anon_sym_EQ_EQ = 27,
  anon_sym_BANG_EQ = 28,
  anon_sym_LT = 29,
  anon_sym_LT_EQ = 30,
  anon_sym_GT = 31,
  anon_sym_GT_EQ = 32,
  anon_sym_AMP_AMP = 33,
  anon_sym_and = 34,
  anon_sym_PIPE_PIPE = 35,
  anon_sym_or = 36,
  anon_sym_void = 37,
  anon_sym_bool = 38,
  anon_sym_int = 39,
  anon_sym_char = 40,
  anon_sym_string = 41,
  anon_sym_float = 42,
  anon_sym_Duration = 43,
  anon_sym_IpAddr = 44,
  anon_sym_CIDR = 45,
  anon_sym_Size = 46,
  anon_sym_Date = 47,
  anon_sym_Time = 48,
  anon_sym_DateType = 49,
  anon_sym_BQUOTE = 50,
  anon_sym_typespec = 51,
  anon_sym_tuple = 52,
  anon_sym_list = 53,
  anon_sym_dict = 54,
  anon_sym_func = 55,
  anon_sym_DASH_GT = 56,
  sym_comment = 57,
  anon_sym_LT_LT = 58,
  aux_sym_other_lit_token1 = 59,
  anon_sym_GT_GT = 60,
  sym_int_literal = 61,
  sym_float_literal = 62,
  sym_imaginary_literal = 63,
  anon_sym_true = 64,
  anon_sym_True = 65,
  anon_sym_false = 66,
  anon_sym_False = 67,
  sym_continue_statement = 68,
  sym_break_statement = 69,
  anon_sym_return = 70,
  anon_sym_DQUOTE = 71,
  anon_sym_SQUOTE = 72,
  sym_escape_sequence = 73,
  aux_sym__quoted_string_content_double_token1 = 74,
  aux_sym__quoted_string_content_single_token1 = 75,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 76,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 77,
  sym_source_file = 78,
  sym__top_level_item = 79,
  sym__declaration = 80,
  sym__statement = 81,
  sym_unary_expression = 82,
  sym__expression = 83,
  sym_composite_literal = 84,
  sym_selector_expression = 85,
  sym_index_expression = 86,
  sym_parenthesized_expression = 87,
  sym_expression_list = 88,
  sym_block = 89,
  sym__statement_list = 90,
  sym_assignment_statement = 91,
  sym_for_statement = 92,
  sym_for_range_clause = 93,
  sym_call_expression = 94,
  sym_argument_list = 95,
  sym_if_statement = 96,
  sym__if_stmt = 97,
  sym__if_elif_stmt = 98,
  sym__if_elif_else_stmt = 99,
  sym__if_else_stmt = 100,
  sym_elif_clause = 101,
  sym_else_clause = 102,
  sym_binary_expression = 103,
  sym_base_type_spec = 104,
  sym_type_spec = 105,
  sym_type_spec_r = 106,
  sym_func_spec = 107,
  sym_function_declaration = 108,
  sym_param_spec = 109,
  sym_tuple_literal = 110,
  sym_list_literal = 111,
  sym_dict_literal = 112,
  sym_dict_kv = 113,
  sym_true = 114,
  sym_false = 115,
  sym_empty_statement = 116,
  sym_return_statement = 117,
  sym_quoted_string = 118,
  aux_sym__quoted_string_content_double = 119,
  aux_sym__quoted_string_content_single = 120,
  sym_multiline_string = 121,
  sym_string_literal = 122,
  sym__field_identifier = 123,
  aux_sym_source_file_repeat1 = 124,
  aux_sym_expression_list_repeat1 = 125,
  aux_sym__statement_list_repeat1 = 126,
  aux_sym__if_elif_stmt_repeat1 = 127,
  aux_sym__if_elif_stmt_repeat2 = 128,
  aux_sym_base_type_spec_repeat1 = 129,
  aux_sym_func_spec_repeat1 = 130,
  aux_sym_function_declaration_repeat1 = 131,
  aux_sym_other_lit_repeat1 = 132,
  aux_sym_dict_literal_repeat1 = 133,
  alias_sym_field_identifier = 134,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_enum] = "enum",
  [anon_sym_for] = "for",
  [anon_sym_from] = "from",
  [anon_sym_to] = "to",
  [anon_sym_if] = "if",
  [anon_sym_elif] = "elif",
  [anon_sym_else] = "else",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_and] = "and",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_or] = "or",
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
  [anon_sym_tuple] = "tuple",
  [anon_sym_list] = "list",
  [anon_sym_dict] = "dict",
  [anon_sym_func] = "func",
  [anon_sym_DASH_GT] = "->",
  [sym_comment] = "comment",
  [anon_sym_LT_LT] = "<<",
  [aux_sym_other_lit_token1] = "other_lit_token1",
  [anon_sym_GT_GT] = ">>",
  [sym_int_literal] = "int_literal",
  [sym_float_literal] = "float_literal",
  [sym_imaginary_literal] = "imaginary_literal",
  [anon_sym_true] = "true",
  [anon_sym_True] = "True",
  [anon_sym_false] = "false",
  [anon_sym_False] = "False",
  [sym_continue_statement] = "continue_statement",
  [sym_break_statement] = "break_statement",
  [anon_sym_return] = "return",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym__quoted_string_content_double_token1] = "_quoted_string_content_double_token1",
  [aux_sym__quoted_string_content_single_token1] = "_quoted_string_content_single_token1",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [sym_source_file] = "source_file",
  [sym__top_level_item] = "_top_level_item",
  [sym__declaration] = "_declaration",
  [sym__statement] = "_statement",
  [sym_unary_expression] = "unary_expression",
  [sym__expression] = "_expression",
  [sym_composite_literal] = "composite_literal",
  [sym_selector_expression] = "selector_expression",
  [sym_index_expression] = "index_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_expression_list] = "expression_list",
  [sym_block] = "block",
  [sym__statement_list] = "_statement_list",
  [sym_assignment_statement] = "assignment_statement",
  [sym_for_statement] = "for_statement",
  [sym_for_range_clause] = "for_range_clause",
  [sym_call_expression] = "call_expression",
  [sym_argument_list] = "argument_list",
  [sym_if_statement] = "if_statement",
  [sym__if_stmt] = "_if_stmt",
  [sym__if_elif_stmt] = "_if_elif_stmt",
  [sym__if_elif_else_stmt] = "_if_elif_else_stmt",
  [sym__if_else_stmt] = "_if_else_stmt",
  [sym_elif_clause] = "elif_clause",
  [sym_else_clause] = "else_clause",
  [sym_binary_expression] = "binary_expression",
  [sym_base_type_spec] = "base_type_spec",
  [sym_type_spec] = "type_spec",
  [sym_type_spec_r] = "type_spec_r",
  [sym_func_spec] = "func_spec",
  [sym_function_declaration] = "function_declaration",
  [sym_param_spec] = "param_spec",
  [sym_tuple_literal] = "tuple_literal",
  [sym_list_literal] = "list_literal",
  [sym_dict_literal] = "dict_literal",
  [sym_dict_kv] = "dict_kv",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_empty_statement] = "empty_statement",
  [sym_return_statement] = "return_statement",
  [sym_quoted_string] = "quoted_string",
  [aux_sym__quoted_string_content_double] = "_quoted_string_content_double",
  [aux_sym__quoted_string_content_single] = "_quoted_string_content_single",
  [sym_multiline_string] = "multiline_string",
  [sym_string_literal] = "string_literal",
  [sym__field_identifier] = "_field_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
  [aux_sym__statement_list_repeat1] = "_statement_list_repeat1",
  [aux_sym__if_elif_stmt_repeat1] = "_if_elif_stmt_repeat1",
  [aux_sym__if_elif_stmt_repeat2] = "_if_elif_stmt_repeat2",
  [aux_sym_base_type_spec_repeat1] = "base_type_spec_repeat1",
  [aux_sym_func_spec_repeat1] = "func_spec_repeat1",
  [aux_sym_function_declaration_repeat1] = "function_declaration_repeat1",
  [aux_sym_other_lit_repeat1] = "other_lit_repeat1",
  [aux_sym_dict_literal_repeat1] = "dict_literal_repeat1",
  [alias_sym_field_identifier] = "field_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elif] = anon_sym_elif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_or] = anon_sym_or,
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
  [anon_sym_tuple] = anon_sym_tuple,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_dict] = anon_sym_dict,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_comment] = sym_comment,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [aux_sym_other_lit_token1] = aux_sym_other_lit_token1,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [sym_int_literal] = sym_int_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_imaginary_literal] = sym_imaginary_literal,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_False] = anon_sym_False,
  [sym_continue_statement] = sym_continue_statement,
  [sym_break_statement] = sym_break_statement,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym__quoted_string_content_double_token1] = aux_sym__quoted_string_content_double_token1,
  [aux_sym__quoted_string_content_single_token1] = aux_sym__quoted_string_content_single_token1,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [sym_source_file] = sym_source_file,
  [sym__top_level_item] = sym__top_level_item,
  [sym__declaration] = sym__declaration,
  [sym__statement] = sym__statement,
  [sym_unary_expression] = sym_unary_expression,
  [sym__expression] = sym__expression,
  [sym_composite_literal] = sym_composite_literal,
  [sym_selector_expression] = sym_selector_expression,
  [sym_index_expression] = sym_index_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_expression_list] = sym_expression_list,
  [sym_block] = sym_block,
  [sym__statement_list] = sym__statement_list,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym_for_statement] = sym_for_statement,
  [sym_for_range_clause] = sym_for_range_clause,
  [sym_call_expression] = sym_call_expression,
  [sym_argument_list] = sym_argument_list,
  [sym_if_statement] = sym_if_statement,
  [sym__if_stmt] = sym__if_stmt,
  [sym__if_elif_stmt] = sym__if_elif_stmt,
  [sym__if_elif_else_stmt] = sym__if_elif_else_stmt,
  [sym__if_else_stmt] = sym__if_else_stmt,
  [sym_elif_clause] = sym_elif_clause,
  [sym_else_clause] = sym_else_clause,
  [sym_binary_expression] = sym_binary_expression,
  [sym_base_type_spec] = sym_base_type_spec,
  [sym_type_spec] = sym_type_spec,
  [sym_type_spec_r] = sym_type_spec_r,
  [sym_func_spec] = sym_func_spec,
  [sym_function_declaration] = sym_function_declaration,
  [sym_param_spec] = sym_param_spec,
  [sym_tuple_literal] = sym_tuple_literal,
  [sym_list_literal] = sym_list_literal,
  [sym_dict_literal] = sym_dict_literal,
  [sym_dict_kv] = sym_dict_kv,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_empty_statement] = sym_empty_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_quoted_string] = sym_quoted_string,
  [aux_sym__quoted_string_content_double] = aux_sym__quoted_string_content_double,
  [aux_sym__quoted_string_content_single] = aux_sym__quoted_string_content_single,
  [sym_multiline_string] = sym_multiline_string,
  [sym_string_literal] = sym_string_literal,
  [sym__field_identifier] = sym__field_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
  [aux_sym__statement_list_repeat1] = aux_sym__statement_list_repeat1,
  [aux_sym__if_elif_stmt_repeat1] = aux_sym__if_elif_stmt_repeat1,
  [aux_sym__if_elif_stmt_repeat2] = aux_sym__if_elif_stmt_repeat2,
  [aux_sym_base_type_spec_repeat1] = aux_sym_base_type_spec_repeat1,
  [aux_sym_func_spec_repeat1] = aux_sym_func_spec_repeat1,
  [aux_sym_function_declaration_repeat1] = aux_sym_function_declaration_repeat1,
  [aux_sym_other_lit_repeat1] = aux_sym_other_lit_repeat1,
  [aux_sym_dict_literal_repeat1] = aux_sym_dict_literal_repeat1,
  [alias_sym_field_identifier] = alias_sym_field_identifier,
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
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [anon_sym_DOT] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
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
  [anon_sym_GT_EQ] = {
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
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
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
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
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
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_imaginary_literal] = {
    .visible = true,
    .named = true,
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
  [sym_continue_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_break_statement] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_return] = {
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
  [sym__top_level_item] = {
    .visible = false,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_composite_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_index_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_list] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
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
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_range_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__if_stmt] = {
    .visible = false,
    .named = true,
  },
  [sym__if_elif_stmt] = {
    .visible = false,
    .named = true,
  },
  [sym__if_elif_else_stmt] = {
    .visible = false,
    .named = true,
  },
  [sym__if_else_stmt] = {
    .visible = false,
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
  [sym_binary_expression] = {
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
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_param_spec] = {
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
  [sym_dict_kv] = {
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
  [sym_empty_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
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
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__field_identifier] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__statement_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__if_elif_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__if_elif_stmt_repeat2] = {
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
  [aux_sym_function_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_other_lit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dict_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_field_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_alternative_catchall = 1,
  field_alternative_conditional = 2,
  field_arguments = 3,
  field_body = 4,
  field_condition = 5,
  field_consequence = 6,
  field_field = 7,
  field_function = 8,
  field_index = 9,
  field_key = 10,
  field_left = 11,
  field_name = 12,
  field_operand = 13,
  field_operator = 14,
  field_param = 15,
  field_param_type = 16,
  field_parameters = 17,
  field_right = 18,
  field_value = 19,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative_catchall] = "alternative_catchall",
  [field_alternative_conditional] = "alternative_conditional",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_field] = "field",
  [field_function] = "function",
  [field_index] = "index",
  [field_key] = "key",
  [field_left] = "left",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_param] = "param",
  [field_param_type] = "param_type",
  [field_parameters] = "parameters",
  [field_right] = "right",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
  [3] = {.index = 5, .length = 4},
  [4] = {.index = 9, .length = 3},
  [5] = {.index = 12, .length = 2},
  [6] = {.index = 14, .length = 2},
  [7] = {.index = 16, .length = 2},
  [8] = {.index = 18, .length = 3},
  [10] = {.index = 21, .length = 2},
  [11] = {.index = 23, .length = 2},
  [12] = {.index = 25, .length = 1},
  [13] = {.index = 26, .length = 1},
  [14] = {.index = 27, .length = 3},
  [15] = {.index = 30, .length = 3},
  [16] = {.index = 33, .length = 1},
  [17] = {.index = 34, .length = 2},
  [18] = {.index = 36, .length = 1},
  [19] = {.index = 37, .length = 3},
  [20] = {.index = 40, .length = 3},
  [21] = {.index = 43, .length = 4},
  [22] = {.index = 47, .length = 2},
  [23] = {.index = 49, .length = 4},
  [24] = {.index = 53, .length = 2},
  [25] = {.index = 55, .length = 4},
  [26] = {.index = 59, .length = 4},
  [27] = {.index = 63, .length = 3},
  [28] = {.index = 66, .length = 5},
  [29] = {.index = 71, .length = 4},
  [30] = {.index = 75, .length = 6},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_condition, 0, .inherited = true},
    {field_consequence, 0, .inherited = true},
  [2] =
    {field_alternative_conditional, 0, .inherited = true},
    {field_condition, 0, .inherited = true},
    {field_consequence, 0, .inherited = true},
  [5] =
    {field_alternative_catchall, 0, .inherited = true},
    {field_alternative_conditional, 0, .inherited = true},
    {field_condition, 0, .inherited = true},
    {field_consequence, 0, .inherited = true},
  [9] =
    {field_alternative_catchall, 0, .inherited = true},
    {field_condition, 0, .inherited = true},
    {field_consequence, 0, .inherited = true},
  [12] =
    {field_operand, 1},
    {field_operator, 0},
  [14] =
    {field_arguments, 1},
    {field_function, 0},
  [16] =
    {field_condition, 1},
    {field_consequence, 2},
  [18] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [21] =
    {field_field, 2},
    {field_operand, 0},
  [23] =
    {field_key, 0},
    {field_value, 2},
  [25] =
    {field_body, 3},
  [26] =
    {field_alternative_conditional, 0},
  [27] =
    {field_alternative_catchall, 3},
    {field_condition, 1},
    {field_consequence, 2},
  [30] =
    {field_alternative_conditional, 3, .inherited = true},
    {field_condition, 1},
    {field_consequence, 2},
  [33] =
    {field_param, 0},
  [34] =
    {field_index, 2},
    {field_operand, 0},
  [36] =
    {field_consequence, 1},
  [37] =
    {field_alternative_catchall, 4},
    {field_condition, 1},
    {field_consequence, 2},
  [40] =
    {field_alternative_conditional, 4, .inherited = true},
    {field_condition, 1},
    {field_consequence, 2},
  [43] =
    {field_alternative_catchall, 4},
    {field_alternative_conditional, 3, .inherited = true},
    {field_condition, 1},
    {field_consequence, 2},
  [47] =
    {field_alternative_conditional, 0, .inherited = true},
    {field_alternative_conditional, 1, .inherited = true},
  [49] =
    {field_body, 4},
    {field_name, 1},
    {field_parameters, 2},
    {field_parameters, 3},
  [53] =
    {field_left, 1},
    {field_right, 3},
  [55] =
    {field_alternative_catchall, 5},
    {field_alternative_conditional, 4, .inherited = true},
    {field_condition, 1},
    {field_consequence, 2},
  [59] =
    {field_alternative_catchall, 5},
    {field_alternative_conditional, 3, .inherited = true},
    {field_condition, 1},
    {field_consequence, 2},
  [63] =
    {field_param, 0},
    {field_param_type, 1},
    {field_param_type, 2},
  [66] =
    {field_body, 5},
    {field_name, 1},
    {field_parameters, 2},
    {field_parameters, 3},
    {field_parameters, 4},
  [71] =
    {field_alternative_catchall, 6},
    {field_alternative_conditional, 4, .inherited = true},
    {field_condition, 1},
    {field_consequence, 2},
  [75] =
    {field_body, 6},
    {field_name, 1},
    {field_parameters, 2},
    {field_parameters, 3},
    {field_parameters, 4},
    {field_parameters, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [9] = {
    [0] = alias_sym_field_identifier,
  },
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
  [5] = 4,
  [6] = 6,
  [7] = 6,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 14,
  [15] = 13,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 16,
  [20] = 13,
  [21] = 17,
  [22] = 17,
  [23] = 18,
  [24] = 18,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 25,
  [33] = 33,
  [34] = 34,
  [35] = 28,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 36,
  [40] = 33,
  [41] = 41,
  [42] = 37,
  [43] = 43,
  [44] = 26,
  [45] = 31,
  [46] = 30,
  [47] = 29,
  [48] = 36,
  [49] = 28,
  [50] = 34,
  [51] = 29,
  [52] = 43,
  [53] = 30,
  [54] = 31,
  [55] = 33,
  [56] = 25,
  [57] = 43,
  [58] = 37,
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
  [77] = 77,
  [78] = 59,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 59,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 95,
  [98] = 90,
  [99] = 86,
  [100] = 80,
  [101] = 71,
  [102] = 72,
  [103] = 73,
  [104] = 85,
  [105] = 87,
  [106] = 90,
  [107] = 74,
  [108] = 75,
  [109] = 89,
  [110] = 70,
  [111] = 111,
  [112] = 79,
  [113] = 76,
  [114] = 114,
  [115] = 60,
  [116] = 65,
  [117] = 63,
  [118] = 77,
  [119] = 119,
  [120] = 87,
  [121] = 62,
  [122] = 89,
  [123] = 85,
  [124] = 64,
  [125] = 81,
  [126] = 84,
  [127] = 61,
  [128] = 66,
  [129] = 83,
  [130] = 67,
  [131] = 68,
  [132] = 82,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 70,
  [137] = 65,
  [138] = 138,
  [139] = 83,
  [140] = 79,
  [141] = 84,
  [142] = 63,
  [143] = 60,
  [144] = 144,
  [145] = 69,
  [146] = 146,
  [147] = 147,
  [148] = 77,
  [149] = 86,
  [150] = 61,
  [151] = 81,
  [152] = 76,
  [153] = 75,
  [154] = 74,
  [155] = 82,
  [156] = 73,
  [157] = 72,
  [158] = 71,
  [159] = 80,
  [160] = 62,
  [161] = 161,
  [162] = 69,
  [163] = 163,
  [164] = 64,
  [165] = 66,
  [166] = 67,
  [167] = 68,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 181,
  [183] = 176,
  [184] = 184,
  [185] = 176,
  [186] = 186,
  [187] = 187,
  [188] = 187,
  [189] = 186,
  [190] = 190,
  [191] = 187,
  [192] = 190,
  [193] = 190,
  [194] = 186,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 197,
  [199] = 195,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 203,
  [205] = 203,
  [206] = 206,
  [207] = 206,
  [208] = 208,
  [209] = 208,
  [210] = 210,
  [211] = 210,
  [212] = 212,
  [213] = 212,
  [214] = 214,
  [215] = 214,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 216,
  [220] = 218,
  [221] = 221,
  [222] = 222,
  [223] = 216,
  [224] = 224,
  [225] = 221,
  [226] = 224,
  [227] = 222,
  [228] = 221,
  [229] = 217,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 230,
  [235] = 231,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 237,
  [244] = 244,
  [245] = 241,
  [246] = 246,
  [247] = 237,
  [248] = 240,
  [249] = 241,
  [250] = 242,
  [251] = 251,
  [252] = 252,
  [253] = 231,
  [254] = 240,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 256,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 259,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 276,
  [278] = 275,
  [279] = 279,
  [280] = 261,
  [281] = 281,
  [282] = 262,
  [283] = 255,
  [284] = 284,
  [285] = 267,
  [286] = 264,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 268,
  [293] = 263,
  [294] = 257,
  [295] = 295,
  [296] = 258,
  [297] = 297,
  [298] = 256,
  [299] = 299,
  [300] = 300,
  [301] = 288,
  [302] = 302,
  [303] = 269,
  [304] = 270,
  [305] = 302,
  [306] = 299,
  [307] = 307,
  [308] = 274,
  [309] = 297,
  [310] = 310,
  [311] = 272,
  [312] = 312,
  [313] = 284,
  [314] = 314,
  [315] = 287,
  [316] = 275,
  [317] = 317,
  [318] = 276,
  [319] = 261,
  [320] = 320,
  [321] = 321,
  [322] = 255,
  [323] = 267,
  [324] = 289,
  [325] = 290,
  [326] = 291,
  [327] = 307,
  [328] = 258,
  [329] = 302,
  [330] = 299,
  [331] = 321,
  [332] = 281,
  [333] = 279,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 334,
  [341] = 336,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 347,
  [352] = 342,
  [353] = 353,
  [354] = 312,
  [355] = 338,
  [356] = 335,
  [357] = 342,
  [358] = 317,
  [359] = 348,
  [360] = 310,
  [361] = 361,
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
  [373] = 373,
  [374] = 374,
  [375] = 373,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 361,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 367,
  [386] = 383,
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
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '"') ADVANCE(93);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(95);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(42);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '0') ADVANCE(82);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '>') ADVANCE(66);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '`') ADVANCE(70);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '|') ADVANCE(21);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(113);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '#') ADVANCE(105);
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(79);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(42);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '|') ADVANCE(21);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(113);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(112);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '&') ADVANCE(68);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(111);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(73);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '_') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(71);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(25);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(86);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(87);
      END_STATE();
    case 21:
      if (lookahead == '|') ADVANCE(69);
      END_STATE();
    case 22:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 23:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(22);
      if (lookahead == '_') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(86);
      END_STATE();
    case 26:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(83);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(87);
      END_STATE();
    case 28:
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 35:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(42);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == '|') ADVANCE(21);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(113);
      END_STATE();
    case 36:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '"') ADVANCE(93);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(95);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == '+') ADVANCE(42);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(82);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(113);
      END_STATE();
    case 37:
      if (eof) ADVANCE(39);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '"') ADVANCE(93);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(95);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(42);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '0') ADVANCE(82);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '>') ADVANCE(66);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '`') ADVANCE(70);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '|') ADVANCE(21);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(113);
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      if (lookahead == '"') ADVANCE(93);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(95);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '+') ADVANCE(42);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(82);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(113);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(71);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(73);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead == '>') ADVANCE(81);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      if (lookahead == '"') ADVANCE(6);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(79);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      if (lookahead == '\'') ADVANCE(11);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(73);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(19);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(20);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(16);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(22);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_imaginary_literal);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(6);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(11);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(110);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_double_token1);
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(103);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_double_token1);
      if (lookahead == '*') ADVANCE(101);
      if (lookahead == '/') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(103);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_double_token1);
      if (lookahead == '*') ADVANCE(100);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(14);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_double_token1);
      if (lookahead == '*') ADVANCE(100);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(14);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_double_token1);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_double_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead == '#') ADVANCE(105);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(110);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(110);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead == '*') ADVANCE(107);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == '\n' ||
          lookahead == '\'') ADVANCE(14);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead == '*') ADVANCE(107);
      if (lookahead == '\n' ||
          lookahead == '\'') ADVANCE(14);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
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
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == 'r') ADVANCE(16);
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
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == 'h') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(49);
      if (lookahead == 'y') ADVANCE(50);
      END_STATE();
    case 19:
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
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 50:
      if (lookahead == 'p') ADVANCE(80);
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
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 66:
      if (lookahead == 'f') ADVANCE(95);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_CIDR);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_Date);
      if (lookahead == 'T') ADVANCE(109);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(112);
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
      if (lookahead == 'k') ADVANCE(113);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_dict);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 109:
      if (lookahead == 'y') ADVANCE(121);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_break_statement);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(126);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_tuple);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(128);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_IpAddr);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DateType);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_Duration);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_continue_statement);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_typespec);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 38},
  [2] = {.lex_state = 38},
  [3] = {.lex_state = 38},
  [4] = {.lex_state = 38},
  [5] = {.lex_state = 38},
  [6] = {.lex_state = 38},
  [7] = {.lex_state = 38},
  [8] = {.lex_state = 38},
  [9] = {.lex_state = 38},
  [10] = {.lex_state = 38},
  [11] = {.lex_state = 36},
  [12] = {.lex_state = 36},
  [13] = {.lex_state = 38},
  [14] = {.lex_state = 38},
  [15] = {.lex_state = 38},
  [16] = {.lex_state = 38},
  [17] = {.lex_state = 38},
  [18] = {.lex_state = 38},
  [19] = {.lex_state = 38},
  [20] = {.lex_state = 38},
  [21] = {.lex_state = 38},
  [22] = {.lex_state = 38},
  [23] = {.lex_state = 38},
  [24] = {.lex_state = 38},
  [25] = {.lex_state = 38},
  [26] = {.lex_state = 38},
  [27] = {.lex_state = 38},
  [28] = {.lex_state = 38},
  [29] = {.lex_state = 38},
  [30] = {.lex_state = 38},
  [31] = {.lex_state = 38},
  [32] = {.lex_state = 38},
  [33] = {.lex_state = 38},
  [34] = {.lex_state = 38},
  [35] = {.lex_state = 38},
  [36] = {.lex_state = 38},
  [37] = {.lex_state = 38},
  [38] = {.lex_state = 38},
  [39] = {.lex_state = 38},
  [40] = {.lex_state = 38},
  [41] = {.lex_state = 38},
  [42] = {.lex_state = 38},
  [43] = {.lex_state = 38},
  [44] = {.lex_state = 38},
  [45] = {.lex_state = 38},
  [46] = {.lex_state = 38},
  [47] = {.lex_state = 38},
  [48] = {.lex_state = 38},
  [49] = {.lex_state = 38},
  [50] = {.lex_state = 38},
  [51] = {.lex_state = 38},
  [52] = {.lex_state = 38},
  [53] = {.lex_state = 38},
  [54] = {.lex_state = 38},
  [55] = {.lex_state = 38},
  [56] = {.lex_state = 38},
  [57] = {.lex_state = 38},
  [58] = {.lex_state = 38},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 35},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 35},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 35},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 35},
  [96] = {.lex_state = 38},
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
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 35},
  [113] = {.lex_state = 35},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 35},
  [116] = {.lex_state = 35},
  [117] = {.lex_state = 35},
  [118] = {.lex_state = 35},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 35},
  [121] = {.lex_state = 35},
  [122] = {.lex_state = 35},
  [123] = {.lex_state = 35},
  [124] = {.lex_state = 35},
  [125] = {.lex_state = 35},
  [126] = {.lex_state = 35},
  [127] = {.lex_state = 35},
  [128] = {.lex_state = 35},
  [129] = {.lex_state = 35},
  [130] = {.lex_state = 35},
  [131] = {.lex_state = 35},
  [132] = {.lex_state = 35},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 35},
  [137] = {.lex_state = 35},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 35},
  [140] = {.lex_state = 35},
  [141] = {.lex_state = 35},
  [142] = {.lex_state = 35},
  [143] = {.lex_state = 35},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 35},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 35},
  [149] = {.lex_state = 35},
  [150] = {.lex_state = 35},
  [151] = {.lex_state = 35},
  [152] = {.lex_state = 35},
  [153] = {.lex_state = 35},
  [154] = {.lex_state = 35},
  [155] = {.lex_state = 35},
  [156] = {.lex_state = 35},
  [157] = {.lex_state = 35},
  [158] = {.lex_state = 35},
  [159] = {.lex_state = 35},
  [160] = {.lex_state = 35},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 35},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 35},
  [165] = {.lex_state = 35},
  [166] = {.lex_state = 35},
  [167] = {.lex_state = 35},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 35},
  [182] = {.lex_state = 35},
  [183] = {.lex_state = 35},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 35},
  [186] = {.lex_state = 5},
  [187] = {.lex_state = 5},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 5},
  [190] = {.lex_state = 5},
  [191] = {.lex_state = 5},
  [192] = {.lex_state = 5},
  [193] = {.lex_state = 5},
  [194] = {.lex_state = 5},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 5},
  [200] = {.lex_state = 5},
  [201] = {.lex_state = 5},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 5},
  [205] = {.lex_state = 5},
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
  [216] = {.lex_state = 0},
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
  [227] = {.lex_state = 36},
  [228] = {.lex_state = 36},
  [229] = {.lex_state = 36},
  [230] = {.lex_state = 36},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 36},
  [233] = {.lex_state = 36},
  [234] = {.lex_state = 36},
  [235] = {.lex_state = 1},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 2},
  [240] = {.lex_state = 2},
  [241] = {.lex_state = 2},
  [242] = {.lex_state = 36},
  [243] = {.lex_state = 1},
  [244] = {.lex_state = 36},
  [245] = {.lex_state = 2},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 1},
  [248] = {.lex_state = 2},
  [249] = {.lex_state = 2},
  [250] = {.lex_state = 36},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 36},
  [253] = {.lex_state = 1},
  [254] = {.lex_state = 2},
  [255] = {.lex_state = 3},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 36},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 36},
  [260] = {.lex_state = 36},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 36},
  [263] = {.lex_state = 36},
  [264] = {.lex_state = 36},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 4},
  [268] = {.lex_state = 3},
  [269] = {.lex_state = 36},
  [270] = {.lex_state = 36},
  [271] = {.lex_state = 36},
  [272] = {.lex_state = 36},
  [273] = {.lex_state = 36},
  [274] = {.lex_state = 36},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 36},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 36},
  [282] = {.lex_state = 36},
  [283] = {.lex_state = 3},
  [284] = {.lex_state = 36},
  [285] = {.lex_state = 4},
  [286] = {.lex_state = 36},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 36},
  [289] = {.lex_state = 36},
  [290] = {.lex_state = 36},
  [291] = {.lex_state = 36},
  [292] = {.lex_state = 4},
  [293] = {.lex_state = 36},
  [294] = {.lex_state = 36},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 3},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 36},
  [302] = {.lex_state = 4},
  [303] = {.lex_state = 36},
  [304] = {.lex_state = 36},
  [305] = {.lex_state = 4},
  [306] = {.lex_state = 3},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 36},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 36},
  [311] = {.lex_state = 36},
  [312] = {.lex_state = 36},
  [313] = {.lex_state = 36},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 36},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 36},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 3},
  [323] = {.lex_state = 4},
  [324] = {.lex_state = 36},
  [325] = {.lex_state = 36},
  [326] = {.lex_state = 36},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 4},
  [330] = {.lex_state = 3},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 36},
  [333] = {.lex_state = 36},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 36},
  [340] = {.lex_state = 0},
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
  [354] = {.lex_state = 36},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 36},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 36},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 9},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 9},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 9},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 9},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
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
    [anon_sym_tuple] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_dict] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [sym_imaginary_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [sym_continue_statement] = ACTIONS(1),
    [sym_break_statement] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(378),
    [sym__top_level_item] = STATE(320),
    [sym__declaration] = STATE(320),
    [sym__statement] = STATE(320),
    [sym_unary_expression] = STATE(105),
    [sym__expression] = STATE(97),
    [sym_composite_literal] = STATE(105),
    [sym_selector_expression] = STATE(105),
    [sym_index_expression] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_expression_list] = STATE(321),
    [sym_block] = STATE(263),
    [sym_assignment_statement] = STATE(263),
    [sym_for_statement] = STATE(263),
    [sym_call_expression] = STATE(105),
    [sym_if_statement] = STATE(263),
    [sym__if_stmt] = STATE(326),
    [sym__if_elif_stmt] = STATE(325),
    [sym__if_elif_else_stmt] = STATE(324),
    [sym__if_else_stmt] = STATE(301),
    [sym_binary_expression] = STATE(105),
    [sym_function_declaration] = STATE(320),
    [sym_tuple_literal] = STATE(104),
    [sym_list_literal] = STATE(104),
    [sym_dict_literal] = STATE(104),
    [sym_true] = STATE(105),
    [sym_false] = STATE(105),
    [sym_empty_statement] = STATE(263),
    [sym_return_statement] = STATE(263),
    [sym_quoted_string] = STATE(141),
    [sym_multiline_string] = STATE(141),
    [sym_string_literal] = STATE(105),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_for] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_func] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym_int_literal] = ACTIONS(25),
    [sym_float_literal] = ACTIONS(25),
    [sym_imaginary_literal] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_True] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_False] = ACTIONS(31),
    [sym_continue_statement] = ACTIONS(33),
    [sym_break_statement] = ACTIONS(33),
    [anon_sym_return] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(43),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_for,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_func,
    ACTIONS(27), 1,
      sym_imaginary_literal,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(97), 1,
      sym__expression,
    STATE(301), 1,
      sym__if_else_stmt,
    STATE(321), 1,
      sym_expression_list,
    STATE(324), 1,
      sym__if_elif_else_stmt,
    STATE(325), 1,
      sym__if_elif_stmt,
    STATE(326), 1,
      sym__if_stmt,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(31), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(33), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(141), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(104), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(273), 4,
      sym__top_level_item,
      sym__declaration,
      sym__statement,
      sym_function_declaration,
    STATE(263), 6,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_empty_statement,
      sym_return_statement,
    STATE(105), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [125] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(52), 1,
      anon_sym_SEMI,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_for,
    ACTIONS(70), 1,
      anon_sym_if,
    ACTIONS(73), 1,
      anon_sym_func,
    ACTIONS(79), 1,
      sym_imaginary_literal,
    ACTIONS(91), 1,
      anon_sym_return,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(95), 1,
      sym__expression,
    STATE(288), 1,
      sym__if_else_stmt,
    STATE(289), 1,
      sym__if_elif_else_stmt,
    STATE(290), 1,
      sym__if_elif_stmt,
    STATE(291), 1,
      sym__if_stmt,
    STATE(331), 1,
      sym_expression_list,
    ACTIONS(55), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(76), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(82), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(88), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(126), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(123), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(339), 4,
      sym__top_level_item,
      sym__declaration,
      sym__statement,
      sym_function_declaration,
    STATE(293), 6,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_empty_statement,
      sym_return_statement,
    STATE(120), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [250] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    ACTIONS(120), 1,
      anon_sym_for,
    ACTIONS(122), 1,
      anon_sym_if,
    ACTIONS(126), 1,
      sym_imaginary_literal,
    ACTIONS(134), 1,
      anon_sym_return,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(91), 1,
      sym__expression,
    STATE(244), 1,
      sym__statement,
    STATE(258), 1,
      sym_dict_kv,
    STATE(288), 1,
      sym__if_else_stmt,
    STATE(289), 1,
      sym__if_elif_else_stmt,
    STATE(290), 1,
      sym__if_elif_stmt,
    STATE(291), 1,
      sym__if_stmt,
    STATE(331), 1,
      sym_expression_list,
    STATE(375), 1,
      sym__statement_list,
    ACTIONS(110), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(124), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(128), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(130), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(132), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(126), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(123), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(293), 6,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_empty_statement,
      sym_return_statement,
    STATE(120), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [372] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_for,
    ACTIONS(122), 1,
      anon_sym_if,
    ACTIONS(126), 1,
      sym_imaginary_literal,
    ACTIONS(134), 1,
      anon_sym_return,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym__expression,
    STATE(244), 1,
      sym__statement,
    STATE(288), 1,
      sym__if_else_stmt,
    STATE(289), 1,
      sym__if_elif_else_stmt,
    STATE(290), 1,
      sym__if_elif_stmt,
    STATE(291), 1,
      sym__if_stmt,
    STATE(296), 1,
      sym_dict_kv,
    STATE(331), 1,
      sym_expression_list,
    STATE(373), 1,
      sym__statement_list,
    ACTIONS(110), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(124), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(128), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(130), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(132), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(126), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(123), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(293), 6,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_empty_statement,
      sym_return_statement,
    STATE(120), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [494] = 32,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_for,
    ACTIONS(122), 1,
      anon_sym_if,
    ACTIONS(126), 1,
      sym_imaginary_literal,
    ACTIONS(134), 1,
      anon_sym_return,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym__expression,
    STATE(244), 1,
      sym__statement,
    STATE(288), 1,
      sym__if_else_stmt,
    STATE(289), 1,
      sym__if_elif_else_stmt,
    STATE(290), 1,
      sym__if_elif_stmt,
    STATE(291), 1,
      sym__if_stmt,
    STATE(331), 1,
      sym_expression_list,
    STATE(373), 1,
      sym__statement_list,
    ACTIONS(110), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(124), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(128), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(130), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(132), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(126), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(123), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(293), 6,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_empty_statement,
      sym_return_statement,
    STATE(120), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [613] = 32,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    ACTIONS(120), 1,
      anon_sym_for,
    ACTIONS(122), 1,
      anon_sym_if,
    ACTIONS(126), 1,
      sym_imaginary_literal,
    ACTIONS(134), 1,
      anon_sym_return,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(95), 1,
      sym__expression,
    STATE(244), 1,
      sym__statement,
    STATE(288), 1,
      sym__if_else_stmt,
    STATE(289), 1,
      sym__if_elif_else_stmt,
    STATE(290), 1,
      sym__if_elif_stmt,
    STATE(291), 1,
      sym__if_stmt,
    STATE(331), 1,
      sym_expression_list,
    STATE(375), 1,
      sym__statement_list,
    ACTIONS(110), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(124), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(128), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(130), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(132), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(126), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(123), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(293), 6,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_empty_statement,
      sym_return_statement,
    STATE(120), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [732] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_for,
    ACTIONS(122), 1,
      anon_sym_if,
    ACTIONS(126), 1,
      sym_imaginary_literal,
    ACTIONS(134), 1,
      anon_sym_return,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym__expression,
    STATE(260), 1,
      sym__statement,
    STATE(288), 1,
      sym__if_else_stmt,
    STATE(289), 1,
      sym__if_elif_else_stmt,
    STATE(290), 1,
      sym__if_elif_stmt,
    STATE(291), 1,
      sym__if_stmt,
    STATE(331), 1,
      sym_expression_list,
    ACTIONS(110), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(124), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(128), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(130), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(132), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(126), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(123), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(293), 6,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_empty_statement,
      sym_return_statement,
    STATE(120), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [848] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_for,
    ACTIONS(122), 1,
      anon_sym_if,
    ACTIONS(126), 1,
      sym_imaginary_literal,
    ACTIONS(134), 1,
      anon_sym_return,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym__expression,
    STATE(260), 1,
      sym__statement,
    STATE(288), 1,
      sym__if_else_stmt,
    STATE(289), 1,
      sym__if_elif_else_stmt,
    STATE(290), 1,
      sym__if_elif_stmt,
    STATE(291), 1,
      sym__if_stmt,
    STATE(331), 1,
      sym_expression_list,
    ACTIONS(110), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(124), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(128), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(130), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(132), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(126), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(123), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(293), 6,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_empty_statement,
      sym_return_statement,
    STATE(120), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [964] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_for,
    ACTIONS(122), 1,
      anon_sym_if,
    ACTIONS(126), 1,
      sym_imaginary_literal,
    ACTIONS(134), 1,
      anon_sym_return,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(95), 1,
      sym__expression,
    STATE(260), 1,
      sym__statement,
    STATE(288), 1,
      sym__if_else_stmt,
    STATE(289), 1,
      sym__if_elif_else_stmt,
    STATE(290), 1,
      sym__if_elif_stmt,
    STATE(291), 1,
      sym__if_stmt,
    STATE(331), 1,
      sym_expression_list,
    ACTIONS(110), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(124), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(128), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(130), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(132), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(126), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(123), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(293), 6,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_empty_statement,
      sym_return_statement,
    STATE(120), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [1077] = 20,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_SEMI,
    ACTIONS(156), 1,
      anon_sym_LBRACK,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(166), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(182), 1,
      sym__expression,
    STATE(264), 1,
      sym_expression_list,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(31), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(154), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(141), 2,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(25), 3,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
    STATE(104), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(105), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [1156] = 20,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(178), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(181), 1,
      sym__expression,
    STATE(286), 1,
      sym_expression_list,
    ACTIONS(128), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(130), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(152), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(168), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(126), 2,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(124), 3,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
    STATE(123), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(120), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [1235] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_imaginary_literal,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(202), 1,
      sym__expression,
    STATE(296), 1,
      sym_dict_kv,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(190), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(196), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(84), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(85), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(87), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [1309] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_imaginary_literal,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(202), 1,
      sym__expression,
    STATE(349), 1,
      sym_dict_kv,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(190), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(196), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(84), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(85), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(87), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [1383] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_imaginary_literal,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(202), 1,
      sym__expression,
    STATE(328), 1,
      sym_dict_kv,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(190), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(196), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(84), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(85), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(87), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [1457] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      sym_imaginary_literal,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(181), 1,
      sym__expression,
    STATE(308), 1,
      sym_expression_list,
    ACTIONS(110), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(124), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(128), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(130), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(126), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(123), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(120), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [1531] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_imaginary_literal,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    STATE(192), 1,
      sym__expression,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(190), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(196), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(84), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(85), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(87), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [1605] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_imaginary_literal,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(210), 1,
      anon_sym_RBRACK,
    STATE(189), 1,
      sym__expression,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(190), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(196), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(84), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(85), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(87), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [1679] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_imaginary_literal,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    STATE(182), 1,
      sym__expression,
    STATE(274), 1,
      sym_expression_list,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(31), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(141), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(104), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(105), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [1753] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_imaginary_literal,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(202), 1,
      sym__expression,
    STATE(258), 1,
      sym_dict_kv,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(190), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(196), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(84), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(85), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(87), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [1827] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_imaginary_literal,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    STATE(190), 1,
      sym__expression,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(190), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(196), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(84), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(85), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(87), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [1901] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_imaginary_literal,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
    STATE(193), 1,
      sym__expression,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(190), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(196), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(84), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(85), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(87), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [1975] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_imaginary_literal,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_RBRACK,
    STATE(186), 1,
      sym__expression,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(190), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(196), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(84), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(85), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(87), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [2049] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_imaginary_literal,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(220), 1,
      anon_sym_RBRACK,
    STATE(194), 1,
      sym__expression,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(190), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(196), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(84), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(85), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(87), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [2123] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_imaginary_literal,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(80), 1,
      sym__expression,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(190), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(196), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(84), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(85), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(87), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [2194] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_imaginary_literal,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(195), 1,
      sym__expression,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(190), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(196), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(84), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(85), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(87), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [2265] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_imaginary_literal,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(201), 1,
      sym__expression,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(190), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(196), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(84), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(85), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(87), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [2336] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_imaginary_literal,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(83), 1,
      sym__expression,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(190), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(196), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(84), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(85), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(87), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [2407] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      sym_imaginary_literal,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(156), 1,
      sym__expression,
    ACTIONS(110), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(124), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(128), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(130), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(126), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(123), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(120), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [2478] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      sym_imaginary_literal,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(157), 1,
      sym__expression,
    ACTIONS(110), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(124), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(128), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(130), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(126), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(123), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(120), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [2549] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      sym_imaginary_literal,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(158), 1,
      sym__expression,
    ACTIONS(110), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(124), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(128), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(130), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(126), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(123), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(120), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [2620] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      sym_imaginary_literal,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(159), 1,
      sym__expression,
    ACTIONS(110), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(124), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(128), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(130), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(126), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(123), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(120), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [2691] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      sym_imaginary_literal,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(166), 1,
      sym__expression,
    ACTIONS(110), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(124), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(128), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(130), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(126), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(123), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(120), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [2762] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_imaginary_literal,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(197), 1,
      sym__expression,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(190), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(196), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(84), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(85), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(87), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [2833] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_imaginary_literal,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    STATE(139), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(31), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(141), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(104), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(105), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [2904] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_imaginary_literal,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(191), 1,
      sym__expression,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(190), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(196), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(84), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(85), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(87), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [2975] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      sym_imaginary_literal,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(183), 1,
      sym__expression,
    ACTIONS(110), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(124), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(128), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(130), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(126), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(123), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(120), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [3046] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_imaginary_literal,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(200), 1,
      sym__expression,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(190), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(196), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(84), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(85), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(87), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [3117] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_imaginary_literal,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(188), 1,
      sym__expression,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(190), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(196), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(84), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(85), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(87), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [3188] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_imaginary_literal,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym__expression,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(190), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(196), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(84), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(85), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(87), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [3259] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_imaginary_literal,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(196), 1,
      sym__expression,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(190), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(196), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(84), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(85), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(87), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [3330] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_imaginary_literal,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    STATE(185), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(31), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(141), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(104), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(105), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [3401] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_imaginary_literal,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(203), 1,
      sym__expression,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(190), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(196), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(84), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(85), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(87), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [3472] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_imaginary_literal,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(199), 1,
      sym__expression,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(190), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(196), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(84), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(85), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(87), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [3543] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_imaginary_literal,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(71), 1,
      sym__expression,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(190), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(196), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(84), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(85), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(87), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [3614] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_imaginary_literal,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(72), 1,
      sym__expression,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(190), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(196), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(84), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(85), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(87), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [3685] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_imaginary_literal,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(73), 1,
      sym__expression,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(190), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(196), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(84), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(85), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(87), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [3756] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_imaginary_literal,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(187), 1,
      sym__expression,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(190), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(196), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(84), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(85), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(87), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [3827] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      sym_imaginary_literal,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym__expression,
    ACTIONS(110), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(124), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(128), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(130), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(126), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(123), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(120), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [3898] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_imaginary_literal,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(198), 1,
      sym__expression,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(190), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(196), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(84), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(85), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(87), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [3969] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_imaginary_literal,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    STATE(103), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(31), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(141), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(104), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(105), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [4040] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_imaginary_literal,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(204), 1,
      sym__expression,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(190), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(196), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(84), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(85), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(87), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [4111] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_imaginary_literal,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    STATE(102), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(31), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(141), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(104), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(105), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [4182] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_imaginary_literal,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(31), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(141), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(104), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(105), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [4253] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_imaginary_literal,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    STATE(130), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(31), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(141), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(104), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(105), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [4324] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_imaginary_literal,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    STATE(100), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(31), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(141), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(104), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(105), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [4395] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_imaginary_literal,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(205), 1,
      sym__expression,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(190), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(196), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(84), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(85), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(87), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [4466] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_imaginary_literal,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(176), 1,
      sym__expression,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(190), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(196), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(84), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(85), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(87), 10,
      sym_unary_expression,
      sym_composite_literal,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [4537] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym_argument_list,
    ACTIONS(226), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(222), 21,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [4577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(228), 21,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [4611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(232), 21,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [4645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(236), 21,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [4679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(240), 21,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [4713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(244), 21,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [4747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(248), 21,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [4781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(252), 21,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [4815] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(262), 4,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(256), 17,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [4857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(268), 21,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [4891] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(272), 21,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [4925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(276), 21,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [4959] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(280), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(262), 4,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(256), 15,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5003] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(262), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(280), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(284), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(282), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(256), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5051] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(262), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(280), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(284), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(282), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(256), 9,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(288), 21,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(292), 21,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(296), 21,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(300), 21,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5237] = 5,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LF,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    STATE(143), 1,
      sym_argument_list,
    ACTIONS(226), 23,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(306), 21,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5309] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(256), 19,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(310), 21,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(314), 21,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5415] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(318), 19,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(322), 21,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(326), 21,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(330), 21,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(222), 21,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5589] = 5,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_argument_list,
    ACTIONS(222), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(226), 22,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 21,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(340), 21,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5695] = 14,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_LF,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(352), 1,
      anon_sym_LBRACK,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      anon_sym_COLON,
    STATE(225), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(346), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(348), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
    ACTIONS(365), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(367), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(361), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(363), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [5750] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_RBRACK,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      anon_sym_Date,
    ACTIONS(380), 1,
      anon_sym_BQUOTE,
    ACTIONS(383), 1,
      anon_sym_typespec,
    ACTIONS(386), 1,
      anon_sym_tuple,
    ACTIONS(389), 1,
      anon_sym_list,
    ACTIONS(392), 1,
      anon_sym_dict,
    ACTIONS(395), 1,
      anon_sym_func,
    STATE(92), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    STATE(163), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(374), 12,
      anon_sym_void,
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
  [5803] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_RBRACK,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_Date,
    ACTIONS(406), 1,
      anon_sym_BQUOTE,
    ACTIONS(408), 1,
      anon_sym_typespec,
    ACTIONS(410), 1,
      anon_sym_tuple,
    ACTIONS(412), 1,
      anon_sym_list,
    ACTIONS(414), 1,
      anon_sym_dict,
    ACTIONS(416), 1,
      anon_sym_func,
    STATE(92), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    STATE(163), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(402), 12,
      anon_sym_void,
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
  [5856] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LBRACK,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(420), 23,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_void,
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
      anon_sym_tuple,
      anon_sym_list,
      anon_sym_dict,
      anon_sym_func,
  [5891] = 13,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_LF,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(352), 1,
      anon_sym_LBRACK,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    STATE(225), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(346), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(348), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(365), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(367), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(359), 3,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
    ACTIONS(361), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(363), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [5944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      sym_imaginary_literal,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(424), 15,
      anon_sym_for,
      anon_sym_if,
      anon_sym_func,
      sym_int_literal,
      sym_float_literal,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
      sym_continue_statement,
      sym_break_statement,
      anon_sym_return,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [5977] = 13,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_SEMI,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(428), 1,
      anon_sym_DOT,
    ACTIONS(430), 1,
      anon_sym_LBRACK,
    STATE(225), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(344), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(426), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(436), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(438), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(359), 3,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
    ACTIONS(432), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(434), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6030] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_LF,
    ACTIONS(342), 23,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6062] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(330), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(332), 22,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6094] = 5,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_DOT,
    ACTIONS(430), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(262), 20,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6130] = 7,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_DOT,
    ACTIONS(430), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(426), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(262), 15,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6170] = 8,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_DOT,
    ACTIONS(430), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(426), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(434), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(262), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6212] = 9,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_DOT,
    ACTIONS(430), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(426), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(436), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(432), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(434), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(262), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6256] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(326), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(328), 22,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6288] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(222), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(226), 22,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6320] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(340), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(342), 22,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6352] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(288), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(290), 22,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6384] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(292), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(294), 22,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6416] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(336), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(338), 22,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6448] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(276), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(278), 22,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_Date,
    ACTIONS(440), 23,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_void,
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
      anon_sym_tuple,
      anon_sym_list,
      anon_sym_dict,
      anon_sym_func,
  [6512] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(306), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(308), 22,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6544] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(296), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(298), 22,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_Date,
    ACTIONS(444), 23,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_void,
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
      anon_sym_tuple,
      anon_sym_list,
      anon_sym_dict,
      anon_sym_func,
  [6608] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(228), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(230), 22,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6640] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(248), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(250), 22,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6672] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(240), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(242), 22,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6704] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(300), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(302), 22,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6736] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_Date,
    ACTIONS(406), 1,
      anon_sym_BQUOTE,
    ACTIONS(408), 1,
      anon_sym_typespec,
    ACTIONS(410), 1,
      anon_sym_tuple,
    ACTIONS(412), 1,
      anon_sym_list,
    ACTIONS(414), 1,
      anon_sym_dict,
    ACTIONS(416), 1,
      anon_sym_func,
    STATE(93), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    STATE(163), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(402), 12,
      anon_sym_void,
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
  [6786] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LF,
    ACTIONS(226), 23,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6818] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(236), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(238), 22,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6850] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LF,
    ACTIONS(338), 23,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6882] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LF,
    ACTIONS(328), 23,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6914] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(244), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(246), 22,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6946] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(310), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(312), 22,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6978] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LF,
    ACTIONS(324), 23,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [7010] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(232), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(234), 22,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [7042] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(252), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(254), 22,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [7074] = 5,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(352), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 21,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [7110] = 6,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_DOT,
    ACTIONS(430), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(432), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(262), 17,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [7148] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(268), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(270), 22,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [7180] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_LF,
    ACTIONS(316), 23,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [7212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_Date,
    ACTIONS(448), 23,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_void,
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
      anon_sym_tuple,
      anon_sym_list,
      anon_sym_dict,
      anon_sym_func,
  [7244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_Date,
    ACTIONS(452), 23,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_void,
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
      anon_sym_tuple,
      anon_sym_list,
      anon_sym_dict,
      anon_sym_func,
  [7276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_Date,
    ACTIONS(456), 23,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_void,
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
      anon_sym_tuple,
      anon_sym_list,
      anon_sym_dict,
      anon_sym_func,
  [7308] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_LF,
    ACTIONS(278), 23,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [7340] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_LF,
    ACTIONS(250), 23,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [7372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_Date,
    ACTIONS(460), 23,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_void,
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
      anon_sym_tuple,
      anon_sym_list,
      anon_sym_dict,
      anon_sym_func,
  [7404] = 5,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_DOT,
    ACTIONS(430), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(320), 20,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [7440] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LF,
    ACTIONS(308), 23,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [7472] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(322), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(324), 22,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [7504] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_LF,
    ACTIONS(242), 23,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [7536] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LF,
    ACTIONS(230), 23,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [7568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_Date,
    ACTIONS(464), 23,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_void,
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
      anon_sym_tuple,
      anon_sym_list,
      anon_sym_dict,
      anon_sym_func,
  [7600] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(272), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(274), 22,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [7632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_Date,
    ACTIONS(468), 23,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_void,
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
      anon_sym_tuple,
      anon_sym_list,
      anon_sym_dict,
      anon_sym_func,
  [7664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(420), 23,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_void,
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
      anon_sym_tuple,
      anon_sym_list,
      anon_sym_dict,
      anon_sym_func,
  [7696] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(302), 23,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [7728] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LF,
    ACTIONS(332), 23,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [7760] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LF,
    ACTIONS(234), 23,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [7792] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LF,
    ACTIONS(312), 23,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [7824] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LF,
    ACTIONS(298), 23,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [7856] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_LF,
    ACTIONS(294), 23,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [7888] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_LF,
    ACTIONS(290), 23,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [7920] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(314), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(316), 22,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [7952] = 9,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LF,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(352), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(365), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(361), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(363), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(262), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [7996] = 8,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LF,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(352), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(361), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(363), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(262), 10,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [8038] = 7,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LF,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(352), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(361), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(262), 16,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [8078] = 5,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LF,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(352), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 21,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [8114] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LF,
    ACTIONS(238), 23,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [8146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_Date,
    ACTIONS(472), 23,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_void,
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
      anon_sym_tuple,
      anon_sym_list,
      anon_sym_dict,
      anon_sym_func,
  [8178] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LF,
    ACTIONS(274), 23,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [8210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_Date,
    ACTIONS(476), 23,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_void,
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
      anon_sym_tuple,
      anon_sym_list,
      anon_sym_dict,
      anon_sym_func,
  [8242] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_LF,
    ACTIONS(246), 23,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [8274] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LF,
    ACTIONS(254), 23,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [8306] = 6,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LF,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(352), 1,
      anon_sym_LBRACK,
    ACTIONS(361), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(262), 18,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [8344] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LF,
    ACTIONS(270), 23,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [8376] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_Date,
    ACTIONS(406), 1,
      anon_sym_BQUOTE,
    ACTIONS(408), 1,
      anon_sym_typespec,
    ACTIONS(410), 1,
      anon_sym_tuple,
    ACTIONS(412), 1,
      anon_sym_list,
    ACTIONS(414), 1,
      anon_sym_dict,
    ACTIONS(416), 1,
      anon_sym_func,
    STATE(251), 1,
      sym_type_spec_r,
    STATE(163), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(402), 12,
      anon_sym_void,
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
  [8425] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_Date,
    ACTIONS(406), 1,
      anon_sym_BQUOTE,
    ACTIONS(408), 1,
      anon_sym_typespec,
    ACTIONS(410), 1,
      anon_sym_tuple,
    ACTIONS(412), 1,
      anon_sym_list,
    ACTIONS(414), 1,
      anon_sym_dict,
    ACTIONS(416), 1,
      anon_sym_func,
    STATE(371), 1,
      sym_type_spec_r,
    STATE(163), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(402), 12,
      anon_sym_void,
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
  [8474] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_Date,
    ACTIONS(406), 1,
      anon_sym_BQUOTE,
    ACTIONS(408), 1,
      anon_sym_typespec,
    ACTIONS(410), 1,
      anon_sym_tuple,
    ACTIONS(412), 1,
      anon_sym_list,
    ACTIONS(414), 1,
      anon_sym_dict,
    ACTIONS(416), 1,
      anon_sym_func,
    STATE(372), 1,
      sym_type_spec_r,
    STATE(163), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(402), 12,
      anon_sym_void,
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
  [8523] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_Date,
    ACTIONS(406), 1,
      anon_sym_BQUOTE,
    ACTIONS(408), 1,
      anon_sym_typespec,
    ACTIONS(410), 1,
      anon_sym_tuple,
    ACTIONS(412), 1,
      anon_sym_list,
    ACTIONS(414), 1,
      anon_sym_dict,
    ACTIONS(416), 1,
      anon_sym_func,
    STATE(374), 1,
      sym_type_spec_r,
    STATE(163), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(402), 12,
      anon_sym_void,
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
  [8572] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_Date,
    ACTIONS(406), 1,
      anon_sym_BQUOTE,
    ACTIONS(408), 1,
      anon_sym_typespec,
    ACTIONS(410), 1,
      anon_sym_tuple,
    ACTIONS(412), 1,
      anon_sym_list,
    ACTIONS(414), 1,
      anon_sym_dict,
    ACTIONS(416), 1,
      anon_sym_func,
    STATE(363), 1,
      sym_type_spec_r,
    STATE(163), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(402), 12,
      anon_sym_void,
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
  [8621] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_Date,
    ACTIONS(406), 1,
      anon_sym_BQUOTE,
    ACTIONS(408), 1,
      anon_sym_typespec,
    ACTIONS(410), 1,
      anon_sym_tuple,
    ACTIONS(412), 1,
      anon_sym_list,
    ACTIONS(414), 1,
      anon_sym_dict,
    ACTIONS(416), 1,
      anon_sym_func,
    STATE(138), 1,
      sym_type_spec_r,
    STATE(163), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(402), 12,
      anon_sym_void,
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
  [8670] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_Date,
    ACTIONS(406), 1,
      anon_sym_BQUOTE,
    ACTIONS(408), 1,
      anon_sym_typespec,
    ACTIONS(410), 1,
      anon_sym_tuple,
    ACTIONS(412), 1,
      anon_sym_list,
    ACTIONS(414), 1,
      anon_sym_dict,
    ACTIONS(416), 1,
      anon_sym_func,
    STATE(135), 1,
      sym_type_spec_r,
    STATE(163), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(402), 12,
      anon_sym_void,
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
  [8719] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_Date,
    ACTIONS(406), 1,
      anon_sym_BQUOTE,
    ACTIONS(408), 1,
      anon_sym_typespec,
    ACTIONS(410), 1,
      anon_sym_tuple,
    ACTIONS(412), 1,
      anon_sym_list,
    ACTIONS(414), 1,
      anon_sym_dict,
    ACTIONS(416), 1,
      anon_sym_func,
    STATE(133), 1,
      sym_type_spec_r,
    STATE(163), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(402), 12,
      anon_sym_void,
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
  [8768] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(280), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(284), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(482), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(484), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(282), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(480), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
  [8817] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_Date,
    ACTIONS(406), 1,
      anon_sym_BQUOTE,
    ACTIONS(408), 1,
      anon_sym_typespec,
    ACTIONS(410), 1,
      anon_sym_tuple,
    ACTIONS(412), 1,
      anon_sym_list,
    ACTIONS(414), 1,
      anon_sym_dict,
    ACTIONS(416), 1,
      anon_sym_func,
    STATE(368), 1,
      sym_type_spec_r,
    STATE(163), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(402), 12,
      anon_sym_void,
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
  [8866] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_Date,
    ACTIONS(406), 1,
      anon_sym_BQUOTE,
    ACTIONS(408), 1,
      anon_sym_typespec,
    ACTIONS(410), 1,
      anon_sym_tuple,
    ACTIONS(412), 1,
      anon_sym_list,
    ACTIONS(414), 1,
      anon_sym_dict,
    ACTIONS(416), 1,
      anon_sym_func,
    STATE(300), 1,
      sym_type_spec_r,
    STATE(163), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(402), 12,
      anon_sym_void,
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
  [8915] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_Date,
    ACTIONS(406), 1,
      anon_sym_BQUOTE,
    ACTIONS(408), 1,
      anon_sym_typespec,
    ACTIONS(410), 1,
      anon_sym_tuple,
    ACTIONS(412), 1,
      anon_sym_list,
    ACTIONS(414), 1,
      anon_sym_dict,
    ACTIONS(416), 1,
      anon_sym_func,
    STATE(384), 1,
      sym_type_spec_r,
    STATE(163), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(402), 12,
      anon_sym_void,
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
  [8964] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_Date,
    ACTIONS(406), 1,
      anon_sym_BQUOTE,
    ACTIONS(408), 1,
      anon_sym_typespec,
    ACTIONS(410), 1,
      anon_sym_tuple,
    ACTIONS(412), 1,
      anon_sym_list,
    ACTIONS(414), 1,
      anon_sym_dict,
    ACTIONS(416), 1,
      anon_sym_func,
    STATE(144), 1,
      sym_type_spec_r,
    STATE(163), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(402), 12,
      anon_sym_void,
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
  [9013] = 12,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(352), 1,
      anon_sym_LBRACK,
    ACTIONS(486), 1,
      anon_sym_LF,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    STATE(221), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(348), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(365), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(367), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(361), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(363), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9061] = 12,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_SEMI,
    ACTIONS(428), 1,
      anon_sym_DOT,
    ACTIONS(430), 1,
      anon_sym_LBRACK,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    STATE(228), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(426), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(436), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(438), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(486), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(432), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(434), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9109] = 10,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(352), 1,
      anon_sym_LBRACK,
    ACTIONS(480), 1,
      anon_sym_LF,
    ACTIONS(348), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(365), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(367), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(361), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(482), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(363), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9152] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_Date,
    ACTIONS(406), 1,
      anon_sym_BQUOTE,
    ACTIONS(408), 1,
      anon_sym_typespec,
    ACTIONS(410), 1,
      anon_sym_tuple,
    ACTIONS(412), 1,
      anon_sym_list,
    ACTIONS(414), 1,
      anon_sym_dict,
    ACTIONS(492), 1,
      anon_sym_func,
    STATE(344), 1,
      sym_base_type_spec,
    STATE(345), 1,
      sym_type_spec,
    ACTIONS(402), 12,
      anon_sym_void,
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
  [9197] = 10,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_DOT,
    ACTIONS(430), 1,
      anon_sym_LBRACK,
    ACTIONS(426), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(436), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(438), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(480), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(482), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(432), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(434), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9240] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(494), 1,
      anon_sym_RBRACK,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    STATE(261), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(280), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(284), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(484), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(282), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9288] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(498), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(280), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(284), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(484), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(282), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9336] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
    STATE(276), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(280), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(284), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(484), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(282), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9384] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(502), 1,
      anon_sym_RBRACK,
    STATE(280), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(280), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(284), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(484), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(282), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9432] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
    STATE(298), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(280), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(284), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(484), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(282), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9480] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
    STATE(277), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(280), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(284), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(484), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(282), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9528] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
    STATE(266), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(280), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(284), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(484), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(282), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9576] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(280), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(284), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(484), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(282), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9624] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(512), 1,
      anon_sym_RBRACK,
    STATE(319), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(280), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(284), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(484), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(282), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9672] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    STATE(208), 1,
      sym_block,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(280), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(284), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(484), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(282), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9717] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(280), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(284), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(484), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(516), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(282), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9760] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    STATE(224), 1,
      sym_block,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(280), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(284), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(484), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(282), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9805] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(518), 1,
      anon_sym_LBRACE,
    STATE(226), 1,
      sym_block,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(280), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(284), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(484), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(282), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9850] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(518), 1,
      anon_sym_LBRACE,
    STATE(209), 1,
      sym_block,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(280), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(284), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(484), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(282), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9895] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(520), 1,
      anon_sym_to,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(280), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(284), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(484), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(282), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9937] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(522), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(280), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(284), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(484), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(282), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9979] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(524), 1,
      anon_sym_COLON,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(280), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(284), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(484), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(282), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10021] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(526), 1,
      anon_sym_RBRACK,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(280), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(284), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(484), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(282), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10063] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(528), 1,
      anon_sym_RBRACK,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(280), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(284), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(484), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(282), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10105] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_RBRACK,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(280), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(284), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(484), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(282), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10147] = 9,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_LF,
    ACTIONS(536), 1,
      anon_sym_elif,
    ACTIONS(538), 1,
      anon_sym_else,
    STATE(213), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(220), 1,
      sym_elif_clause,
    STATE(250), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(279), 1,
      sym_else_clause,
    ACTIONS(534), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [10176] = 10,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(540), 1,
      ts_builtin_sym_end,
    ACTIONS(542), 1,
      anon_sym_LF,
    ACTIONS(544), 1,
      anon_sym_elif,
    ACTIONS(546), 1,
      anon_sym_else,
    STATE(212), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(218), 1,
      sym_elif_clause,
    STATE(242), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(333), 1,
      sym_else_clause,
  [10207] = 10,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_elif,
    ACTIONS(546), 1,
      anon_sym_else,
    ACTIONS(548), 1,
      ts_builtin_sym_end,
    ACTIONS(550), 1,
      anon_sym_LF,
    ACTIONS(552), 1,
      anon_sym_SEMI,
    STATE(211), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(215), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(218), 1,
      sym_elif_clause,
    STATE(282), 1,
      sym_else_clause,
  [10238] = 9,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_elif,
    ACTIONS(538), 1,
      anon_sym_else,
    ACTIONS(554), 1,
      anon_sym_LF,
    STATE(210), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(214), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(220), 1,
      sym_elif_clause,
    STATE(262), 1,
      sym_else_clause,
    ACTIONS(552), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [10267] = 9,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_elif,
    ACTIONS(538), 1,
      anon_sym_else,
    ACTIONS(556), 1,
      anon_sym_LF,
    STATE(213), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(220), 1,
      sym_elif_clause,
    STATE(234), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(272), 1,
      sym_else_clause,
    ACTIONS(558), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [10296] = 10,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_elif,
    ACTIONS(546), 1,
      anon_sym_else,
    ACTIONS(558), 1,
      anon_sym_SEMI,
    ACTIONS(560), 1,
      ts_builtin_sym_end,
    ACTIONS(562), 1,
      anon_sym_LF,
    STATE(212), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(218), 1,
      sym_elif_clause,
    STATE(230), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(311), 1,
      sym_else_clause,
  [10327] = 6,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_elif,
    STATE(212), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(218), 1,
      sym_elif_clause,
    ACTIONS(564), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(566), 2,
      anon_sym_SEMI,
      anon_sym_else,
  [10348] = 6,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_LF,
    ACTIONS(571), 1,
      anon_sym_elif,
    STATE(213), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(220), 1,
      sym_elif_clause,
    ACTIONS(566), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_else,
  [10369] = 8,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_elif,
    ACTIONS(538), 1,
      anon_sym_else,
    ACTIONS(574), 1,
      anon_sym_LF,
    STATE(206), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(220), 1,
      sym_elif_clause,
    STATE(233), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(270), 1,
      sym_else_clause,
  [10394] = 8,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_elif,
    ACTIONS(546), 1,
      anon_sym_else,
    ACTIONS(574), 1,
      anon_sym_LF,
    STATE(207), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(218), 1,
      sym_elif_clause,
    STATE(233), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(304), 1,
      sym_else_clause,
  [10419] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_COLON,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    STATE(216), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(480), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [10438] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_LF,
    ACTIONS(581), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
  [10451] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(583), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(585), 3,
      anon_sym_SEMI,
      anon_sym_elif,
      anon_sym_else,
  [10464] = 5,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_SEMI,
    ACTIONS(587), 1,
      anon_sym_COMMA,
    STATE(219), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(480), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [10481] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_LF,
    ACTIONS(585), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
  [10494] = 5,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(590), 1,
      anon_sym_LF,
    STATE(223), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(592), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [10511] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_LF,
    ACTIONS(596), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
  [10524] = 5,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_LF,
    ACTIONS(598), 1,
      anon_sym_COMMA,
    STATE(223), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(482), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [10541] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(601), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(603), 3,
      anon_sym_SEMI,
      anon_sym_elif,
      anon_sym_else,
  [10554] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(592), 1,
      anon_sym_COLON,
    STATE(216), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(590), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [10571] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_LF,
    ACTIONS(603), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
  [10584] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(594), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(596), 3,
      anon_sym_SEMI,
      anon_sym_elif,
      anon_sym_else,
  [10597] = 5,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    ACTIONS(592), 1,
      anon_sym_SEMI,
    STATE(219), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(590), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [10614] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(579), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(581), 3,
      anon_sym_SEMI,
      anon_sym_elif,
      anon_sym_else,
  [10627] = 5,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_else,
    ACTIONS(574), 1,
      anon_sym_LF,
    STATE(233), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(332), 1,
      sym_else_clause,
  [10643] = 4,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    STATE(237), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(607), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [10657] = 5,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_LF,
    ACTIONS(611), 1,
      anon_sym_SEMI,
    ACTIONS(613), 1,
      anon_sym_RBRACE,
    STATE(252), 1,
      aux_sym__statement_list_repeat1,
  [10673] = 4,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LF,
    STATE(233), 1,
      aux_sym__if_elif_stmt_repeat1,
    ACTIONS(618), 2,
      anon_sym_elif,
      anon_sym_else,
  [10687] = 5,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_else,
    ACTIONS(574), 1,
      anon_sym_LF,
    STATE(233), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(281), 1,
      sym_else_clause,
  [10703] = 4,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    STATE(247), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(622), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [10717] = 4,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_SQUOTE,
    STATE(236), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(626), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [10731] = 4,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_SQUOTE,
    STATE(236), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(631), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [10745] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_RPAREN,
    ACTIONS(635), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      anon_sym_STAR,
    STATE(246), 1,
      aux_sym_func_spec_repeat1,
  [10761] = 5,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_DQUOTE,
    ACTIONS(641), 1,
      sym_escape_sequence,
    ACTIONS(644), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(239), 1,
      aux_sym__quoted_string_content_double,
  [10777] = 5,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_DQUOTE,
    ACTIONS(647), 1,
      sym_escape_sequence,
    ACTIONS(649), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(239), 1,
      aux_sym__quoted_string_content_double,
  [10793] = 5,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_DQUOTE,
    ACTIONS(653), 1,
      sym_escape_sequence,
    ACTIONS(655), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(254), 1,
      aux_sym__quoted_string_content_double,
  [10809] = 5,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_else,
    ACTIONS(574), 1,
      anon_sym_LF,
    STATE(233), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(313), 1,
      sym_else_clause,
  [10825] = 4,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_SQUOTE,
    STATE(236), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(631), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [10839] = 5,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_LF,
    ACTIONS(661), 1,
      anon_sym_SEMI,
    ACTIONS(663), 1,
      anon_sym_RBRACE,
    STATE(232), 1,
      aux_sym__statement_list_repeat1,
  [10855] = 5,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(665), 1,
      sym_escape_sequence,
    ACTIONS(667), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(240), 1,
      aux_sym__quoted_string_content_double,
  [10871] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_COMMA,
    STATE(246), 1,
      aux_sym_func_spec_repeat1,
    ACTIONS(669), 2,
      anon_sym_RPAREN,
      anon_sym_STAR,
  [10885] = 4,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    STATE(236), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(631), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [10899] = 5,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(647), 1,
      sym_escape_sequence,
    ACTIONS(649), 1,
      aux_sym__quoted_string_content_double_token1,
    ACTIONS(674), 1,
      anon_sym_DQUOTE,
    STATE(239), 1,
      aux_sym__quoted_string_content_double,
  [10915] = 5,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_DQUOTE,
    ACTIONS(676), 1,
      sym_escape_sequence,
    ACTIONS(678), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(248), 1,
      aux_sym__quoted_string_content_double,
  [10931] = 5,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_else,
    ACTIONS(574), 1,
      anon_sym_LF,
    STATE(233), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(284), 1,
      sym_else_clause,
  [10947] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_COMMA,
    ACTIONS(680), 1,
      anon_sym_RPAREN,
    ACTIONS(682), 1,
      anon_sym_STAR,
    STATE(238), 1,
      aux_sym_func_spec_repeat1,
  [10963] = 5,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_LF,
    ACTIONS(687), 1,
      anon_sym_SEMI,
    ACTIONS(690), 1,
      anon_sym_RBRACE,
    STATE(252), 1,
      aux_sym__statement_list_repeat1,
  [10979] = 4,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_SQUOTE,
    STATE(243), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(692), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [10993] = 5,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(647), 1,
      sym_escape_sequence,
    ACTIONS(649), 1,
      aux_sym__quoted_string_content_double_token1,
    ACTIONS(657), 1,
      anon_sym_DQUOTE,
    STATE(239), 1,
      aux_sym__quoted_string_content_double,
  [11009] = 4,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(694), 1,
      aux_sym_other_lit_token1,
    ACTIONS(696), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(268), 1,
      aux_sym_other_lit_repeat1,
  [11022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(698), 1,
      anon_sym_RPAREN,
    STATE(216), 1,
      aux_sym_expression_list_repeat1,
  [11035] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_SEMI,
    ACTIONS(700), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [11046] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_COMMA,
    ACTIONS(706), 1,
      anon_sym_RBRACE,
    STATE(278), 1,
      aux_sym_dict_literal_repeat1,
  [11059] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_LF,
    ACTIONS(710), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11070] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_LF,
    ACTIONS(690), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11081] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(714), 1,
      anon_sym_RBRACK,
    STATE(216), 1,
      aux_sym_expression_list_repeat1,
  [11094] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_LF,
    ACTIONS(718), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11105] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_SEMI,
    ACTIONS(344), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [11116] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_SEMI,
    ACTIONS(720), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [11127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_COMMA,
    ACTIONS(727), 1,
      anon_sym_RBRACE,
    STATE(265), 1,
      aux_sym_dict_literal_repeat1,
  [11140] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
    STATE(216), 1,
      aux_sym_expression_list_repeat1,
  [11153] = 4,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(731), 1,
      aux_sym_other_lit_token1,
    STATE(292), 1,
      aux_sym_other_lit_repeat1,
  [11166] = 4,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(733), 1,
      aux_sym_other_lit_token1,
    ACTIONS(736), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(268), 1,
      aux_sym_other_lit_repeat1,
  [11179] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_LF,
    ACTIONS(740), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11190] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_LF,
    ACTIONS(744), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11201] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_SEMI,
    ACTIONS(708), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [11212] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_LF,
    ACTIONS(748), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11223] = 4,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(750), 1,
      ts_builtin_sym_end,
    ACTIONS(752), 1,
      anon_sym_LF,
    ACTIONS(754), 1,
      anon_sym_SEMI,
  [11236] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_SEMI,
    ACTIONS(756), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [11247] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_COMMA,
    ACTIONS(760), 1,
      anon_sym_RBRACE,
    STATE(265), 1,
      aux_sym_dict_literal_repeat1,
  [11260] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(762), 1,
      anon_sym_RPAREN,
    STATE(216), 1,
      aux_sym_expression_list_repeat1,
  [11273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(764), 1,
      anon_sym_RPAREN,
    STATE(216), 1,
      aux_sym_expression_list_repeat1,
  [11286] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_COMMA,
    ACTIONS(766), 1,
      anon_sym_RBRACE,
    STATE(265), 1,
      aux_sym_dict_literal_repeat1,
  [11299] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_LF,
    ACTIONS(770), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11310] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(772), 1,
      anon_sym_RBRACK,
    STATE(216), 1,
      aux_sym_expression_list_repeat1,
  [11323] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_LF,
    ACTIONS(776), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11334] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_SEMI,
    ACTIONS(716), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [11345] = 4,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(694), 1,
      aux_sym_other_lit_token1,
    ACTIONS(778), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(268), 1,
      aux_sym_other_lit_repeat1,
  [11358] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_LF,
    ACTIONS(782), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11369] = 4,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(731), 1,
      aux_sym_other_lit_token1,
    ACTIONS(778), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(292), 1,
      aux_sym_other_lit_repeat1,
  [11382] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_LF,
    ACTIONS(722), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11393] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      sym_identifier,
    ACTIONS(786), 1,
      anon_sym_RPAREN,
    STATE(297), 1,
      sym_param_spec,
  [11406] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_LF,
    ACTIONS(790), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11417] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_LF,
    ACTIONS(794), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11428] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_LF,
    ACTIONS(798), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11439] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_LF,
    ACTIONS(802), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11450] = 4,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(804), 1,
      aux_sym_other_lit_token1,
    STATE(292), 1,
      aux_sym_other_lit_repeat1,
  [11463] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_LF,
    ACTIONS(346), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11474] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_LF,
    ACTIONS(702), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_COLON,
    ACTIONS(807), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [11496] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_COMMA,
    ACTIONS(811), 1,
      anon_sym_RBRACE,
    STATE(275), 1,
      aux_sym_dict_literal_repeat1,
  [11509] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_RPAREN,
    ACTIONS(815), 1,
      anon_sym_COMMA,
    STATE(327), 1,
      aux_sym_function_declaration_repeat1,
  [11522] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(817), 1,
      anon_sym_RPAREN,
    STATE(216), 1,
      aux_sym_expression_list_repeat1,
  [11535] = 4,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(819), 1,
      aux_sym_other_lit_token1,
    ACTIONS(821), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(283), 1,
      aux_sym_other_lit_repeat1,
  [11548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_STAR,
  [11557] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_SEMI,
    ACTIONS(788), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [11568] = 4,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(823), 1,
      aux_sym_other_lit_token1,
    STATE(285), 1,
      aux_sym_other_lit_repeat1,
  [11581] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_SEMI,
    ACTIONS(738), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [11592] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_SEMI,
    ACTIONS(742), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [11603] = 4,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(825), 1,
      aux_sym_other_lit_token1,
    ACTIONS(827), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(267), 1,
      aux_sym_other_lit_repeat1,
  [11616] = 4,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(829), 1,
      aux_sym_other_lit_token1,
    STATE(255), 1,
      aux_sym_other_lit_repeat1,
  [11629] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_COMMA,
    ACTIONS(831), 1,
      anon_sym_RPAREN,
    STATE(314), 1,
      aux_sym_function_declaration_repeat1,
  [11642] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_LF,
    ACTIONS(758), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11653] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_COMMA,
    ACTIONS(833), 1,
      anon_sym_RPAREN,
    STATE(307), 1,
      aux_sym_function_declaration_repeat1,
  [11666] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_SEMI,
    ACTIONS(835), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [11677] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_SEMI,
    ACTIONS(746), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [11688] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_SEMI,
    ACTIONS(839), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [11699] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_SEMI,
    ACTIONS(780), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [11710] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_RPAREN,
    ACTIONS(845), 1,
      anon_sym_COMMA,
    STATE(314), 1,
      aux_sym_function_declaration_repeat1,
  [11723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      sym_identifier,
    ACTIONS(848), 1,
      anon_sym_RPAREN,
    STATE(309), 1,
      sym_param_spec,
  [11736] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_COMMA,
    ACTIONS(850), 1,
      anon_sym_RBRACE,
    STATE(265), 1,
      aux_sym_dict_literal_repeat1,
  [11749] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_SEMI,
    ACTIONS(852), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [11760] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(856), 1,
      anon_sym_RPAREN,
    STATE(216), 1,
      aux_sym_expression_list_repeat1,
  [11773] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(858), 1,
      anon_sym_RBRACK,
    STATE(216), 1,
      aux_sym_expression_list_repeat1,
  [11786] = 4,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_LF,
    ACTIONS(754), 1,
      anon_sym_SEMI,
  [11799] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_COLON,
    ACTIONS(862), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [11810] = 4,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(694), 1,
      aux_sym_other_lit_token1,
    ACTIONS(864), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(268), 1,
      aux_sym_other_lit_repeat1,
  [11823] = 4,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(731), 1,
      aux_sym_other_lit_token1,
    ACTIONS(864), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(292), 1,
      aux_sym_other_lit_repeat1,
  [11836] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_SEMI,
    ACTIONS(792), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [11847] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_SEMI,
    ACTIONS(796), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [11858] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_SEMI,
    ACTIONS(800), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [11869] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_COMMA,
    ACTIONS(866), 1,
      anon_sym_RPAREN,
    STATE(314), 1,
      aux_sym_function_declaration_repeat1,
  [11882] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_COMMA,
    ACTIONS(868), 1,
      anon_sym_RBRACE,
    STATE(316), 1,
      aux_sym_dict_literal_repeat1,
  [11895] = 4,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(870), 1,
      aux_sym_other_lit_token1,
    ACTIONS(872), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(323), 1,
      aux_sym_other_lit_repeat1,
  [11908] = 4,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(874), 1,
      aux_sym_other_lit_token1,
    STATE(322), 1,
      aux_sym_other_lit_repeat1,
  [11921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_COLON,
    ACTIONS(878), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [11932] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_SEMI,
    ACTIONS(774), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [11943] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_SEMI,
    ACTIONS(768), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [11954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    STATE(303), 1,
      sym_block,
  [11964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_LBRACE,
    STATE(259), 1,
      sym_block,
  [11974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_from,
    STATE(356), 1,
      sym_for_range_clause,
  [11984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      sym_identifier,
    STATE(346), 1,
      sym_param_spec,
  [11994] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    STATE(317), 1,
      sym_block,
  [12004] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_LF,
    ACTIONS(754), 1,
      anon_sym_SEMI,
  [12014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_LBRACE,
    STATE(269), 1,
      sym_block,
  [12024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_from,
    STATE(335), 1,
      sym_for_range_clause,
  [12034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      sym_identifier,
    STATE(69), 1,
      sym__field_identifier,
  [12044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    STATE(350), 1,
      sym_func_spec,
  [12054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    STATE(312), 1,
      sym_block,
  [12088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    STATE(310), 1,
      sym_block,
  [12098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [12106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_LBRACE,
    STATE(354), 1,
      sym_block,
  [12124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      sym_identifier,
    STATE(145), 1,
      sym__field_identifier,
  [12134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    STATE(134), 1,
      sym_func_spec,
  [12144] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_LF,
    ACTIONS(841), 1,
      anon_sym_SEMI,
  [12154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_LBRACE,
    STATE(358), 1,
      sym_block,
  [12164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    STATE(271), 1,
      sym_block,
  [12174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      sym_identifier,
    STATE(162), 1,
      sym__field_identifier,
  [12184] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_LF,
    ACTIONS(854), 1,
      anon_sym_SEMI,
  [12194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_LBRACE,
    STATE(360), 1,
      sym_block,
  [12204] = 3,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_LF,
    ACTIONS(837), 1,
      anon_sym_SEMI,
  [12214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_LPAREN,
  [12221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_LBRACK,
  [12228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_RPAREN,
  [12235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_DASH_GT,
  [12242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      sym_identifier,
  [12249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_LBRACK,
  [12256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      sym_identifier,
  [12263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_RBRACK,
  [12270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_DASH_GT,
  [12277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      anon_sym_RBRACK,
  [12284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_COMMA,
  [12291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_RBRACK,
  [12298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_RBRACE,
  [12305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      anon_sym_COMMA,
  [12312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_RBRACE,
  [12319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      sym_identifier,
  [12326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_DASH_GT,
  [12333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      ts_builtin_sym_end,
  [12340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      anon_sym_BQUOTE,
  [12347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_LPAREN,
  [12354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_DASH_GT,
  [12361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 1,
      anon_sym_LBRACK,
  [12368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      sym_identifier,
  [12375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_RPAREN,
  [12382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      sym_identifier,
  [12389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 125,
  [SMALL_STATE(4)] = 250,
  [SMALL_STATE(5)] = 372,
  [SMALL_STATE(6)] = 494,
  [SMALL_STATE(7)] = 613,
  [SMALL_STATE(8)] = 732,
  [SMALL_STATE(9)] = 848,
  [SMALL_STATE(10)] = 964,
  [SMALL_STATE(11)] = 1077,
  [SMALL_STATE(12)] = 1156,
  [SMALL_STATE(13)] = 1235,
  [SMALL_STATE(14)] = 1309,
  [SMALL_STATE(15)] = 1383,
  [SMALL_STATE(16)] = 1457,
  [SMALL_STATE(17)] = 1531,
  [SMALL_STATE(18)] = 1605,
  [SMALL_STATE(19)] = 1679,
  [SMALL_STATE(20)] = 1753,
  [SMALL_STATE(21)] = 1827,
  [SMALL_STATE(22)] = 1901,
  [SMALL_STATE(23)] = 1975,
  [SMALL_STATE(24)] = 2049,
  [SMALL_STATE(25)] = 2123,
  [SMALL_STATE(26)] = 2194,
  [SMALL_STATE(27)] = 2265,
  [SMALL_STATE(28)] = 2336,
  [SMALL_STATE(29)] = 2407,
  [SMALL_STATE(30)] = 2478,
  [SMALL_STATE(31)] = 2549,
  [SMALL_STATE(32)] = 2620,
  [SMALL_STATE(33)] = 2691,
  [SMALL_STATE(34)] = 2762,
  [SMALL_STATE(35)] = 2833,
  [SMALL_STATE(36)] = 2904,
  [SMALL_STATE(37)] = 2975,
  [SMALL_STATE(38)] = 3046,
  [SMALL_STATE(39)] = 3117,
  [SMALL_STATE(40)] = 3188,
  [SMALL_STATE(41)] = 3259,
  [SMALL_STATE(42)] = 3330,
  [SMALL_STATE(43)] = 3401,
  [SMALL_STATE(44)] = 3472,
  [SMALL_STATE(45)] = 3543,
  [SMALL_STATE(46)] = 3614,
  [SMALL_STATE(47)] = 3685,
  [SMALL_STATE(48)] = 3756,
  [SMALL_STATE(49)] = 3827,
  [SMALL_STATE(50)] = 3898,
  [SMALL_STATE(51)] = 3969,
  [SMALL_STATE(52)] = 4040,
  [SMALL_STATE(53)] = 4111,
  [SMALL_STATE(54)] = 4182,
  [SMALL_STATE(55)] = 4253,
  [SMALL_STATE(56)] = 4324,
  [SMALL_STATE(57)] = 4395,
  [SMALL_STATE(58)] = 4466,
  [SMALL_STATE(59)] = 4537,
  [SMALL_STATE(60)] = 4577,
  [SMALL_STATE(61)] = 4611,
  [SMALL_STATE(62)] = 4645,
  [SMALL_STATE(63)] = 4679,
  [SMALL_STATE(64)] = 4713,
  [SMALL_STATE(65)] = 4747,
  [SMALL_STATE(66)] = 4781,
  [SMALL_STATE(67)] = 4815,
  [SMALL_STATE(68)] = 4857,
  [SMALL_STATE(69)] = 4891,
  [SMALL_STATE(70)] = 4925,
  [SMALL_STATE(71)] = 4959,
  [SMALL_STATE(72)] = 5003,
  [SMALL_STATE(73)] = 5051,
  [SMALL_STATE(74)] = 5101,
  [SMALL_STATE(75)] = 5135,
  [SMALL_STATE(76)] = 5169,
  [SMALL_STATE(77)] = 5203,
  [SMALL_STATE(78)] = 5237,
  [SMALL_STATE(79)] = 5275,
  [SMALL_STATE(80)] = 5309,
  [SMALL_STATE(81)] = 5347,
  [SMALL_STATE(82)] = 5381,
  [SMALL_STATE(83)] = 5415,
  [SMALL_STATE(84)] = 5453,
  [SMALL_STATE(85)] = 5487,
  [SMALL_STATE(86)] = 5521,
  [SMALL_STATE(87)] = 5555,
  [SMALL_STATE(88)] = 5589,
  [SMALL_STATE(89)] = 5627,
  [SMALL_STATE(90)] = 5661,
  [SMALL_STATE(91)] = 5695,
  [SMALL_STATE(92)] = 5750,
  [SMALL_STATE(93)] = 5803,
  [SMALL_STATE(94)] = 5856,
  [SMALL_STATE(95)] = 5891,
  [SMALL_STATE(96)] = 5944,
  [SMALL_STATE(97)] = 5977,
  [SMALL_STATE(98)] = 6030,
  [SMALL_STATE(99)] = 6062,
  [SMALL_STATE(100)] = 6094,
  [SMALL_STATE(101)] = 6130,
  [SMALL_STATE(102)] = 6170,
  [SMALL_STATE(103)] = 6212,
  [SMALL_STATE(104)] = 6256,
  [SMALL_STATE(105)] = 6288,
  [SMALL_STATE(106)] = 6320,
  [SMALL_STATE(107)] = 6352,
  [SMALL_STATE(108)] = 6384,
  [SMALL_STATE(109)] = 6416,
  [SMALL_STATE(110)] = 6448,
  [SMALL_STATE(111)] = 6480,
  [SMALL_STATE(112)] = 6512,
  [SMALL_STATE(113)] = 6544,
  [SMALL_STATE(114)] = 6576,
  [SMALL_STATE(115)] = 6608,
  [SMALL_STATE(116)] = 6640,
  [SMALL_STATE(117)] = 6672,
  [SMALL_STATE(118)] = 6704,
  [SMALL_STATE(119)] = 6736,
  [SMALL_STATE(120)] = 6786,
  [SMALL_STATE(121)] = 6818,
  [SMALL_STATE(122)] = 6850,
  [SMALL_STATE(123)] = 6882,
  [SMALL_STATE(124)] = 6914,
  [SMALL_STATE(125)] = 6946,
  [SMALL_STATE(126)] = 6978,
  [SMALL_STATE(127)] = 7010,
  [SMALL_STATE(128)] = 7042,
  [SMALL_STATE(129)] = 7074,
  [SMALL_STATE(130)] = 7110,
  [SMALL_STATE(131)] = 7148,
  [SMALL_STATE(132)] = 7180,
  [SMALL_STATE(133)] = 7212,
  [SMALL_STATE(134)] = 7244,
  [SMALL_STATE(135)] = 7276,
  [SMALL_STATE(136)] = 7308,
  [SMALL_STATE(137)] = 7340,
  [SMALL_STATE(138)] = 7372,
  [SMALL_STATE(139)] = 7404,
  [SMALL_STATE(140)] = 7440,
  [SMALL_STATE(141)] = 7472,
  [SMALL_STATE(142)] = 7504,
  [SMALL_STATE(143)] = 7536,
  [SMALL_STATE(144)] = 7568,
  [SMALL_STATE(145)] = 7600,
  [SMALL_STATE(146)] = 7632,
  [SMALL_STATE(147)] = 7664,
  [SMALL_STATE(148)] = 7696,
  [SMALL_STATE(149)] = 7728,
  [SMALL_STATE(150)] = 7760,
  [SMALL_STATE(151)] = 7792,
  [SMALL_STATE(152)] = 7824,
  [SMALL_STATE(153)] = 7856,
  [SMALL_STATE(154)] = 7888,
  [SMALL_STATE(155)] = 7920,
  [SMALL_STATE(156)] = 7952,
  [SMALL_STATE(157)] = 7996,
  [SMALL_STATE(158)] = 8038,
  [SMALL_STATE(159)] = 8078,
  [SMALL_STATE(160)] = 8114,
  [SMALL_STATE(161)] = 8146,
  [SMALL_STATE(162)] = 8178,
  [SMALL_STATE(163)] = 8210,
  [SMALL_STATE(164)] = 8242,
  [SMALL_STATE(165)] = 8274,
  [SMALL_STATE(166)] = 8306,
  [SMALL_STATE(167)] = 8344,
  [SMALL_STATE(168)] = 8376,
  [SMALL_STATE(169)] = 8425,
  [SMALL_STATE(170)] = 8474,
  [SMALL_STATE(171)] = 8523,
  [SMALL_STATE(172)] = 8572,
  [SMALL_STATE(173)] = 8621,
  [SMALL_STATE(174)] = 8670,
  [SMALL_STATE(175)] = 8719,
  [SMALL_STATE(176)] = 8768,
  [SMALL_STATE(177)] = 8817,
  [SMALL_STATE(178)] = 8866,
  [SMALL_STATE(179)] = 8915,
  [SMALL_STATE(180)] = 8964,
  [SMALL_STATE(181)] = 9013,
  [SMALL_STATE(182)] = 9061,
  [SMALL_STATE(183)] = 9109,
  [SMALL_STATE(184)] = 9152,
  [SMALL_STATE(185)] = 9197,
  [SMALL_STATE(186)] = 9240,
  [SMALL_STATE(187)] = 9288,
  [SMALL_STATE(188)] = 9336,
  [SMALL_STATE(189)] = 9384,
  [SMALL_STATE(190)] = 9432,
  [SMALL_STATE(191)] = 9480,
  [SMALL_STATE(192)] = 9528,
  [SMALL_STATE(193)] = 9576,
  [SMALL_STATE(194)] = 9624,
  [SMALL_STATE(195)] = 9672,
  [SMALL_STATE(196)] = 9717,
  [SMALL_STATE(197)] = 9760,
  [SMALL_STATE(198)] = 9805,
  [SMALL_STATE(199)] = 9850,
  [SMALL_STATE(200)] = 9895,
  [SMALL_STATE(201)] = 9937,
  [SMALL_STATE(202)] = 9979,
  [SMALL_STATE(203)] = 10021,
  [SMALL_STATE(204)] = 10063,
  [SMALL_STATE(205)] = 10105,
  [SMALL_STATE(206)] = 10147,
  [SMALL_STATE(207)] = 10176,
  [SMALL_STATE(208)] = 10207,
  [SMALL_STATE(209)] = 10238,
  [SMALL_STATE(210)] = 10267,
  [SMALL_STATE(211)] = 10296,
  [SMALL_STATE(212)] = 10327,
  [SMALL_STATE(213)] = 10348,
  [SMALL_STATE(214)] = 10369,
  [SMALL_STATE(215)] = 10394,
  [SMALL_STATE(216)] = 10419,
  [SMALL_STATE(217)] = 10438,
  [SMALL_STATE(218)] = 10451,
  [SMALL_STATE(219)] = 10464,
  [SMALL_STATE(220)] = 10481,
  [SMALL_STATE(221)] = 10494,
  [SMALL_STATE(222)] = 10511,
  [SMALL_STATE(223)] = 10524,
  [SMALL_STATE(224)] = 10541,
  [SMALL_STATE(225)] = 10554,
  [SMALL_STATE(226)] = 10571,
  [SMALL_STATE(227)] = 10584,
  [SMALL_STATE(228)] = 10597,
  [SMALL_STATE(229)] = 10614,
  [SMALL_STATE(230)] = 10627,
  [SMALL_STATE(231)] = 10643,
  [SMALL_STATE(232)] = 10657,
  [SMALL_STATE(233)] = 10673,
  [SMALL_STATE(234)] = 10687,
  [SMALL_STATE(235)] = 10703,
  [SMALL_STATE(236)] = 10717,
  [SMALL_STATE(237)] = 10731,
  [SMALL_STATE(238)] = 10745,
  [SMALL_STATE(239)] = 10761,
  [SMALL_STATE(240)] = 10777,
  [SMALL_STATE(241)] = 10793,
  [SMALL_STATE(242)] = 10809,
  [SMALL_STATE(243)] = 10825,
  [SMALL_STATE(244)] = 10839,
  [SMALL_STATE(245)] = 10855,
  [SMALL_STATE(246)] = 10871,
  [SMALL_STATE(247)] = 10885,
  [SMALL_STATE(248)] = 10899,
  [SMALL_STATE(249)] = 10915,
  [SMALL_STATE(250)] = 10931,
  [SMALL_STATE(251)] = 10947,
  [SMALL_STATE(252)] = 10963,
  [SMALL_STATE(253)] = 10979,
  [SMALL_STATE(254)] = 10993,
  [SMALL_STATE(255)] = 11009,
  [SMALL_STATE(256)] = 11022,
  [SMALL_STATE(257)] = 11035,
  [SMALL_STATE(258)] = 11046,
  [SMALL_STATE(259)] = 11059,
  [SMALL_STATE(260)] = 11070,
  [SMALL_STATE(261)] = 11081,
  [SMALL_STATE(262)] = 11094,
  [SMALL_STATE(263)] = 11105,
  [SMALL_STATE(264)] = 11116,
  [SMALL_STATE(265)] = 11127,
  [SMALL_STATE(266)] = 11140,
  [SMALL_STATE(267)] = 11153,
  [SMALL_STATE(268)] = 11166,
  [SMALL_STATE(269)] = 11179,
  [SMALL_STATE(270)] = 11190,
  [SMALL_STATE(271)] = 11201,
  [SMALL_STATE(272)] = 11212,
  [SMALL_STATE(273)] = 11223,
  [SMALL_STATE(274)] = 11236,
  [SMALL_STATE(275)] = 11247,
  [SMALL_STATE(276)] = 11260,
  [SMALL_STATE(277)] = 11273,
  [SMALL_STATE(278)] = 11286,
  [SMALL_STATE(279)] = 11299,
  [SMALL_STATE(280)] = 11310,
  [SMALL_STATE(281)] = 11323,
  [SMALL_STATE(282)] = 11334,
  [SMALL_STATE(283)] = 11345,
  [SMALL_STATE(284)] = 11358,
  [SMALL_STATE(285)] = 11369,
  [SMALL_STATE(286)] = 11382,
  [SMALL_STATE(287)] = 11393,
  [SMALL_STATE(288)] = 11406,
  [SMALL_STATE(289)] = 11417,
  [SMALL_STATE(290)] = 11428,
  [SMALL_STATE(291)] = 11439,
  [SMALL_STATE(292)] = 11450,
  [SMALL_STATE(293)] = 11463,
  [SMALL_STATE(294)] = 11474,
  [SMALL_STATE(295)] = 11485,
  [SMALL_STATE(296)] = 11496,
  [SMALL_STATE(297)] = 11509,
  [SMALL_STATE(298)] = 11522,
  [SMALL_STATE(299)] = 11535,
  [SMALL_STATE(300)] = 11548,
  [SMALL_STATE(301)] = 11557,
  [SMALL_STATE(302)] = 11568,
  [SMALL_STATE(303)] = 11581,
  [SMALL_STATE(304)] = 11592,
  [SMALL_STATE(305)] = 11603,
  [SMALL_STATE(306)] = 11616,
  [SMALL_STATE(307)] = 11629,
  [SMALL_STATE(308)] = 11642,
  [SMALL_STATE(309)] = 11653,
  [SMALL_STATE(310)] = 11666,
  [SMALL_STATE(311)] = 11677,
  [SMALL_STATE(312)] = 11688,
  [SMALL_STATE(313)] = 11699,
  [SMALL_STATE(314)] = 11710,
  [SMALL_STATE(315)] = 11723,
  [SMALL_STATE(316)] = 11736,
  [SMALL_STATE(317)] = 11749,
  [SMALL_STATE(318)] = 11760,
  [SMALL_STATE(319)] = 11773,
  [SMALL_STATE(320)] = 11786,
  [SMALL_STATE(321)] = 11799,
  [SMALL_STATE(322)] = 11810,
  [SMALL_STATE(323)] = 11823,
  [SMALL_STATE(324)] = 11836,
  [SMALL_STATE(325)] = 11847,
  [SMALL_STATE(326)] = 11858,
  [SMALL_STATE(327)] = 11869,
  [SMALL_STATE(328)] = 11882,
  [SMALL_STATE(329)] = 11895,
  [SMALL_STATE(330)] = 11908,
  [SMALL_STATE(331)] = 11921,
  [SMALL_STATE(332)] = 11932,
  [SMALL_STATE(333)] = 11943,
  [SMALL_STATE(334)] = 11954,
  [SMALL_STATE(335)] = 11964,
  [SMALL_STATE(336)] = 11974,
  [SMALL_STATE(337)] = 11984,
  [SMALL_STATE(338)] = 11994,
  [SMALL_STATE(339)] = 12004,
  [SMALL_STATE(340)] = 12014,
  [SMALL_STATE(341)] = 12024,
  [SMALL_STATE(342)] = 12034,
  [SMALL_STATE(343)] = 12044,
  [SMALL_STATE(344)] = 12054,
  [SMALL_STATE(345)] = 12062,
  [SMALL_STATE(346)] = 12070,
  [SMALL_STATE(347)] = 12078,
  [SMALL_STATE(348)] = 12088,
  [SMALL_STATE(349)] = 12098,
  [SMALL_STATE(350)] = 12106,
  [SMALL_STATE(351)] = 12114,
  [SMALL_STATE(352)] = 12124,
  [SMALL_STATE(353)] = 12134,
  [SMALL_STATE(354)] = 12144,
  [SMALL_STATE(355)] = 12154,
  [SMALL_STATE(356)] = 12164,
  [SMALL_STATE(357)] = 12174,
  [SMALL_STATE(358)] = 12184,
  [SMALL_STATE(359)] = 12194,
  [SMALL_STATE(360)] = 12204,
  [SMALL_STATE(361)] = 12214,
  [SMALL_STATE(362)] = 12221,
  [SMALL_STATE(363)] = 12228,
  [SMALL_STATE(364)] = 12235,
  [SMALL_STATE(365)] = 12242,
  [SMALL_STATE(366)] = 12249,
  [SMALL_STATE(367)] = 12256,
  [SMALL_STATE(368)] = 12263,
  [SMALL_STATE(369)] = 12270,
  [SMALL_STATE(370)] = 12277,
  [SMALL_STATE(371)] = 12284,
  [SMALL_STATE(372)] = 12291,
  [SMALL_STATE(373)] = 12298,
  [SMALL_STATE(374)] = 12305,
  [SMALL_STATE(375)] = 12312,
  [SMALL_STATE(376)] = 12319,
  [SMALL_STATE(377)] = 12326,
  [SMALL_STATE(378)] = 12333,
  [SMALL_STATE(379)] = 12340,
  [SMALL_STATE(380)] = 12347,
  [SMALL_STATE(381)] = 12354,
  [SMALL_STATE(382)] = 12361,
  [SMALL_STATE(383)] = 12368,
  [SMALL_STATE(384)] = 12375,
  [SMALL_STATE(385)] = 12382,
  [SMALL_STATE(386)] = 12389,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(294),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(385),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(386),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(98),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(122),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(293),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(241),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(253),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(302),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(299),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 6),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 6),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_expression, 4, .production_id = 17),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_expression, 4, .production_id = 17),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 3),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 8),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 8),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 9),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_identifier, 1, .production_id = 9),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 10),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, .production_id = 10),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 4),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 4),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 4),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_literal, 4),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_literal, 4),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_literal, 4),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_literal, 3),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_literal, 3),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 2),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 5),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 5),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_literal, 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_composite_literal, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_false, 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_false, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_true, 1),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_true, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expression_list, 1), SHIFT(41),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 1),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(168),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(147),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(147),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(365),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(94),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(366),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(382),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(362),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(353),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 1),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 1),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 5),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 5),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 4),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 4),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_spec, 8),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_spec, 8),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec_r, 2),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_spec_r, 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_spec, 7),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_spec, 7),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_spec, 6),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_spec, 6),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_spec, 5),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_spec, 5),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 6),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 6),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 2),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec_r, 1),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_spec_r, 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_kv, 3, .production_id = 11),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_range_clause, 4, .production_id = 24),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_stmt, 5, .production_id = 20),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_stmt, 5, .production_id = 20),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_stmt, 3, .production_id = 7),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_stmt, 3, .production_id = 7),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_stmt, 4, .production_id = 15),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_stmt, 4, .production_id = 15),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 2, .production_id = 22),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 2, .production_id = 22),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 2, .production_id = 22), SHIFT_REPEAT(34),
  [571] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 2, .production_id = 22), SHIFT_REPEAT(50),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(58),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 1, .production_id = 13),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 1, .production_id = 13),
  [587] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(42),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 2),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [598] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(37),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_clause, 3, .production_id = 7),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif_clause, 3, .production_id = 7),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__if_elif_stmt_repeat1, 2), SHIFT_REPEAT(233),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__if_elif_stmt_repeat1, 2),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_content_single, 2),
  [626] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_content_single, 2), SHIFT_REPEAT(236),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_content_double, 2),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_content_double, 2), SHIFT_REPEAT(239),
  [644] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_content_double, 2), SHIFT_REPEAT(239),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_spec_repeat1, 2),
  [671] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_spec_repeat1, 2), SHIFT_REPEAT(178),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [684] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(10),
  [687] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(10),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_statement, 1),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_statement, 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 4, .production_id = 12),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 4, .production_id = 12),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_else_stmt, 4, .production_id = 14),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_else_stmt, 4, .production_id = 14),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [724] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_literal_repeat1, 2), SHIFT_REPEAT(14),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_literal_repeat1, 2),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [733] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_other_lit_repeat1, 2), SHIFT_REPEAT(268),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_other_lit_repeat1, 2),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2, .production_id = 18),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2, .production_id = 18),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_else_stmt, 5, .production_id = 19),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_else_stmt, 5, .production_id = 19),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_else_stmt, 5, .production_id = 21),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_else_stmt, 5, .production_id = 21),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3, .production_id = 8),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 3, .production_id = 8),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_else_stmt, 6, .production_id = 25),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_else_stmt, 6, .production_id = 25),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_else_stmt, 6, .production_id = 26),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_else_stmt, 6, .production_id = 26),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_else_stmt, 7, .production_id = 29),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_else_stmt, 7, .production_id = 29),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1, .production_id = 4),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1, .production_id = 4),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1, .production_id = 3),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1, .production_id = 3),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1, .production_id = 2),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1, .production_id = 2),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1, .production_id = 1),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1, .production_id = 1),
  [804] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_other_lit_repeat1, 2), SHIFT_REPEAT(292),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_spec, 1, .production_id = 16),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, .production_id = 30),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 7, .production_id = 30),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 23),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 5, .production_id = 23),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2),
  [845] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2), SHIFT_REPEAT(337),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 28),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, .production_id = 28),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec, 1),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_spec, 3, .production_id = 27),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec, 2),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [926] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
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
