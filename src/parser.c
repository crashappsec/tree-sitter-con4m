#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 529
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 142
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
  sym_for_statement = 94,
  sym_for_range_clause = 95,
  sym_call_expression = 96,
  sym_argument_list = 97,
  sym_if_statement = 98,
  sym__if_stmt = 99,
  sym__if_elif_stmt = 100,
  sym__if_elif_else_stmt = 101,
  sym__if_else_stmt = 102,
  sym_elif_clause = 103,
  sym_else_clause = 104,
  sym_binary_expression = 105,
  sym_base_type_spec = 106,
  sym_type_spec = 107,
  sym_type_spec_r = 108,
  sym_func_spec = 109,
  sym_section = 110,
  sym_function_declaration = 111,
  sym_var_declaration = 112,
  sym_var_decl_item = 113,
  sym_param_spec = 114,
  sym_export_statement = 115,
  sym_tuple_literal = 116,
  sym_list_literal = 117,
  sym_dict_literal = 118,
  sym_dict_kv = 119,
  sym_true = 120,
  sym_false = 121,
  sym_return_statement = 122,
  sym_quoted_string = 123,
  aux_sym__quoted_string_content_double = 124,
  aux_sym__quoted_string_content_single = 125,
  sym_multiline_string = 126,
  sym_string_literal = 127,
  sym_field_identifier = 128,
  aux_sym_source_file_repeat1 = 129,
  aux_sym_source_file_repeat2 = 130,
  aux_sym_expression_list_repeat1 = 131,
  aux_sym__statement_list_repeat1 = 132,
  aux_sym_enum_statement_repeat1 = 133,
  aux_sym__if_elif_stmt_repeat1 = 134,
  aux_sym__if_elif_stmt_repeat2 = 135,
  aux_sym_base_type_spec_repeat1 = 136,
  aux_sym_func_spec_repeat1 = 137,
  aux_sym_function_declaration_repeat1 = 138,
  aux_sym_var_declaration_repeat1 = 139,
  aux_sym_other_lit_repeat1 = 140,
  aux_sym_dict_literal_repeat1 = 141,
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
  [aux_sym_enum_statement_repeat1] = "enum_statement_repeat1",
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
  [aux_sym_enum_statement_repeat1] = aux_sym_enum_statement_repeat1,
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
  [aux_sym_enum_statement_repeat1] = {
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
  [15] = 13,
  [16] = 14,
  [17] = 17,
  [18] = 14,
  [19] = 19,
  [20] = 20,
  [21] = 13,
  [22] = 17,
  [23] = 19,
  [24] = 19,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 28,
  [30] = 28,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 32,
  [35] = 27,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 36,
  [41] = 41,
  [42] = 25,
  [43] = 43,
  [44] = 26,
  [45] = 37,
  [46] = 31,
  [47] = 25,
  [48] = 36,
  [49] = 31,
  [50] = 43,
  [51] = 43,
  [52] = 27,
  [53] = 26,
  [54] = 54,
  [55] = 54,
  [56] = 33,
  [57] = 32,
  [58] = 33,
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
  [87] = 63,
  [88] = 63,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 96,
  [98] = 98,
  [99] = 98,
  [100] = 100,
  [101] = 101,
  [102] = 98,
  [103] = 77,
  [104] = 85,
  [105] = 80,
  [106] = 92,
  [107] = 65,
  [108] = 74,
  [109] = 64,
  [110] = 70,
  [111] = 93,
  [112] = 94,
  [113] = 66,
  [114] = 67,
  [115] = 71,
  [116] = 73,
  [117] = 117,
  [118] = 77,
  [119] = 76,
  [120] = 75,
  [121] = 76,
  [122] = 75,
  [123] = 73,
  [124] = 81,
  [125] = 71,
  [126] = 67,
  [127] = 79,
  [128] = 66,
  [129] = 78,
  [130] = 68,
  [131] = 82,
  [132] = 70,
  [133] = 117,
  [134] = 69,
  [135] = 64,
  [136] = 74,
  [137] = 80,
  [138] = 82,
  [139] = 84,
  [140] = 89,
  [141] = 90,
  [142] = 91,
  [143] = 86,
  [144] = 72,
  [145] = 84,
  [146] = 83,
  [147] = 91,
  [148] = 117,
  [149] = 83,
  [150] = 72,
  [151] = 69,
  [152] = 65,
  [153] = 68,
  [154] = 85,
  [155] = 155,
  [156] = 90,
  [157] = 157,
  [158] = 78,
  [159] = 89,
  [160] = 79,
  [161] = 161,
  [162] = 81,
  [163] = 94,
  [164] = 164,
  [165] = 93,
  [166] = 166,
  [167] = 92,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 86,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 176,
  [181] = 181,
  [182] = 182,
  [183] = 179,
  [184] = 184,
  [185] = 176,
  [186] = 175,
  [187] = 177,
  [188] = 179,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 178,
  [193] = 182,
  [194] = 190,
  [195] = 191,
  [196] = 178,
  [197] = 197,
  [198] = 181,
  [199] = 190,
  [200] = 184,
  [201] = 177,
  [202] = 197,
  [203] = 184,
  [204] = 204,
  [205] = 191,
  [206] = 181,
  [207] = 182,
  [208] = 197,
  [209] = 175,
  [210] = 210,
  [211] = 210,
  [212] = 189,
  [213] = 213,
  [214] = 189,
  [215] = 215,
  [216] = 215,
  [217] = 213,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 219,
  [222] = 220,
  [223] = 219,
  [224] = 220,
  [225] = 225,
  [226] = 225,
  [227] = 225,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 229,
  [232] = 230,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 234,
  [238] = 234,
  [239] = 239,
  [240] = 240,
  [241] = 239,
  [242] = 242,
  [243] = 240,
  [244] = 242,
  [245] = 245,
  [246] = 245,
  [247] = 247,
  [248] = 248,
  [249] = 247,
  [250] = 250,
  [251] = 248,
  [252] = 252,
  [253] = 253,
  [254] = 248,
  [255] = 255,
  [256] = 253,
  [257] = 257,
  [258] = 258,
  [259] = 101,
  [260] = 255,
  [261] = 252,
  [262] = 262,
  [263] = 263,
  [264] = 262,
  [265] = 265,
  [266] = 266,
  [267] = 250,
  [268] = 265,
  [269] = 252,
  [270] = 266,
  [271] = 271,
  [272] = 257,
  [273] = 273,
  [274] = 170,
  [275] = 275,
  [276] = 276,
  [277] = 276,
  [278] = 173,
  [279] = 172,
  [280] = 280,
  [281] = 275,
  [282] = 282,
  [283] = 283,
  [284] = 169,
  [285] = 285,
  [286] = 286,
  [287] = 161,
  [288] = 166,
  [289] = 283,
  [290] = 276,
  [291] = 291,
  [292] = 275,
  [293] = 282,
  [294] = 283,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 291,
  [299] = 299,
  [300] = 263,
  [301] = 168,
  [302] = 286,
  [303] = 171,
  [304] = 258,
  [305] = 155,
  [306] = 101,
  [307] = 291,
  [308] = 308,
  [309] = 309,
  [310] = 157,
  [311] = 286,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 164,
  [317] = 317,
  [318] = 271,
  [319] = 319,
  [320] = 320,
  [321] = 282,
  [322] = 309,
  [323] = 312,
  [324] = 296,
  [325] = 325,
  [326] = 166,
  [327] = 327,
  [328] = 308,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 313,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 330,
  [347] = 347,
  [348] = 331,
  [349] = 349,
  [350] = 329,
  [351] = 344,
  [352] = 343,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 355,
  [357] = 357,
  [358] = 335,
  [359] = 333,
  [360] = 332,
  [361] = 361,
  [362] = 262,
  [363] = 363,
  [364] = 361,
  [365] = 338,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 157,
  [379] = 317,
  [380] = 380,
  [381] = 381,
  [382] = 372,
  [383] = 164,
  [384] = 314,
  [385] = 363,
  [386] = 161,
  [387] = 155,
  [388] = 340,
  [389] = 169,
  [390] = 315,
  [391] = 172,
  [392] = 173,
  [393] = 345,
  [394] = 347,
  [395] = 171,
  [396] = 170,
  [397] = 353,
  [398] = 168,
  [399] = 380,
  [400] = 327,
  [401] = 375,
  [402] = 337,
  [403] = 334,
  [404] = 404,
  [405] = 405,
  [406] = 334,
  [407] = 337,
  [408] = 339,
  [409] = 409,
  [410] = 342,
  [411] = 354,
  [412] = 353,
  [413] = 361,
  [414] = 366,
  [415] = 369,
  [416] = 371,
  [417] = 380,
  [418] = 375,
  [419] = 381,
  [420] = 368,
  [421] = 373,
  [422] = 368,
  [423] = 367,
  [424] = 366,
  [425] = 409,
  [426] = 367,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 357,
  [434] = 434,
  [435] = 427,
  [436] = 436,
  [437] = 437,
  [438] = 431,
  [439] = 439,
  [440] = 314,
  [441] = 441,
  [442] = 430,
  [443] = 349,
  [444] = 439,
  [445] = 405,
  [446] = 446,
  [447] = 447,
  [448] = 437,
  [449] = 447,
  [450] = 450,
  [451] = 450,
  [452] = 428,
  [453] = 436,
  [454] = 429,
  [455] = 455,
  [456] = 434,
  [457] = 431,
  [458] = 317,
  [459] = 459,
  [460] = 432,
  [461] = 430,
  [462] = 296,
  [463] = 427,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 465,
  [470] = 470,
  [471] = 466,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 465,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 483,
  [485] = 485,
  [486] = 481,
  [487] = 487,
  [488] = 488,
  [489] = 468,
  [490] = 490,
  [491] = 479,
  [492] = 468,
  [493] = 485,
  [494] = 480,
  [495] = 476,
  [496] = 479,
  [497] = 477,
  [498] = 477,
  [499] = 488,
  [500] = 476,
  [501] = 475,
  [502] = 474,
  [503] = 473,
  [504] = 485,
  [505] = 480,
  [506] = 506,
  [507] = 470,
  [508] = 487,
  [509] = 490,
  [510] = 510,
  [511] = 482,
  [512] = 512,
  [513] = 466,
  [514] = 470,
  [515] = 487,
  [516] = 488,
  [517] = 510,
  [518] = 482,
  [519] = 474,
  [520] = 510,
  [521] = 473,
  [522] = 464,
  [523] = 475,
  [524] = 506,
  [525] = 467,
  [526] = 472,
  [527] = 467,
  [528] = 472,
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
    case 2:
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
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 35},
  [88] = {.lex_state = 35},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 35},
  [96] = {.lex_state = 35},
  [97] = {.lex_state = 35},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
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
  [115] = {.lex_state = 35},
  [116] = {.lex_state = 35},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 35},
  [119] = {.lex_state = 35},
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
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 35},
  [150] = {.lex_state = 35},
  [151] = {.lex_state = 35},
  [152] = {.lex_state = 35},
  [153] = {.lex_state = 35},
  [154] = {.lex_state = 35},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 35},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 35},
  [159] = {.lex_state = 35},
  [160] = {.lex_state = 35},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 35},
  [163] = {.lex_state = 35},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 35},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 35},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 35},
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
  [189] = {.lex_state = 5},
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
  [212] = {.lex_state = 35},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 35},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
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
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 36},
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
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 36},
  [271] = {.lex_state = 36},
  [272] = {.lex_state = 36},
  [273] = {.lex_state = 36},
  [274] = {.lex_state = 36},
  [275] = {.lex_state = 1},
  [276] = {.lex_state = 2},
  [277] = {.lex_state = 2},
  [278] = {.lex_state = 36},
  [279] = {.lex_state = 36},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 1},
  [282] = {.lex_state = 2},
  [283] = {.lex_state = 1},
  [284] = {.lex_state = 36},
  [285] = {.lex_state = 36},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 36},
  [288] = {.lex_state = 36},
  [289] = {.lex_state = 1},
  [290] = {.lex_state = 2},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 1},
  [293] = {.lex_state = 2},
  [294] = {.lex_state = 1},
  [295] = {.lex_state = 36},
  [296] = {.lex_state = 36},
  [297] = {.lex_state = 1},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 2},
  [300] = {.lex_state = 36},
  [301] = {.lex_state = 36},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 36},
  [304] = {.lex_state = 36},
  [305] = {.lex_state = 36},
  [306] = {.lex_state = 36},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 36},
  [309] = {.lex_state = 36},
  [310] = {.lex_state = 36},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 36},
  [313] = {.lex_state = 36},
  [314] = {.lex_state = 36},
  [315] = {.lex_state = 36},
  [316] = {.lex_state = 36},
  [317] = {.lex_state = 36},
  [318] = {.lex_state = 36},
  [319] = {.lex_state = 36},
  [320] = {.lex_state = 36},
  [321] = {.lex_state = 2},
  [322] = {.lex_state = 36},
  [323] = {.lex_state = 36},
  [324] = {.lex_state = 36},
  [325] = {.lex_state = 36},
  [326] = {.lex_state = 36},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 36},
  [329] = {.lex_state = 36},
  [330] = {.lex_state = 36},
  [331] = {.lex_state = 36},
  [332] = {.lex_state = 36},
  [333] = {.lex_state = 36},
  [334] = {.lex_state = 3},
  [335] = {.lex_state = 36},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 4},
  [338] = {.lex_state = 36},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 36},
  [341] = {.lex_state = 36},
  [342] = {.lex_state = 36},
  [343] = {.lex_state = 36},
  [344] = {.lex_state = 36},
  [345] = {.lex_state = 36},
  [346] = {.lex_state = 36},
  [347] = {.lex_state = 36},
  [348] = {.lex_state = 36},
  [349] = {.lex_state = 36},
  [350] = {.lex_state = 36},
  [351] = {.lex_state = 36},
  [352] = {.lex_state = 36},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 36},
  [358] = {.lex_state = 36},
  [359] = {.lex_state = 36},
  [360] = {.lex_state = 36},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 4},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 36},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 36},
  [372] = {.lex_state = 36},
  [373] = {.lex_state = 36},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 4},
  [376] = {.lex_state = 36},
  [377] = {.lex_state = 36},
  [378] = {.lex_state = 36},
  [379] = {.lex_state = 36},
  [380] = {.lex_state = 3},
  [381] = {.lex_state = 36},
  [382] = {.lex_state = 36},
  [383] = {.lex_state = 36},
  [384] = {.lex_state = 36},
  [385] = {.lex_state = 3},
  [386] = {.lex_state = 36},
  [387] = {.lex_state = 36},
  [388] = {.lex_state = 36},
  [389] = {.lex_state = 36},
  [390] = {.lex_state = 36},
  [391] = {.lex_state = 36},
  [392] = {.lex_state = 36},
  [393] = {.lex_state = 36},
  [394] = {.lex_state = 36},
  [395] = {.lex_state = 36},
  [396] = {.lex_state = 36},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 36},
  [399] = {.lex_state = 3},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 4},
  [402] = {.lex_state = 4},
  [403] = {.lex_state = 3},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 36},
  [406] = {.lex_state = 3},
  [407] = {.lex_state = 4},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 36},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 36},
  [417] = {.lex_state = 3},
  [418] = {.lex_state = 4},
  [419] = {.lex_state = 36},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 36},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 36},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 36},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 36},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
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
  [465] = {.lex_state = 9},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 9},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 9},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 9},
  [478] = {.lex_state = 9},
  [479] = {.lex_state = 9},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 9},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 9},
  [497] = {.lex_state = 9},
  [498] = {.lex_state = 9},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 9},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
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
  [523] = {.lex_state = 9},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
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
    [sym_source_file] = STATE(512),
    [sym__top_level_item] = STATE(320),
    [sym__declaration] = STATE(320),
    [sym__statement] = STATE(320),
    [sym_unary_expression] = STATE(106),
    [sym__expression] = STATE(97),
    [sym_composite_literal] = STATE(106),
    [sym_selector_expression] = STATE(106),
    [sym_index_expression] = STATE(106),
    [sym_parenthesized_expression] = STATE(106),
    [sym_expression_list] = STATE(339),
    [sym_block] = STATE(329),
    [sym_assignment_statement] = STATE(329),
    [sym_for_statement] = STATE(329),
    [sym_call_expression] = STATE(106),
    [sym_if_statement] = STATE(329),
    [sym__if_stmt] = STATE(340),
    [sym__if_elif_stmt] = STATE(345),
    [sym__if_elif_else_stmt] = STATE(346),
    [sym__if_else_stmt] = STATE(348),
    [sym_binary_expression] = STATE(106),
    [sym_section] = STATE(329),
    [sym_function_declaration] = STATE(320),
    [sym_var_declaration] = STATE(320),
    [sym_export_statement] = STATE(329),
    [sym_tuple_literal] = STATE(124),
    [sym_list_literal] = STATE(124),
    [sym_dict_literal] = STATE(124),
    [sym_true] = STATE(106),
    [sym_false] = STATE(106),
    [sym_return_statement] = STATE(329),
    [sym_quoted_string] = STATE(127),
    [sym_multiline_string] = STATE(127),
    [sym_string_literal] = STATE(106),
    [aux_sym_source_file_repeat2] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_for] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_func] = ACTIONS(21),
    [anon_sym_var] = ACTIONS(23),
    [anon_sym_export] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [sym_int_literal] = ACTIONS(27),
    [sym_float_literal] = ACTIONS(27),
    [sym_imaginary_literal] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_True] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(33),
    [anon_sym_False] = ACTIONS(33),
    [sym_continue_statement] = ACTIONS(35),
    [sym_break_statement] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(43),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(45),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(64), 1,
      anon_sym_for,
    ACTIONS(67), 1,
      anon_sym_if,
    ACTIONS(70), 1,
      anon_sym_func,
    ACTIONS(73), 1,
      anon_sym_var,
    ACTIONS(76), 1,
      anon_sym_export,
    ACTIONS(82), 1,
      sym_imaginary_literal,
    ACTIONS(94), 1,
      anon_sym_return,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(2), 1,
      aux_sym_source_file_repeat2,
    STATE(96), 1,
      sym__expression,
    STATE(330), 1,
      sym__if_elif_else_stmt,
    STATE(331), 1,
      sym__if_else_stmt,
    STATE(388), 1,
      sym__if_stmt,
    STATE(393), 1,
      sym__if_elif_stmt,
    STATE(408), 1,
      sym_expression_list,
    ACTIONS(52), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(85), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(88), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(91), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(160), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(162), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(377), 5,
      sym__top_level_item,
      sym__declaration,
      sym__statement,
      sym_function_declaration,
      sym_var_declaration,
    STATE(350), 7,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_return_statement,
    STATE(167), 10,
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
  [130] = 34,
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
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_func,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_export,
    ACTIONS(29), 1,
      sym_imaginary_literal,
    ACTIONS(37), 1,
      anon_sym_return,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym__expression,
    STATE(339), 1,
      sym_expression_list,
    STATE(340), 1,
      sym__if_stmt,
    STATE(345), 1,
      sym__if_elif_stmt,
    STATE(346), 1,
      sym__if_elif_else_stmt,
    STATE(348), 1,
      sym__if_else_stmt,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(33), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(35), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(127), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(285), 5,
      sym__top_level_item,
      sym__declaration,
      sym__statement,
      sym_function_declaration,
      sym_var_declaration,
    STATE(329), 7,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_return_statement,
    STATE(106), 10,
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
  [260] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    ACTIONS(123), 1,
      anon_sym_for,
    ACTIONS(125), 1,
      anon_sym_if,
    ACTIONS(127), 1,
      anon_sym_export,
    ACTIONS(131), 1,
      sym_imaginary_literal,
    ACTIONS(139), 1,
      anon_sym_return,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(95), 1,
      sym__expression,
    STATE(295), 1,
      sym__statement,
    STATE(330), 1,
      sym__if_elif_else_stmt,
    STATE(331), 1,
      sym__if_else_stmt,
    STATE(353), 1,
      sym_dict_kv,
    STATE(388), 1,
      sym__if_stmt,
    STATE(393), 1,
      sym__if_elif_stmt,
    STATE(408), 1,
      sym_expression_list,
    STATE(490), 1,
      sym__statement_list,
    ACTIONS(113), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(129), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(135), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(137), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(160), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(162), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(350), 7,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_return_statement,
    STATE(167), 10,
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
  [383] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    ACTIONS(123), 1,
      anon_sym_for,
    ACTIONS(125), 1,
      anon_sym_if,
    ACTIONS(127), 1,
      anon_sym_export,
    ACTIONS(131), 1,
      sym_imaginary_literal,
    ACTIONS(139), 1,
      anon_sym_return,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym__expression,
    STATE(295), 1,
      sym__statement,
    STATE(330), 1,
      sym__if_elif_else_stmt,
    STATE(331), 1,
      sym__if_else_stmt,
    STATE(388), 1,
      sym__if_stmt,
    STATE(393), 1,
      sym__if_elif_stmt,
    STATE(397), 1,
      sym_dict_kv,
    STATE(408), 1,
      sym_expression_list,
    STATE(509), 1,
      sym__statement_list,
    ACTIONS(113), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(129), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(135), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(137), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(160), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(162), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(350), 7,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_return_statement,
    STATE(167), 10,
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
  [506] = 32,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    ACTIONS(123), 1,
      anon_sym_for,
    ACTIONS(125), 1,
      anon_sym_if,
    ACTIONS(127), 1,
      anon_sym_export,
    ACTIONS(131), 1,
      sym_imaginary_literal,
    ACTIONS(139), 1,
      anon_sym_return,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(96), 1,
      sym__expression,
    STATE(295), 1,
      sym__statement,
    STATE(330), 1,
      sym__if_elif_else_stmt,
    STATE(331), 1,
      sym__if_else_stmt,
    STATE(388), 1,
      sym__if_stmt,
    STATE(393), 1,
      sym__if_elif_stmt,
    STATE(408), 1,
      sym_expression_list,
    STATE(490), 1,
      sym__statement_list,
    ACTIONS(113), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(129), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(135), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(137), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(160), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(162), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(350), 7,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_return_statement,
    STATE(167), 10,
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
  [626] = 32,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    ACTIONS(123), 1,
      anon_sym_for,
    ACTIONS(125), 1,
      anon_sym_if,
    ACTIONS(127), 1,
      anon_sym_export,
    ACTIONS(131), 1,
      sym_imaginary_literal,
    ACTIONS(139), 1,
      anon_sym_return,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      sym__expression,
    STATE(295), 1,
      sym__statement,
    STATE(330), 1,
      sym__if_elif_else_stmt,
    STATE(331), 1,
      sym__if_else_stmt,
    STATE(388), 1,
      sym__if_stmt,
    STATE(393), 1,
      sym__if_elif_stmt,
    STATE(408), 1,
      sym_expression_list,
    STATE(509), 1,
      sym__statement_list,
    ACTIONS(113), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(129), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(135), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(137), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(160), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(162), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(350), 7,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_return_statement,
    STATE(167), 10,
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
  [746] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    ACTIONS(123), 1,
      anon_sym_for,
    ACTIONS(125), 1,
      anon_sym_if,
    ACTIONS(127), 1,
      anon_sym_export,
    ACTIONS(131), 1,
      sym_imaginary_literal,
    ACTIONS(139), 1,
      anon_sym_return,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      sym__expression,
    STATE(330), 1,
      sym__if_elif_else_stmt,
    STATE(331), 1,
      sym__if_else_stmt,
    STATE(376), 1,
      sym__statement,
    STATE(388), 1,
      sym__if_stmt,
    STATE(393), 1,
      sym__if_elif_stmt,
    STATE(408), 1,
      sym_expression_list,
    ACTIONS(113), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(129), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(135), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(137), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(160), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(162), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(350), 7,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_return_statement,
    STATE(167), 10,
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
  [863] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    ACTIONS(123), 1,
      anon_sym_for,
    ACTIONS(125), 1,
      anon_sym_if,
    ACTIONS(127), 1,
      anon_sym_export,
    ACTIONS(131), 1,
      sym_imaginary_literal,
    ACTIONS(139), 1,
      anon_sym_return,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      sym__expression,
    STATE(330), 1,
      sym__if_elif_else_stmt,
    STATE(331), 1,
      sym__if_else_stmt,
    STATE(376), 1,
      sym__statement,
    STATE(388), 1,
      sym__if_stmt,
    STATE(393), 1,
      sym__if_elif_stmt,
    STATE(408), 1,
      sym_expression_list,
    ACTIONS(113), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(129), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(135), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(137), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(160), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(162), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(350), 7,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_return_statement,
    STATE(167), 10,
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
  [980] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    ACTIONS(123), 1,
      anon_sym_for,
    ACTIONS(125), 1,
      anon_sym_if,
    ACTIONS(127), 1,
      anon_sym_export,
    ACTIONS(131), 1,
      sym_imaginary_literal,
    ACTIONS(139), 1,
      anon_sym_return,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(96), 1,
      sym__expression,
    STATE(330), 1,
      sym__if_elif_else_stmt,
    STATE(331), 1,
      sym__if_else_stmt,
    STATE(376), 1,
      sym__statement,
    STATE(388), 1,
      sym__if_stmt,
    STATE(393), 1,
      sym__if_elif_stmt,
    STATE(408), 1,
      sym_expression_list,
    ACTIONS(113), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(129), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(135), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(137), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(160), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(162), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(350), 7,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_return_statement,
    STATE(167), 10,
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
  [1094] = 20,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_SEMI,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(173), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(210), 1,
      sym__expression,
    STATE(365), 1,
      sym_expression_list,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(33), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(161), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(127), 2,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(27), 3,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
    STATE(124), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(106), 10,
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
  [1173] = 20,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_LF,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    ACTIONS(185), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(187), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(211), 1,
      sym__expression,
    STATE(338), 1,
      sym_expression_list,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(135), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(159), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(177), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(160), 2,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(129), 3,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
    STATE(162), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(167), 10,
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
  [1252] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_RBRACK,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(219), 1,
      sym__expression,
    ACTIONS(191), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(201), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(207), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(79), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(81), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(92), 10,
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
  [1326] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    STATE(225), 1,
      sym__expression,
    ACTIONS(191), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(201), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(207), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(79), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(81), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(92), 10,
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
  [1400] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    STATE(223), 1,
      sym__expression,
    ACTIONS(191), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(201), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(207), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(79), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(81), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(92), 10,
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
  [1474] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      sym__expression,
    ACTIONS(191), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(201), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(207), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(79), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(81), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(92), 10,
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
  [1548] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_imaginary_literal,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    STATE(210), 1,
      sym__expression,
    STATE(381), 1,
      sym_expression_list,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(33), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(127), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(106), 10,
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
  [1622] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    STATE(227), 1,
      sym__expression,
    ACTIONS(191), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(201), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(207), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(79), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(81), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(92), 10,
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
  [1696] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(233), 1,
      sym__expression,
    STATE(412), 1,
      sym_dict_kv,
    ACTIONS(191), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(201), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(207), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(79), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(81), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(92), 10,
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
  [1770] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(233), 1,
      sym__expression,
    STATE(459), 1,
      sym_dict_kv,
    ACTIONS(191), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(201), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(207), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(79), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(81), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(92), 10,
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
  [1844] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    STATE(221), 1,
      sym__expression,
    ACTIONS(191), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(201), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(207), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(79), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(81), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(92), 10,
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
  [1918] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_imaginary_literal,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
    STATE(211), 1,
      sym__expression,
    STATE(419), 1,
      sym_expression_list,
    ACTIONS(113), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(129), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(135), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(160), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(162), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(167), 10,
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
  [1992] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(233), 1,
      sym__expression,
    STATE(397), 1,
      sym_dict_kv,
    ACTIONS(191), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(201), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(207), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(79), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(81), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(92), 10,
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
  [2066] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(233), 1,
      sym__expression,
    STATE(353), 1,
      sym_dict_kv,
    ACTIONS(191), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(201), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(207), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(79), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(81), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(92), 10,
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
  [2140] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(238), 1,
      sym__expression,
    ACTIONS(191), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(201), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(207), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(79), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(81), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(92), 10,
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
  [2211] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_imaginary_literal,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
    STATE(125), 1,
      sym__expression,
    ACTIONS(113), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(129), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(135), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(160), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(162), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(167), 10,
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
  [2282] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_imaginary_literal,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
    STATE(126), 1,
      sym__expression,
    ACTIONS(113), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(129), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(135), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(160), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(162), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(167), 10,
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
  [2353] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_imaginary_literal,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym__expression,
    ACTIONS(113), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(129), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(135), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(160), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(162), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(167), 10,
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
  [2424] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_imaginary_literal,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    STATE(113), 1,
      sym__expression,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(33), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(127), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(106), 10,
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
  [2495] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(66), 1,
      sym__expression,
    ACTIONS(191), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(201), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(207), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(79), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(81), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(92), 10,
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
  [2566] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(220), 1,
      sym__expression,
    ACTIONS(191), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(201), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(207), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(79), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(81), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(92), 10,
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
  [2637] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_imaginary_literal,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym__expression,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(33), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(127), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(106), 10,
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
  [2708] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_imaginary_literal,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
    STATE(136), 1,
      sym__expression,
    ACTIONS(113), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(129), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(135), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(160), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(162), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(167), 10,
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
  [2779] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(78), 1,
      sym__expression,
    ACTIONS(191), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(201), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(207), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(79), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(81), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(92), 10,
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
  [2850] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(67), 1,
      sym__expression,
    ACTIONS(191), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(201), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(207), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(79), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(81), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(92), 10,
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
  [2921] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_imaginary_literal,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    STATE(214), 1,
      sym__expression,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(33), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(127), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(106), 10,
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
  [2992] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(229), 1,
      sym__expression,
    ACTIONS(191), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(201), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(207), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(79), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(81), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(92), 10,
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
  [3063] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(236), 1,
      sym__expression,
    ACTIONS(191), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(201), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(207), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(79), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(81), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(92), 10,
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
  [3134] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(235), 1,
      sym__expression,
    ACTIONS(191), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(201), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(207), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(79), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(81), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(92), 10,
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
  [3205] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(189), 1,
      sym__expression,
    ACTIONS(191), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(201), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(207), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(79), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(81), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(92), 10,
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
  [3276] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(228), 1,
      sym__expression,
    ACTIONS(191), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(201), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(207), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(79), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(81), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(92), 10,
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
  [3347] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(234), 1,
      sym__expression,
    ACTIONS(191), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(201), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(207), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(79), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(81), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(92), 10,
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
  [3418] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(73), 1,
      sym__expression,
    ACTIONS(191), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(201), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(207), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(79), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(81), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(92), 10,
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
  [3489] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(71), 1,
      sym__expression,
    ACTIONS(191), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(201), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(207), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(79), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(81), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(92), 10,
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
  [3560] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(231), 1,
      sym__expression,
    ACTIONS(191), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(201), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(207), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(79), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(81), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(92), 10,
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
  [3631] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(222), 1,
      sym__expression,
    ACTIONS(191), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(201), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(207), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(79), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(81), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(92), 10,
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
  [3702] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(237), 1,
      sym__expression,
    ACTIONS(191), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(201), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(207), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(79), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(81), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(92), 10,
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
  [3773] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_imaginary_literal,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
    STATE(212), 1,
      sym__expression,
    ACTIONS(113), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(129), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(135), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(160), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(162), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(167), 10,
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
  [3844] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(224), 1,
      sym__expression,
    ACTIONS(191), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(201), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(207), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(79), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(81), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(92), 10,
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
  [3915] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_imaginary_literal,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
    STATE(123), 1,
      sym__expression,
    ACTIONS(113), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(129), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(135), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(160), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(162), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(167), 10,
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
  [3986] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_imaginary_literal,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    STATE(116), 1,
      sym__expression,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(33), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(127), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(106), 10,
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
  [4057] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_imaginary_literal,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      sym__expression,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(33), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(127), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(106), 10,
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
  [4128] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_imaginary_literal,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    STATE(115), 1,
      sym__expression,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(33), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(127), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(106), 10,
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
  [4199] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(230), 1,
      sym__expression,
    ACTIONS(191), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(201), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(207), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(79), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(81), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(92), 10,
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
  [4270] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(232), 1,
      sym__expression,
    ACTIONS(191), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(201), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(207), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(79), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(81), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(92), 10,
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
  [4341] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(74), 1,
      sym__expression,
    ACTIONS(191), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(201), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(207), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(79), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(81), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(92), 10,
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
  [4412] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_imaginary_literal,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
    STATE(158), 1,
      sym__expression,
    ACTIONS(113), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(129), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(135), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(160), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(162), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(167), 10,
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
  [4483] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_imaginary_literal,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      sym__expression,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(33), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(127), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(124), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(106), 10,
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
  [4554] = 6,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LF,
    ACTIONS(235), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(231), 25,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
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
  [4597] = 6,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(241), 1,
      anon_sym_LF,
    ACTIONS(244), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(239), 25,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
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
  [4640] = 8,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    STATE(146), 1,
      sym_argument_list,
    STATE(410), 1,
      sym_block,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(251), 22,
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
  [4687] = 8,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LF,
    ACTIONS(257), 1,
      sym_identifier,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_LBRACE,
    STATE(149), 1,
      sym_argument_list,
    STATE(342), 1,
      sym_block,
    ACTIONS(251), 23,
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
  [4734] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(251), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(247), 21,
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
  [4774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 21,
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
  [4808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(269), 21,
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
  [4842] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(273), 19,
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
  [4880] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(283), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(279), 4,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(273), 15,
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
  [4924] = 3,
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
  [4958] = 3,
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
  [4992] = 3,
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
  [5026] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(279), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(283), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(301), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(273), 11,
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
  [5074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(303), 21,
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
  [5108] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(279), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(283), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(301), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(307), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(299), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(273), 9,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5158] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(283), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(279), 4,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(273), 17,
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
  [5200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(309), 21,
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
  [5234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(313), 21,
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
  [5268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(317), 21,
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
  [5302] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(323), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(321), 19,
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
  [5340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(325), 21,
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
  [5374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(329), 21,
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
  [5408] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(333), 21,
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
  [5442] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(337), 21,
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
  [5476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(341), 21,
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
  [5510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(345), 21,
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
  [5544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(349), 21,
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
  [5578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(353), 21,
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
  [5612] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    STATE(146), 1,
      sym_argument_list,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(251), 22,
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
  [5650] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LF,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_argument_list,
    ACTIONS(251), 23,
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
  [5688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(357), 21,
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
  [5722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(361), 21,
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
  [5756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(365), 21,
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
  [5790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(247), 21,
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
  [5824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(369), 21,
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
  [5858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(373), 21,
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
  [5892] = 14,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LF,
    ACTIONS(383), 1,
      anon_sym_DOT,
    ACTIONS(385), 1,
      anon_sym_LBRACK,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(389), 1,
      anon_sym_COLON,
    STATE(269), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(379), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(381), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(392), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
    ACTIONS(398), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(400), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(396), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [5947] = 13,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LF,
    ACTIONS(383), 1,
      anon_sym_DOT,
    ACTIONS(385), 1,
      anon_sym_LBRACK,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    STATE(269), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(379), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(381), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(398), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(400), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(392), 3,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(396), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6000] = 13,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_SEMI,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(404), 1,
      anon_sym_DOT,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    STATE(269), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(377), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(402), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(412), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(414), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(392), 3,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
    ACTIONS(408), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(410), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6053] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_RBRACK,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(434), 1,
      anon_sym_func,
    STATE(100), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [6106] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(434), 1,
      anon_sym_func,
    ACTIONS(436), 1,
      anon_sym_RBRACK,
    STATE(100), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [6159] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_RBRACK,
    ACTIONS(440), 1,
      anon_sym_LPAREN,
    ACTIONS(446), 1,
      anon_sym_Date,
    ACTIONS(449), 1,
      anon_sym_BQUOTE,
    ACTIONS(452), 1,
      anon_sym_typespec,
    ACTIONS(455), 1,
      anon_sym_tuple,
    ACTIONS(458), 1,
      anon_sym_list,
    ACTIONS(461), 1,
      anon_sym_dict,
    ACTIONS(464), 1,
      anon_sym_func,
    STATE(100), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(443), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [6212] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_LBRACK,
    ACTIONS(471), 1,
      anon_sym_Date,
    ACTIONS(469), 23,
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
  [6247] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(434), 1,
      anon_sym_func,
    ACTIONS(473), 1,
      anon_sym_RBRACK,
    STATE(100), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [6300] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(317), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(319), 22,
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
  [6332] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_LF,
    ACTIONS(351), 23,
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
  [6364] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(329), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(331), 22,
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
  [6396] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(251), 22,
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
  [6428] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_LF,
    ACTIONS(271), 23,
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
  [6460] = 6,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_DOT,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(273), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(408), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(279), 17,
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
  [6498] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(265), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(267), 22,
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
  [6530] = 3,
    ACTIONS(169), 1,
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
  [6562] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(369), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(371), 22,
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
  [6594] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(373), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(375), 22,
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
  [6626] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_DOT,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(273), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(279), 20,
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
  [6662] = 7,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_DOT,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(273), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(402), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(408), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(279), 15,
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
  [6702] = 8,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_DOT,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(273), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(402), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(408), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(410), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(279), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6744] = 9,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_DOT,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(273), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(402), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(412), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(408), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(410), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(279), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6788] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(434), 1,
      anon_sym_func,
    STATE(99), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [6838] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_LF,
    ACTIONS(319), 23,
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
  [6870] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_LF,
    ACTIONS(315), 23,
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
  [6902] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(309), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(311), 22,
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
  [6934] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(313), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(315), 22,
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
  [6966] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_LF,
    ACTIONS(311), 23,
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
  [6998] = 9,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LF,
    ACTIONS(383), 1,
      anon_sym_DOT,
    ACTIONS(385), 1,
      anon_sym_LBRACK,
    ACTIONS(381), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(398), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(396), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(279), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [7042] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(333), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(335), 22,
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
  [7074] = 8,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LF,
    ACTIONS(383), 1,
      anon_sym_DOT,
    ACTIONS(385), 1,
      anon_sym_LBRACK,
    ACTIONS(381), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(396), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(279), 10,
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
  [7116] = 7,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LF,
    ACTIONS(383), 1,
      anon_sym_DOT,
    ACTIONS(385), 1,
      anon_sym_LBRACK,
    ACTIONS(381), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(279), 16,
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
  [7156] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(325), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(327), 22,
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
  [7188] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LF,
    ACTIONS(383), 1,
      anon_sym_DOT,
    ACTIONS(385), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 21,
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
  [7224] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_DOT,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(321), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(323), 20,
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
  [7260] = 3,
    ACTIONS(169), 1,
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
  [7292] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(337), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(339), 22,
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
  [7324] = 3,
    ACTIONS(169), 1,
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
  [7356] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(434), 1,
      anon_sym_func,
    STATE(102), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [7406] = 3,
    ACTIONS(169), 1,
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
  [7438] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_LF,
    ACTIONS(267), 23,
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
  [7470] = 6,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LF,
    ACTIONS(383), 1,
      anon_sym_DOT,
    ACTIONS(385), 1,
      anon_sym_LBRACK,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(279), 18,
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
  [7508] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_LF,
    ACTIONS(331), 23,
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
  [7540] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_LF,
    ACTIONS(339), 23,
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
  [7572] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LF,
    ACTIONS(347), 23,
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
  [7604] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_LF,
    ACTIONS(359), 23,
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
  [7636] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_LF,
    ACTIONS(363), 23,
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
  [7668] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LF,
    ACTIONS(367), 23,
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
  [7700] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LF,
    ACTIONS(355), 23,
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
  [7732] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(303), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(305), 22,
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
  [7764] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(345), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(347), 22,
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
  [7796] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(341), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(343), 22,
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
  [7828] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(365), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(367), 22,
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
  [7860] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(434), 1,
      anon_sym_func,
    STATE(98), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [7910] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_LF,
    ACTIONS(343), 23,
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
  [7942] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_LF,
    ACTIONS(305), 23,
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
  [7974] = 3,
    ACTIONS(169), 1,
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
  [8006] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(269), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(271), 22,
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
  [8038] = 3,
    ACTIONS(169), 1,
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
  [8070] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(349), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(351), 22,
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
  [8102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_Date,
    ACTIONS(475), 23,
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
  [8134] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(361), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(363), 22,
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
  [8166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_Date,
    ACTIONS(469), 23,
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
  [8198] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_LF,
    ACTIONS(383), 1,
      anon_sym_DOT,
    ACTIONS(385), 1,
      anon_sym_LBRACK,
    ACTIONS(323), 21,
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
  [8234] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(357), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(359), 22,
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
  [8266] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_LF,
    ACTIONS(327), 23,
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
  [8298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_Date,
    ACTIONS(479), 23,
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
  [8330] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_LF,
    ACTIONS(335), 23,
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
  [8362] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LF,
    ACTIONS(375), 23,
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
  [8394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_Date,
    ACTIONS(483), 23,
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
  [8426] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LF,
    ACTIONS(371), 23,
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
  [8458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_Date,
    ACTIONS(487), 23,
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
  [8490] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LF,
    ACTIONS(251), 23,
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
  [8522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_Date,
    ACTIONS(491), 23,
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
  [8554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_Date,
    ACTIONS(495), 23,
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
  [8586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_Date,
    ACTIONS(499), 23,
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
  [8618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_Date,
    ACTIONS(503), 23,
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
  [8650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_Date,
    ACTIONS(507), 23,
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
  [8682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_Date,
    ACTIONS(511), 23,
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
  [8714] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(353), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(355), 22,
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
  [8746] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(434), 1,
      anon_sym_func,
    STATE(170), 1,
      sym_type_spec_r,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [8795] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(434), 1,
      anon_sym_func,
    STATE(518), 1,
      sym_type_spec_r,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [8844] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(434), 1,
      anon_sym_func,
    STATE(171), 1,
      sym_type_spec_r,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [8893] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(434), 1,
      anon_sym_func,
    STATE(298), 1,
      sym_type_spec_r,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [8942] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(434), 1,
      anon_sym_func,
    STATE(517), 1,
      sym_type_spec_r,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [8991] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(434), 1,
      anon_sym_func,
    STATE(482), 1,
      sym_type_spec_r,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9040] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(434), 1,
      anon_sym_func,
    STATE(521), 1,
      sym_type_spec_r,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9089] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(434), 1,
      anon_sym_func,
    STATE(173), 1,
      sym_type_spec_r,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9138] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(434), 1,
      anon_sym_func,
    STATE(520), 1,
      sym_type_spec_r,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9187] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(434), 1,
      anon_sym_func,
    STATE(168), 1,
      sym_type_spec_r,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9236] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(434), 1,
      anon_sym_func,
    STATE(511), 1,
      sym_type_spec_r,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9285] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_Date,
    ACTIONS(521), 1,
      anon_sym_BQUOTE,
    ACTIONS(523), 1,
      anon_sym_typespec,
    ACTIONS(525), 1,
      anon_sym_tuple,
    ACTIONS(527), 1,
      anon_sym_list,
    ACTIONS(529), 1,
      anon_sym_dict,
    ACTIONS(531), 1,
      anon_sym_func,
    STATE(274), 1,
      sym_type_spec_r,
    STATE(287), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(517), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9334] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_Date,
    ACTIONS(521), 1,
      anon_sym_BQUOTE,
    ACTIONS(523), 1,
      anon_sym_typespec,
    ACTIONS(525), 1,
      anon_sym_tuple,
    ACTIONS(527), 1,
      anon_sym_list,
    ACTIONS(529), 1,
      anon_sym_dict,
    ACTIONS(531), 1,
      anon_sym_func,
    STATE(303), 1,
      sym_type_spec_r,
    STATE(287), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(517), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9383] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(434), 1,
      anon_sym_func,
    STATE(510), 1,
      sym_type_spec_r,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9432] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(283), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(301), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(307), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(535), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(299), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(533), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
  [9481] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(434), 1,
      anon_sym_func,
    STATE(505), 1,
      sym_type_spec_r,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9530] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(434), 1,
      anon_sym_func,
    STATE(504), 1,
      sym_type_spec_r,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9579] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(434), 1,
      anon_sym_func,
    STATE(307), 1,
      sym_type_spec_r,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9628] = 12,
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
    STATE(392), 1,
      sym_type_spec_r,
    STATE(386), 2,
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
  [9677] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(434), 1,
      anon_sym_func,
    STATE(494), 1,
      sym_type_spec_r,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9726] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(434), 1,
      anon_sym_func,
    STATE(493), 1,
      sym_type_spec_r,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9775] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(434), 1,
      anon_sym_func,
    STATE(291), 1,
      sym_type_spec_r,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9824] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(434), 1,
      anon_sym_func,
    STATE(476), 1,
      sym_type_spec_r,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9873] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(434), 1,
      anon_sym_func,
    STATE(473), 1,
      sym_type_spec_r,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9922] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(434), 1,
      anon_sym_func,
    STATE(480), 1,
      sym_type_spec_r,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9971] = 12,
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
    STATE(386), 2,
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
  [10020] = 12,
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
    STATE(395), 1,
      sym_type_spec_r,
    STATE(386), 2,
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
  [10069] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(434), 1,
      anon_sym_func,
    STATE(495), 1,
      sym_type_spec_r,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [10118] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_Date,
    ACTIONS(521), 1,
      anon_sym_BQUOTE,
    ACTIONS(523), 1,
      anon_sym_typespec,
    ACTIONS(525), 1,
      anon_sym_tuple,
    ACTIONS(527), 1,
      anon_sym_list,
    ACTIONS(529), 1,
      anon_sym_dict,
    ACTIONS(531), 1,
      anon_sym_func,
    STATE(301), 1,
      sym_type_spec_r,
    STATE(287), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(517), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [10167] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(434), 1,
      anon_sym_func,
    STATE(404), 1,
      sym_type_spec_r,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [10216] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(434), 1,
      anon_sym_func,
    STATE(485), 1,
      sym_type_spec_r,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [10265] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(434), 1,
      anon_sym_func,
    STATE(503), 1,
      sym_type_spec_r,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [10314] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_Date,
    ACTIONS(521), 1,
      anon_sym_BQUOTE,
    ACTIONS(523), 1,
      anon_sym_typespec,
    ACTIONS(525), 1,
      anon_sym_tuple,
    ACTIONS(527), 1,
      anon_sym_list,
    ACTIONS(529), 1,
      anon_sym_dict,
    ACTIONS(531), 1,
      anon_sym_func,
    STATE(278), 1,
      sym_type_spec_r,
    STATE(287), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(517), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [10363] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(434), 1,
      anon_sym_func,
    STATE(500), 1,
      sym_type_spec_r,
    STATE(161), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [10412] = 12,
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
    STATE(396), 1,
      sym_type_spec_r,
    STATE(386), 2,
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
  [10461] = 12,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_SEMI,
    ACTIONS(404), 1,
      anon_sym_DOT,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(559), 1,
      anon_sym_COMMA,
    STATE(261), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(402), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(412), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(414), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(557), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(408), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(410), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10509] = 12,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_DOT,
    ACTIONS(385), 1,
      anon_sym_LBRACK,
    ACTIONS(557), 1,
      anon_sym_LF,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    STATE(252), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(381), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(392), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(398), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(400), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(396), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10557] = 10,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_DOT,
    ACTIONS(385), 1,
      anon_sym_LBRACK,
    ACTIONS(533), 1,
      anon_sym_LF,
    ACTIONS(381), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(398), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(400), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(535), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(396), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10600] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_Date,
    ACTIONS(521), 1,
      anon_sym_BQUOTE,
    ACTIONS(523), 1,
      anon_sym_typespec,
    ACTIONS(525), 1,
      anon_sym_tuple,
    ACTIONS(527), 1,
      anon_sym_list,
    ACTIONS(529), 1,
      anon_sym_dict,
    ACTIONS(563), 1,
      anon_sym_func,
    STATE(313), 1,
      sym_type_spec,
    STATE(317), 1,
      sym_base_type_spec,
    ACTIONS(517), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [10645] = 10,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_DOT,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(402), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(412), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(414), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(533), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(535), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(408), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(410), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10688] = 11,
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
    ACTIONS(565), 1,
      anon_sym_func,
    STATE(379), 1,
      sym_base_type_spec,
    STATE(390), 1,
      sym_type_spec,
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
  [10733] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_Date,
    ACTIONS(521), 1,
      anon_sym_BQUOTE,
    ACTIONS(523), 1,
      anon_sym_typespec,
    ACTIONS(525), 1,
      anon_sym_tuple,
    ACTIONS(527), 1,
      anon_sym_list,
    ACTIONS(529), 1,
      anon_sym_dict,
    ACTIONS(563), 1,
      anon_sym_func,
    STATE(315), 1,
      sym_type_spec,
    STATE(317), 1,
      sym_base_type_spec,
    ACTIONS(517), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [10778] = 11,
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
    ACTIONS(565), 1,
      anon_sym_func,
    STATE(341), 1,
      sym_type_spec,
    STATE(379), 1,
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
  [10823] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_Date,
    ACTIONS(424), 1,
      anon_sym_BQUOTE,
    ACTIONS(426), 1,
      anon_sym_typespec,
    ACTIONS(428), 1,
      anon_sym_tuple,
    ACTIONS(430), 1,
      anon_sym_list,
    ACTIONS(432), 1,
      anon_sym_dict,
    ACTIONS(567), 1,
      anon_sym_func,
    STATE(446), 1,
      sym_type_spec,
    STATE(458), 1,
      sym_base_type_spec,
    ACTIONS(420), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [10868] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(569), 1,
      anon_sym_RBRACK,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    STATE(420), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(283), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(301), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(307), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(299), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10916] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
    STATE(367), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(283), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(301), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(307), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(299), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10964] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(575), 1,
      anon_sym_RBRACK,
    STATE(422), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(283), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(301), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(307), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(299), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11012] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
    STATE(423), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(283), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(301), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(307), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(299), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11060] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(579), 1,
      anon_sym_RBRACK,
    STATE(368), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(283), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(301), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(307), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(299), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11108] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    STATE(426), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(283), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(301), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(307), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(299), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11156] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
    STATE(361), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(283), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(301), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(307), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(299), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11204] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
    STATE(364), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(283), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(301), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(307), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(299), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11252] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
    STATE(413), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(283), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(301), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(307), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(299), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11300] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(283), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(301), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(307), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(589), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(299), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11343] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(591), 1,
      anon_sym_LBRACE,
    STATE(241), 1,
      sym_block,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(283), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(301), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(307), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(299), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11388] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(593), 1,
      anon_sym_LBRACE,
    STATE(253), 1,
      sym_block,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(283), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(301), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(307), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(299), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11433] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(593), 1,
      anon_sym_LBRACE,
    STATE(239), 1,
      sym_block,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(283), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(301), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(307), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(299), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11478] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(591), 1,
      anon_sym_LBRACE,
    STATE(256), 1,
      sym_block,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(283), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(301), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(307), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(299), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11523] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(595), 1,
      anon_sym_COLON,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(283), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(301), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(307), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(299), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11565] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(597), 1,
      anon_sym_RBRACK,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(283), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(301), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(307), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(299), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11607] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(599), 1,
      anon_sym_to,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(283), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(301), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(307), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(299), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11649] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(283), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(301), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(307), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(299), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11691] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(603), 1,
      anon_sym_RBRACK,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(283), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(301), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(307), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(299), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11733] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(605), 1,
      anon_sym_RBRACK,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(283), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(301), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(307), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(537), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(299), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11775] = 9,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_LF,
    ACTIONS(611), 1,
      anon_sym_elif,
    ACTIONS(613), 1,
      anon_sym_else,
    STATE(240), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(245), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(267), 1,
      sym_elif_clause,
    STATE(416), 1,
      sym_else_clause,
    ACTIONS(609), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11804] = 9,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_elif,
    ACTIONS(613), 1,
      anon_sym_else,
    ACTIONS(615), 1,
      anon_sym_LF,
    STATE(249), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(267), 1,
      sym_elif_clause,
    STATE(312), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(335), 1,
      sym_else_clause,
    ACTIONS(617), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11833] = 10,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_SEMI,
    ACTIONS(619), 1,
      ts_builtin_sym_end,
    ACTIONS(621), 1,
      anon_sym_LF,
    ACTIONS(623), 1,
      anon_sym_elif,
    ACTIONS(625), 1,
      anon_sym_else,
    STATE(243), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(246), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(250), 1,
      sym_elif_clause,
    STATE(371), 1,
      sym_else_clause,
  [11864] = 10,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_elif,
    ACTIONS(625), 1,
      anon_sym_else,
    ACTIONS(627), 1,
      ts_builtin_sym_end,
    ACTIONS(629), 1,
      anon_sym_LF,
    ACTIONS(631), 1,
      anon_sym_SEMI,
    STATE(247), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(250), 1,
      sym_elif_clause,
    STATE(309), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(352), 1,
      sym_else_clause,
  [11895] = 10,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_SEMI,
    ACTIONS(623), 1,
      anon_sym_elif,
    ACTIONS(625), 1,
      anon_sym_else,
    ACTIONS(633), 1,
      ts_builtin_sym_end,
    ACTIONS(635), 1,
      anon_sym_LF,
    STATE(247), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(250), 1,
      sym_elif_clause,
    STATE(323), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(358), 1,
      sym_else_clause,
  [11926] = 9,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_elif,
    ACTIONS(613), 1,
      anon_sym_else,
    ACTIONS(637), 1,
      anon_sym_LF,
    STATE(249), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(267), 1,
      sym_elif_clause,
    STATE(322), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(343), 1,
      sym_else_clause,
    ACTIONS(631), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11955] = 8,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_elif,
    ACTIONS(613), 1,
      anon_sym_else,
    ACTIONS(639), 1,
      anon_sym_LF,
    STATE(244), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(267), 1,
      sym_elif_clause,
    STATE(325), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(333), 1,
      sym_else_clause,
  [11980] = 8,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_elif,
    ACTIONS(625), 1,
      anon_sym_else,
    ACTIONS(639), 1,
      anon_sym_LF,
    STATE(242), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(250), 1,
      sym_elif_clause,
    STATE(325), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(359), 1,
      sym_else_clause,
  [12005] = 6,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_elif,
    STATE(247), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(250), 1,
      sym_elif_clause,
    ACTIONS(641), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(643), 2,
      anon_sym_SEMI,
      anon_sym_else,
  [12026] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_COLON,
    ACTIONS(648), 1,
      anon_sym_COMMA,
    STATE(248), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(533), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [12045] = 6,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_LF,
    ACTIONS(651), 1,
      anon_sym_elif,
    STATE(249), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(267), 1,
      sym_elif_clause,
    ACTIONS(643), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_else,
  [12066] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(654), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(656), 3,
      anon_sym_SEMI,
      anon_sym_elif,
      anon_sym_else,
  [12079] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_SEMI,
    ACTIONS(658), 1,
      anon_sym_COMMA,
    STATE(251), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(533), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12096] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    ACTIONS(661), 1,
      anon_sym_LF,
    STATE(254), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(663), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12113] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_LF,
    ACTIONS(667), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
  [12126] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_LF,
    ACTIONS(669), 1,
      anon_sym_COMMA,
    STATE(254), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(535), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12143] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_LF,
    ACTIONS(674), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
  [12156] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(665), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(667), 3,
      anon_sym_SEMI,
      anon_sym_elif,
      anon_sym_else,
  [12169] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_LF,
    ACTIONS(680), 1,
      anon_sym_COMMA,
    STATE(270), 1,
      aux_sym_enum_statement_repeat1,
    ACTIONS(678), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12186] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_SEMI,
    ACTIONS(686), 1,
      anon_sym_COMMA,
    STATE(258), 1,
      aux_sym_var_declaration_repeat1,
    ACTIONS(682), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12203] = 4,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_LBRACK,
    ACTIONS(469), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(471), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12218] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(672), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(674), 3,
      anon_sym_SEMI,
      anon_sym_elif,
      anon_sym_else,
  [12231] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_COMMA,
    ACTIONS(663), 1,
      anon_sym_SEMI,
    STATE(251), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(661), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12248] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_SEMI,
    ACTIONS(695), 1,
      anon_sym_COMMA,
    STATE(262), 1,
      aux_sym_enum_statement_repeat1,
    ACTIONS(691), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12265] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_SEMI,
    ACTIONS(702), 1,
      anon_sym_COMMA,
    STATE(258), 1,
      aux_sym_var_declaration_repeat1,
    ACTIONS(698), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12282] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_LF,
    ACTIONS(704), 1,
      anon_sym_COMMA,
    STATE(264), 1,
      aux_sym_enum_statement_repeat1,
    ACTIONS(693), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12299] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_LF,
    ACTIONS(709), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
  [12312] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_SEMI,
    ACTIONS(715), 1,
      anon_sym_COMMA,
    STATE(262), 1,
      aux_sym_enum_statement_repeat1,
    ACTIONS(711), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12329] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_LF,
    ACTIONS(656), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
  [12342] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(707), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(709), 3,
      anon_sym_SEMI,
      anon_sym_elif,
      anon_sym_else,
  [12355] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(663), 1,
      anon_sym_COLON,
    STATE(248), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(661), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [12372] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_COMMA,
    ACTIONS(711), 1,
      anon_sym_LF,
    STATE(264), 1,
      aux_sym_enum_statement_repeat1,
    ACTIONS(713), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12389] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_COMMA,
    ACTIONS(719), 1,
      anon_sym_SEMI,
    STATE(263), 1,
      aux_sym_var_declaration_repeat1,
    ACTIONS(717), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12406] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_SEMI,
    ACTIONS(715), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym_enum_statement_repeat1,
    ACTIONS(676), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12423] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_LF,
    ACTIONS(723), 1,
      anon_sym_SEMI,
    ACTIONS(725), 1,
      anon_sym_RBRACE,
    STATE(319), 1,
      aux_sym__statement_list_repeat1,
  [12439] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(499), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(501), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12451] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_DQUOTE,
    ACTIONS(729), 1,
      sym_escape_sequence,
    ACTIONS(731), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(297), 1,
      aux_sym__quoted_string_content_double,
  [12467] = 4,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_SQUOTE,
    STATE(299), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(733), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [12481] = 4,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_SQUOTE,
    STATE(299), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(733), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [12495] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(511), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(513), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12507] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(507), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(509), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_COMMA,
    STATE(280), 1,
      aux_sym_func_spec_repeat1,
    ACTIONS(737), 2,
      anon_sym_RPAREN,
      anon_sym_STAR,
  [12533] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(729), 1,
      sym_escape_sequence,
    ACTIONS(731), 1,
      aux_sym__quoted_string_content_double_token1,
    ACTIONS(735), 1,
      anon_sym_DQUOTE,
    STATE(297), 1,
      aux_sym__quoted_string_content_double,
  [12549] = 4,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_SQUOTE,
    STATE(277), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(744), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [12563] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      sym_escape_sequence,
    ACTIONS(748), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(281), 1,
      aux_sym__quoted_string_content_double,
  [12579] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(495), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(497), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12591] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(750), 1,
      ts_builtin_sym_end,
    ACTIONS(752), 1,
      anon_sym_LF,
    ACTIONS(754), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      aux_sym_source_file_repeat1,
  [12607] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_RPAREN,
    ACTIONS(758), 1,
      anon_sym_COMMA,
    ACTIONS(760), 1,
      anon_sym_STAR,
    STATE(280), 1,
      aux_sym_func_spec_repeat1,
  [12623] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(479), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(481), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12635] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(487), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(489), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12647] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_DQUOTE,
    ACTIONS(764), 1,
      sym_escape_sequence,
    ACTIONS(766), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(275), 1,
      aux_sym__quoted_string_content_double,
  [12663] = 4,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_SQUOTE,
    STATE(299), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(733), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [12677] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_COMMA,
    ACTIONS(770), 1,
      anon_sym_RPAREN,
    ACTIONS(772), 1,
      anon_sym_STAR,
    STATE(302), 1,
      aux_sym_func_spec_repeat1,
  [12693] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(729), 1,
      sym_escape_sequence,
    ACTIONS(731), 1,
      aux_sym__quoted_string_content_double_token1,
    ACTIONS(768), 1,
      anon_sym_DQUOTE,
    STATE(297), 1,
      aux_sym__quoted_string_content_double,
  [12709] = 4,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_SQUOTE,
    STATE(290), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(776), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [12723] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_DQUOTE,
    ACTIONS(778), 1,
      sym_escape_sequence,
    ACTIONS(780), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(292), 1,
      aux_sym__quoted_string_content_double,
  [12739] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_LF,
    ACTIONS(784), 1,
      anon_sym_SEMI,
    ACTIONS(786), 1,
      anon_sym_RBRACE,
    STATE(273), 1,
      aux_sym__statement_list_repeat1,
  [12755] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(691), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(693), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12767] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_DQUOTE,
    ACTIONS(790), 1,
      sym_escape_sequence,
    ACTIONS(793), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(297), 1,
      aux_sym__quoted_string_content_double,
  [12783] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_COMMA,
    ACTIONS(796), 1,
      anon_sym_RPAREN,
    ACTIONS(798), 1,
      anon_sym_STAR,
    STATE(286), 1,
      aux_sym_func_spec_repeat1,
  [12799] = 4,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_SQUOTE,
    STATE(299), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(802), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [12813] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_LF,
    ACTIONS(700), 1,
      anon_sym_SEMI,
    ACTIONS(805), 1,
      anon_sym_COMMA,
    STATE(304), 1,
      aux_sym_var_declaration_repeat1,
  [12829] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(491), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(493), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12841] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_COMMA,
    ACTIONS(807), 1,
      anon_sym_RPAREN,
    ACTIONS(809), 1,
      anon_sym_STAR,
    STATE(280), 1,
      aux_sym_func_spec_repeat1,
  [12857] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(503), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(505), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12869] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_LF,
    ACTIONS(684), 1,
      anon_sym_SEMI,
    ACTIONS(811), 1,
      anon_sym_COMMA,
    STATE(304), 1,
      aux_sym_var_declaration_repeat1,
  [12885] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(475), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(477), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12897] = 4,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_LF,
    ACTIONS(814), 1,
      anon_sym_LBRACK,
    ACTIONS(471), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12911] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_COMMA,
    ACTIONS(816), 1,
      anon_sym_RPAREN,
    ACTIONS(818), 1,
      anon_sym_STAR,
    STATE(311), 1,
      aux_sym_func_spec_repeat1,
  [12927] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(682), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(684), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12939] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_else,
    ACTIONS(639), 1,
      anon_sym_LF,
    STATE(325), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(394), 1,
      sym_else_clause,
  [12955] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(469), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(471), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12967] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_COMMA,
    ACTIONS(820), 1,
      anon_sym_RPAREN,
    ACTIONS(822), 1,
      anon_sym_STAR,
    STATE(280), 1,
      aux_sym_func_spec_repeat1,
  [12983] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_else,
    ACTIONS(639), 1,
      anon_sym_LF,
    STATE(325), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(344), 1,
      sym_else_clause,
  [12999] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(824), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(826), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13011] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(828), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(830), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13023] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(832), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(834), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13035] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(483), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(485), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13047] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(836), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(838), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13059] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_LF,
    ACTIONS(719), 1,
      anon_sym_SEMI,
    ACTIONS(805), 1,
      anon_sym_COMMA,
    STATE(300), 1,
      aux_sym_var_declaration_repeat1,
  [13075] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_LF,
    ACTIONS(843), 1,
      anon_sym_SEMI,
    ACTIONS(846), 1,
      anon_sym_RBRACE,
    STATE(319), 1,
      aux_sym__statement_list_repeat1,
  [13091] = 5,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_LF,
    ACTIONS(754), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      aux_sym_source_file_repeat1,
  [13107] = 4,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_SQUOTE,
    STATE(276), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(848), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [13121] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_else,
    ACTIONS(639), 1,
      anon_sym_LF,
    STATE(325), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(347), 1,
      sym_else_clause,
  [13137] = 5,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_else,
    ACTIONS(639), 1,
      anon_sym_LF,
    STATE(325), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(351), 1,
      sym_else_clause,
  [13153] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_LF,
    ACTIONS(693), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13165] = 4,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_LF,
    STATE(325), 1,
      aux_sym__if_elif_stmt_repeat1,
    ACTIONS(853), 2,
      anon_sym_elif,
      anon_sym_else,
  [13179] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_LF,
    ACTIONS(489), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13190] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_COMMA,
    ACTIONS(857), 1,
      anon_sym_COLON,
    STATE(362), 1,
      aux_sym_enum_statement_repeat1,
  [13203] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_LF,
    ACTIONS(684), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13214] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_SEMI,
    ACTIONS(377), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13225] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_LF,
    ACTIONS(861), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13236] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_LF,
    ACTIONS(865), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13247] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_LF,
    ACTIONS(869), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13258] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_LF,
    ACTIONS(873), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13269] = 4,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(875), 1,
      aux_sym_other_lit_token1,
    ACTIONS(877), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(399), 1,
      aux_sym_other_lit_repeat1,
  [13282] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_LF,
    ACTIONS(881), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13293] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_RPAREN,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    STATE(336), 1,
      aux_sym_function_declaration_repeat1,
  [13306] = 4,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(888), 1,
      aux_sym_other_lit_token1,
    STATE(401), 1,
      aux_sym_other_lit_repeat1,
  [13319] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_LF,
    ACTIONS(892), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_COLON,
    ACTIONS(896), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [13341] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_SEMI,
    ACTIONS(898), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13352] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_LF,
    ACTIONS(826), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13363] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_LF,
    ACTIONS(904), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13374] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_LF,
    ACTIONS(908), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13385] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(910), 1,
      anon_sym_LF,
    ACTIONS(912), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13396] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_SEMI,
    ACTIONS(914), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13407] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_SEMI,
    ACTIONS(859), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13418] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(918), 1,
      anon_sym_LF,
    ACTIONS(920), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13429] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_SEMI,
    ACTIONS(863), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13440] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_SEMI,
    ACTIONS(922), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13451] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LF,
    ACTIONS(379), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13462] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_SEMI,
    ACTIONS(910), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13473] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_SEMI,
    ACTIONS(906), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13484] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_COMMA,
    ACTIONS(928), 1,
      anon_sym_RBRACE,
    STATE(414), 1,
      aux_sym_dict_literal_repeat1,
  [13497] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_RPAREN,
    ACTIONS(932), 1,
      anon_sym_COMMA,
    STATE(336), 1,
      aux_sym_function_declaration_repeat1,
  [13510] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_COMMA,
    ACTIONS(934), 1,
      anon_sym_COLON,
    STATE(327), 1,
      aux_sym_enum_statement_repeat1,
  [13523] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_COMMA,
    ACTIONS(936), 1,
      anon_sym_COLON,
    STATE(400), 1,
      aux_sym_enum_statement_repeat1,
  [13536] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_SEMI,
    ACTIONS(938), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13547] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_SEMI,
    ACTIONS(879), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13558] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_SEMI,
    ACTIONS(871), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13569] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_SEMI,
    ACTIONS(867), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(942), 1,
      anon_sym_RPAREN,
    STATE(248), 1,
      aux_sym_expression_list_repeat1,
  [13593] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_COLON,
    ACTIONS(944), 1,
      anon_sym_COMMA,
    STATE(362), 1,
      aux_sym_enum_statement_repeat1,
  [13606] = 4,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(947), 1,
      aux_sym_other_lit_token1,
    ACTIONS(950), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(363), 1,
      aux_sym_other_lit_repeat1,
  [13619] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(952), 1,
      anon_sym_RPAREN,
    STATE(248), 1,
      aux_sym_expression_list_repeat1,
  [13632] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_SEMI,
    ACTIONS(890), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13643] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_COMMA,
    ACTIONS(954), 1,
      anon_sym_RBRACE,
    STATE(374), 1,
      aux_sym_dict_literal_repeat1,
  [13656] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(956), 1,
      anon_sym_RPAREN,
    STATE(248), 1,
      aux_sym_expression_list_repeat1,
  [13669] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(958), 1,
      anon_sym_RBRACK,
    STATE(248), 1,
      aux_sym_expression_list_repeat1,
  [13682] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_COMMA,
    ACTIONS(960), 1,
      anon_sym_RPAREN,
    STATE(354), 1,
      aux_sym_function_declaration_repeat1,
  [13695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_COLON,
    ACTIONS(962), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13706] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_SEMI,
    ACTIONS(966), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13717] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_LF,
    ACTIONS(972), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13728] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(976), 1,
      anon_sym_SEMI,
    ACTIONS(974), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13739] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 1,
      anon_sym_COMMA,
    ACTIONS(981), 1,
      anon_sym_RBRACE,
    STATE(374), 1,
      aux_sym_dict_literal_repeat1,
  [13752] = 4,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(983), 1,
      aux_sym_other_lit_token1,
    ACTIONS(985), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(363), 1,
      aux_sym_other_lit_repeat1,
  [13765] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_LF,
    ACTIONS(846), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13776] = 4,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_LF,
    ACTIONS(754), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      aux_sym_source_file_repeat1,
  [13789] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_LF,
    ACTIONS(471), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13800] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_LF,
    ACTIONS(838), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13811] = 4,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(985), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(989), 1,
      aux_sym_other_lit_token1,
    STATE(385), 1,
      aux_sym_other_lit_repeat1,
  [13824] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_SEMI,
    ACTIONS(991), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13835] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(972), 1,
      anon_sym_SEMI,
    ACTIONS(970), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13846] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_LF,
    ACTIONS(485), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13857] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_LF,
    ACTIONS(830), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13868] = 4,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(950), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(995), 1,
      aux_sym_other_lit_token1,
    STATE(385), 1,
      aux_sym_other_lit_repeat1,
  [13881] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LF,
    ACTIONS(481), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13892] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_LF,
    ACTIONS(477), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13903] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_LF,
    ACTIONS(900), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13914] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_LF,
    ACTIONS(497), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13925] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_LF,
    ACTIONS(834), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13936] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_LF,
    ACTIONS(509), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13947] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_LF,
    ACTIONS(513), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13958] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_LF,
    ACTIONS(916), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13969] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_SEMI,
    ACTIONS(918), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13980] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_LF,
    ACTIONS(505), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13991] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_LF,
    ACTIONS(501), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_COMMA,
    ACTIONS(998), 1,
      anon_sym_RBRACE,
    STATE(366), 1,
      aux_sym_dict_literal_repeat1,
  [14015] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_LF,
    ACTIONS(493), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14026] = 4,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(989), 1,
      aux_sym_other_lit_token1,
    ACTIONS(1000), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(385), 1,
      aux_sym_other_lit_repeat1,
  [14039] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_COMMA,
    ACTIONS(1002), 1,
      anon_sym_COLON,
    STATE(362), 1,
      aux_sym_enum_statement_repeat1,
  [14052] = 4,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(983), 1,
      aux_sym_other_lit_token1,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(363), 1,
      aux_sym_other_lit_repeat1,
  [14065] = 4,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(1004), 1,
      aux_sym_other_lit_token1,
    ACTIONS(1006), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(375), 1,
      aux_sym_other_lit_repeat1,
  [14078] = 4,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(1006), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(1008), 1,
      aux_sym_other_lit_token1,
    STATE(380), 1,
      aux_sym_other_lit_repeat1,
  [14091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_STAR,
  [14100] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(1012), 1,
      anon_sym_SEMI,
    ACTIONS(1010), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [14111] = 4,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(1014), 1,
      aux_sym_other_lit_token1,
    ACTIONS(1016), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(417), 1,
      aux_sym_other_lit_repeat1,
  [14124] = 4,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(1016), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(1018), 1,
      aux_sym_other_lit_token1,
    STATE(418), 1,
      aux_sym_other_lit_repeat1,
  [14137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 1,
      anon_sym_COLON,
    ACTIONS(1022), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [14148] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 1,
      sym_identifier,
    ACTIONS(1026), 1,
      anon_sym_RPAREN,
    STATE(369), 1,
      sym_param_spec,
  [14161] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_SEMI,
    ACTIONS(902), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [14172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_COMMA,
    ACTIONS(1028), 1,
      anon_sym_RPAREN,
    STATE(336), 1,
      aux_sym_function_declaration_repeat1,
  [14185] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_COMMA,
    ACTIONS(1030), 1,
      anon_sym_RBRACE,
    STATE(424), 1,
      aux_sym_dict_literal_repeat1,
  [14198] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(1032), 1,
      anon_sym_RPAREN,
    STATE(248), 1,
      aux_sym_expression_list_repeat1,
  [14211] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_COMMA,
    ACTIONS(1034), 1,
      anon_sym_RBRACE,
    STATE(374), 1,
      aux_sym_dict_literal_repeat1,
  [14224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_COMMA,
    ACTIONS(1036), 1,
      anon_sym_RPAREN,
    STATE(411), 1,
      aux_sym_function_declaration_repeat1,
  [14237] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(966), 1,
      anon_sym_LF,
    ACTIONS(968), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [14248] = 4,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(989), 1,
      aux_sym_other_lit_token1,
    ACTIONS(1038), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(385), 1,
      aux_sym_other_lit_repeat1,
  [14261] = 4,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(983), 1,
      aux_sym_other_lit_token1,
    ACTIONS(1038), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(363), 1,
      aux_sym_other_lit_repeat1,
  [14274] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_LF,
    ACTIONS(993), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [14285] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(1040), 1,
      anon_sym_RBRACK,
    STATE(248), 1,
      aux_sym_expression_list_repeat1,
  [14298] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(974), 1,
      anon_sym_LF,
    ACTIONS(976), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [14309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(1042), 1,
      anon_sym_RBRACK,
    STATE(248), 1,
      aux_sym_expression_list_repeat1,
  [14322] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(1044), 1,
      anon_sym_RPAREN,
    STATE(248), 1,
      aux_sym_expression_list_repeat1,
  [14335] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_COMMA,
    ACTIONS(1046), 1,
      anon_sym_RBRACE,
    STATE(374), 1,
      aux_sym_dict_literal_repeat1,
  [14348] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 1,
      sym_identifier,
    ACTIONS(1048), 1,
      anon_sym_RPAREN,
    STATE(415), 1,
      sym_param_spec,
  [14361] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(1050), 1,
      anon_sym_RPAREN,
    STATE(248), 1,
      aux_sym_expression_list_repeat1,
  [14374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_LPAREN,
    STATE(314), 1,
      sym_func_spec,
  [14384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 1,
      sym_identifier,
    STATE(271), 1,
      sym_var_decl_item,
  [14394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 1,
      sym_identifier,
    STATE(328), 1,
      sym_var_decl_item,
  [14404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 1,
      sym_identifier,
    STATE(70), 1,
      sym_field_identifier,
  [14414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    STATE(155), 1,
      sym_func_spec,
  [14424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_LBRACE,
    STATE(332), 1,
      sym_block,
  [14434] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_LF,
    ACTIONS(940), 1,
      anon_sym_SEMI,
  [14444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_LBRACE,
    STATE(443), 1,
      sym_block,
  [14454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    STATE(440), 1,
      sym_func_spec,
  [14464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_from,
    STATE(449), 1,
      sym_for_range_clause,
  [14474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_LBRACE,
    STATE(372), 1,
      sym_block,
  [14484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_LPAREN,
    STATE(305), 1,
      sym_func_spec,
  [14494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_LBRACE,
    STATE(405), 1,
      sym_block,
  [14504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      sym_identifier,
    STATE(110), 1,
      sym_field_identifier,
  [14530] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(922), 1,
      anon_sym_LF,
    ACTIONS(924), 1,
      anon_sym_SEMI,
  [14540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_LBRACE,
    STATE(445), 1,
      sym_block,
  [14550] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(1010), 1,
      anon_sym_LF,
    ACTIONS(1012), 1,
      anon_sym_SEMI,
  [14560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_LBRACE,
    STATE(373), 1,
      sym_block,
  [14578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_LBRACE,
    STATE(382), 1,
      sym_block,
  [14588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_LBRACE,
    STATE(421), 1,
      sym_block,
  [14598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_LBRACE,
    STATE(433), 1,
      sym_block,
  [14608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_LBRACE,
    STATE(357), 1,
      sym_block,
  [14618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 1,
      sym_identifier,
    STATE(318), 1,
      sym_var_decl_item,
  [14628] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_from,
    STATE(447), 1,
      sym_for_range_clause,
  [14638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 1,
      sym_identifier,
    STATE(308), 1,
      sym_var_decl_item,
  [14648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 1,
      sym_identifier,
    STATE(441), 1,
      sym_param_spec,
  [14658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_LBRACE,
    STATE(349), 1,
      sym_block,
  [14668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_LPAREN,
    STATE(387), 1,
      sym_func_spec,
  [14678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_LBRACE,
    STATE(360), 1,
      sym_block,
  [14704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 1,
      sym_identifier,
    STATE(132), 1,
      sym_field_identifier,
  [14714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [14722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_LPAREN,
    STATE(384), 1,
      sym_func_spec,
  [14732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 1,
      sym_identifier,
  [14739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      anon_sym_DASH_GT,
  [14746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 1,
      sym_identifier,
  [14753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 1,
      anon_sym_LBRACK,
  [14760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 1,
      sym_identifier,
  [14767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      anon_sym_DASH_GT,
  [14774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 1,
      anon_sym_LBRACK,
  [14781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      sym_identifier,
  [14788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1082), 1,
      anon_sym_LBRACK,
  [14795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      anon_sym_RBRACK,
  [14802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 1,
      anon_sym_RBRACK,
  [14809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      anon_sym_DASH_GT,
  [14816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_RBRACK,
  [14823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 1,
      anon_sym_DASH_GT,
  [14830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 1,
      anon_sym_DASH_GT,
  [14837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 1,
      anon_sym_DASH_GT,
  [14844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      anon_sym_RPAREN,
  [14851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      sym_identifier,
  [14858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      anon_sym_COMMA,
  [14865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      anon_sym_LPAREN,
  [14872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 1,
      anon_sym_LPAREN,
  [14879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      anon_sym_RPAREN,
  [14886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      sym_identifier,
  [14893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_BQUOTE,
  [14900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      sym_identifier,
  [14907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 1,
      sym_identifier,
  [14914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 1,
      anon_sym_RBRACE,
  [14921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 1,
      anon_sym_DASH_GT,
  [14928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 1,
      sym_identifier,
  [14935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 1,
      anon_sym_RPAREN,
  [14942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 1,
      anon_sym_RPAREN,
  [14949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_RBRACK,
  [14956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      anon_sym_DASH_GT,
  [14963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 1,
      anon_sym_DASH_GT,
  [14970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 1,
      anon_sym_DASH_GT,
  [14977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      sym_identifier,
  [14984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_RBRACK,
  [14991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      anon_sym_DASH_GT,
  [14998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 1,
      anon_sym_RBRACK,
  [15005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 1,
      anon_sym_RBRACK,
  [15012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1140), 1,
      anon_sym_RPAREN,
  [15019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_RPAREN,
  [15026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1144), 1,
      sym_identifier,
  [15033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 1,
      anon_sym_LBRACK,
  [15040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1148), 1,
      anon_sym_BQUOTE,
  [15047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 1,
      anon_sym_RBRACE,
  [15054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_COMMA,
  [15061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1154), 1,
      anon_sym_COMMA,
  [15068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1156), 1,
      ts_builtin_sym_end,
  [15075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 1,
      sym_identifier,
  [15082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1160), 1,
      anon_sym_LBRACK,
  [15089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 1,
      anon_sym_BQUOTE,
  [15096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1164), 1,
      sym_identifier,
  [15103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      anon_sym_COMMA,
  [15110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 1,
      anon_sym_COMMA,
  [15117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 1,
      anon_sym_RBRACK,
  [15124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1172), 1,
      anon_sym_COMMA,
  [15131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 1,
      anon_sym_RBRACK,
  [15138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 1,
      sym_identifier,
  [15145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1178), 1,
      anon_sym_DASH_GT,
  [15152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 1,
      sym_identifier,
  [15159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 1,
      anon_sym_LBRACK,
  [15166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1184), 1,
      anon_sym_LBRACK,
  [15173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 1,
      anon_sym_LBRACK,
  [15180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1188), 1,
      anon_sym_LBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 130,
  [SMALL_STATE(4)] = 260,
  [SMALL_STATE(5)] = 383,
  [SMALL_STATE(6)] = 506,
  [SMALL_STATE(7)] = 626,
  [SMALL_STATE(8)] = 746,
  [SMALL_STATE(9)] = 863,
  [SMALL_STATE(10)] = 980,
  [SMALL_STATE(11)] = 1094,
  [SMALL_STATE(12)] = 1173,
  [SMALL_STATE(13)] = 1252,
  [SMALL_STATE(14)] = 1326,
  [SMALL_STATE(15)] = 1400,
  [SMALL_STATE(16)] = 1474,
  [SMALL_STATE(17)] = 1548,
  [SMALL_STATE(18)] = 1622,
  [SMALL_STATE(19)] = 1696,
  [SMALL_STATE(20)] = 1770,
  [SMALL_STATE(21)] = 1844,
  [SMALL_STATE(22)] = 1918,
  [SMALL_STATE(23)] = 1992,
  [SMALL_STATE(24)] = 2066,
  [SMALL_STATE(25)] = 2140,
  [SMALL_STATE(26)] = 2211,
  [SMALL_STATE(27)] = 2282,
  [SMALL_STATE(28)] = 2353,
  [SMALL_STATE(29)] = 2424,
  [SMALL_STATE(30)] = 2495,
  [SMALL_STATE(31)] = 2566,
  [SMALL_STATE(32)] = 2637,
  [SMALL_STATE(33)] = 2708,
  [SMALL_STATE(34)] = 2779,
  [SMALL_STATE(35)] = 2850,
  [SMALL_STATE(36)] = 2921,
  [SMALL_STATE(37)] = 2992,
  [SMALL_STATE(38)] = 3063,
  [SMALL_STATE(39)] = 3134,
  [SMALL_STATE(40)] = 3205,
  [SMALL_STATE(41)] = 3276,
  [SMALL_STATE(42)] = 3347,
  [SMALL_STATE(43)] = 3418,
  [SMALL_STATE(44)] = 3489,
  [SMALL_STATE(45)] = 3560,
  [SMALL_STATE(46)] = 3631,
  [SMALL_STATE(47)] = 3702,
  [SMALL_STATE(48)] = 3773,
  [SMALL_STATE(49)] = 3844,
  [SMALL_STATE(50)] = 3915,
  [SMALL_STATE(51)] = 3986,
  [SMALL_STATE(52)] = 4057,
  [SMALL_STATE(53)] = 4128,
  [SMALL_STATE(54)] = 4199,
  [SMALL_STATE(55)] = 4270,
  [SMALL_STATE(56)] = 4341,
  [SMALL_STATE(57)] = 4412,
  [SMALL_STATE(58)] = 4483,
  [SMALL_STATE(59)] = 4554,
  [SMALL_STATE(60)] = 4597,
  [SMALL_STATE(61)] = 4640,
  [SMALL_STATE(62)] = 4687,
  [SMALL_STATE(63)] = 4734,
  [SMALL_STATE(64)] = 4774,
  [SMALL_STATE(65)] = 4808,
  [SMALL_STATE(66)] = 4842,
  [SMALL_STATE(67)] = 4880,
  [SMALL_STATE(68)] = 4924,
  [SMALL_STATE(69)] = 4958,
  [SMALL_STATE(70)] = 4992,
  [SMALL_STATE(71)] = 5026,
  [SMALL_STATE(72)] = 5074,
  [SMALL_STATE(73)] = 5108,
  [SMALL_STATE(74)] = 5158,
  [SMALL_STATE(75)] = 5200,
  [SMALL_STATE(76)] = 5234,
  [SMALL_STATE(77)] = 5268,
  [SMALL_STATE(78)] = 5302,
  [SMALL_STATE(79)] = 5340,
  [SMALL_STATE(80)] = 5374,
  [SMALL_STATE(81)] = 5408,
  [SMALL_STATE(82)] = 5442,
  [SMALL_STATE(83)] = 5476,
  [SMALL_STATE(84)] = 5510,
  [SMALL_STATE(85)] = 5544,
  [SMALL_STATE(86)] = 5578,
  [SMALL_STATE(87)] = 5612,
  [SMALL_STATE(88)] = 5650,
  [SMALL_STATE(89)] = 5688,
  [SMALL_STATE(90)] = 5722,
  [SMALL_STATE(91)] = 5756,
  [SMALL_STATE(92)] = 5790,
  [SMALL_STATE(93)] = 5824,
  [SMALL_STATE(94)] = 5858,
  [SMALL_STATE(95)] = 5892,
  [SMALL_STATE(96)] = 5947,
  [SMALL_STATE(97)] = 6000,
  [SMALL_STATE(98)] = 6053,
  [SMALL_STATE(99)] = 6106,
  [SMALL_STATE(100)] = 6159,
  [SMALL_STATE(101)] = 6212,
  [SMALL_STATE(102)] = 6247,
  [SMALL_STATE(103)] = 6300,
  [SMALL_STATE(104)] = 6332,
  [SMALL_STATE(105)] = 6364,
  [SMALL_STATE(106)] = 6396,
  [SMALL_STATE(107)] = 6428,
  [SMALL_STATE(108)] = 6460,
  [SMALL_STATE(109)] = 6498,
  [SMALL_STATE(110)] = 6530,
  [SMALL_STATE(111)] = 6562,
  [SMALL_STATE(112)] = 6594,
  [SMALL_STATE(113)] = 6626,
  [SMALL_STATE(114)] = 6662,
  [SMALL_STATE(115)] = 6702,
  [SMALL_STATE(116)] = 6744,
  [SMALL_STATE(117)] = 6788,
  [SMALL_STATE(118)] = 6838,
  [SMALL_STATE(119)] = 6870,
  [SMALL_STATE(120)] = 6902,
  [SMALL_STATE(121)] = 6934,
  [SMALL_STATE(122)] = 6966,
  [SMALL_STATE(123)] = 6998,
  [SMALL_STATE(124)] = 7042,
  [SMALL_STATE(125)] = 7074,
  [SMALL_STATE(126)] = 7116,
  [SMALL_STATE(127)] = 7156,
  [SMALL_STATE(128)] = 7188,
  [SMALL_STATE(129)] = 7224,
  [SMALL_STATE(130)] = 7260,
  [SMALL_STATE(131)] = 7292,
  [SMALL_STATE(132)] = 7324,
  [SMALL_STATE(133)] = 7356,
  [SMALL_STATE(134)] = 7406,
  [SMALL_STATE(135)] = 7438,
  [SMALL_STATE(136)] = 7470,
  [SMALL_STATE(137)] = 7508,
  [SMALL_STATE(138)] = 7540,
  [SMALL_STATE(139)] = 7572,
  [SMALL_STATE(140)] = 7604,
  [SMALL_STATE(141)] = 7636,
  [SMALL_STATE(142)] = 7668,
  [SMALL_STATE(143)] = 7700,
  [SMALL_STATE(144)] = 7732,
  [SMALL_STATE(145)] = 7764,
  [SMALL_STATE(146)] = 7796,
  [SMALL_STATE(147)] = 7828,
  [SMALL_STATE(148)] = 7860,
  [SMALL_STATE(149)] = 7910,
  [SMALL_STATE(150)] = 7942,
  [SMALL_STATE(151)] = 7974,
  [SMALL_STATE(152)] = 8006,
  [SMALL_STATE(153)] = 8038,
  [SMALL_STATE(154)] = 8070,
  [SMALL_STATE(155)] = 8102,
  [SMALL_STATE(156)] = 8134,
  [SMALL_STATE(157)] = 8166,
  [SMALL_STATE(158)] = 8198,
  [SMALL_STATE(159)] = 8234,
  [SMALL_STATE(160)] = 8266,
  [SMALL_STATE(161)] = 8298,
  [SMALL_STATE(162)] = 8330,
  [SMALL_STATE(163)] = 8362,
  [SMALL_STATE(164)] = 8394,
  [SMALL_STATE(165)] = 8426,
  [SMALL_STATE(166)] = 8458,
  [SMALL_STATE(167)] = 8490,
  [SMALL_STATE(168)] = 8522,
  [SMALL_STATE(169)] = 8554,
  [SMALL_STATE(170)] = 8586,
  [SMALL_STATE(171)] = 8618,
  [SMALL_STATE(172)] = 8650,
  [SMALL_STATE(173)] = 8682,
  [SMALL_STATE(174)] = 8714,
  [SMALL_STATE(175)] = 8746,
  [SMALL_STATE(176)] = 8795,
  [SMALL_STATE(177)] = 8844,
  [SMALL_STATE(178)] = 8893,
  [SMALL_STATE(179)] = 8942,
  [SMALL_STATE(180)] = 8991,
  [SMALL_STATE(181)] = 9040,
  [SMALL_STATE(182)] = 9089,
  [SMALL_STATE(183)] = 9138,
  [SMALL_STATE(184)] = 9187,
  [SMALL_STATE(185)] = 9236,
  [SMALL_STATE(186)] = 9285,
  [SMALL_STATE(187)] = 9334,
  [SMALL_STATE(188)] = 9383,
  [SMALL_STATE(189)] = 9432,
  [SMALL_STATE(190)] = 9481,
  [SMALL_STATE(191)] = 9530,
  [SMALL_STATE(192)] = 9579,
  [SMALL_STATE(193)] = 9628,
  [SMALL_STATE(194)] = 9677,
  [SMALL_STATE(195)] = 9726,
  [SMALL_STATE(196)] = 9775,
  [SMALL_STATE(197)] = 9824,
  [SMALL_STATE(198)] = 9873,
  [SMALL_STATE(199)] = 9922,
  [SMALL_STATE(200)] = 9971,
  [SMALL_STATE(201)] = 10020,
  [SMALL_STATE(202)] = 10069,
  [SMALL_STATE(203)] = 10118,
  [SMALL_STATE(204)] = 10167,
  [SMALL_STATE(205)] = 10216,
  [SMALL_STATE(206)] = 10265,
  [SMALL_STATE(207)] = 10314,
  [SMALL_STATE(208)] = 10363,
  [SMALL_STATE(209)] = 10412,
  [SMALL_STATE(210)] = 10461,
  [SMALL_STATE(211)] = 10509,
  [SMALL_STATE(212)] = 10557,
  [SMALL_STATE(213)] = 10600,
  [SMALL_STATE(214)] = 10645,
  [SMALL_STATE(215)] = 10688,
  [SMALL_STATE(216)] = 10733,
  [SMALL_STATE(217)] = 10778,
  [SMALL_STATE(218)] = 10823,
  [SMALL_STATE(219)] = 10868,
  [SMALL_STATE(220)] = 10916,
  [SMALL_STATE(221)] = 10964,
  [SMALL_STATE(222)] = 11012,
  [SMALL_STATE(223)] = 11060,
  [SMALL_STATE(224)] = 11108,
  [SMALL_STATE(225)] = 11156,
  [SMALL_STATE(226)] = 11204,
  [SMALL_STATE(227)] = 11252,
  [SMALL_STATE(228)] = 11300,
  [SMALL_STATE(229)] = 11343,
  [SMALL_STATE(230)] = 11388,
  [SMALL_STATE(231)] = 11433,
  [SMALL_STATE(232)] = 11478,
  [SMALL_STATE(233)] = 11523,
  [SMALL_STATE(234)] = 11565,
  [SMALL_STATE(235)] = 11607,
  [SMALL_STATE(236)] = 11649,
  [SMALL_STATE(237)] = 11691,
  [SMALL_STATE(238)] = 11733,
  [SMALL_STATE(239)] = 11775,
  [SMALL_STATE(240)] = 11804,
  [SMALL_STATE(241)] = 11833,
  [SMALL_STATE(242)] = 11864,
  [SMALL_STATE(243)] = 11895,
  [SMALL_STATE(244)] = 11926,
  [SMALL_STATE(245)] = 11955,
  [SMALL_STATE(246)] = 11980,
  [SMALL_STATE(247)] = 12005,
  [SMALL_STATE(248)] = 12026,
  [SMALL_STATE(249)] = 12045,
  [SMALL_STATE(250)] = 12066,
  [SMALL_STATE(251)] = 12079,
  [SMALL_STATE(252)] = 12096,
  [SMALL_STATE(253)] = 12113,
  [SMALL_STATE(254)] = 12126,
  [SMALL_STATE(255)] = 12143,
  [SMALL_STATE(256)] = 12156,
  [SMALL_STATE(257)] = 12169,
  [SMALL_STATE(258)] = 12186,
  [SMALL_STATE(259)] = 12203,
  [SMALL_STATE(260)] = 12218,
  [SMALL_STATE(261)] = 12231,
  [SMALL_STATE(262)] = 12248,
  [SMALL_STATE(263)] = 12265,
  [SMALL_STATE(264)] = 12282,
  [SMALL_STATE(265)] = 12299,
  [SMALL_STATE(266)] = 12312,
  [SMALL_STATE(267)] = 12329,
  [SMALL_STATE(268)] = 12342,
  [SMALL_STATE(269)] = 12355,
  [SMALL_STATE(270)] = 12372,
  [SMALL_STATE(271)] = 12389,
  [SMALL_STATE(272)] = 12406,
  [SMALL_STATE(273)] = 12423,
  [SMALL_STATE(274)] = 12439,
  [SMALL_STATE(275)] = 12451,
  [SMALL_STATE(276)] = 12467,
  [SMALL_STATE(277)] = 12481,
  [SMALL_STATE(278)] = 12495,
  [SMALL_STATE(279)] = 12507,
  [SMALL_STATE(280)] = 12519,
  [SMALL_STATE(281)] = 12533,
  [SMALL_STATE(282)] = 12549,
  [SMALL_STATE(283)] = 12563,
  [SMALL_STATE(284)] = 12579,
  [SMALL_STATE(285)] = 12591,
  [SMALL_STATE(286)] = 12607,
  [SMALL_STATE(287)] = 12623,
  [SMALL_STATE(288)] = 12635,
  [SMALL_STATE(289)] = 12647,
  [SMALL_STATE(290)] = 12663,
  [SMALL_STATE(291)] = 12677,
  [SMALL_STATE(292)] = 12693,
  [SMALL_STATE(293)] = 12709,
  [SMALL_STATE(294)] = 12723,
  [SMALL_STATE(295)] = 12739,
  [SMALL_STATE(296)] = 12755,
  [SMALL_STATE(297)] = 12767,
  [SMALL_STATE(298)] = 12783,
  [SMALL_STATE(299)] = 12799,
  [SMALL_STATE(300)] = 12813,
  [SMALL_STATE(301)] = 12829,
  [SMALL_STATE(302)] = 12841,
  [SMALL_STATE(303)] = 12857,
  [SMALL_STATE(304)] = 12869,
  [SMALL_STATE(305)] = 12885,
  [SMALL_STATE(306)] = 12897,
  [SMALL_STATE(307)] = 12911,
  [SMALL_STATE(308)] = 12927,
  [SMALL_STATE(309)] = 12939,
  [SMALL_STATE(310)] = 12955,
  [SMALL_STATE(311)] = 12967,
  [SMALL_STATE(312)] = 12983,
  [SMALL_STATE(313)] = 12999,
  [SMALL_STATE(314)] = 13011,
  [SMALL_STATE(315)] = 13023,
  [SMALL_STATE(316)] = 13035,
  [SMALL_STATE(317)] = 13047,
  [SMALL_STATE(318)] = 13059,
  [SMALL_STATE(319)] = 13075,
  [SMALL_STATE(320)] = 13091,
  [SMALL_STATE(321)] = 13107,
  [SMALL_STATE(322)] = 13121,
  [SMALL_STATE(323)] = 13137,
  [SMALL_STATE(324)] = 13153,
  [SMALL_STATE(325)] = 13165,
  [SMALL_STATE(326)] = 13179,
  [SMALL_STATE(327)] = 13190,
  [SMALL_STATE(328)] = 13203,
  [SMALL_STATE(329)] = 13214,
  [SMALL_STATE(330)] = 13225,
  [SMALL_STATE(331)] = 13236,
  [SMALL_STATE(332)] = 13247,
  [SMALL_STATE(333)] = 13258,
  [SMALL_STATE(334)] = 13269,
  [SMALL_STATE(335)] = 13282,
  [SMALL_STATE(336)] = 13293,
  [SMALL_STATE(337)] = 13306,
  [SMALL_STATE(338)] = 13319,
  [SMALL_STATE(339)] = 13330,
  [SMALL_STATE(340)] = 13341,
  [SMALL_STATE(341)] = 13352,
  [SMALL_STATE(342)] = 13363,
  [SMALL_STATE(343)] = 13374,
  [SMALL_STATE(344)] = 13385,
  [SMALL_STATE(345)] = 13396,
  [SMALL_STATE(346)] = 13407,
  [SMALL_STATE(347)] = 13418,
  [SMALL_STATE(348)] = 13429,
  [SMALL_STATE(349)] = 13440,
  [SMALL_STATE(350)] = 13451,
  [SMALL_STATE(351)] = 13462,
  [SMALL_STATE(352)] = 13473,
  [SMALL_STATE(353)] = 13484,
  [SMALL_STATE(354)] = 13497,
  [SMALL_STATE(355)] = 13510,
  [SMALL_STATE(356)] = 13523,
  [SMALL_STATE(357)] = 13536,
  [SMALL_STATE(358)] = 13547,
  [SMALL_STATE(359)] = 13558,
  [SMALL_STATE(360)] = 13569,
  [SMALL_STATE(361)] = 13580,
  [SMALL_STATE(362)] = 13593,
  [SMALL_STATE(363)] = 13606,
  [SMALL_STATE(364)] = 13619,
  [SMALL_STATE(365)] = 13632,
  [SMALL_STATE(366)] = 13643,
  [SMALL_STATE(367)] = 13656,
  [SMALL_STATE(368)] = 13669,
  [SMALL_STATE(369)] = 13682,
  [SMALL_STATE(370)] = 13695,
  [SMALL_STATE(371)] = 13706,
  [SMALL_STATE(372)] = 13717,
  [SMALL_STATE(373)] = 13728,
  [SMALL_STATE(374)] = 13739,
  [SMALL_STATE(375)] = 13752,
  [SMALL_STATE(376)] = 13765,
  [SMALL_STATE(377)] = 13776,
  [SMALL_STATE(378)] = 13789,
  [SMALL_STATE(379)] = 13800,
  [SMALL_STATE(380)] = 13811,
  [SMALL_STATE(381)] = 13824,
  [SMALL_STATE(382)] = 13835,
  [SMALL_STATE(383)] = 13846,
  [SMALL_STATE(384)] = 13857,
  [SMALL_STATE(385)] = 13868,
  [SMALL_STATE(386)] = 13881,
  [SMALL_STATE(387)] = 13892,
  [SMALL_STATE(388)] = 13903,
  [SMALL_STATE(389)] = 13914,
  [SMALL_STATE(390)] = 13925,
  [SMALL_STATE(391)] = 13936,
  [SMALL_STATE(392)] = 13947,
  [SMALL_STATE(393)] = 13958,
  [SMALL_STATE(394)] = 13969,
  [SMALL_STATE(395)] = 13980,
  [SMALL_STATE(396)] = 13991,
  [SMALL_STATE(397)] = 14002,
  [SMALL_STATE(398)] = 14015,
  [SMALL_STATE(399)] = 14026,
  [SMALL_STATE(400)] = 14039,
  [SMALL_STATE(401)] = 14052,
  [SMALL_STATE(402)] = 14065,
  [SMALL_STATE(403)] = 14078,
  [SMALL_STATE(404)] = 14091,
  [SMALL_STATE(405)] = 14100,
  [SMALL_STATE(406)] = 14111,
  [SMALL_STATE(407)] = 14124,
  [SMALL_STATE(408)] = 14137,
  [SMALL_STATE(409)] = 14148,
  [SMALL_STATE(410)] = 14161,
  [SMALL_STATE(411)] = 14172,
  [SMALL_STATE(412)] = 14185,
  [SMALL_STATE(413)] = 14198,
  [SMALL_STATE(414)] = 14211,
  [SMALL_STATE(415)] = 14224,
  [SMALL_STATE(416)] = 14237,
  [SMALL_STATE(417)] = 14248,
  [SMALL_STATE(418)] = 14261,
  [SMALL_STATE(419)] = 14274,
  [SMALL_STATE(420)] = 14285,
  [SMALL_STATE(421)] = 14298,
  [SMALL_STATE(422)] = 14309,
  [SMALL_STATE(423)] = 14322,
  [SMALL_STATE(424)] = 14335,
  [SMALL_STATE(425)] = 14348,
  [SMALL_STATE(426)] = 14361,
  [SMALL_STATE(427)] = 14374,
  [SMALL_STATE(428)] = 14384,
  [SMALL_STATE(429)] = 14394,
  [SMALL_STATE(430)] = 14404,
  [SMALL_STATE(431)] = 14414,
  [SMALL_STATE(432)] = 14424,
  [SMALL_STATE(433)] = 14434,
  [SMALL_STATE(434)] = 14444,
  [SMALL_STATE(435)] = 14454,
  [SMALL_STATE(436)] = 14464,
  [SMALL_STATE(437)] = 14474,
  [SMALL_STATE(438)] = 14484,
  [SMALL_STATE(439)] = 14494,
  [SMALL_STATE(440)] = 14504,
  [SMALL_STATE(441)] = 14512,
  [SMALL_STATE(442)] = 14520,
  [SMALL_STATE(443)] = 14530,
  [SMALL_STATE(444)] = 14540,
  [SMALL_STATE(445)] = 14550,
  [SMALL_STATE(446)] = 14560,
  [SMALL_STATE(447)] = 14568,
  [SMALL_STATE(448)] = 14578,
  [SMALL_STATE(449)] = 14588,
  [SMALL_STATE(450)] = 14598,
  [SMALL_STATE(451)] = 14608,
  [SMALL_STATE(452)] = 14618,
  [SMALL_STATE(453)] = 14628,
  [SMALL_STATE(454)] = 14638,
  [SMALL_STATE(455)] = 14648,
  [SMALL_STATE(456)] = 14658,
  [SMALL_STATE(457)] = 14668,
  [SMALL_STATE(458)] = 14678,
  [SMALL_STATE(459)] = 14686,
  [SMALL_STATE(460)] = 14694,
  [SMALL_STATE(461)] = 14704,
  [SMALL_STATE(462)] = 14714,
  [SMALL_STATE(463)] = 14722,
  [SMALL_STATE(464)] = 14732,
  [SMALL_STATE(465)] = 14739,
  [SMALL_STATE(466)] = 14746,
  [SMALL_STATE(467)] = 14753,
  [SMALL_STATE(468)] = 14760,
  [SMALL_STATE(469)] = 14767,
  [SMALL_STATE(470)] = 14774,
  [SMALL_STATE(471)] = 14781,
  [SMALL_STATE(472)] = 14788,
  [SMALL_STATE(473)] = 14795,
  [SMALL_STATE(474)] = 14802,
  [SMALL_STATE(475)] = 14809,
  [SMALL_STATE(476)] = 14816,
  [SMALL_STATE(477)] = 14823,
  [SMALL_STATE(478)] = 14830,
  [SMALL_STATE(479)] = 14837,
  [SMALL_STATE(480)] = 14844,
  [SMALL_STATE(481)] = 14851,
  [SMALL_STATE(482)] = 14858,
  [SMALL_STATE(483)] = 14865,
  [SMALL_STATE(484)] = 14872,
  [SMALL_STATE(485)] = 14879,
  [SMALL_STATE(486)] = 14886,
  [SMALL_STATE(487)] = 14893,
  [SMALL_STATE(488)] = 14900,
  [SMALL_STATE(489)] = 14907,
  [SMALL_STATE(490)] = 14914,
  [SMALL_STATE(491)] = 14921,
  [SMALL_STATE(492)] = 14928,
  [SMALL_STATE(493)] = 14935,
  [SMALL_STATE(494)] = 14942,
  [SMALL_STATE(495)] = 14949,
  [SMALL_STATE(496)] = 14956,
  [SMALL_STATE(497)] = 14963,
  [SMALL_STATE(498)] = 14970,
  [SMALL_STATE(499)] = 14977,
  [SMALL_STATE(500)] = 14984,
  [SMALL_STATE(501)] = 14991,
  [SMALL_STATE(502)] = 14998,
  [SMALL_STATE(503)] = 15005,
  [SMALL_STATE(504)] = 15012,
  [SMALL_STATE(505)] = 15019,
  [SMALL_STATE(506)] = 15026,
  [SMALL_STATE(507)] = 15033,
  [SMALL_STATE(508)] = 15040,
  [SMALL_STATE(509)] = 15047,
  [SMALL_STATE(510)] = 15054,
  [SMALL_STATE(511)] = 15061,
  [SMALL_STATE(512)] = 15068,
  [SMALL_STATE(513)] = 15075,
  [SMALL_STATE(514)] = 15082,
  [SMALL_STATE(515)] = 15089,
  [SMALL_STATE(516)] = 15096,
  [SMALL_STATE(517)] = 15103,
  [SMALL_STATE(518)] = 15110,
  [SMALL_STATE(519)] = 15117,
  [SMALL_STATE(520)] = 15124,
  [SMALL_STATE(521)] = 15131,
  [SMALL_STATE(522)] = 15138,
  [SMALL_STATE(523)] = 15145,
  [SMALL_STATE(524)] = 15152,
  [SMALL_STATE(525)] = 15159,
  [SMALL_STATE(526)] = 15166,
  [SMALL_STATE(527)] = 15173,
  [SMALL_STATE(528)] = 15180,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(62),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(57),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(15),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(31),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(5),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(481),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(45),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(506),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(452),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(464),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(167),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(167),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(165),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(163),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(350),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(12),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(283),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(282),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(403),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(402),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_identifier, 1, .production_id = 11),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_identifier, 1, .production_id = 11),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 10),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 10),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 12),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, .production_id = 12),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 4),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 4),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_literal, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_literal, 4),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_literal, 4),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 5),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 5),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_literal, 1),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_composite_literal, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_expression, 4, .production_id = 20),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_expression, 4, .production_id = 20),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_literal, 3),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_literal, 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 3),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_true, 1),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_true, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_false, 1),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_false, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expression_list, 1), SHIFT(41),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 1),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(196),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(157),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(157),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(513),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(101),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(525),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(507),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(526),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(431),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 1),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 1),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec_r, 2),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_spec_r, 2),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec_r, 1),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_spec_r, 1),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 2),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 4),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 4),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_spec, 8),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_spec, 8),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 5),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 5),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_spec, 7),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_spec, 7),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_spec, 6),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_spec, 6),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 6),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 6),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_spec, 5),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_spec, 5),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_kv, 3, .production_id = 13),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_range_clause, 4, .production_id = 28),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_stmt, 3, .production_id = 8),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_stmt, 4, .production_id = 17),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_stmt, 3, .production_id = 8),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_stmt, 5, .production_id = 23),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_stmt, 5, .production_id = 23),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_stmt, 4, .production_id = 17),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 2, .production_id = 25),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 2, .production_id = 25),
  [645] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 2, .production_id = 25), SHIFT_REPEAT(55),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(40),
  [651] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 2, .production_id = 25), SHIFT_REPEAT(54),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 1, .production_id = 15),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 1, .production_id = 15),
  [658] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(36),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 2),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_clause, 3, .production_id = 8),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif_clause, 3, .production_id = 8),
  [669] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(48),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 2),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 2),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_declaration_repeat1, 2),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_var_declaration_repeat1, 2),
  [686] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_var_declaration_repeat1, 2), SHIFT_REPEAT(454),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_statement_repeat1, 2),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_statement_repeat1, 2),
  [695] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_statement_repeat1, 2), SHIFT_REPEAT(492),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 3),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 3),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [704] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_statement_repeat1, 2), SHIFT_REPEAT(468),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 3),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 3),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 2),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 2),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_spec_repeat1, 2),
  [739] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_spec_repeat1, 2), SHIFT_REPEAT(204),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_content_double, 2),
  [790] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_content_double, 2), SHIFT_REPEAT(297),
  [793] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_content_double, 2), SHIFT_REPEAT(297),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_content_single, 2),
  [802] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_content_single, 2), SHIFT_REPEAT(299),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [811] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_var_declaration_repeat1, 2), SHIFT_REPEAT(429),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_decl_item, 4, .production_id = 27),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_decl_item, 4, .production_id = 27),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec, 2),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_spec, 2),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_decl_item, 3, .production_id = 19),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_decl_item, 3, .production_id = 19),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec, 1),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_spec, 1),
  [840] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(10),
  [843] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(10),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [850] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__if_elif_stmt_repeat1, 2), SHIFT_REPEAT(325),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__if_elif_stmt_repeat1, 2),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1, .production_id = 3),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1, .production_id = 3),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1, .production_id = 4),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1, .production_id = 4),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2, .production_id = 21),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2, .production_id = 21),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_else_stmt, 5, .production_id = 22),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_else_stmt, 5, .production_id = 22),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_else_stmt, 5, .production_id = 24),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_else_stmt, 5, .production_id = 24),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2),
  [885] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2), SHIFT_REPEAT(455),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1, .production_id = 1),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1, .production_id = 1),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, .production_id = 6),
  [904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2, .production_id = 6),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_else_stmt, 6, .production_id = 29),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_else_stmt, 6, .production_id = 29),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_else_stmt, 6, .production_id = 30),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_else_stmt, 6, .production_id = 30),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1, .production_id = 2),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1, .production_id = 2),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_else_stmt, 7, .production_id = 33),
  [920] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_else_stmt, 7, .production_id = 33),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 32),
  [924] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, .production_id = 32),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 26),
  [940] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 5, .production_id = 26),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [944] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_statement_repeat1, 2), SHIFT_REPEAT(489),
  [947] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_other_lit_repeat1, 2), SHIFT_REPEAT(363),
  [950] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_other_lit_repeat1, 2),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_spec, 1, .production_id = 18),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_else_stmt, 4, .production_id = 16),
  [968] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_else_stmt, 4, .production_id = 16),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, .production_id = 9),
  [972] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3, .production_id = 9),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 4, .production_id = 14),
  [976] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 4, .production_id = 14),
  [978] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_literal_repeat1, 2), SHIFT_REPEAT(20),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_literal_repeat1, 2),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3, .production_id = 10),
  [993] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 3, .production_id = 10),
  [995] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_other_lit_repeat1, 2), SHIFT_REPEAT(385),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, .production_id = 34),
  [1012] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 7, .production_id = 34),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_spec, 3, .production_id = 31),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1156] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
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
