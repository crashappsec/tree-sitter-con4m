#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 538
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 144
#define ALIAS_COUNT 0
#define TOKEN_COUNT 81
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
  anon_sym_DOLLAR = 21,
  anon_sym_if = 22,
  anon_sym_elif = 23,
  anon_sym_else = 24,
  anon_sym_STAR = 25,
  anon_sym_SLASH = 26,
  anon_sym_PERCENT = 27,
  anon_sym_EQ_EQ = 28,
  anon_sym_BANG_EQ = 29,
  anon_sym_LT = 30,
  anon_sym_LT_EQ = 31,
  anon_sym_GT = 32,
  anon_sym_GT_EQ = 33,
  anon_sym_AMP_AMP = 34,
  anon_sym_and = 35,
  anon_sym_PIPE_PIPE = 36,
  anon_sym_or = 37,
  anon_sym_void = 38,
  anon_sym_bool = 39,
  anon_sym_int = 40,
  anon_sym_char = 41,
  anon_sym_string = 42,
  anon_sym_float = 43,
  anon_sym_Duration = 44,
  anon_sym_IpAddr = 45,
  anon_sym_CIDR = 46,
  anon_sym_Size = 47,
  anon_sym_Date = 48,
  anon_sym_Time = 49,
  anon_sym_DateType = 50,
  anon_sym_BQUOTE = 51,
  anon_sym_typespec = 52,
  anon_sym_tuple = 53,
  anon_sym_list = 54,
  anon_sym_dict = 55,
  anon_sym_func = 56,
  anon_sym_DASH_GT = 57,
  anon_sym_var = 58,
  anon_sym_export = 59,
  sym_comment = 60,
  anon_sym_LT_LT = 61,
  aux_sym_other_lit_token1 = 62,
  anon_sym_GT_GT = 63,
  sym_int_literal = 64,
  sym_float_literal = 65,
  sym_imaginary_literal = 66,
  anon_sym_true = 67,
  anon_sym_True = 68,
  anon_sym_false = 69,
  anon_sym_False = 70,
  sym_continue_statement = 71,
  sym_break_statement = 72,
  anon_sym_return = 73,
  anon_sym_DQUOTE = 74,
  anon_sym_SQUOTE = 75,
  sym_escape_sequence = 76,
  aux_sym__quoted_string_content_double_token1 = 77,
  aux_sym__quoted_string_content_single_token1 = 78,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 79,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 80,
  sym_source_file = 81,
  sym__top_level_item = 82,
  sym__declaration = 83,
  sym__statement = 84,
  sym_unary_expression = 85,
  sym__expression = 86,
  sym_composite_literal = 87,
  sym_selector_expression = 88,
  sym_index_expression = 89,
  sym_parenthesized_expression = 90,
  sym_expression_list = 91,
  sym_block = 92,
  sym__statement_list = 93,
  sym_assignment_statement = 94,
  sym_enum_declaration = 95,
  sym_for_statement = 96,
  sym_for_range_clause = 97,
  sym_call_expression = 98,
  sym_argument_list = 99,
  sym_if_statement = 100,
  sym__if_stmt = 101,
  sym__if_elif_stmt = 102,
  sym__if_elif_else_stmt = 103,
  sym__if_else_stmt = 104,
  sym_elif_clause = 105,
  sym_else_clause = 106,
  sym_binary_expression = 107,
  sym_base_type_spec = 108,
  sym_type_spec = 109,
  sym_type_spec_r = 110,
  sym_func_spec = 111,
  sym_section = 112,
  sym_function_declaration = 113,
  sym_var_declaration = 114,
  sym_var_decl_item = 115,
  sym_param_spec = 116,
  sym_export_statement = 117,
  sym_tuple_literal = 118,
  sym_list_literal = 119,
  sym_dict_literal = 120,
  sym_dict_kv = 121,
  sym_true = 122,
  sym_false = 123,
  sym_return_statement = 124,
  sym_quoted_string = 125,
  aux_sym__quoted_string_content_double = 126,
  aux_sym__quoted_string_content_single = 127,
  sym_multiline_string = 128,
  sym_string_literal = 129,
  sym_field_identifier = 130,
  aux_sym_source_file_repeat1 = 131,
  aux_sym_source_file_repeat2 = 132,
  aux_sym_expression_list_repeat1 = 133,
  aux_sym__statement_list_repeat1 = 134,
  aux_sym_enum_declaration_repeat1 = 135,
  aux_sym__if_elif_stmt_repeat1 = 136,
  aux_sym__if_elif_stmt_repeat2 = 137,
  aux_sym_base_type_spec_repeat1 = 138,
  aux_sym_func_spec_repeat1 = 139,
  aux_sym_function_declaration_repeat1 = 140,
  aux_sym_var_declaration_repeat1 = 141,
  aux_sym_other_lit_repeat1 = 142,
  aux_sym_dict_literal_repeat1 = 143,
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
  [anon_sym_DOLLAR] = "$",
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
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
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
  [anon_sym_DOLLAR] = {
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
    {field_arguments, 1},
    {field_function, 0},
  [16] =
    {field_body, 1},
    {field_section_type, 0},
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
  [15] = 14,
  [16] = 16,
  [17] = 13,
  [18] = 18,
  [19] = 14,
  [20] = 18,
  [21] = 16,
  [22] = 18,
  [23] = 16,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 28,
  [35] = 27,
  [36] = 36,
  [37] = 33,
  [38] = 31,
  [39] = 39,
  [40] = 30,
  [41] = 29,
  [42] = 42,
  [43] = 43,
  [44] = 25,
  [45] = 45,
  [46] = 45,
  [47] = 28,
  [48] = 29,
  [49] = 30,
  [50] = 31,
  [51] = 33,
  [52] = 43,
  [53] = 25,
  [54] = 27,
  [55] = 26,
  [56] = 43,
  [57] = 26,
  [58] = 32,
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
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 63,
  [91] = 91,
  [92] = 92,
  [93] = 63,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 95,
  [98] = 98,
  [99] = 95,
  [100] = 100,
  [101] = 96,
  [102] = 102,
  [103] = 86,
  [104] = 104,
  [105] = 71,
  [106] = 74,
  [107] = 86,
  [108] = 70,
  [109] = 81,
  [110] = 79,
  [111] = 69,
  [112] = 67,
  [113] = 66,
  [114] = 66,
  [115] = 83,
  [116] = 81,
  [117] = 74,
  [118] = 68,
  [119] = 67,
  [120] = 69,
  [121] = 70,
  [122] = 77,
  [123] = 78,
  [124] = 71,
  [125] = 92,
  [126] = 72,
  [127] = 127,
  [128] = 73,
  [129] = 65,
  [130] = 84,
  [131] = 85,
  [132] = 77,
  [133] = 78,
  [134] = 65,
  [135] = 64,
  [136] = 127,
  [137] = 64,
  [138] = 88,
  [139] = 75,
  [140] = 91,
  [141] = 87,
  [142] = 94,
  [143] = 82,
  [144] = 80,
  [145] = 72,
  [146] = 76,
  [147] = 75,
  [148] = 92,
  [149] = 83,
  [150] = 79,
  [151] = 151,
  [152] = 76,
  [153] = 153,
  [154] = 154,
  [155] = 127,
  [156] = 156,
  [157] = 80,
  [158] = 88,
  [159] = 89,
  [160] = 82,
  [161] = 89,
  [162] = 94,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 68,
  [169] = 87,
  [170] = 91,
  [171] = 85,
  [172] = 84,
  [173] = 173,
  [174] = 73,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 179,
  [182] = 182,
  [183] = 183,
  [184] = 177,
  [185] = 182,
  [186] = 186,
  [187] = 175,
  [188] = 179,
  [189] = 189,
  [190] = 189,
  [191] = 177,
  [192] = 178,
  [193] = 183,
  [194] = 180,
  [195] = 186,
  [196] = 186,
  [197] = 180,
  [198] = 178,
  [199] = 199,
  [200] = 200,
  [201] = 200,
  [202] = 189,
  [203] = 183,
  [204] = 200,
  [205] = 182,
  [206] = 199,
  [207] = 207,
  [208] = 175,
  [209] = 199,
  [210] = 210,
  [211] = 210,
  [212] = 212,
  [213] = 212,
  [214] = 214,
  [215] = 176,
  [216] = 176,
  [217] = 217,
  [218] = 217,
  [219] = 219,
  [220] = 220,
  [221] = 219,
  [222] = 222,
  [223] = 220,
  [224] = 222,
  [225] = 220,
  [226] = 219,
  [227] = 222,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 230,
  [232] = 228,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 234,
  [237] = 237,
  [238] = 234,
  [239] = 239,
  [240] = 240,
  [241] = 240,
  [242] = 239,
  [243] = 243,
  [244] = 243,
  [245] = 245,
  [246] = 245,
  [247] = 247,
  [248] = 247,
  [249] = 249,
  [250] = 249,
  [251] = 249,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 102,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 258,
  [262] = 262,
  [263] = 255,
  [264] = 264,
  [265] = 257,
  [266] = 254,
  [267] = 252,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 270,
  [272] = 259,
  [273] = 262,
  [274] = 254,
  [275] = 260,
  [276] = 151,
  [277] = 277,
  [278] = 264,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 102,
  [286] = 283,
  [287] = 287,
  [288] = 288,
  [289] = 277,
  [290] = 281,
  [291] = 167,
  [292] = 280,
  [293] = 277,
  [294] = 294,
  [295] = 253,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 283,
  [300] = 300,
  [301] = 284,
  [302] = 268,
  [303] = 153,
  [304] = 304,
  [305] = 287,
  [306] = 104,
  [307] = 154,
  [308] = 165,
  [309] = 282,
  [310] = 284,
  [311] = 269,
  [312] = 156,
  [313] = 313,
  [314] = 314,
  [315] = 163,
  [316] = 316,
  [317] = 164,
  [318] = 173,
  [319] = 313,
  [320] = 320,
  [321] = 321,
  [322] = 282,
  [323] = 280,
  [324] = 324,
  [325] = 325,
  [326] = 281,
  [327] = 327,
  [328] = 288,
  [329] = 166,
  [330] = 173,
  [331] = 331,
  [332] = 325,
  [333] = 333,
  [334] = 324,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 294,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 340,
  [352] = 339,
  [353] = 338,
  [354] = 354,
  [355] = 335,
  [356] = 347,
  [357] = 348,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 350,
  [364] = 364,
  [365] = 364,
  [366] = 366,
  [367] = 354,
  [368] = 358,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 362,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 257,
  [379] = 379,
  [380] = 371,
  [381] = 381,
  [382] = 345,
  [383] = 346,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 327,
  [388] = 388,
  [389] = 389,
  [390] = 104,
  [391] = 298,
  [392] = 165,
  [393] = 156,
  [394] = 167,
  [395] = 166,
  [396] = 331,
  [397] = 164,
  [398] = 163,
  [399] = 361,
  [400] = 386,
  [401] = 154,
  [402] = 153,
  [403] = 372,
  [404] = 151,
  [405] = 342,
  [406] = 341,
  [407] = 376,
  [408] = 408,
  [409] = 349,
  [410] = 385,
  [411] = 333,
  [412] = 412,
  [413] = 374,
  [414] = 341,
  [415] = 342,
  [416] = 343,
  [417] = 379,
  [418] = 375,
  [419] = 359,
  [420] = 361,
  [421] = 381,
  [422] = 364,
  [423] = 377,
  [424] = 384,
  [425] = 388,
  [426] = 385,
  [427] = 381,
  [428] = 372,
  [429] = 376,
  [430] = 379,
  [431] = 287,
  [432] = 432,
  [433] = 433,
  [434] = 327,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 337,
  [443] = 440,
  [444] = 444,
  [445] = 298,
  [446] = 446,
  [447] = 389,
  [448] = 448,
  [449] = 408,
  [450] = 437,
  [451] = 444,
  [452] = 452,
  [453] = 453,
  [454] = 441,
  [455] = 432,
  [456] = 433,
  [457] = 433,
  [458] = 453,
  [459] = 452,
  [460] = 446,
  [461] = 448,
  [462] = 444,
  [463] = 446,
  [464] = 464,
  [465] = 435,
  [466] = 436,
  [467] = 467,
  [468] = 468,
  [469] = 438,
  [470] = 432,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 472,
  [477] = 471,
  [478] = 475,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 473,
  [483] = 475,
  [484] = 484,
  [485] = 472,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 488,
  [492] = 487,
  [493] = 484,
  [494] = 480,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 486,
  [501] = 488,
  [502] = 502,
  [503] = 503,
  [504] = 474,
  [505] = 471,
  [506] = 473,
  [507] = 481,
  [508] = 497,
  [509] = 503,
  [510] = 487,
  [511] = 511,
  [512] = 486,
  [513] = 502,
  [514] = 503,
  [515] = 515,
  [516] = 498,
  [517] = 479,
  [518] = 518,
  [519] = 519,
  [520] = 489,
  [521] = 480,
  [522] = 502,
  [523] = 498,
  [524] = 479,
  [525] = 495,
  [526] = 519,
  [527] = 489,
  [528] = 497,
  [529] = 518,
  [530] = 481,
  [531] = 515,
  [532] = 519,
  [533] = 490,
  [534] = 496,
  [535] = 499,
  [536] = 496,
  [537] = 499,
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
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '$') ADVANCE(57);
      if (lookahead == '%') ADVANCE(60);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(96);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '*') ADVANCE(58);
      if (lookahead == '+') ADVANCE(42);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '>') ADVANCE(67);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '`') ADVANCE(71);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '|') ADVANCE(21);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(114);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '"') ADVANCE(93);
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(95);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '%') ADVANCE(60);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '*') ADVANCE(58);
      if (lookahead == '+') ADVANCE(42);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '>') ADVANCE(66);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '|') ADVANCE(21);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(114);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(113);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(93);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(95);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '&') ADVANCE(69);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(112);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(74);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '_') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(72);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(25);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(87);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(88);
      END_STATE();
    case 21:
      if (lookahead == '|') ADVANCE(70);
      END_STATE();
    case 22:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
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
          lookahead == '1') ADVANCE(87);
      END_STATE();
    case 26:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(84);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(88);
      END_STATE();
    case 28:
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
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
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '%') ADVANCE(60);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == '*') ADVANCE(58);
      if (lookahead == '+') ADVANCE(42);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '>') ADVANCE(66);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '|') ADVANCE(21);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(114);
      END_STATE();
    case 36:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '$') ADVANCE(57);
      if (lookahead == '\'') ADVANCE(96);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == '+') ADVANCE(42);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(114);
      END_STATE();
    case 37:
      if (eof) ADVANCE(39);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '$') ADVANCE(57);
      if (lookahead == '%') ADVANCE(60);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(96);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '*') ADVANCE(58);
      if (lookahead == '+') ADVANCE(42);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '>') ADVANCE(67);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '`') ADVANCE(71);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '|') ADVANCE(21);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(114);
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '$') ADVANCE(57);
      if (lookahead == '\'') ADVANCE(96);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '+') ADVANCE(42);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(114);
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
      if (lookahead == '>') ADVANCE(72);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
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
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(74);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '=') ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == '>') ADVANCE(82);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      if (lookahead == '"') ADVANCE(6);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(76);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(76);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      if (lookahead == '\'') ADVANCE(11);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(74);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(19);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(20);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(16);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(22);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_imaginary_literal);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(6);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(11);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(111);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_double_token1);
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(104);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_double_token1);
      if (lookahead == '*') ADVANCE(102);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(104);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_double_token1);
      if (lookahead == '*') ADVANCE(101);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(14);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_double_token1);
      if (lookahead == '*') ADVANCE(101);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(14);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_double_token1);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_double_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(111);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead == '\'') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(111);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == '\n' ||
          lookahead == '\'') ADVANCE(14);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == '\n' ||
          lookahead == '\'') ADVANCE(14);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(98);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(114);
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
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 35},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 35},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 35},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 35},
  [101] = {.lex_state = 35},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 35},
  [104] = {.lex_state = 0},
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
  [115] = {.lex_state = 35},
  [116] = {.lex_state = 35},
  [117] = {.lex_state = 35},
  [118] = {.lex_state = 35},
  [119] = {.lex_state = 35},
  [120] = {.lex_state = 35},
  [121] = {.lex_state = 35},
  [122] = {.lex_state = 35},
  [123] = {.lex_state = 35},
  [124] = {.lex_state = 35},
  [125] = {.lex_state = 35},
  [126] = {.lex_state = 35},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 35},
  [129] = {.lex_state = 35},
  [130] = {.lex_state = 35},
  [131] = {.lex_state = 35},
  [132] = {.lex_state = 35},
  [133] = {.lex_state = 35},
  [134] = {.lex_state = 35},
  [135] = {.lex_state = 35},
  [136] = {.lex_state = 0},
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
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 35},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 35},
  [158] = {.lex_state = 35},
  [159] = {.lex_state = 35},
  [160] = {.lex_state = 35},
  [161] = {.lex_state = 35},
  [162] = {.lex_state = 35},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 35},
  [169] = {.lex_state = 35},
  [170] = {.lex_state = 35},
  [171] = {.lex_state = 35},
  [172] = {.lex_state = 35},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 35},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 5},
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
  [197] = {.lex_state = 0},
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
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 35},
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
  [247] = {.lex_state = 36},
  [248] = {.lex_state = 36},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 36},
  [251] = {.lex_state = 36},
  [252] = {.lex_state = 36},
  [253] = {.lex_state = 36},
  [254] = {.lex_state = 36},
  [255] = {.lex_state = 36},
  [256] = {.lex_state = 36},
  [257] = {.lex_state = 36},
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
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 36},
  [276] = {.lex_state = 36},
  [277] = {.lex_state = 1},
  [278] = {.lex_state = 36},
  [279] = {.lex_state = 36},
  [280] = {.lex_state = 2},
  [281] = {.lex_state = 1},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 2},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 36},
  [286] = {.lex_state = 2},
  [287] = {.lex_state = 36},
  [288] = {.lex_state = 36},
  [289] = {.lex_state = 1},
  [290] = {.lex_state = 1},
  [291] = {.lex_state = 36},
  [292] = {.lex_state = 2},
  [293] = {.lex_state = 1},
  [294] = {.lex_state = 36},
  [295] = {.lex_state = 36},
  [296] = {.lex_state = 1},
  [297] = {.lex_state = 2},
  [298] = {.lex_state = 36},
  [299] = {.lex_state = 2},
  [300] = {.lex_state = 36},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 36},
  [303] = {.lex_state = 36},
  [304] = {.lex_state = 36},
  [305] = {.lex_state = 36},
  [306] = {.lex_state = 36},
  [307] = {.lex_state = 36},
  [308] = {.lex_state = 36},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 36},
  [312] = {.lex_state = 36},
  [313] = {.lex_state = 36},
  [314] = {.lex_state = 36},
  [315] = {.lex_state = 36},
  [316] = {.lex_state = 36},
  [317] = {.lex_state = 36},
  [318] = {.lex_state = 36},
  [319] = {.lex_state = 36},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 36},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 2},
  [324] = {.lex_state = 36},
  [325] = {.lex_state = 36},
  [326] = {.lex_state = 1},
  [327] = {.lex_state = 36},
  [328] = {.lex_state = 36},
  [329] = {.lex_state = 36},
  [330] = {.lex_state = 36},
  [331] = {.lex_state = 36},
  [332] = {.lex_state = 36},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 36},
  [335] = {.lex_state = 36},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 36},
  [338] = {.lex_state = 36},
  [339] = {.lex_state = 36},
  [340] = {.lex_state = 36},
  [341] = {.lex_state = 3},
  [342] = {.lex_state = 4},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 36},
  [345] = {.lex_state = 36},
  [346] = {.lex_state = 36},
  [347] = {.lex_state = 36},
  [348] = {.lex_state = 36},
  [349] = {.lex_state = 36},
  [350] = {.lex_state = 36},
  [351] = {.lex_state = 36},
  [352] = {.lex_state = 36},
  [353] = {.lex_state = 36},
  [354] = {.lex_state = 36},
  [355] = {.lex_state = 36},
  [356] = {.lex_state = 36},
  [357] = {.lex_state = 36},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 36},
  [363] = {.lex_state = 36},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 36},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 36},
  [370] = {.lex_state = 36},
  [371] = {.lex_state = 36},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 36},
  [374] = {.lex_state = 36},
  [375] = {.lex_state = 3},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 36},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 36},
  [381] = {.lex_state = 4},
  [382] = {.lex_state = 36},
  [383] = {.lex_state = 36},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 3},
  [386] = {.lex_state = 36},
  [387] = {.lex_state = 36},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 36},
  [390] = {.lex_state = 36},
  [391] = {.lex_state = 36},
  [392] = {.lex_state = 36},
  [393] = {.lex_state = 36},
  [394] = {.lex_state = 36},
  [395] = {.lex_state = 36},
  [396] = {.lex_state = 36},
  [397] = {.lex_state = 36},
  [398] = {.lex_state = 36},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 36},
  [401] = {.lex_state = 36},
  [402] = {.lex_state = 36},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 36},
  [405] = {.lex_state = 4},
  [406] = {.lex_state = 3},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 36},
  [409] = {.lex_state = 36},
  [410] = {.lex_state = 3},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 36},
  [414] = {.lex_state = 3},
  [415] = {.lex_state = 4},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 4},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 4},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 36},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 3},
  [427] = {.lex_state = 4},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 36},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 36},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 36},
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
  [471] = {.lex_state = 9},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 9},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 9},
  [487] = {.lex_state = 9},
  [488] = {.lex_state = 9},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 9},
  [492] = {.lex_state = 9},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 9},
  [501] = {.lex_state = 9},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 9},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 9},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 9},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
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
    [anon_sym_DOLLAR] = ACTIONS(1),
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
    [sym_source_file] = STATE(511),
    [sym__top_level_item] = STATE(321),
    [sym__declaration] = STATE(321),
    [sym__statement] = STATE(321),
    [sym_unary_expression] = STATE(110),
    [sym__expression] = STATE(96),
    [sym_composite_literal] = STATE(110),
    [sym_selector_expression] = STATE(110),
    [sym_index_expression] = STATE(110),
    [sym_parenthesized_expression] = STATE(110),
    [sym_expression_list] = STATE(343),
    [sym_block] = STATE(335),
    [sym_assignment_statement] = STATE(335),
    [sym_enum_declaration] = STATE(321),
    [sym_for_statement] = STATE(335),
    [sym_call_expression] = STATE(110),
    [sym_if_statement] = STATE(335),
    [sym__if_stmt] = STATE(347),
    [sym__if_elif_stmt] = STATE(348),
    [sym__if_elif_else_stmt] = STATE(350),
    [sym__if_else_stmt] = STATE(354),
    [sym_binary_expression] = STATE(110),
    [sym_section] = STATE(335),
    [sym_function_declaration] = STATE(321),
    [sym_var_declaration] = STATE(321),
    [sym_export_statement] = STATE(335),
    [sym_tuple_literal] = STATE(139),
    [sym_list_literal] = STATE(139),
    [sym_dict_literal] = STATE(139),
    [sym_true] = STATE(110),
    [sym_false] = STATE(110),
    [sym_return_statement] = STATE(335),
    [sym_quoted_string] = STATE(152),
    [sym_multiline_string] = STATE(152),
    [sym_string_literal] = STATE(110),
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
    [anon_sym_DOLLAR] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_func] = ACTIONS(25),
    [anon_sym_var] = ACTIONS(27),
    [anon_sym_export] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [sym_int_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [sym_imaginary_literal] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_True] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_False] = ACTIONS(37),
    [sym_continue_statement] = ACTIONS(39),
    [sym_break_statement] = ACTIONS(39),
    [anon_sym_return] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 36,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(68), 1,
      anon_sym_enum,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(74), 1,
      anon_sym_DOLLAR,
    ACTIONS(77), 1,
      anon_sym_if,
    ACTIONS(80), 1,
      anon_sym_func,
    ACTIONS(83), 1,
      anon_sym_var,
    ACTIONS(86), 1,
      anon_sym_export,
    ACTIONS(92), 1,
      sym_imaginary_literal,
    ACTIONS(104), 1,
      anon_sym_return,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(2), 1,
      aux_sym_source_file_repeat2,
    STATE(101), 1,
      sym__expression,
    STATE(356), 1,
      sym__if_stmt,
    STATE(357), 1,
      sym__if_elif_stmt,
    STATE(363), 1,
      sym__if_elif_else_stmt,
    STATE(367), 1,
      sym__if_else_stmt,
    STATE(416), 1,
      sym_expression_list,
    ACTIONS(56), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(89), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(95), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(98), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(101), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(146), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(147), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(370), 6,
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
    STATE(150), 10,
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
  [137] = 36,
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
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_func,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_export,
    ACTIONS(33), 1,
      sym_imaginary_literal,
    ACTIONS(41), 1,
      anon_sym_return,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat2,
    STATE(96), 1,
      sym__expression,
    STATE(343), 1,
      sym_expression_list,
    STATE(347), 1,
      sym__if_stmt,
    STATE(348), 1,
      sym__if_elif_stmt,
    STATE(350), 1,
      sym__if_elif_else_stmt,
    STATE(354), 1,
      sym__if_else_stmt,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(37), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(39), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(152), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(139), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(279), 6,
      sym__top_level_item,
      sym__declaration,
      sym__statement,
      sym_enum_declaration,
      sym_function_declaration,
      sym_var_declaration,
    STATE(335), 7,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_return_statement,
    STATE(110), 10,
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
  [274] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    ACTIONS(133), 1,
      anon_sym_for,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    ACTIONS(137), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_export,
    ACTIONS(143), 1,
      sym_imaginary_literal,
    ACTIONS(151), 1,
      anon_sym_return,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(159), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(100), 1,
      sym__expression,
    STATE(300), 1,
      sym__statement,
    STATE(356), 1,
      sym__if_stmt,
    STATE(357), 1,
      sym__if_elif_stmt,
    STATE(361), 1,
      sym_dict_kv,
    STATE(363), 1,
      sym__if_elif_else_stmt,
    STATE(367), 1,
      sym__if_else_stmt,
    STATE(416), 1,
      sym_expression_list,
    STATE(495), 1,
      sym__statement_list,
    ACTIONS(123), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(141), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(145), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(147), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(149), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(146), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(147), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(355), 7,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_return_statement,
    STATE(150), 10,
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
  [400] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      anon_sym_for,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    ACTIONS(137), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_export,
    ACTIONS(143), 1,
      sym_imaginary_literal,
    ACTIONS(151), 1,
      anon_sym_return,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(159), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      sym__expression,
    STATE(300), 1,
      sym__statement,
    STATE(356), 1,
      sym__if_stmt,
    STATE(357), 1,
      sym__if_elif_stmt,
    STATE(363), 1,
      sym__if_elif_else_stmt,
    STATE(367), 1,
      sym__if_else_stmt,
    STATE(399), 1,
      sym_dict_kv,
    STATE(416), 1,
      sym_expression_list,
    STATE(525), 1,
      sym__statement_list,
    ACTIONS(123), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(141), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(145), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(147), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(149), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(146), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(147), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(355), 7,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_return_statement,
    STATE(150), 10,
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
  [526] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    ACTIONS(133), 1,
      anon_sym_for,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    ACTIONS(137), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_export,
    ACTIONS(143), 1,
      sym_imaginary_literal,
    ACTIONS(151), 1,
      anon_sym_return,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(159), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(101), 1,
      sym__expression,
    STATE(300), 1,
      sym__statement,
    STATE(356), 1,
      sym__if_stmt,
    STATE(357), 1,
      sym__if_elif_stmt,
    STATE(363), 1,
      sym__if_elif_else_stmt,
    STATE(367), 1,
      sym__if_else_stmt,
    STATE(416), 1,
      sym_expression_list,
    STATE(495), 1,
      sym__statement_list,
    ACTIONS(123), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(141), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(145), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(147), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(149), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(146), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(147), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(355), 7,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_return_statement,
    STATE(150), 10,
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
  [649] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      anon_sym_for,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    ACTIONS(137), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_export,
    ACTIONS(143), 1,
      sym_imaginary_literal,
    ACTIONS(151), 1,
      anon_sym_return,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(159), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym__expression,
    STATE(300), 1,
      sym__statement,
    STATE(356), 1,
      sym__if_stmt,
    STATE(357), 1,
      sym__if_elif_stmt,
    STATE(363), 1,
      sym__if_elif_else_stmt,
    STATE(367), 1,
      sym__if_else_stmt,
    STATE(416), 1,
      sym_expression_list,
    STATE(525), 1,
      sym__statement_list,
    ACTIONS(123), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(141), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(145), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(147), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(149), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(146), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(147), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(355), 7,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_return_statement,
    STATE(150), 10,
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
  [772] = 32,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      anon_sym_for,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    ACTIONS(137), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_export,
    ACTIONS(143), 1,
      sym_imaginary_literal,
    ACTIONS(151), 1,
      anon_sym_return,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(159), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym__expression,
    STATE(356), 1,
      sym__if_stmt,
    STATE(357), 1,
      sym__if_elif_stmt,
    STATE(363), 1,
      sym__if_elif_else_stmt,
    STATE(367), 1,
      sym__if_else_stmt,
    STATE(369), 1,
      sym__statement,
    STATE(416), 1,
      sym_expression_list,
    ACTIONS(123), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(141), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(145), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(147), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(149), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(146), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(147), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(355), 7,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_return_statement,
    STATE(150), 10,
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
  [892] = 32,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      anon_sym_for,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    ACTIONS(137), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_export,
    ACTIONS(143), 1,
      sym_imaginary_literal,
    ACTIONS(151), 1,
      anon_sym_return,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(159), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym__expression,
    STATE(356), 1,
      sym__if_stmt,
    STATE(357), 1,
      sym__if_elif_stmt,
    STATE(363), 1,
      sym__if_elif_else_stmt,
    STATE(367), 1,
      sym__if_else_stmt,
    STATE(369), 1,
      sym__statement,
    STATE(416), 1,
      sym_expression_list,
    ACTIONS(123), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(141), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(145), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(147), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(149), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(146), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(147), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(355), 7,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_return_statement,
    STATE(150), 10,
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
  [1012] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      anon_sym_for,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    ACTIONS(137), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_export,
    ACTIONS(143), 1,
      sym_imaginary_literal,
    ACTIONS(151), 1,
      anon_sym_return,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(159), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(101), 1,
      sym__expression,
    STATE(356), 1,
      sym__if_stmt,
    STATE(357), 1,
      sym__if_elif_stmt,
    STATE(363), 1,
      sym__if_elif_else_stmt,
    STATE(367), 1,
      sym__if_else_stmt,
    STATE(369), 1,
      sym__statement,
    STATE(416), 1,
      sym_expression_list,
    ACTIONS(123), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(141), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(145), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(147), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(149), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(146), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(147), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(355), 7,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_return_statement,
    STATE(150), 10,
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
  [1129] = 21,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(169), 1,
      anon_sym_LF,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    ACTIONS(181), 1,
      anon_sym_DOLLAR,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(187), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(211), 1,
      sym__expression,
    STATE(386), 1,
      sym_expression_list,
    ACTIONS(145), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(147), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(171), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(173), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(146), 2,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(141), 3,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
    STATE(147), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(150), 10,
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
  [1211] = 21,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(171), 1,
      anon_sym_SEMI,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(203), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(210), 1,
      sym__expression,
    STATE(400), 1,
      sym_expression_list,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(37), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(191), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(152), 2,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(31), 3,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
    STATE(139), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(110), 10,
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
  [1293] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_imaginary_literal,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    STATE(210), 1,
      sym__expression,
    STATE(371), 1,
      sym_expression_list,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(37), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(152), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(139), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(110), 10,
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
  [1370] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      sym_imaginary_literal,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(224), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(225), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(227), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(76), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(79), 10,
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
  [1447] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      sym_imaginary_literal,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    STATE(222), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(225), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(227), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(76), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(79), 10,
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
  [1524] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      sym_imaginary_literal,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    STATE(225), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(225), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(227), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(76), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(79), 10,
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
  [1601] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    ACTIONS(143), 1,
      sym_imaginary_literal,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(159), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
    STATE(211), 1,
      sym__expression,
    STATE(380), 1,
      sym_expression_list,
    ACTIONS(123), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(141), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(145), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(147), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(146), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(147), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(150), 10,
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
  [1678] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      sym_imaginary_literal,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(235), 1,
      sym__expression,
    STATE(399), 1,
      sym_dict_kv,
    ACTIONS(209), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(225), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(227), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(76), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(79), 10,
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
  [1755] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      sym_imaginary_literal,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(243), 1,
      anon_sym_RBRACK,
    STATE(227), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(225), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(227), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(76), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(79), 10,
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
  [1832] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      sym_imaginary_literal,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(235), 1,
      sym__expression,
    STATE(361), 1,
      sym_dict_kv,
    ACTIONS(209), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(225), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(227), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(76), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(79), 10,
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
  [1909] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      sym_imaginary_literal,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(225), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(227), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(76), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(79), 10,
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
  [1986] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      sym_imaginary_literal,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(235), 1,
      sym__expression,
    STATE(420), 1,
      sym_dict_kv,
    ACTIONS(209), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(225), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(227), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(76), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(79), 10,
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
  [2063] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      sym_imaginary_literal,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(225), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(227), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(76), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(79), 10,
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
  [2140] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      sym_imaginary_literal,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(235), 1,
      sym__expression,
    STATE(464), 1,
      sym_dict_kv,
    ACTIONS(209), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(225), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(227), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(76), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(79), 10,
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
  [2217] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      sym_imaginary_literal,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(234), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(225), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(227), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(76), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(79), 10,
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
  [2291] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      sym_imaginary_literal,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(80), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(225), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(227), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(76), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(79), 10,
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
  [2365] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      sym_imaginary_literal,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(69), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(225), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(227), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(76), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(79), 10,
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
  [2439] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      sym_imaginary_literal,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(219), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(225), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(227), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(76), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(79), 10,
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
  [2513] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    ACTIONS(143), 1,
      sym_imaginary_literal,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(159), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
    STATE(168), 1,
      sym__expression,
    ACTIONS(123), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(141), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(145), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(147), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(146), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(147), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(150), 10,
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
  [2587] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    ACTIONS(143), 1,
      sym_imaginary_literal,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(159), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
    STATE(106), 1,
      sym__expression,
    ACTIONS(123), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(141), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(145), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(147), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(146), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(147), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(150), 10,
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
  [2661] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    ACTIONS(143), 1,
      sym_imaginary_literal,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(159), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
    STATE(107), 1,
      sym__expression,
    ACTIONS(123), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(141), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(145), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(147), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(146), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(147), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(150), 10,
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
  [2735] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      sym_imaginary_literal,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(230), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(225), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(227), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(76), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(79), 10,
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
  [2809] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    ACTIONS(143), 1,
      sym_imaginary_literal,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(159), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
    STATE(109), 1,
      sym__expression,
    ACTIONS(123), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(141), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(145), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(147), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(146), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(147), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(150), 10,
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
  [2883] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      sym_imaginary_literal,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(221), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(225), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(227), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(76), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(79), 10,
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
  [2957] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    ACTIONS(143), 1,
      sym_imaginary_literal,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(159), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
    STATE(120), 1,
      sym__expression,
    ACTIONS(123), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(141), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(145), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(147), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(146), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(147), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(150), 10,
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
  [3031] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      sym_imaginary_literal,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(233), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(225), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(227), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(76), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(79), 10,
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
  [3105] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      sym_imaginary_literal,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(81), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(225), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(227), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(76), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(79), 10,
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
  [3179] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      sym_imaginary_literal,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(86), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(225), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(227), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(76), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(79), 10,
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
  [3253] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      sym_imaginary_literal,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(237), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(225), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(227), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(76), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(79), 10,
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
  [3327] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      sym_imaginary_literal,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(74), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(225), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(227), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(76), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(79), 10,
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
  [3401] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      sym_imaginary_literal,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(68), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(225), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(227), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(76), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(79), 10,
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
  [3475] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      sym_imaginary_literal,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(229), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(225), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(227), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(76), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(79), 10,
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
  [3549] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_imaginary_literal,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    STATE(215), 1,
      sym__expression,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(37), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(152), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(139), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(110), 10,
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
  [3623] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      sym_imaginary_literal,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(236), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(225), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(227), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(76), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(79), 10,
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
  [3697] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      sym_imaginary_literal,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(228), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(225), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(227), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(76), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(79), 10,
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
  [3771] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      sym_imaginary_literal,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(232), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(225), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(227), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(76), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(79), 10,
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
  [3845] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      sym_imaginary_literal,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(226), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(225), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(227), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(76), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(79), 10,
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
  [3919] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_imaginary_literal,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    STATE(118), 1,
      sym__expression,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(37), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(152), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(139), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(110), 10,
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
  [3993] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_imaginary_literal,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    STATE(117), 1,
      sym__expression,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(37), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(152), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(139), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(110), 10,
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
  [4067] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_imaginary_literal,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    STATE(103), 1,
      sym__expression,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(37), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(152), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(139), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(110), 10,
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
  [4141] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_imaginary_literal,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    STATE(116), 1,
      sym__expression,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(37), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(152), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(139), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(110), 10,
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
  [4215] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      sym_imaginary_literal,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(176), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(225), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(227), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(76), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(79), 10,
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
  [4289] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      sym_imaginary_literal,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(238), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(225), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(227), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(76), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(79), 10,
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
  [4363] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_imaginary_literal,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym__expression,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(37), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(152), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(139), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(110), 10,
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
  [4437] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_imaginary_literal,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    STATE(157), 1,
      sym__expression,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(37), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(152), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(139), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(110), 10,
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
  [4511] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    ACTIONS(143), 1,
      sym_imaginary_literal,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(159), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
    STATE(216), 1,
      sym__expression,
    ACTIONS(123), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(141), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(145), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(147), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(146), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(147), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(150), 10,
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
  [4585] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    ACTIONS(143), 1,
      sym_imaginary_literal,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(159), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
    STATE(144), 1,
      sym__expression,
    ACTIONS(123), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(141), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(145), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(147), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(146), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(147), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(150), 10,
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
  [4659] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      sym_imaginary_literal,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(231), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(225), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(227), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(76), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(75), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(79), 10,
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
  [4733] = 6,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
    ACTIONS(253), 1,
      anon_sym_LF,
    ACTIONS(256), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(251), 27,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_for,
      anon_sym_DOLLAR,
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
  [4778] = 6,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_LF,
    ACTIONS(263), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(259), 27,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_for,
      anon_sym_DOLLAR,
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
  [4823] = 8,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym_identifier,
    ACTIONS(267), 1,
      anon_sym_LF,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    STATE(142), 1,
      sym_argument_list,
    STATE(396), 1,
      sym_block,
    ACTIONS(269), 23,
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
  [4870] = 8,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym_identifier,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_LBRACE,
    STATE(162), 1,
      sym_argument_list,
    STATE(331), 1,
      sym_block,
    ACTIONS(267), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(269), 22,
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
  [4917] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    STATE(94), 1,
      sym_argument_list,
    ACTIONS(269), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(267), 21,
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
  [4957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(283), 21,
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
  [4991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(287), 21,
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
  [5025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 21,
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
  [5059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(295), 21,
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
  [5093] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(307), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(315), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(317), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(313), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(305), 9,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5143] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(307), 4,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(305), 17,
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
  [5185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 21,
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
  [5219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(323), 21,
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
  [5253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(327), 21,
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
  [5287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(331), 21,
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
  [5321] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(307), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(315), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(313), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(305), 11,
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
  [5369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(335), 21,
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
  [5403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(339), 21,
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
  [5437] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(343), 21,
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
  [5471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(347), 21,
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
  [5505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(267), 21,
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
  [5539] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(353), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(351), 19,
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
  [5577] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(305), 19,
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
  [5615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(355), 21,
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
  [5649] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(359), 21,
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
  [5683] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(363), 21,
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
  [5717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(367), 21,
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
  [5751] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(307), 4,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(305), 15,
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
  [5795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(371), 21,
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
  [5829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(375), 21,
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
  [5863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(379), 21,
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
  [5897] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      sym_argument_list,
    ACTIONS(267), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(269), 22,
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
  [5935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(383), 21,
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
  [5969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(387), 21,
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
  [6003] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LF,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      sym_argument_list,
    ACTIONS(269), 23,
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
  [6041] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(391), 21,
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
  [6075] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_RBRACK,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(413), 1,
      anon_sym_func,
    STATE(98), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
  [6128] = 13,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_SEMI,
    ACTIONS(421), 1,
      anon_sym_DOT,
    ACTIONS(423), 1,
      anon_sym_LBRACK,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    STATE(274), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(415), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(419), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(433), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(435), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(427), 3,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
    ACTIONS(429), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(431), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6181] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(413), 1,
      anon_sym_func,
    ACTIONS(437), 1,
      anon_sym_RBRACK,
    STATE(98), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
  [6234] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_RBRACK,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(447), 1,
      anon_sym_Date,
    ACTIONS(450), 1,
      anon_sym_BQUOTE,
    ACTIONS(453), 1,
      anon_sym_typespec,
    ACTIONS(456), 1,
      anon_sym_tuple,
    ACTIONS(459), 1,
      anon_sym_list,
    ACTIONS(462), 1,
      anon_sym_dict,
    ACTIONS(465), 1,
      anon_sym_func,
    STATE(98), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(444), 12,
      anon_sym_void,
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
  [6287] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(413), 1,
      anon_sym_func,
    ACTIONS(468), 1,
      anon_sym_RBRACK,
    STATE(98), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
  [6340] = 14,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_LF,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    ACTIONS(472), 1,
      anon_sym_DOT,
    ACTIONS(474), 1,
      anon_sym_LBRACK,
    ACTIONS(476), 1,
      anon_sym_COLON,
    STATE(274), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(417), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(427), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
    ACTIONS(470), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(483), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(485), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(479), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(481), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6395] = 13,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_LF,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    ACTIONS(472), 1,
      anon_sym_DOT,
    ACTIONS(474), 1,
      anon_sym_LBRACK,
    STATE(274), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(417), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(470), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(483), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(485), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(427), 3,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
    ACTIONS(479), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(481), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_LBRACK,
    ACTIONS(491), 1,
      anon_sym_Date,
    ACTIONS(489), 23,
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
  [6483] = 7,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_DOT,
    ACTIONS(423), 1,
      anon_sym_LBRACK,
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(419), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(429), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(307), 15,
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
  [6523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_Date,
    ACTIONS(493), 23,
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
  [6555] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(323), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(325), 22,
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
  [6587] = 8,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LF,
    ACTIONS(472), 1,
      anon_sym_DOT,
    ACTIONS(474), 1,
      anon_sym_LBRACK,
    ACTIONS(470), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(479), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(481), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(307), 10,
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
  [6629] = 7,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LF,
    ACTIONS(472), 1,
      anon_sym_DOT,
    ACTIONS(474), 1,
      anon_sym_LBRACK,
    ACTIONS(470), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(479), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(307), 16,
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
  [6669] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(319), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(321), 22,
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
  [6701] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LF,
    ACTIONS(472), 1,
      anon_sym_DOT,
    ACTIONS(474), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 21,
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
  [6737] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(267), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(269), 22,
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
  [6769] = 6,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_DOT,
    ACTIONS(423), 1,
      anon_sym_LBRACK,
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(429), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(307), 17,
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
  [6807] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(295), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(297), 22,
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
  [6839] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(291), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(293), 22,
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
  [6871] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_LF,
    ACTIONS(293), 23,
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
  [6903] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(359), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(361), 22,
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
  [6935] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_DOT,
    ACTIONS(423), 1,
      anon_sym_LBRACK,
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(307), 20,
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
  [6971] = 8,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_DOT,
    ACTIONS(423), 1,
      anon_sym_LBRACK,
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(419), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(429), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(431), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(307), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [7013] = 9,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_DOT,
    ACTIONS(423), 1,
      anon_sym_LBRACK,
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(419), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(433), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(429), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(431), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(307), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [7057] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_LF,
    ACTIONS(297), 23,
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
  [7089] = 6,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LF,
    ACTIONS(472), 1,
      anon_sym_DOT,
    ACTIONS(474), 1,
      anon_sym_LBRACK,
    ACTIONS(479), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(307), 18,
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
  [7127] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_LF,
    ACTIONS(321), 23,
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
  [7159] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(343), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(345), 22,
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
  [7191] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(347), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(349), 22,
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
  [7223] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_LF,
    ACTIONS(325), 23,
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
  [7255] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(387), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(389), 22,
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
  [7287] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LF,
    ACTIONS(329), 23,
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
  [7319] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(413), 1,
      anon_sym_func,
    STATE(95), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
  [7369] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_LF,
    ACTIONS(333), 23,
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
  [7401] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(287), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(289), 22,
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
  [7433] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_LF,
    ACTIONS(365), 23,
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
  [7465] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LF,
    ACTIONS(369), 23,
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
  [7497] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_LF,
    ACTIONS(345), 23,
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
  [7529] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_LF,
    ACTIONS(349), 23,
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
  [7561] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LF,
    ACTIONS(289), 23,
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
  [7593] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(283), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(285), 22,
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
  [7625] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(413), 1,
      anon_sym_func,
    STATE(99), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
  [7675] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_LF,
    ACTIONS(285), 23,
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
  [7707] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LF,
    ACTIONS(377), 23,
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
  [7739] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(335), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(337), 22,
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
  [7771] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LF,
    ACTIONS(385), 23,
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
  [7803] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_LF,
    ACTIONS(373), 23,
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
  [7835] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LF,
    ACTIONS(393), 23,
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
  [7867] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_LF,
    ACTIONS(357), 23,
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
  [7899] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_LF,
    ACTIONS(472), 1,
      anon_sym_DOT,
    ACTIONS(474), 1,
      anon_sym_LBRACK,
    ACTIONS(353), 21,
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
  [7935] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(327), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(329), 22,
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
  [7967] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_LF,
    ACTIONS(341), 23,
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
  [7999] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_LF,
    ACTIONS(337), 23,
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
  [8031] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_LF,
    ACTIONS(389), 23,
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
  [8063] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_LF,
    ACTIONS(361), 23,
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
  [8095] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LF,
    ACTIONS(269), 23,
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
  [8127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_Date,
    ACTIONS(497), 23,
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
  [8159] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(339), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(341), 22,
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
  [8191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_Date,
    ACTIONS(501), 23,
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
  [8223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_Date,
    ACTIONS(505), 23,
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
  [8255] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(413), 1,
      anon_sym_func,
    STATE(97), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
  [8305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_Date,
    ACTIONS(509), 23,
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
  [8337] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_DOT,
    ACTIONS(423), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(353), 20,
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
  [8373] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(375), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(377), 22,
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
  [8405] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LF,
    ACTIONS(381), 23,
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
  [8437] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(355), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(357), 22,
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
  [8469] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(379), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(381), 22,
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
  [8501] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(391), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(393), 22,
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
  [8533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_Date,
    ACTIONS(513), 23,
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
  [8565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_Date,
    ACTIONS(517), 23,
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
  [8597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_Date,
    ACTIONS(521), 23,
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
  [8629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_Date,
    ACTIONS(525), 23,
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
  [8661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_Date,
    ACTIONS(529), 23,
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
  [8693] = 9,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LF,
    ACTIONS(472), 1,
      anon_sym_DOT,
    ACTIONS(474), 1,
      anon_sym_LBRACK,
    ACTIONS(470), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(483), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(479), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(481), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(307), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [8737] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(371), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(373), 22,
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
  [8769] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(383), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(385), 22,
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
  [8801] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(367), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(369), 22,
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
  [8833] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(363), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(365), 22,
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
  [8865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_Date,
    ACTIONS(489), 23,
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
  [8897] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(331), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(333), 22,
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
  [8929] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(413), 1,
      anon_sym_func,
    STATE(502), 1,
      sym_type_spec_r,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(315), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(317), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(535), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(313), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(533), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
  [9027] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(413), 1,
      anon_sym_func,
    STATE(151), 1,
      sym_type_spec_r,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
  [9076] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(413), 1,
      anon_sym_func,
    STATE(530), 1,
      sym_type_spec_r,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
  [9125] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(413), 1,
      anon_sym_func,
    STATE(153), 1,
      sym_type_spec_r,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
  [9174] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(413), 1,
      anon_sym_func,
    STATE(284), 1,
      sym_type_spec_r,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
  [9223] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_LPAREN,
    ACTIONS(543), 1,
      anon_sym_Date,
    ACTIONS(545), 1,
      anon_sym_BQUOTE,
    ACTIONS(547), 1,
      anon_sym_typespec,
    ACTIONS(549), 1,
      anon_sym_tuple,
    ACTIONS(551), 1,
      anon_sym_list,
    ACTIONS(553), 1,
      anon_sym_dict,
    ACTIONS(555), 1,
      anon_sym_func,
    STATE(402), 1,
      sym_type_spec_r,
    STATE(392), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(541), 12,
      anon_sym_void,
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
  [9272] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(413), 1,
      anon_sym_func,
    STATE(526), 1,
      sym_type_spec_r,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
  [9321] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(413), 1,
      anon_sym_func,
    STATE(520), 1,
      sym_type_spec_r,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
  [9370] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(561), 1,
      anon_sym_Date,
    ACTIONS(563), 1,
      anon_sym_BQUOTE,
    ACTIONS(565), 1,
      anon_sym_typespec,
    ACTIONS(567), 1,
      anon_sym_tuple,
    ACTIONS(569), 1,
      anon_sym_list,
    ACTIONS(571), 1,
      anon_sym_dict,
    ACTIONS(573), 1,
      anon_sym_func,
    STATE(276), 1,
      sym_type_spec_r,
    STATE(308), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(559), 12,
      anon_sym_void,
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
  [9419] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(413), 1,
      anon_sym_func,
    STATE(519), 1,
      sym_type_spec_r,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
  [9468] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(413), 1,
      anon_sym_func,
    STATE(514), 1,
      sym_type_spec_r,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
  [9517] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(413), 1,
      anon_sym_func,
    STATE(513), 1,
      sym_type_spec_r,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
  [9566] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(561), 1,
      anon_sym_Date,
    ACTIONS(563), 1,
      anon_sym_BQUOTE,
    ACTIONS(565), 1,
      anon_sym_typespec,
    ACTIONS(567), 1,
      anon_sym_tuple,
    ACTIONS(569), 1,
      anon_sym_list,
    ACTIONS(571), 1,
      anon_sym_dict,
    ACTIONS(573), 1,
      anon_sym_func,
    STATE(303), 1,
      sym_type_spec_r,
    STATE(308), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(559), 12,
      anon_sym_void,
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
  [9615] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_LPAREN,
    ACTIONS(543), 1,
      anon_sym_Date,
    ACTIONS(545), 1,
      anon_sym_BQUOTE,
    ACTIONS(547), 1,
      anon_sym_typespec,
    ACTIONS(549), 1,
      anon_sym_tuple,
    ACTIONS(551), 1,
      anon_sym_list,
    ACTIONS(553), 1,
      anon_sym_dict,
    ACTIONS(555), 1,
      anon_sym_func,
    STATE(401), 1,
      sym_type_spec_r,
    STATE(392), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(541), 12,
      anon_sym_void,
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
  [9664] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(561), 1,
      anon_sym_Date,
    ACTIONS(563), 1,
      anon_sym_BQUOTE,
    ACTIONS(565), 1,
      anon_sym_typespec,
    ACTIONS(567), 1,
      anon_sym_tuple,
    ACTIONS(569), 1,
      anon_sym_list,
    ACTIONS(571), 1,
      anon_sym_dict,
    ACTIONS(573), 1,
      anon_sym_func,
    STATE(307), 1,
      sym_type_spec_r,
    STATE(308), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(559), 12,
      anon_sym_void,
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
  [9713] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_LPAREN,
    ACTIONS(543), 1,
      anon_sym_Date,
    ACTIONS(545), 1,
      anon_sym_BQUOTE,
    ACTIONS(547), 1,
      anon_sym_typespec,
    ACTIONS(549), 1,
      anon_sym_tuple,
    ACTIONS(551), 1,
      anon_sym_list,
    ACTIONS(553), 1,
      anon_sym_dict,
    ACTIONS(555), 1,
      anon_sym_func,
    STATE(404), 1,
      sym_type_spec_r,
    STATE(392), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(541), 12,
      anon_sym_void,
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
  [9762] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(413), 1,
      anon_sym_func,
    STATE(481), 1,
      sym_type_spec_r,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
  [9811] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(413), 1,
      anon_sym_func,
    STATE(527), 1,
      sym_type_spec_r,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
  [9860] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(413), 1,
      anon_sym_func,
    STATE(310), 1,
      sym_type_spec_r,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
  [9909] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(413), 1,
      anon_sym_func,
    STATE(503), 1,
      sym_type_spec_r,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
  [9958] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(413), 1,
      anon_sym_func,
    STATE(509), 1,
      sym_type_spec_r,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
  [10007] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(413), 1,
      anon_sym_func,
    STATE(301), 1,
      sym_type_spec_r,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
  [10056] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(413), 1,
      anon_sym_func,
    STATE(507), 1,
      sym_type_spec_r,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
  [10105] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(413), 1,
      anon_sym_func,
    STATE(485), 1,
      sym_type_spec_r,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
  [10154] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(561), 1,
      anon_sym_Date,
    ACTIONS(563), 1,
      anon_sym_BQUOTE,
    ACTIONS(565), 1,
      anon_sym_typespec,
    ACTIONS(567), 1,
      anon_sym_tuple,
    ACTIONS(569), 1,
      anon_sym_list,
    ACTIONS(571), 1,
      anon_sym_dict,
    ACTIONS(573), 1,
      anon_sym_func,
    STATE(315), 1,
      sym_type_spec_r,
    STATE(308), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(559), 12,
      anon_sym_void,
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
  [10203] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_LPAREN,
    ACTIONS(543), 1,
      anon_sym_Date,
    ACTIONS(545), 1,
      anon_sym_BQUOTE,
    ACTIONS(547), 1,
      anon_sym_typespec,
    ACTIONS(549), 1,
      anon_sym_tuple,
    ACTIONS(551), 1,
      anon_sym_list,
    ACTIONS(553), 1,
      anon_sym_dict,
    ACTIONS(555), 1,
      anon_sym_func,
    STATE(398), 1,
      sym_type_spec_r,
    STATE(392), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(541), 12,
      anon_sym_void,
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
  [10252] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(413), 1,
      anon_sym_func,
    STATE(154), 1,
      sym_type_spec_r,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
  [10301] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(413), 1,
      anon_sym_func,
    STATE(489), 1,
      sym_type_spec_r,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
  [10350] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(413), 1,
      anon_sym_func,
    STATE(163), 1,
      sym_type_spec_r,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
  [10399] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(413), 1,
      anon_sym_func,
    STATE(532), 1,
      sym_type_spec_r,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
  [10448] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(413), 1,
      anon_sym_func,
    STATE(476), 1,
      sym_type_spec_r,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
  [10497] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(413), 1,
      anon_sym_func,
    STATE(336), 1,
      sym_type_spec_r,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
  [10546] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(413), 1,
      anon_sym_func,
    STATE(522), 1,
      sym_type_spec_r,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
  [10595] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(413), 1,
      anon_sym_func,
    STATE(472), 1,
      sym_type_spec_r,
    STATE(165), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
  [10644] = 12,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_DOT,
    ACTIONS(423), 1,
      anon_sym_LBRACK,
    ACTIONS(427), 1,
      anon_sym_SEMI,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(419), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(433), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(435), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(575), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(429), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(431), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10692] = 12,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_DOT,
    ACTIONS(474), 1,
      anon_sym_LBRACK,
    ACTIONS(575), 1,
      anon_sym_LF,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    STATE(254), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(427), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(470), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(483), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(485), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(479), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(481), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10740] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_Date,
    ACTIONS(563), 1,
      anon_sym_BQUOTE,
    ACTIONS(565), 1,
      anon_sym_typespec,
    ACTIONS(567), 1,
      anon_sym_tuple,
    ACTIONS(569), 1,
      anon_sym_list,
    ACTIONS(571), 1,
      anon_sym_dict,
    ACTIONS(581), 1,
      anon_sym_func,
    STATE(325), 1,
      sym_type_spec,
    STATE(327), 1,
      sym_base_type_spec,
    ACTIONS(559), 12,
      anon_sym_void,
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
  [10785] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_Date,
    ACTIONS(545), 1,
      anon_sym_BQUOTE,
    ACTIONS(547), 1,
      anon_sym_typespec,
    ACTIONS(549), 1,
      anon_sym_tuple,
    ACTIONS(551), 1,
      anon_sym_list,
    ACTIONS(553), 1,
      anon_sym_dict,
    ACTIONS(583), 1,
      anon_sym_func,
    STATE(332), 1,
      sym_type_spec,
    STATE(387), 1,
      sym_base_type_spec,
    ACTIONS(541), 12,
      anon_sym_void,
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
  [10830] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_Date,
    ACTIONS(403), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      anon_sym_typespec,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_list,
    ACTIONS(411), 1,
      anon_sym_dict,
    ACTIONS(585), 1,
      anon_sym_func,
    STATE(434), 1,
      sym_base_type_spec,
    STATE(467), 1,
      sym_type_spec,
    ACTIONS(399), 12,
      anon_sym_void,
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
  [10875] = 10,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_DOT,
    ACTIONS(423), 1,
      anon_sym_LBRACK,
    ACTIONS(419), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(433), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(435), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(533), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(535), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(429), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(431), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10918] = 10,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_DOT,
    ACTIONS(474), 1,
      anon_sym_LBRACK,
    ACTIONS(533), 1,
      anon_sym_LF,
    ACTIONS(470), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(483), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(485), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(479), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(535), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(481), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10961] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_Date,
    ACTIONS(545), 1,
      anon_sym_BQUOTE,
    ACTIONS(547), 1,
      anon_sym_typespec,
    ACTIONS(549), 1,
      anon_sym_tuple,
    ACTIONS(551), 1,
      anon_sym_list,
    ACTIONS(553), 1,
      anon_sym_dict,
    ACTIONS(583), 1,
      anon_sym_func,
    STATE(344), 1,
      sym_type_spec,
    STATE(387), 1,
      sym_base_type_spec,
    ACTIONS(541), 12,
      anon_sym_void,
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
  [11006] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_Date,
    ACTIONS(563), 1,
      anon_sym_BQUOTE,
    ACTIONS(565), 1,
      anon_sym_typespec,
    ACTIONS(567), 1,
      anon_sym_tuple,
    ACTIONS(569), 1,
      anon_sym_list,
    ACTIONS(571), 1,
      anon_sym_dict,
    ACTIONS(581), 1,
      anon_sym_func,
    STATE(294), 1,
      sym_type_spec,
    STATE(327), 1,
      sym_base_type_spec,
    ACTIONS(559), 12,
      anon_sym_void,
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
  [11051] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    STATE(407), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(315), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(317), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(313), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11099] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(315), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(317), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(313), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11147] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
    STATE(376), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(315), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(317), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(313), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11195] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(595), 1,
      anon_sym_RBRACK,
    STATE(379), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(315), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(317), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(313), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11243] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
    STATE(364), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(315), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(317), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(313), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11291] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(599), 1,
      anon_sym_RBRACK,
    STATE(417), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(315), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(317), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(313), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11339] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
    STATE(422), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(315), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(317), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(313), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11387] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
    STATE(429), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(315), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(317), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(313), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11435] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(605), 1,
      anon_sym_RBRACK,
    STATE(430), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(315), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(317), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(313), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11483] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(607), 1,
      anon_sym_LBRACE,
    STATE(239), 1,
      sym_block,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(315), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(317), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(313), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11528] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(315), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(317), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(609), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(313), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11571] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(607), 1,
      anon_sym_LBRACE,
    STATE(259), 1,
      sym_block,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(315), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(317), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(313), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11616] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(611), 1,
      anon_sym_LBRACE,
    STATE(272), 1,
      sym_block,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(315), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(317), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(313), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11661] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(611), 1,
      anon_sym_LBRACE,
    STATE(242), 1,
      sym_block,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(315), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(317), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(313), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11706] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(613), 1,
      anon_sym_to,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(315), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(317), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(313), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11748] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(615), 1,
      anon_sym_RBRACK,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(315), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(317), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(313), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11790] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(617), 1,
      anon_sym_COLON,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(315), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(317), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(313), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11832] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(619), 1,
      anon_sym_RBRACK,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(315), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(317), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(313), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11874] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(621), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(315), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(317), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(313), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11916] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(623), 1,
      anon_sym_RBRACK,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(315), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(317), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(313), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11958] = 10,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(625), 1,
      ts_builtin_sym_end,
    ACTIONS(627), 1,
      anon_sym_LF,
    ACTIONS(630), 1,
      anon_sym_SEMI,
    ACTIONS(632), 1,
      anon_sym_elif,
    ACTIONS(634), 1,
      anon_sym_else,
    STATE(243), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(247), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(267), 1,
      sym_elif_clause,
    STATE(362), 1,
      sym_else_clause,
  [11989] = 9,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_LF,
    ACTIONS(641), 1,
      anon_sym_elif,
    ACTIONS(643), 1,
      anon_sym_else,
    STATE(246), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(252), 1,
      sym_elif_clause,
    STATE(328), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(345), 1,
      sym_else_clause,
    ACTIONS(639), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12018] = 10,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_elif,
    ACTIONS(634), 1,
      anon_sym_else,
    ACTIONS(639), 1,
      anon_sym_SEMI,
    ACTIONS(645), 1,
      ts_builtin_sym_end,
    ACTIONS(647), 1,
      anon_sym_LF,
    STATE(245), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(267), 1,
      sym_elif_clause,
    STATE(288), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(382), 1,
      sym_else_clause,
  [12049] = 9,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_elif,
    ACTIONS(643), 1,
      anon_sym_else,
    ACTIONS(650), 1,
      anon_sym_LF,
    STATE(244), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(248), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(252), 1,
      sym_elif_clause,
    STATE(373), 1,
      sym_else_clause,
    ACTIONS(630), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12078] = 10,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_elif,
    ACTIONS(634), 1,
      anon_sym_else,
    ACTIONS(653), 1,
      ts_builtin_sym_end,
    ACTIONS(655), 1,
      anon_sym_LF,
    ACTIONS(658), 1,
      anon_sym_SEMI,
    STATE(245), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(267), 1,
      sym_elif_clause,
    STATE(313), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(351), 1,
      sym_else_clause,
  [12109] = 9,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_elif,
    ACTIONS(643), 1,
      anon_sym_else,
    ACTIONS(660), 1,
      anon_sym_LF,
    STATE(246), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(252), 1,
      sym_elif_clause,
    STATE(319), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(340), 1,
      sym_else_clause,
    ACTIONS(658), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12138] = 6,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_elif,
    STATE(245), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(267), 1,
      sym_elif_clause,
    ACTIONS(663), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(665), 2,
      anon_sym_SEMI,
      anon_sym_else,
  [12159] = 6,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_LF,
    ACTIONS(670), 1,
      anon_sym_elif,
    STATE(246), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(252), 1,
      sym_elif_clause,
    ACTIONS(665), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_else,
  [12180] = 8,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_elif,
    ACTIONS(634), 1,
      anon_sym_else,
    ACTIONS(673), 1,
      anon_sym_LF,
    STATE(241), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(267), 1,
      sym_elif_clause,
    STATE(316), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(352), 1,
      sym_else_clause,
  [12205] = 8,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_elif,
    ACTIONS(643), 1,
      anon_sym_else,
    ACTIONS(673), 1,
      anon_sym_LF,
    STATE(240), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(252), 1,
      sym_elif_clause,
    STATE(316), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(339), 1,
      sym_else_clause,
  [12230] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_COLON,
    ACTIONS(675), 1,
      anon_sym_COMMA,
    STATE(249), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(533), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [12249] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_LF,
    ACTIONS(678), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(535), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12266] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_SEMI,
    ACTIONS(681), 1,
      anon_sym_COMMA,
    STATE(251), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(533), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12283] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_LF,
    ACTIONS(686), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
  [12296] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_SEMI,
    ACTIONS(692), 1,
      anon_sym_COMMA,
    STATE(268), 1,
      aux_sym_enum_declaration_repeat1,
    ACTIONS(688), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12313] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(694), 1,
      anon_sym_LF,
    STATE(250), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(696), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12330] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_LF,
    ACTIONS(700), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
  [12343] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_LBRACK,
    ACTIONS(489), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(491), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12358] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_SEMI,
    ACTIONS(708), 1,
      anon_sym_COMMA,
    STATE(257), 1,
      aux_sym_enum_declaration_repeat1,
    ACTIONS(704), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12375] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_LF,
    ACTIONS(715), 1,
      anon_sym_COMMA,
    STATE(273), 1,
      aux_sym_enum_declaration_repeat1,
    ACTIONS(713), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12392] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(717), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(719), 3,
      anon_sym_SEMI,
      anon_sym_elif,
      anon_sym_else,
  [12405] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_SEMI,
    ACTIONS(725), 1,
      anon_sym_COMMA,
    STATE(264), 1,
      aux_sym_var_declaration_repeat1,
    ACTIONS(721), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12422] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_COMMA,
    ACTIONS(713), 1,
      anon_sym_SEMI,
    STATE(262), 1,
      aux_sym_enum_declaration_repeat1,
    ACTIONS(711), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12439] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_COMMA,
    ACTIONS(729), 1,
      anon_sym_SEMI,
    STATE(257), 1,
      aux_sym_enum_declaration_repeat1,
    ACTIONS(727), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12456] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(698), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(700), 3,
      anon_sym_SEMI,
      anon_sym_elif,
      anon_sym_else,
  [12469] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_COMMA,
    ACTIONS(733), 1,
      anon_sym_SEMI,
    STATE(269), 1,
      aux_sym_var_declaration_repeat1,
    ACTIONS(731), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12486] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_LF,
    ACTIONS(735), 1,
      anon_sym_COMMA,
    STATE(265), 1,
      aux_sym_enum_declaration_repeat1,
    ACTIONS(706), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12503] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    ACTIONS(696), 1,
      anon_sym_SEMI,
    STATE(251), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(694), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12520] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(684), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(686), 3,
      anon_sym_SEMI,
      anon_sym_elif,
      anon_sym_else,
  [12533] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_COMMA,
    ACTIONS(740), 1,
      anon_sym_SEMI,
    STATE(257), 1,
      aux_sym_enum_declaration_repeat1,
    ACTIONS(738), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12550] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_SEMI,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    STATE(269), 1,
      aux_sym_var_declaration_repeat1,
    ACTIONS(742), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12567] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_LF,
    ACTIONS(751), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
  [12580] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(749), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(751), 3,
      anon_sym_SEMI,
      anon_sym_elif,
      anon_sym_else,
  [12593] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_LF,
    ACTIONS(719), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
  [12606] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_COMMA,
    ACTIONS(727), 1,
      anon_sym_LF,
    STATE(265), 1,
      aux_sym_enum_declaration_repeat1,
    ACTIONS(729), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12623] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(696), 1,
      anon_sym_COLON,
    STATE(249), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(694), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [12640] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_LF,
    ACTIONS(723), 1,
      anon_sym_SEMI,
    ACTIONS(753), 1,
      anon_sym_COMMA,
    STATE(278), 1,
      aux_sym_var_declaration_repeat1,
  [12656] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(497), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(499), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12668] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_DQUOTE,
    ACTIONS(757), 1,
      sym_escape_sequence,
    ACTIONS(759), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(296), 1,
      aux_sym__quoted_string_content_double,
  [12684] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_LF,
    ACTIONS(733), 1,
      anon_sym_SEMI,
    ACTIONS(753), 1,
      anon_sym_COMMA,
    STATE(311), 1,
      aux_sym_var_declaration_repeat1,
  [12700] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(761), 1,
      ts_builtin_sym_end,
    ACTIONS(763), 1,
      anon_sym_LF,
    ACTIONS(765), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      aux_sym_source_file_repeat1,
  [12716] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_SQUOTE,
    STATE(283), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(769), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [12730] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_DQUOTE,
    ACTIONS(771), 1,
      sym_escape_sequence,
    ACTIONS(773), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(277), 1,
      aux_sym__quoted_string_content_double,
  [12746] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_RPAREN,
    ACTIONS(777), 1,
      anon_sym_COMMA,
    ACTIONS(779), 1,
      anon_sym_STAR,
    STATE(320), 1,
      aux_sym_func_spec_repeat1,
  [12762] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_SQUOTE,
    STATE(297), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(781), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [12776] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_COMMA,
    ACTIONS(783), 1,
      anon_sym_RPAREN,
    ACTIONS(785), 1,
      anon_sym_STAR,
    STATE(282), 1,
      aux_sym_func_spec_repeat1,
  [12792] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_LF,
    ACTIONS(787), 1,
      anon_sym_LBRACK,
    ACTIONS(491), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12806] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    STATE(297), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(781), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [12820] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_LF,
    ACTIONS(706), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [12832] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_else,
    ACTIONS(673), 1,
      anon_sym_LF,
    STATE(316), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(409), 1,
      sym_else_clause,
  [12848] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(757), 1,
      sym_escape_sequence,
    ACTIONS(759), 1,
      aux_sym__quoted_string_content_double_token1,
    ACTIONS(789), 1,
      anon_sym_DQUOTE,
    STATE(296), 1,
      aux_sym__quoted_string_content_double,
  [12864] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_DQUOTE,
    ACTIONS(793), 1,
      sym_escape_sequence,
    ACTIONS(795), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(293), 1,
      aux_sym__quoted_string_content_double,
  [12880] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(529), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(531), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12892] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_SQUOTE,
    STATE(299), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(797), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [12906] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(757), 1,
      sym_escape_sequence,
    ACTIONS(759), 1,
      aux_sym__quoted_string_content_double_token1,
    ACTIONS(799), 1,
      anon_sym_DQUOTE,
    STATE(296), 1,
      aux_sym__quoted_string_content_double,
  [12922] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(801), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(803), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12934] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_LF,
    ACTIONS(690), 1,
      anon_sym_SEMI,
    ACTIONS(715), 1,
      anon_sym_COMMA,
    STATE(302), 1,
      aux_sym_enum_declaration_repeat1,
  [12950] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_DQUOTE,
    ACTIONS(807), 1,
      sym_escape_sequence,
    ACTIONS(810), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(296), 1,
      aux_sym__quoted_string_content_double,
  [12966] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_SQUOTE,
    STATE(297), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(815), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [12980] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(818), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(820), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12992] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    STATE(297), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(781), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [13006] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_LF,
    ACTIONS(824), 1,
      anon_sym_SEMI,
    ACTIONS(826), 1,
      anon_sym_RBRACE,
    STATE(314), 1,
      aux_sym__statement_list_repeat1,
  [13022] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_COMMA,
    ACTIONS(828), 1,
      anon_sym_RPAREN,
    ACTIONS(830), 1,
      anon_sym_STAR,
    STATE(309), 1,
      aux_sym_func_spec_repeat1,
  [13038] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_COMMA,
    ACTIONS(738), 1,
      anon_sym_LF,
    ACTIONS(740), 1,
      anon_sym_SEMI,
    STATE(265), 1,
      aux_sym_enum_declaration_repeat1,
  [13054] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(501), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(503), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13066] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_LF,
    ACTIONS(835), 1,
      anon_sym_SEMI,
    ACTIONS(838), 1,
      anon_sym_RBRACE,
    STATE(304), 1,
      aux_sym__statement_list_repeat1,
  [13082] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(704), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(706), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13094] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(493), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(495), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13106] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(505), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(507), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13118] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(521), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(523), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13130] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_COMMA,
    ACTIONS(840), 1,
      anon_sym_RPAREN,
    ACTIONS(842), 1,
      anon_sym_STAR,
    STATE(320), 1,
      aux_sym_func_spec_repeat1,
  [13146] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_COMMA,
    ACTIONS(844), 1,
      anon_sym_RPAREN,
    ACTIONS(846), 1,
      anon_sym_STAR,
    STATE(322), 1,
      aux_sym_func_spec_repeat1,
  [13162] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_LF,
    ACTIONS(744), 1,
      anon_sym_SEMI,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    STATE(311), 1,
      aux_sym_var_declaration_repeat1,
  [13178] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(509), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(511), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13190] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_else,
    ACTIONS(673), 1,
      anon_sym_LF,
    STATE(316), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(383), 1,
      sym_else_clause,
  [13206] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_LF,
    ACTIONS(853), 1,
      anon_sym_SEMI,
    ACTIONS(855), 1,
      anon_sym_RBRACE,
    STATE(304), 1,
      aux_sym__statement_list_repeat1,
  [13222] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(513), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(515), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13234] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_LF,
    STATE(316), 1,
      aux_sym__if_elif_stmt_repeat1,
    ACTIONS(860), 2,
      anon_sym_elif,
      anon_sym_else,
  [13248] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(517), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(519), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13260] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(489), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(491), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13272] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_else,
    ACTIONS(673), 1,
      anon_sym_LF,
    STATE(316), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(346), 1,
      sym_else_clause,
  [13288] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_COMMA,
    STATE(320), 1,
      aux_sym_func_spec_repeat1,
    ACTIONS(862), 2,
      anon_sym_RPAREN,
      anon_sym_STAR,
  [13302] = 5,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_LF,
    ACTIONS(765), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      aux_sym_source_file_repeat1,
  [13318] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_COMMA,
    ACTIONS(867), 1,
      anon_sym_RPAREN,
    ACTIONS(869), 1,
      anon_sym_STAR,
    STATE(320), 1,
      aux_sym_func_spec_repeat1,
  [13334] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_SQUOTE,
    STATE(286), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(873), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [13348] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(742), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(744), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13360] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(875), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(877), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13372] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(879), 1,
      sym_escape_sequence,
    ACTIONS(881), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(289), 1,
      aux_sym__quoted_string_content_double,
  [13388] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(883), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(885), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13400] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_else,
    ACTIONS(673), 1,
      anon_sym_LF,
    STATE(316), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(349), 1,
      sym_else_clause,
  [13416] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(525), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(527), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13428] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_LF,
    ACTIONS(491), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13439] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_SEMI,
    ACTIONS(887), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13450] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_LF,
    ACTIONS(877), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_RPAREN,
    ACTIONS(893), 1,
      anon_sym_COMMA,
    STATE(412), 1,
      aux_sym_function_declaration_repeat1,
  [13474] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_LF,
    ACTIONS(744), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13485] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_SEMI,
    ACTIONS(415), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_STAR,
  [13505] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_SEMI,
    ACTIONS(895), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13516] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_LF,
    ACTIONS(901), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13527] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_LF,
    ACTIONS(905), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13538] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_LF,
    ACTIONS(909), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13549] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(911), 1,
      aux_sym_other_lit_token1,
    ACTIONS(913), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(410), 1,
      aux_sym_other_lit_repeat1,
  [13562] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(915), 1,
      aux_sym_other_lit_token1,
    STATE(421), 1,
      aux_sym_other_lit_repeat1,
  [13575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_COLON,
    ACTIONS(919), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [13586] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_LF,
    ACTIONS(803), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13597] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_LF,
    ACTIONS(923), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13608] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_LF,
    ACTIONS(927), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13619] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_SEMI,
    ACTIONS(929), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13630] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_SEMI,
    ACTIONS(933), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13641] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_LF,
    ACTIONS(939), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13652] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_SEMI,
    ACTIONS(941), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13663] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_SEMI,
    ACTIONS(907), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13674] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_SEMI,
    ACTIONS(903), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13685] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_SEMI,
    ACTIONS(899), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13696] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_SEMI,
    ACTIONS(945), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13707] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_LF,
    ACTIONS(417), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13718] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_LF,
    ACTIONS(931), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13729] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_LF,
    ACTIONS(935), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13740] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_COMMA,
    ACTIONS(951), 1,
      anon_sym_COLON,
    STATE(424), 1,
      aux_sym_enum_declaration_repeat1,
  [13753] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_COMMA,
    ACTIONS(953), 1,
      anon_sym_RPAREN,
    STATE(333), 1,
      aux_sym_function_declaration_repeat1,
  [13766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_COLON,
    ACTIONS(955), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_COMMA,
    ACTIONS(961), 1,
      anon_sym_RBRACE,
    STATE(403), 1,
      aux_sym_dict_literal_repeat1,
  [13790] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_SEMI,
    ACTIONS(963), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13801] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_LF,
    ACTIONS(943), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13812] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(967), 1,
      anon_sym_RPAREN,
    STATE(249), 1,
      aux_sym_expression_list_repeat1,
  [13825] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(969), 1,
      anon_sym_RPAREN,
    STATE(249), 1,
      aux_sym_expression_list_repeat1,
  [13838] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_COMMA,
    ACTIONS(974), 1,
      anon_sym_RBRACE,
    STATE(366), 1,
      aux_sym_dict_literal_repeat1,
  [13851] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_LF,
    ACTIONS(947), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13862] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_COMMA,
    ACTIONS(976), 1,
      anon_sym_COLON,
    STATE(384), 1,
      aux_sym_enum_declaration_repeat1,
  [13875] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(978), 1,
      anon_sym_LF,
    ACTIONS(838), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13886] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_LF,
    ACTIONS(765), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      aux_sym_source_file_repeat1,
  [13899] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_SEMI,
    ACTIONS(980), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13910] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_COMMA,
    ACTIONS(984), 1,
      anon_sym_RBRACE,
    STATE(366), 1,
      aux_sym_dict_literal_repeat1,
  [13923] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_LF,
    ACTIONS(965), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13934] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(988), 1,
      anon_sym_SEMI,
    ACTIONS(986), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13945] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(990), 1,
      aux_sym_other_lit_token1,
    ACTIONS(993), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(375), 1,
      aux_sym_other_lit_repeat1,
  [13958] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(995), 1,
      anon_sym_RPAREN,
    STATE(249), 1,
      aux_sym_expression_list_repeat1,
  [13971] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(997), 1,
      anon_sym_LF,
    ACTIONS(999), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13982] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_COLON,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    STATE(378), 1,
      aux_sym_enum_declaration_repeat1,
  [13995] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(1004), 1,
      anon_sym_RBRACK,
    STATE(249), 1,
      aux_sym_expression_list_repeat1,
  [14008] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_LF,
    ACTIONS(982), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [14019] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1006), 1,
      aux_sym_other_lit_token1,
    ACTIONS(1008), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(418), 1,
      aux_sym_other_lit_repeat1,
  [14032] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_SEMI,
    ACTIONS(921), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [14043] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_SEMI,
    ACTIONS(925), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [14054] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_COMMA,
    ACTIONS(1010), 1,
      anon_sym_COLON,
    STATE(378), 1,
      aux_sym_enum_declaration_repeat1,
  [14067] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1008), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(1012), 1,
      aux_sym_other_lit_token1,
    STATE(375), 1,
      aux_sym_other_lit_repeat1,
  [14080] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_LF,
    ACTIONS(1016), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [14091] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_LF,
    ACTIONS(885), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14102] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      sym_identifier,
    ACTIONS(1020), 1,
      anon_sym_RPAREN,
    STATE(359), 1,
      sym_param_spec,
  [14115] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1024), 1,
      anon_sym_SEMI,
    ACTIONS(1022), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [14126] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LF,
    ACTIONS(495), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14137] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_LF,
    ACTIONS(820), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14148] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_LF,
    ACTIONS(523), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14159] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LF,
    ACTIONS(511), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14170] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LF,
    ACTIONS(531), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14181] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_LF,
    ACTIONS(527), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14192] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_LF,
    ACTIONS(889), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [14203] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_LF,
    ACTIONS(519), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14214] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_LF,
    ACTIONS(515), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14225] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_COMMA,
    ACTIONS(1026), 1,
      anon_sym_RBRACE,
    STATE(372), 1,
      aux_sym_dict_literal_repeat1,
  [14238] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1016), 1,
      anon_sym_SEMI,
    ACTIONS(1014), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [14249] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_LF,
    ACTIONS(507), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14260] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_LF,
    ACTIONS(503), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14271] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_COMMA,
    ACTIONS(1028), 1,
      anon_sym_RBRACE,
    STATE(366), 1,
      aux_sym_dict_literal_repeat1,
  [14284] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_LF,
    ACTIONS(499), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14295] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1030), 1,
      aux_sym_other_lit_token1,
    ACTIONS(1032), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(381), 1,
      aux_sym_other_lit_repeat1,
  [14308] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1032), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(1034), 1,
      aux_sym_other_lit_token1,
    STATE(385), 1,
      aux_sym_other_lit_repeat1,
  [14321] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(1036), 1,
      anon_sym_RPAREN,
    STATE(249), 1,
      aux_sym_expression_list_repeat1,
  [14334] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1040), 1,
      anon_sym_SEMI,
    ACTIONS(1038), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [14345] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_SEMI,
    ACTIONS(937), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [14356] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1012), 1,
      aux_sym_other_lit_token1,
    ACTIONS(1042), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(375), 1,
      aux_sym_other_lit_repeat1,
  [14369] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_COMMA,
    ACTIONS(1044), 1,
      anon_sym_RPAREN,
    STATE(412), 1,
      aux_sym_function_declaration_repeat1,
  [14382] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      anon_sym_RPAREN,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    STATE(412), 1,
      aux_sym_function_declaration_repeat1,
  [14395] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(986), 1,
      anon_sym_LF,
    ACTIONS(988), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [14406] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1051), 1,
      aux_sym_other_lit_token1,
    ACTIONS(1053), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(426), 1,
      aux_sym_other_lit_repeat1,
  [14419] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1053), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(1055), 1,
      aux_sym_other_lit_token1,
    STATE(427), 1,
      aux_sym_other_lit_repeat1,
  [14432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 1,
      anon_sym_COLON,
    ACTIONS(1059), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [14443] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(1061), 1,
      anon_sym_RBRACK,
    STATE(249), 1,
      aux_sym_expression_list_repeat1,
  [14456] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(1063), 1,
      aux_sym_other_lit_token1,
    STATE(418), 1,
      aux_sym_other_lit_repeat1,
  [14469] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_COMMA,
    ACTIONS(1066), 1,
      anon_sym_RPAREN,
    STATE(411), 1,
      aux_sym_function_declaration_repeat1,
  [14482] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_COMMA,
    ACTIONS(1068), 1,
      anon_sym_RBRACE,
    STATE(428), 1,
      aux_sym_dict_literal_repeat1,
  [14495] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1006), 1,
      aux_sym_other_lit_token1,
    ACTIONS(1042), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(418), 1,
      aux_sym_other_lit_repeat1,
  [14508] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(1070), 1,
      anon_sym_RPAREN,
    STATE(249), 1,
      aux_sym_expression_list_repeat1,
  [14521] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(999), 1,
      anon_sym_SEMI,
    ACTIONS(997), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [14532] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_COMMA,
    ACTIONS(1072), 1,
      anon_sym_COLON,
    STATE(378), 1,
      aux_sym_enum_declaration_repeat1,
  [14545] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      sym_identifier,
    ACTIONS(1074), 1,
      anon_sym_RPAREN,
    STATE(419), 1,
      sym_param_spec,
  [14558] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1012), 1,
      aux_sym_other_lit_token1,
    ACTIONS(1076), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(375), 1,
      aux_sym_other_lit_repeat1,
  [14571] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1006), 1,
      aux_sym_other_lit_token1,
    ACTIONS(1076), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(418), 1,
      aux_sym_other_lit_repeat1,
  [14584] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_COMMA,
    ACTIONS(1078), 1,
      anon_sym_RBRACE,
    STATE(366), 1,
      aux_sym_dict_literal_repeat1,
  [14597] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(1080), 1,
      anon_sym_RPAREN,
    STATE(249), 1,
      aux_sym_expression_list_repeat1,
  [14610] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(1082), 1,
      anon_sym_RBRACK,
    STATE(249), 1,
      aux_sym_expression_list_repeat1,
  [14623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [14631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      sym_identifier,
    STATE(66), 1,
      sym_field_identifier,
  [14641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      sym_argument_list,
  [14651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_LBRACE,
    STATE(377), 1,
      sym_block,
  [14669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_LBRACE,
    STATE(374), 1,
      sym_block,
  [14679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      sym_identifier,
    STATE(260), 1,
      sym_var_decl_item,
  [14689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 1,
      sym_identifier,
    STATE(334), 1,
      sym_var_decl_item,
  [14699] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      sym_identifier,
    STATE(468), 1,
      sym_param_spec,
  [14709] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_LBRACE,
    STATE(389), 1,
      sym_block,
  [14719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 1,
      anon_sym_from,
    STATE(435), 1,
      sym_for_range_clause,
  [14729] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_LF,
    ACTIONS(897), 1,
      anon_sym_SEMI,
  [14739] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_LBRACE,
    STATE(447), 1,
      sym_block,
  [14749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    STATE(445), 1,
      sym_func_spec,
  [14759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    STATE(312), 1,
      sym_func_spec,
  [14777] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1022), 1,
      anon_sym_LF,
    ACTIONS(1024), 1,
      anon_sym_SEMI,
  [14787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_LBRACE,
    STATE(449), 1,
      sym_block,
  [14797] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1038), 1,
      anon_sym_LF,
    ACTIONS(1040), 1,
      anon_sym_SEMI,
  [14807] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 1,
      sym_identifier,
    STATE(275), 1,
      sym_var_decl_item,
  [14817] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    STATE(298), 1,
      sym_func_spec,
  [14827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_LBRACE,
    STATE(337), 1,
      sym_block,
  [14837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_LBRACE,
    STATE(353), 1,
      sym_block,
  [14847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 1,
      anon_sym_from,
    STATE(465), 1,
      sym_for_range_clause,
  [14857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 1,
      sym_identifier,
    STATE(113), 1,
      sym_field_identifier,
  [14867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    STATE(94), 1,
      sym_argument_list,
  [14877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      sym_argument_list,
  [14887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_LBRACE,
    STATE(338), 1,
      sym_block,
  [14897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_LBRACE,
    STATE(442), 1,
      sym_block,
  [14907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_LPAREN,
    STATE(393), 1,
      sym_func_spec,
  [14917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_LBRACE,
    STATE(408), 1,
      sym_block,
  [14927] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_LPAREN,
    STATE(391), 1,
      sym_func_spec,
  [14937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    STATE(156), 1,
      sym_func_spec,
  [14947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_LBRACE,
    STATE(423), 1,
      sym_block,
  [14965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_LBRACE,
    STATE(413), 1,
      sym_block,
  [14975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      sym_identifier,
    STATE(324), 1,
      sym_var_decl_item,
  [15001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      sym_identifier,
    STATE(114), 1,
      sym_field_identifier,
  [15011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      anon_sym_DASH_GT,
  [15018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_RBRACK,
  [15025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 1,
      anon_sym_RBRACK,
  [15032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      sym_identifier,
  [15039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      sym_identifier,
  [15046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_RBRACK,
  [15053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_DASH_GT,
  [15060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      sym_identifier,
  [15067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 1,
      anon_sym_BQUOTE,
  [15074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 1,
      sym_identifier,
  [15081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 1,
      anon_sym_RBRACK,
  [15088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 1,
      anon_sym_RBRACK,
  [15095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 1,
      sym_identifier,
  [15102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 1,
      anon_sym_LPAREN,
  [15109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_RBRACK,
  [15116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      anon_sym_DASH_GT,
  [15123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 1,
      anon_sym_DASH_GT,
  [15130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 1,
      anon_sym_DASH_GT,
  [15137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      anon_sym_COMMA,
  [15144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      sym_identifier,
  [15151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 1,
      anon_sym_DASH_GT,
  [15158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 1,
      anon_sym_DASH_GT,
  [15165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1140), 1,
      anon_sym_LPAREN,
  [15172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      sym_identifier,
  [15179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1144), 1,
      anon_sym_RBRACE,
  [15186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 1,
      anon_sym_LBRACK,
  [15193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1148), 1,
      sym_identifier,
  [15200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 1,
      anon_sym_LBRACK,
  [15207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_LBRACK,
  [15214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1154), 1,
      anon_sym_DASH_GT,
  [15221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1156), 1,
      anon_sym_DASH_GT,
  [15228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 1,
      anon_sym_RPAREN,
  [15235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1160), 1,
      anon_sym_RPAREN,
  [15242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 1,
      sym_identifier,
  [15249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1164), 1,
      anon_sym_DASH_GT,
  [15256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      anon_sym_RBRACK,
  [15263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 1,
      anon_sym_RBRACK,
  [15270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 1,
      sym_identifier,
  [15277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1172), 1,
      anon_sym_RPAREN,
  [15284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 1,
      anon_sym_DASH_GT,
  [15291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 1,
      ts_builtin_sym_end,
  [15298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1178), 1,
      anon_sym_DASH_GT,
  [15305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 1,
      anon_sym_RPAREN,
  [15312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 1,
      anon_sym_RPAREN,
  [15319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1184), 1,
      sym_identifier,
  [15326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 1,
      anon_sym_LBRACK,
  [15333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1188), 1,
      anon_sym_BQUOTE,
  [15340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      sym_identifier,
  [15347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      anon_sym_COMMA,
  [15354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
  [15361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1196), 1,
      sym_identifier,
  [15368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1198), 1,
      anon_sym_RPAREN,
  [15375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 1,
      anon_sym_LBRACK,
  [15382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 1,
      anon_sym_BQUOTE,
  [15389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1204), 1,
      anon_sym_RBRACE,
  [15396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
  [15403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
  [15410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1210), 1,
      sym_identifier,
  [15417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1212), 1,
      sym_identifier,
  [15424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1214), 1,
      anon_sym_RBRACK,
  [15431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1216), 1,
      sym_identifier,
  [15438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1218), 1,
      anon_sym_COMMA,
  [15445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1220), 1,
      sym_identifier,
  [15452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1222), 1,
      anon_sym_LBRACK,
  [15459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1224), 1,
      anon_sym_LBRACK,
  [15466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1226), 1,
      anon_sym_LBRACK,
  [15473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1228), 1,
      anon_sym_LBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 137,
  [SMALL_STATE(4)] = 274,
  [SMALL_STATE(5)] = 400,
  [SMALL_STATE(6)] = 526,
  [SMALL_STATE(7)] = 649,
  [SMALL_STATE(8)] = 772,
  [SMALL_STATE(9)] = 892,
  [SMALL_STATE(10)] = 1012,
  [SMALL_STATE(11)] = 1129,
  [SMALL_STATE(12)] = 1211,
  [SMALL_STATE(13)] = 1293,
  [SMALL_STATE(14)] = 1370,
  [SMALL_STATE(15)] = 1447,
  [SMALL_STATE(16)] = 1524,
  [SMALL_STATE(17)] = 1601,
  [SMALL_STATE(18)] = 1678,
  [SMALL_STATE(19)] = 1755,
  [SMALL_STATE(20)] = 1832,
  [SMALL_STATE(21)] = 1909,
  [SMALL_STATE(22)] = 1986,
  [SMALL_STATE(23)] = 2063,
  [SMALL_STATE(24)] = 2140,
  [SMALL_STATE(25)] = 2217,
  [SMALL_STATE(26)] = 2291,
  [SMALL_STATE(27)] = 2365,
  [SMALL_STATE(28)] = 2439,
  [SMALL_STATE(29)] = 2513,
  [SMALL_STATE(30)] = 2587,
  [SMALL_STATE(31)] = 2661,
  [SMALL_STATE(32)] = 2735,
  [SMALL_STATE(33)] = 2809,
  [SMALL_STATE(34)] = 2883,
  [SMALL_STATE(35)] = 2957,
  [SMALL_STATE(36)] = 3031,
  [SMALL_STATE(37)] = 3105,
  [SMALL_STATE(38)] = 3179,
  [SMALL_STATE(39)] = 3253,
  [SMALL_STATE(40)] = 3327,
  [SMALL_STATE(41)] = 3401,
  [SMALL_STATE(42)] = 3475,
  [SMALL_STATE(43)] = 3549,
  [SMALL_STATE(44)] = 3623,
  [SMALL_STATE(45)] = 3697,
  [SMALL_STATE(46)] = 3771,
  [SMALL_STATE(47)] = 3845,
  [SMALL_STATE(48)] = 3919,
  [SMALL_STATE(49)] = 3993,
  [SMALL_STATE(50)] = 4067,
  [SMALL_STATE(51)] = 4141,
  [SMALL_STATE(52)] = 4215,
  [SMALL_STATE(53)] = 4289,
  [SMALL_STATE(54)] = 4363,
  [SMALL_STATE(55)] = 4437,
  [SMALL_STATE(56)] = 4511,
  [SMALL_STATE(57)] = 4585,
  [SMALL_STATE(58)] = 4659,
  [SMALL_STATE(59)] = 4733,
  [SMALL_STATE(60)] = 4778,
  [SMALL_STATE(61)] = 4823,
  [SMALL_STATE(62)] = 4870,
  [SMALL_STATE(63)] = 4917,
  [SMALL_STATE(64)] = 4957,
  [SMALL_STATE(65)] = 4991,
  [SMALL_STATE(66)] = 5025,
  [SMALL_STATE(67)] = 5059,
  [SMALL_STATE(68)] = 5093,
  [SMALL_STATE(69)] = 5143,
  [SMALL_STATE(70)] = 5185,
  [SMALL_STATE(71)] = 5219,
  [SMALL_STATE(72)] = 5253,
  [SMALL_STATE(73)] = 5287,
  [SMALL_STATE(74)] = 5321,
  [SMALL_STATE(75)] = 5369,
  [SMALL_STATE(76)] = 5403,
  [SMALL_STATE(77)] = 5437,
  [SMALL_STATE(78)] = 5471,
  [SMALL_STATE(79)] = 5505,
  [SMALL_STATE(80)] = 5539,
  [SMALL_STATE(81)] = 5577,
  [SMALL_STATE(82)] = 5615,
  [SMALL_STATE(83)] = 5649,
  [SMALL_STATE(84)] = 5683,
  [SMALL_STATE(85)] = 5717,
  [SMALL_STATE(86)] = 5751,
  [SMALL_STATE(87)] = 5795,
  [SMALL_STATE(88)] = 5829,
  [SMALL_STATE(89)] = 5863,
  [SMALL_STATE(90)] = 5897,
  [SMALL_STATE(91)] = 5935,
  [SMALL_STATE(92)] = 5969,
  [SMALL_STATE(93)] = 6003,
  [SMALL_STATE(94)] = 6041,
  [SMALL_STATE(95)] = 6075,
  [SMALL_STATE(96)] = 6128,
  [SMALL_STATE(97)] = 6181,
  [SMALL_STATE(98)] = 6234,
  [SMALL_STATE(99)] = 6287,
  [SMALL_STATE(100)] = 6340,
  [SMALL_STATE(101)] = 6395,
  [SMALL_STATE(102)] = 6448,
  [SMALL_STATE(103)] = 6483,
  [SMALL_STATE(104)] = 6523,
  [SMALL_STATE(105)] = 6555,
  [SMALL_STATE(106)] = 6587,
  [SMALL_STATE(107)] = 6629,
  [SMALL_STATE(108)] = 6669,
  [SMALL_STATE(109)] = 6701,
  [SMALL_STATE(110)] = 6737,
  [SMALL_STATE(111)] = 6769,
  [SMALL_STATE(112)] = 6807,
  [SMALL_STATE(113)] = 6839,
  [SMALL_STATE(114)] = 6871,
  [SMALL_STATE(115)] = 6903,
  [SMALL_STATE(116)] = 6935,
  [SMALL_STATE(117)] = 6971,
  [SMALL_STATE(118)] = 7013,
  [SMALL_STATE(119)] = 7057,
  [SMALL_STATE(120)] = 7089,
  [SMALL_STATE(121)] = 7127,
  [SMALL_STATE(122)] = 7159,
  [SMALL_STATE(123)] = 7191,
  [SMALL_STATE(124)] = 7223,
  [SMALL_STATE(125)] = 7255,
  [SMALL_STATE(126)] = 7287,
  [SMALL_STATE(127)] = 7319,
  [SMALL_STATE(128)] = 7369,
  [SMALL_STATE(129)] = 7401,
  [SMALL_STATE(130)] = 7433,
  [SMALL_STATE(131)] = 7465,
  [SMALL_STATE(132)] = 7497,
  [SMALL_STATE(133)] = 7529,
  [SMALL_STATE(134)] = 7561,
  [SMALL_STATE(135)] = 7593,
  [SMALL_STATE(136)] = 7625,
  [SMALL_STATE(137)] = 7675,
  [SMALL_STATE(138)] = 7707,
  [SMALL_STATE(139)] = 7739,
  [SMALL_STATE(140)] = 7771,
  [SMALL_STATE(141)] = 7803,
  [SMALL_STATE(142)] = 7835,
  [SMALL_STATE(143)] = 7867,
  [SMALL_STATE(144)] = 7899,
  [SMALL_STATE(145)] = 7935,
  [SMALL_STATE(146)] = 7967,
  [SMALL_STATE(147)] = 7999,
  [SMALL_STATE(148)] = 8031,
  [SMALL_STATE(149)] = 8063,
  [SMALL_STATE(150)] = 8095,
  [SMALL_STATE(151)] = 8127,
  [SMALL_STATE(152)] = 8159,
  [SMALL_STATE(153)] = 8191,
  [SMALL_STATE(154)] = 8223,
  [SMALL_STATE(155)] = 8255,
  [SMALL_STATE(156)] = 8305,
  [SMALL_STATE(157)] = 8337,
  [SMALL_STATE(158)] = 8373,
  [SMALL_STATE(159)] = 8405,
  [SMALL_STATE(160)] = 8437,
  [SMALL_STATE(161)] = 8469,
  [SMALL_STATE(162)] = 8501,
  [SMALL_STATE(163)] = 8533,
  [SMALL_STATE(164)] = 8565,
  [SMALL_STATE(165)] = 8597,
  [SMALL_STATE(166)] = 8629,
  [SMALL_STATE(167)] = 8661,
  [SMALL_STATE(168)] = 8693,
  [SMALL_STATE(169)] = 8737,
  [SMALL_STATE(170)] = 8769,
  [SMALL_STATE(171)] = 8801,
  [SMALL_STATE(172)] = 8833,
  [SMALL_STATE(173)] = 8865,
  [SMALL_STATE(174)] = 8897,
  [SMALL_STATE(175)] = 8929,
  [SMALL_STATE(176)] = 8978,
  [SMALL_STATE(177)] = 9027,
  [SMALL_STATE(178)] = 9076,
  [SMALL_STATE(179)] = 9125,
  [SMALL_STATE(180)] = 9174,
  [SMALL_STATE(181)] = 9223,
  [SMALL_STATE(182)] = 9272,
  [SMALL_STATE(183)] = 9321,
  [SMALL_STATE(184)] = 9370,
  [SMALL_STATE(185)] = 9419,
  [SMALL_STATE(186)] = 9468,
  [SMALL_STATE(187)] = 9517,
  [SMALL_STATE(188)] = 9566,
  [SMALL_STATE(189)] = 9615,
  [SMALL_STATE(190)] = 9664,
  [SMALL_STATE(191)] = 9713,
  [SMALL_STATE(192)] = 9762,
  [SMALL_STATE(193)] = 9811,
  [SMALL_STATE(194)] = 9860,
  [SMALL_STATE(195)] = 9909,
  [SMALL_STATE(196)] = 9958,
  [SMALL_STATE(197)] = 10007,
  [SMALL_STATE(198)] = 10056,
  [SMALL_STATE(199)] = 10105,
  [SMALL_STATE(200)] = 10154,
  [SMALL_STATE(201)] = 10203,
  [SMALL_STATE(202)] = 10252,
  [SMALL_STATE(203)] = 10301,
  [SMALL_STATE(204)] = 10350,
  [SMALL_STATE(205)] = 10399,
  [SMALL_STATE(206)] = 10448,
  [SMALL_STATE(207)] = 10497,
  [SMALL_STATE(208)] = 10546,
  [SMALL_STATE(209)] = 10595,
  [SMALL_STATE(210)] = 10644,
  [SMALL_STATE(211)] = 10692,
  [SMALL_STATE(212)] = 10740,
  [SMALL_STATE(213)] = 10785,
  [SMALL_STATE(214)] = 10830,
  [SMALL_STATE(215)] = 10875,
  [SMALL_STATE(216)] = 10918,
  [SMALL_STATE(217)] = 10961,
  [SMALL_STATE(218)] = 11006,
  [SMALL_STATE(219)] = 11051,
  [SMALL_STATE(220)] = 11099,
  [SMALL_STATE(221)] = 11147,
  [SMALL_STATE(222)] = 11195,
  [SMALL_STATE(223)] = 11243,
  [SMALL_STATE(224)] = 11291,
  [SMALL_STATE(225)] = 11339,
  [SMALL_STATE(226)] = 11387,
  [SMALL_STATE(227)] = 11435,
  [SMALL_STATE(228)] = 11483,
  [SMALL_STATE(229)] = 11528,
  [SMALL_STATE(230)] = 11571,
  [SMALL_STATE(231)] = 11616,
  [SMALL_STATE(232)] = 11661,
  [SMALL_STATE(233)] = 11706,
  [SMALL_STATE(234)] = 11748,
  [SMALL_STATE(235)] = 11790,
  [SMALL_STATE(236)] = 11832,
  [SMALL_STATE(237)] = 11874,
  [SMALL_STATE(238)] = 11916,
  [SMALL_STATE(239)] = 11958,
  [SMALL_STATE(240)] = 11989,
  [SMALL_STATE(241)] = 12018,
  [SMALL_STATE(242)] = 12049,
  [SMALL_STATE(243)] = 12078,
  [SMALL_STATE(244)] = 12109,
  [SMALL_STATE(245)] = 12138,
  [SMALL_STATE(246)] = 12159,
  [SMALL_STATE(247)] = 12180,
  [SMALL_STATE(248)] = 12205,
  [SMALL_STATE(249)] = 12230,
  [SMALL_STATE(250)] = 12249,
  [SMALL_STATE(251)] = 12266,
  [SMALL_STATE(252)] = 12283,
  [SMALL_STATE(253)] = 12296,
  [SMALL_STATE(254)] = 12313,
  [SMALL_STATE(255)] = 12330,
  [SMALL_STATE(256)] = 12343,
  [SMALL_STATE(257)] = 12358,
  [SMALL_STATE(258)] = 12375,
  [SMALL_STATE(259)] = 12392,
  [SMALL_STATE(260)] = 12405,
  [SMALL_STATE(261)] = 12422,
  [SMALL_STATE(262)] = 12439,
  [SMALL_STATE(263)] = 12456,
  [SMALL_STATE(264)] = 12469,
  [SMALL_STATE(265)] = 12486,
  [SMALL_STATE(266)] = 12503,
  [SMALL_STATE(267)] = 12520,
  [SMALL_STATE(268)] = 12533,
  [SMALL_STATE(269)] = 12550,
  [SMALL_STATE(270)] = 12567,
  [SMALL_STATE(271)] = 12580,
  [SMALL_STATE(272)] = 12593,
  [SMALL_STATE(273)] = 12606,
  [SMALL_STATE(274)] = 12623,
  [SMALL_STATE(275)] = 12640,
  [SMALL_STATE(276)] = 12656,
  [SMALL_STATE(277)] = 12668,
  [SMALL_STATE(278)] = 12684,
  [SMALL_STATE(279)] = 12700,
  [SMALL_STATE(280)] = 12716,
  [SMALL_STATE(281)] = 12730,
  [SMALL_STATE(282)] = 12746,
  [SMALL_STATE(283)] = 12762,
  [SMALL_STATE(284)] = 12776,
  [SMALL_STATE(285)] = 12792,
  [SMALL_STATE(286)] = 12806,
  [SMALL_STATE(287)] = 12820,
  [SMALL_STATE(288)] = 12832,
  [SMALL_STATE(289)] = 12848,
  [SMALL_STATE(290)] = 12864,
  [SMALL_STATE(291)] = 12880,
  [SMALL_STATE(292)] = 12892,
  [SMALL_STATE(293)] = 12906,
  [SMALL_STATE(294)] = 12922,
  [SMALL_STATE(295)] = 12934,
  [SMALL_STATE(296)] = 12950,
  [SMALL_STATE(297)] = 12966,
  [SMALL_STATE(298)] = 12980,
  [SMALL_STATE(299)] = 12992,
  [SMALL_STATE(300)] = 13006,
  [SMALL_STATE(301)] = 13022,
  [SMALL_STATE(302)] = 13038,
  [SMALL_STATE(303)] = 13054,
  [SMALL_STATE(304)] = 13066,
  [SMALL_STATE(305)] = 13082,
  [SMALL_STATE(306)] = 13094,
  [SMALL_STATE(307)] = 13106,
  [SMALL_STATE(308)] = 13118,
  [SMALL_STATE(309)] = 13130,
  [SMALL_STATE(310)] = 13146,
  [SMALL_STATE(311)] = 13162,
  [SMALL_STATE(312)] = 13178,
  [SMALL_STATE(313)] = 13190,
  [SMALL_STATE(314)] = 13206,
  [SMALL_STATE(315)] = 13222,
  [SMALL_STATE(316)] = 13234,
  [SMALL_STATE(317)] = 13248,
  [SMALL_STATE(318)] = 13260,
  [SMALL_STATE(319)] = 13272,
  [SMALL_STATE(320)] = 13288,
  [SMALL_STATE(321)] = 13302,
  [SMALL_STATE(322)] = 13318,
  [SMALL_STATE(323)] = 13334,
  [SMALL_STATE(324)] = 13348,
  [SMALL_STATE(325)] = 13360,
  [SMALL_STATE(326)] = 13372,
  [SMALL_STATE(327)] = 13388,
  [SMALL_STATE(328)] = 13400,
  [SMALL_STATE(329)] = 13416,
  [SMALL_STATE(330)] = 13428,
  [SMALL_STATE(331)] = 13439,
  [SMALL_STATE(332)] = 13450,
  [SMALL_STATE(333)] = 13461,
  [SMALL_STATE(334)] = 13474,
  [SMALL_STATE(335)] = 13485,
  [SMALL_STATE(336)] = 13496,
  [SMALL_STATE(337)] = 13505,
  [SMALL_STATE(338)] = 13516,
  [SMALL_STATE(339)] = 13527,
  [SMALL_STATE(340)] = 13538,
  [SMALL_STATE(341)] = 13549,
  [SMALL_STATE(342)] = 13562,
  [SMALL_STATE(343)] = 13575,
  [SMALL_STATE(344)] = 13586,
  [SMALL_STATE(345)] = 13597,
  [SMALL_STATE(346)] = 13608,
  [SMALL_STATE(347)] = 13619,
  [SMALL_STATE(348)] = 13630,
  [SMALL_STATE(349)] = 13641,
  [SMALL_STATE(350)] = 13652,
  [SMALL_STATE(351)] = 13663,
  [SMALL_STATE(352)] = 13674,
  [SMALL_STATE(353)] = 13685,
  [SMALL_STATE(354)] = 13696,
  [SMALL_STATE(355)] = 13707,
  [SMALL_STATE(356)] = 13718,
  [SMALL_STATE(357)] = 13729,
  [SMALL_STATE(358)] = 13740,
  [SMALL_STATE(359)] = 13753,
  [SMALL_STATE(360)] = 13766,
  [SMALL_STATE(361)] = 13777,
  [SMALL_STATE(362)] = 13790,
  [SMALL_STATE(363)] = 13801,
  [SMALL_STATE(364)] = 13812,
  [SMALL_STATE(365)] = 13825,
  [SMALL_STATE(366)] = 13838,
  [SMALL_STATE(367)] = 13851,
  [SMALL_STATE(368)] = 13862,
  [SMALL_STATE(369)] = 13875,
  [SMALL_STATE(370)] = 13886,
  [SMALL_STATE(371)] = 13899,
  [SMALL_STATE(372)] = 13910,
  [SMALL_STATE(373)] = 13923,
  [SMALL_STATE(374)] = 13934,
  [SMALL_STATE(375)] = 13945,
  [SMALL_STATE(376)] = 13958,
  [SMALL_STATE(377)] = 13971,
  [SMALL_STATE(378)] = 13982,
  [SMALL_STATE(379)] = 13995,
  [SMALL_STATE(380)] = 14008,
  [SMALL_STATE(381)] = 14019,
  [SMALL_STATE(382)] = 14032,
  [SMALL_STATE(383)] = 14043,
  [SMALL_STATE(384)] = 14054,
  [SMALL_STATE(385)] = 14067,
  [SMALL_STATE(386)] = 14080,
  [SMALL_STATE(387)] = 14091,
  [SMALL_STATE(388)] = 14102,
  [SMALL_STATE(389)] = 14115,
  [SMALL_STATE(390)] = 14126,
  [SMALL_STATE(391)] = 14137,
  [SMALL_STATE(392)] = 14148,
  [SMALL_STATE(393)] = 14159,
  [SMALL_STATE(394)] = 14170,
  [SMALL_STATE(395)] = 14181,
  [SMALL_STATE(396)] = 14192,
  [SMALL_STATE(397)] = 14203,
  [SMALL_STATE(398)] = 14214,
  [SMALL_STATE(399)] = 14225,
  [SMALL_STATE(400)] = 14238,
  [SMALL_STATE(401)] = 14249,
  [SMALL_STATE(402)] = 14260,
  [SMALL_STATE(403)] = 14271,
  [SMALL_STATE(404)] = 14284,
  [SMALL_STATE(405)] = 14295,
  [SMALL_STATE(406)] = 14308,
  [SMALL_STATE(407)] = 14321,
  [SMALL_STATE(408)] = 14334,
  [SMALL_STATE(409)] = 14345,
  [SMALL_STATE(410)] = 14356,
  [SMALL_STATE(411)] = 14369,
  [SMALL_STATE(412)] = 14382,
  [SMALL_STATE(413)] = 14395,
  [SMALL_STATE(414)] = 14406,
  [SMALL_STATE(415)] = 14419,
  [SMALL_STATE(416)] = 14432,
  [SMALL_STATE(417)] = 14443,
  [SMALL_STATE(418)] = 14456,
  [SMALL_STATE(419)] = 14469,
  [SMALL_STATE(420)] = 14482,
  [SMALL_STATE(421)] = 14495,
  [SMALL_STATE(422)] = 14508,
  [SMALL_STATE(423)] = 14521,
  [SMALL_STATE(424)] = 14532,
  [SMALL_STATE(425)] = 14545,
  [SMALL_STATE(426)] = 14558,
  [SMALL_STATE(427)] = 14571,
  [SMALL_STATE(428)] = 14584,
  [SMALL_STATE(429)] = 14597,
  [SMALL_STATE(430)] = 14610,
  [SMALL_STATE(431)] = 14623,
  [SMALL_STATE(432)] = 14631,
  [SMALL_STATE(433)] = 14641,
  [SMALL_STATE(434)] = 14651,
  [SMALL_STATE(435)] = 14659,
  [SMALL_STATE(436)] = 14669,
  [SMALL_STATE(437)] = 14679,
  [SMALL_STATE(438)] = 14689,
  [SMALL_STATE(439)] = 14699,
  [SMALL_STATE(440)] = 14709,
  [SMALL_STATE(441)] = 14719,
  [SMALL_STATE(442)] = 14729,
  [SMALL_STATE(443)] = 14739,
  [SMALL_STATE(444)] = 14749,
  [SMALL_STATE(445)] = 14759,
  [SMALL_STATE(446)] = 14767,
  [SMALL_STATE(447)] = 14777,
  [SMALL_STATE(448)] = 14787,
  [SMALL_STATE(449)] = 14797,
  [SMALL_STATE(450)] = 14807,
  [SMALL_STATE(451)] = 14817,
  [SMALL_STATE(452)] = 14827,
  [SMALL_STATE(453)] = 14837,
  [SMALL_STATE(454)] = 14847,
  [SMALL_STATE(455)] = 14857,
  [SMALL_STATE(456)] = 14867,
  [SMALL_STATE(457)] = 14877,
  [SMALL_STATE(458)] = 14887,
  [SMALL_STATE(459)] = 14897,
  [SMALL_STATE(460)] = 14907,
  [SMALL_STATE(461)] = 14917,
  [SMALL_STATE(462)] = 14927,
  [SMALL_STATE(463)] = 14937,
  [SMALL_STATE(464)] = 14947,
  [SMALL_STATE(465)] = 14955,
  [SMALL_STATE(466)] = 14965,
  [SMALL_STATE(467)] = 14975,
  [SMALL_STATE(468)] = 14983,
  [SMALL_STATE(469)] = 14991,
  [SMALL_STATE(470)] = 15001,
  [SMALL_STATE(471)] = 15011,
  [SMALL_STATE(472)] = 15018,
  [SMALL_STATE(473)] = 15025,
  [SMALL_STATE(474)] = 15032,
  [SMALL_STATE(475)] = 15039,
  [SMALL_STATE(476)] = 15046,
  [SMALL_STATE(477)] = 15053,
  [SMALL_STATE(478)] = 15060,
  [SMALL_STATE(479)] = 15067,
  [SMALL_STATE(480)] = 15074,
  [SMALL_STATE(481)] = 15081,
  [SMALL_STATE(482)] = 15088,
  [SMALL_STATE(483)] = 15095,
  [SMALL_STATE(484)] = 15102,
  [SMALL_STATE(485)] = 15109,
  [SMALL_STATE(486)] = 15116,
  [SMALL_STATE(487)] = 15123,
  [SMALL_STATE(488)] = 15130,
  [SMALL_STATE(489)] = 15137,
  [SMALL_STATE(490)] = 15144,
  [SMALL_STATE(491)] = 15151,
  [SMALL_STATE(492)] = 15158,
  [SMALL_STATE(493)] = 15165,
  [SMALL_STATE(494)] = 15172,
  [SMALL_STATE(495)] = 15179,
  [SMALL_STATE(496)] = 15186,
  [SMALL_STATE(497)] = 15193,
  [SMALL_STATE(498)] = 15200,
  [SMALL_STATE(499)] = 15207,
  [SMALL_STATE(500)] = 15214,
  [SMALL_STATE(501)] = 15221,
  [SMALL_STATE(502)] = 15228,
  [SMALL_STATE(503)] = 15235,
  [SMALL_STATE(504)] = 15242,
  [SMALL_STATE(505)] = 15249,
  [SMALL_STATE(506)] = 15256,
  [SMALL_STATE(507)] = 15263,
  [SMALL_STATE(508)] = 15270,
  [SMALL_STATE(509)] = 15277,
  [SMALL_STATE(510)] = 15284,
  [SMALL_STATE(511)] = 15291,
  [SMALL_STATE(512)] = 15298,
  [SMALL_STATE(513)] = 15305,
  [SMALL_STATE(514)] = 15312,
  [SMALL_STATE(515)] = 15319,
  [SMALL_STATE(516)] = 15326,
  [SMALL_STATE(517)] = 15333,
  [SMALL_STATE(518)] = 15340,
  [SMALL_STATE(519)] = 15347,
  [SMALL_STATE(520)] = 15354,
  [SMALL_STATE(521)] = 15361,
  [SMALL_STATE(522)] = 15368,
  [SMALL_STATE(523)] = 15375,
  [SMALL_STATE(524)] = 15382,
  [SMALL_STATE(525)] = 15389,
  [SMALL_STATE(526)] = 15396,
  [SMALL_STATE(527)] = 15403,
  [SMALL_STATE(528)] = 15410,
  [SMALL_STATE(529)] = 15417,
  [SMALL_STATE(530)] = 15424,
  [SMALL_STATE(531)] = 15431,
  [SMALL_STATE(532)] = 15438,
  [SMALL_STATE(533)] = 15445,
  [SMALL_STATE(534)] = 15452,
  [SMALL_STATE(535)] = 15459,
  [SMALL_STATE(536)] = 15466,
  [SMALL_STATE(537)] = 15473,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(61),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(57),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(15),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(34),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(5),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(504),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(490),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(457),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(46),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(515),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(450),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(518),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(150),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(150),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(149),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(148),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(355),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(11),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(290),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(292),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(406),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(405),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_literal, 4),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_literal, 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 12),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, .production_id = 12),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_identifier, 1, .production_id = 11),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_identifier, 1, .production_id = 11),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 10),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 10),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_literal, 3),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_literal, 3),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_literal, 1),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_composite_literal, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 4),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 4),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 4),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_literal, 4),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 5),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 5),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 2),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_true, 1),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_true, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 3),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_expression, 4, .production_id = 20),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_expression, 4, .production_id = 20),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_false, 1),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_false, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 6),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 6),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 1),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(197),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(173),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(173),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(521),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(102),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(534),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(516),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(535),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(463),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expression_list, 1), SHIFT(42),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 1),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 1),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 2),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_spec, 8),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_spec, 8),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_spec, 7),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_spec, 7),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_spec, 6),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_spec, 6),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec_r, 2),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_spec_r, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_spec, 5),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_spec, 5),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 6),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 6),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec_r, 1),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_spec_r, 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 5),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 5),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 4),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 4),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_kv, 3, .production_id = 13),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_range_clause, 4, .production_id = 28),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_stmt, 3, .production_id = 8),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__if_stmt, 3, .production_id = 8), SHIFT(247),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_stmt, 3, .production_id = 8),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__if_elif_stmt, 5, .production_id = 23), SHIFT(328),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_stmt, 5, .production_id = 23),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_stmt, 5, .production_id = 23),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__if_elif_stmt, 5, .production_id = 23), SHIFT(288),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__if_stmt, 3, .production_id = 8), SHIFT(248),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_stmt, 4, .production_id = 17),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__if_elif_stmt, 4, .production_id = 17), SHIFT(313),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_stmt, 4, .production_id = 17),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__if_elif_stmt, 4, .production_id = 17), SHIFT(319),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 2, .production_id = 25),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 2, .production_id = 25),
  [667] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 2, .production_id = 25), SHIFT_REPEAT(32),
  [670] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 2, .production_id = 25), SHIFT_REPEAT(58),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [675] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(52),
  [678] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(56),
  [681] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(43),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 1, .production_id = 15),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 1, .production_id = 15),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 2),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 2),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 2),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_declaration_repeat1, 2),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_declaration_repeat1, 2),
  [708] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_declaration_repeat1, 2), SHIFT_REPEAT(475),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 2),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 2),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_clause, 3, .production_id = 8),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif_clause, 3, .production_id = 8),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 2),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 2),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 3),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 3),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 3),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 3),
  [735] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_declaration_repeat1, 2), SHIFT_REPEAT(478),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 3),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_declaration_repeat1, 2),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_var_declaration_repeat1, 2),
  [746] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_var_declaration_repeat1, 2), SHIFT_REPEAT(469),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_decl_item, 4, .production_id = 27),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_decl_item, 4, .production_id = 27),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_content_double, 2),
  [807] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_content_double, 2), SHIFT_REPEAT(296),
  [810] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_content_double, 2), SHIFT_REPEAT(296),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_content_single, 2),
  [815] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_content_single, 2), SHIFT_REPEAT(297),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec, 2),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_spec, 2),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [832] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(10),
  [835] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(10),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [848] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_var_declaration_repeat1, 2), SHIFT_REPEAT(438),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [857] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__if_elif_stmt_repeat1, 2), SHIFT_REPEAT(316),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__if_elif_stmt_repeat1, 2),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_spec_repeat1, 2),
  [864] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_spec_repeat1, 2), SHIFT_REPEAT(207),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_decl_item, 3, .production_id = 19),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_decl_item, 3, .production_id = 19),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec, 1),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_spec, 1),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, .production_id = 7),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2, .production_id = 7),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 26),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 5, .production_id = 26),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2, .production_id = 21),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2, .production_id = 21),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_else_stmt, 5, .production_id = 22),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_else_stmt, 5, .production_id = 22),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_else_stmt, 5, .production_id = 24),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_else_stmt, 5, .production_id = 24),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_else_stmt, 6, .production_id = 29),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_else_stmt, 6, .production_id = 29),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_else_stmt, 6, .production_id = 30),
  [927] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_else_stmt, 6, .production_id = 30),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1, .production_id = 1),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1, .production_id = 1),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1, .production_id = 2),
  [935] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1, .production_id = 2),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_else_stmt, 7, .production_id = 33),
  [939] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_else_stmt, 7, .production_id = 33),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1, .production_id = 3),
  [943] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1, .production_id = 3),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1, .production_id = 4),
  [947] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1, .production_id = 4),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_spec, 1, .production_id = 18),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_else_stmt, 4, .production_id = 16),
  [965] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_else_stmt, 4, .production_id = 16),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [971] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_literal_repeat1, 2), SHIFT_REPEAT(24),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_literal_repeat1, 2),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3, .production_id = 10),
  [982] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 3, .production_id = 10),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, .production_id = 9),
  [988] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3, .production_id = 9),
  [990] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_other_lit_repeat1, 2), SHIFT_REPEAT(375),
  [993] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_other_lit_repeat1, 2),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 4, .production_id = 14),
  [999] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 4, .production_id = 14),
  [1001] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_declaration_repeat1, 2), SHIFT_REPEAT(483),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [1016] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 32),
  [1024] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, .production_id = 32),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, .production_id = 34),
  [1040] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 7, .production_id = 34),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2),
  [1048] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2), SHIFT_REPEAT(439),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1063] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_other_lit_repeat1, 2), SHIFT_REPEAT(418),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_spec, 3, .production_id = 31),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1176] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
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
