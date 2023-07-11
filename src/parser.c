#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 293
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 100
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 23

enum {
  sym_identifier = 1,
  anon_sym_LF = 2,
  anon_sym_SEMI = 3,
  anon_sym_PLUS = 4,
  anon_sym_DASH = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_COMMA = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_COLON = 11,
  anon_sym_EQ = 12,
  anon_sym_COLON_EQ = 13,
  anon_sym_enum = 14,
  anon_sym_for = 15,
  anon_sym_from = 16,
  anon_sym_to = 17,
  anon_sym_if = 18,
  anon_sym_elif = 19,
  anon_sym_else = 20,
  anon_sym_STAR = 21,
  anon_sym_SLASH = 22,
  anon_sym_PERCENT = 23,
  anon_sym_EQ_EQ = 24,
  anon_sym_BANG_EQ = 25,
  anon_sym_LT = 26,
  anon_sym_LT_EQ = 27,
  anon_sym_GT = 28,
  anon_sym_GT_EQ = 29,
  anon_sym_AMP_AMP = 30,
  anon_sym_and = 31,
  anon_sym_PIPE_PIPE = 32,
  anon_sym_or = 33,
  sym_comment = 34,
  anon_sym_LT_LT = 35,
  aux_sym_other_lit_token1 = 36,
  anon_sym_GT_GT = 37,
  sym_int_literal = 38,
  sym_float_literal = 39,
  anon_sym_LBRACK = 40,
  anon_sym_RBRACK = 41,
  sym_imaginary_literal = 42,
  anon_sym_true = 43,
  anon_sym_True = 44,
  anon_sym_false = 45,
  anon_sym_False = 46,
  sym_continue_statement = 47,
  sym_break_statement = 48,
  anon_sym_return = 49,
  anon_sym_DQUOTE = 50,
  anon_sym_SQUOTE = 51,
  sym_escape_sequence = 52,
  aux_sym__quoted_string_content_double_token1 = 53,
  aux_sym__quoted_string_content_single_token1 = 54,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 55,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 56,
  sym_source_file = 57,
  sym__top_level_item = 58,
  sym__statement = 59,
  sym_unary_expression = 60,
  sym__expression = 61,
  sym_composite_literal = 62,
  sym_parenthesized_expression = 63,
  sym_expression_list = 64,
  sym_block = 65,
  sym__statement_list = 66,
  sym_assignment_statement = 67,
  sym_for_statement = 68,
  sym_for_range_clause = 69,
  sym_call_expression = 70,
  sym_argument_list = 71,
  sym_if_statement = 72,
  sym__if_stmt = 73,
  sym__if_elif_stmt = 74,
  sym__if_elif_else_stmt = 75,
  sym__if_else_stmt = 76,
  sym_elif_clause = 77,
  sym_else_clause = 78,
  sym_binary_expression = 79,
  sym_tuple_literal = 80,
  sym_list_literal = 81,
  sym_dict_literal = 82,
  sym_dict_kv = 83,
  sym_true = 84,
  sym_false = 85,
  sym_empty_statement = 86,
  sym_return_statement = 87,
  sym_quoted_string = 88,
  aux_sym__quoted_string_content_double = 89,
  aux_sym__quoted_string_content_single = 90,
  sym_multiline_string = 91,
  sym_string_literal = 92,
  aux_sym_source_file_repeat1 = 93,
  aux_sym_expression_list_repeat1 = 94,
  aux_sym__statement_list_repeat1 = 95,
  aux_sym__if_elif_stmt_repeat1 = 96,
  aux_sym__if_elif_stmt_repeat2 = 97,
  aux_sym_other_lit_repeat1 = 98,
  aux_sym_dict_literal_repeat1 = 99,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
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
  [sym_comment] = "comment",
  [anon_sym_LT_LT] = "<<",
  [aux_sym_other_lit_token1] = "other_lit_token1",
  [anon_sym_GT_GT] = ">>",
  [sym_int_literal] = "int_literal",
  [sym_float_literal] = "float_literal",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [sym__statement] = "_statement",
  [sym_unary_expression] = "unary_expression",
  [sym__expression] = "_expression",
  [sym_composite_literal] = "composite_literal",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
  [aux_sym__statement_list_repeat1] = "_statement_list_repeat1",
  [aux_sym__if_elif_stmt_repeat1] = "_if_elif_stmt_repeat1",
  [aux_sym__if_elif_stmt_repeat2] = "_if_elif_stmt_repeat2",
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
  [sym_comment] = sym_comment,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [aux_sym_other_lit_token1] = aux_sym_other_lit_token1,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [sym_int_literal] = sym_int_literal,
  [sym_float_literal] = sym_float_literal,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [sym__statement] = sym__statement,
  [sym_unary_expression] = sym_unary_expression,
  [sym__expression] = sym__expression,
  [sym_composite_literal] = sym_composite_literal,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
  [aux_sym__statement_list_repeat1] = aux_sym__statement_list_repeat1,
  [aux_sym__if_elif_stmt_repeat1] = aux_sym__if_elif_stmt_repeat1,
  [aux_sym__if_elif_stmt_repeat2] = aux_sym__if_elif_stmt_repeat2,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
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
  field_function = 7,
  field_key = 8,
  field_left = 9,
  field_operand = 10,
  field_operator = 11,
  field_right = 12,
  field_value = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative_catchall] = "alternative_catchall",
  [field_alternative_conditional] = "alternative_conditional",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_function] = "function",
  [field_key] = "key",
  [field_left] = "left",
  [field_operand] = "operand",
  [field_operator] = "operator",
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
  [9] = {.index = 21, .length = 2},
  [10] = {.index = 23, .length = 1},
  [11] = {.index = 24, .length = 1},
  [12] = {.index = 25, .length = 3},
  [13] = {.index = 28, .length = 3},
  [14] = {.index = 31, .length = 1},
  [15] = {.index = 32, .length = 3},
  [16] = {.index = 35, .length = 3},
  [17] = {.index = 38, .length = 4},
  [18] = {.index = 42, .length = 2},
  [19] = {.index = 44, .length = 2},
  [20] = {.index = 46, .length = 4},
  [21] = {.index = 50, .length = 4},
  [22] = {.index = 54, .length = 4},
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
    {field_key, 0},
    {field_value, 2},
  [23] =
    {field_body, 3},
  [24] =
    {field_alternative_conditional, 0},
  [25] =
    {field_alternative_catchall, 3},
    {field_condition, 1},
    {field_consequence, 2},
  [28] =
    {field_alternative_conditional, 3, .inherited = true},
    {field_condition, 1},
    {field_consequence, 2},
  [31] =
    {field_consequence, 1},
  [32] =
    {field_alternative_catchall, 4},
    {field_condition, 1},
    {field_consequence, 2},
  [35] =
    {field_alternative_conditional, 4, .inherited = true},
    {field_condition, 1},
    {field_consequence, 2},
  [38] =
    {field_alternative_catchall, 4},
    {field_alternative_conditional, 3, .inherited = true},
    {field_condition, 1},
    {field_consequence, 2},
  [42] =
    {field_alternative_conditional, 0, .inherited = true},
    {field_alternative_conditional, 1, .inherited = true},
  [44] =
    {field_left, 1},
    {field_right, 3},
  [46] =
    {field_alternative_catchall, 5},
    {field_alternative_conditional, 4, .inherited = true},
    {field_condition, 1},
    {field_consequence, 2},
  [50] =
    {field_alternative_catchall, 5},
    {field_alternative_conditional, 3, .inherited = true},
    {field_condition, 1},
    {field_consequence, 2},
  [54] =
    {field_alternative_catchall, 6},
    {field_alternative_conditional, 4, .inherited = true},
    {field_condition, 1},
    {field_consequence, 2},
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
  [5] = 2,
  [6] = 6,
  [7] = 6,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 13,
  [15] = 13,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 18,
  [20] = 17,
  [21] = 21,
  [22] = 18,
  [23] = 21,
  [24] = 17,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 28,
  [32] = 32,
  [33] = 28,
  [34] = 29,
  [35] = 35,
  [36] = 36,
  [37] = 27,
  [38] = 38,
  [39] = 39,
  [40] = 36,
  [41] = 41,
  [42] = 42,
  [43] = 32,
  [44] = 42,
  [45] = 41,
  [46] = 39,
  [47] = 36,
  [48] = 27,
  [49] = 32,
  [50] = 35,
  [51] = 38,
  [52] = 42,
  [53] = 41,
  [54] = 39,
  [55] = 38,
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
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 85,
  [87] = 87,
  [88] = 56,
  [89] = 56,
  [90] = 90,
  [91] = 91,
  [92] = 90,
  [93] = 90,
  [94] = 77,
  [95] = 79,
  [96] = 82,
  [97] = 79,
  [98] = 77,
  [99] = 71,
  [100] = 64,
  [101] = 65,
  [102] = 69,
  [103] = 62,
  [104] = 67,
  [105] = 68,
  [106] = 76,
  [107] = 70,
  [108] = 66,
  [109] = 72,
  [110] = 68,
  [111] = 65,
  [112] = 58,
  [113] = 67,
  [114] = 76,
  [115] = 73,
  [116] = 75,
  [117] = 69,
  [118] = 60,
  [119] = 72,
  [120] = 73,
  [121] = 75,
  [122] = 87,
  [123] = 87,
  [124] = 78,
  [125] = 78,
  [126] = 84,
  [127] = 84,
  [128] = 82,
  [129] = 58,
  [130] = 71,
  [131] = 64,
  [132] = 62,
  [133] = 70,
  [134] = 66,
  [135] = 61,
  [136] = 63,
  [137] = 57,
  [138] = 60,
  [139] = 63,
  [140] = 57,
  [141] = 74,
  [142] = 80,
  [143] = 81,
  [144] = 83,
  [145] = 81,
  [146] = 80,
  [147] = 83,
  [148] = 74,
  [149] = 61,
  [150] = 150,
  [151] = 151,
  [152] = 151,
  [153] = 150,
  [154] = 154,
  [155] = 154,
  [156] = 151,
  [157] = 150,
  [158] = 154,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 159,
  [163] = 160,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 167,
  [170] = 170,
  [171] = 168,
  [172] = 170,
  [173] = 173,
  [174] = 174,
  [175] = 173,
  [176] = 176,
  [177] = 176,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 174,
  [183] = 178,
  [184] = 174,
  [185] = 185,
  [186] = 181,
  [187] = 179,
  [188] = 179,
  [189] = 185,
  [190] = 180,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 191,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 191,
  [202] = 200,
  [203] = 200,
  [204] = 198,
  [205] = 193,
  [206] = 206,
  [207] = 196,
  [208] = 208,
  [209] = 196,
  [210] = 210,
  [211] = 194,
  [212] = 198,
  [213] = 213,
  [214] = 214,
  [215] = 214,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 218,
  [223] = 223,
  [224] = 224,
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
  [235] = 235,
  [236] = 233,
  [237] = 235,
  [238] = 217,
  [239] = 223,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 231,
  [245] = 221,
  [246] = 232,
  [247] = 247,
  [248] = 248,
  [249] = 224,
  [250] = 219,
  [251] = 251,
  [252] = 242,
  [253] = 213,
  [254] = 247,
  [255] = 216,
  [256] = 256,
  [257] = 220,
  [258] = 256,
  [259] = 259,
  [260] = 216,
  [261] = 247,
  [262] = 231,
  [263] = 225,
  [264] = 226,
  [265] = 227,
  [266] = 266,
  [267] = 240,
  [268] = 251,
  [269] = 256,
  [270] = 240,
  [271] = 241,
  [272] = 241,
  [273] = 234,
  [274] = 221,
  [275] = 228,
  [276] = 229,
  [277] = 230,
  [278] = 219,
  [279] = 251,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 281,
  [285] = 285,
  [286] = 285,
  [287] = 282,
  [288] = 288,
  [289] = 289,
  [290] = 289,
  [291] = 291,
  [292] = 291,
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

