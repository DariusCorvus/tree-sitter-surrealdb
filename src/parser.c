#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 48
#define SYMBOL_COUNT 163
#define ALIAS_COUNT 0
#define TOKEN_COUNT 137
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  anon_sym_function_LPAREN_RPAREN_LBRACE = 2,
  anon_sym_RBRACE_SEMI = 3,
  anon_sym_RBRACE_COMMA = 4,
  aux_sym_future_token1 = 5,
  aux_sym_casting_token1 = 6,
  aux_sym_property_token1 = 7,
  aux_sym_duration_token1 = 8,
  aux_sym_constant_token1 = 9,
  aux_sym_number_token1 = 10,
  aux_sym_record_token1 = 11,
  aux_sym_record_token2 = 12,
  sym_keyword = 13,
  anon_sym_AMP_AMP = 14,
  anon_sym_AND = 15,
  anon_sym_PIPE_PIPE = 16,
  anon_sym_OR = 17,
  anon_sym_QMARK_QMARK = 18,
  anon_sym_QMARK_COLON = 19,
  anon_sym_EQ = 20,
  anon_sym_IS = 21,
  anon_sym_BANG_EQ = 22,
  anon_sym_ISNOT = 23,
  anon_sym_EQ_EQ = 24,
  anon_sym_QMARK_EQ = 25,
  anon_sym_STAR_EQ = 26,
  anon_sym_TILDE = 27,
  anon_sym_BANG_TILDE = 28,
  anon_sym_QMARK_TILDE = 29,
  anon_sym_STAR_TILDE = 30,
  anon_sym_LT = 31,
  anon_sym_LT_EQ = 32,
  anon_sym_GT = 33,
  anon_sym_GT_EQ = 34,
  anon_sym_PLUS = 35,
  anon_sym_DASH = 36,
  anon_sym_STAR = 37,
  anon_sym_x = 38,
  anon_sym_SLASH = 39,
  anon_sym_ = 40,
  anon_sym_STAR_STAR = 41,
  anon_sym_IN = 42,
  anon_sym_CONTAINS = 43,
  anon_sym_2 = 44,
  anon_sym_CONTAINSNOT = 45,
  anon_sym_3 = 46,
  anon_sym_CONTAINSALL = 47,
  anon_sym_4 = 48,
  anon_sym_CONTAINSANY = 49,
  anon_sym_5 = 50,
  anon_sym_CONTAINSNONE = 51,
  anon_sym_6 = 52,
  anon_sym_INSIDE = 53,
  anon_sym_7 = 54,
  anon_sym_NOTINSIDE = 55,
  anon_sym_NOTIN = 56,
  anon_sym_8 = 57,
  anon_sym_ALLINSIDE = 58,
  anon_sym_9 = 59,
  anon_sym_ANYINSIDE = 60,
  anon_sym_10 = 61,
  anon_sym_NONEINSIDE = 62,
  anon_sym_11 = 63,
  anon_sym_OUTSIDE = 64,
  anon_sym_INTERSECTS = 65,
  anon_sym_LPAREN = 66,
  anon_sym_RPAREN = 67,
  anon_sym_LBRACK = 68,
  anon_sym_RBRACK = 69,
  anon_sym_LBRACE = 70,
  anon_sym_RBRACE = 71,
  anon_sym_DASH_GT = 72,
  anon_sym_LT_DASH = 73,
  anon_sym_COMMA = 74,
  anon_sym_SEMI = 75,
  anon_sym_COLON = 76,
  anon_sym_any = 77,
  anon_sym_array = 78,
  anon_sym_bool = 79,
  anon_sym_datetime = 80,
  anon_sym_decimal = 81,
  anon_sym_duration = 82,
  anon_sym_float = 83,
  anon_sym_int = 84,
  anon_sym_number = 85,
  anon_sym_object = 86,
  anon_sym_string = 87,
  anon_sym_record = 88,
  anon_sym_geometry = 89,
  anon_sym_EDDSA = 90,
  anon_sym_ES256 = 91,
  anon_sym_ES384 = 92,
  anon_sym_ES512 = 93,
  anon_sym_HS256 = 94,
  anon_sym_HS384 = 95,
  anon_sym_HS512 = 96,
  anon_sym_PS256 = 97,
  anon_sym_PS384 = 98,
  anon_sym_PS512 = 99,
  anon_sym_RS256 = 100,
  anon_sym_RS384 = 101,
  anon_sym_RS512 = 102,
  aux_sym_function_token1 = 103,
  aux_sym_function_token2 = 104,
  anon_sym_count = 105,
  aux_sym_function_token3 = 106,
  aux_sym_function_token4 = 107,
  aux_sym_function_token5 = 108,
  aux_sym_function_token6 = 109,
  aux_sym_function_token7 = 110,
  aux_sym_function_token8 = 111,
  aux_sym_function_token9 = 112,
  aux_sym_function_token10 = 113,
  aux_sym_function_token11 = 114,
  aux_sym_function_token12 = 115,
  aux_sym_function_token13 = 116,
  aux_sym_function_token14 = 117,
  aux_sym_function_token15 = 118,
  aux_sym_function_token16 = 119,
  anon_sym_true = 120,
  anon_sym_false = 121,
  anon_sym_TRUE = 122,
  anon_sym_FALSE = 123,
  anon_sym_null = 124,
  anon_sym_NULL = 125,
  anon_sym_none = 126,
  anon_sym_NONE = 127,
  sym_variable = 128,
  sym_comment = 129,
  anon_sym_SQUOTE = 130,
  aux_sym_string_token1 = 131,
  anon_sym_BSLASH = 132,
  aux_sym_string_token2 = 133,
  anon_sym_DQUOTE = 134,
  aux_sym_string_token3 = 135,
  sym_new_line = 136,
  sym_source_file = 137,
  sym_tokens = 138,
  sym_scripting_function = 139,
  sym_scripting_content = 140,
  sym__scripting_statement = 141,
  sym_future = 142,
  sym_casting = 143,
  sym_property = 144,
  sym_duration = 145,
  sym_constant = 146,
  sym_number = 147,
  sym_record = 148,
  sym_operator = 149,
  sym_punctuation = 150,
  sym_delimiter = 151,
  sym_type = 152,
  sym_datatype = 153,
  sym_algotype = 154,
  sym_function = 155,
  sym_bool = 156,
  sym_nothing = 157,
  sym_string = 158,
  aux_sym_source_file_repeat1 = 159,
  aux_sym_scripting_content_repeat1 = 160,
  aux_sym_string_repeat1 = 161,
  aux_sym_string_repeat2 = 162,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_function_LPAREN_RPAREN_LBRACE] = "function(){",
  [anon_sym_RBRACE_SEMI] = "};",
  [anon_sym_RBRACE_COMMA] = "},",
  [aux_sym_future_token1] = "future_token1",
  [aux_sym_casting_token1] = "casting_token1",
  [aux_sym_property_token1] = "property_token1",
  [aux_sym_duration_token1] = "duration_token1",
  [aux_sym_constant_token1] = "constant_token1",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_record_token1] = "record_token1",
  [aux_sym_record_token2] = "record_token2",
  [sym_keyword] = "keyword",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_AND] = "AND",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_OR] = "OR",
  [anon_sym_QMARK_QMARK] = "\?\?",
  [anon_sym_QMARK_COLON] = "\?:",
  [anon_sym_EQ] = "=",
  [anon_sym_IS] = "IS",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_ISNOT] = "IS NOT",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_QMARK_EQ] = "\?=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_TILDE] = "~",
  [anon_sym_BANG_TILDE] = "!~",
  [anon_sym_QMARK_TILDE] = "\?~",
  [anon_sym_STAR_TILDE] = "*~",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_x] = "x",
  [anon_sym_SLASH] = "/",
  [anon_sym_] = "÷",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_IN] = "IN",
  [anon_sym_CONTAINS] = "CONTAINS",
  [anon_sym_2] = "∋",
  [anon_sym_CONTAINSNOT] = "CONTAINSNOT",
  [anon_sym_3] = "∌",
  [anon_sym_CONTAINSALL] = "CONTAINSALL",
  [anon_sym_4] = "⊇",
  [anon_sym_CONTAINSANY] = "CONTAINSANY",
  [anon_sym_5] = "⊃",
  [anon_sym_CONTAINSNONE] = "CONTAINSNONE",
  [anon_sym_6] = "⊅",
  [anon_sym_INSIDE] = "INSIDE",
  [anon_sym_7] = "∈",
  [anon_sym_NOTINSIDE] = "NOTINSIDE",
  [anon_sym_NOTIN] = "NOT IN",
  [anon_sym_8] = "∉",
  [anon_sym_ALLINSIDE] = "ALLINSIDE",
  [anon_sym_9] = "⊆",
  [anon_sym_ANYINSIDE] = "ANYINSIDE",
  [anon_sym_10] = "⊂",
  [anon_sym_NONEINSIDE] = "NONEINSIDE",
  [anon_sym_11] = "⊄",
  [anon_sym_OUTSIDE] = "OUTSIDE",
  [anon_sym_INTERSECTS] = "INTERSECTS",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON] = ":",
  [anon_sym_any] = "any",
  [anon_sym_array] = "array",
  [anon_sym_bool] = "bool",
  [anon_sym_datetime] = "datetime",
  [anon_sym_decimal] = "decimal",
  [anon_sym_duration] = "duration",
  [anon_sym_float] = "float",
  [anon_sym_int] = "int",
  [anon_sym_number] = "number",
  [anon_sym_object] = "object",
  [anon_sym_string] = "string",
  [anon_sym_record] = "record",
  [anon_sym_geometry] = "geometry",
  [anon_sym_EDDSA] = "EDDSA",
  [anon_sym_ES256] = "ES256",
  [anon_sym_ES384] = "ES384",
  [anon_sym_ES512] = "ES512",
  [anon_sym_HS256] = "HS256",
  [anon_sym_HS384] = "HS384",
  [anon_sym_HS512] = "HS512",
  [anon_sym_PS256] = "PS256",
  [anon_sym_PS384] = "PS384",
  [anon_sym_PS512] = "PS512",
  [anon_sym_RS256] = "RS256",
  [anon_sym_RS384] = "RS384",
  [anon_sym_RS512] = "RS512",
  [aux_sym_function_token1] = "function_token1",
  [aux_sym_function_token2] = "function_token2",
  [anon_sym_count] = "count",
  [aux_sym_function_token3] = "function_token3",
  [aux_sym_function_token4] = "function_token4",
  [aux_sym_function_token5] = "function_token5",
  [aux_sym_function_token6] = "function_token6",
  [aux_sym_function_token7] = "function_token7",
  [aux_sym_function_token8] = "function_token8",
  [aux_sym_function_token9] = "function_token9",
  [aux_sym_function_token10] = "function_token10",
  [aux_sym_function_token11] = "function_token11",
  [aux_sym_function_token12] = "function_token12",
  [aux_sym_function_token13] = "function_token13",
  [aux_sym_function_token14] = "function_token14",
  [aux_sym_function_token15] = "function_token15",
  [aux_sym_function_token16] = "function_token16",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_TRUE] = "TRUE",
  [anon_sym_FALSE] = "FALSE",
  [anon_sym_null] = "null",
  [anon_sym_NULL] = "NULL",
  [anon_sym_none] = "none",
  [anon_sym_NONE] = "NONE",
  [sym_variable] = "variable",
  [sym_comment] = "comment",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token3] = "string_token3",
  [sym_new_line] = "new_line",
  [sym_source_file] = "source_file",
  [sym_tokens] = "tokens",
  [sym_scripting_function] = "scripting_function",
  [sym_scripting_content] = "scripting_content",
  [sym__scripting_statement] = "_scripting_statement",
  [sym_future] = "future",
  [sym_casting] = "casting",
  [sym_property] = "property",
  [sym_duration] = "duration",
  [sym_constant] = "constant",
  [sym_number] = "number",
  [sym_record] = "record",
  [sym_operator] = "operator",
  [sym_punctuation] = "punctuation",
  [sym_delimiter] = "delimiter",
  [sym_type] = "type",
  [sym_datatype] = "datatype",
  [sym_algotype] = "algotype",
  [sym_function] = "function",
  [sym_bool] = "bool",
  [sym_nothing] = "nothing",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_scripting_content_repeat1] = "scripting_content_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_function_LPAREN_RPAREN_LBRACE] = anon_sym_function_LPAREN_RPAREN_LBRACE,
  [anon_sym_RBRACE_SEMI] = anon_sym_RBRACE_SEMI,
  [anon_sym_RBRACE_COMMA] = anon_sym_RBRACE_COMMA,
  [aux_sym_future_token1] = aux_sym_future_token1,
  [aux_sym_casting_token1] = aux_sym_casting_token1,
  [aux_sym_property_token1] = aux_sym_property_token1,
  [aux_sym_duration_token1] = aux_sym_duration_token1,
  [aux_sym_constant_token1] = aux_sym_constant_token1,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_record_token1] = aux_sym_record_token1,
  [aux_sym_record_token2] = aux_sym_record_token2,
  [sym_keyword] = sym_keyword,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_OR] = anon_sym_OR,
  [anon_sym_QMARK_QMARK] = anon_sym_QMARK_QMARK,
  [anon_sym_QMARK_COLON] = anon_sym_QMARK_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_IS] = anon_sym_IS,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_ISNOT] = anon_sym_ISNOT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_QMARK_EQ] = anon_sym_QMARK_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_BANG_TILDE] = anon_sym_BANG_TILDE,
  [anon_sym_QMARK_TILDE] = anon_sym_QMARK_TILDE,
  [anon_sym_STAR_TILDE] = anon_sym_STAR_TILDE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_] = anon_sym_,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_IN] = anon_sym_IN,
  [anon_sym_CONTAINS] = anon_sym_CONTAINS,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_CONTAINSNOT] = anon_sym_CONTAINSNOT,
  [anon_sym_3] = anon_sym_3,
  [anon_sym_CONTAINSALL] = anon_sym_CONTAINSALL,
  [anon_sym_4] = anon_sym_4,
  [anon_sym_CONTAINSANY] = anon_sym_CONTAINSANY,
  [anon_sym_5] = anon_sym_5,
  [anon_sym_CONTAINSNONE] = anon_sym_CONTAINSNONE,
  [anon_sym_6] = anon_sym_6,
  [anon_sym_INSIDE] = anon_sym_INSIDE,
  [anon_sym_7] = anon_sym_7,
  [anon_sym_NOTINSIDE] = anon_sym_NOTINSIDE,
  [anon_sym_NOTIN] = anon_sym_NOTIN,
  [anon_sym_8] = anon_sym_8,
  [anon_sym_ALLINSIDE] = anon_sym_ALLINSIDE,
  [anon_sym_9] = anon_sym_9,
  [anon_sym_ANYINSIDE] = anon_sym_ANYINSIDE,
  [anon_sym_10] = anon_sym_10,
  [anon_sym_NONEINSIDE] = anon_sym_NONEINSIDE,
  [anon_sym_11] = anon_sym_11,
  [anon_sym_OUTSIDE] = anon_sym_OUTSIDE,
  [anon_sym_INTERSECTS] = anon_sym_INTERSECTS,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_datetime] = anon_sym_datetime,
  [anon_sym_decimal] = anon_sym_decimal,
  [anon_sym_duration] = anon_sym_duration,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_number] = anon_sym_number,
  [anon_sym_object] = anon_sym_object,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_record] = anon_sym_record,
  [anon_sym_geometry] = anon_sym_geometry,
  [anon_sym_EDDSA] = anon_sym_EDDSA,
  [anon_sym_ES256] = anon_sym_ES256,
  [anon_sym_ES384] = anon_sym_ES384,
  [anon_sym_ES512] = anon_sym_ES512,
  [anon_sym_HS256] = anon_sym_HS256,
  [anon_sym_HS384] = anon_sym_HS384,
  [anon_sym_HS512] = anon_sym_HS512,
  [anon_sym_PS256] = anon_sym_PS256,
  [anon_sym_PS384] = anon_sym_PS384,
  [anon_sym_PS512] = anon_sym_PS512,
  [anon_sym_RS256] = anon_sym_RS256,
  [anon_sym_RS384] = anon_sym_RS384,
  [anon_sym_RS512] = anon_sym_RS512,
  [aux_sym_function_token1] = aux_sym_function_token1,
  [aux_sym_function_token2] = aux_sym_function_token2,
  [anon_sym_count] = anon_sym_count,
  [aux_sym_function_token3] = aux_sym_function_token3,
  [aux_sym_function_token4] = aux_sym_function_token4,
  [aux_sym_function_token5] = aux_sym_function_token5,
  [aux_sym_function_token6] = aux_sym_function_token6,
  [aux_sym_function_token7] = aux_sym_function_token7,
  [aux_sym_function_token8] = aux_sym_function_token8,
  [aux_sym_function_token9] = aux_sym_function_token9,
  [aux_sym_function_token10] = aux_sym_function_token10,
  [aux_sym_function_token11] = aux_sym_function_token11,
  [aux_sym_function_token12] = aux_sym_function_token12,
  [aux_sym_function_token13] = aux_sym_function_token13,
  [aux_sym_function_token14] = aux_sym_function_token14,
  [aux_sym_function_token15] = aux_sym_function_token15,
  [aux_sym_function_token16] = aux_sym_function_token16,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_TRUE] = anon_sym_TRUE,
  [anon_sym_FALSE] = anon_sym_FALSE,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_NULL] = anon_sym_NULL,
  [anon_sym_none] = anon_sym_none,
  [anon_sym_NONE] = anon_sym_NONE,
  [sym_variable] = sym_variable,
  [sym_comment] = sym_comment,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [sym_new_line] = sym_new_line,
  [sym_source_file] = sym_source_file,
  [sym_tokens] = sym_tokens,
  [sym_scripting_function] = sym_scripting_function,
  [sym_scripting_content] = sym_scripting_content,
  [sym__scripting_statement] = sym__scripting_statement,
  [sym_future] = sym_future,
  [sym_casting] = sym_casting,
  [sym_property] = sym_property,
  [sym_duration] = sym_duration,
  [sym_constant] = sym_constant,
  [sym_number] = sym_number,
  [sym_record] = sym_record,
  [sym_operator] = sym_operator,
  [sym_punctuation] = sym_punctuation,
  [sym_delimiter] = sym_delimiter,
  [sym_type] = sym_type,
  [sym_datatype] = sym_datatype,
  [sym_algotype] = sym_algotype,
  [sym_function] = sym_function,
  [sym_bool] = sym_bool,
  [sym_nothing] = sym_nothing,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_scripting_content_repeat1] = aux_sym_scripting_content_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
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
  [anon_sym_function_LPAREN_RPAREN_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_future_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_casting_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_property_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_duration_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ISNOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_TILDE] = {
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONTAINS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONTAINSNOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONTAINSALL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONTAINSANY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONTAINSNONE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INSIDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOTINSIDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOTIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ALLINSIDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ANYINSIDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NONEINSIDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OUTSIDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INTERSECTS] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_any] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_datetime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decimal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_duration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_record] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_geometry] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EDDSA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ES256] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ES384] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ES512] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HS256] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HS384] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HS512] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PS256] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PS384] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PS512] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RS256] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RS384] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RS512] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_count] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token16] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FALSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NULL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_none] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NONE] = {
    .visible = true,
    .named = false,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_new_line] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_tokens] = {
    .visible = true,
    .named = true,
  },
  [sym_scripting_function] = {
    .visible = true,
    .named = true,
  },
  [sym_scripting_content] = {
    .visible = true,
    .named = true,
  },
  [sym__scripting_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_future] = {
    .visible = true,
    .named = true,
  },
  [sym_casting] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_duration] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_record] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_punctuation] = {
    .visible = true,
    .named = true,
  },
  [sym_delimiter] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_datatype] = {
    .visible = true,
    .named = true,
  },
  [sym_algotype] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_nothing] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scripting_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
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
  [5] = 4,
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
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 17,
  [28] = 28,
  [29] = 28,
  [30] = 26,
  [31] = 22,
  [32] = 21,
  [33] = 9,
  [34] = 8,
  [35] = 25,
  [36] = 20,
  [37] = 19,
  [38] = 18,
  [39] = 24,
  [40] = 23,
  [41] = 10,
  [42] = 11,
  [43] = 12,
  [44] = 13,
  [45] = 14,
  [46] = 15,
  [47] = 16,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 48,
  [55] = 49,
  [56] = 53,
  [57] = 52,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 60,
  [62] = 62,
  [63] = 63,
  [64] = 64,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(554);
      if (lookahead == '\n') ADVANCE(1251);
      if (lookahead == '!') ADVANCE(478);
      if (lookahead == '"') ADVANCE(1248);
      if (lookahead == '#') ADVANCE(1241);
      if (lookahead == '$') ADVANCE(548);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(1242);
      if (lookahead == '(') ADVANCE(1132);
      if (lookahead == ')') ADVANCE(1133);
      if (lookahead == '*') ADVANCE(1086);
      if (lookahead == '+') ADVANCE(1083);
      if (lookahead == ',') ADVANCE(1141);
      if (lookahead == '-') ADVANCE(1084);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == ':') ADVANCE(1143);
      if (lookahead == ';') ADVANCE(1142);
      if (lookahead == '<') ADVANCE(1079);
      if (lookahead == '=') ADVANCE(1067);
      if (lookahead == '>') ADVANCE(1081);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == 'A') ADVANCE(663);
      if (lookahead == 'B') ADVANCE(891);
      if (lookahead == 'C') ADVANCE(691);
      if (lookahead == 'D') ADVANCE(866);
      if (lookahead == 'E') ADVANCE(619);
      if (lookahead == 'F') ADVANCE(612);
      if (lookahead == 'G') ADVANCE(986);
      if (lookahead == 'H') ADVANCE(718);
      if (lookahead == 'I') ADVANCE(676);
      if (lookahead == 'M') ADVANCE(608);
      if (lookahead == 'N') ADVANCE(693);
      if (lookahead == 'O') ADVANCE(703);
      if (lookahead == 'P') ADVANCE(720);
      if (lookahead == 'R') ADVANCE(724);
      if (lookahead == 'S') ADVANCE(878);
      if (lookahead == 'T') ADVANCE(704);
      if (lookahead == '[') ADVANCE(1134);
      if (lookahead == '\\') ADVANCE(1245);
      if (lookahead == ']') ADVANCE(1135);
      if (lookahead == 'a') ADVANCE(799);
      if (lookahead == 'b') ADVANCE(811);
      if (lookahead == 'c') ADVANCE(692);
      if (lookahead == 'd') ADVANCE(614);
      if (lookahead == 'e') ADVANCE(937);
      if (lookahead == 'f') ADVANCE(736);
      if (lookahead == 'g') ADVANCE(768);
      if (lookahead == 'h') ADVANCE(844);
      if (lookahead == 'i') ADVANCE(677);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'n') ADVANCE(737);
      if (lookahead == 'o') ADVANCE(752);
      if (lookahead == 'p') ADVANCE(610);
      if (lookahead == 'r') ADVANCE(631);
      if (lookahead == 's') ADVANCE(1037);
      if (lookahead == 't') ADVANCE(657);
      if (lookahead == 'x') ADVANCE(1087);
      if (lookahead == '{') ADVANCE(1136);
      if (lookahead == '|') ADVANCE(527);
      if (lookahead == '}') ADVANCE(1138);
      if (lookahead == '~') ADVANCE(1075);
      if (lookahead == 247) ADVANCE(1091);
      if (lookahead == 8712) ADVANCE(1114);
      if (lookahead == 8713) ADVANCE(1118);
      if (lookahead == 8715) ADVANCE(1099);
      if (lookahead == 8716) ADVANCE(1102);
      if (lookahead == 8834) ADVANCE(1124);
      if (lookahead == 8835) ADVANCE(1108);
      if (lookahead == 8836) ADVANCE(1127);
      if (lookahead == 8837) ADVANCE(1111);
      if (lookahead == 8838) ADVANCE(1121);
      if (lookahead == 8839) ADVANCE(1105);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(892);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(901);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(961);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(867);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(922);
      if (('J' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1041);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == '/') ADVANCE(1240);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(481);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(478);
      if (lookahead == '"') ADVANCE(1248);
      if (lookahead == '#') ADVANCE(1241);
      if (lookahead == '$') ADVANCE(548);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(1242);
      if (lookahead == '(') ADVANCE(1132);
      if (lookahead == ')') ADVANCE(1133);
      if (lookahead == '*') ADVANCE(1086);
      if (lookahead == '+') ADVANCE(1083);
      if (lookahead == ',') ADVANCE(1141);
      if (lookahead == '-') ADVANCE(1084);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == ':') ADVANCE(1144);
      if (lookahead == ';') ADVANCE(1142);
      if (lookahead == '<') ADVANCE(1079);
      if (lookahead == '=') ADVANCE(1067);
      if (lookahead == '>') ADVANCE(1081);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == 'A') ADVANCE(102);
      if (lookahead == 'C') ADVANCE(133);
      if (lookahead == 'E') ADVANCE(59);
      if (lookahead == 'F') ADVANCE(51);
      if (lookahead == 'H') ADVANCE(156);
      if (lookahead == 'I') ADVANCE(117);
      if (lookahead == 'L') ADVANCE(349);
      if (lookahead == 'M') ADVANCE(47);
      if (lookahead == 'N') ADVANCE(132);
      if (lookahead == 'O') ADVANCE(143);
      if (lookahead == 'P') ADVANCE(159);
      if (lookahead == 'R') ADVANCE(163);
      if (lookahead == 'T') ADVANCE(144);
      if (lookahead == '[') ADVANCE(1134);
      if (lookahead == ']') ADVANCE(1135);
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == 'b') ADVANCE(250);
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead == 'd') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 'g') ADVANCE(207);
      if (lookahead == 'h') ADVANCE(282);
      if (lookahead == 'i') ADVANCE(244);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(251);
      if (lookahead == 'o') ADVANCE(191);
      if (lookahead == 'p') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead == 's') ADVANCE(5);
      if (lookahead == 't') ADVANCE(220);
      if (lookahead == 'x') ADVANCE(1088);
      if (lookahead == '{') ADVANCE(1136);
      if (lookahead == '|') ADVANCE(527);
      if (lookahead == '}') ADVANCE(1137);
      if (lookahead == '~') ADVANCE(1075);
      if (lookahead == 247) ADVANCE(1091);
      if (lookahead == 8712) ADVANCE(1114);
      if (lookahead == 8713) ADVANCE(1118);
      if (lookahead == 8715) ADVANCE(1099);
      if (lookahead == 8716) ADVANCE(1102);
      if (lookahead == 8834) ADVANCE(1124);
      if (lookahead == 8835) ADVANCE(1108);
      if (lookahead == 8836) ADVANCE(1127);
      if (lookahead == 8837) ADVANCE(1111);
      if (lookahead == 8838) ADVANCE(1121);
      if (lookahead == 8839) ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1041);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(478);
      if (lookahead == '"') ADVANCE(1248);
      if (lookahead == '#') ADVANCE(1241);
      if (lookahead == '$') ADVANCE(548);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(1242);
      if (lookahead == '(') ADVANCE(1132);
      if (lookahead == ')') ADVANCE(1133);
      if (lookahead == '*') ADVANCE(1086);
      if (lookahead == '+') ADVANCE(1083);
      if (lookahead == ',') ADVANCE(1141);
      if (lookahead == '-') ADVANCE(1084);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == ':') ADVANCE(1144);
      if (lookahead == ';') ADVANCE(1142);
      if (lookahead == '<') ADVANCE(1079);
      if (lookahead == '=') ADVANCE(1067);
      if (lookahead == '>') ADVANCE(1081);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == 'A') ADVANCE(102);
      if (lookahead == 'C') ADVANCE(136);
      if (lookahead == 'E') ADVANCE(58);
      if (lookahead == 'F') ADVANCE(51);
      if (lookahead == 'H') ADVANCE(156);
      if (lookahead == 'I') ADVANCE(118);
      if (lookahead == 'M') ADVANCE(47);
      if (lookahead == 'N') ADVANCE(132);
      if (lookahead == 'O') ADVANCE(143);
      if (lookahead == 'P') ADVANCE(160);
      if (lookahead == 'R') ADVANCE(163);
      if (lookahead == 'T') ADVANCE(145);
      if (lookahead == '[') ADVANCE(1134);
      if (lookahead == ']') ADVANCE(1135);
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == 'b') ADVANCE(250);
      if (lookahead == 'c') ADVANCE(253);
      if (lookahead == 'd') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 'g') ADVANCE(207);
      if (lookahead == 'h') ADVANCE(282);
      if (lookahead == 'i') ADVANCE(245);
      if (lookahead == 'l') ADVANCE(213);
      if (lookahead == 'm') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(251);
      if (lookahead == 'o') ADVANCE(191);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead == 's') ADVANCE(5);
      if (lookahead == 't') ADVANCE(221);
      if (lookahead == 'x') ADVANCE(1088);
      if (lookahead == '{') ADVANCE(1136);
      if (lookahead == '|') ADVANCE(527);
      if (lookahead == '}') ADVANCE(1137);
      if (lookahead == '~') ADVANCE(1075);
      if (lookahead == 247) ADVANCE(1091);
      if (lookahead == 8712) ADVANCE(1114);
      if (lookahead == 8713) ADVANCE(1118);
      if (lookahead == 8715) ADVANCE(1099);
      if (lookahead == 8716) ADVANCE(1102);
      if (lookahead == 8834) ADVANCE(1124);
      if (lookahead == 8835) ADVANCE(1108);
      if (lookahead == 8836) ADVANCE(1127);
      if (lookahead == 8837) ADVANCE(1111);
      if (lookahead == 8838) ADVANCE(1121);
      if (lookahead == 8839) ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1041);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(478);
      if (lookahead == '"') ADVANCE(1248);
      if (lookahead == '$') ADVANCE(548);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(1242);
      if (lookahead == '(') ADVANCE(1132);
      if (lookahead == ')') ADVANCE(1133);
      if (lookahead == '*') ADVANCE(1086);
      if (lookahead == '+') ADVANCE(1083);
      if (lookahead == ',') ADVANCE(1141);
      if (lookahead == '-') ADVANCE(1085);
      if (lookahead == '/') ADVANCE(1089);
      if (lookahead == ':') ADVANCE(1143);
      if (lookahead == ';') ADVANCE(1142);
      if (lookahead == '<') ADVANCE(1079);
      if (lookahead == '=') ADVANCE(1067);
      if (lookahead == '>') ADVANCE(1081);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == 'A') ADVANCE(101);
      if (lookahead == 'B') ADVANCE(329);
      if (lookahead == 'C') ADVANCE(129);
      if (lookahead == 'D') ADVANCE(304);
      if (lookahead == 'E') ADVANCE(57);
      if (lookahead == 'F') ADVANCE(50);
      if (lookahead == 'G') ADVANCE(424);
      if (lookahead == 'H') ADVANCE(156);
      if (lookahead == 'I') ADVANCE(114);
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == 'N') ADVANCE(131);
      if (lookahead == 'O') ADVANCE(141);
      if (lookahead == 'P') ADVANCE(158);
      if (lookahead == 'R') ADVANCE(162);
      if (lookahead == 'S') ADVANCE(316);
      if (lookahead == 'T') ADVANCE(142);
      if (lookahead == '[') ADVANCE(1134);
      if (lookahead == ']') ADVANCE(1135);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'b') ADVANCE(249);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 'g') ADVANCE(206);
      if (lookahead == 'h') ADVANCE(282);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == 'm') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == 'o') ADVANCE(190);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(69);
      if (lookahead == 's') ADVANCE(8);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == 'x') ADVANCE(1088);
      if (lookahead == '{') ADVANCE(1136);
      if (lookahead == '|') ADVANCE(527);
      if (lookahead == '}') ADVANCE(1138);
      if (lookahead == '~') ADVANCE(1075);
      if (lookahead == 247) ADVANCE(1091);
      if (lookahead == 8712) ADVANCE(1114);
      if (lookahead == 8713) ADVANCE(1118);
      if (lookahead == 8715) ADVANCE(1099);
      if (lookahead == 8716) ADVANCE(1102);
      if (lookahead == 8834) ADVANCE(1124);
      if (lookahead == 8835) ADVANCE(1108);
      if (lookahead == 8836) ADVANCE(1127);
      if (lookahead == 8837) ADVANCE(1111);
      if (lookahead == 8838) ADVANCE(1121);
      if (lookahead == 8839) ADVANCE(1105);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(330);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(339);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(399);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(305);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(360);
      if (('J' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1041);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(478);
      if (lookahead == '"') ADVANCE(1248);
      if (lookahead == '$') ADVANCE(548);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(1242);
      if (lookahead == '(') ADVANCE(1132);
      if (lookahead == ')') ADVANCE(1133);
      if (lookahead == '*') ADVANCE(1086);
      if (lookahead == '+') ADVANCE(1083);
      if (lookahead == ',') ADVANCE(1141);
      if (lookahead == '-') ADVANCE(1085);
      if (lookahead == '/') ADVANCE(1089);
      if (lookahead == ':') ADVANCE(1143);
      if (lookahead == ';') ADVANCE(1142);
      if (lookahead == '<') ADVANCE(1079);
      if (lookahead == '=') ADVANCE(1067);
      if (lookahead == '>') ADVANCE(1081);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == 'A') ADVANCE(101);
      if (lookahead == 'B') ADVANCE(329);
      if (lookahead == 'C') ADVANCE(129);
      if (lookahead == 'D') ADVANCE(304);
      if (lookahead == 'E') ADVANCE(57);
      if (lookahead == 'F') ADVANCE(50);
      if (lookahead == 'G') ADVANCE(424);
      if (lookahead == 'H') ADVANCE(156);
      if (lookahead == 'I') ADVANCE(114);
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == 'N') ADVANCE(131);
      if (lookahead == 'O') ADVANCE(141);
      if (lookahead == 'P') ADVANCE(158);
      if (lookahead == 'R') ADVANCE(162);
      if (lookahead == 'S') ADVANCE(316);
      if (lookahead == 'T') ADVANCE(142);
      if (lookahead == '[') ADVANCE(1134);
      if (lookahead == ']') ADVANCE(1135);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'b') ADVANCE(249);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 'g') ADVANCE(206);
      if (lookahead == 'h') ADVANCE(282);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == 'm') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == 'o') ADVANCE(190);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(69);
      if (lookahead == 's') ADVANCE(9);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == 'x') ADVANCE(1088);
      if (lookahead == '{') ADVANCE(1136);
      if (lookahead == '|') ADVANCE(527);
      if (lookahead == '}') ADVANCE(1137);
      if (lookahead == '~') ADVANCE(1075);
      if (lookahead == 247) ADVANCE(1091);
      if (lookahead == 8712) ADVANCE(1114);
      if (lookahead == 8713) ADVANCE(1118);
      if (lookahead == 8715) ADVANCE(1099);
      if (lookahead == 8716) ADVANCE(1102);
      if (lookahead == 8834) ADVANCE(1124);
      if (lookahead == 8835) ADVANCE(1108);
      if (lookahead == 8836) ADVANCE(1127);
      if (lookahead == 8837) ADVANCE(1111);
      if (lookahead == 8838) ADVANCE(1121);
      if (lookahead == 8839) ADVANCE(1105);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(330);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(339);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(399);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(305);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(360);
      if (('J' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1041);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(478);
      if (lookahead == '"') ADVANCE(1248);
      if (lookahead == '$') ADVANCE(548);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(1242);
      if (lookahead == '(') ADVANCE(1132);
      if (lookahead == ')') ADVANCE(1133);
      if (lookahead == '*') ADVANCE(1086);
      if (lookahead == '+') ADVANCE(1083);
      if (lookahead == ',') ADVANCE(1141);
      if (lookahead == '-') ADVANCE(1085);
      if (lookahead == '/') ADVANCE(1089);
      if (lookahead == ':') ADVANCE(1144);
      if (lookahead == ';') ADVANCE(1142);
      if (lookahead == '<') ADVANCE(1079);
      if (lookahead == '=') ADVANCE(1067);
      if (lookahead == '>') ADVANCE(1081);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == 'A') ADVANCE(102);
      if (lookahead == 'C') ADVANCE(133);
      if (lookahead == 'E') ADVANCE(59);
      if (lookahead == 'F') ADVANCE(51);
      if (lookahead == 'H') ADVANCE(156);
      if (lookahead == 'I') ADVANCE(117);
      if (lookahead == 'L') ADVANCE(349);
      if (lookahead == 'M') ADVANCE(47);
      if (lookahead == 'N') ADVANCE(132);
      if (lookahead == 'O') ADVANCE(143);
      if (lookahead == 'P') ADVANCE(159);
      if (lookahead == 'R') ADVANCE(163);
      if (lookahead == 'T') ADVANCE(144);
      if (lookahead == '[') ADVANCE(1134);
      if (lookahead == ']') ADVANCE(1135);
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == 'b') ADVANCE(250);
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead == 'd') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 'g') ADVANCE(207);
      if (lookahead == 'h') ADVANCE(282);
      if (lookahead == 'i') ADVANCE(244);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(251);
      if (lookahead == 'o') ADVANCE(191);
      if (lookahead == 'p') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 't') ADVANCE(220);
      if (lookahead == 'x') ADVANCE(1088);
      if (lookahead == '{') ADVANCE(1136);
      if (lookahead == '|') ADVANCE(527);
      if (lookahead == '}') ADVANCE(1138);
      if (lookahead == '~') ADVANCE(1075);
      if (lookahead == 247) ADVANCE(1091);
      if (lookahead == 8712) ADVANCE(1114);
      if (lookahead == 8713) ADVANCE(1118);
      if (lookahead == 8715) ADVANCE(1099);
      if (lookahead == 8716) ADVANCE(1102);
      if (lookahead == 8834) ADVANCE(1124);
      if (lookahead == 8835) ADVANCE(1108);
      if (lookahead == 8836) ADVANCE(1127);
      if (lookahead == 8837) ADVANCE(1111);
      if (lookahead == 8838) ADVANCE(1121);
      if (lookahead == 8839) ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1041);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(478);
      if (lookahead == '"') ADVANCE(1248);
      if (lookahead == '$') ADVANCE(548);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(1242);
      if (lookahead == '(') ADVANCE(1132);
      if (lookahead == ')') ADVANCE(1133);
      if (lookahead == '*') ADVANCE(1086);
      if (lookahead == '+') ADVANCE(1083);
      if (lookahead == ',') ADVANCE(1141);
      if (lookahead == '-') ADVANCE(1085);
      if (lookahead == '/') ADVANCE(1089);
      if (lookahead == ':') ADVANCE(1144);
      if (lookahead == ';') ADVANCE(1142);
      if (lookahead == '<') ADVANCE(1079);
      if (lookahead == '=') ADVANCE(1067);
      if (lookahead == '>') ADVANCE(1081);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == 'A') ADVANCE(102);
      if (lookahead == 'C') ADVANCE(133);
      if (lookahead == 'E') ADVANCE(59);
      if (lookahead == 'F') ADVANCE(51);
      if (lookahead == 'H') ADVANCE(156);
      if (lookahead == 'I') ADVANCE(117);
      if (lookahead == 'L') ADVANCE(349);
      if (lookahead == 'M') ADVANCE(47);
      if (lookahead == 'N') ADVANCE(132);
      if (lookahead == 'O') ADVANCE(143);
      if (lookahead == 'P') ADVANCE(159);
      if (lookahead == 'R') ADVANCE(163);
      if (lookahead == 'T') ADVANCE(144);
      if (lookahead == '[') ADVANCE(1134);
      if (lookahead == ']') ADVANCE(1135);
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == 'b') ADVANCE(250);
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead == 'd') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 'g') ADVANCE(207);
      if (lookahead == 'h') ADVANCE(282);
      if (lookahead == 'i') ADVANCE(244);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(251);
      if (lookahead == 'o') ADVANCE(191);
      if (lookahead == 'p') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(220);
      if (lookahead == 'x') ADVANCE(1088);
      if (lookahead == '{') ADVANCE(1136);
      if (lookahead == '|') ADVANCE(527);
      if (lookahead == '}') ADVANCE(1137);
      if (lookahead == '~') ADVANCE(1075);
      if (lookahead == 247) ADVANCE(1091);
      if (lookahead == 8712) ADVANCE(1114);
      if (lookahead == 8713) ADVANCE(1118);
      if (lookahead == 8715) ADVANCE(1099);
      if (lookahead == 8716) ADVANCE(1102);
      if (lookahead == 8834) ADVANCE(1124);
      if (lookahead == 8835) ADVANCE(1108);
      if (lookahead == 8836) ADVANCE(1127);
      if (lookahead == 8837) ADVANCE(1111);
      if (lookahead == 8838) ADVANCE(1121);
      if (lookahead == 8839) ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1041);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(478);
      if (lookahead == '"') ADVANCE(1248);
      if (lookahead == '$') ADVANCE(548);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(1242);
      if (lookahead == '(') ADVANCE(1132);
      if (lookahead == ')') ADVANCE(1133);
      if (lookahead == '*') ADVANCE(1086);
      if (lookahead == '+') ADVANCE(1083);
      if (lookahead == ',') ADVANCE(1141);
      if (lookahead == '-') ADVANCE(1085);
      if (lookahead == '/') ADVANCE(1089);
      if (lookahead == ':') ADVANCE(1144);
      if (lookahead == ';') ADVANCE(1142);
      if (lookahead == '<') ADVANCE(1079);
      if (lookahead == '=') ADVANCE(1067);
      if (lookahead == '>') ADVANCE(1081);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == 'A') ADVANCE(102);
      if (lookahead == 'C') ADVANCE(136);
      if (lookahead == 'E') ADVANCE(58);
      if (lookahead == 'F') ADVANCE(51);
      if (lookahead == 'H') ADVANCE(156);
      if (lookahead == 'I') ADVANCE(118);
      if (lookahead == 'M') ADVANCE(47);
      if (lookahead == 'N') ADVANCE(132);
      if (lookahead == 'O') ADVANCE(143);
      if (lookahead == 'P') ADVANCE(160);
      if (lookahead == 'R') ADVANCE(163);
      if (lookahead == 'T') ADVANCE(145);
      if (lookahead == '[') ADVANCE(1134);
      if (lookahead == ']') ADVANCE(1135);
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == 'b') ADVANCE(250);
      if (lookahead == 'c') ADVANCE(253);
      if (lookahead == 'd') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 'g') ADVANCE(207);
      if (lookahead == 'h') ADVANCE(282);
      if (lookahead == 'i') ADVANCE(245);
      if (lookahead == 'l') ADVANCE(213);
      if (lookahead == 'm') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(251);
      if (lookahead == 'o') ADVANCE(191);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 't') ADVANCE(221);
      if (lookahead == 'x') ADVANCE(1088);
      if (lookahead == '{') ADVANCE(1136);
      if (lookahead == '|') ADVANCE(527);
      if (lookahead == '}') ADVANCE(1138);
      if (lookahead == '~') ADVANCE(1075);
      if (lookahead == 247) ADVANCE(1091);
      if (lookahead == 8712) ADVANCE(1114);
      if (lookahead == 8713) ADVANCE(1118);
      if (lookahead == 8715) ADVANCE(1099);
      if (lookahead == 8716) ADVANCE(1102);
      if (lookahead == 8834) ADVANCE(1124);
      if (lookahead == 8835) ADVANCE(1108);
      if (lookahead == 8836) ADVANCE(1127);
      if (lookahead == 8837) ADVANCE(1111);
      if (lookahead == 8838) ADVANCE(1121);
      if (lookahead == 8839) ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1041);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(478);
      if (lookahead == '"') ADVANCE(1248);
      if (lookahead == '$') ADVANCE(548);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(1242);
      if (lookahead == '(') ADVANCE(1132);
      if (lookahead == ')') ADVANCE(1133);
      if (lookahead == '*') ADVANCE(1086);
      if (lookahead == '+') ADVANCE(1083);
      if (lookahead == ',') ADVANCE(1141);
      if (lookahead == '-') ADVANCE(1085);
      if (lookahead == '/') ADVANCE(1089);
      if (lookahead == ':') ADVANCE(1144);
      if (lookahead == ';') ADVANCE(1142);
      if (lookahead == '<') ADVANCE(1079);
      if (lookahead == '=') ADVANCE(1067);
      if (lookahead == '>') ADVANCE(1081);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == 'A') ADVANCE(102);
      if (lookahead == 'C') ADVANCE(136);
      if (lookahead == 'E') ADVANCE(58);
      if (lookahead == 'F') ADVANCE(51);
      if (lookahead == 'H') ADVANCE(156);
      if (lookahead == 'I') ADVANCE(118);
      if (lookahead == 'M') ADVANCE(47);
      if (lookahead == 'N') ADVANCE(132);
      if (lookahead == 'O') ADVANCE(143);
      if (lookahead == 'P') ADVANCE(160);
      if (lookahead == 'R') ADVANCE(163);
      if (lookahead == 'T') ADVANCE(145);
      if (lookahead == '[') ADVANCE(1134);
      if (lookahead == ']') ADVANCE(1135);
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == 'b') ADVANCE(250);
      if (lookahead == 'c') ADVANCE(253);
      if (lookahead == 'd') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 'g') ADVANCE(207);
      if (lookahead == 'h') ADVANCE(282);
      if (lookahead == 'i') ADVANCE(245);
      if (lookahead == 'l') ADVANCE(213);
      if (lookahead == 'm') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(251);
      if (lookahead == 'o') ADVANCE(191);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(221);
      if (lookahead == 'x') ADVANCE(1088);
      if (lookahead == '{') ADVANCE(1136);
      if (lookahead == '|') ADVANCE(527);
      if (lookahead == '}') ADVANCE(1137);
      if (lookahead == '~') ADVANCE(1075);
      if (lookahead == 247) ADVANCE(1091);
      if (lookahead == 8712) ADVANCE(1114);
      if (lookahead == 8713) ADVANCE(1118);
      if (lookahead == 8715) ADVANCE(1099);
      if (lookahead == 8716) ADVANCE(1102);
      if (lookahead == 8834) ADVANCE(1124);
      if (lookahead == 8835) ADVANCE(1108);
      if (lookahead == 8836) ADVANCE(1127);
      if (lookahead == 8837) ADVANCE(1111);
      if (lookahead == 8838) ADVANCE(1121);
      if (lookahead == 8839) ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1041);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(1248);
      if (lookahead == '\\') ADVANCE(1245);
      if (lookahead == 's') ADVANCE(1250);
      if (lookahead != 0) ADVANCE(1249);
      END_STATE();
    case 13:
      if (lookahead == '&') ADVANCE(1057);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(1242);
      if (lookahead == '\\') ADVANCE(1245);
      if (lookahead == 's') ADVANCE(1244);
      if (lookahead != 0) ADVANCE(1243);
      END_STATE();
    case 15:
      if (lookahead == ')') ADVANCE(526);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(22);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 17:
      if (lookahead == '1') ADVANCE(23);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(24);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 19:
      if (lookahead == '1') ADVANCE(25);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(33);
      if (lookahead == '3') ADVANCE(41);
      if (lookahead == '5') ADVANCE(16);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(33);
      if (lookahead == '3') ADVANCE(41);
      if (lookahead == '5') ADVANCE(16);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(1180);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 23:
      if (lookahead == '2') ADVANCE(1186);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(1192);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 25:
      if (lookahead == '2') ADVANCE(1198);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(34);
      if (lookahead == '3') ADVANCE(42);
      if (lookahead == '5') ADVANCE(17);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 27:
      if (lookahead == '2') ADVANCE(35);
      if (lookahead == '3') ADVANCE(43);
      if (lookahead == '5') ADVANCE(18);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 28:
      if (lookahead == '2') ADVANCE(36);
      if (lookahead == '3') ADVANCE(44);
      if (lookahead == '5') ADVANCE(19);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 29:
      if (lookahead == '4') ADVANCE(1178);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 30:
      if (lookahead == '4') ADVANCE(1184);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 31:
      if (lookahead == '4') ADVANCE(1190);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 32:
      if (lookahead == '4') ADVANCE(1196);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 33:
      if (lookahead == '5') ADVANCE(37);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 34:
      if (lookahead == '5') ADVANCE(38);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 35:
      if (lookahead == '5') ADVANCE(39);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 36:
      if (lookahead == '5') ADVANCE(40);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 37:
      if (lookahead == '6') ADVANCE(1176);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 38:
      if (lookahead == '6') ADVANCE(1182);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 39:
      if (lookahead == '6') ADVANCE(1188);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 40:
      if (lookahead == '6') ADVANCE(1194);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 41:
      if (lookahead == '8') ADVANCE(29);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 42:
      if (lookahead == '8') ADVANCE(30);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 43:
      if (lookahead == '8') ADVANCE(31);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 44:
      if (lookahead == '8') ADVANCE(32);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(1066);
      if (lookahead == '=') ADVANCE(1073);
      if (lookahead == '?') ADVANCE(1065);
      if (lookahead == '~') ADVANCE(1077);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A') ADVANCE(166);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A') ADVANCE(428);
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A') ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A') ADVANCE(106);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(444);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(337);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(422);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(411);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A') ADVANCE(445);
      if (lookahead == 'E') ADVANCE(355);
      if (lookahead == 'U') ADVANCE(420);
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == 'u') ADVANCE(267);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1052);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(352);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'C') ADVANCE(447);
      if (lookahead == 'c') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'C') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'S') ADVANCE(21);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(436);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(323);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'S') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 's') ADVANCE(437);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(344);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D') ADVANCE(1059);
      if (lookahead == 'Y') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(1052);
      if (lookahead == 'e') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(379);
      if (lookahead == 'a') ADVANCE(239);
      if (lookahead == 'e') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(1237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(1227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(1229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(1113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(1123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(1116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(1126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(1110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(147);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(425);
      if (lookahead == 'a') ADVANCE(277);
      if (lookahead == 'e') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(412);
      if (lookahead == 'e') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'H') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(62);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(414);
      if (lookahead == 'i') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(414);
      if (lookahead == 'i') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(395);
      if (lookahead == 'R') ADVANCE(309);
      if (lookahead == 'Y') ADVANCE(418);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == 'y') ADVANCE(140);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(313);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(345);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 101:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L') ADVANCE(103);
      if (lookahead == 'N') ADVANCE(60);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(448);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1048);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 102:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L') ADVANCE(103);
      if (lookahead == 'N') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 103:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 104:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L') ADVANCE(1233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 105:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L') ADVANCE(1104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 106:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 107:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L') ADVANCE(104);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 108:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 109:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L') ADVANCE(105);
      if (lookahead == 'N') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 110:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'M') ADVANCE(346);
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead == 'm') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 111:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'M') ADVANCE(347);
      if (lookahead == 'm') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 112:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(1052);
      if (lookahead == 'n') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 113:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(1052);
      if (lookahead == 'n') ADVANCE(1056);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 114:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(1094);
      if (lookahead == 'S') ADVANCE(1069);
      if (lookahead == 'n') ADVANCE(327);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1052);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 115:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(327);
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == 's') ADVANCE(460);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1052);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 116:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(70);
      if (lookahead == 'T') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 117:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(1096);
      if (lookahead == 'S') ADVANCE(1069);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 118:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(1096);
      if (lookahead == 'S') ADVANCE(1069);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 119:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(167);
      if (lookahead == 'n') ADVANCE(443);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(380);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 120:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(169);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 121:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 122:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(320);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 123:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 124:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(80);
      if (lookahead == 'T') ADVANCE(1101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 125:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 126:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 127:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 128:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 129:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O') ADVANCE(119);
      if (lookahead == 'o') ADVANCE(376);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(400);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 130:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O') ADVANCE(376);
      if (lookahead == 'R') ADVANCE(338);
      if (lookahead == 'o') ADVANCE(292);
      if (lookahead == 'r') ADVANCE(297);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 131:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O') ADVANCE(116);
      if (lookahead == 'U') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(393);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(394);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 132:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O') ADVANCE(116);
      if (lookahead == 'U') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 133:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(418);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 134:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O') ADVANCE(418);
      if (lookahead == 'o') ADVANCE(293);
      if (lookahead == 'r') ADVANCE(298);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 135:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 136:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 137:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O') ADVANCE(398);
      if (lookahead == 'o') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 138:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O') ADVANCE(398);
      if (lookahead == 'o') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 139:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'P') ADVANCE(1052);
      if (lookahead == 'p') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 140:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'P') ADVANCE(328);
      if (lookahead == 'p') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 141:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R') ADVANCE(1062);
      if (lookahead == 'U') ADVANCE(168);
      if (lookahead == 'r') ADVANCE(326);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 142:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R') ADVANCE(176);
      if (lookahead == 'r') ADVANCE(309);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(313);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(345);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(395);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(373);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 143:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R') ADVANCE(1064);
      if (lookahead == 'U') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 144:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R') ADVANCE(177);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 145:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 146:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R') ADVANCE(302);
      if (lookahead == 'r') ADVANCE(274);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(433);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 147:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 148:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 149:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(1131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 150:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 151:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(437);
      if (lookahead == 's') ADVANCE(154);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(344);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 152:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 153:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 154:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(371);
      if (lookahead == 's') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 155:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 156:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 157:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 158:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(27);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(428);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 159:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(27);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 160:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 161:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 162:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 163:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 164:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 165:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 166:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'T') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 167:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'T') ADVANCE(53);
      if (lookahead == 't') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 168:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'T') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 169:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'T') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 170:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'T') ADVANCE(306);
      if (lookahead == 't') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 171:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'T') ADVANCE(407);
      if (lookahead == 't') ADVANCE(1160);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(332);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(407);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 172:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'T') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 173:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'T') ADVANCE(371);
      if (lookahead == 't') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 174:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'U') ADVANCE(382);
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead == 'l') ADVANCE(259);
      if (lookahead == 'n') ADVANCE(459);
      if (lookahead == 'u') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(444);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(337);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(422);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 175:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'U') ADVANCE(393);
      if (lookahead == 'o') ADVANCE(243);
      if (lookahead == 'u') ADVANCE(110);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(394);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 176:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'U') ADVANCE(71);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 177:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'U') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 178:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'Y') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 179:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead == 'l') ADVANCE(259);
      if (lookahead == 'n') ADVANCE(459);
      if (lookahead == 'u') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 180:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(271);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 181:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 182:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(239);
      if (lookahead == 'e') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 183:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(277);
      if (lookahead == 'e') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 184:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 185:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(290);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == 'u') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 186:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 187:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 188:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 189:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 190:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'b') ADVANCE(228);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1052);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 191:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'b') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 192:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'b') ADVANCE(209);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 193:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'b') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 194:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'c') ADVANCE(222);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(370);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(350);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 195:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'c') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 196:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'c') ADVANCE(255);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(312);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(409);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 197:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'c') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 198:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'c') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 199:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'c') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 200:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'd') ADVANCE(1214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 201:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'd') ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 202:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(1235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 203:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(1223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 204:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(1225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 205:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 206:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 207:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 208:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 209:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 210:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 211:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(289);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 212:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 213:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 214:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 215:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 216:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 217:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 218:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'g') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 219:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'h') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 220:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'i') ADVANCE(236);
      if (lookahead == 'r') ADVANCE(223);
      if (lookahead == 'y') ADVANCE(264);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 221:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'i') ADVANCE(236);
      if (lookahead == 'r') ADVANCE(223);
      if (lookahead == 'y') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 222:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'i') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 223:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == 'u') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 224:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 225:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'i') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 226:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'i') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 227:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'i') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 228:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'j') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 229:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 230:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 231:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(1231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 232:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(1154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 233:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead == 'm') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 234:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'm') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 235:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'm') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 236:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'm') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 237:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'n') ADVANCE(296);
      if (lookahead == 'r') ADVANCE(265);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(448);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1048);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 238:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'n') ADVANCE(296);
      if (lookahead == 'r') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 239:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'n') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 240:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'n') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 241:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'n') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 242:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'n') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 243:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'n') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 244:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'n') ADVANCE(278);
      if (lookahead == 's') ADVANCE(460);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 245:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'n') ADVANCE(278);
      if (lookahead == 's') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 246:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'n') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 247:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'n') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 248:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'n') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 249:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'o') ADVANCE(254);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(353);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 250:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'o') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 251:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'o') ADVANCE(243);
      if (lookahead == 'u') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 252:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'o') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 253:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'o') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 254:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'o') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 255:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'o') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 256:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'o') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 257:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'o') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 258:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'o') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 259:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'o') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 260:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'o') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 261:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'p') ADVANCE(1217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 262:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'p') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 263:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'p') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 264:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'p') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 265:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'r') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 266:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'r') ADVANCE(1164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 267:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'r') ADVANCE(187);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 268:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'r') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 269:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'r') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 270:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'r') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 271:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'r') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 272:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 's') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 273:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 's') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 274:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 275:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 's') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 276:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 's') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 277:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 't') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 278:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 't') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 279:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 't') ADVANCE(1203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 280:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 't') ADVANCE(1158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 281:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 't') ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 282:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 't') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 283:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 't') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 284:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 't') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 285:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 't') ADVANCE(189);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 286:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 't') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 287:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 't') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 288:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 't') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 289:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 't') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 290:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 't') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 291:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 't') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 292:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'u') ADVANCE(246);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(380);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(390);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 293:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'u') ADVANCE(246);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 294:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'u') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 295:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'u') ADVANCE(203);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 296:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'y') ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 297:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'y') ADVANCE(262);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 298:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'y') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 299:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'y') ADVANCE(1148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 300:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'y') ADVANCE(1172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 301:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 302:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 303:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 304:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(445);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1052);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(355);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(352);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(410);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 305:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 306:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 307:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 308:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 309:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 310:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 311:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 312:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 313:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 314:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 315:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 316:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(362);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(387);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(357);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(349);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(377);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 317:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 318:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 319:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 320:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 321:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 322:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 323:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 324:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 325:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 326:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 327:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(332);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(407);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(342);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 328:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 329:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(353);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 330:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(457);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 331:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 332:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 333:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 334:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 335:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 336:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 337:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 338:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 339:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(442);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(390);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 340:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 341:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 342:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 343:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 344:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 345:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 346:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 347:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 348:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 349:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 350:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 351:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 352:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 353:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(413);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 354:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(452);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 355:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(370);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(350);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 356:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 357:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 358:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 359:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 360:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 361:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(310);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 362:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(343);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 363:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 364:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 365:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 366:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(398);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 367:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 368:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 369:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 370:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 371:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 372:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 373:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 374:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 375:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(436);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(323);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 376:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(380);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(390);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 377:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 378:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 379:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(312);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(409);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 380:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(312);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 381:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 382:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(374);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 383:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 384:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 385:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 386:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(388);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 387:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(344);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(437);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 388:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 389:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 390:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 391:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 392:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 393:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 394:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 395:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 396:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 397:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1052);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 398:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 399:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(363);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(325);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 400:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 401:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 402:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 403:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 404:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 405:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 406:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 407:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 408:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 409:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 410:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 411:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 412:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 413:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 414:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 415:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 416:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 417:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 418:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 419:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 420:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 421:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 422:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 423:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 424:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 425:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 426:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 427:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 428:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(302);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(433);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 429:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 430:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 431:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 432:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 433:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 434:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 435:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 436:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 437:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 438:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 439:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 440:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 441:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 442:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 443:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 444:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 445:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 446:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 447:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 448:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 449:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 450:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 451:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 452:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 453:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 454:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 455:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 456:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 457:
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 458:
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 459:
      if (lookahead == ':') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 460:
      if (lookahead == ':') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 461:
      if (lookahead == ':') ADVANCE(544);
      END_STATE();
    case 462:
      if (lookahead == ':') ADVANCE(565);
      if (lookahead == 'm') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 463:
      if (lookahead == ':') ADVANCE(545);
      END_STATE();
    case 464:
      if (lookahead == ':') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 465:
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 466:
      if (lookahead == ':') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 467:
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 468:
      if (lookahead == ':') ADVANCE(570);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 469:
      if (lookahead == ':') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 470:
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 471:
      if (lookahead == ':') ADVANCE(539);
      END_STATE();
    case 472:
      if (lookahead == ':') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 473:
      if (lookahead == ':') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 474:
      if (lookahead == ':') ADVANCE(541);
      END_STATE();
    case 475:
      if (lookahead == ':') ADVANCE(542);
      END_STATE();
    case 476:
      if (lookahead == ':') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 477:
      if (lookahead == ':') ADVANCE(475);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(477);
      END_STATE();
    case 478:
      if (lookahead == '=') ADVANCE(1070);
      if (lookahead == '~') ADVANCE(1076);
      END_STATE();
    case 479:
      if (lookahead == '>') ADVANCE(559);
      END_STATE();
    case 480:
      if (lookahead == '>') ADVANCE(558);
      END_STATE();
    case 481:
      if (lookahead == 'I') ADVANCE(483);
      END_STATE();
    case 482:
      if (lookahead == 'N') ADVANCE(484);
      END_STATE();
    case 483:
      if (lookahead == 'N') ADVANCE(1117);
      END_STATE();
    case 484:
      if (lookahead == 'O') ADVANCE(485);
      END_STATE();
    case 485:
      if (lookahead == 'T') ADVANCE(1071);
      END_STATE();
    case 486:
      if (lookahead == 'a') ADVANCE(501);
      END_STATE();
    case 487:
      if (lookahead == 'a') ADVANCE(518);
      if (lookahead == 'e') ADVANCE(491);
      if (lookahead == 'u') ADVANCE(513);
      END_STATE();
    case 488:
      if (lookahead == 'a') ADVANCE(519);
      END_STATE();
    case 489:
      if (lookahead == 'a') ADVANCE(522);
      END_STATE();
    case 490:
      if (lookahead == 'b') ADVANCE(494);
      END_STATE();
    case 491:
      if (lookahead == 'c') ADVANCE(498);
      END_STATE();
    case 492:
      if (lookahead == 'e') ADVANCE(479);
      END_STATE();
    case 493:
      if (lookahead == 'e') ADVANCE(480);
      END_STATE();
    case 494:
      if (lookahead == 'e') ADVANCE(514);
      END_STATE();
    case 495:
      if (lookahead == 'e') ADVANCE(523);
      END_STATE();
    case 496:
      if (lookahead == 'g') ADVANCE(479);
      END_STATE();
    case 497:
      if (lookahead == 'i') ADVANCE(507);
      END_STATE();
    case 498:
      if (lookahead == 'i') ADVANCE(504);
      END_STATE();
    case 499:
      if (lookahead == 'i') ADVANCE(505);
      END_STATE();
    case 500:
      if (lookahead == 'i') ADVANCE(511);
      END_STATE();
    case 501:
      if (lookahead == 'l') ADVANCE(479);
      END_STATE();
    case 502:
      if (lookahead == 'l') ADVANCE(512);
      if (lookahead == 'u') ADVANCE(520);
      END_STATE();
    case 503:
      if (lookahead == 'm') ADVANCE(490);
      END_STATE();
    case 504:
      if (lookahead == 'm') ADVANCE(486);
      END_STATE();
    case 505:
      if (lookahead == 'm') ADVANCE(492);
      END_STATE();
    case 506:
      if (lookahead == 'n') ADVANCE(479);
      END_STATE();
    case 507:
      if (lookahead == 'n') ADVANCE(496);
      END_STATE();
    case 508:
      if (lookahead == 'n') ADVANCE(519);
      END_STATE();
    case 509:
      if (lookahead == 'o') ADVANCE(501);
      END_STATE();
    case 510:
      if (lookahead == 'o') ADVANCE(509);
      END_STATE();
    case 511:
      if (lookahead == 'o') ADVANCE(506);
      END_STATE();
    case 512:
      if (lookahead == 'o') ADVANCE(488);
      END_STATE();
    case 513:
      if (lookahead == 'r') ADVANCE(489);
      END_STATE();
    case 514:
      if (lookahead == 'r') ADVANCE(479);
      END_STATE();
    case 515:
      if (lookahead == 'r') ADVANCE(497);
      END_STATE();
    case 516:
      if (lookahead == 'r') ADVANCE(493);
      END_STATE();
    case 517:
      if (lookahead == 's') ADVANCE(1247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1246);
      END_STATE();
    case 518:
      if (lookahead == 't') ADVANCE(495);
      END_STATE();
    case 519:
      if (lookahead == 't') ADVANCE(479);
      END_STATE();
    case 520:
      if (lookahead == 't') ADVANCE(525);
      END_STATE();
    case 521:
      if (lookahead == 't') ADVANCE(515);
      END_STATE();
    case 522:
      if (lookahead == 't') ADVANCE(500);
      END_STATE();
    case 523:
      if (lookahead == 't') ADVANCE(499);
      END_STATE();
    case 524:
      if (lookahead == 'u') ADVANCE(503);
      END_STATE();
    case 525:
      if (lookahead == 'u') ADVANCE(516);
      END_STATE();
    case 526:
      if (lookahead == '{') ADVANCE(555);
      END_STATE();
    case 527:
      if (lookahead == '|') ADVANCE(1060);
      END_STATE();
    case 528:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1042);
      END_STATE();
    case 529:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1209);
      END_STATE();
    case 530:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1206);
      END_STATE();
    case 531:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1208);
      END_STATE();
    case 532:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1210);
      END_STATE();
    case 533:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1211);
      END_STATE();
    case 534:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 535:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1219);
      END_STATE();
    case 536:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1220);
      END_STATE();
    case 537:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1200);
      END_STATE();
    case 538:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(477);
      END_STATE();
    case 539:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 540:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1216);
      END_STATE();
    case 541:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1201);
      END_STATE();
    case 542:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1212);
      END_STATE();
    case 543:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1204);
      END_STATE();
    case 544:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1215);
      END_STATE();
    case 545:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1205);
      END_STATE();
    case 546:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(1040);
      END_STATE();
    case 547:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1218);
      END_STATE();
    case 548:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1238);
      END_STATE();
    case 549:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1239);
      END_STATE();
    case 550:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 551:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 552:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (lookahead == '`' ||
          lookahead == 10217) ADVANCE(1044);
      END_STATE();
    case 553:
      if (eof) ADVANCE(554);
      if (lookahead == '!') ADVANCE(478);
      if (lookahead == '"') ADVANCE(1248);
      if (lookahead == '#') ADVANCE(1241);
      if (lookahead == '$') ADVANCE(548);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(1242);
      if (lookahead == '(') ADVANCE(1132);
      if (lookahead == ')') ADVANCE(1133);
      if (lookahead == '*') ADVANCE(1086);
      if (lookahead == '+') ADVANCE(1083);
      if (lookahead == ',') ADVANCE(1141);
      if (lookahead == '-') ADVANCE(1084);
      if (lookahead == '/') ADVANCE(1090);
      if (lookahead == ':') ADVANCE(1143);
      if (lookahead == ';') ADVANCE(1142);
      if (lookahead == '<') ADVANCE(1079);
      if (lookahead == '=') ADVANCE(1067);
      if (lookahead == '>') ADVANCE(1081);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == 'A') ADVANCE(101);
      if (lookahead == 'B') ADVANCE(329);
      if (lookahead == 'C') ADVANCE(129);
      if (lookahead == 'D') ADVANCE(304);
      if (lookahead == 'E') ADVANCE(57);
      if (lookahead == 'F') ADVANCE(50);
      if (lookahead == 'G') ADVANCE(424);
      if (lookahead == 'H') ADVANCE(156);
      if (lookahead == 'I') ADVANCE(114);
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == 'N') ADVANCE(131);
      if (lookahead == 'O') ADVANCE(141);
      if (lookahead == 'P') ADVANCE(158);
      if (lookahead == 'R') ADVANCE(162);
      if (lookahead == 'S') ADVANCE(316);
      if (lookahead == 'T') ADVANCE(142);
      if (lookahead == '[') ADVANCE(1134);
      if (lookahead == ']') ADVANCE(1135);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'b') ADVANCE(249);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 'g') ADVANCE(206);
      if (lookahead == 'h') ADVANCE(282);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == 'm') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == 'o') ADVANCE(190);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(69);
      if (lookahead == 's') ADVANCE(4);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == 'x') ADVANCE(1088);
      if (lookahead == '{') ADVANCE(1136);
      if (lookahead == '|') ADVANCE(527);
      if (lookahead == '}') ADVANCE(1137);
      if (lookahead == '~') ADVANCE(1075);
      if (lookahead == 247) ADVANCE(1091);
      if (lookahead == 8712) ADVANCE(1114);
      if (lookahead == 8713) ADVANCE(1118);
      if (lookahead == 8715) ADVANCE(1099);
      if (lookahead == 8716) ADVANCE(1102);
      if (lookahead == 8834) ADVANCE(1124);
      if (lookahead == 8835) ADVANCE(1108);
      if (lookahead == 8836) ADVANCE(1127);
      if (lookahead == 8837) ADVANCE(1111);
      if (lookahead == 8838) ADVANCE(1121);
      if (lookahead == 8839) ADVANCE(1105);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(330);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(339);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(399);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(305);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(360);
      if (('J' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1041);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_function_LPAREN_RPAREN_LBRACE);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_RBRACE_SEMI);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_RBRACE_COMMA);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_future_token1);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_casting_token1);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(529);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(546);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(543);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(547);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(550);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(530);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(531);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(532);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(533);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(534);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(535);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(536);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(537);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(538);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(540);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(481);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(528);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 's' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(1020);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(585);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(586);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(587);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(588);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(596);
      if (lookahead == '3') ADVANCE(604);
      if (lookahead == '5') ADVANCE(579);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(933);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(596);
      if (lookahead == '3') ADVANCE(604);
      if (lookahead == '5') ADVANCE(579);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(1179);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(1185);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(1191);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(1197);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(597);
      if (lookahead == '3') ADVANCE(605);
      if (lookahead == '5') ADVANCE(580);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(598);
      if (lookahead == '3') ADVANCE(606);
      if (lookahead == '5') ADVANCE(581);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(599);
      if (lookahead == '3') ADVANCE(607);
      if (lookahead == '5') ADVANCE(582);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(1177);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(1183);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(1189);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(1195);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '5') ADVANCE(600);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '5') ADVANCE(601);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '5') ADVANCE(602);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '5') ADVANCE(603);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(1175);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(1181);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(1187);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(1193);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(592);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(593);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(594);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(595);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A') ADVANCE(728);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A') ADVANCE(990);
      if (lookahead == 'a') ADVANCE(708);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(993);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A') ADVANCE(1173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A') ADVANCE(668);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1006);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(899);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(984);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(973);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A') ADVANCE(1007);
      if (lookahead == 'E') ADVANCE(917);
      if (lookahead == 'U') ADVANCE(982);
      if (lookahead == 'a') ADVANCE(732);
      if (lookahead == 'e') ADVANCE(756);
      if (lookahead == 'u') ADVANCE(829);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(914);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(972);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A') ADVANCE(655);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'C') ADVANCE(1009);
      if (lookahead == 'c') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'C') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D') ADVANCE(623);
      if (lookahead == 'S') ADVANCE(584);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(998);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(885);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D') ADVANCE(623);
      if (lookahead == 'S') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D') ADVANCE(623);
      if (lookahead == 'S') ADVANCE(583);
      if (lookahead == 's') ADVANCE(999);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(906);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D') ADVANCE(1058);
      if (lookahead == 'Y') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(1051);
      if (lookahead == 'e') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(941);
      if (lookahead == 'a') ADVANCE(801);
      if (lookahead == 'e') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(1226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(1228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(1122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(1115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(1125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(709);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(987);
      if (lookahead == 'a') ADVANCE(839);
      if (lookahead == 'e') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(979);
      if (lookahead == 'e') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(974);
      if (lookahead == 'e') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E') ADVANCE(898);
      if (lookahead == 'e') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'H') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(624);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(976);
      if (lookahead == 'i') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(976);
      if (lookahead == 'i') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(957);
      if (lookahead == 'R') ADVANCE(871);
      if (lookahead == 'Y') ADVANCE(980);
      if (lookahead == 'i') ADVANCE(673);
      if (lookahead == 'r') ADVANCE(857);
      if (lookahead == 'y') ADVANCE(702);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(875);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(907);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(935);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L') ADVANCE(665);
      if (lookahead == 'N') ADVANCE(622);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1010);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1047);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L') ADVANCE(665);
      if (lookahead == 'N') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L') ADVANCE(1232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L') ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L') ADVANCE(666);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L') ADVANCE(667);
      if (lookahead == 'N') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'M') ADVANCE(908);
      if (lookahead == 'l') ADVANCE(793);
      if (lookahead == 'm') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'M') ADVANCE(909);
      if (lookahead == 'm') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(1051);
      if (lookahead == 'n') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(1051);
      if (lookahead == 'n') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(1093);
      if (lookahead == 'S') ADVANCE(1068);
      if (lookahead == 'n') ADVANCE(889);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1051);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(889);
      if (lookahead == 'n') ADVANCE(733);
      if (lookahead == 's') ADVANCE(1024);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1051);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(632);
      if (lookahead == 'T') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(1095);
      if (lookahead == 'S') ADVANCE(1068);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(1095);
      if (lookahead == 'S') ADVANCE(1068);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(729);
      if (lookahead == 'n') ADVANCE(1005);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(942);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(952);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(731);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(882);
      if (lookahead == 'n') ADVANCE(617);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(642);
      if (lookahead == 'T') ADVANCE(1100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O') ADVANCE(681);
      if (lookahead == 'o') ADVANCE(938);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(962);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O') ADVANCE(938);
      if (lookahead == 'R') ADVANCE(900);
      if (lookahead == 'o') ADVANCE(854);
      if (lookahead == 'r') ADVANCE(859);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(962);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O') ADVANCE(678);
      if (lookahead == 'U') ADVANCE(669);
      if (lookahead == 'u') ADVANCE(955);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(956);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O') ADVANCE(678);
      if (lookahead == 'U') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O') ADVANCE(682);
      if (lookahead == 'o') ADVANCE(980);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O') ADVANCE(980);
      if (lookahead == 'o') ADVANCE(855);
      if (lookahead == 'r') ADVANCE(860);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O') ADVANCE(960);
      if (lookahead == 'o') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O') ADVANCE(960);
      if (lookahead == 'o') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'P') ADVANCE(1051);
      if (lookahead == 'p') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'P') ADVANCE(890);
      if (lookahead == 'p') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R') ADVANCE(1061);
      if (lookahead == 'U') ADVANCE(730);
      if (lookahead == 'r') ADVANCE(888);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R') ADVANCE(738);
      if (lookahead == 'r') ADVANCE(871);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(875);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(907);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(957);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(935);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R') ADVANCE(1063);
      if (lookahead == 'U') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R') ADVANCE(739);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R') ADVANCE(864);
      if (lookahead == 'r') ADVANCE(836);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(995);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(1097);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(1130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(999);
      if (lookahead == 's') ADVANCE(716);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(906);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(933);
      if (lookahead == 's') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(590);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(990);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(993);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(590);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(591);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'T') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'T') ADVANCE(615);
      if (lookahead == 't') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'T') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'T') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'T') ADVANCE(868);
      if (lookahead == 't') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'T') ADVANCE(969);
      if (lookahead == 't') ADVANCE(1159);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(894);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(969);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'T') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'T') ADVANCE(933);
      if (lookahead == 't') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'U') ADVANCE(944);
      if (lookahead == 'a') ADVANCE(791);
      if (lookahead == 'l') ADVANCE(821);
      if (lookahead == 'n') ADVANCE(1023);
      if (lookahead == 'u') ADVANCE(684);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1006);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(899);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(984);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(973);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'U') ADVANCE(955);
      if (lookahead == 'o') ADVANCE(805);
      if (lookahead == 'u') ADVANCE(672);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(956);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'U') ADVANCE(633);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'U') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'Y') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(791);
      if (lookahead == 'l') ADVANCE(821);
      if (lookahead == 'n') ADVANCE(1023);
      if (lookahead == 'u') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(833);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(801);
      if (lookahead == 'e') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(839);
      if (lookahead == 'e') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(852);
      if (lookahead == 'e') ADVANCE(757);
      if (lookahead == 'u') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(1029);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'b') ADVANCE(790);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1051);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'b') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'b') ADVANCE(771);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(992);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'b') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'c') ADVANCE(784);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(932);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(912);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'c') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'c') ADVANCE(817);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(874);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(971);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'c') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'c') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'c') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'd') ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'd') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(1234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(1222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(1224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(1151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(814);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(970);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(851);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'g') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'h') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'i') ADVANCE(798);
      if (lookahead == 'r') ADVANCE(785);
      if (lookahead == 'y') ADVANCE(826);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'i') ADVANCE(798);
      if (lookahead == 'r') ADVANCE(785);
      if (lookahead == 'y') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'i') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'i') ADVANCE(802);
      if (lookahead == 'u') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'i') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'i') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'i') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'i') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'j') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(1230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(1153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(793);
      if (lookahead == 'm') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'm') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'm') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'm') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'n') ADVANCE(858);
      if (lookahead == 'r') ADVANCE(827);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1010);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1047);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'n') ADVANCE(858);
      if (lookahead == 'r') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'n') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'n') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'n') ADVANCE(1155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'n') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'n') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'n') ADVANCE(840);
      if (lookahead == 's') ADVANCE(1024);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'n') ADVANCE(840);
      if (lookahead == 's') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'n') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'n') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'n') ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'o') ADVANCE(816);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(915);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'o') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'o') ADVANCE(805);
      if (lookahead == 'u') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'o') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'o') ADVANCE(856);
      if (lookahead == 'r') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'o') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'o') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'o') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'o') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'o') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'o') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'o') ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'p') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'p') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'p') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'p') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'r') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'r') ADVANCE(1163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'r') ADVANCE(749);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'r') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'r') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'r') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'r') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 's') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 's') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 's') ADVANCE(777);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 's') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 's') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 't') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 't') ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 't') ADVANCE(1202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 't') ADVANCE(1157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 't') ADVANCE(1165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 't') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 't') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 't') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 't') ADVANCE(751);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 't') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 't') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 't') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 't') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 't') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 't') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'u') ADVANCE(808);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(942);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(952);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'u') ADVANCE(808);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'u') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'u') ADVANCE(765);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'y') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'y') ADVANCE(824);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'y') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'y') ADVANCE(1147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'y') ADVANCE(1171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1007);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(917);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(914);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(972);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(982);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1008);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(924);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(949);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(919);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(911);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(939);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(921);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(894);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(969);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(904);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(969);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(915);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1019);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1004);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(952);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(918);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(954);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(960);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(992);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1000);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1008);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(975);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1014);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(932);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(912);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(872);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(977);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(905);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(983);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(960);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(960);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(966);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(978);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(907);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(998);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(885);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(942);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(952);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(874);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(971);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(874);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(958);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(936);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(950);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(906);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(999);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1051);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(925);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(887);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(975);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1017);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(951);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(989);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(960);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(970);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(864);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(995);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(960);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(921);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(933);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1002);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(933);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(945);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 's' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(1020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(565);
      if (lookahead == 'm') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(570);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(664);
      if (lookahead == 'C') ADVANCE(695);
      if (lookahead == 'E') ADVANCE(621);
      if (lookahead == 'F') ADVANCE(613);
      if (lookahead == 'H') ADVANCE(718);
      if (lookahead == 'I') ADVANCE(679);
      if (lookahead == 'L') ADVANCE(911);
      if (lookahead == 'M') ADVANCE(609);
      if (lookahead == 'N') ADVANCE(694);
      if (lookahead == 'O') ADVANCE(705);
      if (lookahead == 'P') ADVANCE(721);
      if (lookahead == 'R') ADVANCE(725);
      if (lookahead == 'T') ADVANCE(706);
      if (lookahead == 'a') ADVANCE(800);
      if (lookahead == 'b') ADVANCE(812);
      if (lookahead == 'c') ADVANCE(696);
      if (lookahead == 'd') ADVANCE(747);
      if (lookahead == 'e') ADVANCE(713);
      if (lookahead == 'f') ADVANCE(741);
      if (lookahead == 'g') ADVANCE(769);
      if (lookahead == 'h') ADVANCE(844);
      if (lookahead == 'i') ADVANCE(806);
      if (lookahead == 'l') ADVANCE(648);
      if (lookahead == 'm') ADVANCE(745);
      if (lookahead == 'n') ADVANCE(813);
      if (lookahead == 'o') ADVANCE(753);
      if (lookahead == 'p') ADVANCE(742);
      if (lookahead == 'r') ADVANCE(744);
      if (lookahead == 's') ADVANCE(1038);
      if (lookahead == 't') ADVANCE(782);
      if (lookahead == 'x') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(664);
      if (lookahead == 'C') ADVANCE(698);
      if (lookahead == 'E') ADVANCE(620);
      if (lookahead == 'F') ADVANCE(613);
      if (lookahead == 'H') ADVANCE(718);
      if (lookahead == 'I') ADVANCE(680);
      if (lookahead == 'M') ADVANCE(609);
      if (lookahead == 'N') ADVANCE(694);
      if (lookahead == 'O') ADVANCE(705);
      if (lookahead == 'P') ADVANCE(722);
      if (lookahead == 'R') ADVANCE(725);
      if (lookahead == 'T') ADVANCE(707);
      if (lookahead == 'a') ADVANCE(800);
      if (lookahead == 'b') ADVANCE(812);
      if (lookahead == 'c') ADVANCE(815);
      if (lookahead == 'd') ADVANCE(747);
      if (lookahead == 'e') ADVANCE(834);
      if (lookahead == 'f') ADVANCE(741);
      if (lookahead == 'g') ADVANCE(769);
      if (lookahead == 'h') ADVANCE(844);
      if (lookahead == 'i') ADVANCE(807);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'm') ADVANCE(745);
      if (lookahead == 'n') ADVANCE(813);
      if (lookahead == 'o') ADVANCE(753);
      if (lookahead == 'p') ADVANCE(743);
      if (lookahead == 'r') ADVANCE(744);
      if (lookahead == 's') ADVANCE(1038);
      if (lookahead == 't') ADVANCE(783);
      if (lookahead == 'x') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_duration_token1);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 's' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(1040);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(528);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 's' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1041);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1042);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_record_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_record_token2);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1051);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1052);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ':') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ':') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(anon_sym_AND);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(anon_sym_AND);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(anon_sym_OR);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(anon_sym_OR);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(anon_sym_OR);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(anon_sym_OR);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(anon_sym_QMARK_COLON);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(1072);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(anon_sym_IS);
      if (lookahead == ' ') ADVANCE(482);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(anon_sym_IS);
      if (lookahead == ' ') ADVANCE(482);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(anon_sym_ISNOT);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(anon_sym_QMARK_EQ);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(anon_sym_QMARK_TILDE);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(anon_sym_STAR_TILDE);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(1140);
      if (lookahead == '=') ADVANCE(1080);
      if (lookahead == 'b') ADVANCE(510);
      if (lookahead == 'd') ADVANCE(487);
      if (lookahead == 'f') ADVANCE(502);
      if (lookahead == 'i') ADVANCE(508);
      if (lookahead == 'n') ADVANCE(524);
      if (lookahead == 's') ADVANCE(521);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(1082);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1241);
      if (lookahead == '>') ADVANCE(1139);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(1139);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(1092);
      if (lookahead == '=') ADVANCE(1074);
      if (lookahead == '~') ADVANCE(1078);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(1241);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(651);
      if (lookahead == 'T') ADVANCE(643);
      if (lookahead == 's') ADVANCE(904);
      if (lookahead == 't') ADVANCE(969);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(894);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(969);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(89);
      if (lookahead == 'T') ADVANCE(81);
      if (lookahead == 's') ADVANCE(342);
      if (lookahead == 't') ADVANCE(407);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(332);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(652);
      if (lookahead == 'T') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'S') ADVANCE(90);
      if (lookahead == 'T') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(anon_sym_CONTAINS);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A') ADVANCE(671);
      if (lookahead == 'N') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(anon_sym_CONTAINS);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A') ADVANCE(109);
      if (lookahead == 'N') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(anon_sym_CONTAINSNOT);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(anon_sym_CONTAINSNOT);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(anon_sym_CONTAINSALL);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(anon_sym_CONTAINSALL);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(anon_sym_CONTAINSANY);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(anon_sym_CONTAINSANY);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(anon_sym_CONTAINSNONE);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(anon_sym_CONTAINSNONE);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(anon_sym_INSIDE);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(anon_sym_INSIDE);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(anon_sym_NOTINSIDE);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(anon_sym_NOTINSIDE);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(anon_sym_NOTIN);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(anon_sym_ALLINSIDE);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(anon_sym_ALLINSIDE);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(anon_sym_ANYINSIDE);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(anon_sym_ANYINSIDE);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(anon_sym_NONEINSIDE);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(anon_sym_NONEINSIDE);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(anon_sym_OUTSIDE);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(anon_sym_OUTSIDE);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(anon_sym_INTERSECTS);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(anon_sym_INTERSECTS);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == ',') ADVANCE(557);
      if (lookahead == ';') ADVANCE(556);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(anon_sym_array);
      if (lookahead == ':') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(anon_sym_array);
      if (lookahead == ':') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(anon_sym_duration);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(anon_sym_duration);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(anon_sym_number);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(anon_sym_number);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(anon_sym_object);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(anon_sym_object);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == ':') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == ':') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(anon_sym_record);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(anon_sym_record);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(anon_sym_geometry);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(anon_sym_geometry);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(anon_sym_EDDSA);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(anon_sym_EDDSA);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(anon_sym_ES256);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(anon_sym_ES256);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(anon_sym_ES384);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(anon_sym_ES384);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(anon_sym_ES512);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(anon_sym_ES512);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(anon_sym_HS256);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(anon_sym_HS256);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(anon_sym_HS384);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(anon_sym_HS384);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(anon_sym_HS512);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(anon_sym_HS512);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(anon_sym_PS256);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(anon_sym_PS256);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(anon_sym_PS384);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(anon_sym_PS384);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(anon_sym_PS512);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(anon_sym_PS512);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(anon_sym_RS256);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(anon_sym_RS256);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(anon_sym_RS384);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(anon_sym_RS384);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(anon_sym_RS512);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1022);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(anon_sym_RS512);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(aux_sym_function_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(aux_sym_function_token2);
      if (lookahead == ':') ADVANCE(474);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1200);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(aux_sym_function_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1201);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(anon_sym_count);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(anon_sym_count);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(aux_sym_function_token3);
      if (lookahead == ':') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1204);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(aux_sym_function_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1205);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(aux_sym_function_token4);
      if (lookahead == ':') ADVANCE(471);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1206);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(aux_sym_function_token4);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(aux_sym_function_token5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1208);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(aux_sym_function_token6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1209);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(aux_sym_function_token7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1210);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(aux_sym_function_token8);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1211);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(aux_sym_function_token9);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1212);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(aux_sym_function_token10);
      if (lookahead == ':') ADVANCE(461);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(aux_sym_function_token10);
      if (lookahead == ':') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(aux_sym_function_token10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1215);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(aux_sym_function_token11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1216);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(aux_sym_function_token12);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(aux_sym_function_token13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1218);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym_function_token14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1219);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym_function_token15);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1220);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(aux_sym_function_token16);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == ':') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(anon_sym_NONE);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1021);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(anon_sym_NONE);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '.') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1238);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '.') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1239);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1241);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(1244);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1243);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 's') ADVANCE(1247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1246);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 's') ADVANCE(1250);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1249);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_new_line);
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
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 553},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 553},
  [7] = {.lex_state = 553},
  [8] = {.lex_state = 553},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 553},
  [11] = {.lex_state = 553},
  [12] = {.lex_state = 553},
  [13] = {.lex_state = 553},
  [14] = {.lex_state = 553},
  [15] = {.lex_state = 553},
  [16] = {.lex_state = 553},
  [17] = {.lex_state = 553},
  [18] = {.lex_state = 553},
  [19] = {.lex_state = 553},
  [20] = {.lex_state = 553},
  [21] = {.lex_state = 553},
  [22] = {.lex_state = 553},
  [23] = {.lex_state = 553},
  [24] = {.lex_state = 553},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 553},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 553},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 553},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 553},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 12},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 14},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 14},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 517},
  [63] = {.lex_state = 517},
  [64] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_SEMI] = ACTIONS(1),
    [anon_sym_RBRACE_COMMA] = ACTIONS(1),
    [aux_sym_future_token1] = ACTIONS(1),
    [aux_sym_casting_token1] = ACTIONS(1),
    [aux_sym_property_token1] = ACTIONS(1),
    [aux_sym_duration_token1] = ACTIONS(1),
    [aux_sym_constant_token1] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_record_token1] = ACTIONS(1),
    [aux_sym_record_token2] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [anon_sym_QMARK_QMARK] = ACTIONS(1),
    [anon_sym_QMARK_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_IS] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_ISNOT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_QMARK_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_BANG_TILDE] = ACTIONS(1),
    [anon_sym_QMARK_TILDE] = ACTIONS(1),
    [anon_sym_STAR_TILDE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_IN] = ACTIONS(1),
    [anon_sym_CONTAINS] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_CONTAINSNOT] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_CONTAINSALL] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_CONTAINSANY] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [anon_sym_CONTAINSNONE] = ACTIONS(1),
    [anon_sym_6] = ACTIONS(1),
    [anon_sym_INSIDE] = ACTIONS(1),
    [anon_sym_7] = ACTIONS(1),
    [anon_sym_NOTINSIDE] = ACTIONS(1),
    [anon_sym_NOTIN] = ACTIONS(1),
    [anon_sym_8] = ACTIONS(1),
    [anon_sym_ALLINSIDE] = ACTIONS(1),
    [anon_sym_9] = ACTIONS(1),
    [anon_sym_ANYINSIDE] = ACTIONS(1),
    [anon_sym_10] = ACTIONS(1),
    [anon_sym_NONEINSIDE] = ACTIONS(1),
    [anon_sym_11] = ACTIONS(1),
    [anon_sym_OUTSIDE] = ACTIONS(1),
    [anon_sym_INTERSECTS] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_datetime] = ACTIONS(1),
    [anon_sym_decimal] = ACTIONS(1),
    [anon_sym_duration] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [anon_sym_geometry] = ACTIONS(1),
    [anon_sym_EDDSA] = ACTIONS(1),
    [anon_sym_ES256] = ACTIONS(1),
    [anon_sym_ES384] = ACTIONS(1),
    [anon_sym_ES512] = ACTIONS(1),
    [anon_sym_HS256] = ACTIONS(1),
    [anon_sym_HS384] = ACTIONS(1),
    [anon_sym_HS512] = ACTIONS(1),
    [anon_sym_PS256] = ACTIONS(1),
    [anon_sym_PS384] = ACTIONS(1),
    [anon_sym_PS512] = ACTIONS(1),
    [anon_sym_RS256] = ACTIONS(1),
    [anon_sym_RS384] = ACTIONS(1),
    [anon_sym_RS512] = ACTIONS(1),
    [aux_sym_function_token1] = ACTIONS(1),
    [aux_sym_function_token2] = ACTIONS(1),
    [anon_sym_count] = ACTIONS(1),
    [aux_sym_function_token3] = ACTIONS(1),
    [aux_sym_function_token4] = ACTIONS(1),
    [aux_sym_function_token5] = ACTIONS(1),
    [aux_sym_function_token6] = ACTIONS(1),
    [aux_sym_function_token7] = ACTIONS(1),
    [aux_sym_function_token8] = ACTIONS(1),
    [aux_sym_function_token9] = ACTIONS(1),
    [aux_sym_function_token10] = ACTIONS(1),
    [aux_sym_function_token11] = ACTIONS(1),
    [aux_sym_function_token12] = ACTIONS(1),
    [aux_sym_function_token13] = ACTIONS(1),
    [aux_sym_function_token14] = ACTIONS(1),
    [aux_sym_function_token15] = ACTIONS(1),
    [aux_sym_function_token16] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_TRUE] = ACTIONS(1),
    [anon_sym_FALSE] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_NULL] = ACTIONS(1),
    [anon_sym_none] = ACTIONS(1),
    [anon_sym_NONE] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_new_line] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(64),
    [sym_tokens] = STATE(6),
    [sym_scripting_function] = STATE(15),
    [sym_future] = STATE(15),
    [sym_casting] = STATE(15),
    [sym_property] = STATE(15),
    [sym_duration] = STATE(15),
    [sym_constant] = STATE(15),
    [sym_number] = STATE(15),
    [sym_record] = STATE(15),
    [sym_operator] = STATE(15),
    [sym_punctuation] = STATE(15),
    [sym_delimiter] = STATE(15),
    [sym_type] = STATE(15),
    [sym_datatype] = STATE(26),
    [sym_algotype] = STATE(26),
    [sym_function] = STATE(15),
    [sym_bool] = STATE(15),
    [sym_nothing] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(5),
    [aux_sym_future_token1] = ACTIONS(7),
    [aux_sym_casting_token1] = ACTIONS(9),
    [aux_sym_property_token1] = ACTIONS(11),
    [aux_sym_duration_token1] = ACTIONS(13),
    [aux_sym_constant_token1] = ACTIONS(15),
    [aux_sym_number_token1] = ACTIONS(17),
    [aux_sym_record_token1] = ACTIONS(19),
    [aux_sym_record_token2] = ACTIONS(19),
    [sym_keyword] = ACTIONS(21),
    [anon_sym_AMP_AMP] = ACTIONS(23),
    [anon_sym_AND] = ACTIONS(25),
    [anon_sym_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_OR] = ACTIONS(25),
    [anon_sym_QMARK_QMARK] = ACTIONS(23),
    [anon_sym_QMARK_COLON] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(25),
    [anon_sym_IS] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_ISNOT] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_QMARK_EQ] = ACTIONS(23),
    [anon_sym_STAR_EQ] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_BANG_TILDE] = ACTIONS(23),
    [anon_sym_QMARK_TILDE] = ACTIONS(23),
    [anon_sym_STAR_TILDE] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_x] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_] = ACTIONS(23),
    [anon_sym_STAR_STAR] = ACTIONS(23),
    [anon_sym_IN] = ACTIONS(25),
    [anon_sym_CONTAINS] = ACTIONS(25),
    [anon_sym_2] = ACTIONS(23),
    [anon_sym_CONTAINSNOT] = ACTIONS(25),
    [anon_sym_3] = ACTIONS(23),
    [anon_sym_CONTAINSALL] = ACTIONS(25),
    [anon_sym_4] = ACTIONS(23),
    [anon_sym_CONTAINSANY] = ACTIONS(25),
    [anon_sym_5] = ACTIONS(23),
    [anon_sym_CONTAINSNONE] = ACTIONS(25),
    [anon_sym_6] = ACTIONS(23),
    [anon_sym_INSIDE] = ACTIONS(25),
    [anon_sym_7] = ACTIONS(23),
    [anon_sym_NOTINSIDE] = ACTIONS(25),
    [anon_sym_NOTIN] = ACTIONS(23),
    [anon_sym_8] = ACTIONS(23),
    [anon_sym_ALLINSIDE] = ACTIONS(25),
    [anon_sym_9] = ACTIONS(23),
    [anon_sym_ANYINSIDE] = ACTIONS(25),
    [anon_sym_10] = ACTIONS(23),
    [anon_sym_NONEINSIDE] = ACTIONS(25),
    [anon_sym_11] = ACTIONS(23),
    [anon_sym_OUTSIDE] = ACTIONS(25),
    [anon_sym_INTERSECTS] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(27),
    [anon_sym_LT_DASH] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(31),
    [anon_sym_any] = ACTIONS(33),
    [anon_sym_array] = ACTIONS(33),
    [anon_sym_bool] = ACTIONS(33),
    [anon_sym_datetime] = ACTIONS(33),
    [anon_sym_decimal] = ACTIONS(33),
    [anon_sym_duration] = ACTIONS(33),
    [anon_sym_float] = ACTIONS(33),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_number] = ACTIONS(33),
    [anon_sym_object] = ACTIONS(33),
    [anon_sym_string] = ACTIONS(33),
    [anon_sym_record] = ACTIONS(33),
    [anon_sym_geometry] = ACTIONS(33),
    [anon_sym_EDDSA] = ACTIONS(35),
    [anon_sym_ES256] = ACTIONS(35),
    [anon_sym_ES384] = ACTIONS(35),
    [anon_sym_ES512] = ACTIONS(35),
    [anon_sym_HS256] = ACTIONS(35),
    [anon_sym_HS384] = ACTIONS(35),
    [anon_sym_HS512] = ACTIONS(35),
    [anon_sym_PS256] = ACTIONS(35),
    [anon_sym_PS384] = ACTIONS(35),
    [anon_sym_PS512] = ACTIONS(35),
    [anon_sym_RS256] = ACTIONS(35),
    [anon_sym_RS384] = ACTIONS(35),
    [anon_sym_RS512] = ACTIONS(35),
    [aux_sym_function_token1] = ACTIONS(37),
    [aux_sym_function_token2] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [aux_sym_function_token3] = ACTIONS(37),
    [aux_sym_function_token4] = ACTIONS(37),
    [aux_sym_function_token5] = ACTIONS(37),
    [aux_sym_function_token6] = ACTIONS(37),
    [aux_sym_function_token7] = ACTIONS(37),
    [aux_sym_function_token8] = ACTIONS(37),
    [aux_sym_function_token9] = ACTIONS(37),
    [aux_sym_function_token10] = ACTIONS(39),
    [aux_sym_function_token11] = ACTIONS(37),
    [aux_sym_function_token12] = ACTIONS(39),
    [aux_sym_function_token13] = ACTIONS(37),
    [aux_sym_function_token14] = ACTIONS(37),
    [aux_sym_function_token15] = ACTIONS(37),
    [aux_sym_function_token16] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_TRUE] = ACTIONS(41),
    [anon_sym_FALSE] = ACTIONS(41),
    [anon_sym_null] = ACTIONS(43),
    [anon_sym_NULL] = ACTIONS(43),
    [anon_sym_none] = ACTIONS(43),
    [anon_sym_NONE] = ACTIONS(43),
    [sym_variable] = ACTIONS(45),
    [sym_comment] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
  },
  [2] = {
    [sym_tokens] = STATE(2),
    [sym_scripting_function] = STATE(46),
    [sym__scripting_statement] = STATE(2),
    [sym_future] = STATE(46),
    [sym_casting] = STATE(46),
    [sym_property] = STATE(46),
    [sym_duration] = STATE(46),
    [sym_constant] = STATE(46),
    [sym_number] = STATE(46),
    [sym_record] = STATE(46),
    [sym_operator] = STATE(46),
    [sym_punctuation] = STATE(46),
    [sym_delimiter] = STATE(46),
    [sym_type] = STATE(46),
    [sym_datatype] = STATE(30),
    [sym_algotype] = STATE(30),
    [sym_function] = STATE(46),
    [sym_bool] = STATE(46),
    [sym_nothing] = STATE(46),
    [sym_string] = STATE(46),
    [aux_sym_scripting_content_repeat1] = STATE(2),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(53),
    [anon_sym_RBRACE_SEMI] = ACTIONS(56),
    [anon_sym_RBRACE_COMMA] = ACTIONS(56),
    [aux_sym_future_token1] = ACTIONS(58),
    [aux_sym_casting_token1] = ACTIONS(61),
    [aux_sym_property_token1] = ACTIONS(64),
    [aux_sym_duration_token1] = ACTIONS(67),
    [aux_sym_constant_token1] = ACTIONS(70),
    [aux_sym_number_token1] = ACTIONS(73),
    [aux_sym_record_token1] = ACTIONS(76),
    [aux_sym_record_token2] = ACTIONS(76),
    [sym_keyword] = ACTIONS(79),
    [anon_sym_AMP_AMP] = ACTIONS(82),
    [anon_sym_AND] = ACTIONS(85),
    [anon_sym_PIPE_PIPE] = ACTIONS(82),
    [anon_sym_OR] = ACTIONS(85),
    [anon_sym_QMARK_QMARK] = ACTIONS(82),
    [anon_sym_QMARK_COLON] = ACTIONS(82),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_IS] = ACTIONS(85),
    [anon_sym_BANG_EQ] = ACTIONS(82),
    [anon_sym_ISNOT] = ACTIONS(82),
    [anon_sym_EQ_EQ] = ACTIONS(82),
    [anon_sym_QMARK_EQ] = ACTIONS(82),
    [anon_sym_STAR_EQ] = ACTIONS(82),
    [anon_sym_TILDE] = ACTIONS(82),
    [anon_sym_BANG_TILDE] = ACTIONS(82),
    [anon_sym_QMARK_TILDE] = ACTIONS(82),
    [anon_sym_STAR_TILDE] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_LT_EQ] = ACTIONS(82),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_GT_EQ] = ACTIONS(82),
    [anon_sym_PLUS] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_x] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(82),
    [anon_sym_] = ACTIONS(82),
    [anon_sym_STAR_STAR] = ACTIONS(82),
    [anon_sym_IN] = ACTIONS(85),
    [anon_sym_CONTAINS] = ACTIONS(85),
    [anon_sym_2] = ACTIONS(82),
    [anon_sym_CONTAINSNOT] = ACTIONS(85),
    [anon_sym_3] = ACTIONS(82),
    [anon_sym_CONTAINSALL] = ACTIONS(85),
    [anon_sym_4] = ACTIONS(82),
    [anon_sym_CONTAINSANY] = ACTIONS(85),
    [anon_sym_5] = ACTIONS(82),
    [anon_sym_CONTAINSNONE] = ACTIONS(85),
    [anon_sym_6] = ACTIONS(82),
    [anon_sym_INSIDE] = ACTIONS(85),
    [anon_sym_7] = ACTIONS(82),
    [anon_sym_NOTINSIDE] = ACTIONS(85),
    [anon_sym_NOTIN] = ACTIONS(82),
    [anon_sym_8] = ACTIONS(82),
    [anon_sym_ALLINSIDE] = ACTIONS(85),
    [anon_sym_9] = ACTIONS(82),
    [anon_sym_ANYINSIDE] = ACTIONS(85),
    [anon_sym_10] = ACTIONS(82),
    [anon_sym_NONEINSIDE] = ACTIONS(85),
    [anon_sym_11] = ACTIONS(82),
    [anon_sym_OUTSIDE] = ACTIONS(85),
    [anon_sym_INTERSECTS] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_RPAREN] = ACTIONS(88),
    [anon_sym_LBRACK] = ACTIONS(88),
    [anon_sym_RBRACK] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(88),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_DASH_GT] = ACTIONS(88),
    [anon_sym_LT_DASH] = ACTIONS(88),
    [anon_sym_COMMA] = ACTIONS(94),
    [anon_sym_SEMI] = ACTIONS(94),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_any] = ACTIONS(100),
    [anon_sym_array] = ACTIONS(100),
    [anon_sym_bool] = ACTIONS(100),
    [anon_sym_datetime] = ACTIONS(100),
    [anon_sym_decimal] = ACTIONS(100),
    [anon_sym_duration] = ACTIONS(100),
    [anon_sym_float] = ACTIONS(100),
    [anon_sym_int] = ACTIONS(100),
    [anon_sym_number] = ACTIONS(100),
    [anon_sym_object] = ACTIONS(100),
    [anon_sym_string] = ACTIONS(100),
    [anon_sym_record] = ACTIONS(100),
    [anon_sym_geometry] = ACTIONS(100),
    [anon_sym_EDDSA] = ACTIONS(103),
    [anon_sym_ES256] = ACTIONS(103),
    [anon_sym_ES384] = ACTIONS(103),
    [anon_sym_ES512] = ACTIONS(103),
    [anon_sym_HS256] = ACTIONS(103),
    [anon_sym_HS384] = ACTIONS(103),
    [anon_sym_HS512] = ACTIONS(103),
    [anon_sym_PS256] = ACTIONS(103),
    [anon_sym_PS384] = ACTIONS(103),
    [anon_sym_PS512] = ACTIONS(103),
    [anon_sym_RS256] = ACTIONS(103),
    [anon_sym_RS384] = ACTIONS(103),
    [anon_sym_RS512] = ACTIONS(103),
    [aux_sym_function_token1] = ACTIONS(106),
    [aux_sym_function_token2] = ACTIONS(106),
    [anon_sym_count] = ACTIONS(109),
    [aux_sym_function_token3] = ACTIONS(106),
    [aux_sym_function_token4] = ACTIONS(106),
    [aux_sym_function_token5] = ACTIONS(106),
    [aux_sym_function_token6] = ACTIONS(106),
    [aux_sym_function_token7] = ACTIONS(106),
    [aux_sym_function_token8] = ACTIONS(106),
    [aux_sym_function_token9] = ACTIONS(106),
    [aux_sym_function_token10] = ACTIONS(109),
    [aux_sym_function_token11] = ACTIONS(106),
    [aux_sym_function_token12] = ACTIONS(109),
    [aux_sym_function_token13] = ACTIONS(106),
    [aux_sym_function_token14] = ACTIONS(106),
    [aux_sym_function_token15] = ACTIONS(106),
    [aux_sym_function_token16] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(112),
    [anon_sym_false] = ACTIONS(112),
    [anon_sym_TRUE] = ACTIONS(112),
    [anon_sym_FALSE] = ACTIONS(112),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [anon_sym_none] = ACTIONS(115),
    [anon_sym_NONE] = ACTIONS(115),
    [sym_variable] = ACTIONS(118),
    [anon_sym_SQUOTE] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(124),
  },
  [3] = {
    [sym_tokens] = STATE(2),
    [sym_scripting_function] = STATE(46),
    [sym__scripting_statement] = STATE(2),
    [sym_future] = STATE(46),
    [sym_casting] = STATE(46),
    [sym_property] = STATE(46),
    [sym_duration] = STATE(46),
    [sym_constant] = STATE(46),
    [sym_number] = STATE(46),
    [sym_record] = STATE(46),
    [sym_operator] = STATE(46),
    [sym_punctuation] = STATE(46),
    [sym_delimiter] = STATE(46),
    [sym_type] = STATE(46),
    [sym_datatype] = STATE(30),
    [sym_algotype] = STATE(30),
    [sym_function] = STATE(46),
    [sym_bool] = STATE(46),
    [sym_nothing] = STATE(46),
    [sym_string] = STATE(46),
    [aux_sym_scripting_content_repeat1] = STATE(2),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(127),
    [anon_sym_RBRACE_SEMI] = ACTIONS(129),
    [anon_sym_RBRACE_COMMA] = ACTIONS(129),
    [aux_sym_future_token1] = ACTIONS(131),
    [aux_sym_casting_token1] = ACTIONS(133),
    [aux_sym_property_token1] = ACTIONS(135),
    [aux_sym_duration_token1] = ACTIONS(137),
    [aux_sym_constant_token1] = ACTIONS(139),
    [aux_sym_number_token1] = ACTIONS(141),
    [aux_sym_record_token1] = ACTIONS(143),
    [aux_sym_record_token2] = ACTIONS(143),
    [sym_keyword] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_AND] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_OR] = ACTIONS(149),
    [anon_sym_QMARK_QMARK] = ACTIONS(147),
    [anon_sym_QMARK_COLON] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(149),
    [anon_sym_IS] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_ISNOT] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_QMARK_EQ] = ACTIONS(147),
    [anon_sym_STAR_EQ] = ACTIONS(147),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_BANG_TILDE] = ACTIONS(147),
    [anon_sym_QMARK_TILDE] = ACTIONS(147),
    [anon_sym_STAR_TILDE] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(149),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_GT_EQ] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(149),
    [anon_sym_STAR] = ACTIONS(149),
    [anon_sym_x] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_] = ACTIONS(147),
    [anon_sym_STAR_STAR] = ACTIONS(147),
    [anon_sym_IN] = ACTIONS(149),
    [anon_sym_CONTAINS] = ACTIONS(149),
    [anon_sym_2] = ACTIONS(147),
    [anon_sym_CONTAINSNOT] = ACTIONS(149),
    [anon_sym_3] = ACTIONS(147),
    [anon_sym_CONTAINSALL] = ACTIONS(149),
    [anon_sym_4] = ACTIONS(147),
    [anon_sym_CONTAINSANY] = ACTIONS(149),
    [anon_sym_5] = ACTIONS(147),
    [anon_sym_CONTAINSNONE] = ACTIONS(149),
    [anon_sym_6] = ACTIONS(147),
    [anon_sym_INSIDE] = ACTIONS(149),
    [anon_sym_7] = ACTIONS(147),
    [anon_sym_NOTINSIDE] = ACTIONS(149),
    [anon_sym_NOTIN] = ACTIONS(147),
    [anon_sym_8] = ACTIONS(147),
    [anon_sym_ALLINSIDE] = ACTIONS(149),
    [anon_sym_9] = ACTIONS(147),
    [anon_sym_ANYINSIDE] = ACTIONS(149),
    [anon_sym_10] = ACTIONS(147),
    [anon_sym_NONEINSIDE] = ACTIONS(149),
    [anon_sym_11] = ACTIONS(147),
    [anon_sym_OUTSIDE] = ACTIONS(149),
    [anon_sym_INTERSECTS] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_DASH_GT] = ACTIONS(151),
    [anon_sym_LT_DASH] = ACTIONS(151),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(155),
    [anon_sym_COLON] = ACTIONS(157),
    [anon_sym_any] = ACTIONS(159),
    [anon_sym_array] = ACTIONS(159),
    [anon_sym_bool] = ACTIONS(159),
    [anon_sym_datetime] = ACTIONS(159),
    [anon_sym_decimal] = ACTIONS(159),
    [anon_sym_duration] = ACTIONS(159),
    [anon_sym_float] = ACTIONS(159),
    [anon_sym_int] = ACTIONS(159),
    [anon_sym_number] = ACTIONS(159),
    [anon_sym_object] = ACTIONS(159),
    [anon_sym_string] = ACTIONS(159),
    [anon_sym_record] = ACTIONS(159),
    [anon_sym_geometry] = ACTIONS(159),
    [anon_sym_EDDSA] = ACTIONS(161),
    [anon_sym_ES256] = ACTIONS(161),
    [anon_sym_ES384] = ACTIONS(161),
    [anon_sym_ES512] = ACTIONS(161),
    [anon_sym_HS256] = ACTIONS(161),
    [anon_sym_HS384] = ACTIONS(161),
    [anon_sym_HS512] = ACTIONS(161),
    [anon_sym_PS256] = ACTIONS(161),
    [anon_sym_PS384] = ACTIONS(161),
    [anon_sym_PS512] = ACTIONS(161),
    [anon_sym_RS256] = ACTIONS(161),
    [anon_sym_RS384] = ACTIONS(161),
    [anon_sym_RS512] = ACTIONS(161),
    [aux_sym_function_token1] = ACTIONS(163),
    [aux_sym_function_token2] = ACTIONS(163),
    [anon_sym_count] = ACTIONS(165),
    [aux_sym_function_token3] = ACTIONS(163),
    [aux_sym_function_token4] = ACTIONS(163),
    [aux_sym_function_token5] = ACTIONS(163),
    [aux_sym_function_token6] = ACTIONS(163),
    [aux_sym_function_token7] = ACTIONS(163),
    [aux_sym_function_token8] = ACTIONS(163),
    [aux_sym_function_token9] = ACTIONS(163),
    [aux_sym_function_token10] = ACTIONS(165),
    [aux_sym_function_token11] = ACTIONS(163),
    [aux_sym_function_token12] = ACTIONS(165),
    [aux_sym_function_token13] = ACTIONS(163),
    [aux_sym_function_token14] = ACTIONS(163),
    [aux_sym_function_token15] = ACTIONS(163),
    [aux_sym_function_token16] = ACTIONS(165),
    [anon_sym_true] = ACTIONS(167),
    [anon_sym_false] = ACTIONS(167),
    [anon_sym_TRUE] = ACTIONS(167),
    [anon_sym_FALSE] = ACTIONS(167),
    [anon_sym_null] = ACTIONS(169),
    [anon_sym_NULL] = ACTIONS(169),
    [anon_sym_none] = ACTIONS(169),
    [anon_sym_NONE] = ACTIONS(169),
    [sym_variable] = ACTIONS(171),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(175),
  },
  [4] = {
    [sym_tokens] = STATE(3),
    [sym_scripting_function] = STATE(46),
    [sym_scripting_content] = STATE(60),
    [sym__scripting_statement] = STATE(3),
    [sym_future] = STATE(46),
    [sym_casting] = STATE(46),
    [sym_property] = STATE(46),
    [sym_duration] = STATE(46),
    [sym_constant] = STATE(46),
    [sym_number] = STATE(46),
    [sym_record] = STATE(46),
    [sym_operator] = STATE(46),
    [sym_punctuation] = STATE(46),
    [sym_delimiter] = STATE(46),
    [sym_type] = STATE(46),
    [sym_datatype] = STATE(30),
    [sym_algotype] = STATE(30),
    [sym_function] = STATE(46),
    [sym_bool] = STATE(46),
    [sym_nothing] = STATE(46),
    [sym_string] = STATE(46),
    [aux_sym_scripting_content_repeat1] = STATE(3),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(127),
    [aux_sym_future_token1] = ACTIONS(131),
    [aux_sym_casting_token1] = ACTIONS(133),
    [aux_sym_property_token1] = ACTIONS(135),
    [aux_sym_duration_token1] = ACTIONS(137),
    [aux_sym_constant_token1] = ACTIONS(139),
    [aux_sym_number_token1] = ACTIONS(141),
    [aux_sym_record_token1] = ACTIONS(143),
    [aux_sym_record_token2] = ACTIONS(143),
    [sym_keyword] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_AND] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_OR] = ACTIONS(149),
    [anon_sym_QMARK_QMARK] = ACTIONS(147),
    [anon_sym_QMARK_COLON] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(149),
    [anon_sym_IS] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_ISNOT] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_QMARK_EQ] = ACTIONS(147),
    [anon_sym_STAR_EQ] = ACTIONS(147),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_BANG_TILDE] = ACTIONS(147),
    [anon_sym_QMARK_TILDE] = ACTIONS(147),
    [anon_sym_STAR_TILDE] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(149),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_GT_EQ] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(149),
    [anon_sym_STAR] = ACTIONS(149),
    [anon_sym_x] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_] = ACTIONS(147),
    [anon_sym_STAR_STAR] = ACTIONS(147),
    [anon_sym_IN] = ACTIONS(149),
    [anon_sym_CONTAINS] = ACTIONS(149),
    [anon_sym_2] = ACTIONS(147),
    [anon_sym_CONTAINSNOT] = ACTIONS(149),
    [anon_sym_3] = ACTIONS(147),
    [anon_sym_CONTAINSALL] = ACTIONS(149),
    [anon_sym_4] = ACTIONS(147),
    [anon_sym_CONTAINSANY] = ACTIONS(149),
    [anon_sym_5] = ACTIONS(147),
    [anon_sym_CONTAINSNONE] = ACTIONS(149),
    [anon_sym_6] = ACTIONS(147),
    [anon_sym_INSIDE] = ACTIONS(149),
    [anon_sym_7] = ACTIONS(147),
    [anon_sym_NOTINSIDE] = ACTIONS(149),
    [anon_sym_NOTIN] = ACTIONS(147),
    [anon_sym_8] = ACTIONS(147),
    [anon_sym_ALLINSIDE] = ACTIONS(149),
    [anon_sym_9] = ACTIONS(147),
    [anon_sym_ANYINSIDE] = ACTIONS(149),
    [anon_sym_10] = ACTIONS(147),
    [anon_sym_NONEINSIDE] = ACTIONS(149),
    [anon_sym_11] = ACTIONS(147),
    [anon_sym_OUTSIDE] = ACTIONS(149),
    [anon_sym_INTERSECTS] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_RBRACE] = ACTIONS(151),
    [anon_sym_DASH_GT] = ACTIONS(151),
    [anon_sym_LT_DASH] = ACTIONS(151),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(155),
    [anon_sym_COLON] = ACTIONS(157),
    [anon_sym_any] = ACTIONS(159),
    [anon_sym_array] = ACTIONS(159),
    [anon_sym_bool] = ACTIONS(159),
    [anon_sym_datetime] = ACTIONS(159),
    [anon_sym_decimal] = ACTIONS(159),
    [anon_sym_duration] = ACTIONS(159),
    [anon_sym_float] = ACTIONS(159),
    [anon_sym_int] = ACTIONS(159),
    [anon_sym_number] = ACTIONS(159),
    [anon_sym_object] = ACTIONS(159),
    [anon_sym_string] = ACTIONS(159),
    [anon_sym_record] = ACTIONS(159),
    [anon_sym_geometry] = ACTIONS(159),
    [anon_sym_EDDSA] = ACTIONS(161),
    [anon_sym_ES256] = ACTIONS(161),
    [anon_sym_ES384] = ACTIONS(161),
    [anon_sym_ES512] = ACTIONS(161),
    [anon_sym_HS256] = ACTIONS(161),
    [anon_sym_HS384] = ACTIONS(161),
    [anon_sym_HS512] = ACTIONS(161),
    [anon_sym_PS256] = ACTIONS(161),
    [anon_sym_PS384] = ACTIONS(161),
    [anon_sym_PS512] = ACTIONS(161),
    [anon_sym_RS256] = ACTIONS(161),
    [anon_sym_RS384] = ACTIONS(161),
    [anon_sym_RS512] = ACTIONS(161),
    [aux_sym_function_token1] = ACTIONS(163),
    [aux_sym_function_token2] = ACTIONS(163),
    [anon_sym_count] = ACTIONS(165),
    [aux_sym_function_token3] = ACTIONS(163),
    [aux_sym_function_token4] = ACTIONS(163),
    [aux_sym_function_token5] = ACTIONS(163),
    [aux_sym_function_token6] = ACTIONS(163),
    [aux_sym_function_token7] = ACTIONS(163),
    [aux_sym_function_token8] = ACTIONS(163),
    [aux_sym_function_token9] = ACTIONS(163),
    [aux_sym_function_token10] = ACTIONS(165),
    [aux_sym_function_token11] = ACTIONS(163),
    [aux_sym_function_token12] = ACTIONS(165),
    [aux_sym_function_token13] = ACTIONS(163),
    [aux_sym_function_token14] = ACTIONS(163),
    [aux_sym_function_token15] = ACTIONS(163),
    [aux_sym_function_token16] = ACTIONS(165),
    [anon_sym_true] = ACTIONS(167),
    [anon_sym_false] = ACTIONS(167),
    [anon_sym_TRUE] = ACTIONS(167),
    [anon_sym_FALSE] = ACTIONS(167),
    [anon_sym_null] = ACTIONS(169),
    [anon_sym_NULL] = ACTIONS(169),
    [anon_sym_none] = ACTIONS(169),
    [anon_sym_NONE] = ACTIONS(169),
    [sym_variable] = ACTIONS(171),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(175),
  },
  [5] = {
    [sym_tokens] = STATE(3),
    [sym_scripting_function] = STATE(46),
    [sym_scripting_content] = STATE(61),
    [sym__scripting_statement] = STATE(3),
    [sym_future] = STATE(46),
    [sym_casting] = STATE(46),
    [sym_property] = STATE(46),
    [sym_duration] = STATE(46),
    [sym_constant] = STATE(46),
    [sym_number] = STATE(46),
    [sym_record] = STATE(46),
    [sym_operator] = STATE(46),
    [sym_punctuation] = STATE(46),
    [sym_delimiter] = STATE(46),
    [sym_type] = STATE(46),
    [sym_datatype] = STATE(30),
    [sym_algotype] = STATE(30),
    [sym_function] = STATE(46),
    [sym_bool] = STATE(46),
    [sym_nothing] = STATE(46),
    [sym_string] = STATE(46),
    [aux_sym_scripting_content_repeat1] = STATE(3),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(127),
    [aux_sym_future_token1] = ACTIONS(131),
    [aux_sym_casting_token1] = ACTIONS(133),
    [aux_sym_property_token1] = ACTIONS(135),
    [aux_sym_duration_token1] = ACTIONS(137),
    [aux_sym_constant_token1] = ACTIONS(139),
    [aux_sym_number_token1] = ACTIONS(141),
    [aux_sym_record_token1] = ACTIONS(143),
    [aux_sym_record_token2] = ACTIONS(143),
    [sym_keyword] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_AND] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_OR] = ACTIONS(149),
    [anon_sym_QMARK_QMARK] = ACTIONS(147),
    [anon_sym_QMARK_COLON] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(149),
    [anon_sym_IS] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_ISNOT] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_QMARK_EQ] = ACTIONS(147),
    [anon_sym_STAR_EQ] = ACTIONS(147),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_BANG_TILDE] = ACTIONS(147),
    [anon_sym_QMARK_TILDE] = ACTIONS(147),
    [anon_sym_STAR_TILDE] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(149),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_GT_EQ] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(149),
    [anon_sym_STAR] = ACTIONS(149),
    [anon_sym_x] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_] = ACTIONS(147),
    [anon_sym_STAR_STAR] = ACTIONS(147),
    [anon_sym_IN] = ACTIONS(149),
    [anon_sym_CONTAINS] = ACTIONS(149),
    [anon_sym_2] = ACTIONS(147),
    [anon_sym_CONTAINSNOT] = ACTIONS(149),
    [anon_sym_3] = ACTIONS(147),
    [anon_sym_CONTAINSALL] = ACTIONS(149),
    [anon_sym_4] = ACTIONS(147),
    [anon_sym_CONTAINSANY] = ACTIONS(149),
    [anon_sym_5] = ACTIONS(147),
    [anon_sym_CONTAINSNONE] = ACTIONS(149),
    [anon_sym_6] = ACTIONS(147),
    [anon_sym_INSIDE] = ACTIONS(149),
    [anon_sym_7] = ACTIONS(147),
    [anon_sym_NOTINSIDE] = ACTIONS(149),
    [anon_sym_NOTIN] = ACTIONS(147),
    [anon_sym_8] = ACTIONS(147),
    [anon_sym_ALLINSIDE] = ACTIONS(149),
    [anon_sym_9] = ACTIONS(147),
    [anon_sym_ANYINSIDE] = ACTIONS(149),
    [anon_sym_10] = ACTIONS(147),
    [anon_sym_NONEINSIDE] = ACTIONS(149),
    [anon_sym_11] = ACTIONS(147),
    [anon_sym_OUTSIDE] = ACTIONS(149),
    [anon_sym_INTERSECTS] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_RBRACE] = ACTIONS(151),
    [anon_sym_DASH_GT] = ACTIONS(151),
    [anon_sym_LT_DASH] = ACTIONS(151),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(155),
    [anon_sym_COLON] = ACTIONS(157),
    [anon_sym_any] = ACTIONS(159),
    [anon_sym_array] = ACTIONS(159),
    [anon_sym_bool] = ACTIONS(159),
    [anon_sym_datetime] = ACTIONS(159),
    [anon_sym_decimal] = ACTIONS(159),
    [anon_sym_duration] = ACTIONS(159),
    [anon_sym_float] = ACTIONS(159),
    [anon_sym_int] = ACTIONS(159),
    [anon_sym_number] = ACTIONS(159),
    [anon_sym_object] = ACTIONS(159),
    [anon_sym_string] = ACTIONS(159),
    [anon_sym_record] = ACTIONS(159),
    [anon_sym_geometry] = ACTIONS(159),
    [anon_sym_EDDSA] = ACTIONS(161),
    [anon_sym_ES256] = ACTIONS(161),
    [anon_sym_ES384] = ACTIONS(161),
    [anon_sym_ES512] = ACTIONS(161),
    [anon_sym_HS256] = ACTIONS(161),
    [anon_sym_HS384] = ACTIONS(161),
    [anon_sym_HS512] = ACTIONS(161),
    [anon_sym_PS256] = ACTIONS(161),
    [anon_sym_PS384] = ACTIONS(161),
    [anon_sym_PS512] = ACTIONS(161),
    [anon_sym_RS256] = ACTIONS(161),
    [anon_sym_RS384] = ACTIONS(161),
    [anon_sym_RS512] = ACTIONS(161),
    [aux_sym_function_token1] = ACTIONS(163),
    [aux_sym_function_token2] = ACTIONS(163),
    [anon_sym_count] = ACTIONS(165),
    [aux_sym_function_token3] = ACTIONS(163),
    [aux_sym_function_token4] = ACTIONS(163),
    [aux_sym_function_token5] = ACTIONS(163),
    [aux_sym_function_token6] = ACTIONS(163),
    [aux_sym_function_token7] = ACTIONS(163),
    [aux_sym_function_token8] = ACTIONS(163),
    [aux_sym_function_token9] = ACTIONS(163),
    [aux_sym_function_token10] = ACTIONS(165),
    [aux_sym_function_token11] = ACTIONS(163),
    [aux_sym_function_token12] = ACTIONS(165),
    [aux_sym_function_token13] = ACTIONS(163),
    [aux_sym_function_token14] = ACTIONS(163),
    [aux_sym_function_token15] = ACTIONS(163),
    [aux_sym_function_token16] = ACTIONS(165),
    [anon_sym_true] = ACTIONS(167),
    [anon_sym_false] = ACTIONS(167),
    [anon_sym_TRUE] = ACTIONS(167),
    [anon_sym_FALSE] = ACTIONS(167),
    [anon_sym_null] = ACTIONS(169),
    [anon_sym_NULL] = ACTIONS(169),
    [anon_sym_none] = ACTIONS(169),
    [anon_sym_NONE] = ACTIONS(169),
    [sym_variable] = ACTIONS(171),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(175),
  },
  [6] = {
    [sym_tokens] = STATE(7),
    [sym_scripting_function] = STATE(15),
    [sym_future] = STATE(15),
    [sym_casting] = STATE(15),
    [sym_property] = STATE(15),
    [sym_duration] = STATE(15),
    [sym_constant] = STATE(15),
    [sym_number] = STATE(15),
    [sym_record] = STATE(15),
    [sym_operator] = STATE(15),
    [sym_punctuation] = STATE(15),
    [sym_delimiter] = STATE(15),
    [sym_type] = STATE(15),
    [sym_datatype] = STATE(26),
    [sym_algotype] = STATE(26),
    [sym_function] = STATE(15),
    [sym_bool] = STATE(15),
    [sym_nothing] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(5),
    [aux_sym_future_token1] = ACTIONS(7),
    [aux_sym_casting_token1] = ACTIONS(9),
    [aux_sym_property_token1] = ACTIONS(11),
    [aux_sym_duration_token1] = ACTIONS(13),
    [aux_sym_constant_token1] = ACTIONS(15),
    [aux_sym_number_token1] = ACTIONS(17),
    [aux_sym_record_token1] = ACTIONS(19),
    [aux_sym_record_token2] = ACTIONS(19),
    [sym_keyword] = ACTIONS(21),
    [anon_sym_AMP_AMP] = ACTIONS(23),
    [anon_sym_AND] = ACTIONS(25),
    [anon_sym_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_OR] = ACTIONS(25),
    [anon_sym_QMARK_QMARK] = ACTIONS(23),
    [anon_sym_QMARK_COLON] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(25),
    [anon_sym_IS] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_ISNOT] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_QMARK_EQ] = ACTIONS(23),
    [anon_sym_STAR_EQ] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_BANG_TILDE] = ACTIONS(23),
    [anon_sym_QMARK_TILDE] = ACTIONS(23),
    [anon_sym_STAR_TILDE] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_x] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_] = ACTIONS(23),
    [anon_sym_STAR_STAR] = ACTIONS(23),
    [anon_sym_IN] = ACTIONS(25),
    [anon_sym_CONTAINS] = ACTIONS(25),
    [anon_sym_2] = ACTIONS(23),
    [anon_sym_CONTAINSNOT] = ACTIONS(25),
    [anon_sym_3] = ACTIONS(23),
    [anon_sym_CONTAINSALL] = ACTIONS(25),
    [anon_sym_4] = ACTIONS(23),
    [anon_sym_CONTAINSANY] = ACTIONS(25),
    [anon_sym_5] = ACTIONS(23),
    [anon_sym_CONTAINSNONE] = ACTIONS(25),
    [anon_sym_6] = ACTIONS(23),
    [anon_sym_INSIDE] = ACTIONS(25),
    [anon_sym_7] = ACTIONS(23),
    [anon_sym_NOTINSIDE] = ACTIONS(25),
    [anon_sym_NOTIN] = ACTIONS(23),
    [anon_sym_8] = ACTIONS(23),
    [anon_sym_ALLINSIDE] = ACTIONS(25),
    [anon_sym_9] = ACTIONS(23),
    [anon_sym_ANYINSIDE] = ACTIONS(25),
    [anon_sym_10] = ACTIONS(23),
    [anon_sym_NONEINSIDE] = ACTIONS(25),
    [anon_sym_11] = ACTIONS(23),
    [anon_sym_OUTSIDE] = ACTIONS(25),
    [anon_sym_INTERSECTS] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(27),
    [anon_sym_LT_DASH] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(31),
    [anon_sym_any] = ACTIONS(33),
    [anon_sym_array] = ACTIONS(33),
    [anon_sym_bool] = ACTIONS(33),
    [anon_sym_datetime] = ACTIONS(33),
    [anon_sym_decimal] = ACTIONS(33),
    [anon_sym_duration] = ACTIONS(33),
    [anon_sym_float] = ACTIONS(33),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_number] = ACTIONS(33),
    [anon_sym_object] = ACTIONS(33),
    [anon_sym_string] = ACTIONS(33),
    [anon_sym_record] = ACTIONS(33),
    [anon_sym_geometry] = ACTIONS(33),
    [anon_sym_EDDSA] = ACTIONS(35),
    [anon_sym_ES256] = ACTIONS(35),
    [anon_sym_ES384] = ACTIONS(35),
    [anon_sym_ES512] = ACTIONS(35),
    [anon_sym_HS256] = ACTIONS(35),
    [anon_sym_HS384] = ACTIONS(35),
    [anon_sym_HS512] = ACTIONS(35),
    [anon_sym_PS256] = ACTIONS(35),
    [anon_sym_PS384] = ACTIONS(35),
    [anon_sym_PS512] = ACTIONS(35),
    [anon_sym_RS256] = ACTIONS(35),
    [anon_sym_RS384] = ACTIONS(35),
    [anon_sym_RS512] = ACTIONS(35),
    [aux_sym_function_token1] = ACTIONS(37),
    [aux_sym_function_token2] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [aux_sym_function_token3] = ACTIONS(37),
    [aux_sym_function_token4] = ACTIONS(37),
    [aux_sym_function_token5] = ACTIONS(37),
    [aux_sym_function_token6] = ACTIONS(37),
    [aux_sym_function_token7] = ACTIONS(37),
    [aux_sym_function_token8] = ACTIONS(37),
    [aux_sym_function_token9] = ACTIONS(37),
    [aux_sym_function_token10] = ACTIONS(39),
    [aux_sym_function_token11] = ACTIONS(37),
    [aux_sym_function_token12] = ACTIONS(39),
    [aux_sym_function_token13] = ACTIONS(37),
    [aux_sym_function_token14] = ACTIONS(37),
    [aux_sym_function_token15] = ACTIONS(37),
    [aux_sym_function_token16] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_TRUE] = ACTIONS(41),
    [anon_sym_FALSE] = ACTIONS(41),
    [anon_sym_null] = ACTIONS(43),
    [anon_sym_NULL] = ACTIONS(43),
    [anon_sym_none] = ACTIONS(43),
    [anon_sym_NONE] = ACTIONS(43),
    [sym_variable] = ACTIONS(45),
    [sym_comment] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
  },
  [7] = {
    [sym_tokens] = STATE(7),
    [sym_scripting_function] = STATE(15),
    [sym_future] = STATE(15),
    [sym_casting] = STATE(15),
    [sym_property] = STATE(15),
    [sym_duration] = STATE(15),
    [sym_constant] = STATE(15),
    [sym_number] = STATE(15),
    [sym_record] = STATE(15),
    [sym_operator] = STATE(15),
    [sym_punctuation] = STATE(15),
    [sym_delimiter] = STATE(15),
    [sym_type] = STATE(15),
    [sym_datatype] = STATE(26),
    [sym_algotype] = STATE(26),
    [sym_function] = STATE(15),
    [sym_bool] = STATE(15),
    [sym_nothing] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(183),
    [aux_sym_future_token1] = ACTIONS(186),
    [aux_sym_casting_token1] = ACTIONS(189),
    [aux_sym_property_token1] = ACTIONS(192),
    [aux_sym_duration_token1] = ACTIONS(195),
    [aux_sym_constant_token1] = ACTIONS(198),
    [aux_sym_number_token1] = ACTIONS(201),
    [aux_sym_record_token1] = ACTIONS(204),
    [aux_sym_record_token2] = ACTIONS(204),
    [sym_keyword] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(210),
    [anon_sym_AND] = ACTIONS(213),
    [anon_sym_PIPE_PIPE] = ACTIONS(210),
    [anon_sym_OR] = ACTIONS(213),
    [anon_sym_QMARK_QMARK] = ACTIONS(210),
    [anon_sym_QMARK_COLON] = ACTIONS(210),
    [anon_sym_EQ] = ACTIONS(213),
    [anon_sym_IS] = ACTIONS(213),
    [anon_sym_BANG_EQ] = ACTIONS(210),
    [anon_sym_ISNOT] = ACTIONS(210),
    [anon_sym_EQ_EQ] = ACTIONS(210),
    [anon_sym_QMARK_EQ] = ACTIONS(210),
    [anon_sym_STAR_EQ] = ACTIONS(210),
    [anon_sym_TILDE] = ACTIONS(210),
    [anon_sym_BANG_TILDE] = ACTIONS(210),
    [anon_sym_QMARK_TILDE] = ACTIONS(210),
    [anon_sym_STAR_TILDE] = ACTIONS(210),
    [anon_sym_LT] = ACTIONS(213),
    [anon_sym_LT_EQ] = ACTIONS(210),
    [anon_sym_GT] = ACTIONS(213),
    [anon_sym_GT_EQ] = ACTIONS(210),
    [anon_sym_PLUS] = ACTIONS(210),
    [anon_sym_DASH] = ACTIONS(213),
    [anon_sym_STAR] = ACTIONS(213),
    [anon_sym_x] = ACTIONS(213),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_] = ACTIONS(210),
    [anon_sym_STAR_STAR] = ACTIONS(210),
    [anon_sym_IN] = ACTIONS(213),
    [anon_sym_CONTAINS] = ACTIONS(213),
    [anon_sym_2] = ACTIONS(210),
    [anon_sym_CONTAINSNOT] = ACTIONS(213),
    [anon_sym_3] = ACTIONS(210),
    [anon_sym_CONTAINSALL] = ACTIONS(213),
    [anon_sym_4] = ACTIONS(210),
    [anon_sym_CONTAINSANY] = ACTIONS(213),
    [anon_sym_5] = ACTIONS(210),
    [anon_sym_CONTAINSNONE] = ACTIONS(213),
    [anon_sym_6] = ACTIONS(210),
    [anon_sym_INSIDE] = ACTIONS(213),
    [anon_sym_7] = ACTIONS(210),
    [anon_sym_NOTINSIDE] = ACTIONS(213),
    [anon_sym_NOTIN] = ACTIONS(210),
    [anon_sym_8] = ACTIONS(210),
    [anon_sym_ALLINSIDE] = ACTIONS(213),
    [anon_sym_9] = ACTIONS(210),
    [anon_sym_ANYINSIDE] = ACTIONS(213),
    [anon_sym_10] = ACTIONS(210),
    [anon_sym_NONEINSIDE] = ACTIONS(213),
    [anon_sym_11] = ACTIONS(210),
    [anon_sym_OUTSIDE] = ACTIONS(213),
    [anon_sym_INTERSECTS] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(216),
    [anon_sym_RPAREN] = ACTIONS(216),
    [anon_sym_LBRACK] = ACTIONS(216),
    [anon_sym_RBRACK] = ACTIONS(216),
    [anon_sym_LBRACE] = ACTIONS(216),
    [anon_sym_RBRACE] = ACTIONS(216),
    [anon_sym_DASH_GT] = ACTIONS(216),
    [anon_sym_LT_DASH] = ACTIONS(216),
    [anon_sym_COMMA] = ACTIONS(219),
    [anon_sym_SEMI] = ACTIONS(219),
    [anon_sym_COLON] = ACTIONS(222),
    [anon_sym_any] = ACTIONS(225),
    [anon_sym_array] = ACTIONS(225),
    [anon_sym_bool] = ACTIONS(225),
    [anon_sym_datetime] = ACTIONS(225),
    [anon_sym_decimal] = ACTIONS(225),
    [anon_sym_duration] = ACTIONS(225),
    [anon_sym_float] = ACTIONS(225),
    [anon_sym_int] = ACTIONS(225),
    [anon_sym_number] = ACTIONS(225),
    [anon_sym_object] = ACTIONS(225),
    [anon_sym_string] = ACTIONS(225),
    [anon_sym_record] = ACTIONS(225),
    [anon_sym_geometry] = ACTIONS(225),
    [anon_sym_EDDSA] = ACTIONS(228),
    [anon_sym_ES256] = ACTIONS(228),
    [anon_sym_ES384] = ACTIONS(228),
    [anon_sym_ES512] = ACTIONS(228),
    [anon_sym_HS256] = ACTIONS(228),
    [anon_sym_HS384] = ACTIONS(228),
    [anon_sym_HS512] = ACTIONS(228),
    [anon_sym_PS256] = ACTIONS(228),
    [anon_sym_PS384] = ACTIONS(228),
    [anon_sym_PS512] = ACTIONS(228),
    [anon_sym_RS256] = ACTIONS(228),
    [anon_sym_RS384] = ACTIONS(228),
    [anon_sym_RS512] = ACTIONS(228),
    [aux_sym_function_token1] = ACTIONS(231),
    [aux_sym_function_token2] = ACTIONS(231),
    [anon_sym_count] = ACTIONS(234),
    [aux_sym_function_token3] = ACTIONS(231),
    [aux_sym_function_token4] = ACTIONS(231),
    [aux_sym_function_token5] = ACTIONS(231),
    [aux_sym_function_token6] = ACTIONS(231),
    [aux_sym_function_token7] = ACTIONS(231),
    [aux_sym_function_token8] = ACTIONS(231),
    [aux_sym_function_token9] = ACTIONS(231),
    [aux_sym_function_token10] = ACTIONS(234),
    [aux_sym_function_token11] = ACTIONS(231),
    [aux_sym_function_token12] = ACTIONS(234),
    [aux_sym_function_token13] = ACTIONS(231),
    [aux_sym_function_token14] = ACTIONS(231),
    [aux_sym_function_token15] = ACTIONS(231),
    [aux_sym_function_token16] = ACTIONS(234),
    [anon_sym_true] = ACTIONS(237),
    [anon_sym_false] = ACTIONS(237),
    [anon_sym_TRUE] = ACTIONS(237),
    [anon_sym_FALSE] = ACTIONS(237),
    [anon_sym_null] = ACTIONS(240),
    [anon_sym_NULL] = ACTIONS(240),
    [anon_sym_none] = ACTIONS(240),
    [anon_sym_NONE] = ACTIONS(240),
    [sym_variable] = ACTIONS(243),
    [sym_comment] = ACTIONS(246),
    [anon_sym_SQUOTE] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(252),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(255),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(255),
    [aux_sym_future_token1] = ACTIONS(255),
    [aux_sym_casting_token1] = ACTIONS(255),
    [aux_sym_property_token1] = ACTIONS(257),
    [aux_sym_duration_token1] = ACTIONS(257),
    [aux_sym_constant_token1] = ACTIONS(255),
    [aux_sym_number_token1] = ACTIONS(257),
    [aux_sym_record_token1] = ACTIONS(255),
    [aux_sym_record_token2] = ACTIONS(255),
    [sym_keyword] = ACTIONS(257),
    [anon_sym_AMP_AMP] = ACTIONS(255),
    [anon_sym_AND] = ACTIONS(257),
    [anon_sym_PIPE_PIPE] = ACTIONS(255),
    [anon_sym_OR] = ACTIONS(257),
    [anon_sym_QMARK_QMARK] = ACTIONS(255),
    [anon_sym_QMARK_COLON] = ACTIONS(255),
    [anon_sym_EQ] = ACTIONS(257),
    [anon_sym_IS] = ACTIONS(257),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_ISNOT] = ACTIONS(255),
    [anon_sym_EQ_EQ] = ACTIONS(255),
    [anon_sym_QMARK_EQ] = ACTIONS(255),
    [anon_sym_STAR_EQ] = ACTIONS(255),
    [anon_sym_TILDE] = ACTIONS(255),
    [anon_sym_BANG_TILDE] = ACTIONS(255),
    [anon_sym_QMARK_TILDE] = ACTIONS(255),
    [anon_sym_STAR_TILDE] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(257),
    [anon_sym_STAR] = ACTIONS(257),
    [anon_sym_x] = ACTIONS(257),
    [anon_sym_SLASH] = ACTIONS(257),
    [anon_sym_] = ACTIONS(255),
    [anon_sym_STAR_STAR] = ACTIONS(255),
    [anon_sym_IN] = ACTIONS(257),
    [anon_sym_CONTAINS] = ACTIONS(257),
    [anon_sym_2] = ACTIONS(255),
    [anon_sym_CONTAINSNOT] = ACTIONS(257),
    [anon_sym_3] = ACTIONS(255),
    [anon_sym_CONTAINSALL] = ACTIONS(257),
    [anon_sym_4] = ACTIONS(255),
    [anon_sym_CONTAINSANY] = ACTIONS(257),
    [anon_sym_5] = ACTIONS(255),
    [anon_sym_CONTAINSNONE] = ACTIONS(257),
    [anon_sym_6] = ACTIONS(255),
    [anon_sym_INSIDE] = ACTIONS(257),
    [anon_sym_7] = ACTIONS(255),
    [anon_sym_NOTINSIDE] = ACTIONS(257),
    [anon_sym_NOTIN] = ACTIONS(255),
    [anon_sym_8] = ACTIONS(255),
    [anon_sym_ALLINSIDE] = ACTIONS(257),
    [anon_sym_9] = ACTIONS(255),
    [anon_sym_ANYINSIDE] = ACTIONS(257),
    [anon_sym_10] = ACTIONS(255),
    [anon_sym_NONEINSIDE] = ACTIONS(257),
    [anon_sym_11] = ACTIONS(255),
    [anon_sym_OUTSIDE] = ACTIONS(257),
    [anon_sym_INTERSECTS] = ACTIONS(257),
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_RPAREN] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(255),
    [anon_sym_RBRACK] = ACTIONS(255),
    [anon_sym_LBRACE] = ACTIONS(255),
    [anon_sym_RBRACE] = ACTIONS(255),
    [anon_sym_DASH_GT] = ACTIONS(255),
    [anon_sym_LT_DASH] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(255),
    [anon_sym_SEMI] = ACTIONS(255),
    [anon_sym_COLON] = ACTIONS(257),
    [anon_sym_any] = ACTIONS(257),
    [anon_sym_array] = ACTIONS(257),
    [anon_sym_bool] = ACTIONS(257),
    [anon_sym_datetime] = ACTIONS(257),
    [anon_sym_decimal] = ACTIONS(257),
    [anon_sym_duration] = ACTIONS(257),
    [anon_sym_float] = ACTIONS(257),
    [anon_sym_int] = ACTIONS(257),
    [anon_sym_number] = ACTIONS(257),
    [anon_sym_object] = ACTIONS(257),
    [anon_sym_string] = ACTIONS(257),
    [anon_sym_record] = ACTIONS(257),
    [anon_sym_geometry] = ACTIONS(257),
    [anon_sym_EDDSA] = ACTIONS(257),
    [anon_sym_ES256] = ACTIONS(257),
    [anon_sym_ES384] = ACTIONS(257),
    [anon_sym_ES512] = ACTIONS(257),
    [anon_sym_HS256] = ACTIONS(257),
    [anon_sym_HS384] = ACTIONS(257),
    [anon_sym_HS512] = ACTIONS(257),
    [anon_sym_PS256] = ACTIONS(257),
    [anon_sym_PS384] = ACTIONS(257),
    [anon_sym_PS512] = ACTIONS(257),
    [anon_sym_RS256] = ACTIONS(257),
    [anon_sym_RS384] = ACTIONS(257),
    [anon_sym_RS512] = ACTIONS(257),
    [aux_sym_function_token1] = ACTIONS(255),
    [aux_sym_function_token2] = ACTIONS(255),
    [anon_sym_count] = ACTIONS(257),
    [aux_sym_function_token3] = ACTIONS(255),
    [aux_sym_function_token4] = ACTIONS(255),
    [aux_sym_function_token5] = ACTIONS(255),
    [aux_sym_function_token6] = ACTIONS(255),
    [aux_sym_function_token7] = ACTIONS(255),
    [aux_sym_function_token8] = ACTIONS(255),
    [aux_sym_function_token9] = ACTIONS(255),
    [aux_sym_function_token10] = ACTIONS(257),
    [aux_sym_function_token11] = ACTIONS(255),
    [aux_sym_function_token12] = ACTIONS(257),
    [aux_sym_function_token13] = ACTIONS(255),
    [aux_sym_function_token14] = ACTIONS(255),
    [aux_sym_function_token15] = ACTIONS(255),
    [aux_sym_function_token16] = ACTIONS(257),
    [anon_sym_true] = ACTIONS(257),
    [anon_sym_false] = ACTIONS(257),
    [anon_sym_TRUE] = ACTIONS(257),
    [anon_sym_FALSE] = ACTIONS(257),
    [anon_sym_null] = ACTIONS(257),
    [anon_sym_NULL] = ACTIONS(257),
    [anon_sym_none] = ACTIONS(257),
    [anon_sym_NONE] = ACTIONS(257),
    [sym_variable] = ACTIONS(255),
    [sym_comment] = ACTIONS(255),
    [anon_sym_SQUOTE] = ACTIONS(255),
    [anon_sym_DQUOTE] = ACTIONS(255),
  },
  [9] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(259),
    [anon_sym_RBRACE_SEMI] = ACTIONS(259),
    [anon_sym_RBRACE_COMMA] = ACTIONS(259),
    [aux_sym_future_token1] = ACTIONS(259),
    [aux_sym_casting_token1] = ACTIONS(259),
    [aux_sym_property_token1] = ACTIONS(261),
    [aux_sym_duration_token1] = ACTIONS(261),
    [aux_sym_constant_token1] = ACTIONS(259),
    [aux_sym_number_token1] = ACTIONS(261),
    [aux_sym_record_token1] = ACTIONS(259),
    [aux_sym_record_token2] = ACTIONS(259),
    [sym_keyword] = ACTIONS(261),
    [anon_sym_AMP_AMP] = ACTIONS(259),
    [anon_sym_AND] = ACTIONS(261),
    [anon_sym_PIPE_PIPE] = ACTIONS(259),
    [anon_sym_OR] = ACTIONS(261),
    [anon_sym_QMARK_QMARK] = ACTIONS(259),
    [anon_sym_QMARK_COLON] = ACTIONS(259),
    [anon_sym_EQ] = ACTIONS(261),
    [anon_sym_IS] = ACTIONS(261),
    [anon_sym_BANG_EQ] = ACTIONS(259),
    [anon_sym_ISNOT] = ACTIONS(259),
    [anon_sym_EQ_EQ] = ACTIONS(259),
    [anon_sym_QMARK_EQ] = ACTIONS(259),
    [anon_sym_STAR_EQ] = ACTIONS(259),
    [anon_sym_TILDE] = ACTIONS(259),
    [anon_sym_BANG_TILDE] = ACTIONS(259),
    [anon_sym_QMARK_TILDE] = ACTIONS(259),
    [anon_sym_STAR_TILDE] = ACTIONS(259),
    [anon_sym_LT] = ACTIONS(261),
    [anon_sym_LT_EQ] = ACTIONS(259),
    [anon_sym_GT] = ACTIONS(261),
    [anon_sym_GT_EQ] = ACTIONS(259),
    [anon_sym_PLUS] = ACTIONS(259),
    [anon_sym_DASH] = ACTIONS(261),
    [anon_sym_STAR] = ACTIONS(261),
    [anon_sym_x] = ACTIONS(261),
    [anon_sym_SLASH] = ACTIONS(259),
    [anon_sym_] = ACTIONS(259),
    [anon_sym_STAR_STAR] = ACTIONS(259),
    [anon_sym_IN] = ACTIONS(261),
    [anon_sym_CONTAINS] = ACTIONS(261),
    [anon_sym_2] = ACTIONS(259),
    [anon_sym_CONTAINSNOT] = ACTIONS(261),
    [anon_sym_3] = ACTIONS(259),
    [anon_sym_CONTAINSALL] = ACTIONS(261),
    [anon_sym_4] = ACTIONS(259),
    [anon_sym_CONTAINSANY] = ACTIONS(261),
    [anon_sym_5] = ACTIONS(259),
    [anon_sym_CONTAINSNONE] = ACTIONS(261),
    [anon_sym_6] = ACTIONS(259),
    [anon_sym_INSIDE] = ACTIONS(261),
    [anon_sym_7] = ACTIONS(259),
    [anon_sym_NOTINSIDE] = ACTIONS(261),
    [anon_sym_NOTIN] = ACTIONS(259),
    [anon_sym_8] = ACTIONS(259),
    [anon_sym_ALLINSIDE] = ACTIONS(261),
    [anon_sym_9] = ACTIONS(259),
    [anon_sym_ANYINSIDE] = ACTIONS(261),
    [anon_sym_10] = ACTIONS(259),
    [anon_sym_NONEINSIDE] = ACTIONS(261),
    [anon_sym_11] = ACTIONS(259),
    [anon_sym_OUTSIDE] = ACTIONS(261),
    [anon_sym_INTERSECTS] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_RPAREN] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_RBRACK] = ACTIONS(259),
    [anon_sym_LBRACE] = ACTIONS(259),
    [anon_sym_RBRACE] = ACTIONS(261),
    [anon_sym_DASH_GT] = ACTIONS(259),
    [anon_sym_LT_DASH] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(259),
    [anon_sym_SEMI] = ACTIONS(259),
    [anon_sym_COLON] = ACTIONS(261),
    [anon_sym_any] = ACTIONS(261),
    [anon_sym_array] = ACTIONS(261),
    [anon_sym_bool] = ACTIONS(261),
    [anon_sym_datetime] = ACTIONS(261),
    [anon_sym_decimal] = ACTIONS(261),
    [anon_sym_duration] = ACTIONS(261),
    [anon_sym_float] = ACTIONS(261),
    [anon_sym_int] = ACTIONS(261),
    [anon_sym_number] = ACTIONS(261),
    [anon_sym_object] = ACTIONS(261),
    [anon_sym_string] = ACTIONS(261),
    [anon_sym_record] = ACTIONS(261),
    [anon_sym_geometry] = ACTIONS(261),
    [anon_sym_EDDSA] = ACTIONS(261),
    [anon_sym_ES256] = ACTIONS(261),
    [anon_sym_ES384] = ACTIONS(261),
    [anon_sym_ES512] = ACTIONS(261),
    [anon_sym_HS256] = ACTIONS(261),
    [anon_sym_HS384] = ACTIONS(261),
    [anon_sym_HS512] = ACTIONS(261),
    [anon_sym_PS256] = ACTIONS(261),
    [anon_sym_PS384] = ACTIONS(261),
    [anon_sym_PS512] = ACTIONS(261),
    [anon_sym_RS256] = ACTIONS(261),
    [anon_sym_RS384] = ACTIONS(261),
    [anon_sym_RS512] = ACTIONS(261),
    [aux_sym_function_token1] = ACTIONS(259),
    [aux_sym_function_token2] = ACTIONS(259),
    [anon_sym_count] = ACTIONS(261),
    [aux_sym_function_token3] = ACTIONS(259),
    [aux_sym_function_token4] = ACTIONS(259),
    [aux_sym_function_token5] = ACTIONS(259),
    [aux_sym_function_token6] = ACTIONS(259),
    [aux_sym_function_token7] = ACTIONS(259),
    [aux_sym_function_token8] = ACTIONS(259),
    [aux_sym_function_token9] = ACTIONS(259),
    [aux_sym_function_token10] = ACTIONS(261),
    [aux_sym_function_token11] = ACTIONS(259),
    [aux_sym_function_token12] = ACTIONS(261),
    [aux_sym_function_token13] = ACTIONS(259),
    [aux_sym_function_token14] = ACTIONS(259),
    [aux_sym_function_token15] = ACTIONS(259),
    [aux_sym_function_token16] = ACTIONS(261),
    [anon_sym_true] = ACTIONS(261),
    [anon_sym_false] = ACTIONS(261),
    [anon_sym_TRUE] = ACTIONS(261),
    [anon_sym_FALSE] = ACTIONS(261),
    [anon_sym_null] = ACTIONS(261),
    [anon_sym_NULL] = ACTIONS(261),
    [anon_sym_none] = ACTIONS(261),
    [anon_sym_NONE] = ACTIONS(261),
    [sym_variable] = ACTIONS(259),
    [anon_sym_SQUOTE] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(259),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(263),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(263),
    [aux_sym_future_token1] = ACTIONS(263),
    [aux_sym_casting_token1] = ACTIONS(263),
    [aux_sym_property_token1] = ACTIONS(265),
    [aux_sym_duration_token1] = ACTIONS(265),
    [aux_sym_constant_token1] = ACTIONS(263),
    [aux_sym_number_token1] = ACTIONS(265),
    [aux_sym_record_token1] = ACTIONS(263),
    [aux_sym_record_token2] = ACTIONS(263),
    [sym_keyword] = ACTIONS(265),
    [anon_sym_AMP_AMP] = ACTIONS(263),
    [anon_sym_AND] = ACTIONS(265),
    [anon_sym_PIPE_PIPE] = ACTIONS(263),
    [anon_sym_OR] = ACTIONS(265),
    [anon_sym_QMARK_QMARK] = ACTIONS(263),
    [anon_sym_QMARK_COLON] = ACTIONS(263),
    [anon_sym_EQ] = ACTIONS(265),
    [anon_sym_IS] = ACTIONS(265),
    [anon_sym_BANG_EQ] = ACTIONS(263),
    [anon_sym_ISNOT] = ACTIONS(263),
    [anon_sym_EQ_EQ] = ACTIONS(263),
    [anon_sym_QMARK_EQ] = ACTIONS(263),
    [anon_sym_STAR_EQ] = ACTIONS(263),
    [anon_sym_TILDE] = ACTIONS(263),
    [anon_sym_BANG_TILDE] = ACTIONS(263),
    [anon_sym_QMARK_TILDE] = ACTIONS(263),
    [anon_sym_STAR_TILDE] = ACTIONS(263),
    [anon_sym_LT] = ACTIONS(265),
    [anon_sym_LT_EQ] = ACTIONS(263),
    [anon_sym_GT] = ACTIONS(265),
    [anon_sym_GT_EQ] = ACTIONS(263),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(265),
    [anon_sym_STAR] = ACTIONS(265),
    [anon_sym_x] = ACTIONS(265),
    [anon_sym_SLASH] = ACTIONS(265),
    [anon_sym_] = ACTIONS(263),
    [anon_sym_STAR_STAR] = ACTIONS(263),
    [anon_sym_IN] = ACTIONS(265),
    [anon_sym_CONTAINS] = ACTIONS(265),
    [anon_sym_2] = ACTIONS(263),
    [anon_sym_CONTAINSNOT] = ACTIONS(265),
    [anon_sym_3] = ACTIONS(263),
    [anon_sym_CONTAINSALL] = ACTIONS(265),
    [anon_sym_4] = ACTIONS(263),
    [anon_sym_CONTAINSANY] = ACTIONS(265),
    [anon_sym_5] = ACTIONS(263),
    [anon_sym_CONTAINSNONE] = ACTIONS(265),
    [anon_sym_6] = ACTIONS(263),
    [anon_sym_INSIDE] = ACTIONS(265),
    [anon_sym_7] = ACTIONS(263),
    [anon_sym_NOTINSIDE] = ACTIONS(265),
    [anon_sym_NOTIN] = ACTIONS(263),
    [anon_sym_8] = ACTIONS(263),
    [anon_sym_ALLINSIDE] = ACTIONS(265),
    [anon_sym_9] = ACTIONS(263),
    [anon_sym_ANYINSIDE] = ACTIONS(265),
    [anon_sym_10] = ACTIONS(263),
    [anon_sym_NONEINSIDE] = ACTIONS(265),
    [anon_sym_11] = ACTIONS(263),
    [anon_sym_OUTSIDE] = ACTIONS(265),
    [anon_sym_INTERSECTS] = ACTIONS(265),
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_RPAREN] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(263),
    [anon_sym_RBRACK] = ACTIONS(263),
    [anon_sym_LBRACE] = ACTIONS(263),
    [anon_sym_RBRACE] = ACTIONS(263),
    [anon_sym_DASH_GT] = ACTIONS(263),
    [anon_sym_LT_DASH] = ACTIONS(263),
    [anon_sym_COMMA] = ACTIONS(263),
    [anon_sym_SEMI] = ACTIONS(263),
    [anon_sym_COLON] = ACTIONS(265),
    [anon_sym_any] = ACTIONS(265),
    [anon_sym_array] = ACTIONS(265),
    [anon_sym_bool] = ACTIONS(265),
    [anon_sym_datetime] = ACTIONS(265),
    [anon_sym_decimal] = ACTIONS(265),
    [anon_sym_duration] = ACTIONS(265),
    [anon_sym_float] = ACTIONS(265),
    [anon_sym_int] = ACTIONS(265),
    [anon_sym_number] = ACTIONS(265),
    [anon_sym_object] = ACTIONS(265),
    [anon_sym_string] = ACTIONS(265),
    [anon_sym_record] = ACTIONS(265),
    [anon_sym_geometry] = ACTIONS(265),
    [anon_sym_EDDSA] = ACTIONS(265),
    [anon_sym_ES256] = ACTIONS(265),
    [anon_sym_ES384] = ACTIONS(265),
    [anon_sym_ES512] = ACTIONS(265),
    [anon_sym_HS256] = ACTIONS(265),
    [anon_sym_HS384] = ACTIONS(265),
    [anon_sym_HS512] = ACTIONS(265),
    [anon_sym_PS256] = ACTIONS(265),
    [anon_sym_PS384] = ACTIONS(265),
    [anon_sym_PS512] = ACTIONS(265),
    [anon_sym_RS256] = ACTIONS(265),
    [anon_sym_RS384] = ACTIONS(265),
    [anon_sym_RS512] = ACTIONS(265),
    [aux_sym_function_token1] = ACTIONS(263),
    [aux_sym_function_token2] = ACTIONS(263),
    [anon_sym_count] = ACTIONS(265),
    [aux_sym_function_token3] = ACTIONS(263),
    [aux_sym_function_token4] = ACTIONS(263),
    [aux_sym_function_token5] = ACTIONS(263),
    [aux_sym_function_token6] = ACTIONS(263),
    [aux_sym_function_token7] = ACTIONS(263),
    [aux_sym_function_token8] = ACTIONS(263),
    [aux_sym_function_token9] = ACTIONS(263),
    [aux_sym_function_token10] = ACTIONS(265),
    [aux_sym_function_token11] = ACTIONS(263),
    [aux_sym_function_token12] = ACTIONS(265),
    [aux_sym_function_token13] = ACTIONS(263),
    [aux_sym_function_token14] = ACTIONS(263),
    [aux_sym_function_token15] = ACTIONS(263),
    [aux_sym_function_token16] = ACTIONS(265),
    [anon_sym_true] = ACTIONS(265),
    [anon_sym_false] = ACTIONS(265),
    [anon_sym_TRUE] = ACTIONS(265),
    [anon_sym_FALSE] = ACTIONS(265),
    [anon_sym_null] = ACTIONS(265),
    [anon_sym_NULL] = ACTIONS(265),
    [anon_sym_none] = ACTIONS(265),
    [anon_sym_NONE] = ACTIONS(265),
    [sym_variable] = ACTIONS(263),
    [sym_comment] = ACTIONS(263),
    [anon_sym_SQUOTE] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(263),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(267),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(267),
    [aux_sym_future_token1] = ACTIONS(267),
    [aux_sym_casting_token1] = ACTIONS(267),
    [aux_sym_property_token1] = ACTIONS(269),
    [aux_sym_duration_token1] = ACTIONS(269),
    [aux_sym_constant_token1] = ACTIONS(267),
    [aux_sym_number_token1] = ACTIONS(269),
    [aux_sym_record_token1] = ACTIONS(267),
    [aux_sym_record_token2] = ACTIONS(267),
    [sym_keyword] = ACTIONS(269),
    [anon_sym_AMP_AMP] = ACTIONS(267),
    [anon_sym_AND] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(267),
    [anon_sym_OR] = ACTIONS(269),
    [anon_sym_QMARK_QMARK] = ACTIONS(267),
    [anon_sym_QMARK_COLON] = ACTIONS(267),
    [anon_sym_EQ] = ACTIONS(269),
    [anon_sym_IS] = ACTIONS(269),
    [anon_sym_BANG_EQ] = ACTIONS(267),
    [anon_sym_ISNOT] = ACTIONS(267),
    [anon_sym_EQ_EQ] = ACTIONS(267),
    [anon_sym_QMARK_EQ] = ACTIONS(267),
    [anon_sym_STAR_EQ] = ACTIONS(267),
    [anon_sym_TILDE] = ACTIONS(267),
    [anon_sym_BANG_TILDE] = ACTIONS(267),
    [anon_sym_QMARK_TILDE] = ACTIONS(267),
    [anon_sym_STAR_TILDE] = ACTIONS(267),
    [anon_sym_LT] = ACTIONS(269),
    [anon_sym_LT_EQ] = ACTIONS(267),
    [anon_sym_GT] = ACTIONS(269),
    [anon_sym_GT_EQ] = ACTIONS(267),
    [anon_sym_PLUS] = ACTIONS(267),
    [anon_sym_DASH] = ACTIONS(269),
    [anon_sym_STAR] = ACTIONS(269),
    [anon_sym_x] = ACTIONS(269),
    [anon_sym_SLASH] = ACTIONS(269),
    [anon_sym_] = ACTIONS(267),
    [anon_sym_STAR_STAR] = ACTIONS(267),
    [anon_sym_IN] = ACTIONS(269),
    [anon_sym_CONTAINS] = ACTIONS(269),
    [anon_sym_2] = ACTIONS(267),
    [anon_sym_CONTAINSNOT] = ACTIONS(269),
    [anon_sym_3] = ACTIONS(267),
    [anon_sym_CONTAINSALL] = ACTIONS(269),
    [anon_sym_4] = ACTIONS(267),
    [anon_sym_CONTAINSANY] = ACTIONS(269),
    [anon_sym_5] = ACTIONS(267),
    [anon_sym_CONTAINSNONE] = ACTIONS(269),
    [anon_sym_6] = ACTIONS(267),
    [anon_sym_INSIDE] = ACTIONS(269),
    [anon_sym_7] = ACTIONS(267),
    [anon_sym_NOTINSIDE] = ACTIONS(269),
    [anon_sym_NOTIN] = ACTIONS(267),
    [anon_sym_8] = ACTIONS(267),
    [anon_sym_ALLINSIDE] = ACTIONS(269),
    [anon_sym_9] = ACTIONS(267),
    [anon_sym_ANYINSIDE] = ACTIONS(269),
    [anon_sym_10] = ACTIONS(267),
    [anon_sym_NONEINSIDE] = ACTIONS(269),
    [anon_sym_11] = ACTIONS(267),
    [anon_sym_OUTSIDE] = ACTIONS(269),
    [anon_sym_INTERSECTS] = ACTIONS(269),
    [anon_sym_LPAREN] = ACTIONS(267),
    [anon_sym_RPAREN] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(267),
    [anon_sym_RBRACK] = ACTIONS(267),
    [anon_sym_LBRACE] = ACTIONS(267),
    [anon_sym_RBRACE] = ACTIONS(267),
    [anon_sym_DASH_GT] = ACTIONS(267),
    [anon_sym_LT_DASH] = ACTIONS(267),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_SEMI] = ACTIONS(267),
    [anon_sym_COLON] = ACTIONS(269),
    [anon_sym_any] = ACTIONS(269),
    [anon_sym_array] = ACTIONS(269),
    [anon_sym_bool] = ACTIONS(269),
    [anon_sym_datetime] = ACTIONS(269),
    [anon_sym_decimal] = ACTIONS(269),
    [anon_sym_duration] = ACTIONS(269),
    [anon_sym_float] = ACTIONS(269),
    [anon_sym_int] = ACTIONS(269),
    [anon_sym_number] = ACTIONS(269),
    [anon_sym_object] = ACTIONS(269),
    [anon_sym_string] = ACTIONS(269),
    [anon_sym_record] = ACTIONS(269),
    [anon_sym_geometry] = ACTIONS(269),
    [anon_sym_EDDSA] = ACTIONS(269),
    [anon_sym_ES256] = ACTIONS(269),
    [anon_sym_ES384] = ACTIONS(269),
    [anon_sym_ES512] = ACTIONS(269),
    [anon_sym_HS256] = ACTIONS(269),
    [anon_sym_HS384] = ACTIONS(269),
    [anon_sym_HS512] = ACTIONS(269),
    [anon_sym_PS256] = ACTIONS(269),
    [anon_sym_PS384] = ACTIONS(269),
    [anon_sym_PS512] = ACTIONS(269),
    [anon_sym_RS256] = ACTIONS(269),
    [anon_sym_RS384] = ACTIONS(269),
    [anon_sym_RS512] = ACTIONS(269),
    [aux_sym_function_token1] = ACTIONS(267),
    [aux_sym_function_token2] = ACTIONS(267),
    [anon_sym_count] = ACTIONS(269),
    [aux_sym_function_token3] = ACTIONS(267),
    [aux_sym_function_token4] = ACTIONS(267),
    [aux_sym_function_token5] = ACTIONS(267),
    [aux_sym_function_token6] = ACTIONS(267),
    [aux_sym_function_token7] = ACTIONS(267),
    [aux_sym_function_token8] = ACTIONS(267),
    [aux_sym_function_token9] = ACTIONS(267),
    [aux_sym_function_token10] = ACTIONS(269),
    [aux_sym_function_token11] = ACTIONS(267),
    [aux_sym_function_token12] = ACTIONS(269),
    [aux_sym_function_token13] = ACTIONS(267),
    [aux_sym_function_token14] = ACTIONS(267),
    [aux_sym_function_token15] = ACTIONS(267),
    [aux_sym_function_token16] = ACTIONS(269),
    [anon_sym_true] = ACTIONS(269),
    [anon_sym_false] = ACTIONS(269),
    [anon_sym_TRUE] = ACTIONS(269),
    [anon_sym_FALSE] = ACTIONS(269),
    [anon_sym_null] = ACTIONS(269),
    [anon_sym_NULL] = ACTIONS(269),
    [anon_sym_none] = ACTIONS(269),
    [anon_sym_NONE] = ACTIONS(269),
    [sym_variable] = ACTIONS(267),
    [sym_comment] = ACTIONS(267),
    [anon_sym_SQUOTE] = ACTIONS(267),
    [anon_sym_DQUOTE] = ACTIONS(267),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(271),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(271),
    [aux_sym_future_token1] = ACTIONS(271),
    [aux_sym_casting_token1] = ACTIONS(271),
    [aux_sym_property_token1] = ACTIONS(273),
    [aux_sym_duration_token1] = ACTIONS(273),
    [aux_sym_constant_token1] = ACTIONS(271),
    [aux_sym_number_token1] = ACTIONS(273),
    [aux_sym_record_token1] = ACTIONS(271),
    [aux_sym_record_token2] = ACTIONS(271),
    [sym_keyword] = ACTIONS(273),
    [anon_sym_AMP_AMP] = ACTIONS(271),
    [anon_sym_AND] = ACTIONS(273),
    [anon_sym_PIPE_PIPE] = ACTIONS(271),
    [anon_sym_OR] = ACTIONS(273),
    [anon_sym_QMARK_QMARK] = ACTIONS(271),
    [anon_sym_QMARK_COLON] = ACTIONS(271),
    [anon_sym_EQ] = ACTIONS(273),
    [anon_sym_IS] = ACTIONS(273),
    [anon_sym_BANG_EQ] = ACTIONS(271),
    [anon_sym_ISNOT] = ACTIONS(271),
    [anon_sym_EQ_EQ] = ACTIONS(271),
    [anon_sym_QMARK_EQ] = ACTIONS(271),
    [anon_sym_STAR_EQ] = ACTIONS(271),
    [anon_sym_TILDE] = ACTIONS(271),
    [anon_sym_BANG_TILDE] = ACTIONS(271),
    [anon_sym_QMARK_TILDE] = ACTIONS(271),
    [anon_sym_STAR_TILDE] = ACTIONS(271),
    [anon_sym_LT] = ACTIONS(273),
    [anon_sym_LT_EQ] = ACTIONS(271),
    [anon_sym_GT] = ACTIONS(273),
    [anon_sym_GT_EQ] = ACTIONS(271),
    [anon_sym_PLUS] = ACTIONS(271),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_x] = ACTIONS(273),
    [anon_sym_SLASH] = ACTIONS(273),
    [anon_sym_] = ACTIONS(271),
    [anon_sym_STAR_STAR] = ACTIONS(271),
    [anon_sym_IN] = ACTIONS(273),
    [anon_sym_CONTAINS] = ACTIONS(273),
    [anon_sym_2] = ACTIONS(271),
    [anon_sym_CONTAINSNOT] = ACTIONS(273),
    [anon_sym_3] = ACTIONS(271),
    [anon_sym_CONTAINSALL] = ACTIONS(273),
    [anon_sym_4] = ACTIONS(271),
    [anon_sym_CONTAINSANY] = ACTIONS(273),
    [anon_sym_5] = ACTIONS(271),
    [anon_sym_CONTAINSNONE] = ACTIONS(273),
    [anon_sym_6] = ACTIONS(271),
    [anon_sym_INSIDE] = ACTIONS(273),
    [anon_sym_7] = ACTIONS(271),
    [anon_sym_NOTINSIDE] = ACTIONS(273),
    [anon_sym_NOTIN] = ACTIONS(271),
    [anon_sym_8] = ACTIONS(271),
    [anon_sym_ALLINSIDE] = ACTIONS(273),
    [anon_sym_9] = ACTIONS(271),
    [anon_sym_ANYINSIDE] = ACTIONS(273),
    [anon_sym_10] = ACTIONS(271),
    [anon_sym_NONEINSIDE] = ACTIONS(273),
    [anon_sym_11] = ACTIONS(271),
    [anon_sym_OUTSIDE] = ACTIONS(273),
    [anon_sym_INTERSECTS] = ACTIONS(273),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_RPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(271),
    [anon_sym_RBRACK] = ACTIONS(271),
    [anon_sym_LBRACE] = ACTIONS(271),
    [anon_sym_RBRACE] = ACTIONS(271),
    [anon_sym_DASH_GT] = ACTIONS(271),
    [anon_sym_LT_DASH] = ACTIONS(271),
    [anon_sym_COMMA] = ACTIONS(271),
    [anon_sym_SEMI] = ACTIONS(271),
    [anon_sym_COLON] = ACTIONS(273),
    [anon_sym_any] = ACTIONS(273),
    [anon_sym_array] = ACTIONS(273),
    [anon_sym_bool] = ACTIONS(273),
    [anon_sym_datetime] = ACTIONS(273),
    [anon_sym_decimal] = ACTIONS(273),
    [anon_sym_duration] = ACTIONS(273),
    [anon_sym_float] = ACTIONS(273),
    [anon_sym_int] = ACTIONS(273),
    [anon_sym_number] = ACTIONS(273),
    [anon_sym_object] = ACTIONS(273),
    [anon_sym_string] = ACTIONS(273),
    [anon_sym_record] = ACTIONS(273),
    [anon_sym_geometry] = ACTIONS(273),
    [anon_sym_EDDSA] = ACTIONS(273),
    [anon_sym_ES256] = ACTIONS(273),
    [anon_sym_ES384] = ACTIONS(273),
    [anon_sym_ES512] = ACTIONS(273),
    [anon_sym_HS256] = ACTIONS(273),
    [anon_sym_HS384] = ACTIONS(273),
    [anon_sym_HS512] = ACTIONS(273),
    [anon_sym_PS256] = ACTIONS(273),
    [anon_sym_PS384] = ACTIONS(273),
    [anon_sym_PS512] = ACTIONS(273),
    [anon_sym_RS256] = ACTIONS(273),
    [anon_sym_RS384] = ACTIONS(273),
    [anon_sym_RS512] = ACTIONS(273),
    [aux_sym_function_token1] = ACTIONS(271),
    [aux_sym_function_token2] = ACTIONS(271),
    [anon_sym_count] = ACTIONS(273),
    [aux_sym_function_token3] = ACTIONS(271),
    [aux_sym_function_token4] = ACTIONS(271),
    [aux_sym_function_token5] = ACTIONS(271),
    [aux_sym_function_token6] = ACTIONS(271),
    [aux_sym_function_token7] = ACTIONS(271),
    [aux_sym_function_token8] = ACTIONS(271),
    [aux_sym_function_token9] = ACTIONS(271),
    [aux_sym_function_token10] = ACTIONS(273),
    [aux_sym_function_token11] = ACTIONS(271),
    [aux_sym_function_token12] = ACTIONS(273),
    [aux_sym_function_token13] = ACTIONS(271),
    [aux_sym_function_token14] = ACTIONS(271),
    [aux_sym_function_token15] = ACTIONS(271),
    [aux_sym_function_token16] = ACTIONS(273),
    [anon_sym_true] = ACTIONS(273),
    [anon_sym_false] = ACTIONS(273),
    [anon_sym_TRUE] = ACTIONS(273),
    [anon_sym_FALSE] = ACTIONS(273),
    [anon_sym_null] = ACTIONS(273),
    [anon_sym_NULL] = ACTIONS(273),
    [anon_sym_none] = ACTIONS(273),
    [anon_sym_NONE] = ACTIONS(273),
    [sym_variable] = ACTIONS(271),
    [sym_comment] = ACTIONS(271),
    [anon_sym_SQUOTE] = ACTIONS(271),
    [anon_sym_DQUOTE] = ACTIONS(271),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(275),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(275),
    [aux_sym_future_token1] = ACTIONS(275),
    [aux_sym_casting_token1] = ACTIONS(275),
    [aux_sym_property_token1] = ACTIONS(277),
    [aux_sym_duration_token1] = ACTIONS(277),
    [aux_sym_constant_token1] = ACTIONS(275),
    [aux_sym_number_token1] = ACTIONS(277),
    [aux_sym_record_token1] = ACTIONS(275),
    [aux_sym_record_token2] = ACTIONS(275),
    [sym_keyword] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(275),
    [anon_sym_AND] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(275),
    [anon_sym_OR] = ACTIONS(277),
    [anon_sym_QMARK_QMARK] = ACTIONS(275),
    [anon_sym_QMARK_COLON] = ACTIONS(275),
    [anon_sym_EQ] = ACTIONS(277),
    [anon_sym_IS] = ACTIONS(277),
    [anon_sym_BANG_EQ] = ACTIONS(275),
    [anon_sym_ISNOT] = ACTIONS(275),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [anon_sym_QMARK_EQ] = ACTIONS(275),
    [anon_sym_STAR_EQ] = ACTIONS(275),
    [anon_sym_TILDE] = ACTIONS(275),
    [anon_sym_BANG_TILDE] = ACTIONS(275),
    [anon_sym_QMARK_TILDE] = ACTIONS(275),
    [anon_sym_STAR_TILDE] = ACTIONS(275),
    [anon_sym_LT] = ACTIONS(277),
    [anon_sym_LT_EQ] = ACTIONS(275),
    [anon_sym_GT] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(275),
    [anon_sym_PLUS] = ACTIONS(275),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_STAR] = ACTIONS(277),
    [anon_sym_x] = ACTIONS(277),
    [anon_sym_SLASH] = ACTIONS(277),
    [anon_sym_] = ACTIONS(275),
    [anon_sym_STAR_STAR] = ACTIONS(275),
    [anon_sym_IN] = ACTIONS(277),
    [anon_sym_CONTAINS] = ACTIONS(277),
    [anon_sym_2] = ACTIONS(275),
    [anon_sym_CONTAINSNOT] = ACTIONS(277),
    [anon_sym_3] = ACTIONS(275),
    [anon_sym_CONTAINSALL] = ACTIONS(277),
    [anon_sym_4] = ACTIONS(275),
    [anon_sym_CONTAINSANY] = ACTIONS(277),
    [anon_sym_5] = ACTIONS(275),
    [anon_sym_CONTAINSNONE] = ACTIONS(277),
    [anon_sym_6] = ACTIONS(275),
    [anon_sym_INSIDE] = ACTIONS(277),
    [anon_sym_7] = ACTIONS(275),
    [anon_sym_NOTINSIDE] = ACTIONS(277),
    [anon_sym_NOTIN] = ACTIONS(275),
    [anon_sym_8] = ACTIONS(275),
    [anon_sym_ALLINSIDE] = ACTIONS(277),
    [anon_sym_9] = ACTIONS(275),
    [anon_sym_ANYINSIDE] = ACTIONS(277),
    [anon_sym_10] = ACTIONS(275),
    [anon_sym_NONEINSIDE] = ACTIONS(277),
    [anon_sym_11] = ACTIONS(275),
    [anon_sym_OUTSIDE] = ACTIONS(277),
    [anon_sym_INTERSECTS] = ACTIONS(277),
    [anon_sym_LPAREN] = ACTIONS(275),
    [anon_sym_RPAREN] = ACTIONS(275),
    [anon_sym_LBRACK] = ACTIONS(275),
    [anon_sym_RBRACK] = ACTIONS(275),
    [anon_sym_LBRACE] = ACTIONS(275),
    [anon_sym_RBRACE] = ACTIONS(275),
    [anon_sym_DASH_GT] = ACTIONS(275),
    [anon_sym_LT_DASH] = ACTIONS(275),
    [anon_sym_COMMA] = ACTIONS(275),
    [anon_sym_SEMI] = ACTIONS(275),
    [anon_sym_COLON] = ACTIONS(277),
    [anon_sym_any] = ACTIONS(277),
    [anon_sym_array] = ACTIONS(277),
    [anon_sym_bool] = ACTIONS(277),
    [anon_sym_datetime] = ACTIONS(277),
    [anon_sym_decimal] = ACTIONS(277),
    [anon_sym_duration] = ACTIONS(277),
    [anon_sym_float] = ACTIONS(277),
    [anon_sym_int] = ACTIONS(277),
    [anon_sym_number] = ACTIONS(277),
    [anon_sym_object] = ACTIONS(277),
    [anon_sym_string] = ACTIONS(277),
    [anon_sym_record] = ACTIONS(277),
    [anon_sym_geometry] = ACTIONS(277),
    [anon_sym_EDDSA] = ACTIONS(277),
    [anon_sym_ES256] = ACTIONS(277),
    [anon_sym_ES384] = ACTIONS(277),
    [anon_sym_ES512] = ACTIONS(277),
    [anon_sym_HS256] = ACTIONS(277),
    [anon_sym_HS384] = ACTIONS(277),
    [anon_sym_HS512] = ACTIONS(277),
    [anon_sym_PS256] = ACTIONS(277),
    [anon_sym_PS384] = ACTIONS(277),
    [anon_sym_PS512] = ACTIONS(277),
    [anon_sym_RS256] = ACTIONS(277),
    [anon_sym_RS384] = ACTIONS(277),
    [anon_sym_RS512] = ACTIONS(277),
    [aux_sym_function_token1] = ACTIONS(275),
    [aux_sym_function_token2] = ACTIONS(275),
    [anon_sym_count] = ACTIONS(277),
    [aux_sym_function_token3] = ACTIONS(275),
    [aux_sym_function_token4] = ACTIONS(275),
    [aux_sym_function_token5] = ACTIONS(275),
    [aux_sym_function_token6] = ACTIONS(275),
    [aux_sym_function_token7] = ACTIONS(275),
    [aux_sym_function_token8] = ACTIONS(275),
    [aux_sym_function_token9] = ACTIONS(275),
    [aux_sym_function_token10] = ACTIONS(277),
    [aux_sym_function_token11] = ACTIONS(275),
    [aux_sym_function_token12] = ACTIONS(277),
    [aux_sym_function_token13] = ACTIONS(275),
    [aux_sym_function_token14] = ACTIONS(275),
    [aux_sym_function_token15] = ACTIONS(275),
    [aux_sym_function_token16] = ACTIONS(277),
    [anon_sym_true] = ACTIONS(277),
    [anon_sym_false] = ACTIONS(277),
    [anon_sym_TRUE] = ACTIONS(277),
    [anon_sym_FALSE] = ACTIONS(277),
    [anon_sym_null] = ACTIONS(277),
    [anon_sym_NULL] = ACTIONS(277),
    [anon_sym_none] = ACTIONS(277),
    [anon_sym_NONE] = ACTIONS(277),
    [sym_variable] = ACTIONS(275),
    [sym_comment] = ACTIONS(275),
    [anon_sym_SQUOTE] = ACTIONS(275),
    [anon_sym_DQUOTE] = ACTIONS(275),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(279),
    [aux_sym_future_token1] = ACTIONS(279),
    [aux_sym_casting_token1] = ACTIONS(279),
    [aux_sym_property_token1] = ACTIONS(281),
    [aux_sym_duration_token1] = ACTIONS(281),
    [aux_sym_constant_token1] = ACTIONS(279),
    [aux_sym_number_token1] = ACTIONS(281),
    [aux_sym_record_token1] = ACTIONS(279),
    [aux_sym_record_token2] = ACTIONS(279),
    [sym_keyword] = ACTIONS(281),
    [anon_sym_AMP_AMP] = ACTIONS(279),
    [anon_sym_AND] = ACTIONS(281),
    [anon_sym_PIPE_PIPE] = ACTIONS(279),
    [anon_sym_OR] = ACTIONS(281),
    [anon_sym_QMARK_QMARK] = ACTIONS(279),
    [anon_sym_QMARK_COLON] = ACTIONS(279),
    [anon_sym_EQ] = ACTIONS(281),
    [anon_sym_IS] = ACTIONS(281),
    [anon_sym_BANG_EQ] = ACTIONS(279),
    [anon_sym_ISNOT] = ACTIONS(279),
    [anon_sym_EQ_EQ] = ACTIONS(279),
    [anon_sym_QMARK_EQ] = ACTIONS(279),
    [anon_sym_STAR_EQ] = ACTIONS(279),
    [anon_sym_TILDE] = ACTIONS(279),
    [anon_sym_BANG_TILDE] = ACTIONS(279),
    [anon_sym_QMARK_TILDE] = ACTIONS(279),
    [anon_sym_STAR_TILDE] = ACTIONS(279),
    [anon_sym_LT] = ACTIONS(281),
    [anon_sym_LT_EQ] = ACTIONS(279),
    [anon_sym_GT] = ACTIONS(281),
    [anon_sym_GT_EQ] = ACTIONS(279),
    [anon_sym_PLUS] = ACTIONS(279),
    [anon_sym_DASH] = ACTIONS(281),
    [anon_sym_STAR] = ACTIONS(281),
    [anon_sym_x] = ACTIONS(281),
    [anon_sym_SLASH] = ACTIONS(281),
    [anon_sym_] = ACTIONS(279),
    [anon_sym_STAR_STAR] = ACTIONS(279),
    [anon_sym_IN] = ACTIONS(281),
    [anon_sym_CONTAINS] = ACTIONS(281),
    [anon_sym_2] = ACTIONS(279),
    [anon_sym_CONTAINSNOT] = ACTIONS(281),
    [anon_sym_3] = ACTIONS(279),
    [anon_sym_CONTAINSALL] = ACTIONS(281),
    [anon_sym_4] = ACTIONS(279),
    [anon_sym_CONTAINSANY] = ACTIONS(281),
    [anon_sym_5] = ACTIONS(279),
    [anon_sym_CONTAINSNONE] = ACTIONS(281),
    [anon_sym_6] = ACTIONS(279),
    [anon_sym_INSIDE] = ACTIONS(281),
    [anon_sym_7] = ACTIONS(279),
    [anon_sym_NOTINSIDE] = ACTIONS(281),
    [anon_sym_NOTIN] = ACTIONS(279),
    [anon_sym_8] = ACTIONS(279),
    [anon_sym_ALLINSIDE] = ACTIONS(281),
    [anon_sym_9] = ACTIONS(279),
    [anon_sym_ANYINSIDE] = ACTIONS(281),
    [anon_sym_10] = ACTIONS(279),
    [anon_sym_NONEINSIDE] = ACTIONS(281),
    [anon_sym_11] = ACTIONS(279),
    [anon_sym_OUTSIDE] = ACTIONS(281),
    [anon_sym_INTERSECTS] = ACTIONS(281),
    [anon_sym_LPAREN] = ACTIONS(279),
    [anon_sym_RPAREN] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(279),
    [anon_sym_RBRACK] = ACTIONS(279),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_RBRACE] = ACTIONS(279),
    [anon_sym_DASH_GT] = ACTIONS(279),
    [anon_sym_LT_DASH] = ACTIONS(279),
    [anon_sym_COMMA] = ACTIONS(279),
    [anon_sym_SEMI] = ACTIONS(279),
    [anon_sym_COLON] = ACTIONS(281),
    [anon_sym_any] = ACTIONS(281),
    [anon_sym_array] = ACTIONS(281),
    [anon_sym_bool] = ACTIONS(281),
    [anon_sym_datetime] = ACTIONS(281),
    [anon_sym_decimal] = ACTIONS(281),
    [anon_sym_duration] = ACTIONS(281),
    [anon_sym_float] = ACTIONS(281),
    [anon_sym_int] = ACTIONS(281),
    [anon_sym_number] = ACTIONS(281),
    [anon_sym_object] = ACTIONS(281),
    [anon_sym_string] = ACTIONS(281),
    [anon_sym_record] = ACTIONS(281),
    [anon_sym_geometry] = ACTIONS(281),
    [anon_sym_EDDSA] = ACTIONS(281),
    [anon_sym_ES256] = ACTIONS(281),
    [anon_sym_ES384] = ACTIONS(281),
    [anon_sym_ES512] = ACTIONS(281),
    [anon_sym_HS256] = ACTIONS(281),
    [anon_sym_HS384] = ACTIONS(281),
    [anon_sym_HS512] = ACTIONS(281),
    [anon_sym_PS256] = ACTIONS(281),
    [anon_sym_PS384] = ACTIONS(281),
    [anon_sym_PS512] = ACTIONS(281),
    [anon_sym_RS256] = ACTIONS(281),
    [anon_sym_RS384] = ACTIONS(281),
    [anon_sym_RS512] = ACTIONS(281),
    [aux_sym_function_token1] = ACTIONS(279),
    [aux_sym_function_token2] = ACTIONS(279),
    [anon_sym_count] = ACTIONS(281),
    [aux_sym_function_token3] = ACTIONS(279),
    [aux_sym_function_token4] = ACTIONS(279),
    [aux_sym_function_token5] = ACTIONS(279),
    [aux_sym_function_token6] = ACTIONS(279),
    [aux_sym_function_token7] = ACTIONS(279),
    [aux_sym_function_token8] = ACTIONS(279),
    [aux_sym_function_token9] = ACTIONS(279),
    [aux_sym_function_token10] = ACTIONS(281),
    [aux_sym_function_token11] = ACTIONS(279),
    [aux_sym_function_token12] = ACTIONS(281),
    [aux_sym_function_token13] = ACTIONS(279),
    [aux_sym_function_token14] = ACTIONS(279),
    [aux_sym_function_token15] = ACTIONS(279),
    [aux_sym_function_token16] = ACTIONS(281),
    [anon_sym_true] = ACTIONS(281),
    [anon_sym_false] = ACTIONS(281),
    [anon_sym_TRUE] = ACTIONS(281),
    [anon_sym_FALSE] = ACTIONS(281),
    [anon_sym_null] = ACTIONS(281),
    [anon_sym_NULL] = ACTIONS(281),
    [anon_sym_none] = ACTIONS(281),
    [anon_sym_NONE] = ACTIONS(281),
    [sym_variable] = ACTIONS(279),
    [sym_comment] = ACTIONS(279),
    [anon_sym_SQUOTE] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(279),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(283),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(283),
    [aux_sym_future_token1] = ACTIONS(283),
    [aux_sym_casting_token1] = ACTIONS(283),
    [aux_sym_property_token1] = ACTIONS(285),
    [aux_sym_duration_token1] = ACTIONS(285),
    [aux_sym_constant_token1] = ACTIONS(283),
    [aux_sym_number_token1] = ACTIONS(285),
    [aux_sym_record_token1] = ACTIONS(283),
    [aux_sym_record_token2] = ACTIONS(283),
    [sym_keyword] = ACTIONS(285),
    [anon_sym_AMP_AMP] = ACTIONS(283),
    [anon_sym_AND] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(283),
    [anon_sym_OR] = ACTIONS(285),
    [anon_sym_QMARK_QMARK] = ACTIONS(283),
    [anon_sym_QMARK_COLON] = ACTIONS(283),
    [anon_sym_EQ] = ACTIONS(285),
    [anon_sym_IS] = ACTIONS(285),
    [anon_sym_BANG_EQ] = ACTIONS(283),
    [anon_sym_ISNOT] = ACTIONS(283),
    [anon_sym_EQ_EQ] = ACTIONS(283),
    [anon_sym_QMARK_EQ] = ACTIONS(283),
    [anon_sym_STAR_EQ] = ACTIONS(283),
    [anon_sym_TILDE] = ACTIONS(283),
    [anon_sym_BANG_TILDE] = ACTIONS(283),
    [anon_sym_QMARK_TILDE] = ACTIONS(283),
    [anon_sym_STAR_TILDE] = ACTIONS(283),
    [anon_sym_LT] = ACTIONS(285),
    [anon_sym_LT_EQ] = ACTIONS(283),
    [anon_sym_GT] = ACTIONS(285),
    [anon_sym_GT_EQ] = ACTIONS(283),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_DASH] = ACTIONS(285),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_x] = ACTIONS(285),
    [anon_sym_SLASH] = ACTIONS(285),
    [anon_sym_] = ACTIONS(283),
    [anon_sym_STAR_STAR] = ACTIONS(283),
    [anon_sym_IN] = ACTIONS(285),
    [anon_sym_CONTAINS] = ACTIONS(285),
    [anon_sym_2] = ACTIONS(283),
    [anon_sym_CONTAINSNOT] = ACTIONS(285),
    [anon_sym_3] = ACTIONS(283),
    [anon_sym_CONTAINSALL] = ACTIONS(285),
    [anon_sym_4] = ACTIONS(283),
    [anon_sym_CONTAINSANY] = ACTIONS(285),
    [anon_sym_5] = ACTIONS(283),
    [anon_sym_CONTAINSNONE] = ACTIONS(285),
    [anon_sym_6] = ACTIONS(283),
    [anon_sym_INSIDE] = ACTIONS(285),
    [anon_sym_7] = ACTIONS(283),
    [anon_sym_NOTINSIDE] = ACTIONS(285),
    [anon_sym_NOTIN] = ACTIONS(283),
    [anon_sym_8] = ACTIONS(283),
    [anon_sym_ALLINSIDE] = ACTIONS(285),
    [anon_sym_9] = ACTIONS(283),
    [anon_sym_ANYINSIDE] = ACTIONS(285),
    [anon_sym_10] = ACTIONS(283),
    [anon_sym_NONEINSIDE] = ACTIONS(285),
    [anon_sym_11] = ACTIONS(283),
    [anon_sym_OUTSIDE] = ACTIONS(285),
    [anon_sym_INTERSECTS] = ACTIONS(285),
    [anon_sym_LPAREN] = ACTIONS(283),
    [anon_sym_RPAREN] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(283),
    [anon_sym_RBRACK] = ACTIONS(283),
    [anon_sym_LBRACE] = ACTIONS(283),
    [anon_sym_RBRACE] = ACTIONS(283),
    [anon_sym_DASH_GT] = ACTIONS(283),
    [anon_sym_LT_DASH] = ACTIONS(283),
    [anon_sym_COMMA] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(283),
    [anon_sym_COLON] = ACTIONS(285),
    [anon_sym_any] = ACTIONS(285),
    [anon_sym_array] = ACTIONS(285),
    [anon_sym_bool] = ACTIONS(285),
    [anon_sym_datetime] = ACTIONS(285),
    [anon_sym_decimal] = ACTIONS(285),
    [anon_sym_duration] = ACTIONS(285),
    [anon_sym_float] = ACTIONS(285),
    [anon_sym_int] = ACTIONS(285),
    [anon_sym_number] = ACTIONS(285),
    [anon_sym_object] = ACTIONS(285),
    [anon_sym_string] = ACTIONS(285),
    [anon_sym_record] = ACTIONS(285),
    [anon_sym_geometry] = ACTIONS(285),
    [anon_sym_EDDSA] = ACTIONS(285),
    [anon_sym_ES256] = ACTIONS(285),
    [anon_sym_ES384] = ACTIONS(285),
    [anon_sym_ES512] = ACTIONS(285),
    [anon_sym_HS256] = ACTIONS(285),
    [anon_sym_HS384] = ACTIONS(285),
    [anon_sym_HS512] = ACTIONS(285),
    [anon_sym_PS256] = ACTIONS(285),
    [anon_sym_PS384] = ACTIONS(285),
    [anon_sym_PS512] = ACTIONS(285),
    [anon_sym_RS256] = ACTIONS(285),
    [anon_sym_RS384] = ACTIONS(285),
    [anon_sym_RS512] = ACTIONS(285),
    [aux_sym_function_token1] = ACTIONS(283),
    [aux_sym_function_token2] = ACTIONS(283),
    [anon_sym_count] = ACTIONS(285),
    [aux_sym_function_token3] = ACTIONS(283),
    [aux_sym_function_token4] = ACTIONS(283),
    [aux_sym_function_token5] = ACTIONS(283),
    [aux_sym_function_token6] = ACTIONS(283),
    [aux_sym_function_token7] = ACTIONS(283),
    [aux_sym_function_token8] = ACTIONS(283),
    [aux_sym_function_token9] = ACTIONS(283),
    [aux_sym_function_token10] = ACTIONS(285),
    [aux_sym_function_token11] = ACTIONS(283),
    [aux_sym_function_token12] = ACTIONS(285),
    [aux_sym_function_token13] = ACTIONS(283),
    [aux_sym_function_token14] = ACTIONS(283),
    [aux_sym_function_token15] = ACTIONS(283),
    [aux_sym_function_token16] = ACTIONS(285),
    [anon_sym_true] = ACTIONS(285),
    [anon_sym_false] = ACTIONS(285),
    [anon_sym_TRUE] = ACTIONS(285),
    [anon_sym_FALSE] = ACTIONS(285),
    [anon_sym_null] = ACTIONS(285),
    [anon_sym_NULL] = ACTIONS(285),
    [anon_sym_none] = ACTIONS(285),
    [anon_sym_NONE] = ACTIONS(285),
    [sym_variable] = ACTIONS(283),
    [sym_comment] = ACTIONS(283),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_DQUOTE] = ACTIONS(283),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(287),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(287),
    [aux_sym_future_token1] = ACTIONS(287),
    [aux_sym_casting_token1] = ACTIONS(287),
    [aux_sym_property_token1] = ACTIONS(289),
    [aux_sym_duration_token1] = ACTIONS(289),
    [aux_sym_constant_token1] = ACTIONS(287),
    [aux_sym_number_token1] = ACTIONS(289),
    [aux_sym_record_token1] = ACTIONS(287),
    [aux_sym_record_token2] = ACTIONS(287),
    [sym_keyword] = ACTIONS(289),
    [anon_sym_AMP_AMP] = ACTIONS(287),
    [anon_sym_AND] = ACTIONS(289),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [anon_sym_OR] = ACTIONS(289),
    [anon_sym_QMARK_QMARK] = ACTIONS(287),
    [anon_sym_QMARK_COLON] = ACTIONS(287),
    [anon_sym_EQ] = ACTIONS(289),
    [anon_sym_IS] = ACTIONS(289),
    [anon_sym_BANG_EQ] = ACTIONS(287),
    [anon_sym_ISNOT] = ACTIONS(287),
    [anon_sym_EQ_EQ] = ACTIONS(287),
    [anon_sym_QMARK_EQ] = ACTIONS(287),
    [anon_sym_STAR_EQ] = ACTIONS(287),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_BANG_TILDE] = ACTIONS(287),
    [anon_sym_QMARK_TILDE] = ACTIONS(287),
    [anon_sym_STAR_TILDE] = ACTIONS(287),
    [anon_sym_LT] = ACTIONS(289),
    [anon_sym_LT_EQ] = ACTIONS(287),
    [anon_sym_GT] = ACTIONS(289),
    [anon_sym_GT_EQ] = ACTIONS(287),
    [anon_sym_PLUS] = ACTIONS(287),
    [anon_sym_DASH] = ACTIONS(289),
    [anon_sym_STAR] = ACTIONS(289),
    [anon_sym_x] = ACTIONS(289),
    [anon_sym_SLASH] = ACTIONS(289),
    [anon_sym_] = ACTIONS(287),
    [anon_sym_STAR_STAR] = ACTIONS(287),
    [anon_sym_IN] = ACTIONS(289),
    [anon_sym_CONTAINS] = ACTIONS(289),
    [anon_sym_2] = ACTIONS(287),
    [anon_sym_CONTAINSNOT] = ACTIONS(289),
    [anon_sym_3] = ACTIONS(287),
    [anon_sym_CONTAINSALL] = ACTIONS(289),
    [anon_sym_4] = ACTIONS(287),
    [anon_sym_CONTAINSANY] = ACTIONS(289),
    [anon_sym_5] = ACTIONS(287),
    [anon_sym_CONTAINSNONE] = ACTIONS(289),
    [anon_sym_6] = ACTIONS(287),
    [anon_sym_INSIDE] = ACTIONS(289),
    [anon_sym_7] = ACTIONS(287),
    [anon_sym_NOTINSIDE] = ACTIONS(289),
    [anon_sym_NOTIN] = ACTIONS(287),
    [anon_sym_8] = ACTIONS(287),
    [anon_sym_ALLINSIDE] = ACTIONS(289),
    [anon_sym_9] = ACTIONS(287),
    [anon_sym_ANYINSIDE] = ACTIONS(289),
    [anon_sym_10] = ACTIONS(287),
    [anon_sym_NONEINSIDE] = ACTIONS(289),
    [anon_sym_11] = ACTIONS(287),
    [anon_sym_OUTSIDE] = ACTIONS(289),
    [anon_sym_INTERSECTS] = ACTIONS(289),
    [anon_sym_LPAREN] = ACTIONS(287),
    [anon_sym_RPAREN] = ACTIONS(287),
    [anon_sym_LBRACK] = ACTIONS(287),
    [anon_sym_RBRACK] = ACTIONS(287),
    [anon_sym_LBRACE] = ACTIONS(287),
    [anon_sym_RBRACE] = ACTIONS(287),
    [anon_sym_DASH_GT] = ACTIONS(287),
    [anon_sym_LT_DASH] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(287),
    [anon_sym_SEMI] = ACTIONS(287),
    [anon_sym_COLON] = ACTIONS(289),
    [anon_sym_any] = ACTIONS(289),
    [anon_sym_array] = ACTIONS(289),
    [anon_sym_bool] = ACTIONS(289),
    [anon_sym_datetime] = ACTIONS(289),
    [anon_sym_decimal] = ACTIONS(289),
    [anon_sym_duration] = ACTIONS(289),
    [anon_sym_float] = ACTIONS(289),
    [anon_sym_int] = ACTIONS(289),
    [anon_sym_number] = ACTIONS(289),
    [anon_sym_object] = ACTIONS(289),
    [anon_sym_string] = ACTIONS(289),
    [anon_sym_record] = ACTIONS(289),
    [anon_sym_geometry] = ACTIONS(289),
    [anon_sym_EDDSA] = ACTIONS(289),
    [anon_sym_ES256] = ACTIONS(289),
    [anon_sym_ES384] = ACTIONS(289),
    [anon_sym_ES512] = ACTIONS(289),
    [anon_sym_HS256] = ACTIONS(289),
    [anon_sym_HS384] = ACTIONS(289),
    [anon_sym_HS512] = ACTIONS(289),
    [anon_sym_PS256] = ACTIONS(289),
    [anon_sym_PS384] = ACTIONS(289),
    [anon_sym_PS512] = ACTIONS(289),
    [anon_sym_RS256] = ACTIONS(289),
    [anon_sym_RS384] = ACTIONS(289),
    [anon_sym_RS512] = ACTIONS(289),
    [aux_sym_function_token1] = ACTIONS(287),
    [aux_sym_function_token2] = ACTIONS(287),
    [anon_sym_count] = ACTIONS(289),
    [aux_sym_function_token3] = ACTIONS(287),
    [aux_sym_function_token4] = ACTIONS(287),
    [aux_sym_function_token5] = ACTIONS(287),
    [aux_sym_function_token6] = ACTIONS(287),
    [aux_sym_function_token7] = ACTIONS(287),
    [aux_sym_function_token8] = ACTIONS(287),
    [aux_sym_function_token9] = ACTIONS(287),
    [aux_sym_function_token10] = ACTIONS(289),
    [aux_sym_function_token11] = ACTIONS(287),
    [aux_sym_function_token12] = ACTIONS(289),
    [aux_sym_function_token13] = ACTIONS(287),
    [aux_sym_function_token14] = ACTIONS(287),
    [aux_sym_function_token15] = ACTIONS(287),
    [aux_sym_function_token16] = ACTIONS(289),
    [anon_sym_true] = ACTIONS(289),
    [anon_sym_false] = ACTIONS(289),
    [anon_sym_TRUE] = ACTIONS(289),
    [anon_sym_FALSE] = ACTIONS(289),
    [anon_sym_null] = ACTIONS(289),
    [anon_sym_NULL] = ACTIONS(289),
    [anon_sym_none] = ACTIONS(289),
    [anon_sym_NONE] = ACTIONS(289),
    [sym_variable] = ACTIONS(287),
    [sym_comment] = ACTIONS(287),
    [anon_sym_SQUOTE] = ACTIONS(287),
    [anon_sym_DQUOTE] = ACTIONS(287),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(291),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(291),
    [aux_sym_future_token1] = ACTIONS(291),
    [aux_sym_casting_token1] = ACTIONS(291),
    [aux_sym_property_token1] = ACTIONS(293),
    [aux_sym_duration_token1] = ACTIONS(293),
    [aux_sym_constant_token1] = ACTIONS(291),
    [aux_sym_number_token1] = ACTIONS(293),
    [aux_sym_record_token1] = ACTIONS(291),
    [aux_sym_record_token2] = ACTIONS(291),
    [sym_keyword] = ACTIONS(293),
    [anon_sym_AMP_AMP] = ACTIONS(291),
    [anon_sym_AND] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(291),
    [anon_sym_OR] = ACTIONS(293),
    [anon_sym_QMARK_QMARK] = ACTIONS(291),
    [anon_sym_QMARK_COLON] = ACTIONS(291),
    [anon_sym_EQ] = ACTIONS(293),
    [anon_sym_IS] = ACTIONS(293),
    [anon_sym_BANG_EQ] = ACTIONS(291),
    [anon_sym_ISNOT] = ACTIONS(291),
    [anon_sym_EQ_EQ] = ACTIONS(291),
    [anon_sym_QMARK_EQ] = ACTIONS(291),
    [anon_sym_STAR_EQ] = ACTIONS(291),
    [anon_sym_TILDE] = ACTIONS(291),
    [anon_sym_BANG_TILDE] = ACTIONS(291),
    [anon_sym_QMARK_TILDE] = ACTIONS(291),
    [anon_sym_STAR_TILDE] = ACTIONS(291),
    [anon_sym_LT] = ACTIONS(293),
    [anon_sym_LT_EQ] = ACTIONS(291),
    [anon_sym_GT] = ACTIONS(293),
    [anon_sym_GT_EQ] = ACTIONS(291),
    [anon_sym_PLUS] = ACTIONS(291),
    [anon_sym_DASH] = ACTIONS(293),
    [anon_sym_STAR] = ACTIONS(293),
    [anon_sym_x] = ACTIONS(293),
    [anon_sym_SLASH] = ACTIONS(293),
    [anon_sym_] = ACTIONS(291),
    [anon_sym_STAR_STAR] = ACTIONS(291),
    [anon_sym_IN] = ACTIONS(293),
    [anon_sym_CONTAINS] = ACTIONS(293),
    [anon_sym_2] = ACTIONS(291),
    [anon_sym_CONTAINSNOT] = ACTIONS(293),
    [anon_sym_3] = ACTIONS(291),
    [anon_sym_CONTAINSALL] = ACTIONS(293),
    [anon_sym_4] = ACTIONS(291),
    [anon_sym_CONTAINSANY] = ACTIONS(293),
    [anon_sym_5] = ACTIONS(291),
    [anon_sym_CONTAINSNONE] = ACTIONS(293),
    [anon_sym_6] = ACTIONS(291),
    [anon_sym_INSIDE] = ACTIONS(293),
    [anon_sym_7] = ACTIONS(291),
    [anon_sym_NOTINSIDE] = ACTIONS(293),
    [anon_sym_NOTIN] = ACTIONS(291),
    [anon_sym_8] = ACTIONS(291),
    [anon_sym_ALLINSIDE] = ACTIONS(293),
    [anon_sym_9] = ACTIONS(291),
    [anon_sym_ANYINSIDE] = ACTIONS(293),
    [anon_sym_10] = ACTIONS(291),
    [anon_sym_NONEINSIDE] = ACTIONS(293),
    [anon_sym_11] = ACTIONS(291),
    [anon_sym_OUTSIDE] = ACTIONS(293),
    [anon_sym_INTERSECTS] = ACTIONS(293),
    [anon_sym_LPAREN] = ACTIONS(291),
    [anon_sym_RPAREN] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(291),
    [anon_sym_RBRACK] = ACTIONS(291),
    [anon_sym_LBRACE] = ACTIONS(291),
    [anon_sym_RBRACE] = ACTIONS(291),
    [anon_sym_DASH_GT] = ACTIONS(291),
    [anon_sym_LT_DASH] = ACTIONS(291),
    [anon_sym_COMMA] = ACTIONS(291),
    [anon_sym_SEMI] = ACTIONS(291),
    [anon_sym_COLON] = ACTIONS(293),
    [anon_sym_any] = ACTIONS(293),
    [anon_sym_array] = ACTIONS(293),
    [anon_sym_bool] = ACTIONS(293),
    [anon_sym_datetime] = ACTIONS(293),
    [anon_sym_decimal] = ACTIONS(293),
    [anon_sym_duration] = ACTIONS(293),
    [anon_sym_float] = ACTIONS(293),
    [anon_sym_int] = ACTIONS(293),
    [anon_sym_number] = ACTIONS(293),
    [anon_sym_object] = ACTIONS(293),
    [anon_sym_string] = ACTIONS(293),
    [anon_sym_record] = ACTIONS(293),
    [anon_sym_geometry] = ACTIONS(293),
    [anon_sym_EDDSA] = ACTIONS(293),
    [anon_sym_ES256] = ACTIONS(293),
    [anon_sym_ES384] = ACTIONS(293),
    [anon_sym_ES512] = ACTIONS(293),
    [anon_sym_HS256] = ACTIONS(293),
    [anon_sym_HS384] = ACTIONS(293),
    [anon_sym_HS512] = ACTIONS(293),
    [anon_sym_PS256] = ACTIONS(293),
    [anon_sym_PS384] = ACTIONS(293),
    [anon_sym_PS512] = ACTIONS(293),
    [anon_sym_RS256] = ACTIONS(293),
    [anon_sym_RS384] = ACTIONS(293),
    [anon_sym_RS512] = ACTIONS(293),
    [aux_sym_function_token1] = ACTIONS(291),
    [aux_sym_function_token2] = ACTIONS(291),
    [anon_sym_count] = ACTIONS(293),
    [aux_sym_function_token3] = ACTIONS(291),
    [aux_sym_function_token4] = ACTIONS(291),
    [aux_sym_function_token5] = ACTIONS(291),
    [aux_sym_function_token6] = ACTIONS(291),
    [aux_sym_function_token7] = ACTIONS(291),
    [aux_sym_function_token8] = ACTIONS(291),
    [aux_sym_function_token9] = ACTIONS(291),
    [aux_sym_function_token10] = ACTIONS(293),
    [aux_sym_function_token11] = ACTIONS(291),
    [aux_sym_function_token12] = ACTIONS(293),
    [aux_sym_function_token13] = ACTIONS(291),
    [aux_sym_function_token14] = ACTIONS(291),
    [aux_sym_function_token15] = ACTIONS(291),
    [aux_sym_function_token16] = ACTIONS(293),
    [anon_sym_true] = ACTIONS(293),
    [anon_sym_false] = ACTIONS(293),
    [anon_sym_TRUE] = ACTIONS(293),
    [anon_sym_FALSE] = ACTIONS(293),
    [anon_sym_null] = ACTIONS(293),
    [anon_sym_NULL] = ACTIONS(293),
    [anon_sym_none] = ACTIONS(293),
    [anon_sym_NONE] = ACTIONS(293),
    [sym_variable] = ACTIONS(291),
    [sym_comment] = ACTIONS(291),
    [anon_sym_SQUOTE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(291),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(295),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(295),
    [aux_sym_future_token1] = ACTIONS(295),
    [aux_sym_casting_token1] = ACTIONS(295),
    [aux_sym_property_token1] = ACTIONS(297),
    [aux_sym_duration_token1] = ACTIONS(297),
    [aux_sym_constant_token1] = ACTIONS(295),
    [aux_sym_number_token1] = ACTIONS(297),
    [aux_sym_record_token1] = ACTIONS(295),
    [aux_sym_record_token2] = ACTIONS(295),
    [sym_keyword] = ACTIONS(297),
    [anon_sym_AMP_AMP] = ACTIONS(295),
    [anon_sym_AND] = ACTIONS(297),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_OR] = ACTIONS(297),
    [anon_sym_QMARK_QMARK] = ACTIONS(295),
    [anon_sym_QMARK_COLON] = ACTIONS(295),
    [anon_sym_EQ] = ACTIONS(297),
    [anon_sym_IS] = ACTIONS(297),
    [anon_sym_BANG_EQ] = ACTIONS(295),
    [anon_sym_ISNOT] = ACTIONS(295),
    [anon_sym_EQ_EQ] = ACTIONS(295),
    [anon_sym_QMARK_EQ] = ACTIONS(295),
    [anon_sym_STAR_EQ] = ACTIONS(295),
    [anon_sym_TILDE] = ACTIONS(295),
    [anon_sym_BANG_TILDE] = ACTIONS(295),
    [anon_sym_QMARK_TILDE] = ACTIONS(295),
    [anon_sym_STAR_TILDE] = ACTIONS(295),
    [anon_sym_LT] = ACTIONS(297),
    [anon_sym_LT_EQ] = ACTIONS(295),
    [anon_sym_GT] = ACTIONS(297),
    [anon_sym_GT_EQ] = ACTIONS(295),
    [anon_sym_PLUS] = ACTIONS(295),
    [anon_sym_DASH] = ACTIONS(297),
    [anon_sym_STAR] = ACTIONS(297),
    [anon_sym_x] = ACTIONS(297),
    [anon_sym_SLASH] = ACTIONS(297),
    [anon_sym_] = ACTIONS(295),
    [anon_sym_STAR_STAR] = ACTIONS(295),
    [anon_sym_IN] = ACTIONS(297),
    [anon_sym_CONTAINS] = ACTIONS(297),
    [anon_sym_2] = ACTIONS(295),
    [anon_sym_CONTAINSNOT] = ACTIONS(297),
    [anon_sym_3] = ACTIONS(295),
    [anon_sym_CONTAINSALL] = ACTIONS(297),
    [anon_sym_4] = ACTIONS(295),
    [anon_sym_CONTAINSANY] = ACTIONS(297),
    [anon_sym_5] = ACTIONS(295),
    [anon_sym_CONTAINSNONE] = ACTIONS(297),
    [anon_sym_6] = ACTIONS(295),
    [anon_sym_INSIDE] = ACTIONS(297),
    [anon_sym_7] = ACTIONS(295),
    [anon_sym_NOTINSIDE] = ACTIONS(297),
    [anon_sym_NOTIN] = ACTIONS(295),
    [anon_sym_8] = ACTIONS(295),
    [anon_sym_ALLINSIDE] = ACTIONS(297),
    [anon_sym_9] = ACTIONS(295),
    [anon_sym_ANYINSIDE] = ACTIONS(297),
    [anon_sym_10] = ACTIONS(295),
    [anon_sym_NONEINSIDE] = ACTIONS(297),
    [anon_sym_11] = ACTIONS(295),
    [anon_sym_OUTSIDE] = ACTIONS(297),
    [anon_sym_INTERSECTS] = ACTIONS(297),
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_RPAREN] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(295),
    [anon_sym_RBRACK] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(295),
    [anon_sym_RBRACE] = ACTIONS(295),
    [anon_sym_DASH_GT] = ACTIONS(295),
    [anon_sym_LT_DASH] = ACTIONS(295),
    [anon_sym_COMMA] = ACTIONS(295),
    [anon_sym_SEMI] = ACTIONS(295),
    [anon_sym_COLON] = ACTIONS(297),
    [anon_sym_any] = ACTIONS(297),
    [anon_sym_array] = ACTIONS(297),
    [anon_sym_bool] = ACTIONS(297),
    [anon_sym_datetime] = ACTIONS(297),
    [anon_sym_decimal] = ACTIONS(297),
    [anon_sym_duration] = ACTIONS(297),
    [anon_sym_float] = ACTIONS(297),
    [anon_sym_int] = ACTIONS(297),
    [anon_sym_number] = ACTIONS(297),
    [anon_sym_object] = ACTIONS(297),
    [anon_sym_string] = ACTIONS(297),
    [anon_sym_record] = ACTIONS(297),
    [anon_sym_geometry] = ACTIONS(297),
    [anon_sym_EDDSA] = ACTIONS(297),
    [anon_sym_ES256] = ACTIONS(297),
    [anon_sym_ES384] = ACTIONS(297),
    [anon_sym_ES512] = ACTIONS(297),
    [anon_sym_HS256] = ACTIONS(297),
    [anon_sym_HS384] = ACTIONS(297),
    [anon_sym_HS512] = ACTIONS(297),
    [anon_sym_PS256] = ACTIONS(297),
    [anon_sym_PS384] = ACTIONS(297),
    [anon_sym_PS512] = ACTIONS(297),
    [anon_sym_RS256] = ACTIONS(297),
    [anon_sym_RS384] = ACTIONS(297),
    [anon_sym_RS512] = ACTIONS(297),
    [aux_sym_function_token1] = ACTIONS(295),
    [aux_sym_function_token2] = ACTIONS(295),
    [anon_sym_count] = ACTIONS(297),
    [aux_sym_function_token3] = ACTIONS(295),
    [aux_sym_function_token4] = ACTIONS(295),
    [aux_sym_function_token5] = ACTIONS(295),
    [aux_sym_function_token6] = ACTIONS(295),
    [aux_sym_function_token7] = ACTIONS(295),
    [aux_sym_function_token8] = ACTIONS(295),
    [aux_sym_function_token9] = ACTIONS(295),
    [aux_sym_function_token10] = ACTIONS(297),
    [aux_sym_function_token11] = ACTIONS(295),
    [aux_sym_function_token12] = ACTIONS(297),
    [aux_sym_function_token13] = ACTIONS(295),
    [aux_sym_function_token14] = ACTIONS(295),
    [aux_sym_function_token15] = ACTIONS(295),
    [aux_sym_function_token16] = ACTIONS(297),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_false] = ACTIONS(297),
    [anon_sym_TRUE] = ACTIONS(297),
    [anon_sym_FALSE] = ACTIONS(297),
    [anon_sym_null] = ACTIONS(297),
    [anon_sym_NULL] = ACTIONS(297),
    [anon_sym_none] = ACTIONS(297),
    [anon_sym_NONE] = ACTIONS(297),
    [sym_variable] = ACTIONS(295),
    [sym_comment] = ACTIONS(295),
    [anon_sym_SQUOTE] = ACTIONS(295),
    [anon_sym_DQUOTE] = ACTIONS(295),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(299),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(299),
    [aux_sym_future_token1] = ACTIONS(299),
    [aux_sym_casting_token1] = ACTIONS(299),
    [aux_sym_property_token1] = ACTIONS(301),
    [aux_sym_duration_token1] = ACTIONS(301),
    [aux_sym_constant_token1] = ACTIONS(299),
    [aux_sym_number_token1] = ACTIONS(301),
    [aux_sym_record_token1] = ACTIONS(299),
    [aux_sym_record_token2] = ACTIONS(299),
    [sym_keyword] = ACTIONS(301),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [anon_sym_AND] = ACTIONS(301),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_OR] = ACTIONS(301),
    [anon_sym_QMARK_QMARK] = ACTIONS(299),
    [anon_sym_QMARK_COLON] = ACTIONS(299),
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_IS] = ACTIONS(301),
    [anon_sym_BANG_EQ] = ACTIONS(299),
    [anon_sym_ISNOT] = ACTIONS(299),
    [anon_sym_EQ_EQ] = ACTIONS(299),
    [anon_sym_QMARK_EQ] = ACTIONS(299),
    [anon_sym_STAR_EQ] = ACTIONS(299),
    [anon_sym_TILDE] = ACTIONS(299),
    [anon_sym_BANG_TILDE] = ACTIONS(299),
    [anon_sym_QMARK_TILDE] = ACTIONS(299),
    [anon_sym_STAR_TILDE] = ACTIONS(299),
    [anon_sym_LT] = ACTIONS(301),
    [anon_sym_LT_EQ] = ACTIONS(299),
    [anon_sym_GT] = ACTIONS(301),
    [anon_sym_GT_EQ] = ACTIONS(299),
    [anon_sym_PLUS] = ACTIONS(299),
    [anon_sym_DASH] = ACTIONS(301),
    [anon_sym_STAR] = ACTIONS(301),
    [anon_sym_x] = ACTIONS(301),
    [anon_sym_SLASH] = ACTIONS(301),
    [anon_sym_] = ACTIONS(299),
    [anon_sym_STAR_STAR] = ACTIONS(299),
    [anon_sym_IN] = ACTIONS(301),
    [anon_sym_CONTAINS] = ACTIONS(301),
    [anon_sym_2] = ACTIONS(299),
    [anon_sym_CONTAINSNOT] = ACTIONS(301),
    [anon_sym_3] = ACTIONS(299),
    [anon_sym_CONTAINSALL] = ACTIONS(301),
    [anon_sym_4] = ACTIONS(299),
    [anon_sym_CONTAINSANY] = ACTIONS(301),
    [anon_sym_5] = ACTIONS(299),
    [anon_sym_CONTAINSNONE] = ACTIONS(301),
    [anon_sym_6] = ACTIONS(299),
    [anon_sym_INSIDE] = ACTIONS(301),
    [anon_sym_7] = ACTIONS(299),
    [anon_sym_NOTINSIDE] = ACTIONS(301),
    [anon_sym_NOTIN] = ACTIONS(299),
    [anon_sym_8] = ACTIONS(299),
    [anon_sym_ALLINSIDE] = ACTIONS(301),
    [anon_sym_9] = ACTIONS(299),
    [anon_sym_ANYINSIDE] = ACTIONS(301),
    [anon_sym_10] = ACTIONS(299),
    [anon_sym_NONEINSIDE] = ACTIONS(301),
    [anon_sym_11] = ACTIONS(299),
    [anon_sym_OUTSIDE] = ACTIONS(301),
    [anon_sym_INTERSECTS] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(299),
    [anon_sym_RPAREN] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(299),
    [anon_sym_RBRACK] = ACTIONS(299),
    [anon_sym_LBRACE] = ACTIONS(299),
    [anon_sym_RBRACE] = ACTIONS(299),
    [anon_sym_DASH_GT] = ACTIONS(299),
    [anon_sym_LT_DASH] = ACTIONS(299),
    [anon_sym_COMMA] = ACTIONS(299),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_COLON] = ACTIONS(301),
    [anon_sym_any] = ACTIONS(301),
    [anon_sym_array] = ACTIONS(301),
    [anon_sym_bool] = ACTIONS(301),
    [anon_sym_datetime] = ACTIONS(301),
    [anon_sym_decimal] = ACTIONS(301),
    [anon_sym_duration] = ACTIONS(301),
    [anon_sym_float] = ACTIONS(301),
    [anon_sym_int] = ACTIONS(301),
    [anon_sym_number] = ACTIONS(301),
    [anon_sym_object] = ACTIONS(301),
    [anon_sym_string] = ACTIONS(301),
    [anon_sym_record] = ACTIONS(301),
    [anon_sym_geometry] = ACTIONS(301),
    [anon_sym_EDDSA] = ACTIONS(301),
    [anon_sym_ES256] = ACTIONS(301),
    [anon_sym_ES384] = ACTIONS(301),
    [anon_sym_ES512] = ACTIONS(301),
    [anon_sym_HS256] = ACTIONS(301),
    [anon_sym_HS384] = ACTIONS(301),
    [anon_sym_HS512] = ACTIONS(301),
    [anon_sym_PS256] = ACTIONS(301),
    [anon_sym_PS384] = ACTIONS(301),
    [anon_sym_PS512] = ACTIONS(301),
    [anon_sym_RS256] = ACTIONS(301),
    [anon_sym_RS384] = ACTIONS(301),
    [anon_sym_RS512] = ACTIONS(301),
    [aux_sym_function_token1] = ACTIONS(299),
    [aux_sym_function_token2] = ACTIONS(299),
    [anon_sym_count] = ACTIONS(301),
    [aux_sym_function_token3] = ACTIONS(299),
    [aux_sym_function_token4] = ACTIONS(299),
    [aux_sym_function_token5] = ACTIONS(299),
    [aux_sym_function_token6] = ACTIONS(299),
    [aux_sym_function_token7] = ACTIONS(299),
    [aux_sym_function_token8] = ACTIONS(299),
    [aux_sym_function_token9] = ACTIONS(299),
    [aux_sym_function_token10] = ACTIONS(301),
    [aux_sym_function_token11] = ACTIONS(299),
    [aux_sym_function_token12] = ACTIONS(301),
    [aux_sym_function_token13] = ACTIONS(299),
    [aux_sym_function_token14] = ACTIONS(299),
    [aux_sym_function_token15] = ACTIONS(299),
    [aux_sym_function_token16] = ACTIONS(301),
    [anon_sym_true] = ACTIONS(301),
    [anon_sym_false] = ACTIONS(301),
    [anon_sym_TRUE] = ACTIONS(301),
    [anon_sym_FALSE] = ACTIONS(301),
    [anon_sym_null] = ACTIONS(301),
    [anon_sym_NULL] = ACTIONS(301),
    [anon_sym_none] = ACTIONS(301),
    [anon_sym_NONE] = ACTIONS(301),
    [sym_variable] = ACTIONS(299),
    [sym_comment] = ACTIONS(299),
    [anon_sym_SQUOTE] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(299),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(303),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(303),
    [aux_sym_future_token1] = ACTIONS(303),
    [aux_sym_casting_token1] = ACTIONS(303),
    [aux_sym_property_token1] = ACTIONS(305),
    [aux_sym_duration_token1] = ACTIONS(305),
    [aux_sym_constant_token1] = ACTIONS(303),
    [aux_sym_number_token1] = ACTIONS(305),
    [aux_sym_record_token1] = ACTIONS(303),
    [aux_sym_record_token2] = ACTIONS(303),
    [sym_keyword] = ACTIONS(305),
    [anon_sym_AMP_AMP] = ACTIONS(303),
    [anon_sym_AND] = ACTIONS(305),
    [anon_sym_PIPE_PIPE] = ACTIONS(303),
    [anon_sym_OR] = ACTIONS(305),
    [anon_sym_QMARK_QMARK] = ACTIONS(303),
    [anon_sym_QMARK_COLON] = ACTIONS(303),
    [anon_sym_EQ] = ACTIONS(305),
    [anon_sym_IS] = ACTIONS(305),
    [anon_sym_BANG_EQ] = ACTIONS(303),
    [anon_sym_ISNOT] = ACTIONS(303),
    [anon_sym_EQ_EQ] = ACTIONS(303),
    [anon_sym_QMARK_EQ] = ACTIONS(303),
    [anon_sym_STAR_EQ] = ACTIONS(303),
    [anon_sym_TILDE] = ACTIONS(303),
    [anon_sym_BANG_TILDE] = ACTIONS(303),
    [anon_sym_QMARK_TILDE] = ACTIONS(303),
    [anon_sym_STAR_TILDE] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(305),
    [anon_sym_LT_EQ] = ACTIONS(303),
    [anon_sym_GT] = ACTIONS(305),
    [anon_sym_GT_EQ] = ACTIONS(303),
    [anon_sym_PLUS] = ACTIONS(303),
    [anon_sym_DASH] = ACTIONS(305),
    [anon_sym_STAR] = ACTIONS(305),
    [anon_sym_x] = ACTIONS(305),
    [anon_sym_SLASH] = ACTIONS(305),
    [anon_sym_] = ACTIONS(303),
    [anon_sym_STAR_STAR] = ACTIONS(303),
    [anon_sym_IN] = ACTIONS(305),
    [anon_sym_CONTAINS] = ACTIONS(305),
    [anon_sym_2] = ACTIONS(303),
    [anon_sym_CONTAINSNOT] = ACTIONS(305),
    [anon_sym_3] = ACTIONS(303),
    [anon_sym_CONTAINSALL] = ACTIONS(305),
    [anon_sym_4] = ACTIONS(303),
    [anon_sym_CONTAINSANY] = ACTIONS(305),
    [anon_sym_5] = ACTIONS(303),
    [anon_sym_CONTAINSNONE] = ACTIONS(305),
    [anon_sym_6] = ACTIONS(303),
    [anon_sym_INSIDE] = ACTIONS(305),
    [anon_sym_7] = ACTIONS(303),
    [anon_sym_NOTINSIDE] = ACTIONS(305),
    [anon_sym_NOTIN] = ACTIONS(303),
    [anon_sym_8] = ACTIONS(303),
    [anon_sym_ALLINSIDE] = ACTIONS(305),
    [anon_sym_9] = ACTIONS(303),
    [anon_sym_ANYINSIDE] = ACTIONS(305),
    [anon_sym_10] = ACTIONS(303),
    [anon_sym_NONEINSIDE] = ACTIONS(305),
    [anon_sym_11] = ACTIONS(303),
    [anon_sym_OUTSIDE] = ACTIONS(305),
    [anon_sym_INTERSECTS] = ACTIONS(305),
    [anon_sym_LPAREN] = ACTIONS(303),
    [anon_sym_RPAREN] = ACTIONS(303),
    [anon_sym_LBRACK] = ACTIONS(303),
    [anon_sym_RBRACK] = ACTIONS(303),
    [anon_sym_LBRACE] = ACTIONS(303),
    [anon_sym_RBRACE] = ACTIONS(303),
    [anon_sym_DASH_GT] = ACTIONS(303),
    [anon_sym_LT_DASH] = ACTIONS(303),
    [anon_sym_COMMA] = ACTIONS(303),
    [anon_sym_SEMI] = ACTIONS(303),
    [anon_sym_COLON] = ACTIONS(305),
    [anon_sym_any] = ACTIONS(305),
    [anon_sym_array] = ACTIONS(305),
    [anon_sym_bool] = ACTIONS(305),
    [anon_sym_datetime] = ACTIONS(305),
    [anon_sym_decimal] = ACTIONS(305),
    [anon_sym_duration] = ACTIONS(305),
    [anon_sym_float] = ACTIONS(305),
    [anon_sym_int] = ACTIONS(305),
    [anon_sym_number] = ACTIONS(305),
    [anon_sym_object] = ACTIONS(305),
    [anon_sym_string] = ACTIONS(305),
    [anon_sym_record] = ACTIONS(305),
    [anon_sym_geometry] = ACTIONS(305),
    [anon_sym_EDDSA] = ACTIONS(305),
    [anon_sym_ES256] = ACTIONS(305),
    [anon_sym_ES384] = ACTIONS(305),
    [anon_sym_ES512] = ACTIONS(305),
    [anon_sym_HS256] = ACTIONS(305),
    [anon_sym_HS384] = ACTIONS(305),
    [anon_sym_HS512] = ACTIONS(305),
    [anon_sym_PS256] = ACTIONS(305),
    [anon_sym_PS384] = ACTIONS(305),
    [anon_sym_PS512] = ACTIONS(305),
    [anon_sym_RS256] = ACTIONS(305),
    [anon_sym_RS384] = ACTIONS(305),
    [anon_sym_RS512] = ACTIONS(305),
    [aux_sym_function_token1] = ACTIONS(303),
    [aux_sym_function_token2] = ACTIONS(303),
    [anon_sym_count] = ACTIONS(305),
    [aux_sym_function_token3] = ACTIONS(303),
    [aux_sym_function_token4] = ACTIONS(303),
    [aux_sym_function_token5] = ACTIONS(303),
    [aux_sym_function_token6] = ACTIONS(303),
    [aux_sym_function_token7] = ACTIONS(303),
    [aux_sym_function_token8] = ACTIONS(303),
    [aux_sym_function_token9] = ACTIONS(303),
    [aux_sym_function_token10] = ACTIONS(305),
    [aux_sym_function_token11] = ACTIONS(303),
    [aux_sym_function_token12] = ACTIONS(305),
    [aux_sym_function_token13] = ACTIONS(303),
    [aux_sym_function_token14] = ACTIONS(303),
    [aux_sym_function_token15] = ACTIONS(303),
    [aux_sym_function_token16] = ACTIONS(305),
    [anon_sym_true] = ACTIONS(305),
    [anon_sym_false] = ACTIONS(305),
    [anon_sym_TRUE] = ACTIONS(305),
    [anon_sym_FALSE] = ACTIONS(305),
    [anon_sym_null] = ACTIONS(305),
    [anon_sym_NULL] = ACTIONS(305),
    [anon_sym_none] = ACTIONS(305),
    [anon_sym_NONE] = ACTIONS(305),
    [sym_variable] = ACTIONS(303),
    [sym_comment] = ACTIONS(303),
    [anon_sym_SQUOTE] = ACTIONS(303),
    [anon_sym_DQUOTE] = ACTIONS(303),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(307),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(307),
    [aux_sym_future_token1] = ACTIONS(307),
    [aux_sym_casting_token1] = ACTIONS(307),
    [aux_sym_property_token1] = ACTIONS(309),
    [aux_sym_duration_token1] = ACTIONS(309),
    [aux_sym_constant_token1] = ACTIONS(307),
    [aux_sym_number_token1] = ACTIONS(309),
    [aux_sym_record_token1] = ACTIONS(307),
    [aux_sym_record_token2] = ACTIONS(307),
    [sym_keyword] = ACTIONS(309),
    [anon_sym_AMP_AMP] = ACTIONS(307),
    [anon_sym_AND] = ACTIONS(309),
    [anon_sym_PIPE_PIPE] = ACTIONS(307),
    [anon_sym_OR] = ACTIONS(309),
    [anon_sym_QMARK_QMARK] = ACTIONS(307),
    [anon_sym_QMARK_COLON] = ACTIONS(307),
    [anon_sym_EQ] = ACTIONS(309),
    [anon_sym_IS] = ACTIONS(309),
    [anon_sym_BANG_EQ] = ACTIONS(307),
    [anon_sym_ISNOT] = ACTIONS(307),
    [anon_sym_EQ_EQ] = ACTIONS(307),
    [anon_sym_QMARK_EQ] = ACTIONS(307),
    [anon_sym_STAR_EQ] = ACTIONS(307),
    [anon_sym_TILDE] = ACTIONS(307),
    [anon_sym_BANG_TILDE] = ACTIONS(307),
    [anon_sym_QMARK_TILDE] = ACTIONS(307),
    [anon_sym_STAR_TILDE] = ACTIONS(307),
    [anon_sym_LT] = ACTIONS(309),
    [anon_sym_LT_EQ] = ACTIONS(307),
    [anon_sym_GT] = ACTIONS(309),
    [anon_sym_GT_EQ] = ACTIONS(307),
    [anon_sym_PLUS] = ACTIONS(307),
    [anon_sym_DASH] = ACTIONS(309),
    [anon_sym_STAR] = ACTIONS(309),
    [anon_sym_x] = ACTIONS(309),
    [anon_sym_SLASH] = ACTIONS(309),
    [anon_sym_] = ACTIONS(307),
    [anon_sym_STAR_STAR] = ACTIONS(307),
    [anon_sym_IN] = ACTIONS(309),
    [anon_sym_CONTAINS] = ACTIONS(309),
    [anon_sym_2] = ACTIONS(307),
    [anon_sym_CONTAINSNOT] = ACTIONS(309),
    [anon_sym_3] = ACTIONS(307),
    [anon_sym_CONTAINSALL] = ACTIONS(309),
    [anon_sym_4] = ACTIONS(307),
    [anon_sym_CONTAINSANY] = ACTIONS(309),
    [anon_sym_5] = ACTIONS(307),
    [anon_sym_CONTAINSNONE] = ACTIONS(309),
    [anon_sym_6] = ACTIONS(307),
    [anon_sym_INSIDE] = ACTIONS(309),
    [anon_sym_7] = ACTIONS(307),
    [anon_sym_NOTINSIDE] = ACTIONS(309),
    [anon_sym_NOTIN] = ACTIONS(307),
    [anon_sym_8] = ACTIONS(307),
    [anon_sym_ALLINSIDE] = ACTIONS(309),
    [anon_sym_9] = ACTIONS(307),
    [anon_sym_ANYINSIDE] = ACTIONS(309),
    [anon_sym_10] = ACTIONS(307),
    [anon_sym_NONEINSIDE] = ACTIONS(309),
    [anon_sym_11] = ACTIONS(307),
    [anon_sym_OUTSIDE] = ACTIONS(309),
    [anon_sym_INTERSECTS] = ACTIONS(309),
    [anon_sym_LPAREN] = ACTIONS(307),
    [anon_sym_RPAREN] = ACTIONS(307),
    [anon_sym_LBRACK] = ACTIONS(307),
    [anon_sym_RBRACK] = ACTIONS(307),
    [anon_sym_LBRACE] = ACTIONS(307),
    [anon_sym_RBRACE] = ACTIONS(307),
    [anon_sym_DASH_GT] = ACTIONS(307),
    [anon_sym_LT_DASH] = ACTIONS(307),
    [anon_sym_COMMA] = ACTIONS(307),
    [anon_sym_SEMI] = ACTIONS(307),
    [anon_sym_COLON] = ACTIONS(309),
    [anon_sym_any] = ACTIONS(309),
    [anon_sym_array] = ACTIONS(309),
    [anon_sym_bool] = ACTIONS(309),
    [anon_sym_datetime] = ACTIONS(309),
    [anon_sym_decimal] = ACTIONS(309),
    [anon_sym_duration] = ACTIONS(309),
    [anon_sym_float] = ACTIONS(309),
    [anon_sym_int] = ACTIONS(309),
    [anon_sym_number] = ACTIONS(309),
    [anon_sym_object] = ACTIONS(309),
    [anon_sym_string] = ACTIONS(309),
    [anon_sym_record] = ACTIONS(309),
    [anon_sym_geometry] = ACTIONS(309),
    [anon_sym_EDDSA] = ACTIONS(309),
    [anon_sym_ES256] = ACTIONS(309),
    [anon_sym_ES384] = ACTIONS(309),
    [anon_sym_ES512] = ACTIONS(309),
    [anon_sym_HS256] = ACTIONS(309),
    [anon_sym_HS384] = ACTIONS(309),
    [anon_sym_HS512] = ACTIONS(309),
    [anon_sym_PS256] = ACTIONS(309),
    [anon_sym_PS384] = ACTIONS(309),
    [anon_sym_PS512] = ACTIONS(309),
    [anon_sym_RS256] = ACTIONS(309),
    [anon_sym_RS384] = ACTIONS(309),
    [anon_sym_RS512] = ACTIONS(309),
    [aux_sym_function_token1] = ACTIONS(307),
    [aux_sym_function_token2] = ACTIONS(307),
    [anon_sym_count] = ACTIONS(309),
    [aux_sym_function_token3] = ACTIONS(307),
    [aux_sym_function_token4] = ACTIONS(307),
    [aux_sym_function_token5] = ACTIONS(307),
    [aux_sym_function_token6] = ACTIONS(307),
    [aux_sym_function_token7] = ACTIONS(307),
    [aux_sym_function_token8] = ACTIONS(307),
    [aux_sym_function_token9] = ACTIONS(307),
    [aux_sym_function_token10] = ACTIONS(309),
    [aux_sym_function_token11] = ACTIONS(307),
    [aux_sym_function_token12] = ACTIONS(309),
    [aux_sym_function_token13] = ACTIONS(307),
    [aux_sym_function_token14] = ACTIONS(307),
    [aux_sym_function_token15] = ACTIONS(307),
    [aux_sym_function_token16] = ACTIONS(309),
    [anon_sym_true] = ACTIONS(309),
    [anon_sym_false] = ACTIONS(309),
    [anon_sym_TRUE] = ACTIONS(309),
    [anon_sym_FALSE] = ACTIONS(309),
    [anon_sym_null] = ACTIONS(309),
    [anon_sym_NULL] = ACTIONS(309),
    [anon_sym_none] = ACTIONS(309),
    [anon_sym_NONE] = ACTIONS(309),
    [sym_variable] = ACTIONS(307),
    [sym_comment] = ACTIONS(307),
    [anon_sym_SQUOTE] = ACTIONS(307),
    [anon_sym_DQUOTE] = ACTIONS(307),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(311),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(311),
    [aux_sym_future_token1] = ACTIONS(311),
    [aux_sym_casting_token1] = ACTIONS(311),
    [aux_sym_property_token1] = ACTIONS(313),
    [aux_sym_duration_token1] = ACTIONS(313),
    [aux_sym_constant_token1] = ACTIONS(311),
    [aux_sym_number_token1] = ACTIONS(313),
    [aux_sym_record_token1] = ACTIONS(311),
    [aux_sym_record_token2] = ACTIONS(311),
    [sym_keyword] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(311),
    [anon_sym_AND] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(311),
    [anon_sym_OR] = ACTIONS(313),
    [anon_sym_QMARK_QMARK] = ACTIONS(311),
    [anon_sym_QMARK_COLON] = ACTIONS(311),
    [anon_sym_EQ] = ACTIONS(313),
    [anon_sym_IS] = ACTIONS(313),
    [anon_sym_BANG_EQ] = ACTIONS(311),
    [anon_sym_ISNOT] = ACTIONS(311),
    [anon_sym_EQ_EQ] = ACTIONS(311),
    [anon_sym_QMARK_EQ] = ACTIONS(311),
    [anon_sym_STAR_EQ] = ACTIONS(311),
    [anon_sym_TILDE] = ACTIONS(311),
    [anon_sym_BANG_TILDE] = ACTIONS(311),
    [anon_sym_QMARK_TILDE] = ACTIONS(311),
    [anon_sym_STAR_TILDE] = ACTIONS(311),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_LT_EQ] = ACTIONS(311),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_GT_EQ] = ACTIONS(311),
    [anon_sym_PLUS] = ACTIONS(311),
    [anon_sym_DASH] = ACTIONS(313),
    [anon_sym_STAR] = ACTIONS(313),
    [anon_sym_x] = ACTIONS(313),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_] = ACTIONS(311),
    [anon_sym_STAR_STAR] = ACTIONS(311),
    [anon_sym_IN] = ACTIONS(313),
    [anon_sym_CONTAINS] = ACTIONS(313),
    [anon_sym_2] = ACTIONS(311),
    [anon_sym_CONTAINSNOT] = ACTIONS(313),
    [anon_sym_3] = ACTIONS(311),
    [anon_sym_CONTAINSALL] = ACTIONS(313),
    [anon_sym_4] = ACTIONS(311),
    [anon_sym_CONTAINSANY] = ACTIONS(313),
    [anon_sym_5] = ACTIONS(311),
    [anon_sym_CONTAINSNONE] = ACTIONS(313),
    [anon_sym_6] = ACTIONS(311),
    [anon_sym_INSIDE] = ACTIONS(313),
    [anon_sym_7] = ACTIONS(311),
    [anon_sym_NOTINSIDE] = ACTIONS(313),
    [anon_sym_NOTIN] = ACTIONS(311),
    [anon_sym_8] = ACTIONS(311),
    [anon_sym_ALLINSIDE] = ACTIONS(313),
    [anon_sym_9] = ACTIONS(311),
    [anon_sym_ANYINSIDE] = ACTIONS(313),
    [anon_sym_10] = ACTIONS(311),
    [anon_sym_NONEINSIDE] = ACTIONS(313),
    [anon_sym_11] = ACTIONS(311),
    [anon_sym_OUTSIDE] = ACTIONS(313),
    [anon_sym_INTERSECTS] = ACTIONS(313),
    [anon_sym_LPAREN] = ACTIONS(311),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(311),
    [anon_sym_RBRACK] = ACTIONS(311),
    [anon_sym_LBRACE] = ACTIONS(311),
    [anon_sym_RBRACE] = ACTIONS(311),
    [anon_sym_DASH_GT] = ACTIONS(311),
    [anon_sym_LT_DASH] = ACTIONS(311),
    [anon_sym_COMMA] = ACTIONS(311),
    [anon_sym_SEMI] = ACTIONS(311),
    [anon_sym_COLON] = ACTIONS(313),
    [anon_sym_any] = ACTIONS(313),
    [anon_sym_array] = ACTIONS(313),
    [anon_sym_bool] = ACTIONS(313),
    [anon_sym_datetime] = ACTIONS(313),
    [anon_sym_decimal] = ACTIONS(313),
    [anon_sym_duration] = ACTIONS(313),
    [anon_sym_float] = ACTIONS(313),
    [anon_sym_int] = ACTIONS(313),
    [anon_sym_number] = ACTIONS(313),
    [anon_sym_object] = ACTIONS(313),
    [anon_sym_string] = ACTIONS(313),
    [anon_sym_record] = ACTIONS(313),
    [anon_sym_geometry] = ACTIONS(313),
    [anon_sym_EDDSA] = ACTIONS(313),
    [anon_sym_ES256] = ACTIONS(313),
    [anon_sym_ES384] = ACTIONS(313),
    [anon_sym_ES512] = ACTIONS(313),
    [anon_sym_HS256] = ACTIONS(313),
    [anon_sym_HS384] = ACTIONS(313),
    [anon_sym_HS512] = ACTIONS(313),
    [anon_sym_PS256] = ACTIONS(313),
    [anon_sym_PS384] = ACTIONS(313),
    [anon_sym_PS512] = ACTIONS(313),
    [anon_sym_RS256] = ACTIONS(313),
    [anon_sym_RS384] = ACTIONS(313),
    [anon_sym_RS512] = ACTIONS(313),
    [aux_sym_function_token1] = ACTIONS(311),
    [aux_sym_function_token2] = ACTIONS(311),
    [anon_sym_count] = ACTIONS(313),
    [aux_sym_function_token3] = ACTIONS(311),
    [aux_sym_function_token4] = ACTIONS(311),
    [aux_sym_function_token5] = ACTIONS(311),
    [aux_sym_function_token6] = ACTIONS(311),
    [aux_sym_function_token7] = ACTIONS(311),
    [aux_sym_function_token8] = ACTIONS(311),
    [aux_sym_function_token9] = ACTIONS(311),
    [aux_sym_function_token10] = ACTIONS(313),
    [aux_sym_function_token11] = ACTIONS(311),
    [aux_sym_function_token12] = ACTIONS(313),
    [aux_sym_function_token13] = ACTIONS(311),
    [aux_sym_function_token14] = ACTIONS(311),
    [aux_sym_function_token15] = ACTIONS(311),
    [aux_sym_function_token16] = ACTIONS(313),
    [anon_sym_true] = ACTIONS(313),
    [anon_sym_false] = ACTIONS(313),
    [anon_sym_TRUE] = ACTIONS(313),
    [anon_sym_FALSE] = ACTIONS(313),
    [anon_sym_null] = ACTIONS(313),
    [anon_sym_NULL] = ACTIONS(313),
    [anon_sym_none] = ACTIONS(313),
    [anon_sym_NONE] = ACTIONS(313),
    [sym_variable] = ACTIONS(311),
    [sym_comment] = ACTIONS(311),
    [anon_sym_SQUOTE] = ACTIONS(311),
    [anon_sym_DQUOTE] = ACTIONS(311),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(315),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(315),
    [aux_sym_future_token1] = ACTIONS(315),
    [aux_sym_casting_token1] = ACTIONS(315),
    [aux_sym_property_token1] = ACTIONS(317),
    [aux_sym_duration_token1] = ACTIONS(317),
    [aux_sym_constant_token1] = ACTIONS(315),
    [aux_sym_number_token1] = ACTIONS(317),
    [aux_sym_record_token1] = ACTIONS(315),
    [aux_sym_record_token2] = ACTIONS(315),
    [sym_keyword] = ACTIONS(317),
    [anon_sym_AMP_AMP] = ACTIONS(315),
    [anon_sym_AND] = ACTIONS(317),
    [anon_sym_PIPE_PIPE] = ACTIONS(315),
    [anon_sym_OR] = ACTIONS(317),
    [anon_sym_QMARK_QMARK] = ACTIONS(315),
    [anon_sym_QMARK_COLON] = ACTIONS(315),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_IS] = ACTIONS(317),
    [anon_sym_BANG_EQ] = ACTIONS(315),
    [anon_sym_ISNOT] = ACTIONS(315),
    [anon_sym_EQ_EQ] = ACTIONS(315),
    [anon_sym_QMARK_EQ] = ACTIONS(315),
    [anon_sym_STAR_EQ] = ACTIONS(315),
    [anon_sym_TILDE] = ACTIONS(315),
    [anon_sym_BANG_TILDE] = ACTIONS(315),
    [anon_sym_QMARK_TILDE] = ACTIONS(315),
    [anon_sym_STAR_TILDE] = ACTIONS(315),
    [anon_sym_LT] = ACTIONS(317),
    [anon_sym_LT_EQ] = ACTIONS(315),
    [anon_sym_GT] = ACTIONS(317),
    [anon_sym_GT_EQ] = ACTIONS(315),
    [anon_sym_PLUS] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(317),
    [anon_sym_STAR] = ACTIONS(317),
    [anon_sym_x] = ACTIONS(317),
    [anon_sym_SLASH] = ACTIONS(317),
    [anon_sym_] = ACTIONS(315),
    [anon_sym_STAR_STAR] = ACTIONS(315),
    [anon_sym_IN] = ACTIONS(317),
    [anon_sym_CONTAINS] = ACTIONS(317),
    [anon_sym_2] = ACTIONS(315),
    [anon_sym_CONTAINSNOT] = ACTIONS(317),
    [anon_sym_3] = ACTIONS(315),
    [anon_sym_CONTAINSALL] = ACTIONS(317),
    [anon_sym_4] = ACTIONS(315),
    [anon_sym_CONTAINSANY] = ACTIONS(317),
    [anon_sym_5] = ACTIONS(315),
    [anon_sym_CONTAINSNONE] = ACTIONS(317),
    [anon_sym_6] = ACTIONS(315),
    [anon_sym_INSIDE] = ACTIONS(317),
    [anon_sym_7] = ACTIONS(315),
    [anon_sym_NOTINSIDE] = ACTIONS(317),
    [anon_sym_NOTIN] = ACTIONS(315),
    [anon_sym_8] = ACTIONS(315),
    [anon_sym_ALLINSIDE] = ACTIONS(317),
    [anon_sym_9] = ACTIONS(315),
    [anon_sym_ANYINSIDE] = ACTIONS(317),
    [anon_sym_10] = ACTIONS(315),
    [anon_sym_NONEINSIDE] = ACTIONS(317),
    [anon_sym_11] = ACTIONS(315),
    [anon_sym_OUTSIDE] = ACTIONS(317),
    [anon_sym_INTERSECTS] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_RBRACK] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(315),
    [anon_sym_RBRACE] = ACTIONS(315),
    [anon_sym_DASH_GT] = ACTIONS(315),
    [anon_sym_LT_DASH] = ACTIONS(315),
    [anon_sym_COMMA] = ACTIONS(315),
    [anon_sym_SEMI] = ACTIONS(315),
    [anon_sym_COLON] = ACTIONS(317),
    [anon_sym_any] = ACTIONS(317),
    [anon_sym_array] = ACTIONS(317),
    [anon_sym_bool] = ACTIONS(317),
    [anon_sym_datetime] = ACTIONS(317),
    [anon_sym_decimal] = ACTIONS(317),
    [anon_sym_duration] = ACTIONS(317),
    [anon_sym_float] = ACTIONS(317),
    [anon_sym_int] = ACTIONS(317),
    [anon_sym_number] = ACTIONS(317),
    [anon_sym_object] = ACTIONS(317),
    [anon_sym_string] = ACTIONS(317),
    [anon_sym_record] = ACTIONS(317),
    [anon_sym_geometry] = ACTIONS(317),
    [anon_sym_EDDSA] = ACTIONS(317),
    [anon_sym_ES256] = ACTIONS(317),
    [anon_sym_ES384] = ACTIONS(317),
    [anon_sym_ES512] = ACTIONS(317),
    [anon_sym_HS256] = ACTIONS(317),
    [anon_sym_HS384] = ACTIONS(317),
    [anon_sym_HS512] = ACTIONS(317),
    [anon_sym_PS256] = ACTIONS(317),
    [anon_sym_PS384] = ACTIONS(317),
    [anon_sym_PS512] = ACTIONS(317),
    [anon_sym_RS256] = ACTIONS(317),
    [anon_sym_RS384] = ACTIONS(317),
    [anon_sym_RS512] = ACTIONS(317),
    [aux_sym_function_token1] = ACTIONS(315),
    [aux_sym_function_token2] = ACTIONS(315),
    [anon_sym_count] = ACTIONS(317),
    [aux_sym_function_token3] = ACTIONS(315),
    [aux_sym_function_token4] = ACTIONS(315),
    [aux_sym_function_token5] = ACTIONS(315),
    [aux_sym_function_token6] = ACTIONS(315),
    [aux_sym_function_token7] = ACTIONS(315),
    [aux_sym_function_token8] = ACTIONS(315),
    [aux_sym_function_token9] = ACTIONS(315),
    [aux_sym_function_token10] = ACTIONS(317),
    [aux_sym_function_token11] = ACTIONS(315),
    [aux_sym_function_token12] = ACTIONS(317),
    [aux_sym_function_token13] = ACTIONS(315),
    [aux_sym_function_token14] = ACTIONS(315),
    [aux_sym_function_token15] = ACTIONS(315),
    [aux_sym_function_token16] = ACTIONS(317),
    [anon_sym_true] = ACTIONS(317),
    [anon_sym_false] = ACTIONS(317),
    [anon_sym_TRUE] = ACTIONS(317),
    [anon_sym_FALSE] = ACTIONS(317),
    [anon_sym_null] = ACTIONS(317),
    [anon_sym_NULL] = ACTIONS(317),
    [anon_sym_none] = ACTIONS(317),
    [anon_sym_NONE] = ACTIONS(317),
    [sym_variable] = ACTIONS(315),
    [sym_comment] = ACTIONS(315),
    [anon_sym_SQUOTE] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(315),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(319),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(319),
    [aux_sym_future_token1] = ACTIONS(319),
    [aux_sym_casting_token1] = ACTIONS(319),
    [aux_sym_property_token1] = ACTIONS(321),
    [aux_sym_duration_token1] = ACTIONS(321),
    [aux_sym_constant_token1] = ACTIONS(319),
    [aux_sym_number_token1] = ACTIONS(321),
    [aux_sym_record_token1] = ACTIONS(319),
    [aux_sym_record_token2] = ACTIONS(319),
    [sym_keyword] = ACTIONS(321),
    [anon_sym_AMP_AMP] = ACTIONS(319),
    [anon_sym_AND] = ACTIONS(321),
    [anon_sym_PIPE_PIPE] = ACTIONS(319),
    [anon_sym_OR] = ACTIONS(321),
    [anon_sym_QMARK_QMARK] = ACTIONS(319),
    [anon_sym_QMARK_COLON] = ACTIONS(319),
    [anon_sym_EQ] = ACTIONS(321),
    [anon_sym_IS] = ACTIONS(321),
    [anon_sym_BANG_EQ] = ACTIONS(319),
    [anon_sym_ISNOT] = ACTIONS(319),
    [anon_sym_EQ_EQ] = ACTIONS(319),
    [anon_sym_QMARK_EQ] = ACTIONS(319),
    [anon_sym_STAR_EQ] = ACTIONS(319),
    [anon_sym_TILDE] = ACTIONS(319),
    [anon_sym_BANG_TILDE] = ACTIONS(319),
    [anon_sym_QMARK_TILDE] = ACTIONS(319),
    [anon_sym_STAR_TILDE] = ACTIONS(319),
    [anon_sym_LT] = ACTIONS(321),
    [anon_sym_LT_EQ] = ACTIONS(319),
    [anon_sym_GT] = ACTIONS(321),
    [anon_sym_GT_EQ] = ACTIONS(319),
    [anon_sym_PLUS] = ACTIONS(319),
    [anon_sym_DASH] = ACTIONS(321),
    [anon_sym_STAR] = ACTIONS(321),
    [anon_sym_x] = ACTIONS(321),
    [anon_sym_SLASH] = ACTIONS(321),
    [anon_sym_] = ACTIONS(319),
    [anon_sym_STAR_STAR] = ACTIONS(319),
    [anon_sym_IN] = ACTIONS(321),
    [anon_sym_CONTAINS] = ACTIONS(321),
    [anon_sym_2] = ACTIONS(319),
    [anon_sym_CONTAINSNOT] = ACTIONS(321),
    [anon_sym_3] = ACTIONS(319),
    [anon_sym_CONTAINSALL] = ACTIONS(321),
    [anon_sym_4] = ACTIONS(319),
    [anon_sym_CONTAINSANY] = ACTIONS(321),
    [anon_sym_5] = ACTIONS(319),
    [anon_sym_CONTAINSNONE] = ACTIONS(321),
    [anon_sym_6] = ACTIONS(319),
    [anon_sym_INSIDE] = ACTIONS(321),
    [anon_sym_7] = ACTIONS(319),
    [anon_sym_NOTINSIDE] = ACTIONS(321),
    [anon_sym_NOTIN] = ACTIONS(319),
    [anon_sym_8] = ACTIONS(319),
    [anon_sym_ALLINSIDE] = ACTIONS(321),
    [anon_sym_9] = ACTIONS(319),
    [anon_sym_ANYINSIDE] = ACTIONS(321),
    [anon_sym_10] = ACTIONS(319),
    [anon_sym_NONEINSIDE] = ACTIONS(321),
    [anon_sym_11] = ACTIONS(319),
    [anon_sym_OUTSIDE] = ACTIONS(321),
    [anon_sym_INTERSECTS] = ACTIONS(321),
    [anon_sym_LPAREN] = ACTIONS(319),
    [anon_sym_RPAREN] = ACTIONS(319),
    [anon_sym_LBRACK] = ACTIONS(319),
    [anon_sym_RBRACK] = ACTIONS(319),
    [anon_sym_LBRACE] = ACTIONS(319),
    [anon_sym_RBRACE] = ACTIONS(319),
    [anon_sym_DASH_GT] = ACTIONS(319),
    [anon_sym_LT_DASH] = ACTIONS(319),
    [anon_sym_COMMA] = ACTIONS(319),
    [anon_sym_SEMI] = ACTIONS(319),
    [anon_sym_COLON] = ACTIONS(321),
    [anon_sym_any] = ACTIONS(321),
    [anon_sym_array] = ACTIONS(321),
    [anon_sym_bool] = ACTIONS(321),
    [anon_sym_datetime] = ACTIONS(321),
    [anon_sym_decimal] = ACTIONS(321),
    [anon_sym_duration] = ACTIONS(321),
    [anon_sym_float] = ACTIONS(321),
    [anon_sym_int] = ACTIONS(321),
    [anon_sym_number] = ACTIONS(321),
    [anon_sym_object] = ACTIONS(321),
    [anon_sym_string] = ACTIONS(321),
    [anon_sym_record] = ACTIONS(321),
    [anon_sym_geometry] = ACTIONS(321),
    [anon_sym_EDDSA] = ACTIONS(321),
    [anon_sym_ES256] = ACTIONS(321),
    [anon_sym_ES384] = ACTIONS(321),
    [anon_sym_ES512] = ACTIONS(321),
    [anon_sym_HS256] = ACTIONS(321),
    [anon_sym_HS384] = ACTIONS(321),
    [anon_sym_HS512] = ACTIONS(321),
    [anon_sym_PS256] = ACTIONS(321),
    [anon_sym_PS384] = ACTIONS(321),
    [anon_sym_PS512] = ACTIONS(321),
    [anon_sym_RS256] = ACTIONS(321),
    [anon_sym_RS384] = ACTIONS(321),
    [anon_sym_RS512] = ACTIONS(321),
    [aux_sym_function_token1] = ACTIONS(319),
    [aux_sym_function_token2] = ACTIONS(319),
    [anon_sym_count] = ACTIONS(321),
    [aux_sym_function_token3] = ACTIONS(319),
    [aux_sym_function_token4] = ACTIONS(319),
    [aux_sym_function_token5] = ACTIONS(319),
    [aux_sym_function_token6] = ACTIONS(319),
    [aux_sym_function_token7] = ACTIONS(319),
    [aux_sym_function_token8] = ACTIONS(319),
    [aux_sym_function_token9] = ACTIONS(319),
    [aux_sym_function_token10] = ACTIONS(321),
    [aux_sym_function_token11] = ACTIONS(319),
    [aux_sym_function_token12] = ACTIONS(321),
    [aux_sym_function_token13] = ACTIONS(319),
    [aux_sym_function_token14] = ACTIONS(319),
    [aux_sym_function_token15] = ACTIONS(319),
    [aux_sym_function_token16] = ACTIONS(321),
    [anon_sym_true] = ACTIONS(321),
    [anon_sym_false] = ACTIONS(321),
    [anon_sym_TRUE] = ACTIONS(321),
    [anon_sym_FALSE] = ACTIONS(321),
    [anon_sym_null] = ACTIONS(321),
    [anon_sym_NULL] = ACTIONS(321),
    [anon_sym_none] = ACTIONS(321),
    [anon_sym_NONE] = ACTIONS(321),
    [sym_variable] = ACTIONS(319),
    [sym_comment] = ACTIONS(319),
    [anon_sym_SQUOTE] = ACTIONS(319),
    [anon_sym_DQUOTE] = ACTIONS(319),
  },
  [25] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(323),
    [anon_sym_RBRACE_SEMI] = ACTIONS(323),
    [anon_sym_RBRACE_COMMA] = ACTIONS(323),
    [aux_sym_future_token1] = ACTIONS(323),
    [aux_sym_casting_token1] = ACTIONS(323),
    [aux_sym_property_token1] = ACTIONS(325),
    [aux_sym_duration_token1] = ACTIONS(325),
    [aux_sym_constant_token1] = ACTIONS(323),
    [aux_sym_number_token1] = ACTIONS(325),
    [aux_sym_record_token1] = ACTIONS(323),
    [aux_sym_record_token2] = ACTIONS(323),
    [sym_keyword] = ACTIONS(325),
    [anon_sym_AMP_AMP] = ACTIONS(323),
    [anon_sym_AND] = ACTIONS(325),
    [anon_sym_PIPE_PIPE] = ACTIONS(323),
    [anon_sym_OR] = ACTIONS(325),
    [anon_sym_QMARK_QMARK] = ACTIONS(323),
    [anon_sym_QMARK_COLON] = ACTIONS(323),
    [anon_sym_EQ] = ACTIONS(325),
    [anon_sym_IS] = ACTIONS(325),
    [anon_sym_BANG_EQ] = ACTIONS(323),
    [anon_sym_ISNOT] = ACTIONS(323),
    [anon_sym_EQ_EQ] = ACTIONS(323),
    [anon_sym_QMARK_EQ] = ACTIONS(323),
    [anon_sym_STAR_EQ] = ACTIONS(323),
    [anon_sym_TILDE] = ACTIONS(323),
    [anon_sym_BANG_TILDE] = ACTIONS(323),
    [anon_sym_QMARK_TILDE] = ACTIONS(323),
    [anon_sym_STAR_TILDE] = ACTIONS(323),
    [anon_sym_LT] = ACTIONS(325),
    [anon_sym_LT_EQ] = ACTIONS(323),
    [anon_sym_GT] = ACTIONS(325),
    [anon_sym_GT_EQ] = ACTIONS(323),
    [anon_sym_PLUS] = ACTIONS(323),
    [anon_sym_DASH] = ACTIONS(325),
    [anon_sym_STAR] = ACTIONS(325),
    [anon_sym_x] = ACTIONS(325),
    [anon_sym_SLASH] = ACTIONS(323),
    [anon_sym_] = ACTIONS(323),
    [anon_sym_STAR_STAR] = ACTIONS(323),
    [anon_sym_IN] = ACTIONS(325),
    [anon_sym_CONTAINS] = ACTIONS(325),
    [anon_sym_2] = ACTIONS(323),
    [anon_sym_CONTAINSNOT] = ACTIONS(325),
    [anon_sym_3] = ACTIONS(323),
    [anon_sym_CONTAINSALL] = ACTIONS(325),
    [anon_sym_4] = ACTIONS(323),
    [anon_sym_CONTAINSANY] = ACTIONS(325),
    [anon_sym_5] = ACTIONS(323),
    [anon_sym_CONTAINSNONE] = ACTIONS(325),
    [anon_sym_6] = ACTIONS(323),
    [anon_sym_INSIDE] = ACTIONS(325),
    [anon_sym_7] = ACTIONS(323),
    [anon_sym_NOTINSIDE] = ACTIONS(325),
    [anon_sym_NOTIN] = ACTIONS(323),
    [anon_sym_8] = ACTIONS(323),
    [anon_sym_ALLINSIDE] = ACTIONS(325),
    [anon_sym_9] = ACTIONS(323),
    [anon_sym_ANYINSIDE] = ACTIONS(325),
    [anon_sym_10] = ACTIONS(323),
    [anon_sym_NONEINSIDE] = ACTIONS(325),
    [anon_sym_11] = ACTIONS(323),
    [anon_sym_OUTSIDE] = ACTIONS(325),
    [anon_sym_INTERSECTS] = ACTIONS(325),
    [anon_sym_LPAREN] = ACTIONS(323),
    [anon_sym_RPAREN] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(323),
    [anon_sym_RBRACK] = ACTIONS(323),
    [anon_sym_LBRACE] = ACTIONS(323),
    [anon_sym_RBRACE] = ACTIONS(325),
    [anon_sym_DASH_GT] = ACTIONS(323),
    [anon_sym_LT_DASH] = ACTIONS(323),
    [anon_sym_COMMA] = ACTIONS(323),
    [anon_sym_SEMI] = ACTIONS(323),
    [anon_sym_COLON] = ACTIONS(325),
    [anon_sym_any] = ACTIONS(325),
    [anon_sym_array] = ACTIONS(325),
    [anon_sym_bool] = ACTIONS(325),
    [anon_sym_datetime] = ACTIONS(325),
    [anon_sym_decimal] = ACTIONS(325),
    [anon_sym_duration] = ACTIONS(325),
    [anon_sym_float] = ACTIONS(325),
    [anon_sym_int] = ACTIONS(325),
    [anon_sym_number] = ACTIONS(325),
    [anon_sym_object] = ACTIONS(325),
    [anon_sym_string] = ACTIONS(325),
    [anon_sym_record] = ACTIONS(325),
    [anon_sym_geometry] = ACTIONS(325),
    [anon_sym_EDDSA] = ACTIONS(325),
    [anon_sym_ES256] = ACTIONS(325),
    [anon_sym_ES384] = ACTIONS(325),
    [anon_sym_ES512] = ACTIONS(325),
    [anon_sym_HS256] = ACTIONS(325),
    [anon_sym_HS384] = ACTIONS(325),
    [anon_sym_HS512] = ACTIONS(325),
    [anon_sym_PS256] = ACTIONS(325),
    [anon_sym_PS384] = ACTIONS(325),
    [anon_sym_PS512] = ACTIONS(325),
    [anon_sym_RS256] = ACTIONS(325),
    [anon_sym_RS384] = ACTIONS(325),
    [anon_sym_RS512] = ACTIONS(325),
    [aux_sym_function_token1] = ACTIONS(323),
    [aux_sym_function_token2] = ACTIONS(323),
    [anon_sym_count] = ACTIONS(325),
    [aux_sym_function_token3] = ACTIONS(323),
    [aux_sym_function_token4] = ACTIONS(323),
    [aux_sym_function_token5] = ACTIONS(323),
    [aux_sym_function_token6] = ACTIONS(323),
    [aux_sym_function_token7] = ACTIONS(323),
    [aux_sym_function_token8] = ACTIONS(323),
    [aux_sym_function_token9] = ACTIONS(323),
    [aux_sym_function_token10] = ACTIONS(325),
    [aux_sym_function_token11] = ACTIONS(323),
    [aux_sym_function_token12] = ACTIONS(325),
    [aux_sym_function_token13] = ACTIONS(323),
    [aux_sym_function_token14] = ACTIONS(323),
    [aux_sym_function_token15] = ACTIONS(323),
    [aux_sym_function_token16] = ACTIONS(325),
    [anon_sym_true] = ACTIONS(325),
    [anon_sym_false] = ACTIONS(325),
    [anon_sym_TRUE] = ACTIONS(325),
    [anon_sym_FALSE] = ACTIONS(325),
    [anon_sym_null] = ACTIONS(325),
    [anon_sym_NULL] = ACTIONS(325),
    [anon_sym_none] = ACTIONS(325),
    [anon_sym_NONE] = ACTIONS(325),
    [sym_variable] = ACTIONS(323),
    [anon_sym_SQUOTE] = ACTIONS(323),
    [anon_sym_DQUOTE] = ACTIONS(323),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(327),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(327),
    [aux_sym_future_token1] = ACTIONS(327),
    [aux_sym_casting_token1] = ACTIONS(327),
    [aux_sym_property_token1] = ACTIONS(329),
    [aux_sym_duration_token1] = ACTIONS(329),
    [aux_sym_constant_token1] = ACTIONS(327),
    [aux_sym_number_token1] = ACTIONS(329),
    [aux_sym_record_token1] = ACTIONS(327),
    [aux_sym_record_token2] = ACTIONS(327),
    [sym_keyword] = ACTIONS(329),
    [anon_sym_AMP_AMP] = ACTIONS(327),
    [anon_sym_AND] = ACTIONS(329),
    [anon_sym_PIPE_PIPE] = ACTIONS(327),
    [anon_sym_OR] = ACTIONS(329),
    [anon_sym_QMARK_QMARK] = ACTIONS(327),
    [anon_sym_QMARK_COLON] = ACTIONS(327),
    [anon_sym_EQ] = ACTIONS(329),
    [anon_sym_IS] = ACTIONS(329),
    [anon_sym_BANG_EQ] = ACTIONS(327),
    [anon_sym_ISNOT] = ACTIONS(327),
    [anon_sym_EQ_EQ] = ACTIONS(327),
    [anon_sym_QMARK_EQ] = ACTIONS(327),
    [anon_sym_STAR_EQ] = ACTIONS(327),
    [anon_sym_TILDE] = ACTIONS(327),
    [anon_sym_BANG_TILDE] = ACTIONS(327),
    [anon_sym_QMARK_TILDE] = ACTIONS(327),
    [anon_sym_STAR_TILDE] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(329),
    [anon_sym_LT_EQ] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_GT_EQ] = ACTIONS(327),
    [anon_sym_PLUS] = ACTIONS(327),
    [anon_sym_DASH] = ACTIONS(329),
    [anon_sym_STAR] = ACTIONS(329),
    [anon_sym_x] = ACTIONS(329),
    [anon_sym_SLASH] = ACTIONS(329),
    [anon_sym_] = ACTIONS(327),
    [anon_sym_STAR_STAR] = ACTIONS(327),
    [anon_sym_IN] = ACTIONS(329),
    [anon_sym_CONTAINS] = ACTIONS(329),
    [anon_sym_2] = ACTIONS(327),
    [anon_sym_CONTAINSNOT] = ACTIONS(329),
    [anon_sym_3] = ACTIONS(327),
    [anon_sym_CONTAINSALL] = ACTIONS(329),
    [anon_sym_4] = ACTIONS(327),
    [anon_sym_CONTAINSANY] = ACTIONS(329),
    [anon_sym_5] = ACTIONS(327),
    [anon_sym_CONTAINSNONE] = ACTIONS(329),
    [anon_sym_6] = ACTIONS(327),
    [anon_sym_INSIDE] = ACTIONS(329),
    [anon_sym_7] = ACTIONS(327),
    [anon_sym_NOTINSIDE] = ACTIONS(329),
    [anon_sym_NOTIN] = ACTIONS(327),
    [anon_sym_8] = ACTIONS(327),
    [anon_sym_ALLINSIDE] = ACTIONS(329),
    [anon_sym_9] = ACTIONS(327),
    [anon_sym_ANYINSIDE] = ACTIONS(329),
    [anon_sym_10] = ACTIONS(327),
    [anon_sym_NONEINSIDE] = ACTIONS(329),
    [anon_sym_11] = ACTIONS(327),
    [anon_sym_OUTSIDE] = ACTIONS(329),
    [anon_sym_INTERSECTS] = ACTIONS(329),
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym_RPAREN] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(327),
    [anon_sym_RBRACK] = ACTIONS(327),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_RBRACE] = ACTIONS(327),
    [anon_sym_DASH_GT] = ACTIONS(327),
    [anon_sym_LT_DASH] = ACTIONS(327),
    [anon_sym_COMMA] = ACTIONS(327),
    [anon_sym_SEMI] = ACTIONS(327),
    [anon_sym_COLON] = ACTIONS(329),
    [anon_sym_any] = ACTIONS(329),
    [anon_sym_array] = ACTIONS(329),
    [anon_sym_bool] = ACTIONS(329),
    [anon_sym_datetime] = ACTIONS(329),
    [anon_sym_decimal] = ACTIONS(329),
    [anon_sym_duration] = ACTIONS(329),
    [anon_sym_float] = ACTIONS(329),
    [anon_sym_int] = ACTIONS(329),
    [anon_sym_number] = ACTIONS(329),
    [anon_sym_object] = ACTIONS(329),
    [anon_sym_string] = ACTIONS(329),
    [anon_sym_record] = ACTIONS(329),
    [anon_sym_geometry] = ACTIONS(329),
    [anon_sym_EDDSA] = ACTIONS(329),
    [anon_sym_ES256] = ACTIONS(329),
    [anon_sym_ES384] = ACTIONS(329),
    [anon_sym_ES512] = ACTIONS(329),
    [anon_sym_HS256] = ACTIONS(329),
    [anon_sym_HS384] = ACTIONS(329),
    [anon_sym_HS512] = ACTIONS(329),
    [anon_sym_PS256] = ACTIONS(329),
    [anon_sym_PS384] = ACTIONS(329),
    [anon_sym_PS512] = ACTIONS(329),
    [anon_sym_RS256] = ACTIONS(329),
    [anon_sym_RS384] = ACTIONS(329),
    [anon_sym_RS512] = ACTIONS(329),
    [aux_sym_function_token1] = ACTIONS(327),
    [aux_sym_function_token2] = ACTIONS(327),
    [anon_sym_count] = ACTIONS(329),
    [aux_sym_function_token3] = ACTIONS(327),
    [aux_sym_function_token4] = ACTIONS(327),
    [aux_sym_function_token5] = ACTIONS(327),
    [aux_sym_function_token6] = ACTIONS(327),
    [aux_sym_function_token7] = ACTIONS(327),
    [aux_sym_function_token8] = ACTIONS(327),
    [aux_sym_function_token9] = ACTIONS(327),
    [aux_sym_function_token10] = ACTIONS(329),
    [aux_sym_function_token11] = ACTIONS(327),
    [aux_sym_function_token12] = ACTIONS(329),
    [aux_sym_function_token13] = ACTIONS(327),
    [aux_sym_function_token14] = ACTIONS(327),
    [aux_sym_function_token15] = ACTIONS(327),
    [aux_sym_function_token16] = ACTIONS(329),
    [anon_sym_true] = ACTIONS(329),
    [anon_sym_false] = ACTIONS(329),
    [anon_sym_TRUE] = ACTIONS(329),
    [anon_sym_FALSE] = ACTIONS(329),
    [anon_sym_null] = ACTIONS(329),
    [anon_sym_NULL] = ACTIONS(329),
    [anon_sym_none] = ACTIONS(329),
    [anon_sym_NONE] = ACTIONS(329),
    [sym_variable] = ACTIONS(327),
    [sym_comment] = ACTIONS(327),
    [anon_sym_SQUOTE] = ACTIONS(327),
    [anon_sym_DQUOTE] = ACTIONS(327),
  },
  [27] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(291),
    [anon_sym_RBRACE_SEMI] = ACTIONS(291),
    [anon_sym_RBRACE_COMMA] = ACTIONS(291),
    [aux_sym_future_token1] = ACTIONS(291),
    [aux_sym_casting_token1] = ACTIONS(291),
    [aux_sym_property_token1] = ACTIONS(293),
    [aux_sym_duration_token1] = ACTIONS(293),
    [aux_sym_constant_token1] = ACTIONS(291),
    [aux_sym_number_token1] = ACTIONS(293),
    [aux_sym_record_token1] = ACTIONS(291),
    [aux_sym_record_token2] = ACTIONS(291),
    [sym_keyword] = ACTIONS(293),
    [anon_sym_AMP_AMP] = ACTIONS(291),
    [anon_sym_AND] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(291),
    [anon_sym_OR] = ACTIONS(293),
    [anon_sym_QMARK_QMARK] = ACTIONS(291),
    [anon_sym_QMARK_COLON] = ACTIONS(291),
    [anon_sym_EQ] = ACTIONS(293),
    [anon_sym_IS] = ACTIONS(293),
    [anon_sym_BANG_EQ] = ACTIONS(291),
    [anon_sym_ISNOT] = ACTIONS(291),
    [anon_sym_EQ_EQ] = ACTIONS(291),
    [anon_sym_QMARK_EQ] = ACTIONS(291),
    [anon_sym_STAR_EQ] = ACTIONS(291),
    [anon_sym_TILDE] = ACTIONS(291),
    [anon_sym_BANG_TILDE] = ACTIONS(291),
    [anon_sym_QMARK_TILDE] = ACTIONS(291),
    [anon_sym_STAR_TILDE] = ACTIONS(291),
    [anon_sym_LT] = ACTIONS(293),
    [anon_sym_LT_EQ] = ACTIONS(291),
    [anon_sym_GT] = ACTIONS(293),
    [anon_sym_GT_EQ] = ACTIONS(291),
    [anon_sym_PLUS] = ACTIONS(291),
    [anon_sym_DASH] = ACTIONS(293),
    [anon_sym_STAR] = ACTIONS(293),
    [anon_sym_x] = ACTIONS(293),
    [anon_sym_SLASH] = ACTIONS(291),
    [anon_sym_] = ACTIONS(291),
    [anon_sym_STAR_STAR] = ACTIONS(291),
    [anon_sym_IN] = ACTIONS(293),
    [anon_sym_CONTAINS] = ACTIONS(293),
    [anon_sym_2] = ACTIONS(291),
    [anon_sym_CONTAINSNOT] = ACTIONS(293),
    [anon_sym_3] = ACTIONS(291),
    [anon_sym_CONTAINSALL] = ACTIONS(293),
    [anon_sym_4] = ACTIONS(291),
    [anon_sym_CONTAINSANY] = ACTIONS(293),
    [anon_sym_5] = ACTIONS(291),
    [anon_sym_CONTAINSNONE] = ACTIONS(293),
    [anon_sym_6] = ACTIONS(291),
    [anon_sym_INSIDE] = ACTIONS(293),
    [anon_sym_7] = ACTIONS(291),
    [anon_sym_NOTINSIDE] = ACTIONS(293),
    [anon_sym_NOTIN] = ACTIONS(291),
    [anon_sym_8] = ACTIONS(291),
    [anon_sym_ALLINSIDE] = ACTIONS(293),
    [anon_sym_9] = ACTIONS(291),
    [anon_sym_ANYINSIDE] = ACTIONS(293),
    [anon_sym_10] = ACTIONS(291),
    [anon_sym_NONEINSIDE] = ACTIONS(293),
    [anon_sym_11] = ACTIONS(291),
    [anon_sym_OUTSIDE] = ACTIONS(293),
    [anon_sym_INTERSECTS] = ACTIONS(293),
    [anon_sym_LPAREN] = ACTIONS(291),
    [anon_sym_RPAREN] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(291),
    [anon_sym_RBRACK] = ACTIONS(291),
    [anon_sym_LBRACE] = ACTIONS(291),
    [anon_sym_RBRACE] = ACTIONS(293),
    [anon_sym_DASH_GT] = ACTIONS(291),
    [anon_sym_LT_DASH] = ACTIONS(291),
    [anon_sym_COMMA] = ACTIONS(291),
    [anon_sym_SEMI] = ACTIONS(291),
    [anon_sym_COLON] = ACTIONS(293),
    [anon_sym_any] = ACTIONS(293),
    [anon_sym_array] = ACTIONS(293),
    [anon_sym_bool] = ACTIONS(293),
    [anon_sym_datetime] = ACTIONS(293),
    [anon_sym_decimal] = ACTIONS(293),
    [anon_sym_duration] = ACTIONS(293),
    [anon_sym_float] = ACTIONS(293),
    [anon_sym_int] = ACTIONS(293),
    [anon_sym_number] = ACTIONS(293),
    [anon_sym_object] = ACTIONS(293),
    [anon_sym_string] = ACTIONS(293),
    [anon_sym_record] = ACTIONS(293),
    [anon_sym_geometry] = ACTIONS(293),
    [anon_sym_EDDSA] = ACTIONS(293),
    [anon_sym_ES256] = ACTIONS(293),
    [anon_sym_ES384] = ACTIONS(293),
    [anon_sym_ES512] = ACTIONS(293),
    [anon_sym_HS256] = ACTIONS(293),
    [anon_sym_HS384] = ACTIONS(293),
    [anon_sym_HS512] = ACTIONS(293),
    [anon_sym_PS256] = ACTIONS(293),
    [anon_sym_PS384] = ACTIONS(293),
    [anon_sym_PS512] = ACTIONS(293),
    [anon_sym_RS256] = ACTIONS(293),
    [anon_sym_RS384] = ACTIONS(293),
    [anon_sym_RS512] = ACTIONS(293),
    [aux_sym_function_token1] = ACTIONS(291),
    [aux_sym_function_token2] = ACTIONS(291),
    [anon_sym_count] = ACTIONS(293),
    [aux_sym_function_token3] = ACTIONS(291),
    [aux_sym_function_token4] = ACTIONS(291),
    [aux_sym_function_token5] = ACTIONS(291),
    [aux_sym_function_token6] = ACTIONS(291),
    [aux_sym_function_token7] = ACTIONS(291),
    [aux_sym_function_token8] = ACTIONS(291),
    [aux_sym_function_token9] = ACTIONS(291),
    [aux_sym_function_token10] = ACTIONS(293),
    [aux_sym_function_token11] = ACTIONS(291),
    [aux_sym_function_token12] = ACTIONS(293),
    [aux_sym_function_token13] = ACTIONS(291),
    [aux_sym_function_token14] = ACTIONS(291),
    [aux_sym_function_token15] = ACTIONS(291),
    [aux_sym_function_token16] = ACTIONS(293),
    [anon_sym_true] = ACTIONS(293),
    [anon_sym_false] = ACTIONS(293),
    [anon_sym_TRUE] = ACTIONS(293),
    [anon_sym_FALSE] = ACTIONS(293),
    [anon_sym_null] = ACTIONS(293),
    [anon_sym_NULL] = ACTIONS(293),
    [anon_sym_none] = ACTIONS(293),
    [anon_sym_NONE] = ACTIONS(293),
    [sym_variable] = ACTIONS(291),
    [anon_sym_SQUOTE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(291),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(331),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(331),
    [aux_sym_future_token1] = ACTIONS(331),
    [aux_sym_casting_token1] = ACTIONS(331),
    [aux_sym_property_token1] = ACTIONS(333),
    [aux_sym_duration_token1] = ACTIONS(333),
    [aux_sym_constant_token1] = ACTIONS(331),
    [aux_sym_number_token1] = ACTIONS(333),
    [aux_sym_record_token1] = ACTIONS(331),
    [aux_sym_record_token2] = ACTIONS(331),
    [sym_keyword] = ACTIONS(333),
    [anon_sym_AMP_AMP] = ACTIONS(331),
    [anon_sym_AND] = ACTIONS(333),
    [anon_sym_PIPE_PIPE] = ACTIONS(331),
    [anon_sym_OR] = ACTIONS(333),
    [anon_sym_QMARK_QMARK] = ACTIONS(331),
    [anon_sym_QMARK_COLON] = ACTIONS(331),
    [anon_sym_EQ] = ACTIONS(333),
    [anon_sym_IS] = ACTIONS(333),
    [anon_sym_BANG_EQ] = ACTIONS(331),
    [anon_sym_ISNOT] = ACTIONS(331),
    [anon_sym_EQ_EQ] = ACTIONS(331),
    [anon_sym_QMARK_EQ] = ACTIONS(331),
    [anon_sym_STAR_EQ] = ACTIONS(331),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_BANG_TILDE] = ACTIONS(331),
    [anon_sym_QMARK_TILDE] = ACTIONS(331),
    [anon_sym_STAR_TILDE] = ACTIONS(331),
    [anon_sym_LT] = ACTIONS(333),
    [anon_sym_LT_EQ] = ACTIONS(331),
    [anon_sym_GT] = ACTIONS(333),
    [anon_sym_GT_EQ] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(331),
    [anon_sym_DASH] = ACTIONS(333),
    [anon_sym_STAR] = ACTIONS(333),
    [anon_sym_x] = ACTIONS(333),
    [anon_sym_SLASH] = ACTIONS(333),
    [anon_sym_] = ACTIONS(331),
    [anon_sym_STAR_STAR] = ACTIONS(331),
    [anon_sym_IN] = ACTIONS(333),
    [anon_sym_CONTAINS] = ACTIONS(333),
    [anon_sym_2] = ACTIONS(331),
    [anon_sym_CONTAINSNOT] = ACTIONS(333),
    [anon_sym_3] = ACTIONS(331),
    [anon_sym_CONTAINSALL] = ACTIONS(333),
    [anon_sym_4] = ACTIONS(331),
    [anon_sym_CONTAINSANY] = ACTIONS(333),
    [anon_sym_5] = ACTIONS(331),
    [anon_sym_CONTAINSNONE] = ACTIONS(333),
    [anon_sym_6] = ACTIONS(331),
    [anon_sym_INSIDE] = ACTIONS(333),
    [anon_sym_7] = ACTIONS(331),
    [anon_sym_NOTINSIDE] = ACTIONS(333),
    [anon_sym_NOTIN] = ACTIONS(331),
    [anon_sym_8] = ACTIONS(331),
    [anon_sym_ALLINSIDE] = ACTIONS(333),
    [anon_sym_9] = ACTIONS(331),
    [anon_sym_ANYINSIDE] = ACTIONS(333),
    [anon_sym_10] = ACTIONS(331),
    [anon_sym_NONEINSIDE] = ACTIONS(333),
    [anon_sym_11] = ACTIONS(331),
    [anon_sym_OUTSIDE] = ACTIONS(333),
    [anon_sym_INTERSECTS] = ACTIONS(333),
    [anon_sym_LPAREN] = ACTIONS(331),
    [anon_sym_RPAREN] = ACTIONS(331),
    [anon_sym_LBRACK] = ACTIONS(331),
    [anon_sym_RBRACK] = ACTIONS(331),
    [anon_sym_LBRACE] = ACTIONS(331),
    [anon_sym_RBRACE] = ACTIONS(331),
    [anon_sym_DASH_GT] = ACTIONS(331),
    [anon_sym_LT_DASH] = ACTIONS(331),
    [anon_sym_COMMA] = ACTIONS(331),
    [anon_sym_SEMI] = ACTIONS(331),
    [anon_sym_COLON] = ACTIONS(333),
    [anon_sym_any] = ACTIONS(333),
    [anon_sym_array] = ACTIONS(333),
    [anon_sym_bool] = ACTIONS(333),
    [anon_sym_datetime] = ACTIONS(333),
    [anon_sym_decimal] = ACTIONS(333),
    [anon_sym_duration] = ACTIONS(333),
    [anon_sym_float] = ACTIONS(333),
    [anon_sym_int] = ACTIONS(333),
    [anon_sym_number] = ACTIONS(333),
    [anon_sym_object] = ACTIONS(333),
    [anon_sym_string] = ACTIONS(333),
    [anon_sym_record] = ACTIONS(333),
    [anon_sym_geometry] = ACTIONS(333),
    [anon_sym_EDDSA] = ACTIONS(333),
    [anon_sym_ES256] = ACTIONS(333),
    [anon_sym_ES384] = ACTIONS(333),
    [anon_sym_ES512] = ACTIONS(333),
    [anon_sym_HS256] = ACTIONS(333),
    [anon_sym_HS384] = ACTIONS(333),
    [anon_sym_HS512] = ACTIONS(333),
    [anon_sym_PS256] = ACTIONS(333),
    [anon_sym_PS384] = ACTIONS(333),
    [anon_sym_PS512] = ACTIONS(333),
    [anon_sym_RS256] = ACTIONS(333),
    [anon_sym_RS384] = ACTIONS(333),
    [anon_sym_RS512] = ACTIONS(333),
    [aux_sym_function_token1] = ACTIONS(331),
    [aux_sym_function_token2] = ACTIONS(331),
    [anon_sym_count] = ACTIONS(333),
    [aux_sym_function_token3] = ACTIONS(331),
    [aux_sym_function_token4] = ACTIONS(331),
    [aux_sym_function_token5] = ACTIONS(331),
    [aux_sym_function_token6] = ACTIONS(331),
    [aux_sym_function_token7] = ACTIONS(331),
    [aux_sym_function_token8] = ACTIONS(331),
    [aux_sym_function_token9] = ACTIONS(331),
    [aux_sym_function_token10] = ACTIONS(333),
    [aux_sym_function_token11] = ACTIONS(331),
    [aux_sym_function_token12] = ACTIONS(333),
    [aux_sym_function_token13] = ACTIONS(331),
    [aux_sym_function_token14] = ACTIONS(331),
    [aux_sym_function_token15] = ACTIONS(331),
    [aux_sym_function_token16] = ACTIONS(333),
    [anon_sym_true] = ACTIONS(333),
    [anon_sym_false] = ACTIONS(333),
    [anon_sym_TRUE] = ACTIONS(333),
    [anon_sym_FALSE] = ACTIONS(333),
    [anon_sym_null] = ACTIONS(333),
    [anon_sym_NULL] = ACTIONS(333),
    [anon_sym_none] = ACTIONS(333),
    [anon_sym_NONE] = ACTIONS(333),
    [sym_variable] = ACTIONS(331),
    [sym_comment] = ACTIONS(331),
    [anon_sym_SQUOTE] = ACTIONS(331),
    [anon_sym_DQUOTE] = ACTIONS(331),
  },
  [29] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(331),
    [anon_sym_RBRACE_SEMI] = ACTIONS(331),
    [anon_sym_RBRACE_COMMA] = ACTIONS(331),
    [aux_sym_future_token1] = ACTIONS(331),
    [aux_sym_casting_token1] = ACTIONS(331),
    [aux_sym_property_token1] = ACTIONS(333),
    [aux_sym_duration_token1] = ACTIONS(333),
    [aux_sym_constant_token1] = ACTIONS(331),
    [aux_sym_number_token1] = ACTIONS(333),
    [aux_sym_record_token1] = ACTIONS(331),
    [aux_sym_record_token2] = ACTIONS(331),
    [sym_keyword] = ACTIONS(333),
    [anon_sym_AMP_AMP] = ACTIONS(331),
    [anon_sym_AND] = ACTIONS(333),
    [anon_sym_PIPE_PIPE] = ACTIONS(331),
    [anon_sym_OR] = ACTIONS(333),
    [anon_sym_QMARK_QMARK] = ACTIONS(331),
    [anon_sym_QMARK_COLON] = ACTIONS(331),
    [anon_sym_EQ] = ACTIONS(333),
    [anon_sym_IS] = ACTIONS(333),
    [anon_sym_BANG_EQ] = ACTIONS(331),
    [anon_sym_ISNOT] = ACTIONS(331),
    [anon_sym_EQ_EQ] = ACTIONS(331),
    [anon_sym_QMARK_EQ] = ACTIONS(331),
    [anon_sym_STAR_EQ] = ACTIONS(331),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_BANG_TILDE] = ACTIONS(331),
    [anon_sym_QMARK_TILDE] = ACTIONS(331),
    [anon_sym_STAR_TILDE] = ACTIONS(331),
    [anon_sym_LT] = ACTIONS(333),
    [anon_sym_LT_EQ] = ACTIONS(331),
    [anon_sym_GT] = ACTIONS(333),
    [anon_sym_GT_EQ] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(331),
    [anon_sym_DASH] = ACTIONS(333),
    [anon_sym_STAR] = ACTIONS(333),
    [anon_sym_x] = ACTIONS(333),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_] = ACTIONS(331),
    [anon_sym_STAR_STAR] = ACTIONS(331),
    [anon_sym_IN] = ACTIONS(333),
    [anon_sym_CONTAINS] = ACTIONS(333),
    [anon_sym_2] = ACTIONS(331),
    [anon_sym_CONTAINSNOT] = ACTIONS(333),
    [anon_sym_3] = ACTIONS(331),
    [anon_sym_CONTAINSALL] = ACTIONS(333),
    [anon_sym_4] = ACTIONS(331),
    [anon_sym_CONTAINSANY] = ACTIONS(333),
    [anon_sym_5] = ACTIONS(331),
    [anon_sym_CONTAINSNONE] = ACTIONS(333),
    [anon_sym_6] = ACTIONS(331),
    [anon_sym_INSIDE] = ACTIONS(333),
    [anon_sym_7] = ACTIONS(331),
    [anon_sym_NOTINSIDE] = ACTIONS(333),
    [anon_sym_NOTIN] = ACTIONS(331),
    [anon_sym_8] = ACTIONS(331),
    [anon_sym_ALLINSIDE] = ACTIONS(333),
    [anon_sym_9] = ACTIONS(331),
    [anon_sym_ANYINSIDE] = ACTIONS(333),
    [anon_sym_10] = ACTIONS(331),
    [anon_sym_NONEINSIDE] = ACTIONS(333),
    [anon_sym_11] = ACTIONS(331),
    [anon_sym_OUTSIDE] = ACTIONS(333),
    [anon_sym_INTERSECTS] = ACTIONS(333),
    [anon_sym_LPAREN] = ACTIONS(331),
    [anon_sym_RPAREN] = ACTIONS(331),
    [anon_sym_LBRACK] = ACTIONS(331),
    [anon_sym_RBRACK] = ACTIONS(331),
    [anon_sym_LBRACE] = ACTIONS(331),
    [anon_sym_RBRACE] = ACTIONS(333),
    [anon_sym_DASH_GT] = ACTIONS(331),
    [anon_sym_LT_DASH] = ACTIONS(331),
    [anon_sym_COMMA] = ACTIONS(331),
    [anon_sym_SEMI] = ACTIONS(331),
    [anon_sym_COLON] = ACTIONS(333),
    [anon_sym_any] = ACTIONS(333),
    [anon_sym_array] = ACTIONS(333),
    [anon_sym_bool] = ACTIONS(333),
    [anon_sym_datetime] = ACTIONS(333),
    [anon_sym_decimal] = ACTIONS(333),
    [anon_sym_duration] = ACTIONS(333),
    [anon_sym_float] = ACTIONS(333),
    [anon_sym_int] = ACTIONS(333),
    [anon_sym_number] = ACTIONS(333),
    [anon_sym_object] = ACTIONS(333),
    [anon_sym_string] = ACTIONS(333),
    [anon_sym_record] = ACTIONS(333),
    [anon_sym_geometry] = ACTIONS(333),
    [anon_sym_EDDSA] = ACTIONS(333),
    [anon_sym_ES256] = ACTIONS(333),
    [anon_sym_ES384] = ACTIONS(333),
    [anon_sym_ES512] = ACTIONS(333),
    [anon_sym_HS256] = ACTIONS(333),
    [anon_sym_HS384] = ACTIONS(333),
    [anon_sym_HS512] = ACTIONS(333),
    [anon_sym_PS256] = ACTIONS(333),
    [anon_sym_PS384] = ACTIONS(333),
    [anon_sym_PS512] = ACTIONS(333),
    [anon_sym_RS256] = ACTIONS(333),
    [anon_sym_RS384] = ACTIONS(333),
    [anon_sym_RS512] = ACTIONS(333),
    [aux_sym_function_token1] = ACTIONS(331),
    [aux_sym_function_token2] = ACTIONS(331),
    [anon_sym_count] = ACTIONS(333),
    [aux_sym_function_token3] = ACTIONS(331),
    [aux_sym_function_token4] = ACTIONS(331),
    [aux_sym_function_token5] = ACTIONS(331),
    [aux_sym_function_token6] = ACTIONS(331),
    [aux_sym_function_token7] = ACTIONS(331),
    [aux_sym_function_token8] = ACTIONS(331),
    [aux_sym_function_token9] = ACTIONS(331),
    [aux_sym_function_token10] = ACTIONS(333),
    [aux_sym_function_token11] = ACTIONS(331),
    [aux_sym_function_token12] = ACTIONS(333),
    [aux_sym_function_token13] = ACTIONS(331),
    [aux_sym_function_token14] = ACTIONS(331),
    [aux_sym_function_token15] = ACTIONS(331),
    [aux_sym_function_token16] = ACTIONS(333),
    [anon_sym_true] = ACTIONS(333),
    [anon_sym_false] = ACTIONS(333),
    [anon_sym_TRUE] = ACTIONS(333),
    [anon_sym_FALSE] = ACTIONS(333),
    [anon_sym_null] = ACTIONS(333),
    [anon_sym_NULL] = ACTIONS(333),
    [anon_sym_none] = ACTIONS(333),
    [anon_sym_NONE] = ACTIONS(333),
    [sym_variable] = ACTIONS(331),
    [anon_sym_SQUOTE] = ACTIONS(331),
    [anon_sym_DQUOTE] = ACTIONS(331),
  },
  [30] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(327),
    [anon_sym_RBRACE_SEMI] = ACTIONS(327),
    [anon_sym_RBRACE_COMMA] = ACTIONS(327),
    [aux_sym_future_token1] = ACTIONS(327),
    [aux_sym_casting_token1] = ACTIONS(327),
    [aux_sym_property_token1] = ACTIONS(329),
    [aux_sym_duration_token1] = ACTIONS(329),
    [aux_sym_constant_token1] = ACTIONS(327),
    [aux_sym_number_token1] = ACTIONS(329),
    [aux_sym_record_token1] = ACTIONS(327),
    [aux_sym_record_token2] = ACTIONS(327),
    [sym_keyword] = ACTIONS(329),
    [anon_sym_AMP_AMP] = ACTIONS(327),
    [anon_sym_AND] = ACTIONS(329),
    [anon_sym_PIPE_PIPE] = ACTIONS(327),
    [anon_sym_OR] = ACTIONS(329),
    [anon_sym_QMARK_QMARK] = ACTIONS(327),
    [anon_sym_QMARK_COLON] = ACTIONS(327),
    [anon_sym_EQ] = ACTIONS(329),
    [anon_sym_IS] = ACTIONS(329),
    [anon_sym_BANG_EQ] = ACTIONS(327),
    [anon_sym_ISNOT] = ACTIONS(327),
    [anon_sym_EQ_EQ] = ACTIONS(327),
    [anon_sym_QMARK_EQ] = ACTIONS(327),
    [anon_sym_STAR_EQ] = ACTIONS(327),
    [anon_sym_TILDE] = ACTIONS(327),
    [anon_sym_BANG_TILDE] = ACTIONS(327),
    [anon_sym_QMARK_TILDE] = ACTIONS(327),
    [anon_sym_STAR_TILDE] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(329),
    [anon_sym_LT_EQ] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_GT_EQ] = ACTIONS(327),
    [anon_sym_PLUS] = ACTIONS(327),
    [anon_sym_DASH] = ACTIONS(329),
    [anon_sym_STAR] = ACTIONS(329),
    [anon_sym_x] = ACTIONS(329),
    [anon_sym_SLASH] = ACTIONS(327),
    [anon_sym_] = ACTIONS(327),
    [anon_sym_STAR_STAR] = ACTIONS(327),
    [anon_sym_IN] = ACTIONS(329),
    [anon_sym_CONTAINS] = ACTIONS(329),
    [anon_sym_2] = ACTIONS(327),
    [anon_sym_CONTAINSNOT] = ACTIONS(329),
    [anon_sym_3] = ACTIONS(327),
    [anon_sym_CONTAINSALL] = ACTIONS(329),
    [anon_sym_4] = ACTIONS(327),
    [anon_sym_CONTAINSANY] = ACTIONS(329),
    [anon_sym_5] = ACTIONS(327),
    [anon_sym_CONTAINSNONE] = ACTIONS(329),
    [anon_sym_6] = ACTIONS(327),
    [anon_sym_INSIDE] = ACTIONS(329),
    [anon_sym_7] = ACTIONS(327),
    [anon_sym_NOTINSIDE] = ACTIONS(329),
    [anon_sym_NOTIN] = ACTIONS(327),
    [anon_sym_8] = ACTIONS(327),
    [anon_sym_ALLINSIDE] = ACTIONS(329),
    [anon_sym_9] = ACTIONS(327),
    [anon_sym_ANYINSIDE] = ACTIONS(329),
    [anon_sym_10] = ACTIONS(327),
    [anon_sym_NONEINSIDE] = ACTIONS(329),
    [anon_sym_11] = ACTIONS(327),
    [anon_sym_OUTSIDE] = ACTIONS(329),
    [anon_sym_INTERSECTS] = ACTIONS(329),
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym_RPAREN] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(327),
    [anon_sym_RBRACK] = ACTIONS(327),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_RBRACE] = ACTIONS(329),
    [anon_sym_DASH_GT] = ACTIONS(327),
    [anon_sym_LT_DASH] = ACTIONS(327),
    [anon_sym_COMMA] = ACTIONS(327),
    [anon_sym_SEMI] = ACTIONS(327),
    [anon_sym_COLON] = ACTIONS(329),
    [anon_sym_any] = ACTIONS(329),
    [anon_sym_array] = ACTIONS(329),
    [anon_sym_bool] = ACTIONS(329),
    [anon_sym_datetime] = ACTIONS(329),
    [anon_sym_decimal] = ACTIONS(329),
    [anon_sym_duration] = ACTIONS(329),
    [anon_sym_float] = ACTIONS(329),
    [anon_sym_int] = ACTIONS(329),
    [anon_sym_number] = ACTIONS(329),
    [anon_sym_object] = ACTIONS(329),
    [anon_sym_string] = ACTIONS(329),
    [anon_sym_record] = ACTIONS(329),
    [anon_sym_geometry] = ACTIONS(329),
    [anon_sym_EDDSA] = ACTIONS(329),
    [anon_sym_ES256] = ACTIONS(329),
    [anon_sym_ES384] = ACTIONS(329),
    [anon_sym_ES512] = ACTIONS(329),
    [anon_sym_HS256] = ACTIONS(329),
    [anon_sym_HS384] = ACTIONS(329),
    [anon_sym_HS512] = ACTIONS(329),
    [anon_sym_PS256] = ACTIONS(329),
    [anon_sym_PS384] = ACTIONS(329),
    [anon_sym_PS512] = ACTIONS(329),
    [anon_sym_RS256] = ACTIONS(329),
    [anon_sym_RS384] = ACTIONS(329),
    [anon_sym_RS512] = ACTIONS(329),
    [aux_sym_function_token1] = ACTIONS(327),
    [aux_sym_function_token2] = ACTIONS(327),
    [anon_sym_count] = ACTIONS(329),
    [aux_sym_function_token3] = ACTIONS(327),
    [aux_sym_function_token4] = ACTIONS(327),
    [aux_sym_function_token5] = ACTIONS(327),
    [aux_sym_function_token6] = ACTIONS(327),
    [aux_sym_function_token7] = ACTIONS(327),
    [aux_sym_function_token8] = ACTIONS(327),
    [aux_sym_function_token9] = ACTIONS(327),
    [aux_sym_function_token10] = ACTIONS(329),
    [aux_sym_function_token11] = ACTIONS(327),
    [aux_sym_function_token12] = ACTIONS(329),
    [aux_sym_function_token13] = ACTIONS(327),
    [aux_sym_function_token14] = ACTIONS(327),
    [aux_sym_function_token15] = ACTIONS(327),
    [aux_sym_function_token16] = ACTIONS(329),
    [anon_sym_true] = ACTIONS(329),
    [anon_sym_false] = ACTIONS(329),
    [anon_sym_TRUE] = ACTIONS(329),
    [anon_sym_FALSE] = ACTIONS(329),
    [anon_sym_null] = ACTIONS(329),
    [anon_sym_NULL] = ACTIONS(329),
    [anon_sym_none] = ACTIONS(329),
    [anon_sym_NONE] = ACTIONS(329),
    [sym_variable] = ACTIONS(327),
    [anon_sym_SQUOTE] = ACTIONS(327),
    [anon_sym_DQUOTE] = ACTIONS(327),
  },
  [31] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(311),
    [anon_sym_RBRACE_SEMI] = ACTIONS(311),
    [anon_sym_RBRACE_COMMA] = ACTIONS(311),
    [aux_sym_future_token1] = ACTIONS(311),
    [aux_sym_casting_token1] = ACTIONS(311),
    [aux_sym_property_token1] = ACTIONS(313),
    [aux_sym_duration_token1] = ACTIONS(313),
    [aux_sym_constant_token1] = ACTIONS(311),
    [aux_sym_number_token1] = ACTIONS(313),
    [aux_sym_record_token1] = ACTIONS(311),
    [aux_sym_record_token2] = ACTIONS(311),
    [sym_keyword] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(311),
    [anon_sym_AND] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(311),
    [anon_sym_OR] = ACTIONS(313),
    [anon_sym_QMARK_QMARK] = ACTIONS(311),
    [anon_sym_QMARK_COLON] = ACTIONS(311),
    [anon_sym_EQ] = ACTIONS(313),
    [anon_sym_IS] = ACTIONS(313),
    [anon_sym_BANG_EQ] = ACTIONS(311),
    [anon_sym_ISNOT] = ACTIONS(311),
    [anon_sym_EQ_EQ] = ACTIONS(311),
    [anon_sym_QMARK_EQ] = ACTIONS(311),
    [anon_sym_STAR_EQ] = ACTIONS(311),
    [anon_sym_TILDE] = ACTIONS(311),
    [anon_sym_BANG_TILDE] = ACTIONS(311),
    [anon_sym_QMARK_TILDE] = ACTIONS(311),
    [anon_sym_STAR_TILDE] = ACTIONS(311),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_LT_EQ] = ACTIONS(311),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_GT_EQ] = ACTIONS(311),
    [anon_sym_PLUS] = ACTIONS(311),
    [anon_sym_DASH] = ACTIONS(313),
    [anon_sym_STAR] = ACTIONS(313),
    [anon_sym_x] = ACTIONS(313),
    [anon_sym_SLASH] = ACTIONS(311),
    [anon_sym_] = ACTIONS(311),
    [anon_sym_STAR_STAR] = ACTIONS(311),
    [anon_sym_IN] = ACTIONS(313),
    [anon_sym_CONTAINS] = ACTIONS(313),
    [anon_sym_2] = ACTIONS(311),
    [anon_sym_CONTAINSNOT] = ACTIONS(313),
    [anon_sym_3] = ACTIONS(311),
    [anon_sym_CONTAINSALL] = ACTIONS(313),
    [anon_sym_4] = ACTIONS(311),
    [anon_sym_CONTAINSANY] = ACTIONS(313),
    [anon_sym_5] = ACTIONS(311),
    [anon_sym_CONTAINSNONE] = ACTIONS(313),
    [anon_sym_6] = ACTIONS(311),
    [anon_sym_INSIDE] = ACTIONS(313),
    [anon_sym_7] = ACTIONS(311),
    [anon_sym_NOTINSIDE] = ACTIONS(313),
    [anon_sym_NOTIN] = ACTIONS(311),
    [anon_sym_8] = ACTIONS(311),
    [anon_sym_ALLINSIDE] = ACTIONS(313),
    [anon_sym_9] = ACTIONS(311),
    [anon_sym_ANYINSIDE] = ACTIONS(313),
    [anon_sym_10] = ACTIONS(311),
    [anon_sym_NONEINSIDE] = ACTIONS(313),
    [anon_sym_11] = ACTIONS(311),
    [anon_sym_OUTSIDE] = ACTIONS(313),
    [anon_sym_INTERSECTS] = ACTIONS(313),
    [anon_sym_LPAREN] = ACTIONS(311),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(311),
    [anon_sym_RBRACK] = ACTIONS(311),
    [anon_sym_LBRACE] = ACTIONS(311),
    [anon_sym_RBRACE] = ACTIONS(313),
    [anon_sym_DASH_GT] = ACTIONS(311),
    [anon_sym_LT_DASH] = ACTIONS(311),
    [anon_sym_COMMA] = ACTIONS(311),
    [anon_sym_SEMI] = ACTIONS(311),
    [anon_sym_COLON] = ACTIONS(313),
    [anon_sym_any] = ACTIONS(313),
    [anon_sym_array] = ACTIONS(313),
    [anon_sym_bool] = ACTIONS(313),
    [anon_sym_datetime] = ACTIONS(313),
    [anon_sym_decimal] = ACTIONS(313),
    [anon_sym_duration] = ACTIONS(313),
    [anon_sym_float] = ACTIONS(313),
    [anon_sym_int] = ACTIONS(313),
    [anon_sym_number] = ACTIONS(313),
    [anon_sym_object] = ACTIONS(313),
    [anon_sym_string] = ACTIONS(313),
    [anon_sym_record] = ACTIONS(313),
    [anon_sym_geometry] = ACTIONS(313),
    [anon_sym_EDDSA] = ACTIONS(313),
    [anon_sym_ES256] = ACTIONS(313),
    [anon_sym_ES384] = ACTIONS(313),
    [anon_sym_ES512] = ACTIONS(313),
    [anon_sym_HS256] = ACTIONS(313),
    [anon_sym_HS384] = ACTIONS(313),
    [anon_sym_HS512] = ACTIONS(313),
    [anon_sym_PS256] = ACTIONS(313),
    [anon_sym_PS384] = ACTIONS(313),
    [anon_sym_PS512] = ACTIONS(313),
    [anon_sym_RS256] = ACTIONS(313),
    [anon_sym_RS384] = ACTIONS(313),
    [anon_sym_RS512] = ACTIONS(313),
    [aux_sym_function_token1] = ACTIONS(311),
    [aux_sym_function_token2] = ACTIONS(311),
    [anon_sym_count] = ACTIONS(313),
    [aux_sym_function_token3] = ACTIONS(311),
    [aux_sym_function_token4] = ACTIONS(311),
    [aux_sym_function_token5] = ACTIONS(311),
    [aux_sym_function_token6] = ACTIONS(311),
    [aux_sym_function_token7] = ACTIONS(311),
    [aux_sym_function_token8] = ACTIONS(311),
    [aux_sym_function_token9] = ACTIONS(311),
    [aux_sym_function_token10] = ACTIONS(313),
    [aux_sym_function_token11] = ACTIONS(311),
    [aux_sym_function_token12] = ACTIONS(313),
    [aux_sym_function_token13] = ACTIONS(311),
    [aux_sym_function_token14] = ACTIONS(311),
    [aux_sym_function_token15] = ACTIONS(311),
    [aux_sym_function_token16] = ACTIONS(313),
    [anon_sym_true] = ACTIONS(313),
    [anon_sym_false] = ACTIONS(313),
    [anon_sym_TRUE] = ACTIONS(313),
    [anon_sym_FALSE] = ACTIONS(313),
    [anon_sym_null] = ACTIONS(313),
    [anon_sym_NULL] = ACTIONS(313),
    [anon_sym_none] = ACTIONS(313),
    [anon_sym_NONE] = ACTIONS(313),
    [sym_variable] = ACTIONS(311),
    [anon_sym_SQUOTE] = ACTIONS(311),
    [anon_sym_DQUOTE] = ACTIONS(311),
  },
  [32] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(307),
    [anon_sym_RBRACE_SEMI] = ACTIONS(307),
    [anon_sym_RBRACE_COMMA] = ACTIONS(307),
    [aux_sym_future_token1] = ACTIONS(307),
    [aux_sym_casting_token1] = ACTIONS(307),
    [aux_sym_property_token1] = ACTIONS(309),
    [aux_sym_duration_token1] = ACTIONS(309),
    [aux_sym_constant_token1] = ACTIONS(307),
    [aux_sym_number_token1] = ACTIONS(309),
    [aux_sym_record_token1] = ACTIONS(307),
    [aux_sym_record_token2] = ACTIONS(307),
    [sym_keyword] = ACTIONS(309),
    [anon_sym_AMP_AMP] = ACTIONS(307),
    [anon_sym_AND] = ACTIONS(309),
    [anon_sym_PIPE_PIPE] = ACTIONS(307),
    [anon_sym_OR] = ACTIONS(309),
    [anon_sym_QMARK_QMARK] = ACTIONS(307),
    [anon_sym_QMARK_COLON] = ACTIONS(307),
    [anon_sym_EQ] = ACTIONS(309),
    [anon_sym_IS] = ACTIONS(309),
    [anon_sym_BANG_EQ] = ACTIONS(307),
    [anon_sym_ISNOT] = ACTIONS(307),
    [anon_sym_EQ_EQ] = ACTIONS(307),
    [anon_sym_QMARK_EQ] = ACTIONS(307),
    [anon_sym_STAR_EQ] = ACTIONS(307),
    [anon_sym_TILDE] = ACTIONS(307),
    [anon_sym_BANG_TILDE] = ACTIONS(307),
    [anon_sym_QMARK_TILDE] = ACTIONS(307),
    [anon_sym_STAR_TILDE] = ACTIONS(307),
    [anon_sym_LT] = ACTIONS(309),
    [anon_sym_LT_EQ] = ACTIONS(307),
    [anon_sym_GT] = ACTIONS(309),
    [anon_sym_GT_EQ] = ACTIONS(307),
    [anon_sym_PLUS] = ACTIONS(307),
    [anon_sym_DASH] = ACTIONS(309),
    [anon_sym_STAR] = ACTIONS(309),
    [anon_sym_x] = ACTIONS(309),
    [anon_sym_SLASH] = ACTIONS(307),
    [anon_sym_] = ACTIONS(307),
    [anon_sym_STAR_STAR] = ACTIONS(307),
    [anon_sym_IN] = ACTIONS(309),
    [anon_sym_CONTAINS] = ACTIONS(309),
    [anon_sym_2] = ACTIONS(307),
    [anon_sym_CONTAINSNOT] = ACTIONS(309),
    [anon_sym_3] = ACTIONS(307),
    [anon_sym_CONTAINSALL] = ACTIONS(309),
    [anon_sym_4] = ACTIONS(307),
    [anon_sym_CONTAINSANY] = ACTIONS(309),
    [anon_sym_5] = ACTIONS(307),
    [anon_sym_CONTAINSNONE] = ACTIONS(309),
    [anon_sym_6] = ACTIONS(307),
    [anon_sym_INSIDE] = ACTIONS(309),
    [anon_sym_7] = ACTIONS(307),
    [anon_sym_NOTINSIDE] = ACTIONS(309),
    [anon_sym_NOTIN] = ACTIONS(307),
    [anon_sym_8] = ACTIONS(307),
    [anon_sym_ALLINSIDE] = ACTIONS(309),
    [anon_sym_9] = ACTIONS(307),
    [anon_sym_ANYINSIDE] = ACTIONS(309),
    [anon_sym_10] = ACTIONS(307),
    [anon_sym_NONEINSIDE] = ACTIONS(309),
    [anon_sym_11] = ACTIONS(307),
    [anon_sym_OUTSIDE] = ACTIONS(309),
    [anon_sym_INTERSECTS] = ACTIONS(309),
    [anon_sym_LPAREN] = ACTIONS(307),
    [anon_sym_RPAREN] = ACTIONS(307),
    [anon_sym_LBRACK] = ACTIONS(307),
    [anon_sym_RBRACK] = ACTIONS(307),
    [anon_sym_LBRACE] = ACTIONS(307),
    [anon_sym_RBRACE] = ACTIONS(309),
    [anon_sym_DASH_GT] = ACTIONS(307),
    [anon_sym_LT_DASH] = ACTIONS(307),
    [anon_sym_COMMA] = ACTIONS(307),
    [anon_sym_SEMI] = ACTIONS(307),
    [anon_sym_COLON] = ACTIONS(309),
    [anon_sym_any] = ACTIONS(309),
    [anon_sym_array] = ACTIONS(309),
    [anon_sym_bool] = ACTIONS(309),
    [anon_sym_datetime] = ACTIONS(309),
    [anon_sym_decimal] = ACTIONS(309),
    [anon_sym_duration] = ACTIONS(309),
    [anon_sym_float] = ACTIONS(309),
    [anon_sym_int] = ACTIONS(309),
    [anon_sym_number] = ACTIONS(309),
    [anon_sym_object] = ACTIONS(309),
    [anon_sym_string] = ACTIONS(309),
    [anon_sym_record] = ACTIONS(309),
    [anon_sym_geometry] = ACTIONS(309),
    [anon_sym_EDDSA] = ACTIONS(309),
    [anon_sym_ES256] = ACTIONS(309),
    [anon_sym_ES384] = ACTIONS(309),
    [anon_sym_ES512] = ACTIONS(309),
    [anon_sym_HS256] = ACTIONS(309),
    [anon_sym_HS384] = ACTIONS(309),
    [anon_sym_HS512] = ACTIONS(309),
    [anon_sym_PS256] = ACTIONS(309),
    [anon_sym_PS384] = ACTIONS(309),
    [anon_sym_PS512] = ACTIONS(309),
    [anon_sym_RS256] = ACTIONS(309),
    [anon_sym_RS384] = ACTIONS(309),
    [anon_sym_RS512] = ACTIONS(309),
    [aux_sym_function_token1] = ACTIONS(307),
    [aux_sym_function_token2] = ACTIONS(307),
    [anon_sym_count] = ACTIONS(309),
    [aux_sym_function_token3] = ACTIONS(307),
    [aux_sym_function_token4] = ACTIONS(307),
    [aux_sym_function_token5] = ACTIONS(307),
    [aux_sym_function_token6] = ACTIONS(307),
    [aux_sym_function_token7] = ACTIONS(307),
    [aux_sym_function_token8] = ACTIONS(307),
    [aux_sym_function_token9] = ACTIONS(307),
    [aux_sym_function_token10] = ACTIONS(309),
    [aux_sym_function_token11] = ACTIONS(307),
    [aux_sym_function_token12] = ACTIONS(309),
    [aux_sym_function_token13] = ACTIONS(307),
    [aux_sym_function_token14] = ACTIONS(307),
    [aux_sym_function_token15] = ACTIONS(307),
    [aux_sym_function_token16] = ACTIONS(309),
    [anon_sym_true] = ACTIONS(309),
    [anon_sym_false] = ACTIONS(309),
    [anon_sym_TRUE] = ACTIONS(309),
    [anon_sym_FALSE] = ACTIONS(309),
    [anon_sym_null] = ACTIONS(309),
    [anon_sym_NULL] = ACTIONS(309),
    [anon_sym_none] = ACTIONS(309),
    [anon_sym_NONE] = ACTIONS(309),
    [sym_variable] = ACTIONS(307),
    [anon_sym_SQUOTE] = ACTIONS(307),
    [anon_sym_DQUOTE] = ACTIONS(307),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(259),
    [aux_sym_future_token1] = ACTIONS(259),
    [aux_sym_casting_token1] = ACTIONS(259),
    [aux_sym_property_token1] = ACTIONS(261),
    [aux_sym_duration_token1] = ACTIONS(261),
    [aux_sym_constant_token1] = ACTIONS(259),
    [aux_sym_number_token1] = ACTIONS(261),
    [aux_sym_record_token1] = ACTIONS(259),
    [aux_sym_record_token2] = ACTIONS(259),
    [sym_keyword] = ACTIONS(261),
    [anon_sym_AMP_AMP] = ACTIONS(259),
    [anon_sym_AND] = ACTIONS(261),
    [anon_sym_PIPE_PIPE] = ACTIONS(259),
    [anon_sym_OR] = ACTIONS(261),
    [anon_sym_QMARK_QMARK] = ACTIONS(259),
    [anon_sym_QMARK_COLON] = ACTIONS(259),
    [anon_sym_EQ] = ACTIONS(261),
    [anon_sym_IS] = ACTIONS(261),
    [anon_sym_BANG_EQ] = ACTIONS(259),
    [anon_sym_ISNOT] = ACTIONS(259),
    [anon_sym_EQ_EQ] = ACTIONS(259),
    [anon_sym_QMARK_EQ] = ACTIONS(259),
    [anon_sym_STAR_EQ] = ACTIONS(259),
    [anon_sym_TILDE] = ACTIONS(259),
    [anon_sym_BANG_TILDE] = ACTIONS(259),
    [anon_sym_QMARK_TILDE] = ACTIONS(259),
    [anon_sym_STAR_TILDE] = ACTIONS(259),
    [anon_sym_LT] = ACTIONS(261),
    [anon_sym_LT_EQ] = ACTIONS(259),
    [anon_sym_GT] = ACTIONS(261),
    [anon_sym_GT_EQ] = ACTIONS(259),
    [anon_sym_PLUS] = ACTIONS(259),
    [anon_sym_DASH] = ACTIONS(261),
    [anon_sym_STAR] = ACTIONS(261),
    [anon_sym_x] = ACTIONS(261),
    [anon_sym_SLASH] = ACTIONS(261),
    [anon_sym_] = ACTIONS(259),
    [anon_sym_STAR_STAR] = ACTIONS(259),
    [anon_sym_IN] = ACTIONS(261),
    [anon_sym_CONTAINS] = ACTIONS(261),
    [anon_sym_2] = ACTIONS(259),
    [anon_sym_CONTAINSNOT] = ACTIONS(261),
    [anon_sym_3] = ACTIONS(259),
    [anon_sym_CONTAINSALL] = ACTIONS(261),
    [anon_sym_4] = ACTIONS(259),
    [anon_sym_CONTAINSANY] = ACTIONS(261),
    [anon_sym_5] = ACTIONS(259),
    [anon_sym_CONTAINSNONE] = ACTIONS(261),
    [anon_sym_6] = ACTIONS(259),
    [anon_sym_INSIDE] = ACTIONS(261),
    [anon_sym_7] = ACTIONS(259),
    [anon_sym_NOTINSIDE] = ACTIONS(261),
    [anon_sym_NOTIN] = ACTIONS(259),
    [anon_sym_8] = ACTIONS(259),
    [anon_sym_ALLINSIDE] = ACTIONS(261),
    [anon_sym_9] = ACTIONS(259),
    [anon_sym_ANYINSIDE] = ACTIONS(261),
    [anon_sym_10] = ACTIONS(259),
    [anon_sym_NONEINSIDE] = ACTIONS(261),
    [anon_sym_11] = ACTIONS(259),
    [anon_sym_OUTSIDE] = ACTIONS(261),
    [anon_sym_INTERSECTS] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_RPAREN] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_RBRACK] = ACTIONS(259),
    [anon_sym_LBRACE] = ACTIONS(259),
    [anon_sym_RBRACE] = ACTIONS(259),
    [anon_sym_DASH_GT] = ACTIONS(259),
    [anon_sym_LT_DASH] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(259),
    [anon_sym_SEMI] = ACTIONS(259),
    [anon_sym_COLON] = ACTIONS(261),
    [anon_sym_any] = ACTIONS(261),
    [anon_sym_array] = ACTIONS(261),
    [anon_sym_bool] = ACTIONS(261),
    [anon_sym_datetime] = ACTIONS(261),
    [anon_sym_decimal] = ACTIONS(261),
    [anon_sym_duration] = ACTIONS(261),
    [anon_sym_float] = ACTIONS(261),
    [anon_sym_int] = ACTIONS(261),
    [anon_sym_number] = ACTIONS(261),
    [anon_sym_object] = ACTIONS(261),
    [anon_sym_string] = ACTIONS(261),
    [anon_sym_record] = ACTIONS(261),
    [anon_sym_geometry] = ACTIONS(261),
    [anon_sym_EDDSA] = ACTIONS(261),
    [anon_sym_ES256] = ACTIONS(261),
    [anon_sym_ES384] = ACTIONS(261),
    [anon_sym_ES512] = ACTIONS(261),
    [anon_sym_HS256] = ACTIONS(261),
    [anon_sym_HS384] = ACTIONS(261),
    [anon_sym_HS512] = ACTIONS(261),
    [anon_sym_PS256] = ACTIONS(261),
    [anon_sym_PS384] = ACTIONS(261),
    [anon_sym_PS512] = ACTIONS(261),
    [anon_sym_RS256] = ACTIONS(261),
    [anon_sym_RS384] = ACTIONS(261),
    [anon_sym_RS512] = ACTIONS(261),
    [aux_sym_function_token1] = ACTIONS(259),
    [aux_sym_function_token2] = ACTIONS(259),
    [anon_sym_count] = ACTIONS(261),
    [aux_sym_function_token3] = ACTIONS(259),
    [aux_sym_function_token4] = ACTIONS(259),
    [aux_sym_function_token5] = ACTIONS(259),
    [aux_sym_function_token6] = ACTIONS(259),
    [aux_sym_function_token7] = ACTIONS(259),
    [aux_sym_function_token8] = ACTIONS(259),
    [aux_sym_function_token9] = ACTIONS(259),
    [aux_sym_function_token10] = ACTIONS(261),
    [aux_sym_function_token11] = ACTIONS(259),
    [aux_sym_function_token12] = ACTIONS(261),
    [aux_sym_function_token13] = ACTIONS(259),
    [aux_sym_function_token14] = ACTIONS(259),
    [aux_sym_function_token15] = ACTIONS(259),
    [aux_sym_function_token16] = ACTIONS(261),
    [anon_sym_true] = ACTIONS(261),
    [anon_sym_false] = ACTIONS(261),
    [anon_sym_TRUE] = ACTIONS(261),
    [anon_sym_FALSE] = ACTIONS(261),
    [anon_sym_null] = ACTIONS(261),
    [anon_sym_NULL] = ACTIONS(261),
    [anon_sym_none] = ACTIONS(261),
    [anon_sym_NONE] = ACTIONS(261),
    [sym_variable] = ACTIONS(259),
    [sym_comment] = ACTIONS(259),
    [anon_sym_SQUOTE] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(259),
  },
  [34] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(255),
    [anon_sym_RBRACE_SEMI] = ACTIONS(255),
    [anon_sym_RBRACE_COMMA] = ACTIONS(255),
    [aux_sym_future_token1] = ACTIONS(255),
    [aux_sym_casting_token1] = ACTIONS(255),
    [aux_sym_property_token1] = ACTIONS(257),
    [aux_sym_duration_token1] = ACTIONS(257),
    [aux_sym_constant_token1] = ACTIONS(255),
    [aux_sym_number_token1] = ACTIONS(257),
    [aux_sym_record_token1] = ACTIONS(255),
    [aux_sym_record_token2] = ACTIONS(255),
    [sym_keyword] = ACTIONS(257),
    [anon_sym_AMP_AMP] = ACTIONS(255),
    [anon_sym_AND] = ACTIONS(257),
    [anon_sym_PIPE_PIPE] = ACTIONS(255),
    [anon_sym_OR] = ACTIONS(257),
    [anon_sym_QMARK_QMARK] = ACTIONS(255),
    [anon_sym_QMARK_COLON] = ACTIONS(255),
    [anon_sym_EQ] = ACTIONS(257),
    [anon_sym_IS] = ACTIONS(257),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_ISNOT] = ACTIONS(255),
    [anon_sym_EQ_EQ] = ACTIONS(255),
    [anon_sym_QMARK_EQ] = ACTIONS(255),
    [anon_sym_STAR_EQ] = ACTIONS(255),
    [anon_sym_TILDE] = ACTIONS(255),
    [anon_sym_BANG_TILDE] = ACTIONS(255),
    [anon_sym_QMARK_TILDE] = ACTIONS(255),
    [anon_sym_STAR_TILDE] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(257),
    [anon_sym_STAR] = ACTIONS(257),
    [anon_sym_x] = ACTIONS(257),
    [anon_sym_SLASH] = ACTIONS(255),
    [anon_sym_] = ACTIONS(255),
    [anon_sym_STAR_STAR] = ACTIONS(255),
    [anon_sym_IN] = ACTIONS(257),
    [anon_sym_CONTAINS] = ACTIONS(257),
    [anon_sym_2] = ACTIONS(255),
    [anon_sym_CONTAINSNOT] = ACTIONS(257),
    [anon_sym_3] = ACTIONS(255),
    [anon_sym_CONTAINSALL] = ACTIONS(257),
    [anon_sym_4] = ACTIONS(255),
    [anon_sym_CONTAINSANY] = ACTIONS(257),
    [anon_sym_5] = ACTIONS(255),
    [anon_sym_CONTAINSNONE] = ACTIONS(257),
    [anon_sym_6] = ACTIONS(255),
    [anon_sym_INSIDE] = ACTIONS(257),
    [anon_sym_7] = ACTIONS(255),
    [anon_sym_NOTINSIDE] = ACTIONS(257),
    [anon_sym_NOTIN] = ACTIONS(255),
    [anon_sym_8] = ACTIONS(255),
    [anon_sym_ALLINSIDE] = ACTIONS(257),
    [anon_sym_9] = ACTIONS(255),
    [anon_sym_ANYINSIDE] = ACTIONS(257),
    [anon_sym_10] = ACTIONS(255),
    [anon_sym_NONEINSIDE] = ACTIONS(257),
    [anon_sym_11] = ACTIONS(255),
    [anon_sym_OUTSIDE] = ACTIONS(257),
    [anon_sym_INTERSECTS] = ACTIONS(257),
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_RPAREN] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(255),
    [anon_sym_RBRACK] = ACTIONS(255),
    [anon_sym_LBRACE] = ACTIONS(255),
    [anon_sym_RBRACE] = ACTIONS(257),
    [anon_sym_DASH_GT] = ACTIONS(255),
    [anon_sym_LT_DASH] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(255),
    [anon_sym_SEMI] = ACTIONS(255),
    [anon_sym_COLON] = ACTIONS(257),
    [anon_sym_any] = ACTIONS(257),
    [anon_sym_array] = ACTIONS(257),
    [anon_sym_bool] = ACTIONS(257),
    [anon_sym_datetime] = ACTIONS(257),
    [anon_sym_decimal] = ACTIONS(257),
    [anon_sym_duration] = ACTIONS(257),
    [anon_sym_float] = ACTIONS(257),
    [anon_sym_int] = ACTIONS(257),
    [anon_sym_number] = ACTIONS(257),
    [anon_sym_object] = ACTIONS(257),
    [anon_sym_string] = ACTIONS(257),
    [anon_sym_record] = ACTIONS(257),
    [anon_sym_geometry] = ACTIONS(257),
    [anon_sym_EDDSA] = ACTIONS(257),
    [anon_sym_ES256] = ACTIONS(257),
    [anon_sym_ES384] = ACTIONS(257),
    [anon_sym_ES512] = ACTIONS(257),
    [anon_sym_HS256] = ACTIONS(257),
    [anon_sym_HS384] = ACTIONS(257),
    [anon_sym_HS512] = ACTIONS(257),
    [anon_sym_PS256] = ACTIONS(257),
    [anon_sym_PS384] = ACTIONS(257),
    [anon_sym_PS512] = ACTIONS(257),
    [anon_sym_RS256] = ACTIONS(257),
    [anon_sym_RS384] = ACTIONS(257),
    [anon_sym_RS512] = ACTIONS(257),
    [aux_sym_function_token1] = ACTIONS(255),
    [aux_sym_function_token2] = ACTIONS(255),
    [anon_sym_count] = ACTIONS(257),
    [aux_sym_function_token3] = ACTIONS(255),
    [aux_sym_function_token4] = ACTIONS(255),
    [aux_sym_function_token5] = ACTIONS(255),
    [aux_sym_function_token6] = ACTIONS(255),
    [aux_sym_function_token7] = ACTIONS(255),
    [aux_sym_function_token8] = ACTIONS(255),
    [aux_sym_function_token9] = ACTIONS(255),
    [aux_sym_function_token10] = ACTIONS(257),
    [aux_sym_function_token11] = ACTIONS(255),
    [aux_sym_function_token12] = ACTIONS(257),
    [aux_sym_function_token13] = ACTIONS(255),
    [aux_sym_function_token14] = ACTIONS(255),
    [aux_sym_function_token15] = ACTIONS(255),
    [aux_sym_function_token16] = ACTIONS(257),
    [anon_sym_true] = ACTIONS(257),
    [anon_sym_false] = ACTIONS(257),
    [anon_sym_TRUE] = ACTIONS(257),
    [anon_sym_FALSE] = ACTIONS(257),
    [anon_sym_null] = ACTIONS(257),
    [anon_sym_NULL] = ACTIONS(257),
    [anon_sym_none] = ACTIONS(257),
    [anon_sym_NONE] = ACTIONS(257),
    [sym_variable] = ACTIONS(255),
    [anon_sym_SQUOTE] = ACTIONS(255),
    [anon_sym_DQUOTE] = ACTIONS(255),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(323),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(323),
    [aux_sym_future_token1] = ACTIONS(323),
    [aux_sym_casting_token1] = ACTIONS(323),
    [aux_sym_property_token1] = ACTIONS(325),
    [aux_sym_duration_token1] = ACTIONS(325),
    [aux_sym_constant_token1] = ACTIONS(323),
    [aux_sym_number_token1] = ACTIONS(325),
    [aux_sym_record_token1] = ACTIONS(323),
    [aux_sym_record_token2] = ACTIONS(323),
    [sym_keyword] = ACTIONS(325),
    [anon_sym_AMP_AMP] = ACTIONS(323),
    [anon_sym_AND] = ACTIONS(325),
    [anon_sym_PIPE_PIPE] = ACTIONS(323),
    [anon_sym_OR] = ACTIONS(325),
    [anon_sym_QMARK_QMARK] = ACTIONS(323),
    [anon_sym_QMARK_COLON] = ACTIONS(323),
    [anon_sym_EQ] = ACTIONS(325),
    [anon_sym_IS] = ACTIONS(325),
    [anon_sym_BANG_EQ] = ACTIONS(323),
    [anon_sym_ISNOT] = ACTIONS(323),
    [anon_sym_EQ_EQ] = ACTIONS(323),
    [anon_sym_QMARK_EQ] = ACTIONS(323),
    [anon_sym_STAR_EQ] = ACTIONS(323),
    [anon_sym_TILDE] = ACTIONS(323),
    [anon_sym_BANG_TILDE] = ACTIONS(323),
    [anon_sym_QMARK_TILDE] = ACTIONS(323),
    [anon_sym_STAR_TILDE] = ACTIONS(323),
    [anon_sym_LT] = ACTIONS(325),
    [anon_sym_LT_EQ] = ACTIONS(323),
    [anon_sym_GT] = ACTIONS(325),
    [anon_sym_GT_EQ] = ACTIONS(323),
    [anon_sym_PLUS] = ACTIONS(323),
    [anon_sym_DASH] = ACTIONS(325),
    [anon_sym_STAR] = ACTIONS(325),
    [anon_sym_x] = ACTIONS(325),
    [anon_sym_SLASH] = ACTIONS(325),
    [anon_sym_] = ACTIONS(323),
    [anon_sym_STAR_STAR] = ACTIONS(323),
    [anon_sym_IN] = ACTIONS(325),
    [anon_sym_CONTAINS] = ACTIONS(325),
    [anon_sym_2] = ACTIONS(323),
    [anon_sym_CONTAINSNOT] = ACTIONS(325),
    [anon_sym_3] = ACTIONS(323),
    [anon_sym_CONTAINSALL] = ACTIONS(325),
    [anon_sym_4] = ACTIONS(323),
    [anon_sym_CONTAINSANY] = ACTIONS(325),
    [anon_sym_5] = ACTIONS(323),
    [anon_sym_CONTAINSNONE] = ACTIONS(325),
    [anon_sym_6] = ACTIONS(323),
    [anon_sym_INSIDE] = ACTIONS(325),
    [anon_sym_7] = ACTIONS(323),
    [anon_sym_NOTINSIDE] = ACTIONS(325),
    [anon_sym_NOTIN] = ACTIONS(323),
    [anon_sym_8] = ACTIONS(323),
    [anon_sym_ALLINSIDE] = ACTIONS(325),
    [anon_sym_9] = ACTIONS(323),
    [anon_sym_ANYINSIDE] = ACTIONS(325),
    [anon_sym_10] = ACTIONS(323),
    [anon_sym_NONEINSIDE] = ACTIONS(325),
    [anon_sym_11] = ACTIONS(323),
    [anon_sym_OUTSIDE] = ACTIONS(325),
    [anon_sym_INTERSECTS] = ACTIONS(325),
    [anon_sym_LPAREN] = ACTIONS(323),
    [anon_sym_RPAREN] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(323),
    [anon_sym_RBRACK] = ACTIONS(323),
    [anon_sym_LBRACE] = ACTIONS(323),
    [anon_sym_RBRACE] = ACTIONS(323),
    [anon_sym_DASH_GT] = ACTIONS(323),
    [anon_sym_LT_DASH] = ACTIONS(323),
    [anon_sym_COMMA] = ACTIONS(323),
    [anon_sym_SEMI] = ACTIONS(323),
    [anon_sym_COLON] = ACTIONS(325),
    [anon_sym_any] = ACTIONS(325),
    [anon_sym_array] = ACTIONS(325),
    [anon_sym_bool] = ACTIONS(325),
    [anon_sym_datetime] = ACTIONS(325),
    [anon_sym_decimal] = ACTIONS(325),
    [anon_sym_duration] = ACTIONS(325),
    [anon_sym_float] = ACTIONS(325),
    [anon_sym_int] = ACTIONS(325),
    [anon_sym_number] = ACTIONS(325),
    [anon_sym_object] = ACTIONS(325),
    [anon_sym_string] = ACTIONS(325),
    [anon_sym_record] = ACTIONS(325),
    [anon_sym_geometry] = ACTIONS(325),
    [anon_sym_EDDSA] = ACTIONS(325),
    [anon_sym_ES256] = ACTIONS(325),
    [anon_sym_ES384] = ACTIONS(325),
    [anon_sym_ES512] = ACTIONS(325),
    [anon_sym_HS256] = ACTIONS(325),
    [anon_sym_HS384] = ACTIONS(325),
    [anon_sym_HS512] = ACTIONS(325),
    [anon_sym_PS256] = ACTIONS(325),
    [anon_sym_PS384] = ACTIONS(325),
    [anon_sym_PS512] = ACTIONS(325),
    [anon_sym_RS256] = ACTIONS(325),
    [anon_sym_RS384] = ACTIONS(325),
    [anon_sym_RS512] = ACTIONS(325),
    [aux_sym_function_token1] = ACTIONS(323),
    [aux_sym_function_token2] = ACTIONS(323),
    [anon_sym_count] = ACTIONS(325),
    [aux_sym_function_token3] = ACTIONS(323),
    [aux_sym_function_token4] = ACTIONS(323),
    [aux_sym_function_token5] = ACTIONS(323),
    [aux_sym_function_token6] = ACTIONS(323),
    [aux_sym_function_token7] = ACTIONS(323),
    [aux_sym_function_token8] = ACTIONS(323),
    [aux_sym_function_token9] = ACTIONS(323),
    [aux_sym_function_token10] = ACTIONS(325),
    [aux_sym_function_token11] = ACTIONS(323),
    [aux_sym_function_token12] = ACTIONS(325),
    [aux_sym_function_token13] = ACTIONS(323),
    [aux_sym_function_token14] = ACTIONS(323),
    [aux_sym_function_token15] = ACTIONS(323),
    [aux_sym_function_token16] = ACTIONS(325),
    [anon_sym_true] = ACTIONS(325),
    [anon_sym_false] = ACTIONS(325),
    [anon_sym_TRUE] = ACTIONS(325),
    [anon_sym_FALSE] = ACTIONS(325),
    [anon_sym_null] = ACTIONS(325),
    [anon_sym_NULL] = ACTIONS(325),
    [anon_sym_none] = ACTIONS(325),
    [anon_sym_NONE] = ACTIONS(325),
    [sym_variable] = ACTIONS(323),
    [sym_comment] = ACTIONS(323),
    [anon_sym_SQUOTE] = ACTIONS(323),
    [anon_sym_DQUOTE] = ACTIONS(323),
  },
  [36] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(303),
    [anon_sym_RBRACE_SEMI] = ACTIONS(303),
    [anon_sym_RBRACE_COMMA] = ACTIONS(303),
    [aux_sym_future_token1] = ACTIONS(303),
    [aux_sym_casting_token1] = ACTIONS(303),
    [aux_sym_property_token1] = ACTIONS(305),
    [aux_sym_duration_token1] = ACTIONS(305),
    [aux_sym_constant_token1] = ACTIONS(303),
    [aux_sym_number_token1] = ACTIONS(305),
    [aux_sym_record_token1] = ACTIONS(303),
    [aux_sym_record_token2] = ACTIONS(303),
    [sym_keyword] = ACTIONS(305),
    [anon_sym_AMP_AMP] = ACTIONS(303),
    [anon_sym_AND] = ACTIONS(305),
    [anon_sym_PIPE_PIPE] = ACTIONS(303),
    [anon_sym_OR] = ACTIONS(305),
    [anon_sym_QMARK_QMARK] = ACTIONS(303),
    [anon_sym_QMARK_COLON] = ACTIONS(303),
    [anon_sym_EQ] = ACTIONS(305),
    [anon_sym_IS] = ACTIONS(305),
    [anon_sym_BANG_EQ] = ACTIONS(303),
    [anon_sym_ISNOT] = ACTIONS(303),
    [anon_sym_EQ_EQ] = ACTIONS(303),
    [anon_sym_QMARK_EQ] = ACTIONS(303),
    [anon_sym_STAR_EQ] = ACTIONS(303),
    [anon_sym_TILDE] = ACTIONS(303),
    [anon_sym_BANG_TILDE] = ACTIONS(303),
    [anon_sym_QMARK_TILDE] = ACTIONS(303),
    [anon_sym_STAR_TILDE] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(305),
    [anon_sym_LT_EQ] = ACTIONS(303),
    [anon_sym_GT] = ACTIONS(305),
    [anon_sym_GT_EQ] = ACTIONS(303),
    [anon_sym_PLUS] = ACTIONS(303),
    [anon_sym_DASH] = ACTIONS(305),
    [anon_sym_STAR] = ACTIONS(305),
    [anon_sym_x] = ACTIONS(305),
    [anon_sym_SLASH] = ACTIONS(303),
    [anon_sym_] = ACTIONS(303),
    [anon_sym_STAR_STAR] = ACTIONS(303),
    [anon_sym_IN] = ACTIONS(305),
    [anon_sym_CONTAINS] = ACTIONS(305),
    [anon_sym_2] = ACTIONS(303),
    [anon_sym_CONTAINSNOT] = ACTIONS(305),
    [anon_sym_3] = ACTIONS(303),
    [anon_sym_CONTAINSALL] = ACTIONS(305),
    [anon_sym_4] = ACTIONS(303),
    [anon_sym_CONTAINSANY] = ACTIONS(305),
    [anon_sym_5] = ACTIONS(303),
    [anon_sym_CONTAINSNONE] = ACTIONS(305),
    [anon_sym_6] = ACTIONS(303),
    [anon_sym_INSIDE] = ACTIONS(305),
    [anon_sym_7] = ACTIONS(303),
    [anon_sym_NOTINSIDE] = ACTIONS(305),
    [anon_sym_NOTIN] = ACTIONS(303),
    [anon_sym_8] = ACTIONS(303),
    [anon_sym_ALLINSIDE] = ACTIONS(305),
    [anon_sym_9] = ACTIONS(303),
    [anon_sym_ANYINSIDE] = ACTIONS(305),
    [anon_sym_10] = ACTIONS(303),
    [anon_sym_NONEINSIDE] = ACTIONS(305),
    [anon_sym_11] = ACTIONS(303),
    [anon_sym_OUTSIDE] = ACTIONS(305),
    [anon_sym_INTERSECTS] = ACTIONS(305),
    [anon_sym_LPAREN] = ACTIONS(303),
    [anon_sym_RPAREN] = ACTIONS(303),
    [anon_sym_LBRACK] = ACTIONS(303),
    [anon_sym_RBRACK] = ACTIONS(303),
    [anon_sym_LBRACE] = ACTIONS(303),
    [anon_sym_RBRACE] = ACTIONS(305),
    [anon_sym_DASH_GT] = ACTIONS(303),
    [anon_sym_LT_DASH] = ACTIONS(303),
    [anon_sym_COMMA] = ACTIONS(303),
    [anon_sym_SEMI] = ACTIONS(303),
    [anon_sym_COLON] = ACTIONS(305),
    [anon_sym_any] = ACTIONS(305),
    [anon_sym_array] = ACTIONS(305),
    [anon_sym_bool] = ACTIONS(305),
    [anon_sym_datetime] = ACTIONS(305),
    [anon_sym_decimal] = ACTIONS(305),
    [anon_sym_duration] = ACTIONS(305),
    [anon_sym_float] = ACTIONS(305),
    [anon_sym_int] = ACTIONS(305),
    [anon_sym_number] = ACTIONS(305),
    [anon_sym_object] = ACTIONS(305),
    [anon_sym_string] = ACTIONS(305),
    [anon_sym_record] = ACTIONS(305),
    [anon_sym_geometry] = ACTIONS(305),
    [anon_sym_EDDSA] = ACTIONS(305),
    [anon_sym_ES256] = ACTIONS(305),
    [anon_sym_ES384] = ACTIONS(305),
    [anon_sym_ES512] = ACTIONS(305),
    [anon_sym_HS256] = ACTIONS(305),
    [anon_sym_HS384] = ACTIONS(305),
    [anon_sym_HS512] = ACTIONS(305),
    [anon_sym_PS256] = ACTIONS(305),
    [anon_sym_PS384] = ACTIONS(305),
    [anon_sym_PS512] = ACTIONS(305),
    [anon_sym_RS256] = ACTIONS(305),
    [anon_sym_RS384] = ACTIONS(305),
    [anon_sym_RS512] = ACTIONS(305),
    [aux_sym_function_token1] = ACTIONS(303),
    [aux_sym_function_token2] = ACTIONS(303),
    [anon_sym_count] = ACTIONS(305),
    [aux_sym_function_token3] = ACTIONS(303),
    [aux_sym_function_token4] = ACTIONS(303),
    [aux_sym_function_token5] = ACTIONS(303),
    [aux_sym_function_token6] = ACTIONS(303),
    [aux_sym_function_token7] = ACTIONS(303),
    [aux_sym_function_token8] = ACTIONS(303),
    [aux_sym_function_token9] = ACTIONS(303),
    [aux_sym_function_token10] = ACTIONS(305),
    [aux_sym_function_token11] = ACTIONS(303),
    [aux_sym_function_token12] = ACTIONS(305),
    [aux_sym_function_token13] = ACTIONS(303),
    [aux_sym_function_token14] = ACTIONS(303),
    [aux_sym_function_token15] = ACTIONS(303),
    [aux_sym_function_token16] = ACTIONS(305),
    [anon_sym_true] = ACTIONS(305),
    [anon_sym_false] = ACTIONS(305),
    [anon_sym_TRUE] = ACTIONS(305),
    [anon_sym_FALSE] = ACTIONS(305),
    [anon_sym_null] = ACTIONS(305),
    [anon_sym_NULL] = ACTIONS(305),
    [anon_sym_none] = ACTIONS(305),
    [anon_sym_NONE] = ACTIONS(305),
    [sym_variable] = ACTIONS(303),
    [anon_sym_SQUOTE] = ACTIONS(303),
    [anon_sym_DQUOTE] = ACTIONS(303),
  },
  [37] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(299),
    [anon_sym_RBRACE_SEMI] = ACTIONS(299),
    [anon_sym_RBRACE_COMMA] = ACTIONS(299),
    [aux_sym_future_token1] = ACTIONS(299),
    [aux_sym_casting_token1] = ACTIONS(299),
    [aux_sym_property_token1] = ACTIONS(301),
    [aux_sym_duration_token1] = ACTIONS(301),
    [aux_sym_constant_token1] = ACTIONS(299),
    [aux_sym_number_token1] = ACTIONS(301),
    [aux_sym_record_token1] = ACTIONS(299),
    [aux_sym_record_token2] = ACTIONS(299),
    [sym_keyword] = ACTIONS(301),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [anon_sym_AND] = ACTIONS(301),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_OR] = ACTIONS(301),
    [anon_sym_QMARK_QMARK] = ACTIONS(299),
    [anon_sym_QMARK_COLON] = ACTIONS(299),
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_IS] = ACTIONS(301),
    [anon_sym_BANG_EQ] = ACTIONS(299),
    [anon_sym_ISNOT] = ACTIONS(299),
    [anon_sym_EQ_EQ] = ACTIONS(299),
    [anon_sym_QMARK_EQ] = ACTIONS(299),
    [anon_sym_STAR_EQ] = ACTIONS(299),
    [anon_sym_TILDE] = ACTIONS(299),
    [anon_sym_BANG_TILDE] = ACTIONS(299),
    [anon_sym_QMARK_TILDE] = ACTIONS(299),
    [anon_sym_STAR_TILDE] = ACTIONS(299),
    [anon_sym_LT] = ACTIONS(301),
    [anon_sym_LT_EQ] = ACTIONS(299),
    [anon_sym_GT] = ACTIONS(301),
    [anon_sym_GT_EQ] = ACTIONS(299),
    [anon_sym_PLUS] = ACTIONS(299),
    [anon_sym_DASH] = ACTIONS(301),
    [anon_sym_STAR] = ACTIONS(301),
    [anon_sym_x] = ACTIONS(301),
    [anon_sym_SLASH] = ACTIONS(299),
    [anon_sym_] = ACTIONS(299),
    [anon_sym_STAR_STAR] = ACTIONS(299),
    [anon_sym_IN] = ACTIONS(301),
    [anon_sym_CONTAINS] = ACTIONS(301),
    [anon_sym_2] = ACTIONS(299),
    [anon_sym_CONTAINSNOT] = ACTIONS(301),
    [anon_sym_3] = ACTIONS(299),
    [anon_sym_CONTAINSALL] = ACTIONS(301),
    [anon_sym_4] = ACTIONS(299),
    [anon_sym_CONTAINSANY] = ACTIONS(301),
    [anon_sym_5] = ACTIONS(299),
    [anon_sym_CONTAINSNONE] = ACTIONS(301),
    [anon_sym_6] = ACTIONS(299),
    [anon_sym_INSIDE] = ACTIONS(301),
    [anon_sym_7] = ACTIONS(299),
    [anon_sym_NOTINSIDE] = ACTIONS(301),
    [anon_sym_NOTIN] = ACTIONS(299),
    [anon_sym_8] = ACTIONS(299),
    [anon_sym_ALLINSIDE] = ACTIONS(301),
    [anon_sym_9] = ACTIONS(299),
    [anon_sym_ANYINSIDE] = ACTIONS(301),
    [anon_sym_10] = ACTIONS(299),
    [anon_sym_NONEINSIDE] = ACTIONS(301),
    [anon_sym_11] = ACTIONS(299),
    [anon_sym_OUTSIDE] = ACTIONS(301),
    [anon_sym_INTERSECTS] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(299),
    [anon_sym_RPAREN] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(299),
    [anon_sym_RBRACK] = ACTIONS(299),
    [anon_sym_LBRACE] = ACTIONS(299),
    [anon_sym_RBRACE] = ACTIONS(301),
    [anon_sym_DASH_GT] = ACTIONS(299),
    [anon_sym_LT_DASH] = ACTIONS(299),
    [anon_sym_COMMA] = ACTIONS(299),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_COLON] = ACTIONS(301),
    [anon_sym_any] = ACTIONS(301),
    [anon_sym_array] = ACTIONS(301),
    [anon_sym_bool] = ACTIONS(301),
    [anon_sym_datetime] = ACTIONS(301),
    [anon_sym_decimal] = ACTIONS(301),
    [anon_sym_duration] = ACTIONS(301),
    [anon_sym_float] = ACTIONS(301),
    [anon_sym_int] = ACTIONS(301),
    [anon_sym_number] = ACTIONS(301),
    [anon_sym_object] = ACTIONS(301),
    [anon_sym_string] = ACTIONS(301),
    [anon_sym_record] = ACTIONS(301),
    [anon_sym_geometry] = ACTIONS(301),
    [anon_sym_EDDSA] = ACTIONS(301),
    [anon_sym_ES256] = ACTIONS(301),
    [anon_sym_ES384] = ACTIONS(301),
    [anon_sym_ES512] = ACTIONS(301),
    [anon_sym_HS256] = ACTIONS(301),
    [anon_sym_HS384] = ACTIONS(301),
    [anon_sym_HS512] = ACTIONS(301),
    [anon_sym_PS256] = ACTIONS(301),
    [anon_sym_PS384] = ACTIONS(301),
    [anon_sym_PS512] = ACTIONS(301),
    [anon_sym_RS256] = ACTIONS(301),
    [anon_sym_RS384] = ACTIONS(301),
    [anon_sym_RS512] = ACTIONS(301),
    [aux_sym_function_token1] = ACTIONS(299),
    [aux_sym_function_token2] = ACTIONS(299),
    [anon_sym_count] = ACTIONS(301),
    [aux_sym_function_token3] = ACTIONS(299),
    [aux_sym_function_token4] = ACTIONS(299),
    [aux_sym_function_token5] = ACTIONS(299),
    [aux_sym_function_token6] = ACTIONS(299),
    [aux_sym_function_token7] = ACTIONS(299),
    [aux_sym_function_token8] = ACTIONS(299),
    [aux_sym_function_token9] = ACTIONS(299),
    [aux_sym_function_token10] = ACTIONS(301),
    [aux_sym_function_token11] = ACTIONS(299),
    [aux_sym_function_token12] = ACTIONS(301),
    [aux_sym_function_token13] = ACTIONS(299),
    [aux_sym_function_token14] = ACTIONS(299),
    [aux_sym_function_token15] = ACTIONS(299),
    [aux_sym_function_token16] = ACTIONS(301),
    [anon_sym_true] = ACTIONS(301),
    [anon_sym_false] = ACTIONS(301),
    [anon_sym_TRUE] = ACTIONS(301),
    [anon_sym_FALSE] = ACTIONS(301),
    [anon_sym_null] = ACTIONS(301),
    [anon_sym_NULL] = ACTIONS(301),
    [anon_sym_none] = ACTIONS(301),
    [anon_sym_NONE] = ACTIONS(301),
    [sym_variable] = ACTIONS(299),
    [anon_sym_SQUOTE] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(299),
  },
  [38] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(295),
    [anon_sym_RBRACE_SEMI] = ACTIONS(295),
    [anon_sym_RBRACE_COMMA] = ACTIONS(295),
    [aux_sym_future_token1] = ACTIONS(295),
    [aux_sym_casting_token1] = ACTIONS(295),
    [aux_sym_property_token1] = ACTIONS(297),
    [aux_sym_duration_token1] = ACTIONS(297),
    [aux_sym_constant_token1] = ACTIONS(295),
    [aux_sym_number_token1] = ACTIONS(297),
    [aux_sym_record_token1] = ACTIONS(295),
    [aux_sym_record_token2] = ACTIONS(295),
    [sym_keyword] = ACTIONS(297),
    [anon_sym_AMP_AMP] = ACTIONS(295),
    [anon_sym_AND] = ACTIONS(297),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_OR] = ACTIONS(297),
    [anon_sym_QMARK_QMARK] = ACTIONS(295),
    [anon_sym_QMARK_COLON] = ACTIONS(295),
    [anon_sym_EQ] = ACTIONS(297),
    [anon_sym_IS] = ACTIONS(297),
    [anon_sym_BANG_EQ] = ACTIONS(295),
    [anon_sym_ISNOT] = ACTIONS(295),
    [anon_sym_EQ_EQ] = ACTIONS(295),
    [anon_sym_QMARK_EQ] = ACTIONS(295),
    [anon_sym_STAR_EQ] = ACTIONS(295),
    [anon_sym_TILDE] = ACTIONS(295),
    [anon_sym_BANG_TILDE] = ACTIONS(295),
    [anon_sym_QMARK_TILDE] = ACTIONS(295),
    [anon_sym_STAR_TILDE] = ACTIONS(295),
    [anon_sym_LT] = ACTIONS(297),
    [anon_sym_LT_EQ] = ACTIONS(295),
    [anon_sym_GT] = ACTIONS(297),
    [anon_sym_GT_EQ] = ACTIONS(295),
    [anon_sym_PLUS] = ACTIONS(295),
    [anon_sym_DASH] = ACTIONS(297),
    [anon_sym_STAR] = ACTIONS(297),
    [anon_sym_x] = ACTIONS(297),
    [anon_sym_SLASH] = ACTIONS(295),
    [anon_sym_] = ACTIONS(295),
    [anon_sym_STAR_STAR] = ACTIONS(295),
    [anon_sym_IN] = ACTIONS(297),
    [anon_sym_CONTAINS] = ACTIONS(297),
    [anon_sym_2] = ACTIONS(295),
    [anon_sym_CONTAINSNOT] = ACTIONS(297),
    [anon_sym_3] = ACTIONS(295),
    [anon_sym_CONTAINSALL] = ACTIONS(297),
    [anon_sym_4] = ACTIONS(295),
    [anon_sym_CONTAINSANY] = ACTIONS(297),
    [anon_sym_5] = ACTIONS(295),
    [anon_sym_CONTAINSNONE] = ACTIONS(297),
    [anon_sym_6] = ACTIONS(295),
    [anon_sym_INSIDE] = ACTIONS(297),
    [anon_sym_7] = ACTIONS(295),
    [anon_sym_NOTINSIDE] = ACTIONS(297),
    [anon_sym_NOTIN] = ACTIONS(295),
    [anon_sym_8] = ACTIONS(295),
    [anon_sym_ALLINSIDE] = ACTIONS(297),
    [anon_sym_9] = ACTIONS(295),
    [anon_sym_ANYINSIDE] = ACTIONS(297),
    [anon_sym_10] = ACTIONS(295),
    [anon_sym_NONEINSIDE] = ACTIONS(297),
    [anon_sym_11] = ACTIONS(295),
    [anon_sym_OUTSIDE] = ACTIONS(297),
    [anon_sym_INTERSECTS] = ACTIONS(297),
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_RPAREN] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(295),
    [anon_sym_RBRACK] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(295),
    [anon_sym_RBRACE] = ACTIONS(297),
    [anon_sym_DASH_GT] = ACTIONS(295),
    [anon_sym_LT_DASH] = ACTIONS(295),
    [anon_sym_COMMA] = ACTIONS(295),
    [anon_sym_SEMI] = ACTIONS(295),
    [anon_sym_COLON] = ACTIONS(297),
    [anon_sym_any] = ACTIONS(297),
    [anon_sym_array] = ACTIONS(297),
    [anon_sym_bool] = ACTIONS(297),
    [anon_sym_datetime] = ACTIONS(297),
    [anon_sym_decimal] = ACTIONS(297),
    [anon_sym_duration] = ACTIONS(297),
    [anon_sym_float] = ACTIONS(297),
    [anon_sym_int] = ACTIONS(297),
    [anon_sym_number] = ACTIONS(297),
    [anon_sym_object] = ACTIONS(297),
    [anon_sym_string] = ACTIONS(297),
    [anon_sym_record] = ACTIONS(297),
    [anon_sym_geometry] = ACTIONS(297),
    [anon_sym_EDDSA] = ACTIONS(297),
    [anon_sym_ES256] = ACTIONS(297),
    [anon_sym_ES384] = ACTIONS(297),
    [anon_sym_ES512] = ACTIONS(297),
    [anon_sym_HS256] = ACTIONS(297),
    [anon_sym_HS384] = ACTIONS(297),
    [anon_sym_HS512] = ACTIONS(297),
    [anon_sym_PS256] = ACTIONS(297),
    [anon_sym_PS384] = ACTIONS(297),
    [anon_sym_PS512] = ACTIONS(297),
    [anon_sym_RS256] = ACTIONS(297),
    [anon_sym_RS384] = ACTIONS(297),
    [anon_sym_RS512] = ACTIONS(297),
    [aux_sym_function_token1] = ACTIONS(295),
    [aux_sym_function_token2] = ACTIONS(295),
    [anon_sym_count] = ACTIONS(297),
    [aux_sym_function_token3] = ACTIONS(295),
    [aux_sym_function_token4] = ACTIONS(295),
    [aux_sym_function_token5] = ACTIONS(295),
    [aux_sym_function_token6] = ACTIONS(295),
    [aux_sym_function_token7] = ACTIONS(295),
    [aux_sym_function_token8] = ACTIONS(295),
    [aux_sym_function_token9] = ACTIONS(295),
    [aux_sym_function_token10] = ACTIONS(297),
    [aux_sym_function_token11] = ACTIONS(295),
    [aux_sym_function_token12] = ACTIONS(297),
    [aux_sym_function_token13] = ACTIONS(295),
    [aux_sym_function_token14] = ACTIONS(295),
    [aux_sym_function_token15] = ACTIONS(295),
    [aux_sym_function_token16] = ACTIONS(297),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_false] = ACTIONS(297),
    [anon_sym_TRUE] = ACTIONS(297),
    [anon_sym_FALSE] = ACTIONS(297),
    [anon_sym_null] = ACTIONS(297),
    [anon_sym_NULL] = ACTIONS(297),
    [anon_sym_none] = ACTIONS(297),
    [anon_sym_NONE] = ACTIONS(297),
    [sym_variable] = ACTIONS(295),
    [anon_sym_SQUOTE] = ACTIONS(295),
    [anon_sym_DQUOTE] = ACTIONS(295),
  },
  [39] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(319),
    [anon_sym_RBRACE_SEMI] = ACTIONS(319),
    [anon_sym_RBRACE_COMMA] = ACTIONS(319),
    [aux_sym_future_token1] = ACTIONS(319),
    [aux_sym_casting_token1] = ACTIONS(319),
    [aux_sym_property_token1] = ACTIONS(321),
    [aux_sym_duration_token1] = ACTIONS(321),
    [aux_sym_constant_token1] = ACTIONS(319),
    [aux_sym_number_token1] = ACTIONS(321),
    [aux_sym_record_token1] = ACTIONS(319),
    [aux_sym_record_token2] = ACTIONS(319),
    [sym_keyword] = ACTIONS(321),
    [anon_sym_AMP_AMP] = ACTIONS(319),
    [anon_sym_AND] = ACTIONS(321),
    [anon_sym_PIPE_PIPE] = ACTIONS(319),
    [anon_sym_OR] = ACTIONS(321),
    [anon_sym_QMARK_QMARK] = ACTIONS(319),
    [anon_sym_QMARK_COLON] = ACTIONS(319),
    [anon_sym_EQ] = ACTIONS(321),
    [anon_sym_IS] = ACTIONS(321),
    [anon_sym_BANG_EQ] = ACTIONS(319),
    [anon_sym_ISNOT] = ACTIONS(319),
    [anon_sym_EQ_EQ] = ACTIONS(319),
    [anon_sym_QMARK_EQ] = ACTIONS(319),
    [anon_sym_STAR_EQ] = ACTIONS(319),
    [anon_sym_TILDE] = ACTIONS(319),
    [anon_sym_BANG_TILDE] = ACTIONS(319),
    [anon_sym_QMARK_TILDE] = ACTIONS(319),
    [anon_sym_STAR_TILDE] = ACTIONS(319),
    [anon_sym_LT] = ACTIONS(321),
    [anon_sym_LT_EQ] = ACTIONS(319),
    [anon_sym_GT] = ACTIONS(321),
    [anon_sym_GT_EQ] = ACTIONS(319),
    [anon_sym_PLUS] = ACTIONS(319),
    [anon_sym_DASH] = ACTIONS(321),
    [anon_sym_STAR] = ACTIONS(321),
    [anon_sym_x] = ACTIONS(321),
    [anon_sym_SLASH] = ACTIONS(319),
    [anon_sym_] = ACTIONS(319),
    [anon_sym_STAR_STAR] = ACTIONS(319),
    [anon_sym_IN] = ACTIONS(321),
    [anon_sym_CONTAINS] = ACTIONS(321),
    [anon_sym_2] = ACTIONS(319),
    [anon_sym_CONTAINSNOT] = ACTIONS(321),
    [anon_sym_3] = ACTIONS(319),
    [anon_sym_CONTAINSALL] = ACTIONS(321),
    [anon_sym_4] = ACTIONS(319),
    [anon_sym_CONTAINSANY] = ACTIONS(321),
    [anon_sym_5] = ACTIONS(319),
    [anon_sym_CONTAINSNONE] = ACTIONS(321),
    [anon_sym_6] = ACTIONS(319),
    [anon_sym_INSIDE] = ACTIONS(321),
    [anon_sym_7] = ACTIONS(319),
    [anon_sym_NOTINSIDE] = ACTIONS(321),
    [anon_sym_NOTIN] = ACTIONS(319),
    [anon_sym_8] = ACTIONS(319),
    [anon_sym_ALLINSIDE] = ACTIONS(321),
    [anon_sym_9] = ACTIONS(319),
    [anon_sym_ANYINSIDE] = ACTIONS(321),
    [anon_sym_10] = ACTIONS(319),
    [anon_sym_NONEINSIDE] = ACTIONS(321),
    [anon_sym_11] = ACTIONS(319),
    [anon_sym_OUTSIDE] = ACTIONS(321),
    [anon_sym_INTERSECTS] = ACTIONS(321),
    [anon_sym_LPAREN] = ACTIONS(319),
    [anon_sym_RPAREN] = ACTIONS(319),
    [anon_sym_LBRACK] = ACTIONS(319),
    [anon_sym_RBRACK] = ACTIONS(319),
    [anon_sym_LBRACE] = ACTIONS(319),
    [anon_sym_RBRACE] = ACTIONS(321),
    [anon_sym_DASH_GT] = ACTIONS(319),
    [anon_sym_LT_DASH] = ACTIONS(319),
    [anon_sym_COMMA] = ACTIONS(319),
    [anon_sym_SEMI] = ACTIONS(319),
    [anon_sym_COLON] = ACTIONS(321),
    [anon_sym_any] = ACTIONS(321),
    [anon_sym_array] = ACTIONS(321),
    [anon_sym_bool] = ACTIONS(321),
    [anon_sym_datetime] = ACTIONS(321),
    [anon_sym_decimal] = ACTIONS(321),
    [anon_sym_duration] = ACTIONS(321),
    [anon_sym_float] = ACTIONS(321),
    [anon_sym_int] = ACTIONS(321),
    [anon_sym_number] = ACTIONS(321),
    [anon_sym_object] = ACTIONS(321),
    [anon_sym_string] = ACTIONS(321),
    [anon_sym_record] = ACTIONS(321),
    [anon_sym_geometry] = ACTIONS(321),
    [anon_sym_EDDSA] = ACTIONS(321),
    [anon_sym_ES256] = ACTIONS(321),
    [anon_sym_ES384] = ACTIONS(321),
    [anon_sym_ES512] = ACTIONS(321),
    [anon_sym_HS256] = ACTIONS(321),
    [anon_sym_HS384] = ACTIONS(321),
    [anon_sym_HS512] = ACTIONS(321),
    [anon_sym_PS256] = ACTIONS(321),
    [anon_sym_PS384] = ACTIONS(321),
    [anon_sym_PS512] = ACTIONS(321),
    [anon_sym_RS256] = ACTIONS(321),
    [anon_sym_RS384] = ACTIONS(321),
    [anon_sym_RS512] = ACTIONS(321),
    [aux_sym_function_token1] = ACTIONS(319),
    [aux_sym_function_token2] = ACTIONS(319),
    [anon_sym_count] = ACTIONS(321),
    [aux_sym_function_token3] = ACTIONS(319),
    [aux_sym_function_token4] = ACTIONS(319),
    [aux_sym_function_token5] = ACTIONS(319),
    [aux_sym_function_token6] = ACTIONS(319),
    [aux_sym_function_token7] = ACTIONS(319),
    [aux_sym_function_token8] = ACTIONS(319),
    [aux_sym_function_token9] = ACTIONS(319),
    [aux_sym_function_token10] = ACTIONS(321),
    [aux_sym_function_token11] = ACTIONS(319),
    [aux_sym_function_token12] = ACTIONS(321),
    [aux_sym_function_token13] = ACTIONS(319),
    [aux_sym_function_token14] = ACTIONS(319),
    [aux_sym_function_token15] = ACTIONS(319),
    [aux_sym_function_token16] = ACTIONS(321),
    [anon_sym_true] = ACTIONS(321),
    [anon_sym_false] = ACTIONS(321),
    [anon_sym_TRUE] = ACTIONS(321),
    [anon_sym_FALSE] = ACTIONS(321),
    [anon_sym_null] = ACTIONS(321),
    [anon_sym_NULL] = ACTIONS(321),
    [anon_sym_none] = ACTIONS(321),
    [anon_sym_NONE] = ACTIONS(321),
    [sym_variable] = ACTIONS(319),
    [anon_sym_SQUOTE] = ACTIONS(319),
    [anon_sym_DQUOTE] = ACTIONS(319),
  },
  [40] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(315),
    [anon_sym_RBRACE_SEMI] = ACTIONS(315),
    [anon_sym_RBRACE_COMMA] = ACTIONS(315),
    [aux_sym_future_token1] = ACTIONS(315),
    [aux_sym_casting_token1] = ACTIONS(315),
    [aux_sym_property_token1] = ACTIONS(317),
    [aux_sym_duration_token1] = ACTIONS(317),
    [aux_sym_constant_token1] = ACTIONS(315),
    [aux_sym_number_token1] = ACTIONS(317),
    [aux_sym_record_token1] = ACTIONS(315),
    [aux_sym_record_token2] = ACTIONS(315),
    [sym_keyword] = ACTIONS(317),
    [anon_sym_AMP_AMP] = ACTIONS(315),
    [anon_sym_AND] = ACTIONS(317),
    [anon_sym_PIPE_PIPE] = ACTIONS(315),
    [anon_sym_OR] = ACTIONS(317),
    [anon_sym_QMARK_QMARK] = ACTIONS(315),
    [anon_sym_QMARK_COLON] = ACTIONS(315),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_IS] = ACTIONS(317),
    [anon_sym_BANG_EQ] = ACTIONS(315),
    [anon_sym_ISNOT] = ACTIONS(315),
    [anon_sym_EQ_EQ] = ACTIONS(315),
    [anon_sym_QMARK_EQ] = ACTIONS(315),
    [anon_sym_STAR_EQ] = ACTIONS(315),
    [anon_sym_TILDE] = ACTIONS(315),
    [anon_sym_BANG_TILDE] = ACTIONS(315),
    [anon_sym_QMARK_TILDE] = ACTIONS(315),
    [anon_sym_STAR_TILDE] = ACTIONS(315),
    [anon_sym_LT] = ACTIONS(317),
    [anon_sym_LT_EQ] = ACTIONS(315),
    [anon_sym_GT] = ACTIONS(317),
    [anon_sym_GT_EQ] = ACTIONS(315),
    [anon_sym_PLUS] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(317),
    [anon_sym_STAR] = ACTIONS(317),
    [anon_sym_x] = ACTIONS(317),
    [anon_sym_SLASH] = ACTIONS(315),
    [anon_sym_] = ACTIONS(315),
    [anon_sym_STAR_STAR] = ACTIONS(315),
    [anon_sym_IN] = ACTIONS(317),
    [anon_sym_CONTAINS] = ACTIONS(317),
    [anon_sym_2] = ACTIONS(315),
    [anon_sym_CONTAINSNOT] = ACTIONS(317),
    [anon_sym_3] = ACTIONS(315),
    [anon_sym_CONTAINSALL] = ACTIONS(317),
    [anon_sym_4] = ACTIONS(315),
    [anon_sym_CONTAINSANY] = ACTIONS(317),
    [anon_sym_5] = ACTIONS(315),
    [anon_sym_CONTAINSNONE] = ACTIONS(317),
    [anon_sym_6] = ACTIONS(315),
    [anon_sym_INSIDE] = ACTIONS(317),
    [anon_sym_7] = ACTIONS(315),
    [anon_sym_NOTINSIDE] = ACTIONS(317),
    [anon_sym_NOTIN] = ACTIONS(315),
    [anon_sym_8] = ACTIONS(315),
    [anon_sym_ALLINSIDE] = ACTIONS(317),
    [anon_sym_9] = ACTIONS(315),
    [anon_sym_ANYINSIDE] = ACTIONS(317),
    [anon_sym_10] = ACTIONS(315),
    [anon_sym_NONEINSIDE] = ACTIONS(317),
    [anon_sym_11] = ACTIONS(315),
    [anon_sym_OUTSIDE] = ACTIONS(317),
    [anon_sym_INTERSECTS] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_RBRACK] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(315),
    [anon_sym_RBRACE] = ACTIONS(317),
    [anon_sym_DASH_GT] = ACTIONS(315),
    [anon_sym_LT_DASH] = ACTIONS(315),
    [anon_sym_COMMA] = ACTIONS(315),
    [anon_sym_SEMI] = ACTIONS(315),
    [anon_sym_COLON] = ACTIONS(317),
    [anon_sym_any] = ACTIONS(317),
    [anon_sym_array] = ACTIONS(317),
    [anon_sym_bool] = ACTIONS(317),
    [anon_sym_datetime] = ACTIONS(317),
    [anon_sym_decimal] = ACTIONS(317),
    [anon_sym_duration] = ACTIONS(317),
    [anon_sym_float] = ACTIONS(317),
    [anon_sym_int] = ACTIONS(317),
    [anon_sym_number] = ACTIONS(317),
    [anon_sym_object] = ACTIONS(317),
    [anon_sym_string] = ACTIONS(317),
    [anon_sym_record] = ACTIONS(317),
    [anon_sym_geometry] = ACTIONS(317),
    [anon_sym_EDDSA] = ACTIONS(317),
    [anon_sym_ES256] = ACTIONS(317),
    [anon_sym_ES384] = ACTIONS(317),
    [anon_sym_ES512] = ACTIONS(317),
    [anon_sym_HS256] = ACTIONS(317),
    [anon_sym_HS384] = ACTIONS(317),
    [anon_sym_HS512] = ACTIONS(317),
    [anon_sym_PS256] = ACTIONS(317),
    [anon_sym_PS384] = ACTIONS(317),
    [anon_sym_PS512] = ACTIONS(317),
    [anon_sym_RS256] = ACTIONS(317),
    [anon_sym_RS384] = ACTIONS(317),
    [anon_sym_RS512] = ACTIONS(317),
    [aux_sym_function_token1] = ACTIONS(315),
    [aux_sym_function_token2] = ACTIONS(315),
    [anon_sym_count] = ACTIONS(317),
    [aux_sym_function_token3] = ACTIONS(315),
    [aux_sym_function_token4] = ACTIONS(315),
    [aux_sym_function_token5] = ACTIONS(315),
    [aux_sym_function_token6] = ACTIONS(315),
    [aux_sym_function_token7] = ACTIONS(315),
    [aux_sym_function_token8] = ACTIONS(315),
    [aux_sym_function_token9] = ACTIONS(315),
    [aux_sym_function_token10] = ACTIONS(317),
    [aux_sym_function_token11] = ACTIONS(315),
    [aux_sym_function_token12] = ACTIONS(317),
    [aux_sym_function_token13] = ACTIONS(315),
    [aux_sym_function_token14] = ACTIONS(315),
    [aux_sym_function_token15] = ACTIONS(315),
    [aux_sym_function_token16] = ACTIONS(317),
    [anon_sym_true] = ACTIONS(317),
    [anon_sym_false] = ACTIONS(317),
    [anon_sym_TRUE] = ACTIONS(317),
    [anon_sym_FALSE] = ACTIONS(317),
    [anon_sym_null] = ACTIONS(317),
    [anon_sym_NULL] = ACTIONS(317),
    [anon_sym_none] = ACTIONS(317),
    [anon_sym_NONE] = ACTIONS(317),
    [sym_variable] = ACTIONS(315),
    [anon_sym_SQUOTE] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(315),
  },
  [41] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(263),
    [anon_sym_RBRACE_SEMI] = ACTIONS(263),
    [anon_sym_RBRACE_COMMA] = ACTIONS(263),
    [aux_sym_future_token1] = ACTIONS(263),
    [aux_sym_casting_token1] = ACTIONS(263),
    [aux_sym_property_token1] = ACTIONS(265),
    [aux_sym_duration_token1] = ACTIONS(265),
    [aux_sym_constant_token1] = ACTIONS(263),
    [aux_sym_number_token1] = ACTIONS(265),
    [aux_sym_record_token1] = ACTIONS(263),
    [aux_sym_record_token2] = ACTIONS(263),
    [sym_keyword] = ACTIONS(265),
    [anon_sym_AMP_AMP] = ACTIONS(263),
    [anon_sym_AND] = ACTIONS(265),
    [anon_sym_PIPE_PIPE] = ACTIONS(263),
    [anon_sym_OR] = ACTIONS(265),
    [anon_sym_QMARK_QMARK] = ACTIONS(263),
    [anon_sym_QMARK_COLON] = ACTIONS(263),
    [anon_sym_EQ] = ACTIONS(265),
    [anon_sym_IS] = ACTIONS(265),
    [anon_sym_BANG_EQ] = ACTIONS(263),
    [anon_sym_ISNOT] = ACTIONS(263),
    [anon_sym_EQ_EQ] = ACTIONS(263),
    [anon_sym_QMARK_EQ] = ACTIONS(263),
    [anon_sym_STAR_EQ] = ACTIONS(263),
    [anon_sym_TILDE] = ACTIONS(263),
    [anon_sym_BANG_TILDE] = ACTIONS(263),
    [anon_sym_QMARK_TILDE] = ACTIONS(263),
    [anon_sym_STAR_TILDE] = ACTIONS(263),
    [anon_sym_LT] = ACTIONS(265),
    [anon_sym_LT_EQ] = ACTIONS(263),
    [anon_sym_GT] = ACTIONS(265),
    [anon_sym_GT_EQ] = ACTIONS(263),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(265),
    [anon_sym_STAR] = ACTIONS(265),
    [anon_sym_x] = ACTIONS(265),
    [anon_sym_SLASH] = ACTIONS(263),
    [anon_sym_] = ACTIONS(263),
    [anon_sym_STAR_STAR] = ACTIONS(263),
    [anon_sym_IN] = ACTIONS(265),
    [anon_sym_CONTAINS] = ACTIONS(265),
    [anon_sym_2] = ACTIONS(263),
    [anon_sym_CONTAINSNOT] = ACTIONS(265),
    [anon_sym_3] = ACTIONS(263),
    [anon_sym_CONTAINSALL] = ACTIONS(265),
    [anon_sym_4] = ACTIONS(263),
    [anon_sym_CONTAINSANY] = ACTIONS(265),
    [anon_sym_5] = ACTIONS(263),
    [anon_sym_CONTAINSNONE] = ACTIONS(265),
    [anon_sym_6] = ACTIONS(263),
    [anon_sym_INSIDE] = ACTIONS(265),
    [anon_sym_7] = ACTIONS(263),
    [anon_sym_NOTINSIDE] = ACTIONS(265),
    [anon_sym_NOTIN] = ACTIONS(263),
    [anon_sym_8] = ACTIONS(263),
    [anon_sym_ALLINSIDE] = ACTIONS(265),
    [anon_sym_9] = ACTIONS(263),
    [anon_sym_ANYINSIDE] = ACTIONS(265),
    [anon_sym_10] = ACTIONS(263),
    [anon_sym_NONEINSIDE] = ACTIONS(265),
    [anon_sym_11] = ACTIONS(263),
    [anon_sym_OUTSIDE] = ACTIONS(265),
    [anon_sym_INTERSECTS] = ACTIONS(265),
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_RPAREN] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(263),
    [anon_sym_RBRACK] = ACTIONS(263),
    [anon_sym_LBRACE] = ACTIONS(263),
    [anon_sym_RBRACE] = ACTIONS(265),
    [anon_sym_DASH_GT] = ACTIONS(263),
    [anon_sym_LT_DASH] = ACTIONS(263),
    [anon_sym_COMMA] = ACTIONS(263),
    [anon_sym_SEMI] = ACTIONS(263),
    [anon_sym_COLON] = ACTIONS(265),
    [anon_sym_any] = ACTIONS(265),
    [anon_sym_array] = ACTIONS(265),
    [anon_sym_bool] = ACTIONS(265),
    [anon_sym_datetime] = ACTIONS(265),
    [anon_sym_decimal] = ACTIONS(265),
    [anon_sym_duration] = ACTIONS(265),
    [anon_sym_float] = ACTIONS(265),
    [anon_sym_int] = ACTIONS(265),
    [anon_sym_number] = ACTIONS(265),
    [anon_sym_object] = ACTIONS(265),
    [anon_sym_string] = ACTIONS(265),
    [anon_sym_record] = ACTIONS(265),
    [anon_sym_geometry] = ACTIONS(265),
    [anon_sym_EDDSA] = ACTIONS(265),
    [anon_sym_ES256] = ACTIONS(265),
    [anon_sym_ES384] = ACTIONS(265),
    [anon_sym_ES512] = ACTIONS(265),
    [anon_sym_HS256] = ACTIONS(265),
    [anon_sym_HS384] = ACTIONS(265),
    [anon_sym_HS512] = ACTIONS(265),
    [anon_sym_PS256] = ACTIONS(265),
    [anon_sym_PS384] = ACTIONS(265),
    [anon_sym_PS512] = ACTIONS(265),
    [anon_sym_RS256] = ACTIONS(265),
    [anon_sym_RS384] = ACTIONS(265),
    [anon_sym_RS512] = ACTIONS(265),
    [aux_sym_function_token1] = ACTIONS(263),
    [aux_sym_function_token2] = ACTIONS(263),
    [anon_sym_count] = ACTIONS(265),
    [aux_sym_function_token3] = ACTIONS(263),
    [aux_sym_function_token4] = ACTIONS(263),
    [aux_sym_function_token5] = ACTIONS(263),
    [aux_sym_function_token6] = ACTIONS(263),
    [aux_sym_function_token7] = ACTIONS(263),
    [aux_sym_function_token8] = ACTIONS(263),
    [aux_sym_function_token9] = ACTIONS(263),
    [aux_sym_function_token10] = ACTIONS(265),
    [aux_sym_function_token11] = ACTIONS(263),
    [aux_sym_function_token12] = ACTIONS(265),
    [aux_sym_function_token13] = ACTIONS(263),
    [aux_sym_function_token14] = ACTIONS(263),
    [aux_sym_function_token15] = ACTIONS(263),
    [aux_sym_function_token16] = ACTIONS(265),
    [anon_sym_true] = ACTIONS(265),
    [anon_sym_false] = ACTIONS(265),
    [anon_sym_TRUE] = ACTIONS(265),
    [anon_sym_FALSE] = ACTIONS(265),
    [anon_sym_null] = ACTIONS(265),
    [anon_sym_NULL] = ACTIONS(265),
    [anon_sym_none] = ACTIONS(265),
    [anon_sym_NONE] = ACTIONS(265),
    [sym_variable] = ACTIONS(263),
    [anon_sym_SQUOTE] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(263),
  },
  [42] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(267),
    [anon_sym_RBRACE_SEMI] = ACTIONS(267),
    [anon_sym_RBRACE_COMMA] = ACTIONS(267),
    [aux_sym_future_token1] = ACTIONS(267),
    [aux_sym_casting_token1] = ACTIONS(267),
    [aux_sym_property_token1] = ACTIONS(269),
    [aux_sym_duration_token1] = ACTIONS(269),
    [aux_sym_constant_token1] = ACTIONS(267),
    [aux_sym_number_token1] = ACTIONS(269),
    [aux_sym_record_token1] = ACTIONS(267),
    [aux_sym_record_token2] = ACTIONS(267),
    [sym_keyword] = ACTIONS(269),
    [anon_sym_AMP_AMP] = ACTIONS(267),
    [anon_sym_AND] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(267),
    [anon_sym_OR] = ACTIONS(269),
    [anon_sym_QMARK_QMARK] = ACTIONS(267),
    [anon_sym_QMARK_COLON] = ACTIONS(267),
    [anon_sym_EQ] = ACTIONS(269),
    [anon_sym_IS] = ACTIONS(269),
    [anon_sym_BANG_EQ] = ACTIONS(267),
    [anon_sym_ISNOT] = ACTIONS(267),
    [anon_sym_EQ_EQ] = ACTIONS(267),
    [anon_sym_QMARK_EQ] = ACTIONS(267),
    [anon_sym_STAR_EQ] = ACTIONS(267),
    [anon_sym_TILDE] = ACTIONS(267),
    [anon_sym_BANG_TILDE] = ACTIONS(267),
    [anon_sym_QMARK_TILDE] = ACTIONS(267),
    [anon_sym_STAR_TILDE] = ACTIONS(267),
    [anon_sym_LT] = ACTIONS(269),
    [anon_sym_LT_EQ] = ACTIONS(267),
    [anon_sym_GT] = ACTIONS(269),
    [anon_sym_GT_EQ] = ACTIONS(267),
    [anon_sym_PLUS] = ACTIONS(267),
    [anon_sym_DASH] = ACTIONS(269),
    [anon_sym_STAR] = ACTIONS(269),
    [anon_sym_x] = ACTIONS(269),
    [anon_sym_SLASH] = ACTIONS(267),
    [anon_sym_] = ACTIONS(267),
    [anon_sym_STAR_STAR] = ACTIONS(267),
    [anon_sym_IN] = ACTIONS(269),
    [anon_sym_CONTAINS] = ACTIONS(269),
    [anon_sym_2] = ACTIONS(267),
    [anon_sym_CONTAINSNOT] = ACTIONS(269),
    [anon_sym_3] = ACTIONS(267),
    [anon_sym_CONTAINSALL] = ACTIONS(269),
    [anon_sym_4] = ACTIONS(267),
    [anon_sym_CONTAINSANY] = ACTIONS(269),
    [anon_sym_5] = ACTIONS(267),
    [anon_sym_CONTAINSNONE] = ACTIONS(269),
    [anon_sym_6] = ACTIONS(267),
    [anon_sym_INSIDE] = ACTIONS(269),
    [anon_sym_7] = ACTIONS(267),
    [anon_sym_NOTINSIDE] = ACTIONS(269),
    [anon_sym_NOTIN] = ACTIONS(267),
    [anon_sym_8] = ACTIONS(267),
    [anon_sym_ALLINSIDE] = ACTIONS(269),
    [anon_sym_9] = ACTIONS(267),
    [anon_sym_ANYINSIDE] = ACTIONS(269),
    [anon_sym_10] = ACTIONS(267),
    [anon_sym_NONEINSIDE] = ACTIONS(269),
    [anon_sym_11] = ACTIONS(267),
    [anon_sym_OUTSIDE] = ACTIONS(269),
    [anon_sym_INTERSECTS] = ACTIONS(269),
    [anon_sym_LPAREN] = ACTIONS(267),
    [anon_sym_RPAREN] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(267),
    [anon_sym_RBRACK] = ACTIONS(267),
    [anon_sym_LBRACE] = ACTIONS(267),
    [anon_sym_RBRACE] = ACTIONS(269),
    [anon_sym_DASH_GT] = ACTIONS(267),
    [anon_sym_LT_DASH] = ACTIONS(267),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_SEMI] = ACTIONS(267),
    [anon_sym_COLON] = ACTIONS(269),
    [anon_sym_any] = ACTIONS(269),
    [anon_sym_array] = ACTIONS(269),
    [anon_sym_bool] = ACTIONS(269),
    [anon_sym_datetime] = ACTIONS(269),
    [anon_sym_decimal] = ACTIONS(269),
    [anon_sym_duration] = ACTIONS(269),
    [anon_sym_float] = ACTIONS(269),
    [anon_sym_int] = ACTIONS(269),
    [anon_sym_number] = ACTIONS(269),
    [anon_sym_object] = ACTIONS(269),
    [anon_sym_string] = ACTIONS(269),
    [anon_sym_record] = ACTIONS(269),
    [anon_sym_geometry] = ACTIONS(269),
    [anon_sym_EDDSA] = ACTIONS(269),
    [anon_sym_ES256] = ACTIONS(269),
    [anon_sym_ES384] = ACTIONS(269),
    [anon_sym_ES512] = ACTIONS(269),
    [anon_sym_HS256] = ACTIONS(269),
    [anon_sym_HS384] = ACTIONS(269),
    [anon_sym_HS512] = ACTIONS(269),
    [anon_sym_PS256] = ACTIONS(269),
    [anon_sym_PS384] = ACTIONS(269),
    [anon_sym_PS512] = ACTIONS(269),
    [anon_sym_RS256] = ACTIONS(269),
    [anon_sym_RS384] = ACTIONS(269),
    [anon_sym_RS512] = ACTIONS(269),
    [aux_sym_function_token1] = ACTIONS(267),
    [aux_sym_function_token2] = ACTIONS(267),
    [anon_sym_count] = ACTIONS(269),
    [aux_sym_function_token3] = ACTIONS(267),
    [aux_sym_function_token4] = ACTIONS(267),
    [aux_sym_function_token5] = ACTIONS(267),
    [aux_sym_function_token6] = ACTIONS(267),
    [aux_sym_function_token7] = ACTIONS(267),
    [aux_sym_function_token8] = ACTIONS(267),
    [aux_sym_function_token9] = ACTIONS(267),
    [aux_sym_function_token10] = ACTIONS(269),
    [aux_sym_function_token11] = ACTIONS(267),
    [aux_sym_function_token12] = ACTIONS(269),
    [aux_sym_function_token13] = ACTIONS(267),
    [aux_sym_function_token14] = ACTIONS(267),
    [aux_sym_function_token15] = ACTIONS(267),
    [aux_sym_function_token16] = ACTIONS(269),
    [anon_sym_true] = ACTIONS(269),
    [anon_sym_false] = ACTIONS(269),
    [anon_sym_TRUE] = ACTIONS(269),
    [anon_sym_FALSE] = ACTIONS(269),
    [anon_sym_null] = ACTIONS(269),
    [anon_sym_NULL] = ACTIONS(269),
    [anon_sym_none] = ACTIONS(269),
    [anon_sym_NONE] = ACTIONS(269),
    [sym_variable] = ACTIONS(267),
    [anon_sym_SQUOTE] = ACTIONS(267),
    [anon_sym_DQUOTE] = ACTIONS(267),
  },
  [43] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(271),
    [anon_sym_RBRACE_SEMI] = ACTIONS(271),
    [anon_sym_RBRACE_COMMA] = ACTIONS(271),
    [aux_sym_future_token1] = ACTIONS(271),
    [aux_sym_casting_token1] = ACTIONS(271),
    [aux_sym_property_token1] = ACTIONS(273),
    [aux_sym_duration_token1] = ACTIONS(273),
    [aux_sym_constant_token1] = ACTIONS(271),
    [aux_sym_number_token1] = ACTIONS(273),
    [aux_sym_record_token1] = ACTIONS(271),
    [aux_sym_record_token2] = ACTIONS(271),
    [sym_keyword] = ACTIONS(273),
    [anon_sym_AMP_AMP] = ACTIONS(271),
    [anon_sym_AND] = ACTIONS(273),
    [anon_sym_PIPE_PIPE] = ACTIONS(271),
    [anon_sym_OR] = ACTIONS(273),
    [anon_sym_QMARK_QMARK] = ACTIONS(271),
    [anon_sym_QMARK_COLON] = ACTIONS(271),
    [anon_sym_EQ] = ACTIONS(273),
    [anon_sym_IS] = ACTIONS(273),
    [anon_sym_BANG_EQ] = ACTIONS(271),
    [anon_sym_ISNOT] = ACTIONS(271),
    [anon_sym_EQ_EQ] = ACTIONS(271),
    [anon_sym_QMARK_EQ] = ACTIONS(271),
    [anon_sym_STAR_EQ] = ACTIONS(271),
    [anon_sym_TILDE] = ACTIONS(271),
    [anon_sym_BANG_TILDE] = ACTIONS(271),
    [anon_sym_QMARK_TILDE] = ACTIONS(271),
    [anon_sym_STAR_TILDE] = ACTIONS(271),
    [anon_sym_LT] = ACTIONS(273),
    [anon_sym_LT_EQ] = ACTIONS(271),
    [anon_sym_GT] = ACTIONS(273),
    [anon_sym_GT_EQ] = ACTIONS(271),
    [anon_sym_PLUS] = ACTIONS(271),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_x] = ACTIONS(273),
    [anon_sym_SLASH] = ACTIONS(271),
    [anon_sym_] = ACTIONS(271),
    [anon_sym_STAR_STAR] = ACTIONS(271),
    [anon_sym_IN] = ACTIONS(273),
    [anon_sym_CONTAINS] = ACTIONS(273),
    [anon_sym_2] = ACTIONS(271),
    [anon_sym_CONTAINSNOT] = ACTIONS(273),
    [anon_sym_3] = ACTIONS(271),
    [anon_sym_CONTAINSALL] = ACTIONS(273),
    [anon_sym_4] = ACTIONS(271),
    [anon_sym_CONTAINSANY] = ACTIONS(273),
    [anon_sym_5] = ACTIONS(271),
    [anon_sym_CONTAINSNONE] = ACTIONS(273),
    [anon_sym_6] = ACTIONS(271),
    [anon_sym_INSIDE] = ACTIONS(273),
    [anon_sym_7] = ACTIONS(271),
    [anon_sym_NOTINSIDE] = ACTIONS(273),
    [anon_sym_NOTIN] = ACTIONS(271),
    [anon_sym_8] = ACTIONS(271),
    [anon_sym_ALLINSIDE] = ACTIONS(273),
    [anon_sym_9] = ACTIONS(271),
    [anon_sym_ANYINSIDE] = ACTIONS(273),
    [anon_sym_10] = ACTIONS(271),
    [anon_sym_NONEINSIDE] = ACTIONS(273),
    [anon_sym_11] = ACTIONS(271),
    [anon_sym_OUTSIDE] = ACTIONS(273),
    [anon_sym_INTERSECTS] = ACTIONS(273),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_RPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(271),
    [anon_sym_RBRACK] = ACTIONS(271),
    [anon_sym_LBRACE] = ACTIONS(271),
    [anon_sym_RBRACE] = ACTIONS(273),
    [anon_sym_DASH_GT] = ACTIONS(271),
    [anon_sym_LT_DASH] = ACTIONS(271),
    [anon_sym_COMMA] = ACTIONS(271),
    [anon_sym_SEMI] = ACTIONS(271),
    [anon_sym_COLON] = ACTIONS(273),
    [anon_sym_any] = ACTIONS(273),
    [anon_sym_array] = ACTIONS(273),
    [anon_sym_bool] = ACTIONS(273),
    [anon_sym_datetime] = ACTIONS(273),
    [anon_sym_decimal] = ACTIONS(273),
    [anon_sym_duration] = ACTIONS(273),
    [anon_sym_float] = ACTIONS(273),
    [anon_sym_int] = ACTIONS(273),
    [anon_sym_number] = ACTIONS(273),
    [anon_sym_object] = ACTIONS(273),
    [anon_sym_string] = ACTIONS(273),
    [anon_sym_record] = ACTIONS(273),
    [anon_sym_geometry] = ACTIONS(273),
    [anon_sym_EDDSA] = ACTIONS(273),
    [anon_sym_ES256] = ACTIONS(273),
    [anon_sym_ES384] = ACTIONS(273),
    [anon_sym_ES512] = ACTIONS(273),
    [anon_sym_HS256] = ACTIONS(273),
    [anon_sym_HS384] = ACTIONS(273),
    [anon_sym_HS512] = ACTIONS(273),
    [anon_sym_PS256] = ACTIONS(273),
    [anon_sym_PS384] = ACTIONS(273),
    [anon_sym_PS512] = ACTIONS(273),
    [anon_sym_RS256] = ACTIONS(273),
    [anon_sym_RS384] = ACTIONS(273),
    [anon_sym_RS512] = ACTIONS(273),
    [aux_sym_function_token1] = ACTIONS(271),
    [aux_sym_function_token2] = ACTIONS(271),
    [anon_sym_count] = ACTIONS(273),
    [aux_sym_function_token3] = ACTIONS(271),
    [aux_sym_function_token4] = ACTIONS(271),
    [aux_sym_function_token5] = ACTIONS(271),
    [aux_sym_function_token6] = ACTIONS(271),
    [aux_sym_function_token7] = ACTIONS(271),
    [aux_sym_function_token8] = ACTIONS(271),
    [aux_sym_function_token9] = ACTIONS(271),
    [aux_sym_function_token10] = ACTIONS(273),
    [aux_sym_function_token11] = ACTIONS(271),
    [aux_sym_function_token12] = ACTIONS(273),
    [aux_sym_function_token13] = ACTIONS(271),
    [aux_sym_function_token14] = ACTIONS(271),
    [aux_sym_function_token15] = ACTIONS(271),
    [aux_sym_function_token16] = ACTIONS(273),
    [anon_sym_true] = ACTIONS(273),
    [anon_sym_false] = ACTIONS(273),
    [anon_sym_TRUE] = ACTIONS(273),
    [anon_sym_FALSE] = ACTIONS(273),
    [anon_sym_null] = ACTIONS(273),
    [anon_sym_NULL] = ACTIONS(273),
    [anon_sym_none] = ACTIONS(273),
    [anon_sym_NONE] = ACTIONS(273),
    [sym_variable] = ACTIONS(271),
    [anon_sym_SQUOTE] = ACTIONS(271),
    [anon_sym_DQUOTE] = ACTIONS(271),
  },
  [44] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(275),
    [anon_sym_RBRACE_SEMI] = ACTIONS(275),
    [anon_sym_RBRACE_COMMA] = ACTIONS(275),
    [aux_sym_future_token1] = ACTIONS(275),
    [aux_sym_casting_token1] = ACTIONS(275),
    [aux_sym_property_token1] = ACTIONS(277),
    [aux_sym_duration_token1] = ACTIONS(277),
    [aux_sym_constant_token1] = ACTIONS(275),
    [aux_sym_number_token1] = ACTIONS(277),
    [aux_sym_record_token1] = ACTIONS(275),
    [aux_sym_record_token2] = ACTIONS(275),
    [sym_keyword] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(275),
    [anon_sym_AND] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(275),
    [anon_sym_OR] = ACTIONS(277),
    [anon_sym_QMARK_QMARK] = ACTIONS(275),
    [anon_sym_QMARK_COLON] = ACTIONS(275),
    [anon_sym_EQ] = ACTIONS(277),
    [anon_sym_IS] = ACTIONS(277),
    [anon_sym_BANG_EQ] = ACTIONS(275),
    [anon_sym_ISNOT] = ACTIONS(275),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [anon_sym_QMARK_EQ] = ACTIONS(275),
    [anon_sym_STAR_EQ] = ACTIONS(275),
    [anon_sym_TILDE] = ACTIONS(275),
    [anon_sym_BANG_TILDE] = ACTIONS(275),
    [anon_sym_QMARK_TILDE] = ACTIONS(275),
    [anon_sym_STAR_TILDE] = ACTIONS(275),
    [anon_sym_LT] = ACTIONS(277),
    [anon_sym_LT_EQ] = ACTIONS(275),
    [anon_sym_GT] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(275),
    [anon_sym_PLUS] = ACTIONS(275),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_STAR] = ACTIONS(277),
    [anon_sym_x] = ACTIONS(277),
    [anon_sym_SLASH] = ACTIONS(275),
    [anon_sym_] = ACTIONS(275),
    [anon_sym_STAR_STAR] = ACTIONS(275),
    [anon_sym_IN] = ACTIONS(277),
    [anon_sym_CONTAINS] = ACTIONS(277),
    [anon_sym_2] = ACTIONS(275),
    [anon_sym_CONTAINSNOT] = ACTIONS(277),
    [anon_sym_3] = ACTIONS(275),
    [anon_sym_CONTAINSALL] = ACTIONS(277),
    [anon_sym_4] = ACTIONS(275),
    [anon_sym_CONTAINSANY] = ACTIONS(277),
    [anon_sym_5] = ACTIONS(275),
    [anon_sym_CONTAINSNONE] = ACTIONS(277),
    [anon_sym_6] = ACTIONS(275),
    [anon_sym_INSIDE] = ACTIONS(277),
    [anon_sym_7] = ACTIONS(275),
    [anon_sym_NOTINSIDE] = ACTIONS(277),
    [anon_sym_NOTIN] = ACTIONS(275),
    [anon_sym_8] = ACTIONS(275),
    [anon_sym_ALLINSIDE] = ACTIONS(277),
    [anon_sym_9] = ACTIONS(275),
    [anon_sym_ANYINSIDE] = ACTIONS(277),
    [anon_sym_10] = ACTIONS(275),
    [anon_sym_NONEINSIDE] = ACTIONS(277),
    [anon_sym_11] = ACTIONS(275),
    [anon_sym_OUTSIDE] = ACTIONS(277),
    [anon_sym_INTERSECTS] = ACTIONS(277),
    [anon_sym_LPAREN] = ACTIONS(275),
    [anon_sym_RPAREN] = ACTIONS(275),
    [anon_sym_LBRACK] = ACTIONS(275),
    [anon_sym_RBRACK] = ACTIONS(275),
    [anon_sym_LBRACE] = ACTIONS(275),
    [anon_sym_RBRACE] = ACTIONS(277),
    [anon_sym_DASH_GT] = ACTIONS(275),
    [anon_sym_LT_DASH] = ACTIONS(275),
    [anon_sym_COMMA] = ACTIONS(275),
    [anon_sym_SEMI] = ACTIONS(275),
    [anon_sym_COLON] = ACTIONS(277),
    [anon_sym_any] = ACTIONS(277),
    [anon_sym_array] = ACTIONS(277),
    [anon_sym_bool] = ACTIONS(277),
    [anon_sym_datetime] = ACTIONS(277),
    [anon_sym_decimal] = ACTIONS(277),
    [anon_sym_duration] = ACTIONS(277),
    [anon_sym_float] = ACTIONS(277),
    [anon_sym_int] = ACTIONS(277),
    [anon_sym_number] = ACTIONS(277),
    [anon_sym_object] = ACTIONS(277),
    [anon_sym_string] = ACTIONS(277),
    [anon_sym_record] = ACTIONS(277),
    [anon_sym_geometry] = ACTIONS(277),
    [anon_sym_EDDSA] = ACTIONS(277),
    [anon_sym_ES256] = ACTIONS(277),
    [anon_sym_ES384] = ACTIONS(277),
    [anon_sym_ES512] = ACTIONS(277),
    [anon_sym_HS256] = ACTIONS(277),
    [anon_sym_HS384] = ACTIONS(277),
    [anon_sym_HS512] = ACTIONS(277),
    [anon_sym_PS256] = ACTIONS(277),
    [anon_sym_PS384] = ACTIONS(277),
    [anon_sym_PS512] = ACTIONS(277),
    [anon_sym_RS256] = ACTIONS(277),
    [anon_sym_RS384] = ACTIONS(277),
    [anon_sym_RS512] = ACTIONS(277),
    [aux_sym_function_token1] = ACTIONS(275),
    [aux_sym_function_token2] = ACTIONS(275),
    [anon_sym_count] = ACTIONS(277),
    [aux_sym_function_token3] = ACTIONS(275),
    [aux_sym_function_token4] = ACTIONS(275),
    [aux_sym_function_token5] = ACTIONS(275),
    [aux_sym_function_token6] = ACTIONS(275),
    [aux_sym_function_token7] = ACTIONS(275),
    [aux_sym_function_token8] = ACTIONS(275),
    [aux_sym_function_token9] = ACTIONS(275),
    [aux_sym_function_token10] = ACTIONS(277),
    [aux_sym_function_token11] = ACTIONS(275),
    [aux_sym_function_token12] = ACTIONS(277),
    [aux_sym_function_token13] = ACTIONS(275),
    [aux_sym_function_token14] = ACTIONS(275),
    [aux_sym_function_token15] = ACTIONS(275),
    [aux_sym_function_token16] = ACTIONS(277),
    [anon_sym_true] = ACTIONS(277),
    [anon_sym_false] = ACTIONS(277),
    [anon_sym_TRUE] = ACTIONS(277),
    [anon_sym_FALSE] = ACTIONS(277),
    [anon_sym_null] = ACTIONS(277),
    [anon_sym_NULL] = ACTIONS(277),
    [anon_sym_none] = ACTIONS(277),
    [anon_sym_NONE] = ACTIONS(277),
    [sym_variable] = ACTIONS(275),
    [anon_sym_SQUOTE] = ACTIONS(275),
    [anon_sym_DQUOTE] = ACTIONS(275),
  },
  [45] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(279),
    [anon_sym_RBRACE_SEMI] = ACTIONS(279),
    [anon_sym_RBRACE_COMMA] = ACTIONS(279),
    [aux_sym_future_token1] = ACTIONS(279),
    [aux_sym_casting_token1] = ACTIONS(279),
    [aux_sym_property_token1] = ACTIONS(281),
    [aux_sym_duration_token1] = ACTIONS(281),
    [aux_sym_constant_token1] = ACTIONS(279),
    [aux_sym_number_token1] = ACTIONS(281),
    [aux_sym_record_token1] = ACTIONS(279),
    [aux_sym_record_token2] = ACTIONS(279),
    [sym_keyword] = ACTIONS(281),
    [anon_sym_AMP_AMP] = ACTIONS(279),
    [anon_sym_AND] = ACTIONS(281),
    [anon_sym_PIPE_PIPE] = ACTIONS(279),
    [anon_sym_OR] = ACTIONS(281),
    [anon_sym_QMARK_QMARK] = ACTIONS(279),
    [anon_sym_QMARK_COLON] = ACTIONS(279),
    [anon_sym_EQ] = ACTIONS(281),
    [anon_sym_IS] = ACTIONS(281),
    [anon_sym_BANG_EQ] = ACTIONS(279),
    [anon_sym_ISNOT] = ACTIONS(279),
    [anon_sym_EQ_EQ] = ACTIONS(279),
    [anon_sym_QMARK_EQ] = ACTIONS(279),
    [anon_sym_STAR_EQ] = ACTIONS(279),
    [anon_sym_TILDE] = ACTIONS(279),
    [anon_sym_BANG_TILDE] = ACTIONS(279),
    [anon_sym_QMARK_TILDE] = ACTIONS(279),
    [anon_sym_STAR_TILDE] = ACTIONS(279),
    [anon_sym_LT] = ACTIONS(281),
    [anon_sym_LT_EQ] = ACTIONS(279),
    [anon_sym_GT] = ACTIONS(281),
    [anon_sym_GT_EQ] = ACTIONS(279),
    [anon_sym_PLUS] = ACTIONS(279),
    [anon_sym_DASH] = ACTIONS(281),
    [anon_sym_STAR] = ACTIONS(281),
    [anon_sym_x] = ACTIONS(281),
    [anon_sym_SLASH] = ACTIONS(279),
    [anon_sym_] = ACTIONS(279),
    [anon_sym_STAR_STAR] = ACTIONS(279),
    [anon_sym_IN] = ACTIONS(281),
    [anon_sym_CONTAINS] = ACTIONS(281),
    [anon_sym_2] = ACTIONS(279),
    [anon_sym_CONTAINSNOT] = ACTIONS(281),
    [anon_sym_3] = ACTIONS(279),
    [anon_sym_CONTAINSALL] = ACTIONS(281),
    [anon_sym_4] = ACTIONS(279),
    [anon_sym_CONTAINSANY] = ACTIONS(281),
    [anon_sym_5] = ACTIONS(279),
    [anon_sym_CONTAINSNONE] = ACTIONS(281),
    [anon_sym_6] = ACTIONS(279),
    [anon_sym_INSIDE] = ACTIONS(281),
    [anon_sym_7] = ACTIONS(279),
    [anon_sym_NOTINSIDE] = ACTIONS(281),
    [anon_sym_NOTIN] = ACTIONS(279),
    [anon_sym_8] = ACTIONS(279),
    [anon_sym_ALLINSIDE] = ACTIONS(281),
    [anon_sym_9] = ACTIONS(279),
    [anon_sym_ANYINSIDE] = ACTIONS(281),
    [anon_sym_10] = ACTIONS(279),
    [anon_sym_NONEINSIDE] = ACTIONS(281),
    [anon_sym_11] = ACTIONS(279),
    [anon_sym_OUTSIDE] = ACTIONS(281),
    [anon_sym_INTERSECTS] = ACTIONS(281),
    [anon_sym_LPAREN] = ACTIONS(279),
    [anon_sym_RPAREN] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(279),
    [anon_sym_RBRACK] = ACTIONS(279),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_RBRACE] = ACTIONS(281),
    [anon_sym_DASH_GT] = ACTIONS(279),
    [anon_sym_LT_DASH] = ACTIONS(279),
    [anon_sym_COMMA] = ACTIONS(279),
    [anon_sym_SEMI] = ACTIONS(279),
    [anon_sym_COLON] = ACTIONS(281),
    [anon_sym_any] = ACTIONS(281),
    [anon_sym_array] = ACTIONS(281),
    [anon_sym_bool] = ACTIONS(281),
    [anon_sym_datetime] = ACTIONS(281),
    [anon_sym_decimal] = ACTIONS(281),
    [anon_sym_duration] = ACTIONS(281),
    [anon_sym_float] = ACTIONS(281),
    [anon_sym_int] = ACTIONS(281),
    [anon_sym_number] = ACTIONS(281),
    [anon_sym_object] = ACTIONS(281),
    [anon_sym_string] = ACTIONS(281),
    [anon_sym_record] = ACTIONS(281),
    [anon_sym_geometry] = ACTIONS(281),
    [anon_sym_EDDSA] = ACTIONS(281),
    [anon_sym_ES256] = ACTIONS(281),
    [anon_sym_ES384] = ACTIONS(281),
    [anon_sym_ES512] = ACTIONS(281),
    [anon_sym_HS256] = ACTIONS(281),
    [anon_sym_HS384] = ACTIONS(281),
    [anon_sym_HS512] = ACTIONS(281),
    [anon_sym_PS256] = ACTIONS(281),
    [anon_sym_PS384] = ACTIONS(281),
    [anon_sym_PS512] = ACTIONS(281),
    [anon_sym_RS256] = ACTIONS(281),
    [anon_sym_RS384] = ACTIONS(281),
    [anon_sym_RS512] = ACTIONS(281),
    [aux_sym_function_token1] = ACTIONS(279),
    [aux_sym_function_token2] = ACTIONS(279),
    [anon_sym_count] = ACTIONS(281),
    [aux_sym_function_token3] = ACTIONS(279),
    [aux_sym_function_token4] = ACTIONS(279),
    [aux_sym_function_token5] = ACTIONS(279),
    [aux_sym_function_token6] = ACTIONS(279),
    [aux_sym_function_token7] = ACTIONS(279),
    [aux_sym_function_token8] = ACTIONS(279),
    [aux_sym_function_token9] = ACTIONS(279),
    [aux_sym_function_token10] = ACTIONS(281),
    [aux_sym_function_token11] = ACTIONS(279),
    [aux_sym_function_token12] = ACTIONS(281),
    [aux_sym_function_token13] = ACTIONS(279),
    [aux_sym_function_token14] = ACTIONS(279),
    [aux_sym_function_token15] = ACTIONS(279),
    [aux_sym_function_token16] = ACTIONS(281),
    [anon_sym_true] = ACTIONS(281),
    [anon_sym_false] = ACTIONS(281),
    [anon_sym_TRUE] = ACTIONS(281),
    [anon_sym_FALSE] = ACTIONS(281),
    [anon_sym_null] = ACTIONS(281),
    [anon_sym_NULL] = ACTIONS(281),
    [anon_sym_none] = ACTIONS(281),
    [anon_sym_NONE] = ACTIONS(281),
    [sym_variable] = ACTIONS(279),
    [anon_sym_SQUOTE] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(279),
  },
  [46] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(283),
    [anon_sym_RBRACE_SEMI] = ACTIONS(283),
    [anon_sym_RBRACE_COMMA] = ACTIONS(283),
    [aux_sym_future_token1] = ACTIONS(283),
    [aux_sym_casting_token1] = ACTIONS(283),
    [aux_sym_property_token1] = ACTIONS(285),
    [aux_sym_duration_token1] = ACTIONS(285),
    [aux_sym_constant_token1] = ACTIONS(283),
    [aux_sym_number_token1] = ACTIONS(285),
    [aux_sym_record_token1] = ACTIONS(283),
    [aux_sym_record_token2] = ACTIONS(283),
    [sym_keyword] = ACTIONS(285),
    [anon_sym_AMP_AMP] = ACTIONS(283),
    [anon_sym_AND] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(283),
    [anon_sym_OR] = ACTIONS(285),
    [anon_sym_QMARK_QMARK] = ACTIONS(283),
    [anon_sym_QMARK_COLON] = ACTIONS(283),
    [anon_sym_EQ] = ACTIONS(285),
    [anon_sym_IS] = ACTIONS(285),
    [anon_sym_BANG_EQ] = ACTIONS(283),
    [anon_sym_ISNOT] = ACTIONS(283),
    [anon_sym_EQ_EQ] = ACTIONS(283),
    [anon_sym_QMARK_EQ] = ACTIONS(283),
    [anon_sym_STAR_EQ] = ACTIONS(283),
    [anon_sym_TILDE] = ACTIONS(283),
    [anon_sym_BANG_TILDE] = ACTIONS(283),
    [anon_sym_QMARK_TILDE] = ACTIONS(283),
    [anon_sym_STAR_TILDE] = ACTIONS(283),
    [anon_sym_LT] = ACTIONS(285),
    [anon_sym_LT_EQ] = ACTIONS(283),
    [anon_sym_GT] = ACTIONS(285),
    [anon_sym_GT_EQ] = ACTIONS(283),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_DASH] = ACTIONS(285),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_x] = ACTIONS(285),
    [anon_sym_SLASH] = ACTIONS(283),
    [anon_sym_] = ACTIONS(283),
    [anon_sym_STAR_STAR] = ACTIONS(283),
    [anon_sym_IN] = ACTIONS(285),
    [anon_sym_CONTAINS] = ACTIONS(285),
    [anon_sym_2] = ACTIONS(283),
    [anon_sym_CONTAINSNOT] = ACTIONS(285),
    [anon_sym_3] = ACTIONS(283),
    [anon_sym_CONTAINSALL] = ACTIONS(285),
    [anon_sym_4] = ACTIONS(283),
    [anon_sym_CONTAINSANY] = ACTIONS(285),
    [anon_sym_5] = ACTIONS(283),
    [anon_sym_CONTAINSNONE] = ACTIONS(285),
    [anon_sym_6] = ACTIONS(283),
    [anon_sym_INSIDE] = ACTIONS(285),
    [anon_sym_7] = ACTIONS(283),
    [anon_sym_NOTINSIDE] = ACTIONS(285),
    [anon_sym_NOTIN] = ACTIONS(283),
    [anon_sym_8] = ACTIONS(283),
    [anon_sym_ALLINSIDE] = ACTIONS(285),
    [anon_sym_9] = ACTIONS(283),
    [anon_sym_ANYINSIDE] = ACTIONS(285),
    [anon_sym_10] = ACTIONS(283),
    [anon_sym_NONEINSIDE] = ACTIONS(285),
    [anon_sym_11] = ACTIONS(283),
    [anon_sym_OUTSIDE] = ACTIONS(285),
    [anon_sym_INTERSECTS] = ACTIONS(285),
    [anon_sym_LPAREN] = ACTIONS(283),
    [anon_sym_RPAREN] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(283),
    [anon_sym_RBRACK] = ACTIONS(283),
    [anon_sym_LBRACE] = ACTIONS(283),
    [anon_sym_RBRACE] = ACTIONS(285),
    [anon_sym_DASH_GT] = ACTIONS(283),
    [anon_sym_LT_DASH] = ACTIONS(283),
    [anon_sym_COMMA] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(283),
    [anon_sym_COLON] = ACTIONS(285),
    [anon_sym_any] = ACTIONS(285),
    [anon_sym_array] = ACTIONS(285),
    [anon_sym_bool] = ACTIONS(285),
    [anon_sym_datetime] = ACTIONS(285),
    [anon_sym_decimal] = ACTIONS(285),
    [anon_sym_duration] = ACTIONS(285),
    [anon_sym_float] = ACTIONS(285),
    [anon_sym_int] = ACTIONS(285),
    [anon_sym_number] = ACTIONS(285),
    [anon_sym_object] = ACTIONS(285),
    [anon_sym_string] = ACTIONS(285),
    [anon_sym_record] = ACTIONS(285),
    [anon_sym_geometry] = ACTIONS(285),
    [anon_sym_EDDSA] = ACTIONS(285),
    [anon_sym_ES256] = ACTIONS(285),
    [anon_sym_ES384] = ACTIONS(285),
    [anon_sym_ES512] = ACTIONS(285),
    [anon_sym_HS256] = ACTIONS(285),
    [anon_sym_HS384] = ACTIONS(285),
    [anon_sym_HS512] = ACTIONS(285),
    [anon_sym_PS256] = ACTIONS(285),
    [anon_sym_PS384] = ACTIONS(285),
    [anon_sym_PS512] = ACTIONS(285),
    [anon_sym_RS256] = ACTIONS(285),
    [anon_sym_RS384] = ACTIONS(285),
    [anon_sym_RS512] = ACTIONS(285),
    [aux_sym_function_token1] = ACTIONS(283),
    [aux_sym_function_token2] = ACTIONS(283),
    [anon_sym_count] = ACTIONS(285),
    [aux_sym_function_token3] = ACTIONS(283),
    [aux_sym_function_token4] = ACTIONS(283),
    [aux_sym_function_token5] = ACTIONS(283),
    [aux_sym_function_token6] = ACTIONS(283),
    [aux_sym_function_token7] = ACTIONS(283),
    [aux_sym_function_token8] = ACTIONS(283),
    [aux_sym_function_token9] = ACTIONS(283),
    [aux_sym_function_token10] = ACTIONS(285),
    [aux_sym_function_token11] = ACTIONS(283),
    [aux_sym_function_token12] = ACTIONS(285),
    [aux_sym_function_token13] = ACTIONS(283),
    [aux_sym_function_token14] = ACTIONS(283),
    [aux_sym_function_token15] = ACTIONS(283),
    [aux_sym_function_token16] = ACTIONS(285),
    [anon_sym_true] = ACTIONS(285),
    [anon_sym_false] = ACTIONS(285),
    [anon_sym_TRUE] = ACTIONS(285),
    [anon_sym_FALSE] = ACTIONS(285),
    [anon_sym_null] = ACTIONS(285),
    [anon_sym_NULL] = ACTIONS(285),
    [anon_sym_none] = ACTIONS(285),
    [anon_sym_NONE] = ACTIONS(285),
    [sym_variable] = ACTIONS(283),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_DQUOTE] = ACTIONS(283),
  },
  [47] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(287),
    [anon_sym_RBRACE_SEMI] = ACTIONS(287),
    [anon_sym_RBRACE_COMMA] = ACTIONS(287),
    [aux_sym_future_token1] = ACTIONS(287),
    [aux_sym_casting_token1] = ACTIONS(287),
    [aux_sym_property_token1] = ACTIONS(289),
    [aux_sym_duration_token1] = ACTIONS(289),
    [aux_sym_constant_token1] = ACTIONS(287),
    [aux_sym_number_token1] = ACTIONS(289),
    [aux_sym_record_token1] = ACTIONS(287),
    [aux_sym_record_token2] = ACTIONS(287),
    [sym_keyword] = ACTIONS(289),
    [anon_sym_AMP_AMP] = ACTIONS(287),
    [anon_sym_AND] = ACTIONS(289),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [anon_sym_OR] = ACTIONS(289),
    [anon_sym_QMARK_QMARK] = ACTIONS(287),
    [anon_sym_QMARK_COLON] = ACTIONS(287),
    [anon_sym_EQ] = ACTIONS(289),
    [anon_sym_IS] = ACTIONS(289),
    [anon_sym_BANG_EQ] = ACTIONS(287),
    [anon_sym_ISNOT] = ACTIONS(287),
    [anon_sym_EQ_EQ] = ACTIONS(287),
    [anon_sym_QMARK_EQ] = ACTIONS(287),
    [anon_sym_STAR_EQ] = ACTIONS(287),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_BANG_TILDE] = ACTIONS(287),
    [anon_sym_QMARK_TILDE] = ACTIONS(287),
    [anon_sym_STAR_TILDE] = ACTIONS(287),
    [anon_sym_LT] = ACTIONS(289),
    [anon_sym_LT_EQ] = ACTIONS(287),
    [anon_sym_GT] = ACTIONS(289),
    [anon_sym_GT_EQ] = ACTIONS(287),
    [anon_sym_PLUS] = ACTIONS(287),
    [anon_sym_DASH] = ACTIONS(289),
    [anon_sym_STAR] = ACTIONS(289),
    [anon_sym_x] = ACTIONS(289),
    [anon_sym_SLASH] = ACTIONS(287),
    [anon_sym_] = ACTIONS(287),
    [anon_sym_STAR_STAR] = ACTIONS(287),
    [anon_sym_IN] = ACTIONS(289),
    [anon_sym_CONTAINS] = ACTIONS(289),
    [anon_sym_2] = ACTIONS(287),
    [anon_sym_CONTAINSNOT] = ACTIONS(289),
    [anon_sym_3] = ACTIONS(287),
    [anon_sym_CONTAINSALL] = ACTIONS(289),
    [anon_sym_4] = ACTIONS(287),
    [anon_sym_CONTAINSANY] = ACTIONS(289),
    [anon_sym_5] = ACTIONS(287),
    [anon_sym_CONTAINSNONE] = ACTIONS(289),
    [anon_sym_6] = ACTIONS(287),
    [anon_sym_INSIDE] = ACTIONS(289),
    [anon_sym_7] = ACTIONS(287),
    [anon_sym_NOTINSIDE] = ACTIONS(289),
    [anon_sym_NOTIN] = ACTIONS(287),
    [anon_sym_8] = ACTIONS(287),
    [anon_sym_ALLINSIDE] = ACTIONS(289),
    [anon_sym_9] = ACTIONS(287),
    [anon_sym_ANYINSIDE] = ACTIONS(289),
    [anon_sym_10] = ACTIONS(287),
    [anon_sym_NONEINSIDE] = ACTIONS(289),
    [anon_sym_11] = ACTIONS(287),
    [anon_sym_OUTSIDE] = ACTIONS(289),
    [anon_sym_INTERSECTS] = ACTIONS(289),
    [anon_sym_LPAREN] = ACTIONS(287),
    [anon_sym_RPAREN] = ACTIONS(287),
    [anon_sym_LBRACK] = ACTIONS(287),
    [anon_sym_RBRACK] = ACTIONS(287),
    [anon_sym_LBRACE] = ACTIONS(287),
    [anon_sym_RBRACE] = ACTIONS(289),
    [anon_sym_DASH_GT] = ACTIONS(287),
    [anon_sym_LT_DASH] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(287),
    [anon_sym_SEMI] = ACTIONS(287),
    [anon_sym_COLON] = ACTIONS(289),
    [anon_sym_any] = ACTIONS(289),
    [anon_sym_array] = ACTIONS(289),
    [anon_sym_bool] = ACTIONS(289),
    [anon_sym_datetime] = ACTIONS(289),
    [anon_sym_decimal] = ACTIONS(289),
    [anon_sym_duration] = ACTIONS(289),
    [anon_sym_float] = ACTIONS(289),
    [anon_sym_int] = ACTIONS(289),
    [anon_sym_number] = ACTIONS(289),
    [anon_sym_object] = ACTIONS(289),
    [anon_sym_string] = ACTIONS(289),
    [anon_sym_record] = ACTIONS(289),
    [anon_sym_geometry] = ACTIONS(289),
    [anon_sym_EDDSA] = ACTIONS(289),
    [anon_sym_ES256] = ACTIONS(289),
    [anon_sym_ES384] = ACTIONS(289),
    [anon_sym_ES512] = ACTIONS(289),
    [anon_sym_HS256] = ACTIONS(289),
    [anon_sym_HS384] = ACTIONS(289),
    [anon_sym_HS512] = ACTIONS(289),
    [anon_sym_PS256] = ACTIONS(289),
    [anon_sym_PS384] = ACTIONS(289),
    [anon_sym_PS512] = ACTIONS(289),
    [anon_sym_RS256] = ACTIONS(289),
    [anon_sym_RS384] = ACTIONS(289),
    [anon_sym_RS512] = ACTIONS(289),
    [aux_sym_function_token1] = ACTIONS(287),
    [aux_sym_function_token2] = ACTIONS(287),
    [anon_sym_count] = ACTIONS(289),
    [aux_sym_function_token3] = ACTIONS(287),
    [aux_sym_function_token4] = ACTIONS(287),
    [aux_sym_function_token5] = ACTIONS(287),
    [aux_sym_function_token6] = ACTIONS(287),
    [aux_sym_function_token7] = ACTIONS(287),
    [aux_sym_function_token8] = ACTIONS(287),
    [aux_sym_function_token9] = ACTIONS(287),
    [aux_sym_function_token10] = ACTIONS(289),
    [aux_sym_function_token11] = ACTIONS(287),
    [aux_sym_function_token12] = ACTIONS(289),
    [aux_sym_function_token13] = ACTIONS(287),
    [aux_sym_function_token14] = ACTIONS(287),
    [aux_sym_function_token15] = ACTIONS(287),
    [aux_sym_function_token16] = ACTIONS(289),
    [anon_sym_true] = ACTIONS(289),
    [anon_sym_false] = ACTIONS(289),
    [anon_sym_TRUE] = ACTIONS(289),
    [anon_sym_FALSE] = ACTIONS(289),
    [anon_sym_null] = ACTIONS(289),
    [anon_sym_NULL] = ACTIONS(289),
    [anon_sym_none] = ACTIONS(289),
    [anon_sym_NONE] = ACTIONS(289),
    [sym_variable] = ACTIONS(287),
    [anon_sym_SQUOTE] = ACTIONS(287),
    [anon_sym_DQUOTE] = ACTIONS(287),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(335), 1,
      anon_sym_SQUOTE,
    ACTIONS(337), 1,
      aux_sym_string_token1,
    ACTIONS(339), 1,
      anon_sym_BSLASH,
    STATE(53), 1,
      aux_sym_string_repeat1,
  [13] = 4,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_BSLASH,
    ACTIONS(343), 1,
      aux_sym_string_token3,
    STATE(52), 1,
      aux_sym_string_repeat2,
  [26] = 4,
    ACTIONS(345), 1,
      anon_sym_BSLASH,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      aux_sym_string_token3,
    STATE(50), 1,
      aux_sym_string_repeat2,
  [39] = 4,
    ACTIONS(353), 1,
      anon_sym_SQUOTE,
    ACTIONS(355), 1,
      aux_sym_string_token1,
    ACTIONS(358), 1,
      anon_sym_BSLASH,
    STATE(51), 1,
      aux_sym_string_repeat1,
  [52] = 4,
    ACTIONS(341), 1,
      anon_sym_BSLASH,
    ACTIONS(361), 1,
      anon_sym_DQUOTE,
    ACTIONS(363), 1,
      aux_sym_string_token3,
    STATE(50), 1,
      aux_sym_string_repeat2,
  [65] = 4,
    ACTIONS(339), 1,
      anon_sym_BSLASH,
    ACTIONS(361), 1,
      anon_sym_SQUOTE,
    ACTIONS(365), 1,
      aux_sym_string_token1,
    STATE(51), 1,
      aux_sym_string_repeat1,
  [78] = 4,
    ACTIONS(339), 1,
      anon_sym_BSLASH,
    ACTIONS(367), 1,
      anon_sym_SQUOTE,
    ACTIONS(369), 1,
      aux_sym_string_token1,
    STATE(56), 1,
      aux_sym_string_repeat1,
  [91] = 4,
    ACTIONS(341), 1,
      anon_sym_BSLASH,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(371), 1,
      aux_sym_string_token3,
    STATE(57), 1,
      aux_sym_string_repeat2,
  [104] = 4,
    ACTIONS(339), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      aux_sym_string_token1,
    ACTIONS(373), 1,
      anon_sym_SQUOTE,
    STATE(51), 1,
      aux_sym_string_repeat1,
  [117] = 4,
    ACTIONS(341), 1,
      anon_sym_BSLASH,
    ACTIONS(363), 1,
      aux_sym_string_token3,
    ACTIONS(373), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      aux_sym_string_repeat2,
  [130] = 2,
    ACTIONS(375), 1,
      aux_sym_string_token3,
    ACTIONS(348), 2,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
  [138] = 2,
    ACTIONS(377), 1,
      aux_sym_string_token1,
    ACTIONS(353), 2,
      anon_sym_SQUOTE,
      anon_sym_BSLASH,
  [146] = 1,
    ACTIONS(379), 2,
      anon_sym_RBRACE_SEMI,
      anon_sym_RBRACE_COMMA,
  [151] = 1,
    ACTIONS(381), 2,
      anon_sym_RBRACE_SEMI,
      anon_sym_RBRACE_COMMA,
  [156] = 1,
    ACTIONS(383), 1,
      aux_sym_string_token2,
  [160] = 1,
    ACTIONS(385), 1,
      aux_sym_string_token2,
  [164] = 1,
    ACTIONS(387), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(48)] = 0,
  [SMALL_STATE(49)] = 13,
  [SMALL_STATE(50)] = 26,
  [SMALL_STATE(51)] = 39,
  [SMALL_STATE(52)] = 52,
  [SMALL_STATE(53)] = 65,
  [SMALL_STATE(54)] = 78,
  [SMALL_STATE(55)] = 91,
  [SMALL_STATE(56)] = 104,
  [SMALL_STATE(57)] = 117,
  [SMALL_STATE(58)] = 130,
  [SMALL_STATE(59)] = 138,
  [SMALL_STATE(60)] = 146,
  [SMALL_STATE(61)] = 151,
  [SMALL_STATE(62)] = 156,
  [SMALL_STATE(63)] = 160,
  [SMALL_STATE(64)] = 164,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(5),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(39),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(40),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(41),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(42),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(43),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(44),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(45),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(46),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(47),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(47),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(27),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(27),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(38),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(38),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(37),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(36),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(34),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(34),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(32),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(31),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(46),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(54),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(55),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripting_content, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripting_function, 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scripting_function, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tokens, 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tokens, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_punctuation, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_punctuation, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delimiter, 1),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delimiter, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype, 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_algotype, 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_algotype, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nothing, 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nothing, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_casting, 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_casting, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_future, 1),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_future, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(62),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(50),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(51),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(63),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [387] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_surrealdb(void) {
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
