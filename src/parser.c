#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 530
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 142
#define ALIAS_COUNT 1
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
  sym_empty_statement = 122,
  sym_return_statement = 123,
  sym_quoted_string = 124,
  aux_sym__quoted_string_content_double = 125,
  aux_sym__quoted_string_content_single = 126,
  sym_multiline_string = 127,
  sym_string_literal = 128,
  sym__field_identifier = 129,
  aux_sym_source_file_repeat1 = 130,
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
  alias_sym_field_identifier = 142,
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
  [aux_sym_enum_statement_repeat1] = "enum_statement_repeat1",
  [aux_sym__if_elif_stmt_repeat1] = "_if_elif_stmt_repeat1",
  [aux_sym__if_elif_stmt_repeat2] = "_if_elif_stmt_repeat2",
  [aux_sym_base_type_spec_repeat1] = "base_type_spec_repeat1",
  [aux_sym_func_spec_repeat1] = "func_spec_repeat1",
  [aux_sym_function_declaration_repeat1] = "function_declaration_repeat1",
  [aux_sym_var_declaration_repeat1] = "var_declaration_repeat1",
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
  [aux_sym_enum_statement_repeat1] = aux_sym_enum_statement_repeat1,
  [aux_sym__if_elif_stmt_repeat1] = aux_sym__if_elif_stmt_repeat1,
  [aux_sym__if_elif_stmt_repeat2] = aux_sym__if_elif_stmt_repeat2,
  [aux_sym_base_type_spec_repeat1] = aux_sym_base_type_spec_repeat1,
  [aux_sym_func_spec_repeat1] = aux_sym_func_spec_repeat1,
  [aux_sym_function_declaration_repeat1] = aux_sym_function_declaration_repeat1,
  [aux_sym_var_declaration_repeat1] = aux_sym_var_declaration_repeat1,
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
  [14] = 13,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 15,
  [19] = 16,
  [20] = 20,
  [21] = 17,
  [22] = 15,
  [23] = 16,
  [24] = 13,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 29,
  [31] = 31,
  [32] = 27,
  [33] = 33,
  [34] = 33,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 38,
  [41] = 36,
  [42] = 27,
  [43] = 43,
  [44] = 43,
  [45] = 29,
  [46] = 28,
  [47] = 35,
  [48] = 48,
  [49] = 48,
  [50] = 35,
  [51] = 26,
  [52] = 43,
  [53] = 36,
  [54] = 38,
  [55] = 33,
  [56] = 25,
  [57] = 28,
  [58] = 25,
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
  [87] = 61,
  [88] = 88,
  [89] = 89,
  [90] = 61,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 94,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 96,
  [100] = 100,
  [101] = 96,
  [102] = 77,
  [103] = 64,
  [104] = 63,
  [105] = 91,
  [106] = 77,
  [107] = 73,
  [108] = 71,
  [109] = 70,
  [110] = 92,
  [111] = 93,
  [112] = 69,
  [113] = 66,
  [114] = 65,
  [115] = 72,
  [116] = 116,
  [117] = 76,
  [118] = 74,
  [119] = 74,
  [120] = 76,
  [121] = 72,
  [122] = 65,
  [123] = 79,
  [124] = 66,
  [125] = 78,
  [126] = 69,
  [127] = 75,
  [128] = 68,
  [129] = 80,
  [130] = 70,
  [131] = 84,
  [132] = 71,
  [133] = 116,
  [134] = 82,
  [135] = 73,
  [136] = 63,
  [137] = 80,
  [138] = 83,
  [139] = 85,
  [140] = 88,
  [141] = 89,
  [142] = 86,
  [143] = 83,
  [144] = 81,
  [145] = 67,
  [146] = 116,
  [147] = 67,
  [148] = 148,
  [149] = 81,
  [150] = 82,
  [151] = 68,
  [152] = 64,
  [153] = 75,
  [154] = 84,
  [155] = 89,
  [156] = 88,
  [157] = 157,
  [158] = 158,
  [159] = 78,
  [160] = 79,
  [161] = 85,
  [162] = 93,
  [163] = 92,
  [164] = 164,
  [165] = 91,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 86,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 175,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 183,
  [185] = 178,
  [186] = 180,
  [187] = 179,
  [188] = 180,
  [189] = 189,
  [190] = 182,
  [191] = 191,
  [192] = 176,
  [193] = 179,
  [194] = 194,
  [195] = 174,
  [196] = 189,
  [197] = 194,
  [198] = 181,
  [199] = 183,
  [200] = 189,
  [201] = 174,
  [202] = 178,
  [203] = 181,
  [204] = 204,
  [205] = 194,
  [206] = 176,
  [207] = 175,
  [208] = 182,
  [209] = 209,
  [210] = 209,
  [211] = 211,
  [212] = 191,
  [213] = 213,
  [214] = 211,
  [215] = 213,
  [216] = 216,
  [217] = 191,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 218,
  [222] = 220,
  [223] = 220,
  [224] = 219,
  [225] = 219,
  [226] = 218,
  [227] = 227,
  [228] = 227,
  [229] = 229,
  [230] = 229,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 232,
  [235] = 235,
  [236] = 232,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 239,
  [241] = 238,
  [242] = 242,
  [243] = 242,
  [244] = 244,
  [245] = 244,
  [246] = 246,
  [247] = 247,
  [248] = 247,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 98,
  [254] = 254,
  [255] = 251,
  [256] = 256,
  [257] = 246,
  [258] = 250,
  [259] = 252,
  [260] = 260,
  [261] = 260,
  [262] = 250,
  [263] = 263,
  [264] = 264,
  [265] = 249,
  [266] = 266,
  [267] = 254,
  [268] = 268,
  [269] = 266,
  [270] = 246,
  [271] = 264,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 272,
  [276] = 274,
  [277] = 173,
  [278] = 278,
  [279] = 171,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 274,
  [284] = 168,
  [285] = 285,
  [286] = 272,
  [287] = 281,
  [288] = 166,
  [289] = 278,
  [290] = 281,
  [291] = 170,
  [292] = 292,
  [293] = 169,
  [294] = 294,
  [295] = 295,
  [296] = 167,
  [297] = 268,
  [298] = 298,
  [299] = 98,
  [300] = 273,
  [301] = 301,
  [302] = 157,
  [303] = 298,
  [304] = 158,
  [305] = 256,
  [306] = 306,
  [307] = 307,
  [308] = 148,
  [309] = 309,
  [310] = 285,
  [311] = 292,
  [312] = 298,
  [313] = 301,
  [314] = 285,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 164,
  [319] = 278,
  [320] = 320,
  [321] = 263,
  [322] = 322,
  [323] = 166,
  [324] = 324,
  [325] = 320,
  [326] = 326,
  [327] = 317,
  [328] = 328,
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
  [340] = 315,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 339,
  [348] = 338,
  [349] = 343,
  [350] = 342,
  [351] = 326,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 334,
  [357] = 332,
  [358] = 331,
  [359] = 359,
  [360] = 260,
  [361] = 361,
  [362] = 361,
  [363] = 359,
  [364] = 328,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 369,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 157,
  [379] = 379,
  [380] = 322,
  [381] = 354,
  [382] = 382,
  [383] = 376,
  [384] = 164,
  [385] = 316,
  [386] = 382,
  [387] = 158,
  [388] = 148,
  [389] = 344,
  [390] = 168,
  [391] = 346,
  [392] = 171,
  [393] = 173,
  [394] = 345,
  [395] = 370,
  [396] = 170,
  [397] = 169,
  [398] = 353,
  [399] = 167,
  [400] = 400,
  [401] = 324,
  [402] = 402,
  [403] = 330,
  [404] = 329,
  [405] = 371,
  [406] = 372,
  [407] = 329,
  [408] = 330,
  [409] = 337,
  [410] = 335,
  [411] = 365,
  [412] = 352,
  [413] = 354,
  [414] = 359,
  [415] = 367,
  [416] = 416,
  [417] = 377,
  [418] = 324,
  [419] = 371,
  [420] = 420,
  [421] = 400,
  [422] = 366,
  [423] = 369,
  [424] = 366,
  [425] = 365,
  [426] = 402,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 431,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 355,
  [438] = 438,
  [439] = 432,
  [440] = 440,
  [441] = 316,
  [442] = 341,
  [443] = 435,
  [444] = 379,
  [445] = 445,
  [446] = 446,
  [447] = 428,
  [448] = 434,
  [449] = 449,
  [450] = 436,
  [451] = 438,
  [452] = 452,
  [453] = 432,
  [454] = 429,
  [455] = 436,
  [456] = 456,
  [457] = 449,
  [458] = 273,
  [459] = 459,
  [460] = 322,
  [461] = 452,
  [462] = 431,
  [463] = 430,
  [464] = 456,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 467,
  [470] = 466,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 465,
  [480] = 476,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 478,
  [485] = 483,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 476,
  [491] = 465,
  [492] = 492,
  [493] = 478,
  [494] = 487,
  [495] = 495,
  [496] = 477,
  [497] = 488,
  [498] = 475,
  [499] = 474,
  [500] = 489,
  [501] = 495,
  [502] = 473,
  [503] = 466,
  [504] = 474,
  [505] = 487,
  [506] = 495,
  [507] = 507,
  [508] = 481,
  [509] = 492,
  [510] = 510,
  [511] = 511,
  [512] = 468,
  [513] = 467,
  [514] = 489,
  [515] = 481,
  [516] = 492,
  [517] = 475,
  [518] = 511,
  [519] = 468,
  [520] = 477,
  [521] = 511,
  [522] = 472,
  [523] = 473,
  [524] = 507,
  [525] = 482,
  [526] = 471,
  [527] = 486,
  [528] = 471,
  [529] = 486,
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
  [59] = {.lex_state = 35},
  [60] = {.lex_state = 35},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 38},
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
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 35},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 35},
  [95] = {.lex_state = 35},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 35},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
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
  [115] = {.lex_state = 35},
  [116] = {.lex_state = 0},
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
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 35},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 35},
  [150] = {.lex_state = 35},
  [151] = {.lex_state = 35},
  [152] = {.lex_state = 35},
  [153] = {.lex_state = 35},
  [154] = {.lex_state = 35},
  [155] = {.lex_state = 35},
  [156] = {.lex_state = 35},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 35},
  [160] = {.lex_state = 35},
  [161] = {.lex_state = 35},
  [162] = {.lex_state = 35},
  [163] = {.lex_state = 35},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 35},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 35},
  [173] = {.lex_state = 0},
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
  [191] = {.lex_state = 5},
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
  [209] = {.lex_state = 35},
  [210] = {.lex_state = 35},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 35},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 35},
  [218] = {.lex_state = 5},
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
  [238] = {.lex_state = 36},
  [239] = {.lex_state = 36},
  [240] = {.lex_state = 36},
  [241] = {.lex_state = 36},
  [242] = {.lex_state = 36},
  [243] = {.lex_state = 36},
  [244] = {.lex_state = 36},
  [245] = {.lex_state = 36},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 36},
  [248] = {.lex_state = 36},
  [249] = {.lex_state = 36},
  [250] = {.lex_state = 0},
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
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 36},
  [274] = {.lex_state = 2},
  [275] = {.lex_state = 1},
  [276] = {.lex_state = 2},
  [277] = {.lex_state = 36},
  [278] = {.lex_state = 2},
  [279] = {.lex_state = 36},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 1},
  [282] = {.lex_state = 36},
  [283] = {.lex_state = 2},
  [284] = {.lex_state = 36},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 1},
  [287] = {.lex_state = 1},
  [288] = {.lex_state = 36},
  [289] = {.lex_state = 2},
  [290] = {.lex_state = 1},
  [291] = {.lex_state = 36},
  [292] = {.lex_state = 36},
  [293] = {.lex_state = 36},
  [294] = {.lex_state = 1},
  [295] = {.lex_state = 2},
  [296] = {.lex_state = 36},
  [297] = {.lex_state = 36},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 36},
  [300] = {.lex_state = 36},
  [301] = {.lex_state = 36},
  [302] = {.lex_state = 36},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 36},
  [305] = {.lex_state = 36},
  [306] = {.lex_state = 36},
  [307] = {.lex_state = 36},
  [308] = {.lex_state = 36},
  [309] = {.lex_state = 36},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 36},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 36},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 36},
  [316] = {.lex_state = 36},
  [317] = {.lex_state = 36},
  [318] = {.lex_state = 36},
  [319] = {.lex_state = 2},
  [320] = {.lex_state = 36},
  [321] = {.lex_state = 36},
  [322] = {.lex_state = 36},
  [323] = {.lex_state = 36},
  [324] = {.lex_state = 3},
  [325] = {.lex_state = 36},
  [326] = {.lex_state = 36},
  [327] = {.lex_state = 36},
  [328] = {.lex_state = 36},
  [329] = {.lex_state = 3},
  [330] = {.lex_state = 4},
  [331] = {.lex_state = 36},
  [332] = {.lex_state = 36},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 36},
  [335] = {.lex_state = 36},
  [336] = {.lex_state = 36},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 36},
  [339] = {.lex_state = 36},
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
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 36},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 36},
  [356] = {.lex_state = 36},
  [357] = {.lex_state = 36},
  [358] = {.lex_state = 36},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 36},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 36},
  [371] = {.lex_state = 4},
  [372] = {.lex_state = 36},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 36},
  [376] = {.lex_state = 4},
  [377] = {.lex_state = 36},
  [378] = {.lex_state = 36},
  [379] = {.lex_state = 36},
  [380] = {.lex_state = 36},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 36},
  [383] = {.lex_state = 3},
  [384] = {.lex_state = 36},
  [385] = {.lex_state = 36},
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
  [397] = {.lex_state = 36},
  [398] = {.lex_state = 36},
  [399] = {.lex_state = 36},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 3},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 4},
  [404] = {.lex_state = 3},
  [405] = {.lex_state = 4},
  [406] = {.lex_state = 36},
  [407] = {.lex_state = 3},
  [408] = {.lex_state = 4},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 36},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 36},
  [418] = {.lex_state = 3},
  [419] = {.lex_state = 4},
  [420] = {.lex_state = 36},
  [421] = {.lex_state = 0},
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
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 36},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 36},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 36},
  [445] = {.lex_state = 0},
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
  [459] = {.lex_state = 36},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 9},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 9},
  [476] = {.lex_state = 9},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 9},
  [479] = {.lex_state = 9},
  [480] = {.lex_state = 9},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 9},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 9},
  [491] = {.lex_state = 9},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 9},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 9},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
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
  [517] = {.lex_state = 9},
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
    [sym_source_file] = STATE(510),
    [sym__top_level_item] = STATE(336),
    [sym__declaration] = STATE(336),
    [sym__statement] = STATE(336),
    [sym_unary_expression] = STATE(105),
    [sym__expression] = STATE(94),
    [sym_composite_literal] = STATE(105),
    [sym_selector_expression] = STATE(105),
    [sym_index_expression] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_expression_list] = STATE(337),
    [sym_block] = STATE(326),
    [sym_assignment_statement] = STATE(326),
    [sym_for_statement] = STATE(326),
    [sym_call_expression] = STATE(105),
    [sym_if_statement] = STATE(326),
    [sym__if_stmt] = STATE(338),
    [sym__if_elif_stmt] = STATE(339),
    [sym__if_elif_else_stmt] = STATE(344),
    [sym__if_else_stmt] = STATE(345),
    [sym_binary_expression] = STATE(105),
    [sym_section] = STATE(326),
    [sym_function_declaration] = STATE(336),
    [sym_var_declaration] = STATE(336),
    [sym_export_statement] = STATE(326),
    [sym_tuple_literal] = STATE(123),
    [sym_list_literal] = STATE(123),
    [sym_dict_literal] = STATE(123),
    [sym_true] = STATE(105),
    [sym_false] = STATE(105),
    [sym_empty_statement] = STATE(326),
    [sym_return_statement] = STATE(326),
    [sym_quoted_string] = STATE(125),
    [sym_multiline_string] = STATE(125),
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
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(94), 1,
      sym__expression,
    STATE(337), 1,
      sym_expression_list,
    STATE(338), 1,
      sym__if_stmt,
    STATE(339), 1,
      sym__if_elif_stmt,
    STATE(344), 1,
      sym__if_elif_else_stmt,
    STATE(345), 1,
      sym__if_else_stmt,
    ACTIONS(11), 2,
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
    STATE(125), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(123), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(420), 5,
      sym__top_level_item,
      sym__declaration,
      sym__statement,
      sym_function_declaration,
      sym_var_declaration,
    STATE(326), 8,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
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
  [134] = 35,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_for,
    ACTIONS(74), 1,
      anon_sym_if,
    ACTIONS(77), 1,
      anon_sym_func,
    ACTIONS(80), 1,
      anon_sym_var,
    ACTIONS(83), 1,
      anon_sym_export,
    ACTIONS(89), 1,
      sym_imaginary_literal,
    ACTIONS(101), 1,
      anon_sym_return,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(113), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(95), 1,
      sym__expression,
    STATE(347), 1,
      sym__if_elif_stmt,
    STATE(348), 1,
      sym__if_stmt,
    STATE(389), 1,
      sym__if_elif_else_stmt,
    STATE(394), 1,
      sym__if_else_stmt,
    STATE(409), 1,
      sym_expression_list,
    ACTIONS(59), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(86), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(95), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(98), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(159), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(160), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(459), 5,
      sym__top_level_item,
      sym__declaration,
      sym__statement,
      sym_function_declaration,
      sym_var_declaration,
    STATE(351), 8,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_empty_statement,
      sym_return_statement,
    STATE(165), 10,
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
  [268] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_SEMI,
    ACTIONS(122), 1,
      anon_sym_LBRACK,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    ACTIONS(130), 1,
      anon_sym_for,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(134), 1,
      anon_sym_export,
    ACTIONS(138), 1,
      sym_imaginary_literal,
    ACTIONS(146), 1,
      anon_sym_return,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(154), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(97), 1,
      sym__expression,
    STATE(309), 1,
      sym__statement,
    STATE(347), 1,
      sym__if_elif_stmt,
    STATE(348), 1,
      sym__if_stmt,
    STATE(354), 1,
      sym_dict_kv,
    STATE(389), 1,
      sym__if_elif_else_stmt,
    STATE(394), 1,
      sym__if_else_stmt,
    STATE(409), 1,
      sym_expression_list,
    STATE(488), 1,
      sym__statement_list,
    ACTIONS(120), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(136), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(140), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(142), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(144), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(159), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(160), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(351), 8,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_empty_statement,
      sym_return_statement,
    STATE(165), 10,
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
  [395] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_SEMI,
    ACTIONS(122), 1,
      anon_sym_LBRACK,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(130), 1,
      anon_sym_for,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(134), 1,
      anon_sym_export,
    ACTIONS(138), 1,
      sym_imaginary_literal,
    ACTIONS(146), 1,
      anon_sym_return,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(154), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym__expression,
    STATE(309), 1,
      sym__statement,
    STATE(347), 1,
      sym__if_elif_stmt,
    STATE(348), 1,
      sym__if_stmt,
    STATE(381), 1,
      sym_dict_kv,
    STATE(389), 1,
      sym__if_elif_else_stmt,
    STATE(394), 1,
      sym__if_else_stmt,
    STATE(409), 1,
      sym_expression_list,
    STATE(497), 1,
      sym__statement_list,
    ACTIONS(120), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(136), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(140), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(142), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(144), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(159), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(160), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(351), 8,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_empty_statement,
      sym_return_statement,
    STATE(165), 10,
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
  [522] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_SEMI,
    ACTIONS(122), 1,
      anon_sym_LBRACK,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(130), 1,
      anon_sym_for,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(134), 1,
      anon_sym_export,
    ACTIONS(138), 1,
      sym_imaginary_literal,
    ACTIONS(146), 1,
      anon_sym_return,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(154), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym__expression,
    STATE(309), 1,
      sym__statement,
    STATE(347), 1,
      sym__if_elif_stmt,
    STATE(348), 1,
      sym__if_stmt,
    STATE(389), 1,
      sym__if_elif_else_stmt,
    STATE(394), 1,
      sym__if_else_stmt,
    STATE(409), 1,
      sym_expression_list,
    STATE(497), 1,
      sym__statement_list,
    ACTIONS(120), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(136), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(140), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(142), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(144), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(159), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(160), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(351), 8,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_empty_statement,
      sym_return_statement,
    STATE(165), 10,
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
  [646] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_SEMI,
    ACTIONS(122), 1,
      anon_sym_LBRACK,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    ACTIONS(130), 1,
      anon_sym_for,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(134), 1,
      anon_sym_export,
    ACTIONS(138), 1,
      sym_imaginary_literal,
    ACTIONS(146), 1,
      anon_sym_return,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(154), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(95), 1,
      sym__expression,
    STATE(309), 1,
      sym__statement,
    STATE(347), 1,
      sym__if_elif_stmt,
    STATE(348), 1,
      sym__if_stmt,
    STATE(389), 1,
      sym__if_elif_else_stmt,
    STATE(394), 1,
      sym__if_else_stmt,
    STATE(409), 1,
      sym_expression_list,
    STATE(488), 1,
      sym__statement_list,
    ACTIONS(120), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(136), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(140), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(142), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(144), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(159), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(160), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(351), 8,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_empty_statement,
      sym_return_statement,
    STATE(165), 10,
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
  [770] = 32,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_SEMI,
    ACTIONS(122), 1,
      anon_sym_LBRACK,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(130), 1,
      anon_sym_for,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(134), 1,
      anon_sym_export,
    ACTIONS(138), 1,
      sym_imaginary_literal,
    ACTIONS(146), 1,
      anon_sym_return,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(154), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym__expression,
    STATE(347), 1,
      sym__if_elif_stmt,
    STATE(348), 1,
      sym__if_stmt,
    STATE(375), 1,
      sym__statement,
    STATE(389), 1,
      sym__if_elif_else_stmt,
    STATE(394), 1,
      sym__if_else_stmt,
    STATE(409), 1,
      sym_expression_list,
    ACTIONS(120), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(136), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(140), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(142), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(144), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(159), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(160), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(351), 8,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_empty_statement,
      sym_return_statement,
    STATE(165), 10,
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
  [891] = 32,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_SEMI,
    ACTIONS(122), 1,
      anon_sym_LBRACK,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(130), 1,
      anon_sym_for,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(134), 1,
      anon_sym_export,
    ACTIONS(138), 1,
      sym_imaginary_literal,
    ACTIONS(146), 1,
      anon_sym_return,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(154), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym__expression,
    STATE(347), 1,
      sym__if_elif_stmt,
    STATE(348), 1,
      sym__if_stmt,
    STATE(375), 1,
      sym__statement,
    STATE(389), 1,
      sym__if_elif_else_stmt,
    STATE(394), 1,
      sym__if_else_stmt,
    STATE(409), 1,
      sym_expression_list,
    ACTIONS(120), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(136), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(140), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(142), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(144), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(159), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(160), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(351), 8,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_empty_statement,
      sym_return_statement,
    STATE(165), 10,
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
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_SEMI,
    ACTIONS(122), 1,
      anon_sym_LBRACK,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(130), 1,
      anon_sym_for,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(134), 1,
      anon_sym_export,
    ACTIONS(138), 1,
      sym_imaginary_literal,
    ACTIONS(146), 1,
      anon_sym_return,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(154), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(95), 1,
      sym__expression,
    STATE(347), 1,
      sym__if_elif_stmt,
    STATE(348), 1,
      sym__if_stmt,
    STATE(375), 1,
      sym__statement,
    STATE(389), 1,
      sym__if_elif_else_stmt,
    STATE(394), 1,
      sym__if_else_stmt,
    STATE(409), 1,
      sym_expression_list,
    ACTIONS(120), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(136), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(140), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(142), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(144), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(159), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(160), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(351), 8,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_section,
      sym_export_statement,
      sym_empty_statement,
      sym_return_statement,
    STATE(165), 10,
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
  [1130] = 20,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(166), 1,
      anon_sym_SEMI,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(180), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(209), 1,
      sym__expression,
    STATE(364), 1,
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
    ACTIONS(168), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(125), 2,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(29), 3,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
    STATE(123), 3,
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
  [1209] = 20,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE,
    ACTIONS(162), 1,
      anon_sym_LF,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(194), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(210), 1,
      sym__expression,
    STATE(328), 1,
      sym_expression_list,
    ACTIONS(140), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(142), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(166), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(184), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(159), 2,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(136), 3,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
    STATE(160), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(165), 10,
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
  [1288] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_RBRACK,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_imaginary_literal,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(225), 1,
      sym__expression,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(208), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(212), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(214), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(78), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(79), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(91), 10,
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
  [1362] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_imaginary_literal,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(224), 1,
      anon_sym_RBRACK,
    STATE(219), 1,
      sym__expression,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(208), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(212), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(214), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(78), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(79), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(91), 10,
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
  [1436] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_imaginary_literal,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(235), 1,
      sym__expression,
    STATE(381), 1,
      sym_dict_kv,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(208), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(212), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(214), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(78), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(79), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(91), 10,
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
  [1510] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_imaginary_literal,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
    STATE(221), 1,
      sym__expression,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(208), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(212), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(214), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(78), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(79), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(91), 10,
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
  [1584] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
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
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    STATE(209), 1,
      sym__expression,
    STATE(377), 1,
      sym_expression_list,
    ACTIONS(11), 2,
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
    STATE(125), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(123), 3,
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
  [1658] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_imaginary_literal,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(235), 1,
      sym__expression,
    STATE(413), 1,
      sym_dict_kv,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(208), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(212), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(214), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(78), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(79), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(91), 10,
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
  [1732] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_imaginary_literal,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    STATE(218), 1,
      sym__expression,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(208), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(212), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(214), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(78), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(79), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(91), 10,
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
  [1806] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_imaginary_literal,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(235), 1,
      sym__expression,
    STATE(427), 1,
      sym_dict_kv,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(208), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(212), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(214), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(78), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(79), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(91), 10,
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
  [1880] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_LBRACK,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      sym_imaginary_literal,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(154), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_LBRACE,
    STATE(210), 1,
      sym__expression,
    STATE(417), 1,
      sym_expression_list,
    ACTIONS(120), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(136), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(140), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(142), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(159), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(160), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(165), 10,
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
  [1954] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_imaginary_literal,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(235), 1,
      sym__expression,
    STATE(354), 1,
      sym_dict_kv,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(208), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(212), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(214), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(78), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(79), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(91), 10,
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
  [2028] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_imaginary_literal,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      sym__expression,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(208), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(212), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(214), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(78), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(79), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(91), 10,
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
  [2102] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_imaginary_literal,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(236), 1,
      anon_sym_RBRACK,
    STATE(224), 1,
      sym__expression,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(208), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(212), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(214), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(78), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(79), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(91), 10,
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
  [2176] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_imaginary_literal,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(75), 1,
      sym__expression,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(208), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(212), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(214), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(78), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(79), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(91), 10,
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
  [2247] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_imaginary_literal,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(227), 1,
      sym__expression,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(208), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(212), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(214), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(78), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(79), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(91), 10,
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
  [2318] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_imaginary_literal,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(232), 1,
      sym__expression,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(208), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(212), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(214), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(78), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(79), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(91), 10,
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
  [2389] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_imaginary_literal,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(220), 1,
      sym__expression,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(208), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(212), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(214), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(78), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(79), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(91), 10,
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
  [2460] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_imaginary_literal,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(191), 1,
      sym__expression,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(208), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(212), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(214), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(78), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(79), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(91), 10,
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
  [2531] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
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
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    STATE(212), 1,
      sym__expression,
    ACTIONS(11), 2,
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
    STATE(125), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(123), 3,
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
  [2602] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_imaginary_literal,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(233), 1,
      sym__expression,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(208), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(212), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(214), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(78), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(79), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(91), 10,
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
  [2673] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_imaginary_literal,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(236), 1,
      sym__expression,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(208), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(212), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(214), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(78), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(79), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(91), 10,
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
  [2744] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
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
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    STATE(107), 1,
      sym__expression,
    ACTIONS(11), 2,
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
    STATE(125), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(123), 3,
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
  [2815] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_LBRACK,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      sym_imaginary_literal,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(154), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_LBRACE,
    STATE(135), 1,
      sym__expression,
    ACTIONS(120), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(136), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(140), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(142), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(159), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(160), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(165), 10,
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
  [2886] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_imaginary_literal,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(72), 1,
      sym__expression,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(208), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(212), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(214), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(78), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(79), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(91), 10,
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
  [2957] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_imaginary_literal,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(66), 1,
      sym__expression,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(208), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(212), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(214), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(78), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(79), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(91), 10,
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
  [3028] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_imaginary_literal,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(237), 1,
      sym__expression,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(208), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(212), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(214), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(78), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(79), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(91), 10,
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
  [3099] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_imaginary_literal,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(69), 1,
      sym__expression,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(208), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(212), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(214), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(78), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(79), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(91), 10,
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
  [3170] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_imaginary_literal,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(231), 1,
      sym__expression,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(208), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(212), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(214), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(78), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(79), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(91), 10,
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
  [3241] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_LBRACK,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      sym_imaginary_literal,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(154), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_LBRACE,
    STATE(126), 1,
      sym__expression,
    ACTIONS(120), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(136), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(140), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(142), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(159), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(160), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(165), 10,
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
  [3312] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_LBRACK,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      sym_imaginary_literal,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(154), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_LBRACE,
    STATE(124), 1,
      sym__expression,
    ACTIONS(120), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(136), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(140), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(142), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(159), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(160), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(165), 10,
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
  [3383] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_imaginary_literal,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(234), 1,
      sym__expression,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(208), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(212), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(214), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(78), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(79), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(91), 10,
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
  [3454] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_LBRACK,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      sym_imaginary_literal,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(154), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_LBRACE,
    STATE(122), 1,
      sym__expression,
    ACTIONS(120), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(136), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(140), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(142), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(159), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(160), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(165), 10,
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
  [3525] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_imaginary_literal,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(65), 1,
      sym__expression,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(208), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(212), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(214), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(78), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(79), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(91), 10,
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
  [3596] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_LBRACK,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      sym_imaginary_literal,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(154), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_LBRACE,
    STATE(217), 1,
      sym__expression,
    ACTIONS(120), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(136), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(140), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(142), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(159), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(160), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(165), 10,
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
  [3667] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_imaginary_literal,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(222), 1,
      sym__expression,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(208), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(212), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(214), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(78), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(79), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(91), 10,
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
  [3738] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_LBRACK,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      sym_imaginary_literal,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(154), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_LBRACE,
    STATE(121), 1,
      sym__expression,
    ACTIONS(120), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(136), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(140), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(142), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(159), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(160), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(165), 10,
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
  [3809] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_imaginary_literal,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(229), 1,
      sym__expression,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(208), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(212), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(214), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(78), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(79), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(91), 10,
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
  [3880] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_imaginary_literal,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(230), 1,
      sym__expression,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(208), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(212), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(214), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(78), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(79), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(91), 10,
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
  [3951] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
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
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    STATE(115), 1,
      sym__expression,
    ACTIONS(11), 2,
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
    STATE(125), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(123), 3,
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
  [4022] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_imaginary_literal,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(228), 1,
      sym__expression,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(208), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(212), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(214), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(78), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(79), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(91), 10,
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
  [4093] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
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
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      sym__expression,
    ACTIONS(11), 2,
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
    STATE(125), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(123), 3,
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
  [4164] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
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
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    STATE(113), 1,
      sym__expression,
    ACTIONS(11), 2,
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
    STATE(125), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(123), 3,
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
  [4235] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
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
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    STATE(112), 1,
      sym__expression,
    ACTIONS(11), 2,
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
    STATE(125), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(123), 3,
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
  [4306] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_imaginary_literal,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(73), 1,
      sym__expression,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(208), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(212), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(214), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(78), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(79), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(91), 10,
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
  [4377] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_LBRACK,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      sym_imaginary_literal,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(154), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_LBRACE,
    STATE(153), 1,
      sym__expression,
    ACTIONS(120), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(136), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(140), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(142), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(159), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(160), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(165), 10,
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
  [4448] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_imaginary_literal,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(223), 1,
      sym__expression,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(208), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(212), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(214), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(78), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(79), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(91), 10,
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
  [4519] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
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
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    STATE(127), 1,
      sym__expression,
    ACTIONS(11), 2,
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
    STATE(125), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(123), 3,
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
  [4590] = 8,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym_identifier,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    STATE(145), 1,
      sym_argument_list,
    STATE(410), 1,
      sym_block,
    ACTIONS(238), 2,
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
  [4637] = 8,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LF,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_LBRACE,
    STATE(147), 1,
      sym_argument_list,
    STATE(335), 1,
      sym_block,
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
  [4684] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym_argument_list,
    ACTIONS(242), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(238), 21,
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
  [4724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 10,
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
    ACTIONS(256), 17,
      anon_sym_for,
      anon_sym_if,
      anon_sym_func,
      anon_sym_var,
      anon_sym_export,
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
  [4759] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(258), 21,
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
  [4793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(262), 21,
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
  [4827] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_SLASH,
    ACTIONS(266), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(274), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(280), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(272), 11,
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
  [4875] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_SLASH,
    ACTIONS(266), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(274), 4,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(272), 15,
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
  [4919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(284), 21,
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
  [4953] = 3,
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
  [4987] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(274), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(272), 19,
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
  [5025] = 3,
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
  [5059] = 3,
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
  [5093] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_SLASH,
    ACTIONS(266), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(274), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(300), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(280), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(272), 9,
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
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_SLASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(274), 4,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(272), 17,
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
    ACTIONS(304), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(302), 21,
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
  [5219] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(308), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(306), 19,
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
  [5257] = 3,
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
  [5291] = 3,
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
  [5325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(318), 21,
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
  [5359] = 3,
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
  [5393] = 3,
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
  [5427] = 3,
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
  [5461] = 3,
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
  [5495] = 3,
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
  [5529] = 3,
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
  [5563] = 3,
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
  [5597] = 3,
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
  [5631] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LF,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    STATE(147), 1,
      sym_argument_list,
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
  [5669] = 3,
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
  [5703] = 3,
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
  [5737] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    STATE(145), 1,
      sym_argument_list,
    ACTIONS(238), 2,
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
  [5775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(238), 21,
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
  [5809] = 3,
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
  [5843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(366), 21,
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
  [5877] = 13,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_SEMI,
    ACTIONS(376), 1,
      anon_sym_DOT,
    ACTIONS(378), 1,
      anon_sym_LBRACK,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(370), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(374), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(388), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(390), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(382), 3,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
    ACTIONS(384), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(386), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [5930] = 13,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LF,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    ACTIONS(394), 1,
      anon_sym_DOT,
    ACTIONS(396), 1,
      anon_sym_LBRACK,
    STATE(250), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(372), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(402), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(404), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(382), 3,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
    ACTIONS(398), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(400), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [5983] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_RBRACK,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(424), 1,
      anon_sym_func,
    STATE(100), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [6036] = 14,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LF,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    ACTIONS(394), 1,
      anon_sym_DOT,
    ACTIONS(396), 1,
      anon_sym_LBRACK,
    ACTIONS(426), 1,
      anon_sym_COLON,
    STATE(250), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(372), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(382), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(402), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(404), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(398), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(400), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6091] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_LBRACK,
    ACTIONS(433), 1,
      anon_sym_Date,
    ACTIONS(431), 23,
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
  [6126] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(424), 1,
      anon_sym_func,
    ACTIONS(435), 1,
      anon_sym_RBRACK,
    STATE(100), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [6179] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_RBRACK,
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_Date,
    ACTIONS(448), 1,
      anon_sym_BQUOTE,
    ACTIONS(451), 1,
      anon_sym_typespec,
    ACTIONS(454), 1,
      anon_sym_tuple,
    ACTIONS(457), 1,
      anon_sym_list,
    ACTIONS(460), 1,
      anon_sym_dict,
    ACTIONS(463), 1,
      anon_sym_func,
    STATE(100), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(442), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [6232] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(424), 1,
      anon_sym_func,
    ACTIONS(466), 1,
      anon_sym_RBRACK,
    STATE(100), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [6285] = 3,
    ACTIONS(176), 1,
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
  [6317] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_LF,
    ACTIONS(264), 23,
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
  [6349] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(258), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(260), 22,
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
  [6381] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(238), 2,
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
  [6413] = 3,
    ACTIONS(176), 1,
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
  [6445] = 6,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_DOT,
    ACTIONS(378), 1,
      anon_sym_LBRACK,
    ACTIONS(272), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(384), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(274), 17,
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
  [6483] = 3,
    ACTIONS(176), 1,
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
  [6515] = 3,
    ACTIONS(176), 1,
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
  [6547] = 3,
    ACTIONS(176), 1,
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
  [6579] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(366), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(368), 22,
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
  [6611] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_DOT,
    ACTIONS(378), 1,
      anon_sym_LBRACK,
    ACTIONS(272), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(274), 20,
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
  [6647] = 7,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_DOT,
    ACTIONS(378), 1,
      anon_sym_LBRACK,
    ACTIONS(272), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(374), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(384), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(274), 15,
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
  [6687] = 8,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_DOT,
    ACTIONS(378), 1,
      anon_sym_LBRACK,
    ACTIONS(272), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(374), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(384), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(386), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(274), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6729] = 9,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_DOT,
    ACTIONS(378), 1,
      anon_sym_LBRACK,
    ACTIONS(272), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(374), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(388), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(384), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(386), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(274), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6773] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(424), 1,
      anon_sym_func,
    STATE(99), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [6823] = 3,
    ACTIONS(176), 1,
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
  [6855] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LF,
    ACTIONS(304), 23,
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
  [6887] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(302), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(304), 22,
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
  [6919] = 3,
    ACTIONS(176), 1,
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
  [6951] = 9,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LF,
    ACTIONS(394), 1,
      anon_sym_DOT,
    ACTIONS(396), 1,
      anon_sym_LBRACK,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(402), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(398), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(400), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(274), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6995] = 8,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LF,
    ACTIONS(394), 1,
      anon_sym_DOT,
    ACTIONS(396), 1,
      anon_sym_LBRACK,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(398), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(400), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(274), 10,
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
  [7037] = 3,
    ACTIONS(176), 1,
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
  [7069] = 7,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LF,
    ACTIONS(394), 1,
      anon_sym_DOT,
    ACTIONS(396), 1,
      anon_sym_LBRACK,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(398), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(274), 16,
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
  [7109] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(318), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(320), 22,
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
  [7141] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LF,
    ACTIONS(394), 1,
      anon_sym_DOT,
    ACTIONS(396), 1,
      anon_sym_LBRACK,
    ACTIONS(274), 21,
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
  [7177] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_DOT,
    ACTIONS(378), 1,
      anon_sym_LBRACK,
    ACTIONS(306), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(308), 20,
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
  [7213] = 3,
    ACTIONS(176), 1,
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
  [7245] = 3,
    ACTIONS(176), 1,
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
  [7277] = 3,
    ACTIONS(176), 1,
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
  [7309] = 3,
    ACTIONS(176), 1,
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
  [7341] = 3,
    ACTIONS(176), 1,
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
  [7373] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(424), 1,
      anon_sym_func,
    STATE(101), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [7423] = 3,
    ACTIONS(176), 1,
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
  [7455] = 6,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LF,
    ACTIONS(394), 1,
      anon_sym_DOT,
    ACTIONS(396), 1,
      anon_sym_LBRACK,
    ACTIONS(398), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(274), 18,
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
  [7493] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LF,
    ACTIONS(260), 23,
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
  [7525] = 3,
    ACTIONS(176), 1,
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
  [7557] = 3,
    ACTIONS(176), 1,
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
  [7589] = 3,
    ACTIONS(176), 1,
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
  [7621] = 3,
    ACTIONS(176), 1,
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
  [7653] = 3,
    ACTIONS(176), 1,
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
  [7685] = 3,
    ACTIONS(176), 1,
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
  [7717] = 3,
    ACTIONS(176), 1,
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
  [7749] = 3,
    ACTIONS(176), 1,
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
  [7781] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(284), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(286), 22,
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
  [7813] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(424), 1,
      anon_sym_func,
    STATE(96), 2,
      sym_type_spec_r,
      aux_sym_base_type_spec_repeat1,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [7863] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LF,
    ACTIONS(286), 23,
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
  [7895] = 3,
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
  [7927] = 3,
    ACTIONS(176), 1,
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
  [7959] = 3,
    ACTIONS(176), 1,
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
  [7991] = 3,
    ACTIONS(176), 1,
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
  [8023] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(262), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(264), 22,
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
  [8055] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LF,
    ACTIONS(394), 1,
      anon_sym_DOT,
    ACTIONS(396), 1,
      anon_sym_LBRACK,
    ACTIONS(308), 21,
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
  [8091] = 3,
    ACTIONS(176), 1,
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
  [8123] = 3,
    ACTIONS(176), 1,
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
  [8155] = 3,
    ACTIONS(176), 1,
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
  [8187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_Date,
    ACTIONS(431), 23,
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
  [8219] = 3,
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
  [8251] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(320), 23,
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
  [8283] = 3,
    ACTIONS(176), 1,
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
  [8315] = 3,
    ACTIONS(176), 1,
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
  [8347] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_LF,
    ACTIONS(368), 23,
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
  [8379] = 3,
    ACTIONS(176), 1,
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
  [8411] = 3,
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
  [8443] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(238), 1,
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
  [8475] = 3,
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
  [8507] = 3,
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
  [8539] = 3,
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
  [8571] = 3,
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
  [8603] = 3,
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
  [8635] = 3,
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
  [8667] = 3,
    ACTIONS(176), 1,
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
  [8699] = 3,
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
  [8731] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(424), 1,
      anon_sym_func,
    STATE(298), 1,
      sym_type_spec_r,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [8780] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(424), 1,
      anon_sym_func,
    STATE(520), 1,
      sym_type_spec_r,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [8829] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(424), 1,
      anon_sym_func,
    STATE(170), 1,
      sym_type_spec_r,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
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
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(424), 1,
      anon_sym_func,
    STATE(496), 1,
      sym_type_spec_r,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [8927] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(424), 1,
      anon_sym_func,
    STATE(523), 1,
      sym_type_spec_r,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [8976] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(424), 1,
      anon_sym_func,
    STATE(519), 1,
      sym_type_spec_r,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9025] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(424), 1,
      anon_sym_func,
    STATE(521), 1,
      sym_type_spec_r,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9074] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(424), 1,
      anon_sym_func,
    STATE(173), 1,
      sym_type_spec_r,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9123] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(424), 1,
      anon_sym_func,
    STATE(169), 1,
      sym_type_spec_r,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9172] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(424), 1,
      anon_sym_func,
    STATE(167), 1,
      sym_type_spec_r,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9221] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_LPAREN,
    ACTIONS(512), 1,
      anon_sym_Date,
    ACTIONS(514), 1,
      anon_sym_BQUOTE,
    ACTIONS(516), 1,
      anon_sym_typespec,
    ACTIONS(518), 1,
      anon_sym_tuple,
    ACTIONS(520), 1,
      anon_sym_list,
    ACTIONS(522), 1,
      anon_sym_dict,
    ACTIONS(524), 1,
      anon_sym_func,
    STATE(296), 1,
      sym_type_spec_r,
    STATE(304), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(510), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9270] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(424), 1,
      anon_sym_func,
    STATE(502), 1,
      sym_type_spec_r,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9319] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(424), 1,
      anon_sym_func,
    STATE(518), 1,
      sym_type_spec_r,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9368] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(424), 1,
      anon_sym_func,
    STATE(512), 1,
      sym_type_spec_r,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9417] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(424), 1,
      anon_sym_func,
    STATE(511), 1,
      sym_type_spec_r,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9466] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(424), 1,
      anon_sym_func,
    STATE(506), 1,
      sym_type_spec_r,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9515] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_LPAREN,
    ACTIONS(512), 1,
      anon_sym_Date,
    ACTIONS(514), 1,
      anon_sym_BQUOTE,
    ACTIONS(516), 1,
      anon_sym_typespec,
    ACTIONS(518), 1,
      anon_sym_tuple,
    ACTIONS(520), 1,
      anon_sym_list,
    ACTIONS(522), 1,
      anon_sym_dict,
    ACTIONS(524), 1,
      anon_sym_func,
    STATE(293), 1,
      sym_type_spec_r,
    STATE(304), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(510), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9564] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_SLASH,
    ACTIONS(266), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(300), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(528), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(530), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(280), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(526), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
  [9613] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_LPAREN,
    ACTIONS(512), 1,
      anon_sym_Date,
    ACTIONS(514), 1,
      anon_sym_BQUOTE,
    ACTIONS(516), 1,
      anon_sym_typespec,
    ACTIONS(518), 1,
      anon_sym_tuple,
    ACTIONS(520), 1,
      anon_sym_list,
    ACTIONS(522), 1,
      anon_sym_dict,
    ACTIONS(524), 1,
      anon_sym_func,
    STATE(291), 1,
      sym_type_spec_r,
    STATE(304), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(510), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9662] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(424), 1,
      anon_sym_func,
    STATE(468), 1,
      sym_type_spec_r,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9711] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(424), 1,
      anon_sym_func,
    STATE(505), 1,
      sym_type_spec_r,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9760] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(424), 1,
      anon_sym_func,
    STATE(312), 1,
      sym_type_spec_r,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9809] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(424), 1,
      anon_sym_func,
    STATE(495), 1,
      sym_type_spec_r,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9858] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(424), 1,
      anon_sym_func,
    STATE(494), 1,
      sym_type_spec_r,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9907] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    ACTIONS(536), 1,
      anon_sym_Date,
    ACTIONS(538), 1,
      anon_sym_BQUOTE,
    ACTIONS(540), 1,
      anon_sym_typespec,
    ACTIONS(542), 1,
      anon_sym_tuple,
    ACTIONS(544), 1,
      anon_sym_list,
    ACTIONS(546), 1,
      anon_sym_dict,
    ACTIONS(548), 1,
      anon_sym_func,
    STATE(393), 1,
      sym_type_spec_r,
    STATE(387), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(534), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [9956] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    ACTIONS(536), 1,
      anon_sym_Date,
    ACTIONS(538), 1,
      anon_sym_BQUOTE,
    ACTIONS(540), 1,
      anon_sym_typespec,
    ACTIONS(542), 1,
      anon_sym_tuple,
    ACTIONS(544), 1,
      anon_sym_list,
    ACTIONS(546), 1,
      anon_sym_dict,
    ACTIONS(548), 1,
      anon_sym_func,
    STATE(399), 1,
      sym_type_spec_r,
    STATE(387), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(534), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [10005] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(424), 1,
      anon_sym_func,
    STATE(501), 1,
      sym_type_spec_r,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [10054] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(424), 1,
      anon_sym_func,
    STATE(303), 1,
      sym_type_spec_r,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [10103] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(424), 1,
      anon_sym_func,
    STATE(473), 1,
      sym_type_spec_r,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [10152] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_LPAREN,
    ACTIONS(512), 1,
      anon_sym_Date,
    ACTIONS(514), 1,
      anon_sym_BQUOTE,
    ACTIONS(516), 1,
      anon_sym_typespec,
    ACTIONS(518), 1,
      anon_sym_tuple,
    ACTIONS(520), 1,
      anon_sym_list,
    ACTIONS(522), 1,
      anon_sym_dict,
    ACTIONS(524), 1,
      anon_sym_func,
    STATE(277), 1,
      sym_type_spec_r,
    STATE(304), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(510), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [10201] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(424), 1,
      anon_sym_func,
    STATE(416), 1,
      sym_type_spec_r,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [10250] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(424), 1,
      anon_sym_func,
    STATE(487), 1,
      sym_type_spec_r,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [10299] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    ACTIONS(536), 1,
      anon_sym_Date,
    ACTIONS(538), 1,
      anon_sym_BQUOTE,
    ACTIONS(540), 1,
      anon_sym_typespec,
    ACTIONS(542), 1,
      anon_sym_tuple,
    ACTIONS(544), 1,
      anon_sym_list,
    ACTIONS(546), 1,
      anon_sym_dict,
    ACTIONS(548), 1,
      anon_sym_func,
    STATE(396), 1,
      sym_type_spec_r,
    STATE(387), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(534), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [10348] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(424), 1,
      anon_sym_func,
    STATE(477), 1,
      sym_type_spec_r,
    STATE(158), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [10397] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    ACTIONS(536), 1,
      anon_sym_Date,
    ACTIONS(538), 1,
      anon_sym_BQUOTE,
    ACTIONS(540), 1,
      anon_sym_typespec,
    ACTIONS(542), 1,
      anon_sym_tuple,
    ACTIONS(544), 1,
      anon_sym_list,
    ACTIONS(546), 1,
      anon_sym_dict,
    ACTIONS(548), 1,
      anon_sym_func,
    STATE(397), 1,
      sym_type_spec_r,
    STATE(387), 2,
      sym_base_type_spec,
      sym_func_spec,
    ACTIONS(534), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [10446] = 12,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_DOT,
    ACTIONS(378), 1,
      anon_sym_LBRACK,
    ACTIONS(382), 1,
      anon_sym_SEMI,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    STATE(262), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(374), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(388), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(390), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(550), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(384), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(386), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10494] = 12,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOT,
    ACTIONS(396), 1,
      anon_sym_LBRACK,
    ACTIONS(550), 1,
      anon_sym_LF,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    STATE(258), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(382), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(402), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(404), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(398), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(400), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10542] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_Date,
    ACTIONS(538), 1,
      anon_sym_BQUOTE,
    ACTIONS(540), 1,
      anon_sym_typespec,
    ACTIONS(542), 1,
      anon_sym_tuple,
    ACTIONS(544), 1,
      anon_sym_list,
    ACTIONS(546), 1,
      anon_sym_dict,
    ACTIONS(556), 1,
      anon_sym_func,
    STATE(325), 1,
      sym_type_spec,
    STATE(380), 1,
      sym_base_type_spec,
    ACTIONS(534), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [10587] = 10,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_DOT,
    ACTIONS(378), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(388), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(390), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(526), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(528), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(384), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(386), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10630] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_Date,
    ACTIONS(514), 1,
      anon_sym_BQUOTE,
    ACTIONS(516), 1,
      anon_sym_typespec,
    ACTIONS(518), 1,
      anon_sym_tuple,
    ACTIONS(520), 1,
      anon_sym_list,
    ACTIONS(522), 1,
      anon_sym_dict,
    ACTIONS(558), 1,
      anon_sym_func,
    STATE(315), 1,
      sym_type_spec,
    STATE(322), 1,
      sym_base_type_spec,
    ACTIONS(510), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [10675] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_Date,
    ACTIONS(514), 1,
      anon_sym_BQUOTE,
    ACTIONS(516), 1,
      anon_sym_typespec,
    ACTIONS(518), 1,
      anon_sym_tuple,
    ACTIONS(520), 1,
      anon_sym_list,
    ACTIONS(522), 1,
      anon_sym_dict,
    ACTIONS(558), 1,
      anon_sym_func,
    STATE(320), 1,
      sym_type_spec,
    STATE(322), 1,
      sym_base_type_spec,
    ACTIONS(510), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [10720] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_Date,
    ACTIONS(538), 1,
      anon_sym_BQUOTE,
    ACTIONS(540), 1,
      anon_sym_typespec,
    ACTIONS(542), 1,
      anon_sym_tuple,
    ACTIONS(544), 1,
      anon_sym_list,
    ACTIONS(546), 1,
      anon_sym_dict,
    ACTIONS(556), 1,
      anon_sym_func,
    STATE(340), 1,
      sym_type_spec,
    STATE(380), 1,
      sym_base_type_spec,
    ACTIONS(534), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [10765] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_Date,
    ACTIONS(414), 1,
      anon_sym_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_typespec,
    ACTIONS(418), 1,
      anon_sym_tuple,
    ACTIONS(420), 1,
      anon_sym_list,
    ACTIONS(422), 1,
      anon_sym_dict,
    ACTIONS(560), 1,
      anon_sym_func,
    STATE(445), 1,
      sym_type_spec,
    STATE(460), 1,
      sym_base_type_spec,
    ACTIONS(410), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_char,
      anon_sym_string,
      anon_sym_float,
      anon_sym_Duration,
      anon_sym_IpAddr,
      anon_sym_CIDR,
      anon_sym_Size,
      anon_sym_Time,
      anon_sym_DateType,
  [10810] = 10,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOT,
    ACTIONS(396), 1,
      anon_sym_LBRACK,
    ACTIONS(526), 1,
      anon_sym_LF,
    ACTIONS(392), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(402), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(404), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(398), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(528), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(400), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10853] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_SLASH,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    STATE(414), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(266), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(300), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(530), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(280), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10901] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_SLASH,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(566), 1,
      anon_sym_RBRACK,
    STATE(369), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(266), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(300), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(530), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(280), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10949] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_SLASH,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(266), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(300), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(530), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(280), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10997] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_SLASH,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    STATE(363), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(266), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(300), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(530), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(280), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11045] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_SLASH,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
    STATE(424), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(266), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(300), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(530), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(280), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11093] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_SLASH,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
    STATE(422), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(266), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(300), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(530), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(280), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11141] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_SLASH,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(576), 1,
      anon_sym_RBRACK,
    STATE(423), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(266), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(300), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(530), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(280), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11189] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_SLASH,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(578), 1,
      anon_sym_RBRACK,
    STATE(374), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(266), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(300), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(530), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(280), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11237] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_SLASH,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    STATE(359), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(266), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(300), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(530), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(280), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11285] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_SLASH,
    ACTIONS(582), 1,
      anon_sym_LBRACE,
    STATE(238), 1,
      sym_block,
    ACTIONS(266), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(300), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(530), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(280), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11330] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_SLASH,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
    STATE(241), 1,
      sym_block,
    ACTIONS(266), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(300), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(530), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(280), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11375] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_SLASH,
    ACTIONS(582), 1,
      anon_sym_LBRACE,
    STATE(251), 1,
      sym_block,
    ACTIONS(266), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(300), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(530), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(280), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11420] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_SLASH,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
    STATE(255), 1,
      sym_block,
    ACTIONS(266), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(300), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(530), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(280), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11465] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_SLASH,
    ACTIONS(266), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(300), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(530), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(586), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(280), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11508] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_SLASH,
    ACTIONS(588), 1,
      anon_sym_RBRACK,
    ACTIONS(266), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(300), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(530), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(280), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11550] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_SLASH,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(300), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(530), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(280), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11592] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_SLASH,
    ACTIONS(592), 1,
      anon_sym_RBRACK,
    ACTIONS(266), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(300), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(530), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(280), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11634] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_SLASH,
    ACTIONS(594), 1,
      anon_sym_COLON,
    ACTIONS(266), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(300), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(530), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(280), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11676] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_SLASH,
    ACTIONS(596), 1,
      anon_sym_RBRACK,
    ACTIONS(266), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(300), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(530), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(280), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11718] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_SLASH,
    ACTIONS(598), 1,
      anon_sym_to,
    ACTIONS(266), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(300), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(530), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(280), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11760] = 9,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_LF,
    ACTIONS(604), 1,
      anon_sym_elif,
    ACTIONS(606), 1,
      anon_sym_else,
    STATE(240), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(245), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(265), 1,
      sym_elif_clause,
    STATE(395), 1,
      sym_else_clause,
    ACTIONS(602), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11789] = 10,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(608), 1,
      ts_builtin_sym_end,
    ACTIONS(610), 1,
      anon_sym_LF,
    ACTIONS(612), 1,
      anon_sym_SEMI,
    ACTIONS(614), 1,
      anon_sym_elif,
    ACTIONS(616), 1,
      anon_sym_else,
    STATE(247), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(249), 1,
      sym_elif_clause,
    STATE(301), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(356), 1,
      sym_else_clause,
  [11820] = 9,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_elif,
    ACTIONS(606), 1,
      anon_sym_else,
    ACTIONS(618), 1,
      anon_sym_LF,
    STATE(248), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(265), 1,
      sym_elif_clause,
    STATE(313), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(334), 1,
      sym_else_clause,
    ACTIONS(612), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11849] = 10,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_SEMI,
    ACTIONS(614), 1,
      anon_sym_elif,
    ACTIONS(616), 1,
      anon_sym_else,
    ACTIONS(620), 1,
      ts_builtin_sym_end,
    ACTIONS(622), 1,
      anon_sym_LF,
    STATE(239), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(244), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(249), 1,
      sym_elif_clause,
    STATE(370), 1,
      sym_else_clause,
  [11880] = 10,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_elif,
    ACTIONS(616), 1,
      anon_sym_else,
    ACTIONS(624), 1,
      ts_builtin_sym_end,
    ACTIONS(626), 1,
      anon_sym_LF,
    ACTIONS(628), 1,
      anon_sym_SEMI,
    STATE(247), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(249), 1,
      sym_elif_clause,
    STATE(311), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(350), 1,
      sym_else_clause,
  [11911] = 9,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_elif,
    ACTIONS(606), 1,
      anon_sym_else,
    ACTIONS(630), 1,
      anon_sym_LF,
    STATE(248), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(265), 1,
      sym_elif_clause,
    STATE(292), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(342), 1,
      sym_else_clause,
    ACTIONS(628), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [11940] = 8,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_elif,
    ACTIONS(616), 1,
      anon_sym_else,
    ACTIONS(632), 1,
      anon_sym_LF,
    STATE(242), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(249), 1,
      sym_elif_clause,
    STATE(306), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(357), 1,
      sym_else_clause,
  [11965] = 8,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_elif,
    ACTIONS(606), 1,
      anon_sym_else,
    ACTIONS(632), 1,
      anon_sym_LF,
    STATE(243), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(265), 1,
      sym_elif_clause,
    STATE(306), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(332), 1,
      sym_else_clause,
  [11990] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_COLON,
    ACTIONS(634), 1,
      anon_sym_COMMA,
    STATE(246), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(526), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [12009] = 6,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_elif,
    STATE(247), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(249), 1,
      sym_elif_clause,
    ACTIONS(637), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(639), 2,
      anon_sym_SEMI,
      anon_sym_else,
  [12030] = 6,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_LF,
    ACTIONS(644), 1,
      anon_sym_elif,
    STATE(248), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(265), 1,
      sym_elif_clause,
    ACTIONS(639), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_else,
  [12051] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(647), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(649), 3,
      anon_sym_SEMI,
      anon_sym_elif,
      anon_sym_else,
  [12064] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(651), 1,
      anon_sym_COLON,
    STATE(246), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(653), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [12081] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_LF,
    ACTIONS(657), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
  [12094] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_LF,
    ACTIONS(661), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
  [12107] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_LBRACK,
    ACTIONS(431), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(433), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12122] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_LF,
    ACTIONS(669), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym_enum_statement_repeat1,
    ACTIONS(667), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12139] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(655), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(657), 3,
      anon_sym_SEMI,
      anon_sym_elif,
      anon_sym_else,
  [12152] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_SEMI,
    ACTIONS(675), 1,
      anon_sym_COMMA,
    STATE(256), 1,
      aux_sym_var_declaration_repeat1,
    ACTIONS(671), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12169] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_LF,
    ACTIONS(678), 1,
      anon_sym_COMMA,
    STATE(257), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(528), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12186] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(653), 1,
      anon_sym_LF,
    STATE(257), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(651), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12203] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(659), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(661), 3,
      anon_sym_SEMI,
      anon_sym_elif,
      anon_sym_else,
  [12216] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_SEMI,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      aux_sym_enum_statement_repeat1,
    ACTIONS(681), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12233] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_LF,
    ACTIONS(688), 1,
      anon_sym_COMMA,
    STATE(261), 1,
      aux_sym_enum_statement_repeat1,
    ACTIONS(683), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12250] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    ACTIONS(651), 1,
      anon_sym_SEMI,
    STATE(270), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(653), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12267] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_SEMI,
    ACTIONS(695), 1,
      anon_sym_COMMA,
    STATE(268), 1,
      aux_sym_var_declaration_repeat1,
    ACTIONS(691), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12284] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_SEMI,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      aux_sym_enum_statement_repeat1,
    ACTIONS(697), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12301] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_LF,
    ACTIONS(649), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
  [12314] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_LF,
    ACTIONS(705), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
  [12327] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_SEMI,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    STATE(264), 1,
      aux_sym_enum_statement_repeat1,
    ACTIONS(665), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12344] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_COMMA,
    ACTIONS(709), 1,
      anon_sym_SEMI,
    STATE(256), 1,
      aux_sym_var_declaration_repeat1,
    ACTIONS(707), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12361] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(703), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(705), 3,
      anon_sym_SEMI,
      anon_sym_elif,
      anon_sym_else,
  [12374] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_SEMI,
    ACTIONS(711), 1,
      anon_sym_COMMA,
    STATE(270), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(526), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [12391] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_COMMA,
    ACTIONS(697), 1,
      anon_sym_LF,
    STATE(261), 1,
      aux_sym_enum_statement_repeat1,
    ACTIONS(699), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12408] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_DQUOTE,
    ACTIONS(716), 1,
      sym_escape_sequence,
    ACTIONS(718), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(294), 1,
      aux_sym__quoted_string_content_double,
  [12424] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(681), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(683), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12436] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_SQUOTE,
    STATE(295), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(722), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [12450] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(716), 1,
      sym_escape_sequence,
    ACTIONS(718), 1,
      aux_sym__quoted_string_content_double_token1,
    ACTIONS(720), 1,
      anon_sym_DQUOTE,
    STATE(294), 1,
      aux_sym__quoted_string_content_double,
  [12466] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_SQUOTE,
    STATE(295), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(722), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [12480] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(504), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(506), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12492] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_SQUOTE,
    STATE(274), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(726), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [12506] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(500), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(502), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12518] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    STATE(280), 1,
      aux_sym_func_spec_repeat1,
    ACTIONS(728), 2,
      anon_sym_RPAREN,
      anon_sym_STAR,
  [12532] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    ACTIONS(733), 1,
      sym_escape_sequence,
    ACTIONS(735), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(275), 1,
      aux_sym__quoted_string_content_double,
  [12548] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_LF,
    ACTIONS(739), 1,
      anon_sym_SEMI,
    ACTIONS(741), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      aux_sym__statement_list_repeat1,
  [12564] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_SQUOTE,
    STATE(295), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(722), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [12578] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(488), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(490), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12590] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_RPAREN,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(749), 1,
      anon_sym_STAR,
    STATE(280), 1,
      aux_sym_func_spec_repeat1,
  [12606] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(716), 1,
      sym_escape_sequence,
    ACTIONS(718), 1,
      aux_sym__quoted_string_content_double_token1,
    ACTIONS(743), 1,
      anon_sym_DQUOTE,
    STATE(294), 1,
      aux_sym__quoted_string_content_double,
  [12622] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_DQUOTE,
    ACTIONS(753), 1,
      sym_escape_sequence,
    ACTIONS(755), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(272), 1,
      aux_sym__quoted_string_content_double,
  [12638] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(480), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(482), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12650] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_SQUOTE,
    STATE(283), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(759), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [12664] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_DQUOTE,
    ACTIONS(761), 1,
      sym_escape_sequence,
    ACTIONS(763), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(286), 1,
      aux_sym__quoted_string_content_double,
  [12680] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(496), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(498), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12692] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_else,
    ACTIONS(632), 1,
      anon_sym_LF,
    STATE(306), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(346), 1,
      sym_else_clause,
  [12708] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(492), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(494), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12720] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_DQUOTE,
    ACTIONS(767), 1,
      sym_escape_sequence,
    ACTIONS(770), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(294), 1,
      aux_sym__quoted_string_content_double,
  [12736] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_SQUOTE,
    STATE(295), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(775), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [12750] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(484), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(486), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12762] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_LF,
    ACTIONS(709), 1,
      anon_sym_SEMI,
    ACTIONS(778), 1,
      anon_sym_COMMA,
    STATE(305), 1,
      aux_sym_var_declaration_repeat1,
  [12778] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(780), 1,
      anon_sym_RPAREN,
    ACTIONS(782), 1,
      anon_sym_STAR,
    STATE(285), 1,
      aux_sym_func_spec_repeat1,
  [12794] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_LF,
    ACTIONS(784), 1,
      anon_sym_LBRACK,
    ACTIONS(433), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12808] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_LF,
    ACTIONS(683), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [12820] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_else,
    ACTIONS(632), 1,
      anon_sym_LF,
    STATE(306), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(349), 1,
      sym_else_clause,
  [12836] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(431), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(433), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12848] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(786), 1,
      anon_sym_RPAREN,
    ACTIONS(788), 1,
      anon_sym_STAR,
    STATE(310), 1,
      aux_sym_func_spec_repeat1,
  [12864] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(472), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(474), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12876] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_LF,
    ACTIONS(673), 1,
      anon_sym_SEMI,
    ACTIONS(790), 1,
      anon_sym_COMMA,
    STATE(305), 1,
      aux_sym_var_declaration_repeat1,
  [12892] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_LF,
    STATE(306), 1,
      aux_sym__if_elif_stmt_repeat1,
    ACTIONS(796), 2,
      anon_sym_elif,
      anon_sym_else,
  [12906] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_LF,
    ACTIONS(801), 1,
      anon_sym_SEMI,
    ACTIONS(804), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      aux_sym__statement_list_repeat1,
  [12922] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(468), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(470), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [12934] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_LF,
    ACTIONS(808), 1,
      anon_sym_SEMI,
    ACTIONS(810), 1,
      anon_sym_RBRACE,
    STATE(282), 1,
      aux_sym__statement_list_repeat1,
  [12950] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(812), 1,
      anon_sym_RPAREN,
    ACTIONS(814), 1,
      anon_sym_STAR,
    STATE(280), 1,
      aux_sym_func_spec_repeat1,
  [12966] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_else,
    ACTIONS(632), 1,
      anon_sym_LF,
    STATE(306), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(391), 1,
      sym_else_clause,
  [12982] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(816), 1,
      anon_sym_RPAREN,
    ACTIONS(818), 1,
      anon_sym_STAR,
    STATE(314), 1,
      aux_sym_func_spec_repeat1,
  [12998] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_else,
    ACTIONS(632), 1,
      anon_sym_LF,
    STATE(306), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(343), 1,
      sym_else_clause,
  [13014] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(820), 1,
      anon_sym_RPAREN,
    ACTIONS(822), 1,
      anon_sym_STAR,
    STATE(280), 1,
      aux_sym_func_spec_repeat1,
  [13030] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(824), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(826), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13042] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(828), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(830), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13054] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(671), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(673), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13066] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(476), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(478), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13078] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_SQUOTE,
    STATE(276), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(832), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [13092] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(834), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(836), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13104] = 5,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_LF,
    ACTIONS(693), 1,
      anon_sym_SEMI,
    ACTIONS(778), 1,
      anon_sym_COMMA,
    STATE(297), 1,
      aux_sym_var_declaration_repeat1,
  [13120] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(838), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(840), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13132] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_LF,
    ACTIONS(482), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13143] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(842), 1,
      aux_sym_other_lit_token1,
    ACTIONS(844), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(383), 1,
      aux_sym_other_lit_repeat1,
  [13156] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_LF,
    ACTIONS(836), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13167] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_SEMI,
    ACTIONS(370), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13178] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_LF,
    ACTIONS(673), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13189] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_LF,
    ACTIONS(848), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13200] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(850), 1,
      aux_sym_other_lit_token1,
    ACTIONS(852), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(401), 1,
      aux_sym_other_lit_repeat1,
  [13213] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(854), 1,
      aux_sym_other_lit_token1,
    STATE(405), 1,
      aux_sym_other_lit_repeat1,
  [13226] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_LF,
    ACTIONS(858), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13237] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_LF,
    ACTIONS(862), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13248] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_RPAREN,
    ACTIONS(866), 1,
      anon_sym_COMMA,
    STATE(333), 1,
      aux_sym_function_declaration_repeat1,
  [13261] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_LF,
    ACTIONS(871), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13272] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_LF,
    ACTIONS(875), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13283] = 4,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_LF,
    ACTIONS(879), 1,
      anon_sym_SEMI,
  [13296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_COLON,
    ACTIONS(883), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [13307] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_SEMI,
    ACTIONS(885), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13318] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_SEMI,
    ACTIONS(889), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13329] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_LF,
    ACTIONS(826), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13340] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_SEMI,
    ACTIONS(893), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13351] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_LF,
    ACTIONS(899), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13362] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_LF,
    ACTIONS(903), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13373] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_SEMI,
    ACTIONS(905), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13384] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_SEMI,
    ACTIONS(909), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13395] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_LF,
    ACTIONS(915), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13406] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_LF,
    ACTIONS(891), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13417] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_LF,
    ACTIONS(887), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13428] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_SEMI,
    ACTIONS(901), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13439] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_SEMI,
    ACTIONS(897), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13450] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LF,
    ACTIONS(372), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_RPAREN,
    ACTIONS(919), 1,
      anon_sym_COMMA,
    STATE(333), 1,
      aux_sym_function_declaration_repeat1,
  [13474] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_LF,
    ACTIONS(923), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13485] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_COMMA,
    ACTIONS(927), 1,
      anon_sym_RBRACE,
    STATE(411), 1,
      aux_sym_dict_literal_repeat1,
  [13498] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_SEMI,
    ACTIONS(929), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13509] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_SEMI,
    ACTIONS(869), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13520] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_SEMI,
    ACTIONS(860), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13531] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_SEMI,
    ACTIONS(856), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13542] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(933), 1,
      anon_sym_RPAREN,
    STATE(246), 1,
      aux_sym_expression_list_repeat1,
  [13555] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_COLON,
    ACTIONS(935), 1,
      anon_sym_COMMA,
    STATE(360), 1,
      aux_sym_enum_statement_repeat1,
  [13568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    ACTIONS(940), 1,
      anon_sym_COLON,
    STATE(421), 1,
      aux_sym_enum_statement_repeat1,
  [13581] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    ACTIONS(942), 1,
      anon_sym_COLON,
    STATE(400), 1,
      aux_sym_enum_statement_repeat1,
  [13594] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(944), 1,
      anon_sym_RPAREN,
    STATE(246), 1,
      aux_sym_expression_list_repeat1,
  [13607] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_SEMI,
    ACTIONS(846), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_COMMA,
    ACTIONS(946), 1,
      anon_sym_RBRACE,
    STATE(373), 1,
      aux_sym_dict_literal_repeat1,
  [13631] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(948), 1,
      anon_sym_RPAREN,
    STATE(246), 1,
      aux_sym_expression_list_repeat1,
  [13644] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_COMMA,
    ACTIONS(950), 1,
      anon_sym_RPAREN,
    STATE(352), 1,
      aux_sym_function_declaration_repeat1,
  [13657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_COLON,
    ACTIONS(952), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13668] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(956), 1,
      anon_sym_RBRACK,
    STATE(246), 1,
      aux_sym_expression_list_repeat1,
  [13681] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_SEMI,
    ACTIONS(958), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13692] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(962), 1,
      aux_sym_other_lit_token1,
    STATE(376), 1,
      aux_sym_other_lit_repeat1,
  [13705] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(966), 1,
      anon_sym_SEMI,
    ACTIONS(964), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_COMMA,
    ACTIONS(971), 1,
      anon_sym_RBRACE,
    STATE(373), 1,
      aux_sym_dict_literal_repeat1,
  [13729] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(973), 1,
      anon_sym_RBRACK,
    STATE(246), 1,
      aux_sym_expression_list_repeat1,
  [13742] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(975), 1,
      anon_sym_LF,
    ACTIONS(804), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13753] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(977), 1,
      aux_sym_other_lit_token1,
    ACTIONS(980), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(376), 1,
      aux_sym_other_lit_repeat1,
  [13766] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(984), 1,
      anon_sym_SEMI,
    ACTIONS(982), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13777] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_LF,
    ACTIONS(433), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13788] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(988), 1,
      anon_sym_SEMI,
    ACTIONS(986), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13799] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_LF,
    ACTIONS(840), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13810] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_COMMA,
    ACTIONS(990), 1,
      anon_sym_RBRACE,
    STATE(365), 1,
      aux_sym_dict_literal_repeat1,
  [13823] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(994), 1,
      anon_sym_SEMI,
    ACTIONS(992), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13834] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(996), 1,
      aux_sym_other_lit_token1,
    STATE(383), 1,
      aux_sym_other_lit_repeat1,
  [13847] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_LF,
    ACTIONS(478), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13858] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_LF,
    ACTIONS(830), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13869] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_LF,
    ACTIONS(994), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13880] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LF,
    ACTIONS(474), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13891] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_LF,
    ACTIONS(470), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13902] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_LF,
    ACTIONS(907), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13913] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_LF,
    ACTIONS(490), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13924] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_SEMI,
    ACTIONS(913), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [13935] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_LF,
    ACTIONS(502), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13946] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_LF,
    ACTIONS(506), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13957] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_LF,
    ACTIONS(911), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13968] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(958), 1,
      anon_sym_LF,
    ACTIONS(960), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [13979] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_LF,
    ACTIONS(498), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [13990] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_LF,
    ACTIONS(494), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14001] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_SEMI,
    ACTIONS(921), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [14012] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_LF,
    ACTIONS(486), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [14023] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    ACTIONS(999), 1,
      anon_sym_COLON,
    STATE(360), 1,
      aux_sym_enum_statement_repeat1,
  [14036] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(842), 1,
      aux_sym_other_lit_token1,
    ACTIONS(1001), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(383), 1,
      aux_sym_other_lit_repeat1,
  [14049] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      sym_identifier,
    ACTIONS(1005), 1,
      anon_sym_RPAREN,
    STATE(367), 1,
      sym_param_spec,
  [14062] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1007), 1,
      aux_sym_other_lit_token1,
    ACTIONS(1009), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(371), 1,
      aux_sym_other_lit_repeat1,
  [14075] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1009), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(1011), 1,
      aux_sym_other_lit_token1,
    STATE(324), 1,
      aux_sym_other_lit_repeat1,
  [14088] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(962), 1,
      aux_sym_other_lit_token1,
    ACTIONS(1001), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(376), 1,
      aux_sym_other_lit_repeat1,
  [14101] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_LF,
    ACTIONS(966), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [14112] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1013), 1,
      aux_sym_other_lit_token1,
    ACTIONS(1015), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(418), 1,
      aux_sym_other_lit_repeat1,
  [14125] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(1015), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(1017), 1,
      aux_sym_other_lit_token1,
    STATE(419), 1,
      aux_sym_other_lit_repeat1,
  [14138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_COLON,
    ACTIONS(1021), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [14149] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_SEMI,
    ACTIONS(873), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [14160] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_COMMA,
    ACTIONS(1023), 1,
      anon_sym_RBRACE,
    STATE(373), 1,
      aux_sym_dict_literal_repeat1,
  [14173] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_COMMA,
    ACTIONS(1025), 1,
      anon_sym_RPAREN,
    STATE(333), 1,
      aux_sym_function_declaration_repeat1,
  [14186] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_COMMA,
    ACTIONS(1027), 1,
      anon_sym_RBRACE,
    STATE(425), 1,
      aux_sym_dict_literal_repeat1,
  [14199] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
    STATE(246), 1,
      aux_sym_expression_list_repeat1,
  [14212] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_COMMA,
    ACTIONS(1031), 1,
      anon_sym_RPAREN,
    STATE(412), 1,
      aux_sym_function_declaration_repeat1,
  [14225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_STAR,
  [14234] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_LF,
    ACTIONS(984), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [14245] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(842), 1,
      aux_sym_other_lit_token1,
    ACTIONS(1033), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(383), 1,
      aux_sym_other_lit_repeat1,
  [14258] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(962), 1,
      aux_sym_other_lit_token1,
    ACTIONS(1033), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(376), 1,
      aux_sym_other_lit_repeat1,
  [14271] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_LF,
    ACTIONS(879), 1,
      anon_sym_SEMI,
    ACTIONS(1035), 1,
      ts_builtin_sym_end,
  [14284] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    ACTIONS(1037), 1,
      anon_sym_COLON,
    STATE(360), 1,
      aux_sym_enum_statement_repeat1,
  [14297] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(1039), 1,
      anon_sym_RPAREN,
    STATE(246), 1,
      aux_sym_expression_list_repeat1,
  [14310] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(1041), 1,
      anon_sym_RBRACK,
    STATE(246), 1,
      aux_sym_expression_list_repeat1,
  [14323] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(1043), 1,
      anon_sym_RPAREN,
    STATE(246), 1,
      aux_sym_expression_list_repeat1,
  [14336] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_COMMA,
    ACTIONS(1045), 1,
      anon_sym_RBRACE,
    STATE(373), 1,
      aux_sym_dict_literal_repeat1,
  [14349] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      sym_identifier,
    ACTIONS(1047), 1,
      anon_sym_RPAREN,
    STATE(415), 1,
      sym_param_spec,
  [14362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_LBRACE,
    STATE(442), 1,
      sym_block,
  [14380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      sym_identifier,
    STATE(263), 1,
      sym_var_decl_item,
  [14390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 1,
      sym_identifier,
    STATE(327), 1,
      sym_var_decl_item,
  [14400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      sym_identifier,
    STATE(70), 1,
      sym__field_identifier,
  [14410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    STATE(148), 1,
      sym_func_spec,
  [14420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      sym_identifier,
    STATE(109), 1,
      sym__field_identifier,
  [14430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_LBRACE,
    STATE(386), 1,
      sym_block,
  [14440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
    STATE(379), 1,
      sym_block,
  [14450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    STATE(441), 1,
      sym_func_spec,
  [14460] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_LF,
    ACTIONS(931), 1,
      anon_sym_SEMI,
  [14470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 1,
      anon_sym_from,
    STATE(457), 1,
      sym_for_range_clause,
  [14480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym_func_spec,
  [14490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14506] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_LF,
    ACTIONS(895), 1,
      anon_sym_SEMI,
  [14516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_LBRACE,
    STATE(444), 1,
      sym_block,
  [14526] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(986), 1,
      anon_sym_LF,
    ACTIONS(988), 1,
      anon_sym_SEMI,
  [14536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      sym_identifier,
    STATE(440), 1,
      sym_param_spec,
  [14554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
    STATE(341), 1,
      sym_block,
  [14564] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
    STATE(382), 1,
      sym_block,
  [14574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
    STATE(372), 1,
      sym_block,
  [14584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_LPAREN,
    STATE(316), 1,
      sym_func_spec,
  [14594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 1,
      anon_sym_from,
    STATE(449), 1,
      sym_for_range_clause,
  [14604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_LBRACE,
    STATE(331), 1,
      sym_block,
  [14614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    STATE(388), 1,
      sym_func_spec,
  [14624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 1,
      sym_identifier,
    STATE(321), 1,
      sym_var_decl_item,
  [14634] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    STATE(385), 1,
      sym_func_spec,
  [14644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_LBRACE,
    STATE(437), 1,
      sym_block,
  [14654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_LBRACE,
    STATE(406), 1,
      sym_block,
  [14664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [14672] = 3,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_LF,
    ACTIONS(879), 1,
      anon_sym_SEMI,
  [14682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
    STATE(358), 1,
      sym_block,
  [14700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1061), 1,
      sym_identifier,
    STATE(130), 1,
      sym__field_identifier,
  [14710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      sym_identifier,
    STATE(317), 1,
      sym_var_decl_item,
  [14720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
    STATE(355), 1,
      sym_block,
  [14730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      anon_sym_DASH_GT,
  [14737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      sym_identifier,
  [14744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1067), 1,
      sym_identifier,
  [14751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 1,
      anon_sym_COMMA,
  [14758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1071), 1,
      sym_identifier,
  [14765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      sym_identifier,
  [14772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      anon_sym_LBRACK,
  [14779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      sym_identifier,
  [14786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 1,
      anon_sym_RBRACK,
  [14793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      anon_sym_RBRACK,
  [14800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 1,
      anon_sym_DASH_GT,
  [14807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_DASH_GT,
  [14814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_RBRACK,
  [14821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 1,
      anon_sym_DASH_GT,
  [14828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 1,
      anon_sym_DASH_GT,
  [14835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 1,
      anon_sym_DASH_GT,
  [14842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      anon_sym_LBRACK,
  [14849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1095), 1,
      sym_identifier,
  [14856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 1,
      anon_sym_LPAREN,
  [14863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1099), 1,
      anon_sym_DASH_GT,
  [14870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1101), 1,
      anon_sym_LPAREN,
  [14877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1103), 1,
      anon_sym_LBRACK,
  [14884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      anon_sym_RPAREN,
  [14891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1107), 1,
      anon_sym_RBRACE,
  [14898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1109), 1,
      sym_identifier,
  [14905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1111), 1,
      anon_sym_DASH_GT,
  [14912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1113), 1,
      anon_sym_DASH_GT,
  [14919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1115), 1,
      anon_sym_BQUOTE,
  [14926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 1,
      anon_sym_DASH_GT,
  [14933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1119), 1,
      anon_sym_RPAREN,
  [14940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      anon_sym_RPAREN,
  [14947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_RBRACK,
  [14954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1123), 1,
      anon_sym_RBRACE,
  [14961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1125), 1,
      anon_sym_DASH_GT,
  [14968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 1,
      anon_sym_RBRACK,
  [14975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 1,
      sym_identifier,
  [14982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1131), 1,
      anon_sym_RPAREN,
  [14989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 1,
      anon_sym_RBRACK,
  [14996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1135), 1,
      sym_identifier,
  [15003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 1,
      anon_sym_RBRACK,
  [15010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 1,
      anon_sym_RPAREN,
  [15017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1141), 1,
      anon_sym_RPAREN,
  [15024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1143), 1,
      sym_identifier,
  [15031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      anon_sym_LBRACK,
  [15038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1147), 1,
      anon_sym_BQUOTE,
  [15045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 1,
      ts_builtin_sym_end,
  [15052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      anon_sym_COMMA,
  [15059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
  [15066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      sym_identifier,
  [15073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 1,
      sym_identifier,
  [15080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 1,
      anon_sym_LBRACK,
  [15087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      anon_sym_BQUOTE,
  [15094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 1,
      anon_sym_DASH_GT,
  [15101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1165), 1,
      anon_sym_COMMA,
  [15108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      anon_sym_COMMA,
  [15115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_RBRACK,
  [15122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1169), 1,
      anon_sym_COMMA,
  [15129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1171), 1,
      sym_identifier,
  [15136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1173), 1,
      anon_sym_RBRACK,
  [15143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      sym_identifier,
  [15150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1177), 1,
      sym_identifier,
  [15157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1179), 1,
      anon_sym_LBRACK,
  [15164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      anon_sym_LBRACK,
  [15171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1183), 1,
      anon_sym_LBRACK,
  [15178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_LBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 134,
  [SMALL_STATE(4)] = 268,
  [SMALL_STATE(5)] = 395,
  [SMALL_STATE(6)] = 522,
  [SMALL_STATE(7)] = 646,
  [SMALL_STATE(8)] = 770,
  [SMALL_STATE(9)] = 891,
  [SMALL_STATE(10)] = 1012,
  [SMALL_STATE(11)] = 1130,
  [SMALL_STATE(12)] = 1209,
  [SMALL_STATE(13)] = 1288,
  [SMALL_STATE(14)] = 1362,
  [SMALL_STATE(15)] = 1436,
  [SMALL_STATE(16)] = 1510,
  [SMALL_STATE(17)] = 1584,
  [SMALL_STATE(18)] = 1658,
  [SMALL_STATE(19)] = 1732,
  [SMALL_STATE(20)] = 1806,
  [SMALL_STATE(21)] = 1880,
  [SMALL_STATE(22)] = 1954,
  [SMALL_STATE(23)] = 2028,
  [SMALL_STATE(24)] = 2102,
  [SMALL_STATE(25)] = 2176,
  [SMALL_STATE(26)] = 2247,
  [SMALL_STATE(27)] = 2318,
  [SMALL_STATE(28)] = 2389,
  [SMALL_STATE(29)] = 2460,
  [SMALL_STATE(30)] = 2531,
  [SMALL_STATE(31)] = 2602,
  [SMALL_STATE(32)] = 2673,
  [SMALL_STATE(33)] = 2744,
  [SMALL_STATE(34)] = 2815,
  [SMALL_STATE(35)] = 2886,
  [SMALL_STATE(36)] = 2957,
  [SMALL_STATE(37)] = 3028,
  [SMALL_STATE(38)] = 3099,
  [SMALL_STATE(39)] = 3170,
  [SMALL_STATE(40)] = 3241,
  [SMALL_STATE(41)] = 3312,
  [SMALL_STATE(42)] = 3383,
  [SMALL_STATE(43)] = 3454,
  [SMALL_STATE(44)] = 3525,
  [SMALL_STATE(45)] = 3596,
  [SMALL_STATE(46)] = 3667,
  [SMALL_STATE(47)] = 3738,
  [SMALL_STATE(48)] = 3809,
  [SMALL_STATE(49)] = 3880,
  [SMALL_STATE(50)] = 3951,
  [SMALL_STATE(51)] = 4022,
  [SMALL_STATE(52)] = 4093,
  [SMALL_STATE(53)] = 4164,
  [SMALL_STATE(54)] = 4235,
  [SMALL_STATE(55)] = 4306,
  [SMALL_STATE(56)] = 4377,
  [SMALL_STATE(57)] = 4448,
  [SMALL_STATE(58)] = 4519,
  [SMALL_STATE(59)] = 4590,
  [SMALL_STATE(60)] = 4637,
  [SMALL_STATE(61)] = 4684,
  [SMALL_STATE(62)] = 4724,
  [SMALL_STATE(63)] = 4759,
  [SMALL_STATE(64)] = 4793,
  [SMALL_STATE(65)] = 4827,
  [SMALL_STATE(66)] = 4875,
  [SMALL_STATE(67)] = 4919,
  [SMALL_STATE(68)] = 4953,
  [SMALL_STATE(69)] = 4987,
  [SMALL_STATE(70)] = 5025,
  [SMALL_STATE(71)] = 5059,
  [SMALL_STATE(72)] = 5093,
  [SMALL_STATE(73)] = 5143,
  [SMALL_STATE(74)] = 5185,
  [SMALL_STATE(75)] = 5219,
  [SMALL_STATE(76)] = 5257,
  [SMALL_STATE(77)] = 5291,
  [SMALL_STATE(78)] = 5325,
  [SMALL_STATE(79)] = 5359,
  [SMALL_STATE(80)] = 5393,
  [SMALL_STATE(81)] = 5427,
  [SMALL_STATE(82)] = 5461,
  [SMALL_STATE(83)] = 5495,
  [SMALL_STATE(84)] = 5529,
  [SMALL_STATE(85)] = 5563,
  [SMALL_STATE(86)] = 5597,
  [SMALL_STATE(87)] = 5631,
  [SMALL_STATE(88)] = 5669,
  [SMALL_STATE(89)] = 5703,
  [SMALL_STATE(90)] = 5737,
  [SMALL_STATE(91)] = 5775,
  [SMALL_STATE(92)] = 5809,
  [SMALL_STATE(93)] = 5843,
  [SMALL_STATE(94)] = 5877,
  [SMALL_STATE(95)] = 5930,
  [SMALL_STATE(96)] = 5983,
  [SMALL_STATE(97)] = 6036,
  [SMALL_STATE(98)] = 6091,
  [SMALL_STATE(99)] = 6126,
  [SMALL_STATE(100)] = 6179,
  [SMALL_STATE(101)] = 6232,
  [SMALL_STATE(102)] = 6285,
  [SMALL_STATE(103)] = 6317,
  [SMALL_STATE(104)] = 6349,
  [SMALL_STATE(105)] = 6381,
  [SMALL_STATE(106)] = 6413,
  [SMALL_STATE(107)] = 6445,
  [SMALL_STATE(108)] = 6483,
  [SMALL_STATE(109)] = 6515,
  [SMALL_STATE(110)] = 6547,
  [SMALL_STATE(111)] = 6579,
  [SMALL_STATE(112)] = 6611,
  [SMALL_STATE(113)] = 6647,
  [SMALL_STATE(114)] = 6687,
  [SMALL_STATE(115)] = 6729,
  [SMALL_STATE(116)] = 6773,
  [SMALL_STATE(117)] = 6823,
  [SMALL_STATE(118)] = 6855,
  [SMALL_STATE(119)] = 6887,
  [SMALL_STATE(120)] = 6919,
  [SMALL_STATE(121)] = 6951,
  [SMALL_STATE(122)] = 6995,
  [SMALL_STATE(123)] = 7037,
  [SMALL_STATE(124)] = 7069,
  [SMALL_STATE(125)] = 7109,
  [SMALL_STATE(126)] = 7141,
  [SMALL_STATE(127)] = 7177,
  [SMALL_STATE(128)] = 7213,
  [SMALL_STATE(129)] = 7245,
  [SMALL_STATE(130)] = 7277,
  [SMALL_STATE(131)] = 7309,
  [SMALL_STATE(132)] = 7341,
  [SMALL_STATE(133)] = 7373,
  [SMALL_STATE(134)] = 7423,
  [SMALL_STATE(135)] = 7455,
  [SMALL_STATE(136)] = 7493,
  [SMALL_STATE(137)] = 7525,
  [SMALL_STATE(138)] = 7557,
  [SMALL_STATE(139)] = 7589,
  [SMALL_STATE(140)] = 7621,
  [SMALL_STATE(141)] = 7653,
  [SMALL_STATE(142)] = 7685,
  [SMALL_STATE(143)] = 7717,
  [SMALL_STATE(144)] = 7749,
  [SMALL_STATE(145)] = 7781,
  [SMALL_STATE(146)] = 7813,
  [SMALL_STATE(147)] = 7863,
  [SMALL_STATE(148)] = 7895,
  [SMALL_STATE(149)] = 7927,
  [SMALL_STATE(150)] = 7959,
  [SMALL_STATE(151)] = 7991,
  [SMALL_STATE(152)] = 8023,
  [SMALL_STATE(153)] = 8055,
  [SMALL_STATE(154)] = 8091,
  [SMALL_STATE(155)] = 8123,
  [SMALL_STATE(156)] = 8155,
  [SMALL_STATE(157)] = 8187,
  [SMALL_STATE(158)] = 8219,
  [SMALL_STATE(159)] = 8251,
  [SMALL_STATE(160)] = 8283,
  [SMALL_STATE(161)] = 8315,
  [SMALL_STATE(162)] = 8347,
  [SMALL_STATE(163)] = 8379,
  [SMALL_STATE(164)] = 8411,
  [SMALL_STATE(165)] = 8443,
  [SMALL_STATE(166)] = 8475,
  [SMALL_STATE(167)] = 8507,
  [SMALL_STATE(168)] = 8539,
  [SMALL_STATE(169)] = 8571,
  [SMALL_STATE(170)] = 8603,
  [SMALL_STATE(171)] = 8635,
  [SMALL_STATE(172)] = 8667,
  [SMALL_STATE(173)] = 8699,
  [SMALL_STATE(174)] = 8731,
  [SMALL_STATE(175)] = 8780,
  [SMALL_STATE(176)] = 8829,
  [SMALL_STATE(177)] = 8878,
  [SMALL_STATE(178)] = 8927,
  [SMALL_STATE(179)] = 8976,
  [SMALL_STATE(180)] = 9025,
  [SMALL_STATE(181)] = 9074,
  [SMALL_STATE(182)] = 9123,
  [SMALL_STATE(183)] = 9172,
  [SMALL_STATE(184)] = 9221,
  [SMALL_STATE(185)] = 9270,
  [SMALL_STATE(186)] = 9319,
  [SMALL_STATE(187)] = 9368,
  [SMALL_STATE(188)] = 9417,
  [SMALL_STATE(189)] = 9466,
  [SMALL_STATE(190)] = 9515,
  [SMALL_STATE(191)] = 9564,
  [SMALL_STATE(192)] = 9613,
  [SMALL_STATE(193)] = 9662,
  [SMALL_STATE(194)] = 9711,
  [SMALL_STATE(195)] = 9760,
  [SMALL_STATE(196)] = 9809,
  [SMALL_STATE(197)] = 9858,
  [SMALL_STATE(198)] = 9907,
  [SMALL_STATE(199)] = 9956,
  [SMALL_STATE(200)] = 10005,
  [SMALL_STATE(201)] = 10054,
  [SMALL_STATE(202)] = 10103,
  [SMALL_STATE(203)] = 10152,
  [SMALL_STATE(204)] = 10201,
  [SMALL_STATE(205)] = 10250,
  [SMALL_STATE(206)] = 10299,
  [SMALL_STATE(207)] = 10348,
  [SMALL_STATE(208)] = 10397,
  [SMALL_STATE(209)] = 10446,
  [SMALL_STATE(210)] = 10494,
  [SMALL_STATE(211)] = 10542,
  [SMALL_STATE(212)] = 10587,
  [SMALL_STATE(213)] = 10630,
  [SMALL_STATE(214)] = 10675,
  [SMALL_STATE(215)] = 10720,
  [SMALL_STATE(216)] = 10765,
  [SMALL_STATE(217)] = 10810,
  [SMALL_STATE(218)] = 10853,
  [SMALL_STATE(219)] = 10901,
  [SMALL_STATE(220)] = 10949,
  [SMALL_STATE(221)] = 10997,
  [SMALL_STATE(222)] = 11045,
  [SMALL_STATE(223)] = 11093,
  [SMALL_STATE(224)] = 11141,
  [SMALL_STATE(225)] = 11189,
  [SMALL_STATE(226)] = 11237,
  [SMALL_STATE(227)] = 11285,
  [SMALL_STATE(228)] = 11330,
  [SMALL_STATE(229)] = 11375,
  [SMALL_STATE(230)] = 11420,
  [SMALL_STATE(231)] = 11465,
  [SMALL_STATE(232)] = 11508,
  [SMALL_STATE(233)] = 11550,
  [SMALL_STATE(234)] = 11592,
  [SMALL_STATE(235)] = 11634,
  [SMALL_STATE(236)] = 11676,
  [SMALL_STATE(237)] = 11718,
  [SMALL_STATE(238)] = 11760,
  [SMALL_STATE(239)] = 11789,
  [SMALL_STATE(240)] = 11820,
  [SMALL_STATE(241)] = 11849,
  [SMALL_STATE(242)] = 11880,
  [SMALL_STATE(243)] = 11911,
  [SMALL_STATE(244)] = 11940,
  [SMALL_STATE(245)] = 11965,
  [SMALL_STATE(246)] = 11990,
  [SMALL_STATE(247)] = 12009,
  [SMALL_STATE(248)] = 12030,
  [SMALL_STATE(249)] = 12051,
  [SMALL_STATE(250)] = 12064,
  [SMALL_STATE(251)] = 12081,
  [SMALL_STATE(252)] = 12094,
  [SMALL_STATE(253)] = 12107,
  [SMALL_STATE(254)] = 12122,
  [SMALL_STATE(255)] = 12139,
  [SMALL_STATE(256)] = 12152,
  [SMALL_STATE(257)] = 12169,
  [SMALL_STATE(258)] = 12186,
  [SMALL_STATE(259)] = 12203,
  [SMALL_STATE(260)] = 12216,
  [SMALL_STATE(261)] = 12233,
  [SMALL_STATE(262)] = 12250,
  [SMALL_STATE(263)] = 12267,
  [SMALL_STATE(264)] = 12284,
  [SMALL_STATE(265)] = 12301,
  [SMALL_STATE(266)] = 12314,
  [SMALL_STATE(267)] = 12327,
  [SMALL_STATE(268)] = 12344,
  [SMALL_STATE(269)] = 12361,
  [SMALL_STATE(270)] = 12374,
  [SMALL_STATE(271)] = 12391,
  [SMALL_STATE(272)] = 12408,
  [SMALL_STATE(273)] = 12424,
  [SMALL_STATE(274)] = 12436,
  [SMALL_STATE(275)] = 12450,
  [SMALL_STATE(276)] = 12466,
  [SMALL_STATE(277)] = 12480,
  [SMALL_STATE(278)] = 12492,
  [SMALL_STATE(279)] = 12506,
  [SMALL_STATE(280)] = 12518,
  [SMALL_STATE(281)] = 12532,
  [SMALL_STATE(282)] = 12548,
  [SMALL_STATE(283)] = 12564,
  [SMALL_STATE(284)] = 12578,
  [SMALL_STATE(285)] = 12590,
  [SMALL_STATE(286)] = 12606,
  [SMALL_STATE(287)] = 12622,
  [SMALL_STATE(288)] = 12638,
  [SMALL_STATE(289)] = 12650,
  [SMALL_STATE(290)] = 12664,
  [SMALL_STATE(291)] = 12680,
  [SMALL_STATE(292)] = 12692,
  [SMALL_STATE(293)] = 12708,
  [SMALL_STATE(294)] = 12720,
  [SMALL_STATE(295)] = 12736,
  [SMALL_STATE(296)] = 12750,
  [SMALL_STATE(297)] = 12762,
  [SMALL_STATE(298)] = 12778,
  [SMALL_STATE(299)] = 12794,
  [SMALL_STATE(300)] = 12808,
  [SMALL_STATE(301)] = 12820,
  [SMALL_STATE(302)] = 12836,
  [SMALL_STATE(303)] = 12848,
  [SMALL_STATE(304)] = 12864,
  [SMALL_STATE(305)] = 12876,
  [SMALL_STATE(306)] = 12892,
  [SMALL_STATE(307)] = 12906,
  [SMALL_STATE(308)] = 12922,
  [SMALL_STATE(309)] = 12934,
  [SMALL_STATE(310)] = 12950,
  [SMALL_STATE(311)] = 12966,
  [SMALL_STATE(312)] = 12982,
  [SMALL_STATE(313)] = 12998,
  [SMALL_STATE(314)] = 13014,
  [SMALL_STATE(315)] = 13030,
  [SMALL_STATE(316)] = 13042,
  [SMALL_STATE(317)] = 13054,
  [SMALL_STATE(318)] = 13066,
  [SMALL_STATE(319)] = 13078,
  [SMALL_STATE(320)] = 13092,
  [SMALL_STATE(321)] = 13104,
  [SMALL_STATE(322)] = 13120,
  [SMALL_STATE(323)] = 13132,
  [SMALL_STATE(324)] = 13143,
  [SMALL_STATE(325)] = 13156,
  [SMALL_STATE(326)] = 13167,
  [SMALL_STATE(327)] = 13178,
  [SMALL_STATE(328)] = 13189,
  [SMALL_STATE(329)] = 13200,
  [SMALL_STATE(330)] = 13213,
  [SMALL_STATE(331)] = 13226,
  [SMALL_STATE(332)] = 13237,
  [SMALL_STATE(333)] = 13248,
  [SMALL_STATE(334)] = 13261,
  [SMALL_STATE(335)] = 13272,
  [SMALL_STATE(336)] = 13283,
  [SMALL_STATE(337)] = 13296,
  [SMALL_STATE(338)] = 13307,
  [SMALL_STATE(339)] = 13318,
  [SMALL_STATE(340)] = 13329,
  [SMALL_STATE(341)] = 13340,
  [SMALL_STATE(342)] = 13351,
  [SMALL_STATE(343)] = 13362,
  [SMALL_STATE(344)] = 13373,
  [SMALL_STATE(345)] = 13384,
  [SMALL_STATE(346)] = 13395,
  [SMALL_STATE(347)] = 13406,
  [SMALL_STATE(348)] = 13417,
  [SMALL_STATE(349)] = 13428,
  [SMALL_STATE(350)] = 13439,
  [SMALL_STATE(351)] = 13450,
  [SMALL_STATE(352)] = 13461,
  [SMALL_STATE(353)] = 13474,
  [SMALL_STATE(354)] = 13485,
  [SMALL_STATE(355)] = 13498,
  [SMALL_STATE(356)] = 13509,
  [SMALL_STATE(357)] = 13520,
  [SMALL_STATE(358)] = 13531,
  [SMALL_STATE(359)] = 13542,
  [SMALL_STATE(360)] = 13555,
  [SMALL_STATE(361)] = 13568,
  [SMALL_STATE(362)] = 13581,
  [SMALL_STATE(363)] = 13594,
  [SMALL_STATE(364)] = 13607,
  [SMALL_STATE(365)] = 13618,
  [SMALL_STATE(366)] = 13631,
  [SMALL_STATE(367)] = 13644,
  [SMALL_STATE(368)] = 13657,
  [SMALL_STATE(369)] = 13668,
  [SMALL_STATE(370)] = 13681,
  [SMALL_STATE(371)] = 13692,
  [SMALL_STATE(372)] = 13705,
  [SMALL_STATE(373)] = 13716,
  [SMALL_STATE(374)] = 13729,
  [SMALL_STATE(375)] = 13742,
  [SMALL_STATE(376)] = 13753,
  [SMALL_STATE(377)] = 13766,
  [SMALL_STATE(378)] = 13777,
  [SMALL_STATE(379)] = 13788,
  [SMALL_STATE(380)] = 13799,
  [SMALL_STATE(381)] = 13810,
  [SMALL_STATE(382)] = 13823,
  [SMALL_STATE(383)] = 13834,
  [SMALL_STATE(384)] = 13847,
  [SMALL_STATE(385)] = 13858,
  [SMALL_STATE(386)] = 13869,
  [SMALL_STATE(387)] = 13880,
  [SMALL_STATE(388)] = 13891,
  [SMALL_STATE(389)] = 13902,
  [SMALL_STATE(390)] = 13913,
  [SMALL_STATE(391)] = 13924,
  [SMALL_STATE(392)] = 13935,
  [SMALL_STATE(393)] = 13946,
  [SMALL_STATE(394)] = 13957,
  [SMALL_STATE(395)] = 13968,
  [SMALL_STATE(396)] = 13979,
  [SMALL_STATE(397)] = 13990,
  [SMALL_STATE(398)] = 14001,
  [SMALL_STATE(399)] = 14012,
  [SMALL_STATE(400)] = 14023,
  [SMALL_STATE(401)] = 14036,
  [SMALL_STATE(402)] = 14049,
  [SMALL_STATE(403)] = 14062,
  [SMALL_STATE(404)] = 14075,
  [SMALL_STATE(405)] = 14088,
  [SMALL_STATE(406)] = 14101,
  [SMALL_STATE(407)] = 14112,
  [SMALL_STATE(408)] = 14125,
  [SMALL_STATE(409)] = 14138,
  [SMALL_STATE(410)] = 14149,
  [SMALL_STATE(411)] = 14160,
  [SMALL_STATE(412)] = 14173,
  [SMALL_STATE(413)] = 14186,
  [SMALL_STATE(414)] = 14199,
  [SMALL_STATE(415)] = 14212,
  [SMALL_STATE(416)] = 14225,
  [SMALL_STATE(417)] = 14234,
  [SMALL_STATE(418)] = 14245,
  [SMALL_STATE(419)] = 14258,
  [SMALL_STATE(420)] = 14271,
  [SMALL_STATE(421)] = 14284,
  [SMALL_STATE(422)] = 14297,
  [SMALL_STATE(423)] = 14310,
  [SMALL_STATE(424)] = 14323,
  [SMALL_STATE(425)] = 14336,
  [SMALL_STATE(426)] = 14349,
  [SMALL_STATE(427)] = 14362,
  [SMALL_STATE(428)] = 14370,
  [SMALL_STATE(429)] = 14380,
  [SMALL_STATE(430)] = 14390,
  [SMALL_STATE(431)] = 14400,
  [SMALL_STATE(432)] = 14410,
  [SMALL_STATE(433)] = 14420,
  [SMALL_STATE(434)] = 14430,
  [SMALL_STATE(435)] = 14440,
  [SMALL_STATE(436)] = 14450,
  [SMALL_STATE(437)] = 14460,
  [SMALL_STATE(438)] = 14470,
  [SMALL_STATE(439)] = 14480,
  [SMALL_STATE(440)] = 14490,
  [SMALL_STATE(441)] = 14498,
  [SMALL_STATE(442)] = 14506,
  [SMALL_STATE(443)] = 14516,
  [SMALL_STATE(444)] = 14526,
  [SMALL_STATE(445)] = 14536,
  [SMALL_STATE(446)] = 14544,
  [SMALL_STATE(447)] = 14554,
  [SMALL_STATE(448)] = 14564,
  [SMALL_STATE(449)] = 14574,
  [SMALL_STATE(450)] = 14584,
  [SMALL_STATE(451)] = 14594,
  [SMALL_STATE(452)] = 14604,
  [SMALL_STATE(453)] = 14614,
  [SMALL_STATE(454)] = 14624,
  [SMALL_STATE(455)] = 14634,
  [SMALL_STATE(456)] = 14644,
  [SMALL_STATE(457)] = 14654,
  [SMALL_STATE(458)] = 14664,
  [SMALL_STATE(459)] = 14672,
  [SMALL_STATE(460)] = 14682,
  [SMALL_STATE(461)] = 14690,
  [SMALL_STATE(462)] = 14700,
  [SMALL_STATE(463)] = 14710,
  [SMALL_STATE(464)] = 14720,
  [SMALL_STATE(465)] = 14730,
  [SMALL_STATE(466)] = 14737,
  [SMALL_STATE(467)] = 14744,
  [SMALL_STATE(468)] = 14751,
  [SMALL_STATE(469)] = 14758,
  [SMALL_STATE(470)] = 14765,
  [SMALL_STATE(471)] = 14772,
  [SMALL_STATE(472)] = 14779,
  [SMALL_STATE(473)] = 14786,
  [SMALL_STATE(474)] = 14793,
  [SMALL_STATE(475)] = 14800,
  [SMALL_STATE(476)] = 14807,
  [SMALL_STATE(477)] = 14814,
  [SMALL_STATE(478)] = 14821,
  [SMALL_STATE(479)] = 14828,
  [SMALL_STATE(480)] = 14835,
  [SMALL_STATE(481)] = 14842,
  [SMALL_STATE(482)] = 14849,
  [SMALL_STATE(483)] = 14856,
  [SMALL_STATE(484)] = 14863,
  [SMALL_STATE(485)] = 14870,
  [SMALL_STATE(486)] = 14877,
  [SMALL_STATE(487)] = 14884,
  [SMALL_STATE(488)] = 14891,
  [SMALL_STATE(489)] = 14898,
  [SMALL_STATE(490)] = 14905,
  [SMALL_STATE(491)] = 14912,
  [SMALL_STATE(492)] = 14919,
  [SMALL_STATE(493)] = 14926,
  [SMALL_STATE(494)] = 14933,
  [SMALL_STATE(495)] = 14940,
  [SMALL_STATE(496)] = 14947,
  [SMALL_STATE(497)] = 14954,
  [SMALL_STATE(498)] = 14961,
  [SMALL_STATE(499)] = 14968,
  [SMALL_STATE(500)] = 14975,
  [SMALL_STATE(501)] = 14982,
  [SMALL_STATE(502)] = 14989,
  [SMALL_STATE(503)] = 14996,
  [SMALL_STATE(504)] = 15003,
  [SMALL_STATE(505)] = 15010,
  [SMALL_STATE(506)] = 15017,
  [SMALL_STATE(507)] = 15024,
  [SMALL_STATE(508)] = 15031,
  [SMALL_STATE(509)] = 15038,
  [SMALL_STATE(510)] = 15045,
  [SMALL_STATE(511)] = 15052,
  [SMALL_STATE(512)] = 15059,
  [SMALL_STATE(513)] = 15066,
  [SMALL_STATE(514)] = 15073,
  [SMALL_STATE(515)] = 15080,
  [SMALL_STATE(516)] = 15087,
  [SMALL_STATE(517)] = 15094,
  [SMALL_STATE(518)] = 15101,
  [SMALL_STATE(519)] = 15108,
  [SMALL_STATE(520)] = 15115,
  [SMALL_STATE(521)] = 15122,
  [SMALL_STATE(522)] = 15129,
  [SMALL_STATE(523)] = 15136,
  [SMALL_STATE(524)] = 15143,
  [SMALL_STATE(525)] = 15150,
  [SMALL_STATE(526)] = 15157,
  [SMALL_STATE(527)] = 15164,
  [SMALL_STATE(528)] = 15171,
  [SMALL_STATE(529)] = 15178,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(353),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(482),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(507),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(454),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(472),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(165),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(165),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(163),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(162),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(351),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(281),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(278),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(404),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(403),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 10),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 10),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 12),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, .production_id = 12),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 11),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_identifier, 1, .production_id = 11),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 4),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 4),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 5),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 5),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 4),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_literal, 4),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_literal, 4),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_literal, 4),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_literal, 1),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_composite_literal, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_expression, 4, .production_id = 20),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_expression, 4, .production_id = 20),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_literal, 3),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_literal, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 3),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_true, 1),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_true, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_false, 1),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_false, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 1),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expression_list, 1), SHIFT(39),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 1),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(201),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(157),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(157),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(513),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(98),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(526),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(508),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(527),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_type_spec_repeat1, 2), SHIFT_REPEAT(432),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec_r, 2),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_spec_r, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec_r, 1),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_spec_r, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 2),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 4),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 4),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_spec, 8),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_spec, 8),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 5),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 5),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_spec, 7),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_spec, 7),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_spec, 6),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_spec, 6),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 6),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type_spec, 6),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_spec, 5),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_spec, 5),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_kv, 3, .production_id = 13),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_range_clause, 4, .production_id = 28),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_stmt, 3, .production_id = 8),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_stmt, 4, .production_id = 17),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_stmt, 4, .production_id = 17),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_stmt, 3, .production_id = 8),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_stmt, 5, .production_id = 23),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_stmt, 5, .production_id = 23),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(29),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 2, .production_id = 25),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 2, .production_id = 25),
  [641] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 2, .production_id = 25), SHIFT_REPEAT(49),
  [644] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 2, .production_id = 25), SHIFT_REPEAT(48),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 1, .production_id = 15),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 1, .production_id = 15),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 2),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_clause, 3, .production_id = 8),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif_clause, 3, .production_id = 8),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 2),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 2),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_declaration_repeat1, 2),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_var_declaration_repeat1, 2),
  [675] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_var_declaration_repeat1, 2), SHIFT_REPEAT(463),
  [678] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(45),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_statement_repeat1, 2),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_statement_repeat1, 2),
  [685] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_statement_repeat1, 2), SHIFT_REPEAT(503),
  [688] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_statement_repeat1, 2), SHIFT_REPEAT(466),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 2),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 2),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 3),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 3),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 3),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 3),
  [711] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(30),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_spec_repeat1, 2),
  [730] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_spec_repeat1, 2), SHIFT_REPEAT(204),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_content_double, 2),
  [767] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_content_double, 2), SHIFT_REPEAT(294),
  [770] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_content_double, 2), SHIFT_REPEAT(294),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_content_single, 2),
  [775] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_content_single, 2), SHIFT_REPEAT(295),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [790] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_var_declaration_repeat1, 2), SHIFT_REPEAT(430),
  [793] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__if_elif_stmt_repeat1, 2), SHIFT_REPEAT(306),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__if_elif_stmt_repeat1, 2),
  [798] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(10),
  [801] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(10),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_decl_item, 4, .production_id = 27),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_decl_item, 4, .production_id = 27),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec, 2),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_spec, 2),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_decl_item, 3, .production_id = 19),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_decl_item, 3, .production_id = 19),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec, 1),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_spec, 1),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2, .production_id = 21),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2, .production_id = 21),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_else_stmt, 5, .production_id = 22),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_else_stmt, 5, .production_id = 22),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2),
  [866] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2), SHIFT_REPEAT(446),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_else_stmt, 5, .production_id = 24),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_else_stmt, 5, .production_id = 24),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, .production_id = 6),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2, .production_id = 6),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1, .production_id = 1),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1, .production_id = 1),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1, .production_id = 2),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1, .production_id = 2),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 32),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, .production_id = 32),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_else_stmt, 6, .production_id = 29),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_else_stmt, 6, .production_id = 29),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_else_stmt, 6, .production_id = 30),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_else_stmt, 6, .production_id = 30),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1, .production_id = 3),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1, .production_id = 3),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1, .production_id = 4),
  [911] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1, .production_id = 4),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_else_stmt, 7, .production_id = 33),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_else_stmt, 7, .production_id = 33),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_statement, 1),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_statement, 1),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 26),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 5, .production_id = 26),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [935] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_statement_repeat1, 2), SHIFT_REPEAT(470),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_spec, 1, .production_id = 18),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_else_stmt, 4, .production_id = 16),
  [960] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_else_stmt, 4, .production_id = 16),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 4, .production_id = 14),
  [966] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 4, .production_id = 14),
  [968] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_literal_repeat1, 2), SHIFT_REPEAT(20),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_literal_repeat1, 2),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [977] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_other_lit_repeat1, 2), SHIFT_REPEAT(376),
  [980] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_other_lit_repeat1, 2),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3, .production_id = 10),
  [984] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 3, .production_id = 10),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, .production_id = 34),
  [988] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 7, .production_id = 34),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, .production_id = 9),
  [994] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3, .production_id = 9),
  [996] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_other_lit_repeat1, 2), SHIFT_REPEAT(383),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_spec, 3, .production_id = 31),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1149] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
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