static inline bool sym_identifier_character_set_2(int32_t c) {
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
      if (eof) ADVANCE(35);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '%') ADVANCE(50);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(86);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(57);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '|') ADVANCE(19);
      if (lookahead == '}') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(104);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(85);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '#') ADVANCE(93);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '%') ADVANCE(50);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(56);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '|') ADVANCE(19);
      if (lookahead == '}') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(104);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(103);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(85);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '&') ADVANCE(59);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(102);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(62);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(23);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(75);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(76);
      END_STATE();
    case 19:
      if (lookahead == '|') ADVANCE(60);
      END_STATE();
    case 20:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 21:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(20);
      if (lookahead == '_') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(75);
      END_STATE();
    case 24:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(72);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(76);
      END_STATE();
    case 26:
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(87);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 33:
      if (eof) ADVANCE(35);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '%') ADVANCE(50);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(86);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(56);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '|') ADVANCE(19);
      if (lookahead == '}') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(104);
      END_STATE();
    case 34:
      if (eof) ADVANCE(35);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '%') ADVANCE(50);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(86);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(57);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '|') ADVANCE(19);
      if (lookahead == '}') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(104);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(51);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(62);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '>') ADVANCE(70);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      if (lookahead == '"') ADVANCE(6);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      if (lookahead == '\'') ADVANCE(10);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_other_lit_token1);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(62);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(18);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(15);
      if (lookahead == '_') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (lookahead == '_') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(20);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (lookahead == '_') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_imaginary_literal);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(6);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(10);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(101);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_double_token1);
      if (lookahead == '#') ADVANCE(93);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(94);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_double_token1);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(94);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_double_token1);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(13);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_double_token1);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(13);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_double_token1);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_double_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(101);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead == '\'') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '/') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(101);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead == '*') ADVANCE(98);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == '\n' ||
          lookahead == '\'') ADVANCE(13);
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead == '*') ADVANCE(98);
      if (lookahead == '\n' ||
          lookahead == '\'') ADVANCE(13);
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(88);
      if (lookahead == '\'') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_single_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(104);
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
      if (lookahead == 'F') ADVANCE(1);
      if (lookahead == 'T') ADVANCE(2);
      if (lookahead == 'a') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(5);
      if (lookahead == 'e') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(44);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 42:
      if (lookahead == 'k') ADVANCE(52);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_break_statement);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 56:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_continue_statement);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 33},
  [12] = {.lex_state = 33},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 0},
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
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 33},
  [86] = {.lex_state = 33},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 33},
  [89] = {.lex_state = 33},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 33},
  [93] = {.lex_state = 33},
  [94] = {.lex_state = 33},
  [95] = {.lex_state = 33},
  [96] = {.lex_state = 33},
  [97] = {.lex_state = 33},
  [98] = {.lex_state = 33},
  [99] = {.lex_state = 33},
  [100] = {.lex_state = 33},
  [101] = {.lex_state = 33},
  [102] = {.lex_state = 33},
  [103] = {.lex_state = 33},
  [104] = {.lex_state = 33},
  [105] = {.lex_state = 33},
  [106] = {.lex_state = 33},
  [107] = {.lex_state = 33},
  [108] = {.lex_state = 33},
  [109] = {.lex_state = 33},
  [110] = {.lex_state = 33},
  [111] = {.lex_state = 33},
  [112] = {.lex_state = 33},
  [113] = {.lex_state = 33},
  [114] = {.lex_state = 33},
  [115] = {.lex_state = 33},
  [116] = {.lex_state = 33},
  [117] = {.lex_state = 33},
  [118] = {.lex_state = 33},
  [119] = {.lex_state = 33},
  [120] = {.lex_state = 33},
  [121] = {.lex_state = 33},
  [122] = {.lex_state = 33},
  [123] = {.lex_state = 33},
  [124] = {.lex_state = 33},
  [125] = {.lex_state = 33},
  [126] = {.lex_state = 33},
  [127] = {.lex_state = 33},
  [128] = {.lex_state = 33},
  [129] = {.lex_state = 33},
  [130] = {.lex_state = 33},
  [131] = {.lex_state = 33},
  [132] = {.lex_state = 33},
  [133] = {.lex_state = 33},
  [134] = {.lex_state = 33},
  [135] = {.lex_state = 33},
  [136] = {.lex_state = 33},
  [137] = {.lex_state = 33},
  [138] = {.lex_state = 33},
  [139] = {.lex_state = 33},
  [140] = {.lex_state = 33},
  [141] = {.lex_state = 33},
  [142] = {.lex_state = 33},
  [143] = {.lex_state = 33},
  [144] = {.lex_state = 33},
  [145] = {.lex_state = 33},
  [146] = {.lex_state = 33},
  [147] = {.lex_state = 33},
  [148] = {.lex_state = 33},
  [149] = {.lex_state = 33},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 33},
  [168] = {.lex_state = 33},
  [169] = {.lex_state = 33},
  [170] = {.lex_state = 33},
  [171] = {.lex_state = 33},
  [172] = {.lex_state = 33},
  [173] = {.lex_state = 33},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 33},
  [176] = {.lex_state = 33},
  [177] = {.lex_state = 33},
  [178] = {.lex_state = 33},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 33},
  [181] = {.lex_state = 33},
  [182] = {.lex_state = 33},
  [183] = {.lex_state = 33},
  [184] = {.lex_state = 33},
  [185] = {.lex_state = 33},
  [186] = {.lex_state = 33},
  [187] = {.lex_state = 33},
  [188] = {.lex_state = 33},
  [189] = {.lex_state = 33},
  [190] = {.lex_state = 33},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 33},
  [193] = {.lex_state = 33},
  [194] = {.lex_state = 33},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 33},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 33},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 33},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 33},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 33},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 33},
  [214] = {.lex_state = 33},
  [215] = {.lex_state = 33},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 33},
  [218] = {.lex_state = 33},
  [219] = {.lex_state = 3},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 33},
  [223] = {.lex_state = 33},
  [224] = {.lex_state = 33},
  [225] = {.lex_state = 33},
  [226] = {.lex_state = 33},
  [227] = {.lex_state = 33},
  [228] = {.lex_state = 33},
  [229] = {.lex_state = 33},
  [230] = {.lex_state = 33},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 33},
  [233] = {.lex_state = 33},
  [234] = {.lex_state = 4},
  [235] = {.lex_state = 33},
  [236] = {.lex_state = 33},
  [237] = {.lex_state = 33},
  [238] = {.lex_state = 33},
  [239] = {.lex_state = 33},
  [240] = {.lex_state = 3},
  [241] = {.lex_state = 4},
  [242] = {.lex_state = 33},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 33},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 33},
  [249] = {.lex_state = 33},
  [250] = {.lex_state = 3},
  [251] = {.lex_state = 4},
  [252] = {.lex_state = 33},
  [253] = {.lex_state = 33},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 33},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 33},
  [264] = {.lex_state = 33},
  [265] = {.lex_state = 33},
  [266] = {.lex_state = 33},
  [267] = {.lex_state = 3},
  [268] = {.lex_state = 4},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 3},
  [271] = {.lex_state = 4},
  [272] = {.lex_state = 4},
  [273] = {.lex_state = 3},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 33},
  [276] = {.lex_state = 33},
  [277] = {.lex_state = 33},
  [278] = {.lex_state = 3},
  [279] = {.lex_state = 4},
  [280] = {.lex_state = 33},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
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
    [sym_source_file] = STATE(288),
    [sym__top_level_item] = STATE(266),
    [sym__statement] = STATE(266),
    [sym_unary_expression] = STATE(70),
    [sym__expression] = STATE(90),
    [sym_composite_literal] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_expression_list] = STATE(257),
    [sym_block] = STATE(218),
    [sym_assignment_statement] = STATE(218),
    [sym_for_statement] = STATE(218),
    [sym_call_expression] = STATE(70),
    [sym_if_statement] = STATE(218),
    [sym__if_stmt] = STATE(253),
    [sym__if_elif_stmt] = STATE(214),
    [sym__if_elif_else_stmt] = STATE(242),
    [sym__if_else_stmt] = STATE(237),
    [sym_binary_expression] = STATE(70),
    [sym_tuple_literal] = STATE(83),
    [sym_list_literal] = STATE(83),
    [sym_dict_literal] = STATE(83),
    [sym_true] = STATE(70),
    [sym_false] = STATE(70),
    [sym_empty_statement] = STATE(218),
    [sym_return_statement] = STATE(218),
    [sym_quoted_string] = STATE(81),
    [sym_multiline_string] = STATE(81),
    [sym_string_literal] = STATE(70),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_for] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [sym_int_literal] = ACTIONS(21),
    [sym_float_literal] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_imaginary_literal] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_True] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_False] = ACTIONS(29),
    [sym_continue_statement] = ACTIONS(31),
    [sym_break_statement] = ACTIONS(31),
    [anon_sym_return] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
  },
  [2] = {
    [sym__statement] = STATE(192),
    [sym_unary_expression] = STATE(70),
    [sym__expression] = STATE(91),
    [sym_composite_literal] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_expression_list] = STATE(220),
    [sym_block] = STATE(222),
    [sym__statement_list] = STATE(290),
    [sym_assignment_statement] = STATE(222),
    [sym_for_statement] = STATE(222),
    [sym_call_expression] = STATE(70),
    [sym_if_statement] = STATE(222),
    [sym__if_stmt] = STATE(213),
    [sym__if_elif_stmt] = STATE(215),
    [sym__if_elif_else_stmt] = STATE(252),
    [sym__if_else_stmt] = STATE(235),
    [sym_binary_expression] = STATE(70),
    [sym_tuple_literal] = STATE(83),
    [sym_list_literal] = STATE(83),
    [sym_dict_literal] = STATE(83),
    [sym_dict_kv] = STATE(221),
    [sym_true] = STATE(70),
    [sym_false] = STATE(70),
    [sym_empty_statement] = STATE(222),
    [sym_return_statement] = STATE(222),
    [sym_quoted_string] = STATE(81),
    [sym_multiline_string] = STATE(81),
    [sym_string_literal] = STATE(70),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_for] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_int_literal] = ACTIONS(21),
    [sym_float_literal] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_imaginary_literal] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_True] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_False] = ACTIONS(29),
    [sym_continue_statement] = ACTIONS(53),
    [sym_break_statement] = ACTIONS(53),
    [anon_sym_return] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
  },
  [3] = {
    [sym__top_level_item] = STATE(248),
    [sym__statement] = STATE(248),
    [sym_unary_expression] = STATE(70),
    [sym__expression] = STATE(90),
    [sym_composite_literal] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_expression_list] = STATE(257),
    [sym_block] = STATE(218),
    [sym_assignment_statement] = STATE(218),
    [sym_for_statement] = STATE(218),
    [sym_call_expression] = STATE(70),
    [sym_if_statement] = STATE(218),
    [sym__if_stmt] = STATE(253),
    [sym__if_elif_stmt] = STATE(214),
    [sym__if_elif_else_stmt] = STATE(242),
    [sym__if_else_stmt] = STATE(237),
    [sym_binary_expression] = STATE(70),
    [sym_tuple_literal] = STATE(83),
    [sym_list_literal] = STATE(83),
    [sym_dict_literal] = STATE(83),
    [sym_true] = STATE(70),
    [sym_false] = STATE(70),
    [sym_empty_statement] = STATE(218),
    [sym_return_statement] = STATE(218),
    [sym_quoted_string] = STATE(81),
    [sym_multiline_string] = STATE(81),
    [sym_string_literal] = STATE(70),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_for] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [sym_int_literal] = ACTIONS(21),
    [sym_float_literal] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_imaginary_literal] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_True] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_False] = ACTIONS(29),
    [sym_continue_statement] = ACTIONS(31),
    [sym_break_statement] = ACTIONS(31),
    [anon_sym_return] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
  },
  [4] = {
    [sym__top_level_item] = STATE(280),
    [sym__statement] = STATE(280),
    [sym_unary_expression] = STATE(70),
    [sym__expression] = STATE(90),
    [sym_composite_literal] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_expression_list] = STATE(220),
    [sym_block] = STATE(222),
    [sym_assignment_statement] = STATE(222),
    [sym_for_statement] = STATE(222),
    [sym_call_expression] = STATE(70),
    [sym_if_statement] = STATE(222),
    [sym__if_stmt] = STATE(213),
    [sym__if_elif_stmt] = STATE(215),
    [sym__if_elif_else_stmt] = STATE(252),
    [sym__if_else_stmt] = STATE(235),
    [sym_binary_expression] = STATE(70),
    [sym_tuple_literal] = STATE(83),
    [sym_list_literal] = STATE(83),
    [sym_dict_literal] = STATE(83),
    [sym_true] = STATE(70),
    [sym_false] = STATE(70),
    [sym_empty_statement] = STATE(222),
    [sym_return_statement] = STATE(222),
    [sym_quoted_string] = STATE(81),
    [sym_multiline_string] = STATE(81),
    [sym_string_literal] = STATE(70),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_identifier] = ACTIONS(61),
    [anon_sym_SEMI] = ACTIONS(64),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_for] = ACTIONS(76),
    [anon_sym_if] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [sym_int_literal] = ACTIONS(82),
    [sym_float_literal] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(85),
    [sym_imaginary_literal] = ACTIONS(88),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_True] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(94),
    [anon_sym_False] = ACTIONS(94),
    [sym_continue_statement] = ACTIONS(97),
    [sym_break_statement] = ACTIONS(97),
    [anon_sym_return] = ACTIONS(100),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(106),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(109),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(112),
  },
  [5] = {
    [sym__statement] = STATE(192),
    [sym_unary_expression] = STATE(70),
    [sym__expression] = STATE(91),
    [sym_composite_literal] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_expression_list] = STATE(220),
    [sym_block] = STATE(222),
    [sym__statement_list] = STATE(289),
    [sym_assignment_statement] = STATE(222),
    [sym_for_statement] = STATE(222),
    [sym_call_expression] = STATE(70),
    [sym_if_statement] = STATE(222),
    [sym__if_stmt] = STATE(213),
    [sym__if_elif_stmt] = STATE(215),
    [sym__if_elif_else_stmt] = STATE(252),
    [sym__if_else_stmt] = STATE(235),
    [sym_binary_expression] = STATE(70),
    [sym_tuple_literal] = STATE(83),
    [sym_list_literal] = STATE(83),
    [sym_dict_literal] = STATE(83),
    [sym_dict_kv] = STATE(221),
    [sym_true] = STATE(70),
    [sym_false] = STATE(70),
    [sym_empty_statement] = STATE(222),
    [sym_return_statement] = STATE(222),
    [sym_quoted_string] = STATE(81),
    [sym_multiline_string] = STATE(81),
    [sym_string_literal] = STATE(70),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_for] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_int_literal] = ACTIONS(21),
    [sym_float_literal] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_imaginary_literal] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_True] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_False] = ACTIONS(29),
    [sym_continue_statement] = ACTIONS(53),
    [sym_break_statement] = ACTIONS(53),
    [anon_sym_return] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
  },
  [6] = {
    [sym__statement] = STATE(192),
    [sym_unary_expression] = STATE(70),
    [sym__expression] = STATE(90),
    [sym_composite_literal] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_expression_list] = STATE(220),
    [sym_block] = STATE(222),
    [sym__statement_list] = STATE(290),
    [sym_assignment_statement] = STATE(222),
    [sym_for_statement] = STATE(222),
    [sym_call_expression] = STATE(70),
    [sym_if_statement] = STATE(222),
    [sym__if_stmt] = STATE(213),
    [sym__if_elif_stmt] = STATE(215),
    [sym__if_elif_else_stmt] = STATE(252),
    [sym__if_else_stmt] = STATE(235),
    [sym_binary_expression] = STATE(70),
    [sym_tuple_literal] = STATE(83),
    [sym_list_literal] = STATE(83),
    [sym_dict_literal] = STATE(83),
    [sym_true] = STATE(70),
    [sym_false] = STATE(70),
    [sym_empty_statement] = STATE(222),
    [sym_return_statement] = STATE(222),
    [sym_quoted_string] = STATE(81),
    [sym_multiline_string] = STATE(81),
    [sym_string_literal] = STATE(70),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_for] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_int_literal] = ACTIONS(21),
    [sym_float_literal] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_imaginary_literal] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_True] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_False] = ACTIONS(29),
    [sym_continue_statement] = ACTIONS(53),
    [sym_break_statement] = ACTIONS(53),
    [anon_sym_return] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
  },
  [7] = {
    [sym__statement] = STATE(192),
    [sym_unary_expression] = STATE(70),
    [sym__expression] = STATE(90),
    [sym_composite_literal] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_expression_list] = STATE(220),
    [sym_block] = STATE(222),
    [sym__statement_list] = STATE(289),
    [sym_assignment_statement] = STATE(222),
    [sym_for_statement] = STATE(222),
    [sym_call_expression] = STATE(70),
    [sym_if_statement] = STATE(222),
    [sym__if_stmt] = STATE(213),
    [sym__if_elif_stmt] = STATE(215),
    [sym__if_elif_else_stmt] = STATE(252),
    [sym__if_else_stmt] = STATE(235),
    [sym_binary_expression] = STATE(70),
    [sym_tuple_literal] = STATE(83),
    [sym_list_literal] = STATE(83),
    [sym_dict_literal] = STATE(83),
    [sym_true] = STATE(70),
    [sym_false] = STATE(70),
    [sym_empty_statement] = STATE(222),
    [sym_return_statement] = STATE(222),
    [sym_quoted_string] = STATE(81),
    [sym_multiline_string] = STATE(81),
    [sym_string_literal] = STATE(70),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_for] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_int_literal] = ACTIONS(21),
    [sym_float_literal] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_imaginary_literal] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_True] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_False] = ACTIONS(29),
    [sym_continue_statement] = ACTIONS(53),
    [sym_break_statement] = ACTIONS(53),
    [anon_sym_return] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
  },
  [8] = {
    [sym__statement] = STATE(259),
    [sym_unary_expression] = STATE(70),
    [sym__expression] = STATE(90),
    [sym_composite_literal] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_expression_list] = STATE(220),
    [sym_block] = STATE(222),
    [sym_assignment_statement] = STATE(222),
    [sym_for_statement] = STATE(222),
    [sym_call_expression] = STATE(70),
    [sym_if_statement] = STATE(222),
    [sym__if_stmt] = STATE(213),
    [sym__if_elif_stmt] = STATE(215),
    [sym__if_elif_else_stmt] = STATE(252),
    [sym__if_else_stmt] = STATE(235),
    [sym_binary_expression] = STATE(70),
    [sym_tuple_literal] = STATE(83),
    [sym_list_literal] = STATE(83),
    [sym_dict_literal] = STATE(83),
    [sym_true] = STATE(70),
    [sym_false] = STATE(70),
    [sym_empty_statement] = STATE(222),
    [sym_return_statement] = STATE(222),
    [sym_quoted_string] = STATE(81),
    [sym_multiline_string] = STATE(81),
    [sym_string_literal] = STATE(70),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_for] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_int_literal] = ACTIONS(21),
    [sym_float_literal] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_imaginary_literal] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_True] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_False] = ACTIONS(29),
    [sym_continue_statement] = ACTIONS(53),
    [sym_break_statement] = ACTIONS(53),
    [anon_sym_return] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
  },
  [9] = {
    [sym__statement] = STATE(259),
    [sym_unary_expression] = STATE(70),
    [sym__expression] = STATE(90),
    [sym_composite_literal] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_expression_list] = STATE(220),
    [sym_block] = STATE(222),
    [sym_assignment_statement] = STATE(222),
    [sym_for_statement] = STATE(222),
    [sym_call_expression] = STATE(70),
    [sym_if_statement] = STATE(222),
    [sym__if_stmt] = STATE(213),
    [sym__if_elif_stmt] = STATE(215),
    [sym__if_elif_else_stmt] = STATE(252),
    [sym__if_else_stmt] = STATE(235),
    [sym_binary_expression] = STATE(70),
    [sym_tuple_literal] = STATE(83),
    [sym_list_literal] = STATE(83),
    [sym_dict_literal] = STATE(83),
    [sym_true] = STATE(70),
    [sym_false] = STATE(70),
    [sym_empty_statement] = STATE(222),
    [sym_return_statement] = STATE(222),
    [sym_quoted_string] = STATE(81),
    [sym_multiline_string] = STATE(81),
    [sym_string_literal] = STATE(70),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(123),
    [anon_sym_for] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_int_literal] = ACTIONS(21),
    [sym_float_literal] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_imaginary_literal] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_True] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_False] = ACTIONS(29),
    [sym_continue_statement] = ACTIONS(53),
    [sym_break_statement] = ACTIONS(53),
    [anon_sym_return] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_imaginary_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SEMI,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_return,
    STATE(90), 1,
      sym__expression,
    STATE(213), 1,
      sym__if_stmt,
    STATE(215), 1,
      sym__if_elif_stmt,
    STATE(220), 1,
      sym_expression_list,
    STATE(235), 1,
      sym__if_else_stmt,
    STATE(252), 1,
      sym__if_elif_else_stmt,
    STATE(259), 1,
      sym__statement,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(29), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(53), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(81), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(83), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(222), 6,
      sym_block,
      sym_assignment_statement,
      sym_for_statement,
      sym_if_statement,
      sym_empty_statement,
      sym_return_statement,
    STATE(70), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [111] = 20,
    ACTIONS(127), 1,
      sym_identifier,
    ACTIONS(129), 1,
      anon_sym_SEMI,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(93), 1,
      sym__expression,
    STATE(217), 1,
      sym_expression_list,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(145), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(145), 2,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(139), 3,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
    STATE(144), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(133), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [188] = 20,
    ACTIONS(125), 1,
      anon_sym_LF,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      anon_sym_LBRACE,
    ACTIONS(165), 1,
      anon_sym_LBRACK,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(177), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(92), 1,
      sym__expression,
    STATE(238), 1,
      sym_expression_list,
    ACTIONS(129), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(157), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(169), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(143), 2,
      sym_quoted_string,
      sym_multiline_string,
    ACTIONS(163), 3,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
    STATE(147), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(107), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [265] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_imaginary_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    STATE(164), 1,
      sym__expression,
    STATE(221), 1,
      sym_dict_kv,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(29), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(81), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(83), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(70), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [340] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_imaginary_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    STATE(164), 1,
      sym__expression,
    STATE(274), 1,
      sym_dict_kv,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(29), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(81), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(83), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(70), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [415] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_imaginary_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    STATE(164), 1,
      sym__expression,
    STATE(245), 1,
      sym_dict_kv,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(29), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(81), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(83), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(70), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [490] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_imaginary_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    STATE(164), 1,
      sym__expression,
    STATE(283), 1,
      sym_dict_kv,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(29), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(81), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(83), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(70), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [562] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_imaginary_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(29), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(81), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(83), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(70), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [634] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_imaginary_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    ACTIONS(189), 1,
      anon_sym_RBRACK,
    STATE(157), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(29), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(81), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(83), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(70), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [706] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_imaginary_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym_RBRACK,
    STATE(153), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(29), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(81), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(83), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(70), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [778] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_imaginary_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    STATE(155), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(29), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(81), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(83), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(70), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [850] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(205), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(93), 1,
      sym__expression,
    STATE(263), 1,
      sym_expression_list,
    ACTIONS(139), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(145), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(195), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(145), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(144), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(133), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [922] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_imaginary_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    ACTIONS(209), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(29), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(81), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(83), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(70), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [994] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_identifier,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(217), 1,
      anon_sym_LBRACK,
    ACTIONS(219), 1,
      sym_imaginary_literal,
    ACTIONS(221), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(223), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(92), 1,
      sym__expression,
    STATE(225), 1,
      sym_expression_list,
    ACTIONS(163), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(169), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(211), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(143), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(147), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(107), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [1066] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_imaginary_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(29), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(81), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(83), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(70), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [1138] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_imaginary_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    STATE(161), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(29), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(81), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(83), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(70), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [1207] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_imaginary_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    STATE(166), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(29), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(81), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(83), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(70), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [1276] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_imaginary_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(29), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(81), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(83), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(70), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [1345] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_identifier,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(217), 1,
      anon_sym_LBRACK,
    ACTIONS(219), 1,
      sym_imaginary_literal,
    ACTIONS(221), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(223), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(142), 1,
      sym__expression,
    ACTIONS(163), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(169), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(211), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(143), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(147), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(107), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [1414] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_imaginary_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    STATE(160), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(29), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(81), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(83), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(70), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [1483] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_imaginary_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    STATE(165), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(29), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(81), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(83), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(70), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [1552] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_imaginary_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    STATE(80), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(29), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(81), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(83), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(70), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [1621] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_imaginary_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    STATE(151), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(29), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(81), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(83), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(70), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [1690] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(205), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(146), 1,
      sym__expression,
    ACTIONS(139), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(145), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(195), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(145), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(144), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(133), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [1759] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_imaginary_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    STATE(163), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(29), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(81), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(83), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(70), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [1828] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_imaginary_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    STATE(159), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(29), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(81), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(83), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(70), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [1897] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_identifier,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(217), 1,
      anon_sym_LBRACK,
    ACTIONS(219), 1,
      sym_imaginary_literal,
    ACTIONS(221), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(223), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(117), 1,
      sym__expression,
    ACTIONS(163), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(169), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(211), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(143), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(147), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(107), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [1966] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_identifier,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(217), 1,
      anon_sym_LBRACK,
    ACTIONS(219), 1,
      sym_imaginary_literal,
    ACTIONS(221), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(223), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(119), 1,
      sym__expression,
    ACTIONS(163), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(169), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(211), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(143), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(147), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(107), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [2035] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_identifier,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(217), 1,
      anon_sym_LBRACK,
    ACTIONS(219), 1,
      sym_imaginary_literal,
    ACTIONS(221), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(223), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(120), 1,
      sym__expression,
    ACTIONS(163), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(169), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(211), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(143), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(147), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(107), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [2104] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_identifier,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(217), 1,
      anon_sym_LBRACK,
    ACTIONS(219), 1,
      sym_imaginary_literal,
    ACTIONS(221), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(223), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(121), 1,
      sym__expression,
    ACTIONS(163), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(169), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(211), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(143), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(147), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(107), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [2173] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_imaginary_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(29), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(81), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(83), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(70), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [2242] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_identifier,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(217), 1,
      anon_sym_LBRACK,
    ACTIONS(219), 1,
      sym_imaginary_literal,
    ACTIONS(221), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(223), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(123), 1,
      sym__expression,
    ACTIONS(163), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(169), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(211), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(143), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(147), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(107), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [2311] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_identifier,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(217), 1,
      anon_sym_LBRACK,
    ACTIONS(219), 1,
      sym_imaginary_literal,
    ACTIONS(221), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(223), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(124), 1,
      sym__expression,
    ACTIONS(163), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(169), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(211), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(143), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(147), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(107), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [2380] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_imaginary_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    STATE(152), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(29), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(81), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(83), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(70), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [2449] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(205), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(125), 1,
      sym__expression,
    ACTIONS(139), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(145), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(195), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(145), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(144), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(133), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [2518] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(205), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(122), 1,
      sym__expression,
    ACTIONS(139), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(145), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(195), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(145), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(144), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(133), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [2587] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(205), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(116), 1,
      sym__expression,
    ACTIONS(139), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(145), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(195), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(145), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(144), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(133), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [2656] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(205), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(102), 1,
      sym__expression,
    ACTIONS(139), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(145), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(195), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(145), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(144), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(133), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [2725] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(205), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(109), 1,
      sym__expression,
    ACTIONS(139), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(145), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(195), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(145), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(144), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(133), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [2794] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_imaginary_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    STATE(156), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(29), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(81), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(83), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(70), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [2863] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_imaginary_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    STATE(162), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(29), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(81), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(83), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(70), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [2932] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      sym_imaginary_literal,
    ACTIONS(205), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(115), 1,
      sym__expression,
    ACTIONS(139), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(145), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(195), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(145), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(144), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(133), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [3001] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_imaginary_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(29), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(81), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(83), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(70), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [3070] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_imaginary_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(29), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(81), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(83), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(70), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [3139] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_imaginary_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(29), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(81), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(83), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(70), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [3208] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_imaginary_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(29), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(81), 2,
      sym_quoted_string,
      sym_multiline_string,
    STATE(83), 3,
      sym_tuple_literal,
      sym_list_literal,
      sym_dict_literal,
    STATE(70), 8,
      sym_unary_expression,
      sym_composite_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
      sym_true,
      sym_false,
      sym_string_literal,
  [3277] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym_argument_list,
    ACTIONS(231), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(227), 19,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      anon_sym_RBRACK,
  [3315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(233), 19,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      anon_sym_RBRACK,
  [3347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(237), 19,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      anon_sym_RBRACK,
  [3379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_imaginary_literal,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(241), 14,
      anon_sym_for,
      anon_sym_if,
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
  [3411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(243), 19,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      anon_sym_RBRACK,
  [3443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(247), 19,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      anon_sym_RBRACK,
  [3475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(251), 19,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      anon_sym_RBRACK,
  [3507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(255), 19,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      anon_sym_RBRACK,
  [3539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(259), 19,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      anon_sym_RBRACK,
  [3571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(263), 19,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      anon_sym_RBRACK,
  [3603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(267), 19,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      anon_sym_RBRACK,
  [3635] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(271), 19,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      anon_sym_RBRACK,
  [3667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(275), 19,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      anon_sym_RBRACK,
  [3699] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(283), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(285), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(293), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(281), 9,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_to,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_RBRACK,
  [3743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(227), 19,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      anon_sym_RBRACK,
  [3775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(295), 19,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      anon_sym_RBRACK,
  [3807] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(283), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(285), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(281), 11,
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
      anon_sym_RBRACK,
  [3849] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(285), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(283), 4,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(281), 15,
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
      anon_sym_RBRACK,
  [3887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 19,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      anon_sym_RBRACK,
  [3919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(281), 19,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      anon_sym_RBRACK,
  [3951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(303), 19,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      anon_sym_RBRACK,
  [3983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(307), 19,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      anon_sym_RBRACK,
  [4015] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(285), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(283), 4,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(281), 17,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      anon_sym_RBRACK,
  [4051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(311), 19,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      anon_sym_RBRACK,
  [4083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(315), 19,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      anon_sym_RBRACK,
  [4115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 19,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      anon_sym_RBRACK,
  [4147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(323), 19,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      anon_sym_RBRACK,
  [4179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(327), 19,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      anon_sym_RBRACK,
  [4211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(331), 19,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      anon_sym_RBRACK,
  [4243] = 4,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_SEMI,
    ACTIONS(335), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(253), 19,
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
  [4275] = 4,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_LF,
    ACTIONS(337), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(253), 19,
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
  [4307] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(285), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(293), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(341), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(343), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(339), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_RBRACK,
  [4350] = 5,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    STATE(118), 1,
      sym_argument_list,
    ACTIONS(227), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(231), 17,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [4383] = 5,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_LF,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    STATE(138), 1,
      sym_argument_list,
    ACTIONS(231), 18,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [4416] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(353), 1,
      anon_sym_COLON_EQ,
    STATE(179), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(285), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(293), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(343), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(351), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4462] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(351), 1,
      anon_sym_EQ,
    ACTIONS(353), 1,
      anon_sym_COLON_EQ,
    ACTIONS(355), 1,
      anon_sym_COLON,
    STATE(179), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(285), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(293), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(343), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4510] = 10,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LF,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(351), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(358), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(366), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(368), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(362), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(364), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4552] = 10,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_SEMI,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    STATE(187), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(353), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(370), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(380), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(374), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(376), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4594] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_LF,
    ACTIONS(309), 18,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [4621] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_LF,
    ACTIONS(313), 18,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [4648] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(323), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(325), 17,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [4675] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(311), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(313), 17,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [4702] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(307), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(309), 17,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [4729] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(295), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(297), 17,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [4756] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(259), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(261), 17,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [4783] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(263), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(265), 17,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [4810] = 7,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(370), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(374), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(283), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(376), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4845] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(253), 17,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [4872] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(271), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(273), 17,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [4899] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(277), 17,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [4926] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(303), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(305), 17,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [4953] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_LF,
    ACTIONS(231), 18,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [4980] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LF,
    ACTIONS(269), 18,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5007] = 6,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(370), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(374), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(283), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(376), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [5040] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LF,
    ACTIONS(277), 18,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5067] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LF,
    ACTIONS(265), 18,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5094] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_LF,
    ACTIONS(239), 18,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5121] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_LF,
    ACTIONS(273), 18,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5148] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_LF,
    ACTIONS(305), 18,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5175] = 5,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(370), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(374), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(283), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5206] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(283), 17,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5233] = 7,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_LF,
    ACTIONS(358), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(366), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(362), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(283), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(364), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [5268] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(245), 17,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5295] = 6,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_LF,
    ACTIONS(358), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(362), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(364), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(283), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5328] = 5,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_LF,
    ACTIONS(358), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(362), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(283), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5359] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_LF,
    ACTIONS(283), 18,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5386] = 8,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(339), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(341), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(370), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(380), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(374), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(376), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [5423] = 8,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_LF,
    ACTIONS(358), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(366), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(368), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(341), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(362), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(364), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [5460] = 4,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_LF,
    ACTIONS(362), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(283), 15,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5489] = 4,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(374), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(283), 14,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5518] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(331), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(333), 17,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5545] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_LF,
    ACTIONS(333), 18,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5572] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_LF,
    ACTIONS(325), 18,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5599] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(237), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(239), 17,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5626] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_LF,
    ACTIONS(297), 18,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5653] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LF,
    ACTIONS(261), 18,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5680] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_LF,
    ACTIONS(253), 18,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5707] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(227), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(231), 17,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5734] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(267), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(269), 17,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5761] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(249), 17,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5788] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(255), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(257), 17,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5815] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(233), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(235), 17,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5842] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LF,
    ACTIONS(245), 18,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5869] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_LF,
    ACTIONS(257), 18,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5896] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LF,
    ACTIONS(235), 18,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5923] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_LF,
    ACTIONS(301), 18,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5950] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LF,
    ACTIONS(317), 18,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [5977] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_LF,
    ACTIONS(321), 18,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6004] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(327), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(329), 17,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6031] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(319), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(321), 17,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6058] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(315), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(317), 17,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6085] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LF,
    ACTIONS(329), 18,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6112] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(299), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(301), 17,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6139] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LF,
    ACTIONS(249), 18,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [6166] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(382), 1,
      anon_sym_RBRACK,
    STATE(269), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(285), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(293), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(343), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6208] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    STATE(247), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(285), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(293), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(343), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6250] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    STATE(254), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(285), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(293), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(343), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6292] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(388), 1,
      anon_sym_RBRACK,
    STATE(258), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(285), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(293), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(343), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6334] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(262), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(285), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(293), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(343), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6376] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(285), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(293), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(343), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6418] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(285), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(293), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(343), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6460] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      anon_sym_RBRACK,
    STATE(256), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(285), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(293), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(343), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6502] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    STATE(244), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(285), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(293), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(343), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6544] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(400), 1,
      anon_sym_LBRACE,
    STATE(167), 1,
      sym_block,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(285), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(293), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(343), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6583] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(400), 1,
      anon_sym_LBRACE,
    STATE(183), 1,
      sym_block,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(285), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(293), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(343), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6622] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(285), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(293), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(343), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(402), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6659] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(404), 1,
      anon_sym_LBRACE,
    STATE(169), 1,
      sym_block,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(285), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(293), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(343), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6698] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(404), 1,
      anon_sym_LBRACE,
    STATE(178), 1,
      sym_block,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(285), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(293), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(343), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6737] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(406), 1,
      anon_sym_COLON,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(285), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(293), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(343), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6773] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_LBRACE,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(285), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(293), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(343), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6809] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(410), 1,
      anon_sym_to,
    ACTIONS(279), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(285), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(293), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(343), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6845] = 10,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(412), 1,
      ts_builtin_sym_end,
    ACTIONS(414), 1,
      anon_sym_LF,
    ACTIONS(416), 1,
      anon_sym_SEMI,
    ACTIONS(418), 1,
      anon_sym_elif,
    ACTIONS(420), 1,
      anon_sym_else,
    STATE(171), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(176), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(181), 1,
      sym_elif_clause,
    STATE(232), 1,
      sym_else_clause,
  [6876] = 9,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_LF,
    ACTIONS(426), 1,
      anon_sym_elif,
    ACTIONS(428), 1,
      anon_sym_else,
    STATE(173), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(186), 1,
      sym_elif_clause,
    STATE(194), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(275), 1,
      sym_else_clause,
    ACTIONS(424), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6905] = 9,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_elif,
    ACTIONS(428), 1,
      anon_sym_else,
    ACTIONS(430), 1,
      anon_sym_LF,
    STATE(168), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(177), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(186), 1,
      sym_elif_clause,
    STATE(246), 1,
      sym_else_clause,
    ACTIONS(416), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6934] = 10,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_elif,
    ACTIONS(420), 1,
      anon_sym_else,
    ACTIONS(432), 1,
      ts_builtin_sym_end,
    ACTIONS(434), 1,
      anon_sym_LF,
    ACTIONS(436), 1,
      anon_sym_SEMI,
    STATE(175), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(181), 1,
      sym_elif_clause,
    STATE(205), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(227), 1,
      sym_else_clause,
  [6965] = 10,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_elif,
    ACTIONS(420), 1,
      anon_sym_else,
    ACTIONS(424), 1,
      anon_sym_SEMI,
    ACTIONS(438), 1,
      ts_builtin_sym_end,
    ACTIONS(440), 1,
      anon_sym_LF,
    STATE(175), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(181), 1,
      sym_elif_clause,
    STATE(211), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(228), 1,
      sym_else_clause,
  [6996] = 9,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_elif,
    ACTIONS(428), 1,
      anon_sym_else,
    ACTIONS(442), 1,
      anon_sym_LF,
    STATE(173), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(186), 1,
      sym_elif_clause,
    STATE(193), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(265), 1,
      sym_else_clause,
    ACTIONS(436), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [7025] = 6,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_LF,
    ACTIONS(448), 1,
      anon_sym_elif,
    STATE(173), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(186), 1,
      sym_elif_clause,
    ACTIONS(446), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_else,
  [7046] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_COLON,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(339), 4,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_RBRACK,
  [7065] = 6,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_elif,
    STATE(175), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(181), 1,
      sym_elif_clause,
    ACTIONS(444), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(446), 2,
      anon_sym_SEMI,
      anon_sym_else,
  [7086] = 8,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_elif,
    ACTIONS(420), 1,
      anon_sym_else,
    ACTIONS(457), 1,
      anon_sym_LF,
    STATE(170), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(181), 1,
      sym_elif_clause,
    STATE(208), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(229), 1,
      sym_else_clause,
  [7111] = 8,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_elif,
    ACTIONS(428), 1,
      anon_sym_else,
    ACTIONS(457), 1,
      anon_sym_LF,
    STATE(172), 1,
      aux_sym__if_elif_stmt_repeat2,
    STATE(186), 1,
      sym_elif_clause,
    STATE(208), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(276), 1,
      sym_else_clause,
  [7136] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_LF,
    ACTIONS(461), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
  [7149] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(463), 1,
      anon_sym_COLON,
    STATE(174), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(465), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [7166] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_LF,
    ACTIONS(469), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
  [7179] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(471), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(473), 3,
      anon_sym_SEMI,
      anon_sym_elif,
      anon_sym_else,
  [7192] = 5,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_SEMI,
    ACTIONS(475), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(339), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [7209] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(459), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(461), 3,
      anon_sym_SEMI,
      anon_sym_elif,
      anon_sym_else,
  [7222] = 5,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_LF,
    ACTIONS(478), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(341), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [7239] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_LF,
    ACTIONS(337), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
  [7252] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_LF,
    ACTIONS(473), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
  [7265] = 5,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    ACTIONS(463), 1,
      anon_sym_SEMI,
    STATE(182), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(465), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [7282] = 5,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(465), 1,
      anon_sym_LF,
    STATE(184), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(463), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [7299] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(335), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(337), 3,
      anon_sym_SEMI,
      anon_sym_elif,
      anon_sym_else,
  [7312] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(467), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(469), 3,
      anon_sym_SEMI,
      anon_sym_elif,
      anon_sym_else,
  [7325] = 4,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_SQUOTE,
    STATE(206), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(483), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [7339] = 5,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_LF,
    ACTIONS(487), 1,
      anon_sym_SEMI,
    ACTIONS(489), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      aux_sym__statement_list_repeat1,
  [7355] = 5,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_else,
    ACTIONS(457), 1,
      anon_sym_LF,
    STATE(208), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(249), 1,
      sym_else_clause,
  [7371] = 5,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_else,
    ACTIONS(457), 1,
      anon_sym_LF,
    STATE(208), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(264), 1,
      sym_else_clause,
  [7387] = 4,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_SQUOTE,
    STATE(206), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(483), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [7401] = 5,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_DQUOTE,
    ACTIONS(493), 1,
      sym_escape_sequence,
    ACTIONS(495), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(210), 1,
      aux_sym__quoted_string_content_double,
  [7417] = 5,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_LF,
    ACTIONS(500), 1,
      anon_sym_SEMI,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
    STATE(197), 1,
      aux_sym__statement_list_repeat1,
  [7433] = 4,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_SQUOTE,
    STATE(195), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(507), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [7447] = 5,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LF,
    ACTIONS(511), 1,
      anon_sym_SEMI,
    ACTIONS(513), 1,
      anon_sym_RBRACE,
    STATE(197), 1,
      aux_sym__statement_list_repeat1,
  [7463] = 5,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(515), 1,
      sym_escape_sequence,
    ACTIONS(517), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(196), 1,
      aux_sym__quoted_string_content_double,
  [7479] = 4,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    STATE(206), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(483), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [7493] = 5,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      sym_escape_sequence,
    ACTIONS(525), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(207), 1,
      aux_sym__quoted_string_content_double,
  [7509] = 5,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym_escape_sequence,
    ACTIONS(531), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(209), 1,
      aux_sym__quoted_string_content_double,
  [7525] = 4,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_SQUOTE,
    STATE(191), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(533), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [7539] = 5,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_else,
    ACTIONS(457), 1,
      anon_sym_LF,
    STATE(208), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(224), 1,
      sym_else_clause,
  [7555] = 4,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_SQUOTE,
    STATE(206), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(537), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [7569] = 5,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_DQUOTE,
    ACTIONS(493), 1,
      sym_escape_sequence,
    ACTIONS(495), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(210), 1,
      aux_sym__quoted_string_content_double,
  [7585] = 4,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_LF,
    STATE(208), 1,
      aux_sym__if_elif_stmt_repeat1,
    ACTIONS(543), 2,
      anon_sym_elif,
      anon_sym_else,
  [7599] = 5,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym_escape_sequence,
    ACTIONS(495), 1,
      aux_sym__quoted_string_content_double_token1,
    ACTIONS(519), 1,
      anon_sym_DQUOTE,
    STATE(210), 1,
      aux_sym__quoted_string_content_double,
  [7615] = 5,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_DQUOTE,
    ACTIONS(547), 1,
      sym_escape_sequence,
    ACTIONS(550), 1,
      aux_sym__quoted_string_content_double_token1,
    STATE(210), 1,
      aux_sym__quoted_string_content_double,
  [7631] = 5,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_else,
    ACTIONS(457), 1,
      anon_sym_LF,
    STATE(208), 1,
      aux_sym__if_elif_stmt_repeat1,
    STATE(226), 1,
      sym_else_clause,
  [7647] = 4,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    STATE(201), 1,
      aux_sym__quoted_string_content_single,
    ACTIONS(553), 2,
      sym_escape_sequence,
      aux_sym__quoted_string_content_single_token1,
  [7661] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_LF,
    ACTIONS(557), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [7672] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_SEMI,
    ACTIONS(559), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [7683] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_LF,
    ACTIONS(561), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [7694] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    ACTIONS(565), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      aux_sym_dict_literal_repeat1,
  [7707] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_SEMI,
    ACTIONS(567), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [7718] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_SEMI,
    ACTIONS(571), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [7729] = 4,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(575), 1,
      aux_sym_other_lit_token1,
    ACTIONS(577), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(273), 1,
      aux_sym_other_lit_repeat1,
  [7742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_COLON,
    ACTIONS(581), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [7753] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    ACTIONS(583), 1,
      anon_sym_RBRACE,
    STATE(216), 1,
      aux_sym_dict_literal_repeat1,
  [7766] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_LF,
    ACTIONS(573), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [7777] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_LF,
    ACTIONS(587), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [7788] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_SEMI,
    ACTIONS(589), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [7799] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_LF,
    ACTIONS(595), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [7810] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_SEMI,
    ACTIONS(597), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [7821] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_SEMI,
    ACTIONS(601), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [7832] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_SEMI,
    ACTIONS(605), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [7843] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_SEMI,
    ACTIONS(609), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [7854] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_SEMI,
    ACTIONS(613), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [7865] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      aux_sym_expression_list_repeat1,
  [7878] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_SEMI,
    ACTIONS(619), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [7889] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_LF,
    ACTIONS(625), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [7900] = 4,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(627), 1,
      aux_sym_other_lit_token1,
    ACTIONS(630), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(234), 1,
      aux_sym_other_lit_repeat1,
  [7913] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_LF,
    ACTIONS(634), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [7924] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_SEMI,
    ACTIONS(623), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [7935] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_SEMI,
    ACTIONS(632), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [7946] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_LF,
    ACTIONS(569), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [7957] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_SEMI,
    ACTIONS(585), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [7968] = 4,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(636), 1,
      aux_sym_other_lit_token1,
    ACTIONS(638), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(250), 1,
      aux_sym_other_lit_repeat1,
  [7981] = 4,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(640), 1,
      aux_sym_other_lit_token1,
    STATE(251), 1,
      aux_sym_other_lit_repeat1,
  [7994] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(644), 1,
      anon_sym_SEMI,
    ACTIONS(642), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [8005] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    ACTIONS(649), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      aux_sym_dict_literal_repeat1,
  [8018] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      aux_sym_expression_list_repeat1,
  [8031] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    ACTIONS(653), 1,
      anon_sym_RBRACE,
    STATE(255), 1,
      aux_sym_dict_literal_repeat1,
  [8044] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_LF,
    ACTIONS(621), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [8055] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      aux_sym_expression_list_repeat1,
  [8068] = 4,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(657), 1,
      ts_builtin_sym_end,
    ACTIONS(659), 1,
      anon_sym_LF,
    ACTIONS(661), 1,
      anon_sym_SEMI,
  [8081] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_LF,
    ACTIONS(591), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [8092] = 4,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(575), 1,
      aux_sym_other_lit_token1,
    ACTIONS(663), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(273), 1,
      aux_sym_other_lit_repeat1,
  [8105] = 4,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(665), 1,
      aux_sym_other_lit_token1,
    STATE(234), 1,
      aux_sym_other_lit_repeat1,
  [8118] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_LF,
    ACTIONS(644), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [8129] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_SEMI,
    ACTIONS(555), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [8140] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(667), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      aux_sym_expression_list_repeat1,
  [8153] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    ACTIONS(669), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      aux_sym_dict_literal_repeat1,
  [8166] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(671), 1,
      anon_sym_RBRACK,
    STATE(174), 1,
      aux_sym_expression_list_repeat1,
  [8179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_COLON,
    ACTIONS(675), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
  [8190] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(677), 1,
      anon_sym_RBRACK,
    STATE(174), 1,
      aux_sym_expression_list_repeat1,
  [8203] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_LF,
    ACTIONS(503), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [8214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    ACTIONS(681), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      aux_sym_dict_literal_repeat1,
  [8227] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(683), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      aux_sym_expression_list_repeat1,
  [8240] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(685), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      aux_sym_expression_list_repeat1,
  [8253] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_SEMI,
    ACTIONS(593), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [8264] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_LF,
    ACTIONS(599), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [8275] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_LF,
    ACTIONS(603), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [8286] = 4,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_LF,
    ACTIONS(661), 1,
      anon_sym_SEMI,
  [8299] = 4,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(687), 1,
      aux_sym_other_lit_token1,
    ACTIONS(689), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(219), 1,
      aux_sym_other_lit_repeat1,
  [8312] = 4,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(665), 1,
      aux_sym_other_lit_token1,
    STATE(234), 1,
      aux_sym_other_lit_repeat1,
  [8325] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(691), 1,
      anon_sym_RBRACK,
    STATE(174), 1,
      aux_sym_expression_list_repeat1,
  [8338] = 4,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(693), 1,
      aux_sym_other_lit_token1,
    ACTIONS(695), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(278), 1,
      aux_sym_other_lit_repeat1,
  [8351] = 4,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(697), 1,
      aux_sym_other_lit_token1,
    STATE(279), 1,
      aux_sym_other_lit_repeat1,
  [8364] = 4,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(699), 1,
      aux_sym_other_lit_token1,
    STATE(268), 1,
      aux_sym_other_lit_repeat1,
  [8377] = 4,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(701), 1,
      aux_sym_other_lit_token1,
    STATE(273), 1,
      aux_sym_other_lit_repeat1,
  [8390] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    ACTIONS(704), 1,
      anon_sym_RBRACE,
    STATE(260), 1,
      aux_sym_dict_literal_repeat1,
  [8403] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_LF,
    ACTIONS(607), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [8414] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_LF,
    ACTIONS(611), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [8425] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LF,
    ACTIONS(615), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [8436] = 4,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(575), 1,
      aux_sym_other_lit_token1,
    ACTIONS(706), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(273), 1,
      aux_sym_other_lit_repeat1,
  [8449] = 4,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(665), 1,
      aux_sym_other_lit_token1,
    ACTIONS(706), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(234), 1,
      aux_sym_other_lit_repeat1,
  [8462] = 3,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_LF,
    ACTIONS(661), 1,
      anon_sym_SEMI,
  [8472] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LBRACE,
    STATE(277), 1,
      sym_block,
  [8482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LBRACE,
    STATE(233), 1,
      sym_block,
  [8492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LBRACE,
    STATE(230), 1,
      sym_block,
  [8510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_from,
    STATE(287), 1,
      sym_for_range_clause,
  [8520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_from,
    STATE(282), 1,
      sym_for_range_clause,
  [8530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LBRACE,
    STATE(236), 1,
      sym_block,
  [8540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      ts_builtin_sym_end,
  [8547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_RBRACE,
  [8554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_RBRACE,
  [8561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      sym_identifier,
  [8568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 111,
  [SMALL_STATE(12)] = 188,
  [SMALL_STATE(13)] = 265,
  [SMALL_STATE(14)] = 340,
  [SMALL_STATE(15)] = 415,
  [SMALL_STATE(16)] = 490,
  [SMALL_STATE(17)] = 562,
  [SMALL_STATE(18)] = 634,
  [SMALL_STATE(19)] = 706,
  [SMALL_STATE(20)] = 778,
  [SMALL_STATE(21)] = 850,
  [SMALL_STATE(22)] = 922,
  [SMALL_STATE(23)] = 994,
  [SMALL_STATE(24)] = 1066,
  [SMALL_STATE(25)] = 1138,
  [SMALL_STATE(26)] = 1207,
  [SMALL_STATE(27)] = 1276,
  [SMALL_STATE(28)] = 1345,
  [SMALL_STATE(29)] = 1414,
  [SMALL_STATE(30)] = 1483,
  [SMALL_STATE(31)] = 1552,
  [SMALL_STATE(32)] = 1621,
  [SMALL_STATE(33)] = 1690,
  [SMALL_STATE(34)] = 1759,
  [SMALL_STATE(35)] = 1828,
  [SMALL_STATE(36)] = 1897,
  [SMALL_STATE(37)] = 1966,
  [SMALL_STATE(38)] = 2035,
  [SMALL_STATE(39)] = 2104,
  [SMALL_STATE(40)] = 2173,
  [SMALL_STATE(41)] = 2242,
  [SMALL_STATE(42)] = 2311,
  [SMALL_STATE(43)] = 2380,
  [SMALL_STATE(44)] = 2449,
  [SMALL_STATE(45)] = 2518,
  [SMALL_STATE(46)] = 2587,
  [SMALL_STATE(47)] = 2656,
  [SMALL_STATE(48)] = 2725,
  [SMALL_STATE(49)] = 2794,
  [SMALL_STATE(50)] = 2863,
  [SMALL_STATE(51)] = 2932,
  [SMALL_STATE(52)] = 3001,
  [SMALL_STATE(53)] = 3070,
  [SMALL_STATE(54)] = 3139,
  [SMALL_STATE(55)] = 3208,
  [SMALL_STATE(56)] = 3277,
  [SMALL_STATE(57)] = 3315,
  [SMALL_STATE(58)] = 3347,
  [SMALL_STATE(59)] = 3379,
  [SMALL_STATE(60)] = 3411,
  [SMALL_STATE(61)] = 3443,
  [SMALL_STATE(62)] = 3475,
  [SMALL_STATE(63)] = 3507,
  [SMALL_STATE(64)] = 3539,
  [SMALL_STATE(65)] = 3571,
  [SMALL_STATE(66)] = 3603,
  [SMALL_STATE(67)] = 3635,
  [SMALL_STATE(68)] = 3667,
  [SMALL_STATE(69)] = 3699,
  [SMALL_STATE(70)] = 3743,
  [SMALL_STATE(71)] = 3775,
  [SMALL_STATE(72)] = 3807,
  [SMALL_STATE(73)] = 3849,
  [SMALL_STATE(74)] = 3887,
  [SMALL_STATE(75)] = 3919,
  [SMALL_STATE(76)] = 3951,
  [SMALL_STATE(77)] = 3983,
  [SMALL_STATE(78)] = 4015,
  [SMALL_STATE(79)] = 4051,
  [SMALL_STATE(80)] = 4083,
  [SMALL_STATE(81)] = 4115,
  [SMALL_STATE(82)] = 4147,
  [SMALL_STATE(83)] = 4179,
  [SMALL_STATE(84)] = 4211,
  [SMALL_STATE(85)] = 4243,
  [SMALL_STATE(86)] = 4275,
  [SMALL_STATE(87)] = 4307,
  [SMALL_STATE(88)] = 4350,
  [SMALL_STATE(89)] = 4383,
  [SMALL_STATE(90)] = 4416,
  [SMALL_STATE(91)] = 4462,
  [SMALL_STATE(92)] = 4510,
  [SMALL_STATE(93)] = 4552,
  [SMALL_STATE(94)] = 4594,
  [SMALL_STATE(95)] = 4621,
  [SMALL_STATE(96)] = 4648,
  [SMALL_STATE(97)] = 4675,
  [SMALL_STATE(98)] = 4702,
  [SMALL_STATE(99)] = 4729,
  [SMALL_STATE(100)] = 4756,
  [SMALL_STATE(101)] = 4783,
  [SMALL_STATE(102)] = 4810,
  [SMALL_STATE(103)] = 4845,
  [SMALL_STATE(104)] = 4872,
  [SMALL_STATE(105)] = 4899,
  [SMALL_STATE(106)] = 4926,
  [SMALL_STATE(107)] = 4953,
  [SMALL_STATE(108)] = 4980,
  [SMALL_STATE(109)] = 5007,
  [SMALL_STATE(110)] = 5040,
  [SMALL_STATE(111)] = 5067,
  [SMALL_STATE(112)] = 5094,
  [SMALL_STATE(113)] = 5121,
  [SMALL_STATE(114)] = 5148,
  [SMALL_STATE(115)] = 5175,
  [SMALL_STATE(116)] = 5206,
  [SMALL_STATE(117)] = 5233,
  [SMALL_STATE(118)] = 5268,
  [SMALL_STATE(119)] = 5295,
  [SMALL_STATE(120)] = 5328,
  [SMALL_STATE(121)] = 5359,
  [SMALL_STATE(122)] = 5386,
  [SMALL_STATE(123)] = 5423,
  [SMALL_STATE(124)] = 5460,
  [SMALL_STATE(125)] = 5489,
  [SMALL_STATE(126)] = 5518,
  [SMALL_STATE(127)] = 5545,
  [SMALL_STATE(128)] = 5572,
  [SMALL_STATE(129)] = 5599,
  [SMALL_STATE(130)] = 5626,
  [SMALL_STATE(131)] = 5653,
  [SMALL_STATE(132)] = 5680,
  [SMALL_STATE(133)] = 5707,
  [SMALL_STATE(134)] = 5734,
  [SMALL_STATE(135)] = 5761,
  [SMALL_STATE(136)] = 5788,
  [SMALL_STATE(137)] = 5815,
  [SMALL_STATE(138)] = 5842,
  [SMALL_STATE(139)] = 5869,
  [SMALL_STATE(140)] = 5896,
  [SMALL_STATE(141)] = 5923,
  [SMALL_STATE(142)] = 5950,
  [SMALL_STATE(143)] = 5977,
  [SMALL_STATE(144)] = 6004,
  [SMALL_STATE(145)] = 6031,
  [SMALL_STATE(146)] = 6058,
  [SMALL_STATE(147)] = 6085,
  [SMALL_STATE(148)] = 6112,
  [SMALL_STATE(149)] = 6139,
  [SMALL_STATE(150)] = 6166,
  [SMALL_STATE(151)] = 6208,
  [SMALL_STATE(152)] = 6250,
  [SMALL_STATE(153)] = 6292,
  [SMALL_STATE(154)] = 6334,
  [SMALL_STATE(155)] = 6376,
  [SMALL_STATE(156)] = 6418,
  [SMALL_STATE(157)] = 6460,
  [SMALL_STATE(158)] = 6502,
  [SMALL_STATE(159)] = 6544,
  [SMALL_STATE(160)] = 6583,
  [SMALL_STATE(161)] = 6622,
  [SMALL_STATE(162)] = 6659,
  [SMALL_STATE(163)] = 6698,
  [SMALL_STATE(164)] = 6737,
  [SMALL_STATE(165)] = 6773,
  [SMALL_STATE(166)] = 6809,
  [SMALL_STATE(167)] = 6845,
  [SMALL_STATE(168)] = 6876,
  [SMALL_STATE(169)] = 6905,
  [SMALL_STATE(170)] = 6934,
  [SMALL_STATE(171)] = 6965,
  [SMALL_STATE(172)] = 6996,
  [SMALL_STATE(173)] = 7025,
  [SMALL_STATE(174)] = 7046,
  [SMALL_STATE(175)] = 7065,
  [SMALL_STATE(176)] = 7086,
  [SMALL_STATE(177)] = 7111,
  [SMALL_STATE(178)] = 7136,
  [SMALL_STATE(179)] = 7149,
  [SMALL_STATE(180)] = 7166,
  [SMALL_STATE(181)] = 7179,
  [SMALL_STATE(182)] = 7192,
  [SMALL_STATE(183)] = 7209,
  [SMALL_STATE(184)] = 7222,
  [SMALL_STATE(185)] = 7239,
  [SMALL_STATE(186)] = 7252,
  [SMALL_STATE(187)] = 7265,
  [SMALL_STATE(188)] = 7282,
  [SMALL_STATE(189)] = 7299,
  [SMALL_STATE(190)] = 7312,
  [SMALL_STATE(191)] = 7325,
  [SMALL_STATE(192)] = 7339,
  [SMALL_STATE(193)] = 7355,
  [SMALL_STATE(194)] = 7371,
  [SMALL_STATE(195)] = 7387,
  [SMALL_STATE(196)] = 7401,
  [SMALL_STATE(197)] = 7417,
  [SMALL_STATE(198)] = 7433,
  [SMALL_STATE(199)] = 7447,
  [SMALL_STATE(200)] = 7463,
  [SMALL_STATE(201)] = 7479,
  [SMALL_STATE(202)] = 7493,
  [SMALL_STATE(203)] = 7509,
  [SMALL_STATE(204)] = 7525,
  [SMALL_STATE(205)] = 7539,
  [SMALL_STATE(206)] = 7555,
  [SMALL_STATE(207)] = 7569,
  [SMALL_STATE(208)] = 7585,
  [SMALL_STATE(209)] = 7599,
  [SMALL_STATE(210)] = 7615,
  [SMALL_STATE(211)] = 7631,
  [SMALL_STATE(212)] = 7647,
  [SMALL_STATE(213)] = 7661,
  [SMALL_STATE(214)] = 7672,
  [SMALL_STATE(215)] = 7683,
  [SMALL_STATE(216)] = 7694,
  [SMALL_STATE(217)] = 7707,
  [SMALL_STATE(218)] = 7718,
  [SMALL_STATE(219)] = 7729,
  [SMALL_STATE(220)] = 7742,
  [SMALL_STATE(221)] = 7753,
  [SMALL_STATE(222)] = 7766,
  [SMALL_STATE(223)] = 7777,
  [SMALL_STATE(224)] = 7788,
  [SMALL_STATE(225)] = 7799,
  [SMALL_STATE(226)] = 7810,
  [SMALL_STATE(227)] = 7821,
  [SMALL_STATE(228)] = 7832,
  [SMALL_STATE(229)] = 7843,
  [SMALL_STATE(230)] = 7854,
  [SMALL_STATE(231)] = 7865,
  [SMALL_STATE(232)] = 7878,
  [SMALL_STATE(233)] = 7889,
  [SMALL_STATE(234)] = 7900,
  [SMALL_STATE(235)] = 7913,
  [SMALL_STATE(236)] = 7924,
  [SMALL_STATE(237)] = 7935,
  [SMALL_STATE(238)] = 7946,
  [SMALL_STATE(239)] = 7957,
  [SMALL_STATE(240)] = 7968,
  [SMALL_STATE(241)] = 7981,
  [SMALL_STATE(242)] = 7994,
  [SMALL_STATE(243)] = 8005,
  [SMALL_STATE(244)] = 8018,
  [SMALL_STATE(245)] = 8031,
  [SMALL_STATE(246)] = 8044,
  [SMALL_STATE(247)] = 8055,
  [SMALL_STATE(248)] = 8068,
  [SMALL_STATE(249)] = 8081,
  [SMALL_STATE(250)] = 8092,
  [SMALL_STATE(251)] = 8105,
  [SMALL_STATE(252)] = 8118,
  [SMALL_STATE(253)] = 8129,
  [SMALL_STATE(254)] = 8140,
  [SMALL_STATE(255)] = 8153,
  [SMALL_STATE(256)] = 8166,
  [SMALL_STATE(257)] = 8179,
  [SMALL_STATE(258)] = 8190,
  [SMALL_STATE(259)] = 8203,
  [SMALL_STATE(260)] = 8214,
  [SMALL_STATE(261)] = 8227,
  [SMALL_STATE(262)] = 8240,
  [SMALL_STATE(263)] = 8253,
  [SMALL_STATE(264)] = 8264,
  [SMALL_STATE(265)] = 8275,
  [SMALL_STATE(266)] = 8286,
  [SMALL_STATE(267)] = 8299,
  [SMALL_STATE(268)] = 8312,
  [SMALL_STATE(269)] = 8325,
  [SMALL_STATE(270)] = 8338,
  [SMALL_STATE(271)] = 8351,
  [SMALL_STATE(272)] = 8364,
  [SMALL_STATE(273)] = 8377,
  [SMALL_STATE(274)] = 8390,
  [SMALL_STATE(275)] = 8403,
  [SMALL_STATE(276)] = 8414,
  [SMALL_STATE(277)] = 8425,
  [SMALL_STATE(278)] = 8436,
  [SMALL_STATE(279)] = 8449,
  [SMALL_STATE(280)] = 8462,
  [SMALL_STATE(281)] = 8472,
  [SMALL_STATE(282)] = 8482,
  [SMALL_STATE(283)] = 8492,
  [SMALL_STATE(284)] = 8500,
  [SMALL_STATE(285)] = 8510,
  [SMALL_STATE(286)] = 8520,
  [SMALL_STATE(287)] = 8530,
  [SMALL_STATE(288)] = 8540,
  [SMALL_STATE(289)] = 8547,
  [SMALL_STATE(290)] = 8554,
  [SMALL_STATE(291)] = 8561,
  [SMALL_STATE(292)] = 8568,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(223),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(292),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(222),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(203),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(212),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(267),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(272),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 4),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 4),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 6),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 6),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_false, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_false, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_literal, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_literal, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_true, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_true, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_literal, 4),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_literal, 4),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 8),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 8),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_literal, 3),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_literal, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 4),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_literal, 4),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 3),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 5),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 5),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_literal, 1),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_composite_literal, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expression_list, 1), SHIFT(25),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_kv, 3, .production_id = 9),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_range_clause, 4, .production_id = 19),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_stmt, 3, .production_id = 7),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_stmt, 3, .production_id = 7),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_stmt, 4, .production_id = 13),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_stmt, 5, .production_id = 16),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_stmt, 5, .production_id = 16),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_stmt, 4, .production_id = 13),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 2, .production_id = 18),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 2, .production_id = 18),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 2, .production_id = 18), SHIFT_REPEAT(34),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(53),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 2, .production_id = 18), SHIFT_REPEAT(29),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_clause, 3, .production_id = 7),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif_clause, 3, .production_id = 7),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 1, .production_id = 11),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__if_elif_stmt_repeat2, 1, .production_id = 11),
  [475] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(45),
  [478] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(41),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(10),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(10),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_content_single, 2),
  [537] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_content_single, 2), SHIFT_REPEAT(206),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__if_elif_stmt_repeat1, 2), SHIFT_REPEAT(208),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__if_elif_stmt_repeat1, 2),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_content_double, 2),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_content_double, 2), SHIFT_REPEAT(210),
  [550] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_content_double, 2), SHIFT_REPEAT(210),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1, .production_id = 1),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1, .production_id = 1),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1, .production_id = 2),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1, .production_id = 2),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_statement, 1),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_statement, 1),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_else_stmt, 7, .production_id = 22),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_else_stmt, 7, .production_id = 22),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3, .production_id = 8),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 3, .production_id = 8),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_else_stmt, 6, .production_id = 21),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_else_stmt, 6, .production_id = 21),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_else_stmt, 6, .production_id = 20),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_else_stmt, 6, .production_id = 20),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_elif_else_stmt, 5, .production_id = 17),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_elif_else_stmt, 5, .production_id = 17),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_else_stmt, 5, .production_id = 15),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_else_stmt, 5, .production_id = 15),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2, .production_id = 14),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2, .production_id = 14),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_else_stmt, 4, .production_id = 12),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_else_stmt, 4, .production_id = 12),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 4, .production_id = 10),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 4, .production_id = 10),
  [627] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_other_lit_repeat1, 2), SHIFT_REPEAT(234),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_other_lit_repeat1, 2),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1, .production_id = 4),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1, .production_id = 4),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1, .production_id = 3),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1, .production_id = 3),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_literal_repeat1, 2), SHIFT_REPEAT(16),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_literal_repeat1, 2),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [701] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_other_lit_repeat1, 2), SHIFT_REPEAT(273),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [710] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
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
