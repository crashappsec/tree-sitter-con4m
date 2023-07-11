#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 535
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 143
#define ALIAS_COUNT 0
#define TOKEN_COUNT 80
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 22
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 35

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
  anon_sym_var = 57,
  anon_sym_export = 58,
  sym_comment = 59,
  anon_sym_LT_LT = 60,
  aux_sym_other_lit_token1 = 61,
  anon_sym_GT_GT = 62,
  sym_int_literal = 63,
  sym_float_literal = 64,
  sym_imaginary_literal = 65,
  anon_sym_true = 66,
  anon_sym_True = 67,
  anon_sym_false = 68,
  anon_sym_False = 69,
  sym_continue_statement = 70,
  sym_break_statement = 71,
  anon_sym_return = 72,
  anon_sym_DQUOTE = 73,
  anon_sym_SQUOTE = 74,
  sym_escape_sequence = 75,
  aux_sym__quoted_string_content_double_token1 = 76,
  aux_sym__quoted_string_content_single_token1 = 77,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 78,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 79,
  sym_source_file = 80,
  sym__top_level_item = 81,
  sym__declaration = 82,
  sym__statement = 83,
  sym_unary_expression = 84,
  sym__expression = 85,
  sym_composite_literal = 86,
  sym_selector_expression = 87,
  sym_index_expression = 88,
  sym_parenthesized_expression = 89,
  sym_expression_list = 90,
  sym_block = 91,
  sym__statement_list = 92,
  sym_assignment_statement = 93,
  sym_enum_declaration = 94,
  sym_for_statement = 95,
  sym_for_range_clause = 96,
  sym_call_expression = 97,
  sym_argument_list = 98,
  sym_if_statement = 99,
  sym__if_stmt = 100,
  sym__if_elif_stmt = 101,
  sym__if_elif_else_stmt = 102,
  sym__if_else_stmt = 103,
  sym_elif_clause = 104,
  sym_else_clause = 105,
  sym_binary_expression = 106,
  sym_base_type_spec = 107,
  sym_type_spec = 108,
  sym_type_spec_r = 109,
  sym_func_spec = 110,
  sym_section = 111,
  sym_function_declaration = 112,
  sym_var_declaration = 113,
  sym_var_decl_item = 114,
  sym_param_spec = 115,
  sym_export_statement = 116,
  sym_tuple_literal = 117,
  sym_list_literal = 118,
  sym_dict_literal = 119,
  sym_dict_kv = 120,
  sym_true = 121,
  sym_false = 122,
  sym_return_statement = 123,
  sym_quoted_string = 124,
  aux_sym__quoted_string_content_double = 125,
  aux_sym__quoted_string_content_single = 126,
  sym_multiline_string = 127,
  sym_string_literal = 128,
  sym_field_identifier = 129,
  aux_sym_source_file_repeat1 = 130,
  aux_sym_source_file_repeat2 = 131,
  aux_sym_expression_list_repeat1 = 132,
  aux_sym__statement_list_repeat1 = 133,
  aux_sym_enum_declaration_repeat1 = 134,
  aux_sym__if_elif_stmt_repeat1 = 135,
  aux_sym__if_elif_stmt_repeat2 = 136,
  aux_sym_base_type_spec_repeat1 = 137,
  aux_sym_func_spec_repeat1 = 138,
  aux_sym_function_declaration_repeat1 = 139,
  aux_sym_var_declaration_repeat1 = 140,
  aux_sym_other_lit_repeat1 = 141,
  aux_sym_dict_literal_repeat1 = 142,
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
  [anon_sym_var] = "var",
  [anon_sym_export] = "export",
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
  [sym_enum_declaration] = "enum_declaration",
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
  [sym_section] = "section",
  [sym_function_declaration] = "function_declaration",
  [sym_var_declaration] = "var_declaration",
  [sym_var_decl_item] = "var_decl_item",
  [sym_param_spec] = "param_spec",
  [sym_export_statement] = "export_statement",
  [sym_tuple_literal] = "tuple_literal",
  [sym_list_literal] = "list_literal",
  [sym_dict_literal] = "dict_literal",
  [sym_dict_kv] = "dict_kv",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_return_statement] = "return_statement",
  [sym_quoted_string] = "quoted_string",
  [aux_sym__quoted_string_content_double] = "_quoted_string_content_double",
  [aux_sym__quoted_string_content_single] = "_quoted_string_content_single",
  [sym_multiline_string] = "multiline_string",
  [sym_string_literal] = "string_literal",
  [sym_field_identifier] = "field_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
  [aux_sym__statement_list_repeat1] = "_statement_list_repeat1",
  [aux_sym_enum_declaration_repeat1] = "enum_declaration_repeat1",
  [aux_sym__if_elif_stmt_repeat1] = "_if_elif_stmt_repeat1",
  [aux_sym__if_elif_stmt_repeat2] = "_if_elif_stmt_repeat2",
  [aux_sym_base_type_spec_repeat1] = "base_type_spec_repeat1",
  [aux_sym_func_spec_repeat1] = "func_spec_repeat1",
  [aux_sym_function_declaration_repeat1] = "function_declaration_repeat1",
  [aux_sym_var_declaration_repeat1] = "var_declaration_repeat1",
  [aux_sym_other_lit_repeat1] = "other_lit_repeat1",
  [aux_sym_dict_literal_repeat1] = "dict_literal_repeat1",
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
  [anon_sym_var] = anon_sym_var,
  [anon_sym_export] = anon_sym_export,
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
  [sym_enum_declaration] = sym_enum_declaration,
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
  [sym_section] = sym_section,
  [sym_function_declaration] = sym_function_declaration,
  [sym_var_declaration] = sym_var_declaration,
  [sym_var_decl_item] = sym_var_decl_item,
  [sym_param_spec] = sym_param_spec,
  [sym_export_statement] = sym_export_statement,
  [sym_tuple_literal] = sym_tuple_literal,
  [sym_list_literal] = sym_list_literal,
  [sym_dict_literal] = sym_dict_literal,
  [sym_dict_kv] = sym_dict_kv,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_return_statement] = sym_return_statement,
  [sym_quoted_string] = sym_quoted_string,
  [aux_sym__quoted_string_content_double] = aux_sym__quoted_string_content_double,
  [aux_sym__quoted_string_content_single] = aux_sym__quoted_string_content_single,
  [sym_multiline_string] = sym_multiline_string,
  [sym_string_literal] = sym_string_literal,
  [sym_field_identifier] = sym_field_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
  [aux_sym__statement_list_repeat1] = aux_sym__statement_list_repeat1,
  [aux_sym_enum_declaration_repeat1] = aux_sym_enum_declaration_repeat1,
  [aux_sym__if_elif_stmt_repeat1] = aux_sym__if_elif_stmt_repeat1,
  [aux_sym__if_elif_stmt_repeat2] = aux_sym__if_elif_stmt_repeat2,
  [aux_sym_base_type_spec_repeat1] = aux_sym_base_type_spec_repeat1,
  [aux_sym_func_spec_repeat1] = aux_sym_func_spec_repeat1,
  [aux_sym_function_declaration_repeat1] = aux_sym_function_declaration_repeat1,
  [aux_sym_var_declaration_repeat1] = aux_sym_var_declaration_repeat1,
  [aux_sym_other_lit_repeat1] = aux_sym_other_lit_repeat1,
  [aux_sym_dict_literal_repeat1] = aux_sym_dict_literal_repeat1,
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
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
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
  [sym_enum_declaration] = {
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
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_var_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_var_decl_item] = {
    .visible = true,
    .named = true,
  },
  [sym_param_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_export_statement] = {
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
  [sym_field_identifier] = {
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
  [aux_sym_expression_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__statement_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_declaration_repeat1] = {
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
  [aux_sym_var_declaration_repeat1] = {
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
  field_section_name = 19,
  field_section_type = 20,
  field_type = 21,
  field_value = 22,
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
  [field_section_name] = "section_name",
  [field_section_type] = "section_type",
  [field_type] = "type",
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
  [8] = {.index = 18, .length = 2},
  [9] = {.index = 20, .length = 3},
  [10] = {.index = 23, .length = 3},
  [12] = {.index = 26, .length = 2},
  [13] = {.index = 28, .length = 2},
  [14] = {.index = 30, .length = 1},
  [15] = {.index = 31, .length = 1},
  [16] = {.index = 32, .length = 3},
  [17] = {.index = 35, .length = 3},
  [18] = {.index = 38, .length = 1},
  [19] = {.index = 39, .length = 2},
  [20] = {.index = 41, .length = 2},
  [21] = {.index = 43, .length = 1},
  [22] = {.index = 44, .length = 3},
  [23] = {.index = 47, .length = 3},
  [24] = {.index = 50, .length = 4},
  [25] = {.index = 54, .length = 2},
  [26] = {.index = 56, .length = 4},
  [27] = {.index = 60, .length = 3},
  [28] = {.index = 63, .length = 2},
  [29] = {.index = 65, .length = 4},
  [30] = {.index = 69, .length = 4},
  [31] = {.index = 73, .length = 3},
  [32] = {.index = 76, .length = 5},
  [33] = {.index = 81, .length = 4},
  [34] = {.index = 85, .length = 6},
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
    {field_body, 1},
    {field_section_type, 0},
  [16] =
    {field_arguments, 1},
    {field_function, 0},
  [18] =
    {field_condition, 1},
    {field_consequence, 2},
  [20] =
    {field_body, 2},
    {field_section_name, 1},
    {field_section_type, 0},
  [23] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [26] =
    {field_field, 2},
    {field_operand, 0},
  [28] =
    {field_key, 0},
    {field_value, 2},
  [30] =
    {field_body, 3},
  [31] =
    {field_alternative_conditional, 0},
  [32] =
    {field_alternative_catchall, 3},
    {field_condition, 1},
    {field_consequence, 2},
  [35] =
    {field_alternative_conditional, 3, .inherited = true},
    {field_condition, 1},
    {field_consequence, 2},
  [38] =
    {field_param, 0},
  [39] =
    {field_name, 0},
    {field_type, 2},
  [41] =
    {field_index, 2},
    {field_operand, 0},
  [43] =
    {field_consequence, 1},
  [44] =
    {field_alternative_catchall, 4},
    {field_condition, 1},
    {field_consequence, 2},
  [47] =
    {field_alternative_conditional, 4, .inherited = true},
    {field_condition, 1},
    {field_consequence, 2},
  [50] =
    {field_alternative_catchall, 4},
    {field_alternative_conditional, 3, .inherited = true},
    {field_condition, 1},
    {field_consequence, 2},
  [54] =
    {field_alternative_conditional, 0, .inherited = true},
    {field_alternative_conditional, 1, .inherited = true},
  [56] =
    {field_body, 4},
    {field_name, 1},
    {field_parameters, 2},
    {field_parameters, 3},
  [60] =
    {field_name, 0},
    {field_name, 1},
    {field_type, 3},
  [63] =
    {field_left, 1},
    {field_right, 3},
  [65] =
    {field_alternative_catchall, 5},
    {field_alternative_conditional, 4, .inherited = true},
    {field_condition, 1},
    {field_consequence, 2},
  [69] =
    {field_alternative_catchall, 5},
    {field_alternative_conditional, 3, .inherited = true},
    {field_condition, 1},
    {field_consequence, 2},
  [73] =
    {field_param, 0},
    {field_param_type, 1},
    {field_param_type, 2},
  [76] =
    {field_body, 5},
    {field_name, 1},
    {field_parameters, 2},
    {field_parameters, 3},
    {field_parameters, 4},
  [81] =
    {field_alternative_catchall, 6},
    {field_alternative_conditional, 4, .inherited = true},
    {field_condition, 1},
    {field_consequence, 2},
  [85] =
    {field_body, 6},
    {field_name, 1},
    {field_parameters, 2},
    {field_parameters, 3},
    {field_parameters, 4},
    {field_parameters, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [11] = {
    [0] = sym_field_identifier,
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
  [15] = 15,
  [16] = 14,
  [17] = 17,
  [18] = 13,
  [19] = 17,
  [20] = 13,
  [21] = 21,
  [22] = 15,
  [23] = 14,
  [24] = 15,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 26,
  [31] = 31,
  [32] = 27,
  [33] = 26,
  [34] = 34,
  [35] = 35,
  [36] = 28,
  [37] = 37,
  [38] = 29,
  [39] = 27,
  [40] = 35,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 25,
  [45] = 45,
  [46] = 35,
  [47] = 43,
  [48] = 41,
  [49] = 34,
  [50] = 25,
  [51] = 31,
  [52] = 28,
  [53] = 53,
  [54] = 31,
  [55] = 34,
  [56] = 41,
  [57] = 43,
  [58] = 42,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 61,
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
  [81] = 63,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 63,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 95,
  [99] = 97,
  [100] = 100,
  [101] = 95,
  [102] = 102,
  [103] = 94,
  [104] = 104,
  [105] = 78,
  [106] = 106,
  [107] = 107,
  [108] = 90,
  [109] = 80,
  [110] = 85,
  [111] = 87,
  [112] = 112,
  [113] = 92,
  [114] = 89,
  [115] = 71,
  [116] = 69,
  [117] = 77,
  [118] = 118,
  [119] = 65,
  [120] = 75,
  [121] = 79,
  [122] = 82,
  [123] = 74,
  [124] = 76,
  [125] = 125,
  [126] = 86,
  [127] = 127,
  [128] = 84,
  [129] = 66,
  [130] = 130,
  [131] = 131,
  [132] = 73,
  [133] = 133,
  [134] = 72,
  [135] = 64,
  [136] = 67,
  [137] = 70,
  [138] = 83,
  [139] = 68,
  [140] = 68,
  [141] = 83,
  [142] = 70,
  [143] = 67,
  [144] = 66,
  [145] = 73,
  [146] = 78,
  [147] = 64,
  [148] = 80,
  [149] = 85,
  [150] = 72,
  [151] = 87,
  [152] = 89,
  [153] = 71,
  [154] = 69,
  [155] = 88,
  [156] = 77,
  [157] = 94,
  [158] = 79,
  [159] = 82,
  [160] = 160,
  [161] = 84,
  [162] = 88,
  [163] = 93,
  [164] = 93,
  [165] = 92,
  [166] = 90,
  [167] = 65,
  [168] = 75,
  [169] = 169,
  [170] = 133,
  [171] = 74,
  [172] = 76,
  [173] = 86,
  [174] = 133,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 177,
  [182] = 178,
  [183] = 175,
  [184] = 184,
  [185] = 179,
  [186] = 186,
  [187] = 180,
  [188] = 188,
  [189] = 189,
  [190] = 175,
  [191] = 180,
  [192] = 179,
  [193] = 193,
  [194] = 178,
  [195] = 189,
  [196] = 186,
  [197] = 197,
  [198] = 188,
  [199] = 199,
  [200] = 188,
  [201] = 184,
  [202] = 189,
  [203] = 177,
  [204] = 176,
  [205] = 184,
  [206] = 193,
  [207] = 186,
  [208] = 176,
  [209] = 193,
  [210] = 210,
  [211] = 210,
  [212] = 212,
  [213] = 197,
  [214] = 214,
  [215] = 214,
  [216] = 197,
  [217] = 217,
  [218] = 217,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 220,
  [223] = 219,
  [224] = 220,
  [225] = 219,
  [226] = 221,
  [227] = 221,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 229,
  [232] = 230,
  [233] = 233,
  [234] = 234,
  [235] = 233,
  [236] = 236,
  [237] = 233,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 239,
  [243] = 240,
  [244] = 241,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 245,
  [249] = 246,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 251,
  [256] = 256,
  [257] = 256,
  [258] = 247,
  [259] = 259,
  [260] = 260,
  [261] = 253,
  [262] = 252,
  [263] = 263,
  [264] = 264,
  [265] = 256,
  [266] = 96,
  [267] = 267,
  [268] = 247,
  [269] = 263,
  [270] = 259,
  [271] = 271,
  [272] = 272,
  [273] = 271,
  [274] = 254,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 264,
  [279] = 260,
  [280] = 96,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 283,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 281,
  [292] = 283,
  [293] = 293,
  [294] = 282,
  [295] = 112,
  [296] = 296,
  [297] = 284,
  [298] = 277,
  [299] = 299,
  [300] = 267,
  [301] = 272,
  [302] = 125,
  [303] = 290,
  [304] = 304,
  [305] = 293,
  [306] = 306,
  [307] = 250,
  [308] = 282,
  [309] = 127,
  [310] = 310,
  [311] = 130,
  [312] = 131,
  [313] = 284,
  [314] = 306,
  [315] = 160,
  [316] = 169,
  [317] = 104,
  [318] = 106,
  [319] = 319,
  [320] = 320,
  [321] = 118,
  [322] = 322,
  [323] = 323,
  [324] = 310,
  [325] = 325,
  [326] = 277,
  [327] = 293,
  [328] = 107,
  [329] = 290,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 334,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 330,
  [342] = 342,
  [343] = 319,
  [344] = 299,
  [345] = 345,
  [346] = 346,
  [347] = 333,
  [348] = 346,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 350,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 332,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 259,
  [371] = 356,
  [372] = 359,
  [373] = 373,
  [374] = 374,
  [375] = 340,
  [376] = 364,
  [377] = 362,
  [378] = 357,
  [379] = 360,
  [380] = 368,
  [381] = 338,
  [382] = 342,
  [383] = 125,
  [384] = 369,
  [385] = 288,
  [386] = 386,
  [387] = 387,
  [388] = 118,
  [389] = 320,
  [390] = 390,
  [391] = 160,
  [392] = 169,
  [393] = 112,
  [394] = 107,
  [395] = 390,
  [396] = 106,
  [397] = 104,
  [398] = 398,
  [399] = 363,
  [400] = 131,
  [401] = 130,
  [402] = 361,
  [403] = 127,
  [404] = 345,
  [405] = 405,
  [406] = 331,
  [407] = 407,
  [408] = 365,
  [409] = 365,
  [410] = 398,
  [411] = 366,
  [412] = 361,
  [413] = 363,
  [414] = 405,
  [415] = 415,
  [416] = 355,
  [417] = 349,
  [418] = 390,
  [419] = 289,
  [420] = 373,
  [421] = 421,
  [422] = 415,
  [423] = 369,
  [424] = 368,
  [425] = 407,
  [426] = 351,
  [427] = 421,
  [428] = 360,
  [429] = 359,
  [430] = 356,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 367,
  [435] = 435,
  [436] = 436,
  [437] = 339,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 439,
  [442] = 440,
  [443] = 443,
  [444] = 431,
  [445] = 445,
  [446] = 320,
  [447] = 435,
  [448] = 353,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 452,
  [454] = 443,
  [455] = 431,
  [456] = 288,
  [457] = 457,
  [458] = 436,
  [459] = 459,
  [460] = 281,
  [461] = 450,
  [462] = 433,
  [463] = 439,
  [464] = 457,
  [465] = 432,
  [466] = 438,
  [467] = 432,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 468,
  [478] = 478,
  [479] = 476,
  [480] = 473,
  [481] = 481,
  [482] = 471,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 486,
  [489] = 475,
  [490] = 474,
  [491] = 491,
  [492] = 492,
  [493] = 478,
  [494] = 494,
  [495] = 495,
  [496] = 475,
  [497] = 484,
  [498] = 494,
  [499] = 470,
  [500] = 500,
  [501] = 483,
  [502] = 500,
  [503] = 503,
  [504] = 504,
  [505] = 494,
  [506] = 506,
  [507] = 487,
  [508] = 485,
  [509] = 484,
  [510] = 470,
  [511] = 500,
  [512] = 503,
  [513] = 504,
  [514] = 514,
  [515] = 483,
  [516] = 495,
  [517] = 492,
  [518] = 471,
  [519] = 472,
  [520] = 504,
  [521] = 514,
  [522] = 514,
  [523] = 495,
  [524] = 492,
  [525] = 473,
  [526] = 476,
  [527] = 478,
  [528] = 469,
  [529] = 468,
  [530] = 485,
  [531] = 491,
  [532] = 506,
  [533] = 491,
  [534] = 506,
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
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(79);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
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
      if (lookahead == '{') ADVANCE(52);
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
      if (lookahead == 'x') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(50);
      if (lookahead == 'y') ADVANCE(51);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 20:
      if (lookahead == 'D') ADVANCE(54);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(58);
      END_STATE();
    case 25:
      if (lookahead == 'z') ADVANCE(59);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 36:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 50:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(83);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 54:
      if (lookahead == 'R') ADVANCE(86);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(99);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 70:
      if (lookahead == 'm') ADVANCE(101);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_CIDR);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_Date);
      if (lookahead == 'T') ADVANCE(114);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_Size);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_Time);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 95:
      if (lookahead == 'k') ADVANCE(118);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_dict);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 114:
      if (lookahead == 'y') ADVANCE(127);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_break_statement);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 124:
      if (lookahead == 'g') ADVANCE(133);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_tuple);
      END_STATE();
    case 126:
      if (lookahead == 'p') ADVANCE(134);
      END_STATE();
    case 127:
      if (lookahead == 'p') ADVANCE(135);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_IpAddr);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DateType);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_Duration);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_continue_statement);
      END_STATE();
    case 142:
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
  [59] = {.lex_state = 36},
  [60] = {.lex_state = 36},
  [61] = {.lex_state = 35},
  [62] = {.lex_state = 35},
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
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 35},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 35},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 35},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 35},
  [100] = {.lex_state = 35},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 35},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 35},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 35},
  [109] = {.lex_state = 35},
  [110] = {.lex_state = 35},
  [111] = {.lex_state = 35},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 35},
  [114] = {.lex_state = 35},
  [115] = {.lex_state = 35},
  [116] = {.lex_state = 35},
  [117] = {.lex_state = 35},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 35},
  [120] = {.lex_state = 35},
  [121] = {.lex_state = 35},
  [122] = {.lex_state = 35},
  [123] = {.lex_state = 35},
  [124] = {.lex_state = 35},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 35},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 35},
  [129] = {.lex_state = 35},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 35},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 35},
  [135] = {.lex_state = 35},
  [136] = {.lex_state = 35},
  [137] = {.lex_state = 35},
  [138] = {.lex_state = 35},
  [139] = {.lex_state = 35},
  [140] = {.lex_state = 35},
  [141] = {.lex_state = 35},
  [142] = {.lex_state = 35},
  [143] = {.lex_state = 35},
  [144] = {.lex_state = 35},
  [145] = {.lex_state = 35},
  [146] = {.lex_state = 35},
  [147] = {.lex_state = 35},
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
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 35},
  [162] = {.lex_state = 35},
  [163] = {.lex_state = 35},
  [164] = {.lex_state = 35},
  [165] = {.lex_state = 35},
  [166] = {.lex_state = 35},
  [167] = {.lex_state = 35},
  [168] = {.lex_state = 35},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 35},
  [172] = {.lex_state = 35},
  [173] = {.lex_state = 35},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 35},
  [211] = {.lex_state = 35},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 35},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 35},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 5},
  [221] = {.lex_state = 5},
  [222] = {.lex_state = 5},
  [223] = {.lex_state = 5},
  [224] = {.lex_state = 5},
  [225] = {.lex_state = 5},
  [226] = {.lex_state = 5},
  [227] = {.lex_state = 5},
  [228] = {.lex_state = 5},
  [229] = {.lex_state = 5},
  [230] = {.lex_state = 5},
  [231] = {.lex_state = 5},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 5},
  [234] = {.lex_state = 5},
  [235] = {.lex_state = 5},
  [236] = {.lex_state = 5},
  [237] = {.lex_state = 5},
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 36},
  [240] = {.lex_state = 36},
  [241] = {.lex_state = 36},
  [242] = {.lex_state = 36},
  [243] = {.lex_state = 36},
  [244] = {.lex_state = 36},
  [245] = {.lex_state = 36},
  [246] = {.lex_state = 36},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 36},
  [249] = {.lex_state = 36},
  [250] = {.lex_state = 36},
  [251] = {.lex_state = 36},
  [252] = {.lex_state = 36},
  [253] = {.lex_state = 36},
  [254] = {.lex_state = 36},
  [255] = {.lex_state = 36},
  [256] = {.lex_state = 36},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 36},
  [259] = {.lex_state = 36},
  [260] = {.lex_state = 36},
  [261] = {.lex_state = 36},
  [262] = {.lex_state = 36},
  [263] = {.lex_state = 36},
  [264] = {.lex_state = 36},
  [265] = {.lex_state = 36},
  [266] = {.lex_state = 36},
  [267] = {.lex_state = 36},
  [268] = {.lex_state = 36},
  [269] = {.lex_state = 36},
  [270] = {.lex_state = 36},
  [271] = {.lex_state = 36},
  [272] = {.lex_state = 36},
  [273] = {.lex_state = 36},
  [274] = {.lex_state = 36},
  [275] = {.lex_state = 36},
  [276] = {.lex_state = 36},
  [277] = {.lex_state = 1},
  [278] = {.lex_state = 36},
  [279] = {.lex_state = 36},
  [280] = {.lex_state = 36},
  [281] = {.lex_state = 36},
  [282] = {.lex_state = 1},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 2},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 36},
  [287] = {.lex_state = 36},
  [288] = {.lex_state = 36},
  [289] = {.lex_state = 36},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 36},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 2},
  [294] = {.lex_state = 1},
  [295] = {.lex_state = 36},
  [296] = {.lex_state = 36},
  [297] = {.lex_state = 2},
  [298] = {.lex_state = 1},
  [299] = {.lex_state = 36},
  [300] = {.lex_state = 36},
  [301] = {.lex_state = 36},
  [302] = {.lex_state = 36},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 36},
  [305] = {.lex_state = 2},
  [306] = {.lex_state = 36},
  [307] = {.lex_state = 36},
  [308] = {.lex_state = 1},
  [309] = {.lex_state = 36},
  [310] = {.lex_state = 36},
  [311] = {.lex_state = 36},
  [312] = {.lex_state = 36},
  [313] = {.lex_state = 2},
  [314] = {.lex_state = 36},
  [315] = {.lex_state = 36},
  [316] = {.lex_state = 36},
  [317] = {.lex_state = 36},
  [318] = {.lex_state = 36},
  [319] = {.lex_state = 36},
  [320] = {.lex_state = 36},
  [321] = {.lex_state = 36},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 1},
  [324] = {.lex_state = 36},
  [325] = {.lex_state = 2},
  [326] = {.lex_state = 1},
  [327] = {.lex_state = 2},
  [328] = {.lex_state = 36},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 36},
  [332] = {.lex_state = 36},
  [333] = {.lex_state = 36},
  [334] = {.lex_state = 36},
  [335] = {.lex_state = 36},
  [336] = {.lex_state = 36},
  [337] = {.lex_state = 36},
  [338] = {.lex_state = 36},
  [339] = {.lex_state = 36},
  [340] = {.lex_state = 36},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 3},
  [343] = {.lex_state = 36},
  [344] = {.lex_state = 36},
  [345] = {.lex_state = 36},
  [346] = {.lex_state = 36},
  [347] = {.lex_state = 36},
  [348] = {.lex_state = 36},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 36},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 36},
  [353] = {.lex_state = 36},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 36},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 36},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 3},
  [362] = {.lex_state = 36},
  [363] = {.lex_state = 4},
  [364] = {.lex_state = 36},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 36},
  [367] = {.lex_state = 36},
  [368] = {.lex_state = 4},
  [369] = {.lex_state = 3},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 36},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 36},
  [376] = {.lex_state = 36},
  [377] = {.lex_state = 36},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 4},
  [381] = {.lex_state = 36},
  [382] = {.lex_state = 4},
  [383] = {.lex_state = 36},
  [384] = {.lex_state = 3},
  [385] = {.lex_state = 36},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 36},
  [389] = {.lex_state = 36},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 36},
  [392] = {.lex_state = 36},
  [393] = {.lex_state = 36},
  [394] = {.lex_state = 36},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 36},
  [397] = {.lex_state = 36},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 4},
  [400] = {.lex_state = 36},
  [401] = {.lex_state = 36},
  [402] = {.lex_state = 3},
  [403] = {.lex_state = 36},
  [404] = {.lex_state = 36},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 36},
  [407] = {.lex_state = 36},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 36},
  [412] = {.lex_state = 3},
  [413] = {.lex_state = 4},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 36},
  [416] = {.lex_state = 36},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 36},
  [420] = {.lex_state = 36},
  [421] = {.lex_state = 36},
  [422] = {.lex_state = 36},
  [423] = {.lex_state = 3},
  [424] = {.lex_state = 4},
  [425] = {.lex_state = 36},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 36},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 36},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 36},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 36},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 9},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 9},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 9},
  [484] = {.lex_state = 9},
  [485] = {.lex_state = 9},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 9},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 9},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 9},
  [509] = {.lex_state = 9},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 9},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 9},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 9},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
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
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
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
    [sym_source_file] = STATE(481),
    [sym__top_level_item] = STATE(287),
    [sym__declaration] = STATE(287),
    [sym__statement] = STATE(287),
    [sym_unary_expression] = STATE(173),
    [sym__expression] = STATE(97),
    [sym_composite_literal] = STATE(173),
    [sym_selector_expression] = STATE(173),
    [sym_index_expression] = STATE(173),
    [sym_parenthesized_expression] = STATE(173),
    [sym_expression_list] = STATE(405),
    [sym_block] = STATE(355),
    [sym_assignment_statement] = STATE(355),
    [sym_enum_declaration] = STATE(287),
    [sym_for_statement] = STATE(355),
    [sym_call_expression] = STATE(173),
    [sym_if_statement] = STATE(355),
    [sym__if_stmt] = STATE(406),
    [sym__if_elif_stmt] = STATE(407),
    [sym__if_elif_else_stmt] = STATE(415),
    [sym__if_else_stmt] = STATE(427),
    [sym_binary_expression] = STATE(173),
    [sym_section] = STATE(355),
    [sym_function_declaration] = STATE(287),
    [sym_var_declaration] = STATE(287),
    [sym_export_statement] = STATE(355),
    [sym_tuple_literal] = STATE(168),
    [sym_list_literal] = STATE(168),
    [sym_dict_literal] = STATE(168),
    [sym_true] = STATE(173),
    [sym_false] = STATE(173),
    [sym_return_statement] = STATE(355),
    [sym_quoted_string] = STATE(167),
    [sym_multiline_string] = STATE(167),
    [sym_string_literal] = STATE(173),
    [aux_sym_source_file_repeat2] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_enum] = ACTIONS(17),
    [anon_sym_for] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_func] = ACTIONS(23),
    [anon_sym_var] = ACTIONS(25),
    [anon_sym_export] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [sym_int_literal] = ACTIONS(29),
    [sym_float_literal] = ACTIONS(29),
    [sym_imaginary_literal] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_True] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_False] = ACTIONS(35),
    [sym_continue_statement] = ACTIONS(37),
    [sym_break_statement] = ACTIONS(37),
    [anon_sym_return] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(47),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 35,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(66), 1,
      anon_sym_enum,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(72), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_func,
    ACTIONS(78), 1,
      anon_sym_var,
    ACTIONS(81), 1,
      anon_sym_export,
    ACTIONS(87), 1,
      sym_imaginary_literal,
    ACTIONS(99), 1,
      anon_sym_return,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(111), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(2), 1,
      aux_sym_source_file_repeat2,
    STATE(99), 1,
      sym__expression,
    STATE(331), 1,
      sym__if_stmt,
    STATE(414), 1,
      sym_expression_list,
    STATE(421), 1,
      sym__if_else_stmt,
    STATE(422), 1,
      sym__if_elif_else_stmt,
    STATE(425), 1,
      sym__if_elif_stmt,
    ACTIONS(54), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(84), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(90), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(93), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(96), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(119), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(120), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(336), 6,
      sym__top_level_item,
      sym__declaration,
      sym__statement,
      sym_enum_declaration,
      sym_function_declaration,
      sym_var_declaration,
    STATE(416), 7,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_return_statement,
    STATE(126), 10,
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
  [134] = 35,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_for,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_func,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_export,
    ACTIONS(31), 1,
      sym_imaginary_literal,
    ACTIONS(39), 1,
      anon_sym_return,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym__expression,
    STATE(405), 1,
      sym_expression_list,
    STATE(406), 1,
      sym__if_stmt,
    STATE(407), 1,
      sym__if_elif_stmt,
    STATE(415), 1,
      sym__if_elif_else_stmt,
    STATE(427), 1,
      sym__if_else_stmt,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(29), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(35), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(37), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(167), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(168), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(296), 6,
      sym__top_level_item,
      sym__declaration,
      sym__statement,
      sym_enum_declaration,
      sym_function_declaration,
      sym_var_declaration,
    STATE(355), 7,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_return_statement,
    STATE(173), 10,
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
  [268] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(128), 1,
      anon_sym_for,
    ACTIONS(130), 1,
      anon_sym_if,
    ACTIONS(132), 1,
      anon_sym_export,
    ACTIONS(136), 1,
      sym_imaginary_literal,
    ACTIONS(144), 1,
      anon_sym_return,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(100), 1,
      sym__expression,
    STATE(286), 1,
      sym__statement,
    STATE(331), 1,
      sym__if_stmt,
    STATE(390), 1,
      sym_dict_kv,
    STATE(414), 1,
      sym_expression_list,
    STATE(421), 1,
      sym__if_else_stmt,
    STATE(422), 1,
      sym__if_elif_else_stmt,
    STATE(425), 1,
      sym__if_elif_stmt,
    STATE(488), 1,
      sym__statement_list,
    ACTIONS(118), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(134), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(138), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(140), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(142), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(119), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(120), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(416), 7,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_return_statement,
    STATE(126), 10,
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
  [391] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      anon_sym_for,
    ACTIONS(130), 1,
      anon_sym_if,
    ACTIONS(132), 1,
      anon_sym_export,
    ACTIONS(136), 1,
      sym_imaginary_literal,
    ACTIONS(144), 1,
      anon_sym_return,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      sym__expression,
    STATE(286), 1,
      sym__statement,
    STATE(331), 1,
      sym__if_stmt,
    STATE(395), 1,
      sym_dict_kv,
    STATE(414), 1,
      sym_expression_list,
    STATE(421), 1,
      sym__if_else_stmt,
    STATE(422), 1,
      sym__if_elif_else_stmt,
    STATE(425), 1,
      sym__if_elif_stmt,
    STATE(486), 1,
      sym__statement_list,
    ACTIONS(118), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(134), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(138), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(140), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(142), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(119), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(120), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(416), 7,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_return_statement,
    STATE(126), 10,
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
  [514] = 32,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(128), 1,
      anon_sym_for,
    ACTIONS(130), 1,
      anon_sym_if,
    ACTIONS(132), 1,
      anon_sym_export,
    ACTIONS(136), 1,
      sym_imaginary_literal,
    ACTIONS(144), 1,
      anon_sym_return,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(99), 1,
      sym__expression,
    STATE(286), 1,
      sym__statement,
    STATE(331), 1,
      sym__if_stmt,
    STATE(414), 1,
      sym_expression_list,
    STATE(421), 1,
      sym__if_else_stmt,
    STATE(422), 1,
      sym__if_elif_else_stmt,
    STATE(425), 1,
      sym__if_elif_stmt,
    STATE(488), 1,
      sym__statement_list,
    ACTIONS(118), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(134), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(138), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(140), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(142), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(119), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(120), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(416), 7,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_return_statement,
    STATE(126), 10,
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
  [634] = 32,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      anon_sym_for,
    ACTIONS(130), 1,
      anon_sym_if,
    ACTIONS(132), 1,
      anon_sym_export,
    ACTIONS(136), 1,
      sym_imaginary_literal,
    ACTIONS(144), 1,
      anon_sym_return,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      sym__expression,
    STATE(286), 1,
      sym__statement,
    STATE(331), 1,
      sym__if_stmt,
    STATE(414), 1,
      sym_expression_list,
    STATE(421), 1,
      sym__if_else_stmt,
    STATE(422), 1,
      sym__if_elif_else_stmt,
    STATE(425), 1,
      sym__if_elif_stmt,
    STATE(486), 1,
      sym__statement_list,
    ACTIONS(118), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(134), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(138), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(140), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(142), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(119), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(120), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(416), 7,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_return_statement,
    STATE(126), 10,
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
  [754] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      anon_sym_for,
    ACTIONS(130), 1,
      anon_sym_if,
    ACTIONS(132), 1,
      anon_sym_export,
    ACTIONS(136), 1,
      sym_imaginary_literal,
    ACTIONS(144), 1,
      anon_sym_return,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      sym__expression,
    STATE(331), 1,
      sym__if_stmt,
    STATE(335), 1,
      sym__statement,
    STATE(414), 1,
      sym_expression_list,
    STATE(421), 1,
      sym__if_else_stmt,
    STATE(422), 1,
      sym__if_elif_else_stmt,
    STATE(425), 1,
      sym__if_elif_stmt,
    ACTIONS(118), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(134), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(138), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(140), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(142), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(119), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(120), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(416), 7,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_return_statement,
    STATE(126), 10,
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
  [871] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      anon_sym_for,
    ACTIONS(130), 1,
      anon_sym_if,
    ACTIONS(132), 1,
      anon_sym_export,
    ACTIONS(136), 1,
      sym_imaginary_literal,
    ACTIONS(144), 1,
      anon_sym_return,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      sym__expression,
    STATE(331), 1,
      sym__if_stmt,
    STATE(335), 1,
      sym__statement,
    STATE(414), 1,
      sym_expression_list,
    STATE(421), 1,
      sym__if_else_stmt,
    STATE(422), 1,
      sym__if_elif_else_stmt,
    STATE(425), 1,
      sym__if_elif_stmt,
    ACTIONS(118), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(134), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(138), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(140), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(142), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(119), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(120), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(416), 7,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_return_statement,
    STATE(126), 10,
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
  [988] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      anon_sym_for,
    ACTIONS(130), 1,
      anon_sym_if,
    ACTIONS(132), 1,
      anon_sym_export,
    ACTIONS(136), 1,
      sym_imaginary_literal,
    ACTIONS(144), 1,
      anon_sym_return,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(99), 1,
      sym__expression,
    STATE(331), 1,
      sym__if_stmt,
    STATE(335), 1,
      sym__statement,
    STATE(414), 1,
      sym_expression_list,
    STATE(421), 1,
      sym__if_else_stmt,
    STATE(422), 1,
      sym__if_elif_else_stmt,
    STATE(425), 1,
      sym__if_elif_stmt,
    ACTIONS(118), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(134), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(138), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(140), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(142), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(119), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(120), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(416), 7,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_return_statement,
    STATE(126), 10,
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
  [1102] = 20,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(162), 1,
      anon_sym_LF,
    ACTIONS(168), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(178), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(211), 1,
      sym__expression,
    STATE(420), 1,
      sym_expression_list,
    ACTIONS(138), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(140), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(164), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(166), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(119), 2,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(134), 3,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
    STATE(120), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(126), 10,
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
  [1181] = 20,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(164), 1,
      anon_sym_SEMI,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(190), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(192), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(210), 1,
      sym__expression,
    STATE(373), 1,
      sym_expression_list,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(35), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(167), 2,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(29), 3,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
    STATE(168), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(173), 10,
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
  [1260] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_imaginary_literal,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(234), 1,
      sym__expression,
    STATE(390), 1,
      sym_dict_kv,
    ACTIONS(196), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(204), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(210), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(65), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(86), 10,
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
  [1334] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_imaginary_literal,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
    STATE(224), 1,
      sym__expression,
    ACTIONS(196), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(204), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(210), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(65), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(86), 10,
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
  [1408] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_imaginary_literal,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(222), 1,
      anon_sym_RBRACK,
    STATE(221), 1,
      sym__expression,
    ACTIONS(196), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(204), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(210), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(65), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(86), 10,
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
  [1482] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_imaginary_literal,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    STATE(222), 1,
      sym__expression,
    ACTIONS(196), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(204), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(210), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(65), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(86), 10,
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
  [1556] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      sym_imaginary_literal,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    STATE(211), 1,
      sym__expression,
    STATE(375), 1,
      sym_expression_list,
    ACTIONS(118), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(134), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(138), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(140), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(119), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(120), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(126), 10,
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
  [1630] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_imaginary_literal,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(234), 1,
      sym__expression,
    STATE(418), 1,
      sym_dict_kv,
    ACTIONS(196), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(204), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(210), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(65), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(86), 10,
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
  [1704] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_imaginary_literal,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    STATE(210), 1,
      sym__expression,
    STATE(340), 1,
      sym_expression_list,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(29), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(35), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(167), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(168), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(173), 10,
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
  [1778] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_imaginary_literal,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(234), 1,
      sym__expression,
    STATE(395), 1,
      sym_dict_kv,
    ACTIONS(196), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(204), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(210), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(65), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(86), 10,
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
  [1852] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_imaginary_literal,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(234), 1,
      sym__expression,
    STATE(459), 1,
      sym_dict_kv,
    ACTIONS(196), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(204), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(210), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(65), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(86), 10,
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
  [1926] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_imaginary_literal,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(230), 1,
      anon_sym_RBRACK,
    STATE(227), 1,
      sym__expression,
    ACTIONS(196), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(204), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(210), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(65), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(86), 10,
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
  [2000] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_imaginary_literal,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      sym__expression,
    ACTIONS(196), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(204), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(210), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(65), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(86), 10,
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
  [2074] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_imaginary_literal,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(234), 1,
      anon_sym_RBRACK,
    STATE(226), 1,
      sym__expression,
    ACTIONS(196), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(204), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(210), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(65), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(86), 10,
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
  [2148] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_imaginary_literal,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(225), 1,
      sym__expression,
    ACTIONS(196), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(204), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(210), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(65), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(86), 10,
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
  [2219] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_imaginary_literal,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    STATE(216), 1,
      sym__expression,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(29), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(35), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(167), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(168), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(173), 10,
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
  [2290] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      sym_imaginary_literal,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      sym__expression,
    ACTIONS(118), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(134), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(138), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(140), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(119), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(120), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(126), 10,
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
  [2361] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      sym_imaginary_literal,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    STATE(148), 1,
      sym__expression,
    ACTIONS(118), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(134), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(138), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(140), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(119), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(120), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(126), 10,
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
  [2432] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_imaginary_literal,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(230), 1,
      sym__expression,
    ACTIONS(196), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(204), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(210), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(65), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(86), 10,
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
  [2503] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      sym_imaginary_literal,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    STATE(213), 1,
      sym__expression,
    ACTIONS(118), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(134), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(138), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(140), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(119), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(120), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(126), 10,
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
  [2574] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      sym_imaginary_literal,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    STATE(152), 1,
      sym__expression,
    ACTIONS(118), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(134), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(138), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(140), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(119), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(120), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(126), 10,
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
  [2645] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_imaginary_literal,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    STATE(166), 1,
      sym__expression,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(29), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(35), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(167), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(168), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(173), 10,
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
  [2716] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_imaginary_literal,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(197), 1,
      sym__expression,
    ACTIONS(196), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(204), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(210), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(65), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(86), 10,
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
  [2787] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      sym_imaginary_literal,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    STATE(153), 1,
      sym__expression,
    ACTIONS(118), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(134), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(138), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(140), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(119), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(120), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(126), 10,
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
  [2858] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_imaginary_literal,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(235), 1,
      sym__expression,
    ACTIONS(196), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(204), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(210), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(65), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(86), 10,
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
  [2929] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_imaginary_literal,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    STATE(109), 1,
      sym__expression,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(29), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(35), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(167), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(168), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(173), 10,
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
  [3000] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_imaginary_literal,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(238), 1,
      sym__expression,
    ACTIONS(196), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(204), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(210), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(65), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(86), 10,
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
  [3071] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_imaginary_literal,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(232), 1,
      sym__expression,
    ACTIONS(196), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(204), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(210), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(65), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(86), 10,
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
  [3142] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_imaginary_literal,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(90), 1,
      sym__expression,
    ACTIONS(196), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(204), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(210), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(65), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(86), 10,
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
  [3213] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_imaginary_literal,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(237), 1,
      sym__expression,
    ACTIONS(196), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(204), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(210), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(65), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(86), 10,
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
  [3284] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      sym_imaginary_literal,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    STATE(154), 1,
      sym__expression,
    ACTIONS(118), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(134), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(138), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(140), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(119), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(120), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(126), 10,
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
  [3355] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_imaginary_literal,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(229), 1,
      sym__expression,
    ACTIONS(196), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(204), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(210), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(65), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(86), 10,
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
  [3426] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      sym_imaginary_literal,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    STATE(156), 1,
      sym__expression,
    ACTIONS(118), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(134), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(138), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(140), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(119), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(120), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(126), 10,
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
  [3497] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_imaginary_literal,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(223), 1,
      sym__expression,
    ACTIONS(196), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(204), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(210), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(65), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(86), 10,
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
  [3568] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_imaginary_literal,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(236), 1,
      sym__expression,
    ACTIONS(196), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(204), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(210), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(65), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(86), 10,
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
  [3639] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_imaginary_literal,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(233), 1,
      sym__expression,
    ACTIONS(196), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(204), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(210), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(65), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(86), 10,
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
  [3710] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_imaginary_literal,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    STATE(117), 1,
      sym__expression,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(29), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(35), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(167), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(168), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(173), 10,
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
  [3781] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_imaginary_literal,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    STATE(116), 1,
      sym__expression,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(29), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(35), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(167), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(168), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(173), 10,
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
  [3852] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_imaginary_literal,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    STATE(115), 1,
      sym__expression,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(29), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(35), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(167), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(168), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(173), 10,
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
  [3923] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_imaginary_literal,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(219), 1,
      sym__expression,
    ACTIONS(196), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(204), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(210), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(65), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(86), 10,
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
  [3994] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_imaginary_literal,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      sym__expression,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(29), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(35), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(167), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(168), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(173), 10,
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
  [4065] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_imaginary_literal,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(80), 1,
      sym__expression,
    ACTIONS(196), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(204), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(210), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(65), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(86), 10,
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
  [4136] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_imaginary_literal,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(228), 1,
      sym__expression,
    ACTIONS(196), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(204), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(210), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(65), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(86), 10,
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
  [4207] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_imaginary_literal,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(89), 1,
      sym__expression,
    ACTIONS(196), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(204), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(210), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(65), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(86), 10,
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
  [4278] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_imaginary_literal,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(71), 1,
      sym__expression,
    ACTIONS(196), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(204), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(210), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(65), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(86), 10,
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
  [4349] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_imaginary_literal,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(69), 1,
      sym__expression,
    ACTIONS(196), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(204), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(210), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(65), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(86), 10,
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
  [4420] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_imaginary_literal,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      sym__expression,
    ACTIONS(196), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(204), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(210), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(65), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(86), 10,
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
  [4491] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_imaginary_literal,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(231), 1,
      sym__expression,
    ACTIONS(196), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(204), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(210), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(65), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(86), 10,
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
  [4562] = 6,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LF,
    ACTIONS(240), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(236), 26,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_for,
      anon_sym_if,
      anon_sym_func,
      anon_sym_var,
      anon_sym_export,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
      sym_continue_statement,
      sym_break_statement,
      anon_sym_return,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_identifier,
  [4606] = 6,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 1,
      anon_sym_LF,
    ACTIONS(249), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(244), 26,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_for,
      anon_sym_if,
      anon_sym_func,
      anon_sym_var,
      anon_sym_export,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
      sym_continue_statement,
      sym_break_statement,
      anon_sym_return,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_identifier,
  [4650] = 8,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(254), 1,
      sym_identifier,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    STATE(142), 1,
      sym_argument_list,
    STATE(366), 1,
      sym_block,
    ACTIONS(252), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(256), 22,
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
  [4697] = 8,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LF,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    STATE(137), 1,
      sym_argument_list,
    STATE(411), 1,
      sym_block,
    ACTIONS(256), 23,
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
  [4744] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym_argument_list,
    ACTIONS(256), 5,
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
  [4784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(270), 21,
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
  [4818] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 21,
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
  [4852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(278), 21,
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
  [4886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(282), 21,
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
  [4920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 21,
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
  [4954] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 1,
      anon_sym_SLASH,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(298), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(300), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(306), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(304), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(296), 11,
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
  [5002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(308), 21,
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
  [5036] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 1,
      anon_sym_SLASH,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(298), 4,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(296), 15,
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
  [5080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(312), 21,
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
  [5114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(316), 21,
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
  [5148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(320), 21,
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
  [5182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(324), 21,
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
  [5216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(328), 21,
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
  [5250] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 1,
      anon_sym_SLASH,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(298), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(300), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(306), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(332), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(304), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(296), 9,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(334), 21,
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
  [5334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(338), 21,
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
  [5368] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 1,
      anon_sym_SLASH,
    ACTIONS(300), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(298), 4,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(296), 17,
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
  [5410] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      sym_argument_list,
    ACTIONS(252), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(256), 22,
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
  [5448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(342), 21,
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
  [5482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(346), 21,
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
  [5516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(350), 21,
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
  [5550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(354), 21,
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
  [5584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 5,
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
  [5618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(358), 21,
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
  [5652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(362), 21,
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
  [5686] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(298), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(296), 19,
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
  [5724] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(368), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(366), 19,
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
  [5762] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LF,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    STATE(137), 1,
      sym_argument_list,
    ACTIONS(256), 23,
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
  [5800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(370), 21,
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
  [5834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(374), 21,
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
  [5868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(378), 21,
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
  [5902] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_RBRACK,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(400), 1,
      anon_sym_func,
    STATE(102), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [5955] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
    ACTIONS(406), 1,
      anon_sym_Date,
    ACTIONS(404), 23,
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
  [5990] = 13,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_SEMI,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_LBRACK,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    STATE(257), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(408), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(412), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(426), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(428), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(420), 3,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
    ACTIONS(422), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(424), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6043] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(400), 1,
      anon_sym_func,
    ACTIONS(430), 1,
      anon_sym_RBRACK,
    STATE(102), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [6096] = 13,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LF,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    ACTIONS(434), 1,
      anon_sym_DOT,
    ACTIONS(436), 1,
      anon_sym_LBRACK,
    STATE(257), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(410), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(432), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(442), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(444), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(420), 3,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
    ACTIONS(438), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(440), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6149] = 14,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LF,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    ACTIONS(434), 1,
      anon_sym_DOT,
    ACTIONS(436), 1,
      anon_sym_LBRACK,
    ACTIONS(446), 1,
      anon_sym_COLON,
    STATE(257), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(410), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(420), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
    ACTIONS(432), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(442), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(444), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(438), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(440), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6204] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(400), 1,
      anon_sym_func,
    ACTIONS(449), 1,
      anon_sym_RBRACK,
    STATE(102), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [6257] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_RBRACK,
    ACTIONS(453), 1,
      anon_sym_LPAREN,
    ACTIONS(459), 1,
      anon_sym_Date,
    ACTIONS(462), 1,
      anon_sym_BQUOTE,
    ACTIONS(465), 1,
      anon_sym_typespec,
    ACTIONS(468), 1,
      anon_sym_tuple,
    ACTIONS(471), 1,
      anon_sym_list,
    ACTIONS(474), 1,
      anon_sym_dict,
    ACTIONS(477), 1,
      anon_sym_func,
    STATE(102), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(456), 12,
      anon_sym_void,
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
  [6310] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_LF,
    ACTIONS(380), 23,
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
  [6342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_Date,
    ACTIONS(480), 23,
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
  [6374] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(334), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(336), 22,
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
  [6406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_Date,
    ACTIONS(484), 23,
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
  [6438] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_Date,
    ACTIONS(488), 23,
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
  [6470] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_LF,
    ACTIONS(434), 1,
      anon_sym_DOT,
    ACTIONS(436), 1,
      anon_sym_LBRACK,
    ACTIONS(368), 21,
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
  [6506] = 6,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_LBRACK,
    ACTIONS(296), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(422), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(298), 17,
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
  [6544] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(354), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(356), 22,
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
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(358), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(360), 22,
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
  [6608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_Date,
    ACTIONS(492), 23,
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
  [6640] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LF,
    ACTIONS(372), 23,
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
  [6672] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_LBRACK,
    ACTIONS(296), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(298), 20,
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
  [6708] = 7,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_LBRACK,
    ACTIONS(296), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(412), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(422), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(298), 15,
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
  [6748] = 8,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_LBRACK,
    ACTIONS(296), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(412), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(422), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(424), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(298), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6790] = 9,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_LBRACK,
    ACTIONS(296), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(412), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(426), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(422), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(424), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(298), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_Date,
    ACTIONS(496), 23,
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
  [6866] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_LF,
    ACTIONS(276), 23,
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
  [6898] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_LF,
    ACTIONS(326), 23,
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
  [6930] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(338), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(340), 22,
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
  [6962] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(342), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(344), 22,
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
  [6994] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_LF,
    ACTIONS(322), 23,
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
  [7026] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LF,
    ACTIONS(330), 23,
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
  [7058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_Date,
    ACTIONS(404), 23,
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
  [7090] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LF,
    ACTIONS(256), 23,
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
  [7122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_Date,
    ACTIONS(500), 23,
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
  [7154] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(350), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(352), 22,
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
  [7186] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(278), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(280), 22,
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
  [7218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_Date,
    ACTIONS(504), 23,
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
  [7250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_Date,
    ACTIONS(508), 23,
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
  [7282] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(316), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(318), 22,
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
  [7314] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(400), 1,
      anon_sym_func,
    STATE(95), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [7364] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LF,
    ACTIONS(314), 23,
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
  [7396] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LF,
    ACTIONS(272), 23,
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
  [7428] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(282), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(284), 22,
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
  [7460] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(310), 23,
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
  [7492] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(346), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(348), 22,
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
  [7524] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(286), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(288), 22,
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
  [7556] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_LF,
    ACTIONS(288), 23,
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
  [7588] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_LF,
    ACTIONS(348), 23,
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
  [7620] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(308), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(310), 22,
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
  [7652] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_LF,
    ACTIONS(284), 23,
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
  [7684] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_LF,
    ACTIONS(280), 23,
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
  [7716] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LF,
    ACTIONS(318), 23,
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
  [7748] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LF,
    ACTIONS(336), 23,
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
  [7780] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(270), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(272), 22,
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
  [7812] = 6,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LF,
    ACTIONS(434), 1,
      anon_sym_DOT,
    ACTIONS(436), 1,
      anon_sym_LBRACK,
    ACTIONS(438), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(298), 18,
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
  [7850] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LF,
    ACTIONS(356), 23,
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
  [7882] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(312), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(314), 22,
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
  [7914] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_LF,
    ACTIONS(360), 23,
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
  [7946] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LF,
    ACTIONS(434), 1,
      anon_sym_DOT,
    ACTIONS(436), 1,
      anon_sym_LBRACK,
    ACTIONS(298), 21,
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
  [7982] = 7,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LF,
    ACTIONS(434), 1,
      anon_sym_DOT,
    ACTIONS(436), 1,
      anon_sym_LBRACK,
    ACTIONS(432), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(438), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(298), 16,
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
  [8022] = 8,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LF,
    ACTIONS(434), 1,
      anon_sym_DOT,
    ACTIONS(436), 1,
      anon_sym_LBRACK,
    ACTIONS(432), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(438), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(440), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(298), 10,
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
  [8064] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(362), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(364), 22,
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
  [8096] = 9,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LF,
    ACTIONS(434), 1,
      anon_sym_DOT,
    ACTIONS(436), 1,
      anon_sym_LBRACK,
    ACTIONS(432), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(442), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(438), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(440), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(298), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [8140] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(378), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(380), 22,
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
  [8172] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_LF,
    ACTIONS(340), 23,
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
  [8204] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LF,
    ACTIONS(344), 23,
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
  [8236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_Date,
    ACTIONS(512), 23,
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
  [8268] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_LF,
    ACTIONS(352), 23,
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
  [8300] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_LF,
    ACTIONS(364), 23,
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
  [8332] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_LF,
    ACTIONS(376), 23,
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
  [8364] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(374), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(376), 22,
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
  [8396] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(370), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(372), 22,
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
  [8428] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_LBRACK,
    ACTIONS(366), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(368), 20,
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
  [8464] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(274), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(276), 22,
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
  [8496] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(324), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(326), 22,
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
  [8528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_Date,
    ACTIONS(516), 23,
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
  [8560] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(400), 1,
      anon_sym_func,
    STATE(101), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [8610] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(320), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(322), 22,
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
  [8642] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(328), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(330), 22,
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
  [8674] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(252), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(256), 22,
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
  [8706] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(400), 1,
      anon_sym_func,
    STATE(98), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [8756] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    ACTIONS(524), 1,
      anon_sym_Date,
    ACTIONS(526), 1,
      anon_sym_BQUOTE,
    ACTIONS(528), 1,
      anon_sym_typespec,
    ACTIONS(530), 1,
      anon_sym_tuple,
    ACTIONS(532), 1,
      anon_sym_list,
    ACTIONS(534), 1,
      anon_sym_dict,
    ACTIONS(536), 1,
      anon_sym_func,
    STATE(401), 1,
      sym_type_spec_r,
    STATE(391), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(522), 12,
      anon_sym_void,
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
  [8805] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(400), 1,
      anon_sym_func,
    STATE(471), 1,
      sym_type_spec_r,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [8854] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_LPAREN,
    ACTIONS(542), 1,
      anon_sym_Date,
    ACTIONS(544), 1,
      anon_sym_BQUOTE,
    ACTIONS(546), 1,
      anon_sym_typespec,
    ACTIONS(548), 1,
      anon_sym_tuple,
    ACTIONS(550), 1,
      anon_sym_list,
    ACTIONS(552), 1,
      anon_sym_dict,
    ACTIONS(554), 1,
      anon_sym_func,
    STATE(309), 1,
      sym_type_spec_r,
    STATE(315), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(540), 12,
      anon_sym_void,
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
  [8903] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(400), 1,
      anon_sym_func,
    STATE(524), 1,
      sym_type_spec_r,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [8952] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(400), 1,
      anon_sym_func,
    STATE(523), 1,
      sym_type_spec_r,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [9001] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(400), 1,
      anon_sym_func,
    STATE(502), 1,
      sym_type_spec_r,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [9050] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(400), 1,
      anon_sym_func,
    STATE(127), 1,
      sym_type_spec_r,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [9099] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(400), 1,
      anon_sym_func,
    STATE(517), 1,
      sym_type_spec_r,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [9148] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(400), 1,
      anon_sym_func,
    STATE(130), 1,
      sym_type_spec_r,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [9197] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(400), 1,
      anon_sym_func,
    STATE(131), 1,
      sym_type_spec_r,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [9246] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(400), 1,
      anon_sym_func,
    STATE(516), 1,
      sym_type_spec_r,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [9295] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_LPAREN,
    ACTIONS(542), 1,
      anon_sym_Date,
    ACTIONS(544), 1,
      anon_sym_BQUOTE,
    ACTIONS(546), 1,
      anon_sym_typespec,
    ACTIONS(548), 1,
      anon_sym_tuple,
    ACTIONS(550), 1,
      anon_sym_list,
    ACTIONS(552), 1,
      anon_sym_dict,
    ACTIONS(554), 1,
      anon_sym_func,
    STATE(317), 1,
      sym_type_spec_r,
    STATE(315), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(540), 12,
      anon_sym_void,
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
  [9344] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(400), 1,
      anon_sym_func,
    STATE(511), 1,
      sym_type_spec_r,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [9393] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(400), 1,
      anon_sym_func,
    STATE(510), 1,
      sym_type_spec_r,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [9442] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(400), 1,
      anon_sym_func,
    STATE(292), 1,
      sym_type_spec_r,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [9491] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_LPAREN,
    ACTIONS(542), 1,
      anon_sym_Date,
    ACTIONS(544), 1,
      anon_sym_BQUOTE,
    ACTIONS(546), 1,
      anon_sym_typespec,
    ACTIONS(548), 1,
      anon_sym_tuple,
    ACTIONS(550), 1,
      anon_sym_list,
    ACTIONS(552), 1,
      anon_sym_dict,
    ACTIONS(554), 1,
      anon_sym_func,
    STATE(311), 1,
      sym_type_spec_r,
    STATE(315), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(540), 12,
      anon_sym_void,
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
  [9540] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(400), 1,
      anon_sym_func,
    STATE(500), 1,
      sym_type_spec_r,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [9589] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(400), 1,
      anon_sym_func,
    STATE(495), 1,
      sym_type_spec_r,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [9638] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(400), 1,
      anon_sym_func,
    STATE(493), 1,
      sym_type_spec_r,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [9687] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(400), 1,
      anon_sym_func,
    STATE(492), 1,
      sym_type_spec_r,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [9736] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(400), 1,
      anon_sym_func,
    STATE(283), 1,
      sym_type_spec_r,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [9785] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(400), 1,
      anon_sym_func,
    STATE(104), 1,
      sym_type_spec_r,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [9834] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 1,
      anon_sym_SLASH,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(306), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(332), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(558), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(560), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(304), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(556), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
  [9883] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(400), 1,
      anon_sym_func,
    STATE(470), 1,
      sym_type_spec_r,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [9932] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(400), 1,
      anon_sym_func,
    STATE(386), 1,
      sym_type_spec_r,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [9981] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(400), 1,
      anon_sym_func,
    STATE(499), 1,
      sym_type_spec_r,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [10030] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_LPAREN,
    ACTIONS(542), 1,
      anon_sym_Date,
    ACTIONS(544), 1,
      anon_sym_BQUOTE,
    ACTIONS(546), 1,
      anon_sym_typespec,
    ACTIONS(548), 1,
      anon_sym_tuple,
    ACTIONS(550), 1,
      anon_sym_list,
    ACTIONS(552), 1,
      anon_sym_dict,
    ACTIONS(554), 1,
      anon_sym_func,
    STATE(312), 1,
      sym_type_spec_r,
    STATE(315), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(540), 12,
      anon_sym_void,
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
  [10079] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(400), 1,
      anon_sym_func,
    STATE(285), 1,
      sym_type_spec_r,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [10128] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    ACTIONS(524), 1,
      anon_sym_Date,
    ACTIONS(526), 1,
      anon_sym_BQUOTE,
    ACTIONS(528), 1,
      anon_sym_typespec,
    ACTIONS(530), 1,
      anon_sym_tuple,
    ACTIONS(532), 1,
      anon_sym_list,
    ACTIONS(534), 1,
      anon_sym_dict,
    ACTIONS(536), 1,
      anon_sym_func,
    STATE(403), 1,
      sym_type_spec_r,
    STATE(391), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(522), 12,
      anon_sym_void,
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
  [10177] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(400), 1,
      anon_sym_func,
    STATE(482), 1,
      sym_type_spec_r,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [10226] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    ACTIONS(524), 1,
      anon_sym_Date,
    ACTIONS(526), 1,
      anon_sym_BQUOTE,
    ACTIONS(528), 1,
      anon_sym_typespec,
    ACTIONS(530), 1,
      anon_sym_tuple,
    ACTIONS(532), 1,
      anon_sym_list,
    ACTIONS(534), 1,
      anon_sym_dict,
    ACTIONS(536), 1,
      anon_sym_func,
    STATE(400), 1,
      sym_type_spec_r,
    STATE(391), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(522), 12,
      anon_sym_void,
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
  [10275] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(400), 1,
      anon_sym_func,
    STATE(478), 1,
      sym_type_spec_r,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [10324] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    ACTIONS(524), 1,
      anon_sym_Date,
    ACTIONS(526), 1,
      anon_sym_BQUOTE,
    ACTIONS(528), 1,
      anon_sym_typespec,
    ACTIONS(530), 1,
      anon_sym_tuple,
    ACTIONS(532), 1,
      anon_sym_list,
    ACTIONS(534), 1,
      anon_sym_dict,
    ACTIONS(536), 1,
      anon_sym_func,
    STATE(397), 1,
      sym_type_spec_r,
    STATE(391), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(522), 12,
      anon_sym_void,
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
  [10373] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(400), 1,
      anon_sym_func,
    STATE(518), 1,
      sym_type_spec_r,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [10422] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(400), 1,
      anon_sym_func,
    STATE(527), 1,
      sym_type_spec_r,
    STATE(160), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [10471] = 12,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_LBRACK,
    ACTIONS(420), 1,
      anon_sym_SEMI,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    STATE(265), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(412), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(426), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(428), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(562), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(422), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(424), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10519] = 12,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_DOT,
    ACTIONS(436), 1,
      anon_sym_LBRACK,
    ACTIONS(562), 1,
      anon_sym_LF,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    STATE(256), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(420), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(432), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(442), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(444), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(438), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(440), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10567] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_Date,
    ACTIONS(390), 1,
      anon_sym_BQUOTE,
    ACTIONS(392), 1,
      anon_sym_typespec,
    ACTIONS(394), 1,
      anon_sym_tuple,
    ACTIONS(396), 1,
      anon_sym_list,
    ACTIONS(398), 1,
      anon_sym_dict,
    ACTIONS(568), 1,
      anon_sym_func,
    STATE(449), 1,
      sym_type_spec,
    STATE(456), 1,
      sym_base_type_spec,
    ACTIONS(386), 12,
      anon_sym_void,
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
  [10612] = 10,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_DOT,
    ACTIONS(436), 1,
      anon_sym_LBRACK,
    ACTIONS(556), 1,
      anon_sym_LF,
    ACTIONS(432), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(442), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(444), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(438), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(558), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(440), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10655] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_Date,
    ACTIONS(544), 1,
      anon_sym_BQUOTE,
    ACTIONS(546), 1,
      anon_sym_typespec,
    ACTIONS(548), 1,
      anon_sym_tuple,
    ACTIONS(550), 1,
      anon_sym_list,
    ACTIONS(552), 1,
      anon_sym_dict,
    ACTIONS(570), 1,
      anon_sym_func,
    STATE(288), 1,
      sym_base_type_spec,
    STATE(319), 1,
      sym_type_spec,
    ACTIONS(540), 12,
      anon_sym_void,
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
  [10700] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_Date,
    ACTIONS(526), 1,
      anon_sym_BQUOTE,
    ACTIONS(528), 1,
      anon_sym_typespec,
    ACTIONS(530), 1,
      anon_sym_tuple,
    ACTIONS(532), 1,
      anon_sym_list,
    ACTIONS(534), 1,
      anon_sym_dict,
    ACTIONS(572), 1,
      anon_sym_func,
    STATE(343), 1,
      sym_type_spec,
    STATE(385), 1,
      sym_base_type_spec,
    ACTIONS(522), 12,
      anon_sym_void,
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
  [10745] = 10,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_LBRACK,
    ACTIONS(412), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(426), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(428), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(556), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(558), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(422), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(424), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10788] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_Date,
    ACTIONS(544), 1,
      anon_sym_BQUOTE,
    ACTIONS(546), 1,
      anon_sym_typespec,
    ACTIONS(548), 1,
      anon_sym_tuple,
    ACTIONS(550), 1,
      anon_sym_list,
    ACTIONS(552), 1,
      anon_sym_dict,
    ACTIONS(570), 1,
      anon_sym_func,
    STATE(288), 1,
      sym_base_type_spec,
    STATE(289), 1,
      sym_type_spec,
    ACTIONS(540), 12,
      anon_sym_void,
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
  [10833] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_Date,
    ACTIONS(526), 1,
      anon_sym_BQUOTE,
    ACTIONS(528), 1,
      anon_sym_typespec,
    ACTIONS(530), 1,
      anon_sym_tuple,
    ACTIONS(532), 1,
      anon_sym_list,
    ACTIONS(534), 1,
      anon_sym_dict,
    ACTIONS(572), 1,
      anon_sym_func,
    STATE(385), 1,
      sym_base_type_spec,
    STATE(419), 1,
      sym_type_spec,
    ACTIONS(522), 12,
      anon_sym_void,
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
  [10878] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 1,
      anon_sym_SLASH,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    STATE(359), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(306), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(332), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(560), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(304), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10926] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 1,
      anon_sym_SLASH,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(306), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(332), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(560), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(304), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10974] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 1,
      anon_sym_SLASH,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(580), 1,
      anon_sym_RBRACK,
    STATE(360), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(306), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(332), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(560), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(304), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11022] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 1,
      anon_sym_SLASH,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
    STATE(408), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(306), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(332), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(560), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(304), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11070] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 1,
      anon_sym_SLASH,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
    STATE(429), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(306), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(332), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(560), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(304), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11118] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 1,
      anon_sym_SLASH,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    STATE(409), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(306), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(332), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(560), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(304), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11166] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 1,
      anon_sym_SLASH,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
    STATE(372), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(306), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(332), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(560), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(304), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11214] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 1,
      anon_sym_SLASH,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(590), 1,
      anon_sym_RBRACK,
    STATE(379), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(306), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(332), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(560), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(304), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11262] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 1,
      anon_sym_SLASH,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(592), 1,
      anon_sym_RBRACK,
    STATE(428), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(306), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(332), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(560), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(304), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11310] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 1,
      anon_sym_SLASH,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(306), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(332), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(560), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(594), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(304), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11353] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 1,
      anon_sym_SLASH,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
    STATE(239), 1,
      sym_block,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(306), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(332), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(560), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(304), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11398] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 1,
      anon_sym_SLASH,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    STATE(273), 1,
      sym_block,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(306), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(332), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(560), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(304), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11443] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 1,
      anon_sym_SLASH,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    STATE(242), 1,
      sym_block,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(306), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(332), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(560), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(304), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11488] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 1,
      anon_sym_SLASH,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
    STATE(271), 1,
      sym_block,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(306), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(332), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(560), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(304), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11533] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 1,
      anon_sym_SLASH,
    ACTIONS(600), 1,
      anon_sym_RBRACK,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(306), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(332), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(560), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(304), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11575] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 1,
      anon_sym_SLASH,
    ACTIONS(602), 1,
      anon_sym_COLON,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(306), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(332), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(560), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(304), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11617] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 1,
      anon_sym_SLASH,
    ACTIONS(604), 1,
      anon_sym_RBRACK,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(306), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(332), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(560), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(304), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11659] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 1,
      anon_sym_SLASH,
    ACTIONS(606), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(306), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(332), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(560), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(304), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11701] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 1,
      anon_sym_SLASH,
    ACTIONS(608), 1,
      anon_sym_RBRACK,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(306), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(332), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(560), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(304), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11743] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 1,
      anon_sym_SLASH,
    ACTIONS(610), 1,
      anon_sym_to,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(300), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(306), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(332), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(560), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(304), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11785] = 10,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(612), 1,
      ts_builtin_sym_end,
    ACTIONS(614), 1,
      anon_sym_LF,
    ACTIONS(617), 1,
      anon_sym_SEMI,
    ACTIONS(619), 1,
      anon_sym_elif,
    ACTIONS(621), 1,
      anon_sym_else,
    STATE(241), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(246), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(251), 1,
      sym_elif_clause,
    STATE(377), 1,
      sym_else_clause,
  [11816] = 10,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_elif,
    ACTIONS(621), 1,
      anon_sym_else,
    ACTIONS(623), 1,
      ts_builtin_sym_end,
    ACTIONS(625), 1,
      anon_sym_LF,
    ACTIONS(628), 1,
      anon_sym_SEMI,
    STATE(245), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(251), 1,
      sym_elif_clause,
    STATE(306), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(348), 1,
      sym_else_clause,
  [11847] = 10,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_elif,
    ACTIONS(621), 1,
      anon_sym_else,
    ACTIONS(630), 1,
      ts_builtin_sym_end,
    ACTIONS(632), 1,
      anon_sym_LF,
    ACTIONS(635), 1,
      anon_sym_SEMI,
    STATE(245), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(251), 1,
      sym_elif_clause,
    STATE(324), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(337), 1,
      sym_else_clause,
  [11878] = 9,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_LF,
    ACTIONS(640), 1,
      anon_sym_elif,
    ACTIONS(642), 1,
      anon_sym_else,
    STATE(244), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(249), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(255), 1,
      sym_elif_clause,
    STATE(362), 1,
      sym_else_clause,
    ACTIONS(617), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11907] = 9,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_elif,
    ACTIONS(642), 1,
      anon_sym_else,
    ACTIONS(644), 1,
      anon_sym_LF,
    STATE(248), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(255), 1,
      sym_elif_clause,
    STATE(314), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(346), 1,
      sym_else_clause,
    ACTIONS(628), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11936] = 9,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_elif,
    ACTIONS(642), 1,
      anon_sym_else,
    ACTIONS(647), 1,
      anon_sym_LF,
    STATE(248), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(255), 1,
      sym_elif_clause,
    STATE(310), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(334), 1,
      sym_else_clause,
    ACTIONS(635), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11965] = 6,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_elif,
    STATE(245), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(251), 1,
      sym_elif_clause,
    ACTIONS(650), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(652), 2,
      anon_sym_SEMI,
      anon_sym_else,
  [11986] = 8,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_elif,
    ACTIONS(621), 1,
      anon_sym_else,
    ACTIONS(657), 1,
      anon_sym_LF,
    STATE(240), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(251), 1,
      sym_elif_clause,
    STATE(275), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(333), 1,
      sym_else_clause,
  [12011] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_COLON,
    ACTIONS(659), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(556), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [12030] = 6,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_LF,
    ACTIONS(662), 1,
      anon_sym_elif,
    STATE(248), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(255), 1,
      sym_elif_clause,
    ACTIONS(652), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_else,
  [12051] = 8,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_elif,
    ACTIONS(642), 1,
      anon_sym_else,
    ACTIONS(657), 1,
      anon_sym_LF,
    STATE(243), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(255), 1,
      sym_elif_clause,
    STATE(275), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(347), 1,
      sym_else_clause,
  [12076] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_SEMI,
    ACTIONS(669), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym_var_declaration_repeat1,
    ACTIONS(665), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12093] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(672), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(674), 3,
      anon_sym_SEMI,
      anon_sym_elif,
      anon_sym_else,
  [12106] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_LF,
    ACTIONS(678), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
  [12119] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_LF,
    ACTIONS(684), 1,
      anon_sym_COMMA,
    STATE(254), 1,
      aux_sym_enum_declaration_repeat1,
    ACTIONS(682), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12136] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_COMMA,
    ACTIONS(686), 1,
      anon_sym_LF,
    STATE(270), 1,
      aux_sym_enum_declaration_repeat1,
    ACTIONS(688), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12153] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_LF,
    ACTIONS(674), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
  [12166] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    ACTIONS(690), 1,
      anon_sym_LF,
    STATE(268), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(692), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12183] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(692), 1,
      anon_sym_COLON,
    STATE(247), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(690), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [12200] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_SEMI,
    ACTIONS(694), 1,
      anon_sym_COMMA,
    STATE(258), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(556), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12217] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_SEMI,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    STATE(259), 1,
      aux_sym_enum_declaration_repeat1,
    ACTIONS(697), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12234] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_SEMI,
    ACTIONS(708), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym_var_declaration_repeat1,
    ACTIONS(704), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12251] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_SEMI,
    ACTIONS(710), 1,
      anon_sym_COMMA,
    STATE(274), 1,
      aux_sym_enum_declaration_repeat1,
    ACTIONS(680), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12268] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(676), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(678), 3,
      anon_sym_SEMI,
      anon_sym_elif,
      anon_sym_else,
  [12281] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(712), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(714), 3,
      anon_sym_SEMI,
      anon_sym_elif,
      anon_sym_else,
  [12294] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_COMMA,
    ACTIONS(718), 1,
      anon_sym_SEMI,
    STATE(259), 1,
      aux_sym_enum_declaration_repeat1,
    ACTIONS(716), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12311] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(692), 1,
      anon_sym_SEMI,
    STATE(258), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(690), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12328] = 4,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_LBRACK,
    ACTIONS(404), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(406), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12343] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_COMMA,
    ACTIONS(724), 1,
      anon_sym_SEMI,
    STATE(260), 1,
      aux_sym_var_declaration_repeat1,
    ACTIONS(722), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12360] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_LF,
    ACTIONS(726), 1,
      anon_sym_COMMA,
    STATE(268), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(558), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12377] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_LF,
    ACTIONS(714), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
  [12390] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_LF,
    ACTIONS(729), 1,
      anon_sym_COMMA,
    STATE(270), 1,
      aux_sym_enum_declaration_repeat1,
    ACTIONS(699), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12407] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(732), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(734), 3,
      anon_sym_SEMI,
      anon_sym_elif,
      anon_sym_else,
  [12420] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_COMMA,
    ACTIONS(738), 1,
      anon_sym_SEMI,
    STATE(264), 1,
      aux_sym_enum_declaration_repeat1,
    ACTIONS(736), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12437] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_LF,
    ACTIONS(734), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
  [12450] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_SEMI,
    ACTIONS(710), 1,
      anon_sym_COMMA,
    STATE(259), 1,
      aux_sym_enum_declaration_repeat1,
    ACTIONS(686), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12467] = 4,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_LF,
    STATE(275), 1,
      aux_sym__if_elif_stmt_repeat1,
    ACTIONS(743), 2,
      anon_sym_elif,
      anon_sym_else,
  [12481] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_LF,
    ACTIONS(747), 1,
      anon_sym_SEMI,
    ACTIONS(749), 1,
      anon_sym_RBRACE,
    STATE(304), 1,
      aux_sym__statement_list_repeat1,
  [12497] = 4,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_SQUOTE,
    STATE(294), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(753), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [12511] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_COMMA,
    ACTIONS(716), 1,
      anon_sym_LF,
    ACTIONS(718), 1,
      anon_sym_SEMI,
    STATE(270), 1,
      aux_sym_enum_declaration_repeat1,
  [12527] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_LF,
    ACTIONS(706), 1,
      anon_sym_SEMI,
    ACTIONS(755), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      aux_sym_var_declaration_repeat1,
  [12543] = 4,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LF,
    ACTIONS(757), 1,
      anon_sym_LBRACK,
    ACTIONS(406), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12557] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_LF,
    ACTIONS(699), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [12569] = 4,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_SQUOTE,
    STATE(323), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(761), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [12583] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_RPAREN,
    ACTIONS(765), 1,
      anon_sym_COMMA,
    ACTIONS(767), 1,
      anon_sym_STAR,
    STATE(329), 1,
      aux_sym_func_spec_repeat1,
  [12599] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_DQUOTE,
    ACTIONS(769), 1,
      sym_escape_sequence,
    ACTIONS(771), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(293), 1,
      aux_sym__quoted_string_content_double,
  [12615] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_COMMA,
    ACTIONS(773), 1,
      anon_sym_RPAREN,
    ACTIONS(775), 1,
      anon_sym_STAR,
    STATE(290), 1,
      aux_sym_func_spec_repeat1,
  [12631] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_LF,
    ACTIONS(779), 1,
      anon_sym_SEMI,
    ACTIONS(781), 1,
      anon_sym_RBRACE,
    STATE(276), 1,
      aux_sym__statement_list_repeat1,
  [12647] = 5,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_LF,
    ACTIONS(785), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      aux_sym_source_file_repeat1,
  [12663] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(787), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(789), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12675] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(791), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(793), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12687] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_COMMA,
    ACTIONS(795), 1,
      anon_sym_RPAREN,
    ACTIONS(797), 1,
      anon_sym_STAR,
    STATE(322), 1,
      aux_sym_func_spec_repeat1,
  [12703] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(697), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(699), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12715] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_COMMA,
    ACTIONS(799), 1,
      anon_sym_RPAREN,
    ACTIONS(801), 1,
      anon_sym_STAR,
    STATE(303), 1,
      aux_sym_func_spec_repeat1,
  [12731] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_DQUOTE,
    ACTIONS(805), 1,
      sym_escape_sequence,
    ACTIONS(807), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(325), 1,
      aux_sym__quoted_string_content_double,
  [12747] = 4,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_SQUOTE,
    STATE(323), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(761), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [12761] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(492), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(494), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12773] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_LF,
    ACTIONS(785), 1,
      anon_sym_SEMI,
    ACTIONS(809), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      aux_sym_source_file_repeat1,
  [12789] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_DQUOTE,
    ACTIONS(813), 1,
      sym_escape_sequence,
    ACTIONS(815), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(305), 1,
      aux_sym__quoted_string_content_double,
  [12805] = 4,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_SQUOTE,
    STATE(308), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(817), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [12819] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(665), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(667), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12831] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_LF,
    ACTIONS(724), 1,
      anon_sym_SEMI,
    ACTIONS(755), 1,
      anon_sym_COMMA,
    STATE(279), 1,
      aux_sym_var_declaration_repeat1,
  [12847] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_COMMA,
    ACTIONS(736), 1,
      anon_sym_LF,
    ACTIONS(738), 1,
      anon_sym_SEMI,
    STATE(278), 1,
      aux_sym_enum_declaration_repeat1,
  [12863] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(404), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(406), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12875] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_COMMA,
    ACTIONS(819), 1,
      anon_sym_RPAREN,
    ACTIONS(821), 1,
      anon_sym_STAR,
    STATE(322), 1,
      aux_sym_func_spec_repeat1,
  [12891] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_LF,
    ACTIONS(826), 1,
      anon_sym_SEMI,
    ACTIONS(829), 1,
      anon_sym_RBRACE,
    STATE(304), 1,
      aux_sym__statement_list_repeat1,
  [12907] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(805), 1,
      sym_escape_sequence,
    ACTIONS(807), 1,
      aux_sym__quoted_string_content_double_token1,
    ACTIONS(831), 1,
      anon_sym_DQUOTE,
    STATE(325), 1,
      aux_sym__quoted_string_content_double,
  [12923] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_else,
    ACTIONS(657), 1,
      anon_sym_LF,
    STATE(275), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(358), 1,
      sym_else_clause,
  [12939] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_LF,
    ACTIONS(667), 1,
      anon_sym_SEMI,
    ACTIONS(833), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      aux_sym_var_declaration_repeat1,
  [12955] = 4,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_SQUOTE,
    STATE(323), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(761), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [12969] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(500), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(502), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12981] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_else,
    ACTIONS(657), 1,
      anon_sym_LF,
    STATE(275), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(350), 1,
      sym_else_clause,
  [12997] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(504), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(506), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13009] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(508), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(510), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13021] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_DQUOTE,
    ACTIONS(838), 1,
      sym_escape_sequence,
    ACTIONS(840), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(327), 1,
      aux_sym__quoted_string_content_double,
  [13037] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_else,
    ACTIONS(657), 1,
      anon_sym_LF,
    STATE(275), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(332), 1,
      sym_else_clause,
  [13053] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(512), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(514), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13065] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(516), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(518), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13077] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(480), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(482), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13089] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(484), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(486), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13101] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(842), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(844), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13113] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(846), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(848), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13125] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(496), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(498), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13137] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_COMMA,
    STATE(322), 1,
      aux_sym_func_spec_repeat1,
    ACTIONS(850), 2,
      anon_sym_RPAREN,
      anon_sym_STAR,
  [13151] = 4,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_SQUOTE,
    STATE(323), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(857), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [13165] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_else,
    ACTIONS(657), 1,
      anon_sym_LF,
    STATE(275), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(352), 1,
      sym_else_clause,
  [13181] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_DQUOTE,
    ACTIONS(862), 1,
      sym_escape_sequence,
    ACTIONS(865), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(325), 1,
      aux_sym__quoted_string_content_double,
  [13197] = 4,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_SQUOTE,
    STATE(282), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(868), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [13211] = 5,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_DQUOTE,
    ACTIONS(805), 1,
      sym_escape_sequence,
    ACTIONS(807), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(325), 1,
      aux_sym__quoted_string_content_double,
  [13227] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(488), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(490), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13239] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_COMMA,
    ACTIONS(870), 1,
      anon_sym_RPAREN,
    ACTIONS(872), 1,
      anon_sym_STAR,
    STATE(322), 1,
      aux_sym_func_spec_repeat1,
  [13255] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_RPAREN,
    ACTIONS(876), 1,
      anon_sym_COMMA,
    STATE(354), 1,
      aux_sym_function_declaration_repeat1,
  [13268] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_LF,
    ACTIONS(880), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13279] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_LF,
    ACTIONS(884), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13290] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_SEMI,
    ACTIONS(886), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13301] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_LF,
    ACTIONS(892), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13312] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_LF,
    ACTIONS(829), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13323] = 4,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_LF,
    ACTIONS(785), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      aux_sym_source_file_repeat1,
  [13336] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_SEMI,
    ACTIONS(890), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13347] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_SEMI,
    ACTIONS(896), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13358] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_SEMI,
    ACTIONS(900), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13369] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_SEMI,
    ACTIONS(904), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_COMMA,
    ACTIONS(908), 1,
      anon_sym_RPAREN,
    STATE(354), 1,
      aux_sym_function_declaration_repeat1,
  [13393] = 4,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(910), 1,
      aux_sym_other_lit_token1,
    ACTIONS(913), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(342), 1,
      aux_sym_other_lit_repeat1,
  [13406] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_LF,
    ACTIONS(844), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13417] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_LF,
    ACTIONS(667), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13428] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_LF,
    ACTIONS(917), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13439] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_LF,
    ACTIONS(921), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13450] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_LF,
    ACTIONS(888), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13461] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_SEMI,
    ACTIONS(919), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13472] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_COMMA,
    ACTIONS(925), 1,
      anon_sym_COLON,
    STATE(370), 1,
      aux_sym_enum_declaration_repeat1,
  [13485] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_LF,
    ACTIONS(929), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13496] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      sym_identifier,
    ACTIONS(933), 1,
      anon_sym_RPAREN,
    STATE(398), 1,
      sym_param_spec,
  [13509] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_SEMI,
    ACTIONS(927), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13520] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_SEMI,
    ACTIONS(935), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13531] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_RPAREN,
    ACTIONS(941), 1,
      anon_sym_COMMA,
    STATE(354), 1,
      aux_sym_function_declaration_repeat1,
  [13544] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_SEMI,
    ACTIONS(408), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13555] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_COMMA,
    ACTIONS(946), 1,
      anon_sym_RBRACE,
    STATE(374), 1,
      aux_sym_dict_literal_repeat1,
  [13568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_COMMA,
    ACTIONS(948), 1,
      anon_sym_COLON,
    STATE(417), 1,
      aux_sym_enum_declaration_repeat1,
  [13581] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_SEMI,
    ACTIONS(882), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(950), 1,
      anon_sym_RPAREN,
    STATE(247), 1,
      aux_sym_expression_list_repeat1,
  [13605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(952), 1,
      anon_sym_RBRACK,
    STATE(247), 1,
      aux_sym_expression_list_repeat1,
  [13618] = 4,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(954), 1,
      aux_sym_other_lit_token1,
    ACTIONS(956), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(369), 1,
      aux_sym_other_lit_repeat1,
  [13631] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(958), 1,
      anon_sym_LF,
    ACTIONS(960), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13642] = 4,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(956), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(962), 1,
      aux_sym_other_lit_token1,
    STATE(368), 1,
      aux_sym_other_lit_repeat1,
  [13655] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_LF,
    ACTIONS(966), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13666] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(968), 1,
      anon_sym_RPAREN,
    STATE(247), 1,
      aux_sym_expression_list_repeat1,
  [13679] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(972), 1,
      anon_sym_SEMI,
    ACTIONS(970), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13690] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(976), 1,
      anon_sym_SEMI,
    ACTIONS(974), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13701] = 4,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(978), 1,
      aux_sym_other_lit_token1,
    ACTIONS(980), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(382), 1,
      aux_sym_other_lit_repeat1,
  [13714] = 4,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(982), 1,
      aux_sym_other_lit_token1,
    STATE(342), 1,
      aux_sym_other_lit_repeat1,
  [13727] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_COLON,
    ACTIONS(984), 1,
      anon_sym_COMMA,
    STATE(370), 1,
      aux_sym_enum_declaration_repeat1,
  [13740] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_COMMA,
    ACTIONS(987), 1,
      anon_sym_RBRACE,
    STATE(374), 1,
      aux_sym_dict_literal_repeat1,
  [13753] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(989), 1,
      anon_sym_RPAREN,
    STATE(247), 1,
      aux_sym_expression_list_repeat1,
  [13766] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_SEMI,
    ACTIONS(991), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      anon_sym_COMMA,
    ACTIONS(998), 1,
      anon_sym_RBRACE,
    STATE(374), 1,
      aux_sym_dict_literal_repeat1,
  [13790] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_LF,
    ACTIONS(906), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13801] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(966), 1,
      anon_sym_SEMI,
    ACTIONS(964), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13812] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_SEMI,
    ACTIONS(958), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13823] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_COMMA,
    ACTIONS(1000), 1,
      anon_sym_COLON,
    STATE(349), 1,
      aux_sym_enum_declaration_repeat1,
  [13836] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(1002), 1,
      anon_sym_RBRACK,
    STATE(247), 1,
      aux_sym_expression_list_repeat1,
  [13849] = 4,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(978), 1,
      aux_sym_other_lit_token1,
    ACTIONS(1004), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(382), 1,
      aux_sym_other_lit_repeat1,
  [13862] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_LF,
    ACTIONS(898), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13873] = 4,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(1006), 1,
      aux_sym_other_lit_token1,
    STATE(382), 1,
      aux_sym_other_lit_repeat1,
  [13886] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LF,
    ACTIONS(406), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13897] = 4,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(982), 1,
      aux_sym_other_lit_token1,
    ACTIONS(1004), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(342), 1,
      aux_sym_other_lit_repeat1,
  [13910] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_LF,
    ACTIONS(789), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_STAR,
  [13930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      anon_sym_COLON,
    ACTIONS(1009), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13941] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_LF,
    ACTIONS(498), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13952] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_LF,
    ACTIONS(848), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13963] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_COMMA,
    ACTIONS(1013), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_dict_literal_repeat1,
  [13976] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LF,
    ACTIONS(514), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13987] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LF,
    ACTIONS(518), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13998] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_LF,
    ACTIONS(494), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14009] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_LF,
    ACTIONS(490), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_COMMA,
    ACTIONS(1015), 1,
      anon_sym_RBRACE,
    STATE(371), 1,
      aux_sym_dict_literal_repeat1,
  [14033] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_LF,
    ACTIONS(486), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14044] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_LF,
    ACTIONS(482), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14055] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_COMMA,
    ACTIONS(1017), 1,
      anon_sym_RPAREN,
    STATE(341), 1,
      aux_sym_function_declaration_repeat1,
  [14068] = 4,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(1019), 1,
      aux_sym_other_lit_token1,
    ACTIONS(1021), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(380), 1,
      aux_sym_other_lit_repeat1,
  [14081] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_LF,
    ACTIONS(510), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14092] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_LF,
    ACTIONS(506), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14103] = 4,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(1021), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(1023), 1,
      aux_sym_other_lit_token1,
    STATE(384), 1,
      aux_sym_other_lit_repeat1,
  [14116] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_LF,
    ACTIONS(502), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14127] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_SEMI,
    ACTIONS(915), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [14138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_COLON,
    ACTIONS(1027), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [14149] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_SEMI,
    ACTIONS(878), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [14160] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(1031), 1,
      anon_sym_SEMI,
    ACTIONS(1029), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [14171] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(1033), 1,
      anon_sym_RPAREN,
    STATE(247), 1,
      aux_sym_expression_list_repeat1,
  [14184] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(1035), 1,
      anon_sym_RPAREN,
    STATE(247), 1,
      aux_sym_expression_list_repeat1,
  [14197] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_COMMA,
    ACTIONS(1037), 1,
      anon_sym_RPAREN,
    STATE(330), 1,
      aux_sym_function_declaration_repeat1,
  [14210] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_LF,
    ACTIONS(972), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [14221] = 4,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(1039), 1,
      aux_sym_other_lit_token1,
    ACTIONS(1041), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(423), 1,
      aux_sym_other_lit_repeat1,
  [14234] = 4,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(1041), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(1043), 1,
      aux_sym_other_lit_token1,
    STATE(424), 1,
      aux_sym_other_lit_repeat1,
  [14247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      anon_sym_COLON,
    ACTIONS(1047), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [14258] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(1051), 1,
      anon_sym_SEMI,
    ACTIONS(1049), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [14269] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LF,
    ACTIONS(410), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [14280] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_COMMA,
    ACTIONS(1053), 1,
      anon_sym_COLON,
    STATE(370), 1,
      aux_sym_enum_declaration_repeat1,
  [14293] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_COMMA,
    ACTIONS(1055), 1,
      anon_sym_RBRACE,
    STATE(430), 1,
      aux_sym_dict_literal_repeat1,
  [14306] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_LF,
    ACTIONS(793), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14317] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_LF,
    ACTIONS(993), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [14328] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(1057), 1,
      anon_sym_LF,
    ACTIONS(1059), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [14339] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_LF,
    ACTIONS(1051), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [14350] = 4,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(982), 1,
      aux_sym_other_lit_token1,
    ACTIONS(1061), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(342), 1,
      aux_sym_other_lit_repeat1,
  [14363] = 4,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(978), 1,
      aux_sym_other_lit_token1,
    ACTIONS(1061), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(382), 1,
      aux_sym_other_lit_repeat1,
  [14376] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(1029), 1,
      anon_sym_LF,
    ACTIONS(1031), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [14387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      sym_identifier,
    ACTIONS(1063), 1,
      anon_sym_RPAREN,
    STATE(410), 1,
      sym_param_spec,
  [14400] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(1059), 1,
      anon_sym_SEMI,
    ACTIONS(1057), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [14411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(1065), 1,
      anon_sym_RBRACK,
    STATE(247), 1,
      aux_sym_expression_list_repeat1,
  [14424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(1067), 1,
      anon_sym_RPAREN,
    STATE(247), 1,
      aux_sym_expression_list_repeat1,
  [14437] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_COMMA,
    ACTIONS(1069), 1,
      anon_sym_RBRACE,
    STATE(374), 1,
      aux_sym_dict_literal_repeat1,
  [14450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    STATE(392), 1,
      sym_func_spec,
  [14460] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1071), 1,
      sym_identifier,
    STATE(87), 1,
      sym_field_identifier,
  [14470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      anon_sym_from,
    STATE(461), 1,
      sym_for_range_clause,
  [14480] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(974), 1,
      anon_sym_LF,
    ACTIONS(976), 1,
      anon_sym_SEMI,
  [14490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      sym_identifier,
    STATE(344), 1,
      sym_var_decl_item,
  [14500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
    STATE(404), 1,
      sym_block,
  [14510] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_LF,
    ACTIONS(902), 1,
      anon_sym_SEMI,
  [14520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    STATE(381), 1,
      sym_block,
  [14530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_LPAREN,
    STATE(320), 1,
      sym_func_spec,
  [14540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    STATE(448), 1,
      sym_block,
  [14550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    STATE(446), 1,
      sym_func_spec,
  [14560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
    STATE(353), 1,
      sym_block,
  [14570] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      sym_identifier,
    STATE(300), 1,
      sym_var_decl_item,
  [14580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_LPAREN,
    STATE(316), 1,
      sym_func_spec,
  [14590] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      sym_identifier,
    STATE(451), 1,
      sym_param_spec,
  [14600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      sym_identifier,
    STATE(299), 1,
      sym_var_decl_item,
  [14618] = 3,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_LF,
    ACTIONS(937), 1,
      anon_sym_SEMI,
  [14628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14636] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
    STATE(376), 1,
      sym_block,
  [14646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
    STATE(367), 1,
      sym_block,
  [14664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    STATE(434), 1,
      sym_block,
  [14674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      sym_identifier,
    STATE(267), 1,
      sym_var_decl_item,
  [14684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    STATE(169), 1,
      sym_func_spec,
  [14694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    STATE(437), 1,
      sym_block,
  [14712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    STATE(345), 1,
      sym_block,
  [14722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(998), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [14738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    STATE(364), 1,
      sym_block,
  [14748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      anon_sym_from,
    STATE(450), 1,
      sym_for_range_clause,
  [14758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    STATE(389), 1,
      sym_func_spec,
  [14768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
    STATE(339), 1,
      sym_block,
  [14778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      sym_identifier,
    STATE(111), 1,
      sym_field_identifier,
  [14788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
    STATE(338), 1,
      sym_block,
  [14798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 1,
      sym_identifier,
    STATE(151), 1,
      sym_field_identifier,
  [14808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      sym_identifier,
  [14815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 1,
      sym_identifier,
  [14822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 1,
      anon_sym_RPAREN,
  [14829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_RBRACK,
  [14836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 1,
      sym_identifier,
  [14843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      anon_sym_DASH_GT,
  [14850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1095), 1,
      anon_sym_LPAREN,
  [14857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 1,
      sym_identifier,
  [14864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1099), 1,
      anon_sym_RBRACK,
  [14871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1101), 1,
      sym_identifier,
  [14878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1103), 1,
      anon_sym_RBRACK,
  [14885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      anon_sym_RBRACK,
  [14892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1107), 1,
      anon_sym_DASH_GT,
  [14899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1109), 1,
      ts_builtin_sym_end,
  [14906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_RBRACK,
  [14913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1111), 1,
      anon_sym_DASH_GT,
  [14920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1113), 1,
      anon_sym_DASH_GT,
  [14927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1115), 1,
      anon_sym_DASH_GT,
  [14934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 1,
      anon_sym_RBRACE,
  [14941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1119), 1,
      sym_identifier,
  [14948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      anon_sym_RBRACE,
  [14955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1123), 1,
      sym_identifier,
  [14962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1125), 1,
      anon_sym_LPAREN,
  [14969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 1,
      anon_sym_LBRACK,
  [14976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 1,
      anon_sym_COMMA,
  [14983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1131), 1,
      anon_sym_RBRACK,
  [14990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 1,
      sym_identifier,
  [14997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
  [15004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 1,
      sym_identifier,
  [15011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 1,
      anon_sym_DASH_GT,
  [15018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1141), 1,
      sym_identifier,
  [15025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1143), 1,
      anon_sym_RPAREN,
  [15032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      anon_sym_RPAREN,
  [15039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1147), 1,
      anon_sym_DASH_GT,
  [15046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 1,
      anon_sym_RPAREN,
  [15053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym_identifier,
  [15060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1153), 1,
      anon_sym_LBRACK,
  [15067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      sym_identifier,
  [15074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 1,
      anon_sym_LBRACK,
  [15081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 1,
      sym_identifier,
  [15088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      anon_sym_DASH_GT,
  [15095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 1,
      anon_sym_DASH_GT,
  [15102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1165), 1,
      anon_sym_RPAREN,
  [15109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      anon_sym_RPAREN,
  [15116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1169), 1,
      sym_identifier,
  [15123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1171), 1,
      anon_sym_LBRACK,
  [15130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1173), 1,
      anon_sym_BQUOTE,
  [15137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      anon_sym_DASH_GT,
  [15144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1177), 1,
      anon_sym_COMMA,
  [15151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1179), 1,
      anon_sym_COMMA,
  [15158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_RBRACK,
  [15165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      sym_identifier,
  [15172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1183), 1,
      anon_sym_LBRACK,
  [15179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_BQUOTE,
  [15186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1187), 1,
      anon_sym_BQUOTE,
  [15193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
  [15200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1191), 1,
      anon_sym_COMMA,
  [15207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1193), 1,
      anon_sym_DASH_GT,
  [15214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1195), 1,
      anon_sym_RBRACK,
  [15221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1197), 1,
      anon_sym_RBRACK,
  [15228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1199), 1,
      sym_identifier,
  [15235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1201), 1,
      sym_identifier,
  [15242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1203), 1,
      anon_sym_DASH_GT,
  [15249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      anon_sym_LBRACK,
  [15256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1207), 1,
      anon_sym_LBRACK,
  [15263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1209), 1,
      anon_sym_LBRACK,
  [15270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1211), 1,
      anon_sym_LBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 134,
  [SMALL_STATE(4)] = 268,
  [SMALL_STATE(5)] = 391,
  [SMALL_STATE(6)] = 514,
  [SMALL_STATE(7)] = 634,
  [SMALL_STATE(8)] = 754,
  [SMALL_STATE(9)] = 871,
  [SMALL_STATE(10)] = 988,
  [SMALL_STATE(11)] = 1102,
  [SMALL_STATE(12)] = 1181,
  [SMALL_STATE(13)] = 1260,
  [SMALL_STATE(14)] = 1334,
  [SMALL_STATE(15)] = 1408,
  [SMALL_STATE(16)] = 1482,
  [SMALL_STATE(17)] = 1556,
  [SMALL_STATE(18)] = 1630,
  [SMALL_STATE(19)] = 1704,
  [SMALL_STATE(20)] = 1778,
  [SMALL_STATE(21)] = 1852,
  [SMALL_STATE(22)] = 1926,
  [SMALL_STATE(23)] = 2000,
  [SMALL_STATE(24)] = 2074,
  [SMALL_STATE(25)] = 2148,
  [SMALL_STATE(26)] = 2219,
  [SMALL_STATE(27)] = 2290,
  [SMALL_STATE(28)] = 2361,
  [SMALL_STATE(29)] = 2432,
  [SMALL_STATE(30)] = 2503,
  [SMALL_STATE(31)] = 2574,
  [SMALL_STATE(32)] = 2645,
  [SMALL_STATE(33)] = 2716,
  [SMALL_STATE(34)] = 2787,
  [SMALL_STATE(35)] = 2858,
  [SMALL_STATE(36)] = 2929,
  [SMALL_STATE(37)] = 3000,
  [SMALL_STATE(38)] = 3071,
  [SMALL_STATE(39)] = 3142,
  [SMALL_STATE(40)] = 3213,
  [SMALL_STATE(41)] = 3284,
  [SMALL_STATE(42)] = 3355,
  [SMALL_STATE(43)] = 3426,
  [SMALL_STATE(44)] = 3497,
  [SMALL_STATE(45)] = 3568,
  [SMALL_STATE(46)] = 3639,
  [SMALL_STATE(47)] = 3710,
  [SMALL_STATE(48)] = 3781,
  [SMALL_STATE(49)] = 3852,
  [SMALL_STATE(50)] = 3923,
  [SMALL_STATE(51)] = 3994,
  [SMALL_STATE(52)] = 4065,
  [SMALL_STATE(53)] = 4136,
  [SMALL_STATE(54)] = 4207,
  [SMALL_STATE(55)] = 4278,
  [SMALL_STATE(56)] = 4349,
  [SMALL_STATE(57)] = 4420,
  [SMALL_STATE(58)] = 4491,
  [SMALL_STATE(59)] = 4562,
  [SMALL_STATE(60)] = 4606,
  [SMALL_STATE(61)] = 4650,
  [SMALL_STATE(62)] = 4697,
  [SMALL_STATE(63)] = 4744,
  [SMALL_STATE(64)] = 4784,
  [SMALL_STATE(65)] = 4818,
  [SMALL_STATE(66)] = 4852,
  [SMALL_STATE(67)] = 4886,
  [SMALL_STATE(68)] = 4920,
  [SMALL_STATE(69)] = 4954,
  [SMALL_STATE(70)] = 5002,
  [SMALL_STATE(71)] = 5036,
  [SMALL_STATE(72)] = 5080,
  [SMALL_STATE(73)] = 5114,
  [SMALL_STATE(74)] = 5148,
  [SMALL_STATE(75)] = 5182,
  [SMALL_STATE(76)] = 5216,
  [SMALL_STATE(77)] = 5250,
  [SMALL_STATE(78)] = 5300,
  [SMALL_STATE(79)] = 5334,
  [SMALL_STATE(80)] = 5368,
  [SMALL_STATE(81)] = 5410,
  [SMALL_STATE(82)] = 5448,
  [SMALL_STATE(83)] = 5482,
  [SMALL_STATE(84)] = 5516,
  [SMALL_STATE(85)] = 5550,
  [SMALL_STATE(86)] = 5584,
  [SMALL_STATE(87)] = 5618,
  [SMALL_STATE(88)] = 5652,
  [SMALL_STATE(89)] = 5686,
  [SMALL_STATE(90)] = 5724,
  [SMALL_STATE(91)] = 5762,
  [SMALL_STATE(92)] = 5800,
  [SMALL_STATE(93)] = 5834,
  [SMALL_STATE(94)] = 5868,
  [SMALL_STATE(95)] = 5902,
  [SMALL_STATE(96)] = 5955,
  [SMALL_STATE(97)] = 5990,
  [SMALL_STATE(98)] = 6043,
  [SMALL_STATE(99)] = 6096,
  [SMALL_STATE(100)] = 6149,
  [SMALL_STATE(101)] = 6204,
  [SMALL_STATE(102)] = 6257,
  [SMALL_STATE(103)] = 6310,
  [SMALL_STATE(104)] = 6342,
  [SMALL_STATE(105)] = 6374,
  [SMALL_STATE(106)] = 6406,
  [SMALL_STATE(107)] = 6438,
  [SMALL_STATE(108)] = 6470,
  [SMALL_STATE(109)] = 6506,
  [SMALL_STATE(110)] = 6544,
  [SMALL_STATE(111)] = 6576,
  [SMALL_STATE(112)] = 6608,
  [SMALL_STATE(113)] = 6640,
  [SMALL_STATE(114)] = 6672,
  [SMALL_STATE(115)] = 6708,
  [SMALL_STATE(116)] = 6748,
  [SMALL_STATE(117)] = 6790,
  [SMALL_STATE(118)] = 6834,
  [SMALL_STATE(119)] = 6866,
  [SMALL_STATE(120)] = 6898,
  [SMALL_STATE(121)] = 6930,
  [SMALL_STATE(122)] = 6962,
  [SMALL_STATE(123)] = 6994,
  [SMALL_STATE(124)] = 7026,
  [SMALL_STATE(125)] = 7058,
  [SMALL_STATE(126)] = 7090,
  [SMALL_STATE(127)] = 7122,
  [SMALL_STATE(128)] = 7154,
  [SMALL_STATE(129)] = 7186,
  [SMALL_STATE(130)] = 7218,
  [SMALL_STATE(131)] = 7250,
  [SMALL_STATE(132)] = 7282,
  [SMALL_STATE(133)] = 7314,
  [SMALL_STATE(134)] = 7364,
  [SMALL_STATE(135)] = 7396,
  [SMALL_STATE(136)] = 7428,
  [SMALL_STATE(137)] = 7460,
  [SMALL_STATE(138)] = 7492,
  [SMALL_STATE(139)] = 7524,
  [SMALL_STATE(140)] = 7556,
  [SMALL_STATE(141)] = 7588,
  [SMALL_STATE(142)] = 7620,
  [SMALL_STATE(143)] = 7652,
  [SMALL_STATE(144)] = 7684,
  [SMALL_STATE(145)] = 7716,
  [SMALL_STATE(146)] = 7748,
  [SMALL_STATE(147)] = 7780,
  [SMALL_STATE(148)] = 7812,
  [SMALL_STATE(149)] = 7850,
  [SMALL_STATE(150)] = 7882,
  [SMALL_STATE(151)] = 7914,
  [SMALL_STATE(152)] = 7946,
  [SMALL_STATE(153)] = 7982,
  [SMALL_STATE(154)] = 8022,
  [SMALL_STATE(155)] = 8064,
  [SMALL_STATE(156)] = 8096,
  [SMALL_STATE(157)] = 8140,
  [SMALL_STATE(158)] = 8172,
  [SMALL_STATE(159)] = 8204,
  [SMALL_STATE(160)] = 8236,
  [SMALL_STATE(161)] = 8268,
  [SMALL_STATE(162)] = 8300,
  [SMALL_STATE(163)] = 8332,
  [SMALL_STATE(164)] = 8364,
  [SMALL_STATE(165)] = 8396,
  [SMALL_STATE(166)] = 8428,
  [SMALL_STATE(167)] = 8464,
  [SMALL_STATE(168)] = 8496,
  [SMALL_STATE(169)] = 8528,
  [SMALL_STATE(170)] = 8560,
  [SMALL_STATE(171)] = 8610,
  [SMALL_STATE(172)] = 8642,
  [SMALL_STATE(173)] = 8674,
  [SMALL_STATE(174)] = 8706,
  [SMALL_STATE(175)] = 8756,
  [SMALL_STATE(176)] = 8805,
  [SMALL_STATE(177)] = 8854,
  [SMALL_STATE(178)] = 8903,
  [SMALL_STATE(179)] = 8952,
  [SMALL_STATE(180)] = 9001,
  [SMALL_STATE(181)] = 9050,
  [SMALL_STATE(182)] = 9099,
  [SMALL_STATE(183)] = 9148,
  [SMALL_STATE(184)] = 9197,
  [SMALL_STATE(185)] = 9246,
  [SMALL_STATE(186)] = 9295,
  [SMALL_STATE(187)] = 9344,
  [SMALL_STATE(188)] = 9393,
  [SMALL_STATE(189)] = 9442,
  [SMALL_STATE(190)] = 9491,
  [SMALL_STATE(191)] = 9540,
  [SMALL_STATE(192)] = 9589,
  [SMALL_STATE(193)] = 9638,
  [SMALL_STATE(194)] = 9687,
  [SMALL_STATE(195)] = 9736,
  [SMALL_STATE(196)] = 9785,
  [SMALL_STATE(197)] = 9834,
  [SMALL_STATE(198)] = 9883,
  [SMALL_STATE(199)] = 9932,
  [SMALL_STATE(200)] = 9981,
  [SMALL_STATE(201)] = 10030,
  [SMALL_STATE(202)] = 10079,
  [SMALL_STATE(203)] = 10128,
  [SMALL_STATE(204)] = 10177,
  [SMALL_STATE(205)] = 10226,
  [SMALL_STATE(206)] = 10275,
  [SMALL_STATE(207)] = 10324,
  [SMALL_STATE(208)] = 10373,
  [SMALL_STATE(209)] = 10422,
  [SMALL_STATE(210)] = 10471,
  [SMALL_STATE(211)] = 10519,
  [SMALL_STATE(212)] = 10567,
  [SMALL_STATE(213)] = 10612,
  [SMALL_STATE(214)] = 10655,
  [SMALL_STATE(215)] = 10700,
  [SMALL_STATE(216)] = 10745,
  [SMALL_STATE(217)] = 10788,
  [SMALL_STATE(218)] = 10833,
  [SMALL_STATE(219)] = 10878,
  [SMALL_STATE(220)] = 10926,
  [SMALL_STATE(221)] = 10974,
  [SMALL_STATE(222)] = 11022,
  [SMALL_STATE(223)] = 11070,
  [SMALL_STATE(224)] = 11118,
  [SMALL_STATE(225)] = 11166,
  [SMALL_STATE(226)] = 11214,
  [SMALL_STATE(227)] = 11262,
  [SMALL_STATE(228)] = 11310,
  [SMALL_STATE(229)] = 11353,
  [SMALL_STATE(230)] = 11398,
  [SMALL_STATE(231)] = 11443,
  [SMALL_STATE(232)] = 11488,
  [SMALL_STATE(233)] = 11533,
  [SMALL_STATE(234)] = 11575,
  [SMALL_STATE(235)] = 11617,
  [SMALL_STATE(236)] = 11659,
  [SMALL_STATE(237)] = 11701,
  [SMALL_STATE(238)] = 11743,
  [SMALL_STATE(239)] = 11785,
  [SMALL_STATE(240)] = 11816,
  [SMALL_STATE(241)] = 11847,
  [SMALL_STATE(242)] = 11878,
  [SMALL_STATE(243)] = 11907,
  [SMALL_STATE(244)] = 11936,
  [SMALL_STATE(245)] = 11965,
  [SMALL_STATE(246)] = 11986,
  [SMALL_STATE(247)] = 12011,
  [SMALL_STATE(248)] = 12030,
  [SMALL_STATE(249)] = 12051,
  [SMALL_STATE(250)] = 12076,
  [SMALL_STATE(251)] = 12093,
  [SMALL_STATE(252)] = 12106,
  [SMALL_STATE(253)] = 12119,
  [SMALL_STATE(254)] = 12136,
  [SMALL_STATE(255)] = 12153,
  [SMALL_STATE(256)] = 12166,
  [SMALL_STATE(257)] = 12183,
  [SMALL_STATE(258)] = 12200,
  [SMALL_STATE(259)] = 12217,
  [SMALL_STATE(260)] = 12234,
  [SMALL_STATE(261)] = 12251,
  [SMALL_STATE(262)] = 12268,
  [SMALL_STATE(263)] = 12281,
  [SMALL_STATE(264)] = 12294,
  [SMALL_STATE(265)] = 12311,
  [SMALL_STATE(266)] = 12328,
  [SMALL_STATE(267)] = 12343,
  [SMALL_STATE(268)] = 12360,
  [SMALL_STATE(269)] = 12377,
  [SMALL_STATE(270)] = 12390,
  [SMALL_STATE(271)] = 12407,
  [SMALL_STATE(272)] = 12420,
  [SMALL_STATE(273)] = 12437,
  [SMALL_STATE(274)] = 12450,
  [SMALL_STATE(275)] = 12467,
  [SMALL_STATE(276)] = 12481,
  [SMALL_STATE(277)] = 12497,
  [SMALL_STATE(278)] = 12511,
  [SMALL_STATE(279)] = 12527,
  [SMALL_STATE(280)] = 12543,
  [SMALL_STATE(281)] = 12557,
  [SMALL_STATE(282)] = 12569,
  [SMALL_STATE(283)] = 12583,
  [SMALL_STATE(284)] = 12599,
  [SMALL_STATE(285)] = 12615,
  [SMALL_STATE(286)] = 12631,
  [SMALL_STATE(287)] = 12647,
  [SMALL_STATE(288)] = 12663,
  [SMALL_STATE(289)] = 12675,
  [SMALL_STATE(290)] = 12687,
  [SMALL_STATE(291)] = 12703,
  [SMALL_STATE(292)] = 12715,
  [SMALL_STATE(293)] = 12731,
  [SMALL_STATE(294)] = 12747,
  [SMALL_STATE(295)] = 12761,
  [SMALL_STATE(296)] = 12773,
  [SMALL_STATE(297)] = 12789,
  [SMALL_STATE(298)] = 12805,
  [SMALL_STATE(299)] = 12819,
  [SMALL_STATE(300)] = 12831,
  [SMALL_STATE(301)] = 12847,
  [SMALL_STATE(302)] = 12863,
  [SMALL_STATE(303)] = 12875,
  [SMALL_STATE(304)] = 12891,
  [SMALL_STATE(305)] = 12907,
  [SMALL_STATE(306)] = 12923,
  [SMALL_STATE(307)] = 12939,
  [SMALL_STATE(308)] = 12955,
  [SMALL_STATE(309)] = 12969,
  [SMALL_STATE(310)] = 12981,
  [SMALL_STATE(311)] = 12997,
  [SMALL_STATE(312)] = 13009,
  [SMALL_STATE(313)] = 13021,
  [SMALL_STATE(314)] = 13037,
  [SMALL_STATE(315)] = 13053,
  [SMALL_STATE(316)] = 13065,
  [SMALL_STATE(317)] = 13077,
  [SMALL_STATE(318)] = 13089,
  [SMALL_STATE(319)] = 13101,
  [SMALL_STATE(320)] = 13113,
  [SMALL_STATE(321)] = 13125,
  [SMALL_STATE(322)] = 13137,
  [SMALL_STATE(323)] = 13151,
  [SMALL_STATE(324)] = 13165,
  [SMALL_STATE(325)] = 13181,
  [SMALL_STATE(326)] = 13197,
  [SMALL_STATE(327)] = 13211,
  [SMALL_STATE(328)] = 13227,
  [SMALL_STATE(329)] = 13239,
  [SMALL_STATE(330)] = 13255,
  [SMALL_STATE(331)] = 13268,
  [SMALL_STATE(332)] = 13279,
  [SMALL_STATE(333)] = 13290,
  [SMALL_STATE(334)] = 13301,
  [SMALL_STATE(335)] = 13312,
  [SMALL_STATE(336)] = 13323,
  [SMALL_STATE(337)] = 13336,
  [SMALL_STATE(338)] = 13347,
  [SMALL_STATE(339)] = 13358,
  [SMALL_STATE(340)] = 13369,
  [SMALL_STATE(341)] = 13380,
  [SMALL_STATE(342)] = 13393,
  [SMALL_STATE(343)] = 13406,
  [SMALL_STATE(344)] = 13417,
  [SMALL_STATE(345)] = 13428,
  [SMALL_STATE(346)] = 13439,
  [SMALL_STATE(347)] = 13450,
  [SMALL_STATE(348)] = 13461,
  [SMALL_STATE(349)] = 13472,
  [SMALL_STATE(350)] = 13485,
  [SMALL_STATE(351)] = 13496,
  [SMALL_STATE(352)] = 13509,
  [SMALL_STATE(353)] = 13520,
  [SMALL_STATE(354)] = 13531,
  [SMALL_STATE(355)] = 13544,
  [SMALL_STATE(356)] = 13555,
  [SMALL_STATE(357)] = 13568,
  [SMALL_STATE(358)] = 13581,
  [SMALL_STATE(359)] = 13592,
  [SMALL_STATE(360)] = 13605,
  [SMALL_STATE(361)] = 13618,
  [SMALL_STATE(362)] = 13631,
  [SMALL_STATE(363)] = 13642,
  [SMALL_STATE(364)] = 13655,
  [SMALL_STATE(365)] = 13666,
  [SMALL_STATE(366)] = 13679,
  [SMALL_STATE(367)] = 13690,
  [SMALL_STATE(368)] = 13701,
  [SMALL_STATE(369)] = 13714,
  [SMALL_STATE(370)] = 13727,
  [SMALL_STATE(371)] = 13740,
  [SMALL_STATE(372)] = 13753,
  [SMALL_STATE(373)] = 13766,
  [SMALL_STATE(374)] = 13777,
  [SMALL_STATE(375)] = 13790,
  [SMALL_STATE(376)] = 13801,
  [SMALL_STATE(377)] = 13812,
  [SMALL_STATE(378)] = 13823,
  [SMALL_STATE(379)] = 13836,
  [SMALL_STATE(380)] = 13849,
  [SMALL_STATE(381)] = 13862,
  [SMALL_STATE(382)] = 13873,
  [SMALL_STATE(383)] = 13886,
  [SMALL_STATE(384)] = 13897,
  [SMALL_STATE(385)] = 13910,
  [SMALL_STATE(386)] = 13921,
  [SMALL_STATE(387)] = 13930,
  [SMALL_STATE(388)] = 13941,
  [SMALL_STATE(389)] = 13952,
  [SMALL_STATE(390)] = 13963,
  [SMALL_STATE(391)] = 13976,
  [SMALL_STATE(392)] = 13987,
  [SMALL_STATE(393)] = 13998,
  [SMALL_STATE(394)] = 14009,
  [SMALL_STATE(395)] = 14020,
  [SMALL_STATE(396)] = 14033,
  [SMALL_STATE(397)] = 14044,
  [SMALL_STATE(398)] = 14055,
  [SMALL_STATE(399)] = 14068,
  [SMALL_STATE(400)] = 14081,
  [SMALL_STATE(401)] = 14092,
  [SMALL_STATE(402)] = 14103,
  [SMALL_STATE(403)] = 14116,
  [SMALL_STATE(404)] = 14127,
  [SMALL_STATE(405)] = 14138,
  [SMALL_STATE(406)] = 14149,
  [SMALL_STATE(407)] = 14160,
  [SMALL_STATE(408)] = 14171,
  [SMALL_STATE(409)] = 14184,
  [SMALL_STATE(410)] = 14197,
  [SMALL_STATE(411)] = 14210,
  [SMALL_STATE(412)] = 14221,
  [SMALL_STATE(413)] = 14234,
  [SMALL_STATE(414)] = 14247,
  [SMALL_STATE(415)] = 14258,
  [SMALL_STATE(416)] = 14269,
  [SMALL_STATE(417)] = 14280,
  [SMALL_STATE(418)] = 14293,
  [SMALL_STATE(419)] = 14306,
  [SMALL_STATE(420)] = 14317,
  [SMALL_STATE(421)] = 14328,
  [SMALL_STATE(422)] = 14339,
  [SMALL_STATE(423)] = 14350,
  [SMALL_STATE(424)] = 14363,
  [SMALL_STATE(425)] = 14376,
  [SMALL_STATE(426)] = 14387,
  [SMALL_STATE(427)] = 14400,
  [SMALL_STATE(428)] = 14411,
  [SMALL_STATE(429)] = 14424,
  [SMALL_STATE(430)] = 14437,
  [SMALL_STATE(431)] = 14450,
  [SMALL_STATE(432)] = 14460,
  [SMALL_STATE(433)] = 14470,
  [SMALL_STATE(434)] = 14480,
  [SMALL_STATE(435)] = 14490,
  [SMALL_STATE(436)] = 14500,
  [SMALL_STATE(437)] = 14510,
  [SMALL_STATE(438)] = 14520,
  [SMALL_STATE(439)] = 14530,
  [SMALL_STATE(440)] = 14540,
  [SMALL_STATE(441)] = 14550,
  [SMALL_STATE(442)] = 14560,
  [SMALL_STATE(443)] = 14570,
  [SMALL_STATE(444)] = 14580,
  [SMALL_STATE(445)] = 14590,
  [SMALL_STATE(446)] = 14600,
  [SMALL_STATE(447)] = 14608,
  [SMALL_STATE(448)] = 14618,
  [SMALL_STATE(449)] = 14628,
  [SMALL_STATE(450)] = 14636,
  [SMALL_STATE(451)] = 14646,
  [SMALL_STATE(452)] = 14654,
  [SMALL_STATE(453)] = 14664,
  [SMALL_STATE(454)] = 14674,
  [SMALL_STATE(455)] = 14684,
  [SMALL_STATE(456)] = 14694,
  [SMALL_STATE(457)] = 14702,
  [SMALL_STATE(458)] = 14712,
  [SMALL_STATE(459)] = 14722,
  [SMALL_STATE(460)] = 14730,
  [SMALL_STATE(461)] = 14738,
  [SMALL_STATE(462)] = 14748,
  [SMALL_STATE(463)] = 14758,
  [SMALL_STATE(464)] = 14768,
  [SMALL_STATE(465)] = 14778,
  [SMALL_STATE(466)] = 14788,
  [SMALL_STATE(467)] = 14798,
  [SMALL_STATE(468)] = 14808,
  [SMALL_STATE(469)] = 14815,
  [SMALL_STATE(470)] = 14822,
  [SMALL_STATE(471)] = 14829,
  [SMALL_STATE(472)] = 14836,
  [SMALL_STATE(473)] = 14843,
  [SMALL_STATE(474)] = 14850,
  [SMALL_STATE(475)] = 14857,
  [SMALL_STATE(476)] = 14864,
  [SMALL_STATE(477)] = 14871,
  [SMALL_STATE(478)] = 14878,
  [SMALL_STATE(479)] = 14885,
  [SMALL_STATE(480)] = 14892,
  [SMALL_STATE(481)] = 14899,
  [SMALL_STATE(482)] = 14906,
  [SMALL_STATE(483)] = 14913,
  [SMALL_STATE(484)] = 14920,
  [SMALL_STATE(485)] = 14927,
  [SMALL_STATE(486)] = 14934,
  [SMALL_STATE(487)] = 14941,
  [SMALL_STATE(488)] = 14948,
  [SMALL_STATE(489)] = 14955,
  [SMALL_STATE(490)] = 14962,
  [SMALL_STATE(491)] = 14969,
  [SMALL_STATE(492)] = 14976,
  [SMALL_STATE(493)] = 14983,
  [SMALL_STATE(494)] = 14990,
  [SMALL_STATE(495)] = 14997,
  [SMALL_STATE(496)] = 15004,
  [SMALL_STATE(497)] = 15011,
  [SMALL_STATE(498)] = 15018,
  [SMALL_STATE(499)] = 15025,
  [SMALL_STATE(500)] = 15032,
  [SMALL_STATE(501)] = 15039,
  [SMALL_STATE(502)] = 15046,
  [SMALL_STATE(503)] = 15053,
  [SMALL_STATE(504)] = 15060,
  [SMALL_STATE(505)] = 15067,
  [SMALL_STATE(506)] = 15074,
  [SMALL_STATE(507)] = 15081,
  [SMALL_STATE(508)] = 15088,
  [SMALL_STATE(509)] = 15095,
  [SMALL_STATE(510)] = 15102,
  [SMALL_STATE(511)] = 15109,
  [SMALL_STATE(512)] = 15116,
  [SMALL_STATE(513)] = 15123,
  [SMALL_STATE(514)] = 15130,
  [SMALL_STATE(515)] = 15137,
  [SMALL_STATE(516)] = 15144,
  [SMALL_STATE(517)] = 15151,
  [SMALL_STATE(518)] = 15158,
  [SMALL_STATE(519)] = 15165,
  [SMALL_STATE(520)] = 15172,
  [SMALL_STATE(521)] = 15179,
  [SMALL_STATE(522)] = 15186,
  [SMALL_STATE(523)] = 15193,
  [SMALL_STATE(524)] = 15200,
  [SMALL_STATE(525)] = 15207,
  [SMALL_STATE(526)] = 15214,
  [SMALL_STATE(527)] = 15221,
  [SMALL_STATE(528)] = 15228,
  [SMALL_STATE(529)] = 15235,
  [SMALL_STATE(530)] = 15242,
  [SMALL_STATE(531)] = 15249,
  [SMALL_STATE(532)] = 15256,
  [SMALL_STATE(533)] = 15263,
  [SMALL_STATE(534)] = 15270,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(62),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(27),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(24),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(25),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(5),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(519),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(487),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(58),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(512),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(443),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(528),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(126),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(126),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(124),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(123),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(416),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(11),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(313),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(326),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(402),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(399),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_literal, 3),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_literal, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 3),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 10),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 10),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_false, 1),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_false, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_literal, 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_composite_literal, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_true, 1),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_true, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 4),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 4),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 4),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_literal, 4),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_literal, 4),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_literal, 4),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_identifier, 1, .production_id = 11),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_identifier, 1, .production_id = 11),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 12),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, .production_id = 12),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 5),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 5),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 2),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_expression, 4, .production_id = 20),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_expression, 4, .production_id = 20),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 1),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 1),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expression_list, 1), SHIFT(53),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(202),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(125),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(125),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(529),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(96),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(531),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(513),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(532),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(455),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_spec, 5),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_spec, 5),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 6),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 6),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 5),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 5),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 4),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 4),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 2),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_spec, 8),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_spec, 8),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_spec, 7),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_spec, 7),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_spec, 6),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_spec, 6),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec_r, 1),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_spec_r, 1),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec_r, 2),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_spec_r, 2),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_kv, 3, .production_id = 13),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_range_clause, 4, .production_id = 28),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_stmt, 3, .production_id = 8),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__if_stmt, 3, .production_id = 8), SHIFT(246),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_stmt, 3, .production_id = 8),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_stmt, 5, .production_id = 23),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__if_elif_stmt, 5, .production_id = 23), SHIFT(306),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_stmt, 5, .production_id = 23),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_stmt, 4, .production_id = 17),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__if_elif_stmt, 4, .production_id = 17), SHIFT(324),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_stmt, 4, .production_id = 17),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__if_stmt, 3, .production_id = 8), SHIFT(249),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__if_elif_stmt, 5, .production_id = 23), SHIFT(314),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__if_elif_stmt, 4, .production_id = 17), SHIFT(310),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 2, .production_id = 25),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 2, .production_id = 25),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 2, .production_id = 25), SHIFT_REPEAT(38),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(33),
  [662] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 2, .production_id = 25), SHIFT_REPEAT(29),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_declaration_repeat1, 2),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_var_declaration_repeat1, 2),
  [669] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_var_declaration_repeat1, 2), SHIFT_REPEAT(447),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 1, .production_id = 15),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 1, .production_id = 15),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 2),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 2),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 3),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 3),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 2),
  [694] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(26),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_declaration_repeat1, 2),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_declaration_repeat1, 2),
  [701] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_declaration_repeat1, 2), SHIFT_REPEAT(496),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 3),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 3),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 3),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 2),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 2),
  [726] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(30),
  [729] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_declaration_repeat1, 2), SHIFT_REPEAT(475),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_clause, 3, .production_id = 8),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif_clause, 3, .production_id = 8),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 2),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 2),
  [740] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__if_elif_stmt_repeat1, 2), SHIFT_REPEAT(275),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__if_elif_stmt_repeat1, 2),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec, 1),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_spec, 1),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_decl_item, 3, .production_id = 19),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_decl_item, 3, .production_id = 19),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [823] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(10),
  [826] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(10),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [833] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_var_declaration_repeat1, 2), SHIFT_REPEAT(435),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_decl_item, 4, .production_id = 27),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_decl_item, 4, .production_id = 27),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec, 2),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_spec, 2),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_spec_repeat1, 2),
  [852] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_spec_repeat1, 2), SHIFT_REPEAT(199),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_content_single, 2),
  [857] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_content_single, 2), SHIFT_REPEAT(323),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_content_double, 2),
  [862] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_content_double, 2), SHIFT_REPEAT(325),
  [865] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_content_double, 2), SHIFT_REPEAT(325),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1, .production_id = 1),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1, .production_id = 1),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_else_stmt, 7, .production_id = 33),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_else_stmt, 7, .production_id = 33),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_else_stmt, 5, .production_id = 22),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_else_stmt, 5, .production_id = 22),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_else_stmt, 5, .production_id = 24),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_else_stmt, 5, .production_id = 24),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, .production_id = 9),
  [898] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3, .production_id = 9),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 26),
  [902] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 5, .production_id = 26),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3, .production_id = 10),
  [906] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 3, .production_id = 10),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [910] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_other_lit_repeat1, 2), SHIFT_REPEAT(342),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_other_lit_repeat1, 2),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2, .production_id = 21),
  [917] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2, .production_id = 21),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_else_stmt, 6, .production_id = 29),
  [921] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_else_stmt, 6, .production_id = 29),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_else_stmt, 6, .production_id = 30),
  [929] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_else_stmt, 6, .production_id = 30),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 32),
  [937] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, .production_id = 32),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2),
  [941] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2), SHIFT_REPEAT(445),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_else_stmt, 4, .production_id = 16),
  [960] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_else_stmt, 4, .production_id = 16),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 4, .production_id = 14),
  [966] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 4, .production_id = 14),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, .production_id = 6),
  [972] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2, .production_id = 6),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, .production_id = 34),
  [976] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 7, .production_id = 34),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [984] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_declaration_repeat1, 2), SHIFT_REPEAT(489),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [993] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [995] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_literal_repeat1, 2), SHIFT_REPEAT(21),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_literal_repeat1, 2),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [1006] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_other_lit_repeat1, 2), SHIFT_REPEAT(382),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_spec, 1, .production_id = 18),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [1023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1, .production_id = 2),
  [1031] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1, .production_id = 2),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1, .production_id = 3),
  [1051] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1, .production_id = 3),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1, .production_id = 4),
  [1059] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1, .production_id = 4),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_spec, 3, .production_id = 31),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1109] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
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
