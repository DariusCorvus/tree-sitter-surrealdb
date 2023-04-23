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
#define STATE_COUNT 69
#define LARGE_STATE_COUNT 52
#define SYMBOL_COUNT 249
#define ALIAS_COUNT 0
#define TOKEN_COUNT 221
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_function_LPAREN_RPAREN_LBRACE = 1,
  anon_sym_RBRACE_SEMI = 2,
  anon_sym_RBRACE_COMMA = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  aux_sym_future_token1 = 6,
  aux_sym_casting_token1 = 7,
  aux_sym_property_token1 = 8,
  aux_sym_identifier_token1 = 9,
  aux_sym_duration_token1 = 10,
  aux_sym_constant_token1 = 11,
  aux_sym_number_token1 = 12,
  aux_sym_record_token1 = 13,
  aux_sym_record_token2 = 14,
  anon_sym_USE = 15,
  anon_sym_NS = 16,
  anon_sym_DB = 17,
  anon_sym_LET = 18,
  anon_sym_BEGIN = 19,
  anon_sym_TRANSACTION = 20,
  anon_sym_CANCEL = 21,
  anon_sym_COMMIT = 22,
  anon_sym_IF = 23,
  anon_sym_ELSE = 24,
  anon_sym_THEN = 25,
  anon_sym_END = 26,
  anon_sym_SELECT = 27,
  anon_sym_FROM = 28,
  anon_sym_WHERE = 29,
  anon_sym_SPLIT = 30,
  anon_sym_AT = 31,
  anon_sym_GROUP = 32,
  anon_sym_BY = 33,
  anon_sym_ORDER = 34,
  anon_sym_COLLATE = 35,
  anon_sym_NUMERIC = 36,
  anon_sym_ASC = 37,
  anon_sym_DESC = 38,
  anon_sym_LIMIT = 39,
  anon_sym_START = 40,
  anon_sym_FETCH = 41,
  anon_sym_TIMEOUT = 42,
  anon_sym_PARALLEL = 43,
  anon_sym_INSERT = 44,
  anon_sym_IGNORE = 45,
  anon_sym_INTO = 46,
  anon_sym_VALUES = 47,
  anon_sym_ON = 48,
  anon_sym_DUPLICATE = 49,
  anon_sym_KEY = 50,
  anon_sym_UPDATE = 51,
  anon_sym_CREATE = 52,
  anon_sym_CONTENT = 53,
  anon_sym_SET = 54,
  anon_sym_RETURN = 55,
  anon_sym_BEFORE = 56,
  anon_sym_AFTER = 57,
  anon_sym_DIFF = 58,
  anon_sym_MERGE = 59,
  anon_sym_PATCH = 60,
  anon_sym_RELATE = 61,
  anon_sym_DELETE = 62,
  anon_sym_DEFINE = 63,
  anon_sym_NAMESPACE = 64,
  anon_sym_DATABASE = 65,
  anon_sym_LOGIN = 66,
  anon_sym_PASSWORD = 67,
  anon_sym_PASSHASH = 68,
  anon_sym_TOKEN = 69,
  anon_sym_SCOPE = 70,
  anon_sym_TYPE = 71,
  anon_sym_VALUE = 72,
  anon_sym_SESSION = 73,
  anon_sym_SIGNUP = 74,
  anon_sym_SIGNIN = 75,
  anon_sym_TABLE = 76,
  anon_sym_DROP = 77,
  anon_sym_SCHEMAFULL = 78,
  anon_sym_SCHEMALESS = 79,
  anon_sym_AS = 80,
  anon_sym_PERMISSIONS = 81,
  anon_sym_FULL = 82,
  anon_sym_FOR = 83,
  anon_sym_select = 84,
  anon_sym_update = 85,
  anon_sym_create = 86,
  anon_sym_delete = 87,
  anon_sym_EVENT = 88,
  anon_sym_WHEN = 89,
  anon_sym_ASSERT = 90,
  anon_sym_INDEX = 91,
  anon_sym_FIELDS = 92,
  anon_sym_COLUMNS = 93,
  anon_sym_UNIQUE = 94,
  anon_sym_REMOVE = 95,
  anon_sym_SLEEP = 96,
  anon_sym_INFO = 97,
  anon_sym_KV = 98,
  anon_sym_FUNCTION = 99,
  anon_sym_PARAM = 100,
  anon_sym_AMP_AMP = 101,
  anon_sym_AND = 102,
  anon_sym_PIPE_PIPE = 103,
  anon_sym_OR = 104,
  anon_sym_QMARK_QMARK = 105,
  anon_sym_QMARK_COLON = 106,
  anon_sym_EQ = 107,
  anon_sym_IS = 108,
  anon_sym_BANG_EQ = 109,
  anon_sym_ISNOT = 110,
  anon_sym_EQ_EQ = 111,
  anon_sym_QMARK_EQ = 112,
  anon_sym_STAR_EQ = 113,
  anon_sym_TILDE = 114,
  anon_sym_BANG_TILDE = 115,
  anon_sym_QMARK_TILDE = 116,
  anon_sym_STAR_TILDE = 117,
  anon_sym_LT = 118,
  anon_sym_LT_EQ = 119,
  anon_sym_GT = 120,
  anon_sym_GT_EQ = 121,
  anon_sym_PLUS = 122,
  anon_sym_DASH = 123,
  anon_sym_STAR = 124,
  anon_sym_x = 125,
  anon_sym_SLASH = 126,
  anon_sym_ = 127,
  anon_sym_STAR_STAR = 128,
  anon_sym_IN = 129,
  anon_sym_CONTAINS = 130,
  anon_sym_2 = 131,
  anon_sym_CONTAINSNOT = 132,
  anon_sym_3 = 133,
  anon_sym_CONTAINSALL = 134,
  anon_sym_4 = 135,
  anon_sym_CONTAINSANY = 136,
  anon_sym_5 = 137,
  anon_sym_CONTAINSNONE = 138,
  anon_sym_6 = 139,
  anon_sym_INSIDE = 140,
  anon_sym_7 = 141,
  anon_sym_NOTINSIDE = 142,
  anon_sym_NOTIN = 143,
  anon_sym_8 = 144,
  anon_sym_ALLINSIDE = 145,
  anon_sym_9 = 146,
  anon_sym_ANYINSIDE = 147,
  anon_sym_10 = 148,
  anon_sym_NONEINSIDE = 149,
  anon_sym_11 = 150,
  anon_sym_OUTSIDE = 151,
  anon_sym_INTERSECTS = 152,
  anon_sym_LPAREN = 153,
  anon_sym_RPAREN = 154,
  anon_sym_LBRACK = 155,
  anon_sym_RBRACK = 156,
  anon_sym_DASH_GT = 157,
  anon_sym_LT_DASH = 158,
  anon_sym_COMMA = 159,
  anon_sym_SEMI = 160,
  anon_sym_COLON = 161,
  anon_sym_any = 162,
  anon_sym_array = 163,
  anon_sym_bool = 164,
  anon_sym_datetime = 165,
  anon_sym_decimal = 166,
  anon_sym_duration = 167,
  anon_sym_float = 168,
  anon_sym_int = 169,
  anon_sym_number = 170,
  anon_sym_object = 171,
  anon_sym_string = 172,
  anon_sym_record = 173,
  anon_sym_geometry = 174,
  anon_sym_EDDSA = 175,
  anon_sym_ES256 = 176,
  anon_sym_ES384 = 177,
  anon_sym_ES512 = 178,
  anon_sym_HS256 = 179,
  anon_sym_HS384 = 180,
  anon_sym_HS512 = 181,
  anon_sym_PS256 = 182,
  anon_sym_PS384 = 183,
  anon_sym_PS512 = 184,
  anon_sym_RS256 = 185,
  anon_sym_RS384 = 186,
  anon_sym_RS512 = 187,
  aux_sym_function_token1 = 188,
  aux_sym_function_token2 = 189,
  anon_sym_count = 190,
  aux_sym_function_token3 = 191,
  aux_sym_function_token4 = 192,
  aux_sym_function_token5 = 193,
  aux_sym_function_token6 = 194,
  aux_sym_function_token7 = 195,
  aux_sym_function_token8 = 196,
  aux_sym_function_token9 = 197,
  aux_sym_function_token10 = 198,
  aux_sym_function_token11 = 199,
  aux_sym_function_token12 = 200,
  aux_sym_function_token13 = 201,
  aux_sym_function_token14 = 202,
  aux_sym_function_token15 = 203,
  aux_sym_function_token16 = 204,
  anon_sym_true = 205,
  anon_sym_false = 206,
  anon_sym_TRUE = 207,
  anon_sym_FALSE = 208,
  anon_sym_null = 209,
  anon_sym_NULL = 210,
  anon_sym_none = 211,
  anon_sym_NONE = 212,
  sym_variable = 213,
  sym_comment = 214,
  anon_sym_SQUOTE = 215,
  aux_sym_string_token1 = 216,
  anon_sym_BSLASH = 217,
  aux_sym_string_token2 = 218,
  anon_sym_DQUOTE = 219,
  aux_sym_string_token3 = 220,
  sym_source_file = 221,
  sym_token = 222,
  sym_scripting_function = 223,
  sym_scripting_content = 224,
  sym__scripting_statement = 225,
  sym_future = 226,
  sym_casting = 227,
  sym_property = 228,
  sym_identifier = 229,
  sym_duration = 230,
  sym_constant = 231,
  sym_number = 232,
  sym_record = 233,
  sym_keyword = 234,
  sym_operator = 235,
  sym_punctuation = 236,
  sym_delimiter = 237,
  sym_type = 238,
  sym_datatype = 239,
  sym_algotype = 240,
  sym_function = 241,
  sym_bool = 242,
  sym_nothing = 243,
  sym_string = 244,
  aux_sym_source_file_repeat1 = 245,
  aux_sym_scripting_content_repeat1 = 246,
  aux_sym_string_repeat1 = 247,
  aux_sym_string_repeat2 = 248,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_function_LPAREN_RPAREN_LBRACE] = "function(){",
  [anon_sym_RBRACE_SEMI] = "};",
  [anon_sym_RBRACE_COMMA] = "},",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_future_token1] = "future_token1",
  [aux_sym_casting_token1] = "casting_token1",
  [aux_sym_property_token1] = "property_token1",
  [aux_sym_identifier_token1] = "identifier_token1",
  [aux_sym_duration_token1] = "duration_token1",
  [aux_sym_constant_token1] = "constant_token1",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_record_token1] = "record_token1",
  [aux_sym_record_token2] = "record_token2",
  [anon_sym_USE] = "USE",
  [anon_sym_NS] = "NS",
  [anon_sym_DB] = "DB",
  [anon_sym_LET] = "LET",
  [anon_sym_BEGIN] = "BEGIN",
  [anon_sym_TRANSACTION] = "TRANSACTION",
  [anon_sym_CANCEL] = "CANCEL",
  [anon_sym_COMMIT] = "COMMIT",
  [anon_sym_IF] = "IF",
  [anon_sym_ELSE] = "ELSE",
  [anon_sym_THEN] = "THEN",
  [anon_sym_END] = "END",
  [anon_sym_SELECT] = "SELECT",
  [anon_sym_FROM] = "FROM",
  [anon_sym_WHERE] = "WHERE",
  [anon_sym_SPLIT] = "SPLIT",
  [anon_sym_AT] = "AT",
  [anon_sym_GROUP] = "GROUP",
  [anon_sym_BY] = "BY",
  [anon_sym_ORDER] = "ORDER",
  [anon_sym_COLLATE] = "COLLATE",
  [anon_sym_NUMERIC] = "NUMERIC",
  [anon_sym_ASC] = "ASC",
  [anon_sym_DESC] = "DESC",
  [anon_sym_LIMIT] = "LIMIT",
  [anon_sym_START] = "START",
  [anon_sym_FETCH] = "FETCH",
  [anon_sym_TIMEOUT] = "TIMEOUT",
  [anon_sym_PARALLEL] = "PARALLEL",
  [anon_sym_INSERT] = "INSERT",
  [anon_sym_IGNORE] = "IGNORE",
  [anon_sym_INTO] = "INTO",
  [anon_sym_VALUES] = "VALUES",
  [anon_sym_ON] = "ON",
  [anon_sym_DUPLICATE] = "DUPLICATE",
  [anon_sym_KEY] = "KEY",
  [anon_sym_UPDATE] = "UPDATE",
  [anon_sym_CREATE] = "CREATE",
  [anon_sym_CONTENT] = "CONTENT",
  [anon_sym_SET] = "SET",
  [anon_sym_RETURN] = "RETURN",
  [anon_sym_BEFORE] = "BEFORE",
  [anon_sym_AFTER] = "AFTER",
  [anon_sym_DIFF] = "DIFF",
  [anon_sym_MERGE] = "MERGE",
  [anon_sym_PATCH] = "PATCH",
  [anon_sym_RELATE] = "RELATE",
  [anon_sym_DELETE] = "DELETE",
  [anon_sym_DEFINE] = "DEFINE",
  [anon_sym_NAMESPACE] = "NAMESPACE",
  [anon_sym_DATABASE] = "DATABASE",
  [anon_sym_LOGIN] = "LOGIN",
  [anon_sym_PASSWORD] = "PASSWORD",
  [anon_sym_PASSHASH] = "PASSHASH",
  [anon_sym_TOKEN] = "TOKEN",
  [anon_sym_SCOPE] = "SCOPE",
  [anon_sym_TYPE] = "TYPE",
  [anon_sym_VALUE] = "VALUE",
  [anon_sym_SESSION] = "SESSION",
  [anon_sym_SIGNUP] = "SIGNUP",
  [anon_sym_SIGNIN] = "SIGNIN",
  [anon_sym_TABLE] = "TABLE",
  [anon_sym_DROP] = "DROP",
  [anon_sym_SCHEMAFULL] = "SCHEMAFULL",
  [anon_sym_SCHEMALESS] = "SCHEMALESS",
  [anon_sym_AS] = "AS",
  [anon_sym_PERMISSIONS] = "PERMISSIONS",
  [anon_sym_FULL] = "FULL",
  [anon_sym_FOR] = "FOR",
  [anon_sym_select] = "select",
  [anon_sym_update] = "update",
  [anon_sym_create] = "create",
  [anon_sym_delete] = "delete",
  [anon_sym_EVENT] = "EVENT",
  [anon_sym_WHEN] = "WHEN",
  [anon_sym_ASSERT] = "ASSERT",
  [anon_sym_INDEX] = "INDEX",
  [anon_sym_FIELDS] = "FIELDS",
  [anon_sym_COLUMNS] = "COLUMNS",
  [anon_sym_UNIQUE] = "UNIQUE",
  [anon_sym_REMOVE] = "REMOVE",
  [anon_sym_SLEEP] = "SLEEP",
  [anon_sym_INFO] = "INFO",
  [anon_sym_KV] = "KV",
  [anon_sym_FUNCTION] = "FUNCTION",
  [anon_sym_PARAM] = "PARAM",
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
  [sym_source_file] = "source_file",
  [sym_token] = "token",
  [sym_scripting_function] = "scripting_function",
  [sym_scripting_content] = "scripting_content",
  [sym__scripting_statement] = "_scripting_statement",
  [sym_future] = "future",
  [sym_casting] = "casting",
  [sym_property] = "property",
  [sym_identifier] = "identifier",
  [sym_duration] = "duration",
  [sym_constant] = "constant",
  [sym_number] = "number",
  [sym_record] = "record",
  [sym_keyword] = "keyword",
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
  [anon_sym_function_LPAREN_RPAREN_LBRACE] = anon_sym_function_LPAREN_RPAREN_LBRACE,
  [anon_sym_RBRACE_SEMI] = anon_sym_RBRACE_SEMI,
  [anon_sym_RBRACE_COMMA] = anon_sym_RBRACE_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_future_token1] = aux_sym_future_token1,
  [aux_sym_casting_token1] = aux_sym_casting_token1,
  [aux_sym_property_token1] = aux_sym_property_token1,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [aux_sym_duration_token1] = aux_sym_duration_token1,
  [aux_sym_constant_token1] = aux_sym_constant_token1,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_record_token1] = aux_sym_record_token1,
  [aux_sym_record_token2] = aux_sym_record_token2,
  [anon_sym_USE] = anon_sym_USE,
  [anon_sym_NS] = anon_sym_NS,
  [anon_sym_DB] = anon_sym_DB,
  [anon_sym_LET] = anon_sym_LET,
  [anon_sym_BEGIN] = anon_sym_BEGIN,
  [anon_sym_TRANSACTION] = anon_sym_TRANSACTION,
  [anon_sym_CANCEL] = anon_sym_CANCEL,
  [anon_sym_COMMIT] = anon_sym_COMMIT,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_ELSE] = anon_sym_ELSE,
  [anon_sym_THEN] = anon_sym_THEN,
  [anon_sym_END] = anon_sym_END,
  [anon_sym_SELECT] = anon_sym_SELECT,
  [anon_sym_FROM] = anon_sym_FROM,
  [anon_sym_WHERE] = anon_sym_WHERE,
  [anon_sym_SPLIT] = anon_sym_SPLIT,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_GROUP] = anon_sym_GROUP,
  [anon_sym_BY] = anon_sym_BY,
  [anon_sym_ORDER] = anon_sym_ORDER,
  [anon_sym_COLLATE] = anon_sym_COLLATE,
  [anon_sym_NUMERIC] = anon_sym_NUMERIC,
  [anon_sym_ASC] = anon_sym_ASC,
  [anon_sym_DESC] = anon_sym_DESC,
  [anon_sym_LIMIT] = anon_sym_LIMIT,
  [anon_sym_START] = anon_sym_START,
  [anon_sym_FETCH] = anon_sym_FETCH,
  [anon_sym_TIMEOUT] = anon_sym_TIMEOUT,
  [anon_sym_PARALLEL] = anon_sym_PARALLEL,
  [anon_sym_INSERT] = anon_sym_INSERT,
  [anon_sym_IGNORE] = anon_sym_IGNORE,
  [anon_sym_INTO] = anon_sym_INTO,
  [anon_sym_VALUES] = anon_sym_VALUES,
  [anon_sym_ON] = anon_sym_ON,
  [anon_sym_DUPLICATE] = anon_sym_DUPLICATE,
  [anon_sym_KEY] = anon_sym_KEY,
  [anon_sym_UPDATE] = anon_sym_UPDATE,
  [anon_sym_CREATE] = anon_sym_CREATE,
  [anon_sym_CONTENT] = anon_sym_CONTENT,
  [anon_sym_SET] = anon_sym_SET,
  [anon_sym_RETURN] = anon_sym_RETURN,
  [anon_sym_BEFORE] = anon_sym_BEFORE,
  [anon_sym_AFTER] = anon_sym_AFTER,
  [anon_sym_DIFF] = anon_sym_DIFF,
  [anon_sym_MERGE] = anon_sym_MERGE,
  [anon_sym_PATCH] = anon_sym_PATCH,
  [anon_sym_RELATE] = anon_sym_RELATE,
  [anon_sym_DELETE] = anon_sym_DELETE,
  [anon_sym_DEFINE] = anon_sym_DEFINE,
  [anon_sym_NAMESPACE] = anon_sym_NAMESPACE,
  [anon_sym_DATABASE] = anon_sym_DATABASE,
  [anon_sym_LOGIN] = anon_sym_LOGIN,
  [anon_sym_PASSWORD] = anon_sym_PASSWORD,
  [anon_sym_PASSHASH] = anon_sym_PASSHASH,
  [anon_sym_TOKEN] = anon_sym_TOKEN,
  [anon_sym_SCOPE] = anon_sym_SCOPE,
  [anon_sym_TYPE] = anon_sym_TYPE,
  [anon_sym_VALUE] = anon_sym_VALUE,
  [anon_sym_SESSION] = anon_sym_SESSION,
  [anon_sym_SIGNUP] = anon_sym_SIGNUP,
  [anon_sym_SIGNIN] = anon_sym_SIGNIN,
  [anon_sym_TABLE] = anon_sym_TABLE,
  [anon_sym_DROP] = anon_sym_DROP,
  [anon_sym_SCHEMAFULL] = anon_sym_SCHEMAFULL,
  [anon_sym_SCHEMALESS] = anon_sym_SCHEMALESS,
  [anon_sym_AS] = anon_sym_AS,
  [anon_sym_PERMISSIONS] = anon_sym_PERMISSIONS,
  [anon_sym_FULL] = anon_sym_FULL,
  [anon_sym_FOR] = anon_sym_FOR,
  [anon_sym_select] = anon_sym_select,
  [anon_sym_update] = anon_sym_update,
  [anon_sym_create] = anon_sym_create,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_EVENT] = anon_sym_EVENT,
  [anon_sym_WHEN] = anon_sym_WHEN,
  [anon_sym_ASSERT] = anon_sym_ASSERT,
  [anon_sym_INDEX] = anon_sym_INDEX,
  [anon_sym_FIELDS] = anon_sym_FIELDS,
  [anon_sym_COLUMNS] = anon_sym_COLUMNS,
  [anon_sym_UNIQUE] = anon_sym_UNIQUE,
  [anon_sym_REMOVE] = anon_sym_REMOVE,
  [anon_sym_SLEEP] = anon_sym_SLEEP,
  [anon_sym_INFO] = anon_sym_INFO,
  [anon_sym_KV] = anon_sym_KV,
  [anon_sym_FUNCTION] = anon_sym_FUNCTION,
  [anon_sym_PARAM] = anon_sym_PARAM,
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
  [sym_source_file] = sym_source_file,
  [sym_token] = sym_token,
  [sym_scripting_function] = sym_scripting_function,
  [sym_scripting_content] = sym_scripting_content,
  [sym__scripting_statement] = sym__scripting_statement,
  [sym_future] = sym_future,
  [sym_casting] = sym_casting,
  [sym_property] = sym_property,
  [sym_identifier] = sym_identifier,
  [sym_duration] = sym_duration,
  [sym_constant] = sym_constant,
  [sym_number] = sym_number,
  [sym_record] = sym_record,
  [sym_keyword] = sym_keyword,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [aux_sym_identifier_token1] = {
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
  [anon_sym_USE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BEGIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRANSACTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CANCEL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_THEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SELECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FROM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WHERE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPLIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GROUP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ORDER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLLATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NUMERIC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ASC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DESC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LIMIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_START] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FETCH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TIMEOUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PARALLEL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INSERT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IGNORE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INTO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VALUES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DUPLICATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_KEY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UPDATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CREATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONTENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RETURN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BEFORE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AFTER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DIFF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MERGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PATCH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RELATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DELETE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEFINE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NAMESPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATABASE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOGIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PASSWORD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PASSHASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TOKEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SCOPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TYPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VALUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SESSION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SIGNUP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SIGNIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TABLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DROP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SCHEMAFULL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SCHEMALESS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERMISSIONS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FULL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_select] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_update] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_create] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EVENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WHEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ASSERT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INDEX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FIELDS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLUMNS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UNIQUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REMOVE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLEEP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INFO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_KV] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FUNCTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PARAM] = {
    .visible = true,
    .named = false,
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_token] = {
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
  [sym_identifier] = {
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
  [sym_keyword] = {
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
  [5] = 5,
  [6] = 5,
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
  [21] = 9,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 29,
  [31] = 28,
  [32] = 24,
  [33] = 23,
  [34] = 22,
  [35] = 27,
  [36] = 8,
  [37] = 26,
  [38] = 38,
  [39] = 20,
  [40] = 19,
  [41] = 25,
  [42] = 38,
  [43] = 10,
  [44] = 11,
  [45] = 12,
  [46] = 13,
  [47] = 14,
  [48] = 15,
  [49] = 16,
  [50] = 17,
  [51] = 18,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 56,
  [59] = 55,
  [60] = 54,
  [61] = 57,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 64,
  [66] = 66,
  [67] = 67,
  [68] = 68,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(94);
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == '#') ADVANCE(806);
      if (lookahead == '$') ADVANCE(88);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(807);
      if (lookahead == '(') ADVANCE(741);
      if (lookahead == ')') ADVANCE(742);
      if (lookahead == '*') ADVANCE(711);
      if (lookahead == '+') ADVANCE(708);
      if (lookahead == ',') ADVANCE(747);
      if (lookahead == '-') ADVANCE(709);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == ':') ADVANCE(749);
      if (lookahead == ';') ADVANCE(748);
      if (lookahead == '<') ADVANCE(704);
      if (lookahead == '=') ADVANCE(693);
      if (lookahead == '>') ADVANCE(706);
      if (lookahead == '?') ADVANCE(10);
      if (lookahead == 'A') ADVANCE(259);
      if (lookahead == 'B') ADVANCE(200);
      if (lookahead == 'C') ADVANCE(149);
      if (lookahead == 'D') ADVANCE(154);
      if (lookahead == 'E') ADVANCE(187);
      if (lookahead == 'F') ADVANCE(155);
      if (lookahead == 'G') ADVANCE(385);
      if (lookahead == 'H') ADVANCE(415);
      if (lookahead == 'I') ADVANCE(260);
      if (lookahead == 'K') ADVANCE(201);
      if (lookahead == 'L') ADVANCE(238);
      if (lookahead == 'M') ADVANCE(161);
      if (lookahead == 'N') ADVANCE(156);
      if (lookahead == 'O') ADVANCE(331);
      if (lookahead == 'P') ADVANCE(150);
      if (lookahead == 'R') ADVANCE(202);
      if (lookahead == 'S') ADVANCE(175);
      if (lookahead == 'T') ADVANCE(151);
      if (lookahead == 'U') ADVANCE(332);
      if (lookahead == 'V') ADVANCE(159);
      if (lookahead == 'W') ADVANCE(273);
      if (lookahead == '[') ADVANCE(743);
      if (lookahead == '\\') ADVANCE(810);
      if (lookahead == ']') ADVANCE(744);
      if (lookahead == 'a') ADVANCE(521);
      if (lookahead == 'b') ADVANCE(532);
      if (lookahead == 'c') ADVANCE(531);
      if (lookahead == 'd') ADVANCE(460);
      if (lookahead == 'f') ADVANCE(459);
      if (lookahead == 'g') ADVANCE(490);
      if (lookahead == 'h') ADVANCE(564);
      if (lookahead == 'i') ADVANCE(527);
      if (lookahead == 'm') ADVANCE(465);
      if (lookahead == 'n') ADVANCE(534);
      if (lookahead == 'o') ADVANCE(471);
      if (lookahead == 'p') ADVANCE(462);
      if (lookahead == 'r') ADVANCE(463);
      if (lookahead == 's') ADVANCE(481);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead == 'u') ADVANCE(543);
      if (lookahead == 'x') ADVANCE(712);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '|') ADVANCE(66);
      if (lookahead == '}') ADVANCE(100);
      if (lookahead == '~') ADVANCE(700);
      if (lookahead == 247) ADVANCE(715);
      if (lookahead == 8712) ADVANCE(729);
      if (lookahead == 8713) ADVANCE(732);
      if (lookahead == 8715) ADVANCE(719);
      if (lookahead == 8716) ADVANCE(721);
      if (lookahead == 8834) ADVANCE(736);
      if (lookahead == 8835) ADVANCE(725);
      if (lookahead == 8836) ADVANCE(738);
      if (lookahead == 8837) ADVANCE(727);
      if (lookahead == 8838) ADVANCE(734);
      if (lookahead == 8839) ADVANCE(723);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(597);
      if (('J' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == '/') ADVANCE(805);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(812);
      if (lookahead != 0) ADVANCE(811);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == '$') ADVANCE(88);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(807);
      if (lookahead == '(') ADVANCE(741);
      if (lookahead == ')') ADVANCE(742);
      if (lookahead == '*') ADVANCE(711);
      if (lookahead == '+') ADVANCE(708);
      if (lookahead == ',') ADVANCE(747);
      if (lookahead == '-') ADVANCE(710);
      if (lookahead == '/') ADVANCE(713);
      if (lookahead == ':') ADVANCE(749);
      if (lookahead == ';') ADVANCE(748);
      if (lookahead == '<') ADVANCE(704);
      if (lookahead == '=') ADVANCE(693);
      if (lookahead == '>') ADVANCE(706);
      if (lookahead == '?') ADVANCE(10);
      if (lookahead == 'A') ADVANCE(259);
      if (lookahead == 'B') ADVANCE(200);
      if (lookahead == 'C') ADVANCE(149);
      if (lookahead == 'D') ADVANCE(154);
      if (lookahead == 'E') ADVANCE(187);
      if (lookahead == 'F') ADVANCE(155);
      if (lookahead == 'G') ADVANCE(385);
      if (lookahead == 'H') ADVANCE(415);
      if (lookahead == 'I') ADVANCE(260);
      if (lookahead == 'K') ADVANCE(201);
      if (lookahead == 'L') ADVANCE(238);
      if (lookahead == 'M') ADVANCE(161);
      if (lookahead == 'N') ADVANCE(156);
      if (lookahead == 'O') ADVANCE(331);
      if (lookahead == 'P') ADVANCE(150);
      if (lookahead == 'R') ADVANCE(202);
      if (lookahead == 'S') ADVANCE(175);
      if (lookahead == 'T') ADVANCE(151);
      if (lookahead == 'U') ADVANCE(332);
      if (lookahead == 'V') ADVANCE(159);
      if (lookahead == 'W') ADVANCE(273);
      if (lookahead == '[') ADVANCE(743);
      if (lookahead == ']') ADVANCE(744);
      if (lookahead == 'a') ADVANCE(521);
      if (lookahead == 'b') ADVANCE(532);
      if (lookahead == 'c') ADVANCE(531);
      if (lookahead == 'd') ADVANCE(460);
      if (lookahead == 'f') ADVANCE(459);
      if (lookahead == 'g') ADVANCE(490);
      if (lookahead == 'h') ADVANCE(564);
      if (lookahead == 'i') ADVANCE(527);
      if (lookahead == 'm') ADVANCE(465);
      if (lookahead == 'n') ADVANCE(534);
      if (lookahead == 'o') ADVANCE(471);
      if (lookahead == 'p') ADVANCE(462);
      if (lookahead == 'r') ADVANCE(463);
      if (lookahead == 's') ADVANCE(481);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead == 'u') ADVANCE(543);
      if (lookahead == 'x') ADVANCE(712);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '|') ADVANCE(66);
      if (lookahead == '}') ADVANCE(100);
      if (lookahead == '~') ADVANCE(700);
      if (lookahead == 247) ADVANCE(715);
      if (lookahead == 8712) ADVANCE(729);
      if (lookahead == 8713) ADVANCE(732);
      if (lookahead == 8715) ADVANCE(719);
      if (lookahead == 8716) ADVANCE(721);
      if (lookahead == 8834) ADVANCE(736);
      if (lookahead == 8835) ADVANCE(725);
      if (lookahead == 8836) ADVANCE(738);
      if (lookahead == 8837) ADVANCE(727);
      if (lookahead == 8838) ADVANCE(734);
      if (lookahead == 8839) ADVANCE(723);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(597);
      if (('J' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == '$') ADVANCE(88);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(807);
      if (lookahead == '(') ADVANCE(741);
      if (lookahead == ')') ADVANCE(742);
      if (lookahead == '*') ADVANCE(711);
      if (lookahead == '+') ADVANCE(708);
      if (lookahead == ',') ADVANCE(747);
      if (lookahead == '-') ADVANCE(710);
      if (lookahead == '/') ADVANCE(713);
      if (lookahead == ':') ADVANCE(749);
      if (lookahead == ';') ADVANCE(748);
      if (lookahead == '<') ADVANCE(704);
      if (lookahead == '=') ADVANCE(693);
      if (lookahead == '>') ADVANCE(706);
      if (lookahead == '?') ADVANCE(10);
      if (lookahead == 'A') ADVANCE(259);
      if (lookahead == 'B') ADVANCE(200);
      if (lookahead == 'C') ADVANCE(149);
      if (lookahead == 'D') ADVANCE(154);
      if (lookahead == 'E') ADVANCE(187);
      if (lookahead == 'F') ADVANCE(155);
      if (lookahead == 'G') ADVANCE(385);
      if (lookahead == 'H') ADVANCE(415);
      if (lookahead == 'I') ADVANCE(260);
      if (lookahead == 'K') ADVANCE(201);
      if (lookahead == 'L') ADVANCE(238);
      if (lookahead == 'M') ADVANCE(161);
      if (lookahead == 'N') ADVANCE(156);
      if (lookahead == 'O') ADVANCE(331);
      if (lookahead == 'P') ADVANCE(150);
      if (lookahead == 'R') ADVANCE(202);
      if (lookahead == 'S') ADVANCE(175);
      if (lookahead == 'T') ADVANCE(151);
      if (lookahead == 'U') ADVANCE(332);
      if (lookahead == 'V') ADVANCE(159);
      if (lookahead == 'W') ADVANCE(273);
      if (lookahead == '[') ADVANCE(743);
      if (lookahead == ']') ADVANCE(744);
      if (lookahead == 'a') ADVANCE(521);
      if (lookahead == 'b') ADVANCE(532);
      if (lookahead == 'c') ADVANCE(531);
      if (lookahead == 'd') ADVANCE(460);
      if (lookahead == 'f') ADVANCE(459);
      if (lookahead == 'g') ADVANCE(490);
      if (lookahead == 'h') ADVANCE(564);
      if (lookahead == 'i') ADVANCE(527);
      if (lookahead == 'm') ADVANCE(465);
      if (lookahead == 'n') ADVANCE(534);
      if (lookahead == 'o') ADVANCE(471);
      if (lookahead == 'p') ADVANCE(462);
      if (lookahead == 'r') ADVANCE(463);
      if (lookahead == 's') ADVANCE(481);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead == 'u') ADVANCE(543);
      if (lookahead == 'x') ADVANCE(712);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '|') ADVANCE(66);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '~') ADVANCE(700);
      if (lookahead == 247) ADVANCE(715);
      if (lookahead == 8712) ADVANCE(729);
      if (lookahead == 8713) ADVANCE(732);
      if (lookahead == 8715) ADVANCE(719);
      if (lookahead == 8716) ADVANCE(721);
      if (lookahead == 8834) ADVANCE(736);
      if (lookahead == 8835) ADVANCE(725);
      if (lookahead == 8836) ADVANCE(738);
      if (lookahead == 8837) ADVANCE(727);
      if (lookahead == 8838) ADVANCE(734);
      if (lookahead == 8839) ADVANCE(723);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(597);
      if (('J' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == '\\') ADVANCE(810);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(815);
      if (lookahead != 0) ADVANCE(814);
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(687);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(807);
      if (lookahead == '\\') ADVANCE(810);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      if (lookahead != 0) ADVANCE(808);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(65);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(692);
      if (lookahead == '=') ADVANCE(698);
      if (lookahead == '?') ADVANCE(691);
      if (lookahead == '~') ADVANCE(702);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(84);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(85);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(78);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(80);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(81);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(695);
      if (lookahead == '~') ADVANCE(701);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(102);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(101);
      END_STATE();
    case 21:
      if (lookahead == 'I') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'N') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'N') ADVANCE(731);
      END_STATE();
    case 24:
      if (lookahead == 'O') ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'T') ADVANCE(696);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(19);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 64:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 65:
      if (lookahead == '{') ADVANCE(95);
      END_STATE();
    case 66:
      if (lookahead == '|') ADVANCE(689);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(598);
      END_STATE();
    case 68:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 69:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 70:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 71:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 72:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 73:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(793);
      END_STATE();
    case 74:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(794);
      END_STATE();
    case 75:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      END_STATE();
    case 76:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 77:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 78:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      END_STATE();
    case 79:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 80:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(778);
      END_STATE();
    case 81:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 82:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(780);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(596);
      END_STATE();
    case 87:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(792);
      END_STATE();
    case 88:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(776);
      END_STATE();
    case 91:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '`' ||
          lookahead == 10217) ADVANCE(600);
      END_STATE();
    case 93:
      if (eof) ADVANCE(94);
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == '#') ADVANCE(806);
      if (lookahead == '$') ADVANCE(88);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(807);
      if (lookahead == '(') ADVANCE(741);
      if (lookahead == ')') ADVANCE(742);
      if (lookahead == '*') ADVANCE(711);
      if (lookahead == '+') ADVANCE(708);
      if (lookahead == ',') ADVANCE(747);
      if (lookahead == '-') ADVANCE(709);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == ':') ADVANCE(749);
      if (lookahead == ';') ADVANCE(748);
      if (lookahead == '<') ADVANCE(704);
      if (lookahead == '=') ADVANCE(693);
      if (lookahead == '>') ADVANCE(706);
      if (lookahead == '?') ADVANCE(10);
      if (lookahead == 'A') ADVANCE(259);
      if (lookahead == 'B') ADVANCE(200);
      if (lookahead == 'C') ADVANCE(149);
      if (lookahead == 'D') ADVANCE(154);
      if (lookahead == 'E') ADVANCE(187);
      if (lookahead == 'F') ADVANCE(155);
      if (lookahead == 'G') ADVANCE(385);
      if (lookahead == 'H') ADVANCE(415);
      if (lookahead == 'I') ADVANCE(260);
      if (lookahead == 'K') ADVANCE(201);
      if (lookahead == 'L') ADVANCE(238);
      if (lookahead == 'M') ADVANCE(161);
      if (lookahead == 'N') ADVANCE(156);
      if (lookahead == 'O') ADVANCE(331);
      if (lookahead == 'P') ADVANCE(150);
      if (lookahead == 'R') ADVANCE(202);
      if (lookahead == 'S') ADVANCE(175);
      if (lookahead == 'T') ADVANCE(151);
      if (lookahead == 'U') ADVANCE(332);
      if (lookahead == 'V') ADVANCE(159);
      if (lookahead == 'W') ADVANCE(273);
      if (lookahead == '[') ADVANCE(743);
      if (lookahead == ']') ADVANCE(744);
      if (lookahead == 'a') ADVANCE(521);
      if (lookahead == 'b') ADVANCE(532);
      if (lookahead == 'c') ADVANCE(531);
      if (lookahead == 'd') ADVANCE(460);
      if (lookahead == 'f') ADVANCE(459);
      if (lookahead == 'g') ADVANCE(490);
      if (lookahead == 'h') ADVANCE(564);
      if (lookahead == 'i') ADVANCE(527);
      if (lookahead == 'm') ADVANCE(465);
      if (lookahead == 'n') ADVANCE(534);
      if (lookahead == 'o') ADVANCE(471);
      if (lookahead == 'p') ADVANCE(462);
      if (lookahead == 'r') ADVANCE(463);
      if (lookahead == 's') ADVANCE(481);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead == 'u') ADVANCE(543);
      if (lookahead == 'x') ADVANCE(712);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '|') ADVANCE(66);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '~') ADVANCE(700);
      if (lookahead == 247) ADVANCE(715);
      if (lookahead == 8712) ADVANCE(729);
      if (lookahead == 8713) ADVANCE(732);
      if (lookahead == 8715) ADVANCE(719);
      if (lookahead == 8716) ADVANCE(721);
      if (lookahead == 8834) ADVANCE(736);
      if (lookahead == 8835) ADVANCE(725);
      if (lookahead == 8836) ADVANCE(738);
      if (lookahead == 8837) ADVANCE(727);
      if (lookahead == 8838) ADVANCE(734);
      if (lookahead == 8839) ADVANCE(723);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(93)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(597);
      if (('J' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_function_LPAREN_RPAREN_LBRACE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RBRACE_SEMI);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_RBRACE_COMMA);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == ',') ADVANCE(97);
      if (lookahead == ';') ADVANCE(96);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_future_token1);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_casting_token1);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'I') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '1') ADVANCE(126);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '1') ADVANCE(127);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '1') ADVANCE(128);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '1') ADVANCE(129);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(137);
      if (lookahead == '3') ADVANCE(145);
      if (lookahead == '5') ADVANCE(121);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(766);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(769);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(772);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(775);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(138);
      if (lookahead == '3') ADVANCE(146);
      if (lookahead == '5') ADVANCE(122);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(139);
      if (lookahead == '3') ADVANCE(147);
      if (lookahead == '5') ADVANCE(123);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(140);
      if (lookahead == '3') ADVANCE(148);
      if (lookahead == '5') ADVANCE(124);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '4') ADVANCE(765);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '4') ADVANCE(768);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '4') ADVANCE(771);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '4') ADVANCE(774);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '5') ADVANCE(141);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '5') ADVANCE(142);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '5') ADVANCE(143);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '5') ADVANCE(144);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '6') ADVANCE(764);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '6') ADVANCE(767);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '6') ADVANCE(770);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '6') ADVANCE(773);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '8') ADVANCE(133);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '8') ADVANCE(134);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '8') ADVANCE(135);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '8') ADVANCE(136);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'A') ADVANCE(333);
      if (lookahead == 'O') ADVANCE(300);
      if (lookahead == 'R') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'A') ADVANCE(387);
      if (lookahead == 'E') ADVANCE(395);
      if (lookahead == 'S') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'A') ADVANCE(174);
      if (lookahead == 'H') ADVANCE(240);
      if (lookahead == 'I') ADVANCE(329);
      if (lookahead == 'O') ADVANCE(299);
      if (lookahead == 'R') ADVANCE(162);
      if (lookahead == 'Y') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'A') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'A') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'A') ADVANCE(438);
      if (lookahead == 'B') ADVANCE(603);
      if (lookahead == 'E') ADVANCE(265);
      if (lookahead == 'I') ADVANCE(262);
      if (lookahead == 'R') ADVANCE(363);
      if (lookahead == 'U') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'A') ADVANCE(318);
      if (lookahead == 'E') ADVANCE(436);
      if (lookahead == 'I') ADVANCE(239);
      if (lookahead == 'O') ADVANCE(382);
      if (lookahead == 'R') ADVANCE(364);
      if (lookahead == 'U') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'A') ADVANCE(328);
      if (lookahead == 'O') ADVANCE(348);
      if (lookahead == 'S') ADVANCE(602);
      if (lookahead == 'U') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'A') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'A') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'A') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'A') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'A') ADVANCE(435);
      if (lookahead == 'E') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'A') ADVANCE(353);
      if (lookahead == 'U') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'A') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'A') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'A') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'A') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'A') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'A') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'A') ADVANCE(289);
      if (lookahead == 'E') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'A') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'A') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'A') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'B') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'B') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'C') ADVANCE(275);
      if (lookahead == 'E') ADVANCE(315);
      if (lookahead == 'I') ADVANCE(266);
      if (lookahead == 'L') ADVANCE(253);
      if (lookahead == 'P') ADVANCE(319);
      if (lookahead == 'T') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'C') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'C') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'C') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'C') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'C') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'C') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'C') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'C') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'C') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'C') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'C') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'D') ADVANCE(191);
      if (lookahead == 'L') ADVANCE(411);
      if (lookahead == 'N') ADVANCE(189);
      if (lookahead == 'S') ADVANCE(125);
      if (lookahead == 'V') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'D') ADVANCE(688);
      if (lookahead == 'Y') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'D') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'D') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'D') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'D') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'D') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'D') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'D') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'D') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'D') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'D') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'D') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(263);
      if (lookahead == 'Y') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(457);
      if (lookahead == 'V') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(321);
      if (lookahead == 'S') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(423);
      if (lookahead == 'I') ADVANCE(324);
      if (lookahead == 'O') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(397);
      if (lookahead == 'O') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(392);
      if (lookahead == 'I') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'F') ADVANCE(439);
      if (lookahead == 'L') ADVANCE(307);
      if (lookahead == 'N') ADVANCE(188);
      if (lookahead == 'S') ADVANCE(666);
      if (lookahead == 'T') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'F') ADVANCE(609);
      if (lookahead == 'G') ADVANCE(354);
      if (lookahead == 'N') ADVANCE(717);
      if (lookahead == 'S') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'F') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'F') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'F') ADVANCE(366);
      if (lookahead == 'G') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'F') ADVANCE(451);
      if (lookahead == 'L') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'F') ADVANCE(283);
      if (lookahead == 'L') ADVANCE(256);
      if (lookahead == 'S') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'G') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'G') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'G') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'H') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'H') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'H') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'H') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'H') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'H') ADVANCE(163);
      if (lookahead == 'W') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'H') ADVANCE(242);
      if (lookahead == 'O') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'I') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'I') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'I') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'I') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'I') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'I') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'I') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'I') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'I') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'I') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'I') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'I') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'I') ADVANCE(341);
      if (lookahead == 'U') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'I') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'I') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'I') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'I') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'I') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'I') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'I') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'I') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'I') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'I') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'K') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(322);
      if (lookahead == 'M') ADVANCE(330);
      if (lookahead == 'N') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(301);
      if (lookahead == 'N') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(302);
      if (lookahead == 'M') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(320);
      if (lookahead == 'M') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(306);
      if (lookahead == 'N') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(254);
      if (lookahead == 'S') ADVANCE(409);
      if (lookahead == 'T') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(166);
      if (lookahead == 'M') ADVANCE(361);
      if (lookahead == 'T') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(170);
      if (lookahead == 'U') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'M') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'M') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'M') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'M') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'M') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'M') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'M') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'M') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(634);
      if (lookahead == 'R') ADVANCE(690);
      if (lookahead == 'U') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(276);
      if (lookahead == 'P') ADVANCE(199);
      if (lookahead == 'S') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(675);
      if (lookahead == 'R') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(207);
      if (lookahead == 'T') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(235);
      if (lookahead == 'T') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'O') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'O') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'O') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'O') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'O') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'O') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'O') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'O') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'O') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'O') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'O') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'O') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'O') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'O') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'P') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'P') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'P') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'P') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'P') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'P') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'P') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'P') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'Q') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'R') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'R') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'R') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'R') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'R') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'R') ADVANCE(157);
      if (lookahead == 'S') ADVANCE(398);
      if (lookahead == 'T') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'R') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'R') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'R') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'R') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'R') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'R') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'R') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'R') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'R') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'R') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'U') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'U') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'U') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'U') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'U') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'U') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'V') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'X') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'Y') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'Y') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'a') ADVANCE(512);
      if (lookahead == 'l') ADVANCE(540);
      if (lookahead == 'n') ADVANCE(582);
      if (lookahead == 'u') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'a') ADVANCE(563);
      if (lookahead == 'e') ADVANCE(473);
      if (lookahead == 'u') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'a') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'a') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'a') ADVANCE(526);
      if (lookahead == 'e') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'a') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'a') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'a') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'a') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'a') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'a') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'a') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'b') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'b') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'c') ADVANCE(505);
      if (lookahead == 'l') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'c') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'c') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'c') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'c') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'd') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'd') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'd') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(517);
      if (lookahead == 'l') ADVANCE(493);
      if (lookahead == 't') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(468);
      if (lookahead == 'y') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'g') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'h') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(519);
      if (lookahead == 'r') ADVANCE(576);
      if (lookahead == 'y') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'j') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'l') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'l') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'l') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'l') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'l') ADVANCE(514);
      if (lookahead == 'm') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'l') ADVANCE(498);
      if (lookahead == 's') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'm') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'm') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'm') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(577);
      if (lookahead == 'r') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(557);
      if (lookahead == 's') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(575);
      if (lookahead == 'r') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(528);
      if (lookahead == 'u') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 's') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 's') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 's') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 't') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 't') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 't') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 't') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 't') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 't') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 't') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 't') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 't') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 't') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 't') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 't') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 't') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 't') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 't') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 't') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 't') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 't') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'u') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'u') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'y') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'y') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'y') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_duration_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 's' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(596);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 's' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(597);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(598);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_record_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_record_token2);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_USE);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_NS);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_DB);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_LET);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_BEGIN);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_TRANSACTION);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_CANCEL);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_COMMIT);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_THEN);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_SELECT);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_WHERE);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_SPLIT);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_GROUP);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_BY);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_ORDER);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_COLLATE);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_NUMERIC);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_ASC);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_DESC);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_LIMIT);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_START);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_FETCH);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_TIMEOUT);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_PARALLEL);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_INSERT);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_IGNORE);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_INTO);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_VALUES);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_ON);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_DUPLICATE);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_KEY);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_UPDATE);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_CREATE);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_CONTENT);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_RETURN);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_BEFORE);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_AFTER);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_DIFF);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_MERGE);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_RELATE);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_DEFINE);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_NAMESPACE);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_DATABASE);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_LOGIN);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_PASSWORD);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_PASSHASH);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_TOKEN);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_SCOPE);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_TYPE);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_VALUE);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_SESSION);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_SIGNUP);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_SIGNIN);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_TABLE);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_DROP);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_SCHEMAFULL);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_SCHEMALESS);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_AS);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'C') ADVANCE(623);
      if (lookahead == 'S') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_PERMISSIONS);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_FULL);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_select);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_update);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_create);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_EVENT);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_WHEN);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_ASSERT);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_INDEX);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_FIELDS);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_COLUMNS);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_UNIQUE);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_REMOVE);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_SLEEP);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_INFO);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_KV);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_FUNCTION);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_PARAM);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_AND);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_OR);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'D') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_QMARK_COLON);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(697);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_IS);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_ISNOT);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_QMARK_EQ);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_QMARK_TILDE);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_STAR_TILDE);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(746);
      if (lookahead == '=') ADVANCE(705);
      if (lookahead == 'b') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(707);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(806);
      if (lookahead == '>') ADVANCE(745);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(745);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(716);
      if (lookahead == '=') ADVANCE(699);
      if (lookahead == '~') ADVANCE(703);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(806);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'D') ADVANCE(206);
      if (lookahead == 'F') ADVANCE(360);
      if (lookahead == 'S') ADVANCE(258);
      if (lookahead == 'T') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_CONTAINS);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'A') ADVANCE(314);
      if (lookahead == 'N') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_CONTAINSNOT);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_CONTAINSALL);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_CONTAINSANY);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_CONTAINSNONE);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_INSIDE);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_NOTINSIDE);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_NOTIN);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_ALLINSIDE);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_ANYINSIDE);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_NONEINSIDE);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_OUTSIDE);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_INTERSECTS);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_array);
      if (lookahead == ':') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_duration);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_number);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_object);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == ':') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_record);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_geometry);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_EDDSA);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_ES256);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_ES384);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_ES512);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_HS256);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_HS384);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_HS512);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_PS256);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_PS384);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_PS512);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_RS256);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_RS384);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_RS512);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_function_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(776);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_function_token2);
      if (lookahead == ':') ADVANCE(15);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_function_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(778);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_count);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_function_token3);
      if (lookahead == ':') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(780);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_function_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_function_token4);
      if (lookahead == ':') ADVANCE(14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_function_token4);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_function_token5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_function_token6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_function_token7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_function_token8);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_function_token9);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_function_token10);
      if (lookahead == ':') ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_function_token10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_function_token11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_function_token13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(792);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_function_token14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(793);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_function_token15);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(794);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_NONE);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'I') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '.') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(804);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '.') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(806);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(808);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(811);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(814);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 93},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 93},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 93},
  [8] = {.lex_state = 93},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 93},
  [11] = {.lex_state = 93},
  [12] = {.lex_state = 93},
  [13] = {.lex_state = 93},
  [14] = {.lex_state = 93},
  [15] = {.lex_state = 93},
  [16] = {.lex_state = 93},
  [17] = {.lex_state = 93},
  [18] = {.lex_state = 93},
  [19] = {.lex_state = 93},
  [20] = {.lex_state = 93},
  [21] = {.lex_state = 93},
  [22] = {.lex_state = 93},
  [23] = {.lex_state = 93},
  [24] = {.lex_state = 93},
  [25] = {.lex_state = 93},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 93},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 93},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 93},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 93},
  [38] = {.lex_state = 93},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_SEMI] = ACTIONS(1),
    [anon_sym_RBRACE_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_future_token1] = ACTIONS(1),
    [aux_sym_casting_token1] = ACTIONS(1),
    [aux_sym_property_token1] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [aux_sym_duration_token1] = ACTIONS(1),
    [aux_sym_constant_token1] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_record_token1] = ACTIONS(1),
    [aux_sym_record_token2] = ACTIONS(1),
    [anon_sym_USE] = ACTIONS(1),
    [anon_sym_NS] = ACTIONS(1),
    [anon_sym_DB] = ACTIONS(1),
    [anon_sym_LET] = ACTIONS(1),
    [anon_sym_BEGIN] = ACTIONS(1),
    [anon_sym_TRANSACTION] = ACTIONS(1),
    [anon_sym_CANCEL] = ACTIONS(1),
    [anon_sym_COMMIT] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_ELSE] = ACTIONS(1),
    [anon_sym_THEN] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_SELECT] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [anon_sym_WHERE] = ACTIONS(1),
    [anon_sym_SPLIT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_GROUP] = ACTIONS(1),
    [anon_sym_BY] = ACTIONS(1),
    [anon_sym_ORDER] = ACTIONS(1),
    [anon_sym_COLLATE] = ACTIONS(1),
    [anon_sym_NUMERIC] = ACTIONS(1),
    [anon_sym_ASC] = ACTIONS(1),
    [anon_sym_DESC] = ACTIONS(1),
    [anon_sym_LIMIT] = ACTIONS(1),
    [anon_sym_START] = ACTIONS(1),
    [anon_sym_FETCH] = ACTIONS(1),
    [anon_sym_TIMEOUT] = ACTIONS(1),
    [anon_sym_PARALLEL] = ACTIONS(1),
    [anon_sym_INSERT] = ACTIONS(1),
    [anon_sym_IGNORE] = ACTIONS(1),
    [anon_sym_INTO] = ACTIONS(1),
    [anon_sym_VALUES] = ACTIONS(1),
    [anon_sym_ON] = ACTIONS(1),
    [anon_sym_DUPLICATE] = ACTIONS(1),
    [anon_sym_KEY] = ACTIONS(1),
    [anon_sym_UPDATE] = ACTIONS(1),
    [anon_sym_CREATE] = ACTIONS(1),
    [anon_sym_CONTENT] = ACTIONS(1),
    [anon_sym_SET] = ACTIONS(1),
    [anon_sym_RETURN] = ACTIONS(1),
    [anon_sym_BEFORE] = ACTIONS(1),
    [anon_sym_AFTER] = ACTIONS(1),
    [anon_sym_DIFF] = ACTIONS(1),
    [anon_sym_MERGE] = ACTIONS(1),
    [anon_sym_PATCH] = ACTIONS(1),
    [anon_sym_RELATE] = ACTIONS(1),
    [anon_sym_DELETE] = ACTIONS(1),
    [anon_sym_DEFINE] = ACTIONS(1),
    [anon_sym_NAMESPACE] = ACTIONS(1),
    [anon_sym_DATABASE] = ACTIONS(1),
    [anon_sym_LOGIN] = ACTIONS(1),
    [anon_sym_PASSWORD] = ACTIONS(1),
    [anon_sym_PASSHASH] = ACTIONS(1),
    [anon_sym_TOKEN] = ACTIONS(1),
    [anon_sym_SCOPE] = ACTIONS(1),
    [anon_sym_TYPE] = ACTIONS(1),
    [anon_sym_VALUE] = ACTIONS(1),
    [anon_sym_SESSION] = ACTIONS(1),
    [anon_sym_SIGNUP] = ACTIONS(1),
    [anon_sym_SIGNIN] = ACTIONS(1),
    [anon_sym_TABLE] = ACTIONS(1),
    [anon_sym_DROP] = ACTIONS(1),
    [anon_sym_SCHEMAFULL] = ACTIONS(1),
    [anon_sym_SCHEMALESS] = ACTIONS(1),
    [anon_sym_AS] = ACTIONS(1),
    [anon_sym_PERMISSIONS] = ACTIONS(1),
    [anon_sym_FULL] = ACTIONS(1),
    [anon_sym_FOR] = ACTIONS(1),
    [anon_sym_select] = ACTIONS(1),
    [anon_sym_update] = ACTIONS(1),
    [anon_sym_create] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_EVENT] = ACTIONS(1),
    [anon_sym_WHEN] = ACTIONS(1),
    [anon_sym_ASSERT] = ACTIONS(1),
    [anon_sym_INDEX] = ACTIONS(1),
    [anon_sym_FIELDS] = ACTIONS(1),
    [anon_sym_COLUMNS] = ACTIONS(1),
    [anon_sym_UNIQUE] = ACTIONS(1),
    [anon_sym_REMOVE] = ACTIONS(1),
    [anon_sym_SLEEP] = ACTIONS(1),
    [anon_sym_INFO] = ACTIONS(1),
    [anon_sym_KV] = ACTIONS(1),
    [anon_sym_FUNCTION] = ACTIONS(1),
    [anon_sym_PARAM] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(68),
    [sym_token] = STATE(7),
    [sym_scripting_function] = STATE(24),
    [sym_future] = STATE(24),
    [sym_casting] = STATE(24),
    [sym_property] = STATE(24),
    [sym_identifier] = STATE(24),
    [sym_duration] = STATE(24),
    [sym_constant] = STATE(24),
    [sym_number] = STATE(24),
    [sym_record] = STATE(24),
    [sym_keyword] = STATE(24),
    [sym_operator] = STATE(24),
    [sym_punctuation] = STATE(24),
    [sym_delimiter] = STATE(24),
    [sym_type] = STATE(24),
    [sym_datatype] = STATE(28),
    [sym_algotype] = STATE(28),
    [sym_function] = STATE(24),
    [sym_bool] = STATE(24),
    [sym_nothing] = STATE(24),
    [sym_string] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(7),
    [aux_sym_future_token1] = ACTIONS(9),
    [aux_sym_casting_token1] = ACTIONS(11),
    [aux_sym_property_token1] = ACTIONS(13),
    [aux_sym_identifier_token1] = ACTIONS(15),
    [aux_sym_duration_token1] = ACTIONS(17),
    [aux_sym_constant_token1] = ACTIONS(19),
    [aux_sym_number_token1] = ACTIONS(21),
    [aux_sym_record_token1] = ACTIONS(23),
    [aux_sym_record_token2] = ACTIONS(23),
    [anon_sym_USE] = ACTIONS(25),
    [anon_sym_NS] = ACTIONS(25),
    [anon_sym_DB] = ACTIONS(25),
    [anon_sym_LET] = ACTIONS(25),
    [anon_sym_BEGIN] = ACTIONS(25),
    [anon_sym_TRANSACTION] = ACTIONS(25),
    [anon_sym_CANCEL] = ACTIONS(25),
    [anon_sym_COMMIT] = ACTIONS(25),
    [anon_sym_IF] = ACTIONS(25),
    [anon_sym_ELSE] = ACTIONS(25),
    [anon_sym_THEN] = ACTIONS(25),
    [anon_sym_END] = ACTIONS(25),
    [anon_sym_SELECT] = ACTIONS(25),
    [anon_sym_FROM] = ACTIONS(25),
    [anon_sym_WHERE] = ACTIONS(25),
    [anon_sym_SPLIT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_GROUP] = ACTIONS(25),
    [anon_sym_BY] = ACTIONS(25),
    [anon_sym_ORDER] = ACTIONS(25),
    [anon_sym_COLLATE] = ACTIONS(25),
    [anon_sym_NUMERIC] = ACTIONS(25),
    [anon_sym_ASC] = ACTIONS(25),
    [anon_sym_DESC] = ACTIONS(25),
    [anon_sym_LIMIT] = ACTIONS(25),
    [anon_sym_START] = ACTIONS(25),
    [anon_sym_FETCH] = ACTIONS(25),
    [anon_sym_TIMEOUT] = ACTIONS(25),
    [anon_sym_PARALLEL] = ACTIONS(25),
    [anon_sym_INSERT] = ACTIONS(25),
    [anon_sym_IGNORE] = ACTIONS(25),
    [anon_sym_INTO] = ACTIONS(25),
    [anon_sym_VALUES] = ACTIONS(25),
    [anon_sym_ON] = ACTIONS(25),
    [anon_sym_DUPLICATE] = ACTIONS(25),
    [anon_sym_KEY] = ACTIONS(25),
    [anon_sym_UPDATE] = ACTIONS(25),
    [anon_sym_CREATE] = ACTIONS(25),
    [anon_sym_CONTENT] = ACTIONS(25),
    [anon_sym_SET] = ACTIONS(25),
    [anon_sym_RETURN] = ACTIONS(25),
    [anon_sym_BEFORE] = ACTIONS(25),
    [anon_sym_AFTER] = ACTIONS(25),
    [anon_sym_DIFF] = ACTIONS(25),
    [anon_sym_MERGE] = ACTIONS(25),
    [anon_sym_PATCH] = ACTIONS(25),
    [anon_sym_RELATE] = ACTIONS(25),
    [anon_sym_DELETE] = ACTIONS(25),
    [anon_sym_DEFINE] = ACTIONS(25),
    [anon_sym_NAMESPACE] = ACTIONS(25),
    [anon_sym_DATABASE] = ACTIONS(25),
    [anon_sym_LOGIN] = ACTIONS(25),
    [anon_sym_PASSWORD] = ACTIONS(25),
    [anon_sym_PASSHASH] = ACTIONS(25),
    [anon_sym_TOKEN] = ACTIONS(25),
    [anon_sym_SCOPE] = ACTIONS(25),
    [anon_sym_TYPE] = ACTIONS(25),
    [anon_sym_VALUE] = ACTIONS(25),
    [anon_sym_SESSION] = ACTIONS(25),
    [anon_sym_SIGNUP] = ACTIONS(25),
    [anon_sym_SIGNIN] = ACTIONS(25),
    [anon_sym_TABLE] = ACTIONS(25),
    [anon_sym_DROP] = ACTIONS(25),
    [anon_sym_SCHEMAFULL] = ACTIONS(25),
    [anon_sym_SCHEMALESS] = ACTIONS(25),
    [anon_sym_AS] = ACTIONS(25),
    [anon_sym_PERMISSIONS] = ACTIONS(25),
    [anon_sym_FULL] = ACTIONS(25),
    [anon_sym_FOR] = ACTIONS(25),
    [anon_sym_select] = ACTIONS(25),
    [anon_sym_update] = ACTIONS(25),
    [anon_sym_create] = ACTIONS(25),
    [anon_sym_delete] = ACTIONS(25),
    [anon_sym_EVENT] = ACTIONS(25),
    [anon_sym_WHEN] = ACTIONS(25),
    [anon_sym_ASSERT] = ACTIONS(25),
    [anon_sym_INDEX] = ACTIONS(25),
    [anon_sym_FIELDS] = ACTIONS(25),
    [anon_sym_COLUMNS] = ACTIONS(25),
    [anon_sym_UNIQUE] = ACTIONS(25),
    [anon_sym_REMOVE] = ACTIONS(25),
    [anon_sym_SLEEP] = ACTIONS(25),
    [anon_sym_INFO] = ACTIONS(25),
    [anon_sym_KV] = ACTIONS(25),
    [anon_sym_FUNCTION] = ACTIONS(25),
    [anon_sym_PARAM] = ACTIONS(25),
    [anon_sym_AMP_AMP] = ACTIONS(27),
    [anon_sym_AND] = ACTIONS(29),
    [anon_sym_PIPE_PIPE] = ACTIONS(27),
    [anon_sym_OR] = ACTIONS(29),
    [anon_sym_QMARK_QMARK] = ACTIONS(27),
    [anon_sym_QMARK_COLON] = ACTIONS(27),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_IS] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(27),
    [anon_sym_ISNOT] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(27),
    [anon_sym_QMARK_EQ] = ACTIONS(27),
    [anon_sym_STAR_EQ] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG_TILDE] = ACTIONS(27),
    [anon_sym_QMARK_TILDE] = ACTIONS(27),
    [anon_sym_STAR_TILDE] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_x] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_] = ACTIONS(27),
    [anon_sym_STAR_STAR] = ACTIONS(27),
    [anon_sym_IN] = ACTIONS(29),
    [anon_sym_CONTAINS] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(27),
    [anon_sym_CONTAINSNOT] = ACTIONS(29),
    [anon_sym_3] = ACTIONS(27),
    [anon_sym_CONTAINSALL] = ACTIONS(29),
    [anon_sym_4] = ACTIONS(27),
    [anon_sym_CONTAINSANY] = ACTIONS(29),
    [anon_sym_5] = ACTIONS(27),
    [anon_sym_CONTAINSNONE] = ACTIONS(29),
    [anon_sym_6] = ACTIONS(27),
    [anon_sym_INSIDE] = ACTIONS(29),
    [anon_sym_7] = ACTIONS(27),
    [anon_sym_NOTINSIDE] = ACTIONS(29),
    [anon_sym_NOTIN] = ACTIONS(27),
    [anon_sym_8] = ACTIONS(27),
    [anon_sym_ALLINSIDE] = ACTIONS(29),
    [anon_sym_9] = ACTIONS(27),
    [anon_sym_ANYINSIDE] = ACTIONS(29),
    [anon_sym_10] = ACTIONS(27),
    [anon_sym_NONEINSIDE] = ACTIONS(29),
    [anon_sym_11] = ACTIONS(27),
    [anon_sym_OUTSIDE] = ACTIONS(29),
    [anon_sym_INTERSECTS] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(7),
    [anon_sym_DASH_GT] = ACTIONS(7),
    [anon_sym_LT_DASH] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(31),
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
    [sym_token] = STATE(3),
    [sym_scripting_function] = STATE(32),
    [sym__scripting_statement] = STATE(3),
    [sym_future] = STATE(32),
    [sym_casting] = STATE(32),
    [sym_property] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_duration] = STATE(32),
    [sym_constant] = STATE(32),
    [sym_number] = STATE(32),
    [sym_record] = STATE(32),
    [sym_keyword] = STATE(32),
    [sym_operator] = STATE(32),
    [sym_punctuation] = STATE(32),
    [sym_delimiter] = STATE(32),
    [sym_type] = STATE(32),
    [sym_datatype] = STATE(31),
    [sym_algotype] = STATE(31),
    [sym_function] = STATE(32),
    [sym_bool] = STATE(32),
    [sym_nothing] = STATE(32),
    [sym_string] = STATE(32),
    [aux_sym_scripting_content_repeat1] = STATE(3),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(53),
    [anon_sym_RBRACE_SEMI] = ACTIONS(55),
    [anon_sym_RBRACE_COMMA] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(59),
    [aux_sym_future_token1] = ACTIONS(61),
    [aux_sym_casting_token1] = ACTIONS(63),
    [aux_sym_property_token1] = ACTIONS(65),
    [aux_sym_identifier_token1] = ACTIONS(67),
    [aux_sym_duration_token1] = ACTIONS(69),
    [aux_sym_constant_token1] = ACTIONS(71),
    [aux_sym_number_token1] = ACTIONS(73),
    [aux_sym_record_token1] = ACTIONS(75),
    [aux_sym_record_token2] = ACTIONS(75),
    [anon_sym_USE] = ACTIONS(77),
    [anon_sym_NS] = ACTIONS(77),
    [anon_sym_DB] = ACTIONS(77),
    [anon_sym_LET] = ACTIONS(77),
    [anon_sym_BEGIN] = ACTIONS(77),
    [anon_sym_TRANSACTION] = ACTIONS(77),
    [anon_sym_CANCEL] = ACTIONS(77),
    [anon_sym_COMMIT] = ACTIONS(77),
    [anon_sym_IF] = ACTIONS(77),
    [anon_sym_ELSE] = ACTIONS(77),
    [anon_sym_THEN] = ACTIONS(77),
    [anon_sym_END] = ACTIONS(77),
    [anon_sym_SELECT] = ACTIONS(77),
    [anon_sym_FROM] = ACTIONS(77),
    [anon_sym_WHERE] = ACTIONS(77),
    [anon_sym_SPLIT] = ACTIONS(77),
    [anon_sym_AT] = ACTIONS(77),
    [anon_sym_GROUP] = ACTIONS(77),
    [anon_sym_BY] = ACTIONS(77),
    [anon_sym_ORDER] = ACTIONS(77),
    [anon_sym_COLLATE] = ACTIONS(77),
    [anon_sym_NUMERIC] = ACTIONS(77),
    [anon_sym_ASC] = ACTIONS(77),
    [anon_sym_DESC] = ACTIONS(77),
    [anon_sym_LIMIT] = ACTIONS(77),
    [anon_sym_START] = ACTIONS(77),
    [anon_sym_FETCH] = ACTIONS(77),
    [anon_sym_TIMEOUT] = ACTIONS(77),
    [anon_sym_PARALLEL] = ACTIONS(77),
    [anon_sym_INSERT] = ACTIONS(77),
    [anon_sym_IGNORE] = ACTIONS(77),
    [anon_sym_INTO] = ACTIONS(77),
    [anon_sym_VALUES] = ACTIONS(77),
    [anon_sym_ON] = ACTIONS(77),
    [anon_sym_DUPLICATE] = ACTIONS(77),
    [anon_sym_KEY] = ACTIONS(77),
    [anon_sym_UPDATE] = ACTIONS(77),
    [anon_sym_CREATE] = ACTIONS(77),
    [anon_sym_CONTENT] = ACTIONS(77),
    [anon_sym_SET] = ACTIONS(77),
    [anon_sym_RETURN] = ACTIONS(77),
    [anon_sym_BEFORE] = ACTIONS(77),
    [anon_sym_AFTER] = ACTIONS(77),
    [anon_sym_DIFF] = ACTIONS(77),
    [anon_sym_MERGE] = ACTIONS(77),
    [anon_sym_PATCH] = ACTIONS(77),
    [anon_sym_RELATE] = ACTIONS(77),
    [anon_sym_DELETE] = ACTIONS(77),
    [anon_sym_DEFINE] = ACTIONS(77),
    [anon_sym_NAMESPACE] = ACTIONS(77),
    [anon_sym_DATABASE] = ACTIONS(77),
    [anon_sym_LOGIN] = ACTIONS(77),
    [anon_sym_PASSWORD] = ACTIONS(77),
    [anon_sym_PASSHASH] = ACTIONS(77),
    [anon_sym_TOKEN] = ACTIONS(77),
    [anon_sym_SCOPE] = ACTIONS(77),
    [anon_sym_TYPE] = ACTIONS(77),
    [anon_sym_VALUE] = ACTIONS(77),
    [anon_sym_SESSION] = ACTIONS(77),
    [anon_sym_SIGNUP] = ACTIONS(77),
    [anon_sym_SIGNIN] = ACTIONS(77),
    [anon_sym_TABLE] = ACTIONS(77),
    [anon_sym_DROP] = ACTIONS(77),
    [anon_sym_SCHEMAFULL] = ACTIONS(77),
    [anon_sym_SCHEMALESS] = ACTIONS(77),
    [anon_sym_AS] = ACTIONS(77),
    [anon_sym_PERMISSIONS] = ACTIONS(77),
    [anon_sym_FULL] = ACTIONS(77),
    [anon_sym_FOR] = ACTIONS(77),
    [anon_sym_select] = ACTIONS(77),
    [anon_sym_update] = ACTIONS(77),
    [anon_sym_create] = ACTIONS(77),
    [anon_sym_delete] = ACTIONS(77),
    [anon_sym_EVENT] = ACTIONS(77),
    [anon_sym_WHEN] = ACTIONS(77),
    [anon_sym_ASSERT] = ACTIONS(77),
    [anon_sym_INDEX] = ACTIONS(77),
    [anon_sym_FIELDS] = ACTIONS(77),
    [anon_sym_COLUMNS] = ACTIONS(77),
    [anon_sym_UNIQUE] = ACTIONS(77),
    [anon_sym_REMOVE] = ACTIONS(77),
    [anon_sym_SLEEP] = ACTIONS(77),
    [anon_sym_INFO] = ACTIONS(77),
    [anon_sym_KV] = ACTIONS(77),
    [anon_sym_FUNCTION] = ACTIONS(77),
    [anon_sym_PARAM] = ACTIONS(77),
    [anon_sym_AMP_AMP] = ACTIONS(79),
    [anon_sym_AND] = ACTIONS(81),
    [anon_sym_PIPE_PIPE] = ACTIONS(79),
    [anon_sym_OR] = ACTIONS(81),
    [anon_sym_QMARK_QMARK] = ACTIONS(79),
    [anon_sym_QMARK_COLON] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_IS] = ACTIONS(81),
    [anon_sym_BANG_EQ] = ACTIONS(79),
    [anon_sym_ISNOT] = ACTIONS(79),
    [anon_sym_EQ_EQ] = ACTIONS(79),
    [anon_sym_QMARK_EQ] = ACTIONS(79),
    [anon_sym_STAR_EQ] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(79),
    [anon_sym_BANG_TILDE] = ACTIONS(79),
    [anon_sym_QMARK_TILDE] = ACTIONS(79),
    [anon_sym_STAR_TILDE] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_GT_EQ] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_x] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_] = ACTIONS(79),
    [anon_sym_STAR_STAR] = ACTIONS(79),
    [anon_sym_IN] = ACTIONS(81),
    [anon_sym_CONTAINS] = ACTIONS(81),
    [anon_sym_2] = ACTIONS(79),
    [anon_sym_CONTAINSNOT] = ACTIONS(81),
    [anon_sym_3] = ACTIONS(79),
    [anon_sym_CONTAINSALL] = ACTIONS(81),
    [anon_sym_4] = ACTIONS(79),
    [anon_sym_CONTAINSANY] = ACTIONS(81),
    [anon_sym_5] = ACTIONS(79),
    [anon_sym_CONTAINSNONE] = ACTIONS(81),
    [anon_sym_6] = ACTIONS(79),
    [anon_sym_INSIDE] = ACTIONS(81),
    [anon_sym_7] = ACTIONS(79),
    [anon_sym_NOTINSIDE] = ACTIONS(81),
    [anon_sym_NOTIN] = ACTIONS(79),
    [anon_sym_8] = ACTIONS(79),
    [anon_sym_ALLINSIDE] = ACTIONS(81),
    [anon_sym_9] = ACTIONS(79),
    [anon_sym_ANYINSIDE] = ACTIONS(81),
    [anon_sym_10] = ACTIONS(79),
    [anon_sym_NONEINSIDE] = ACTIONS(81),
    [anon_sym_11] = ACTIONS(79),
    [anon_sym_OUTSIDE] = ACTIONS(81),
    [anon_sym_INTERSECTS] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_RBRACK] = ACTIONS(57),
    [anon_sym_DASH_GT] = ACTIONS(57),
    [anon_sym_LT_DASH] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(83),
    [anon_sym_any] = ACTIONS(85),
    [anon_sym_array] = ACTIONS(85),
    [anon_sym_bool] = ACTIONS(85),
    [anon_sym_datetime] = ACTIONS(85),
    [anon_sym_decimal] = ACTIONS(85),
    [anon_sym_duration] = ACTIONS(85),
    [anon_sym_float] = ACTIONS(85),
    [anon_sym_int] = ACTIONS(85),
    [anon_sym_number] = ACTIONS(85),
    [anon_sym_object] = ACTIONS(85),
    [anon_sym_string] = ACTIONS(85),
    [anon_sym_record] = ACTIONS(85),
    [anon_sym_geometry] = ACTIONS(85),
    [anon_sym_EDDSA] = ACTIONS(87),
    [anon_sym_ES256] = ACTIONS(87),
    [anon_sym_ES384] = ACTIONS(87),
    [anon_sym_ES512] = ACTIONS(87),
    [anon_sym_HS256] = ACTIONS(87),
    [anon_sym_HS384] = ACTIONS(87),
    [anon_sym_HS512] = ACTIONS(87),
    [anon_sym_PS256] = ACTIONS(87),
    [anon_sym_PS384] = ACTIONS(87),
    [anon_sym_PS512] = ACTIONS(87),
    [anon_sym_RS256] = ACTIONS(87),
    [anon_sym_RS384] = ACTIONS(87),
    [anon_sym_RS512] = ACTIONS(87),
    [aux_sym_function_token1] = ACTIONS(89),
    [aux_sym_function_token2] = ACTIONS(89),
    [anon_sym_count] = ACTIONS(91),
    [aux_sym_function_token3] = ACTIONS(89),
    [aux_sym_function_token4] = ACTIONS(89),
    [aux_sym_function_token5] = ACTIONS(89),
    [aux_sym_function_token6] = ACTIONS(89),
    [aux_sym_function_token7] = ACTIONS(89),
    [aux_sym_function_token8] = ACTIONS(89),
    [aux_sym_function_token9] = ACTIONS(89),
    [aux_sym_function_token10] = ACTIONS(91),
    [aux_sym_function_token11] = ACTIONS(89),
    [aux_sym_function_token12] = ACTIONS(91),
    [aux_sym_function_token13] = ACTIONS(89),
    [aux_sym_function_token14] = ACTIONS(89),
    [aux_sym_function_token15] = ACTIONS(89),
    [aux_sym_function_token16] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(93),
    [anon_sym_false] = ACTIONS(93),
    [anon_sym_TRUE] = ACTIONS(93),
    [anon_sym_FALSE] = ACTIONS(93),
    [anon_sym_null] = ACTIONS(95),
    [anon_sym_NULL] = ACTIONS(95),
    [anon_sym_none] = ACTIONS(95),
    [anon_sym_NONE] = ACTIONS(95),
    [sym_variable] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
  },
  [3] = {
    [sym_token] = STATE(3),
    [sym_scripting_function] = STATE(32),
    [sym__scripting_statement] = STATE(3),
    [sym_future] = STATE(32),
    [sym_casting] = STATE(32),
    [sym_property] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_duration] = STATE(32),
    [sym_constant] = STATE(32),
    [sym_number] = STATE(32),
    [sym_record] = STATE(32),
    [sym_keyword] = STATE(32),
    [sym_operator] = STATE(32),
    [sym_punctuation] = STATE(32),
    [sym_delimiter] = STATE(32),
    [sym_type] = STATE(32),
    [sym_datatype] = STATE(31),
    [sym_algotype] = STATE(31),
    [sym_function] = STATE(32),
    [sym_bool] = STATE(32),
    [sym_nothing] = STATE(32),
    [sym_string] = STATE(32),
    [aux_sym_scripting_content_repeat1] = STATE(3),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(103),
    [anon_sym_RBRACE_SEMI] = ACTIONS(106),
    [anon_sym_RBRACE_COMMA] = ACTIONS(106),
    [anon_sym_LBRACE] = ACTIONS(108),
    [anon_sym_RBRACE] = ACTIONS(111),
    [aux_sym_future_token1] = ACTIONS(114),
    [aux_sym_casting_token1] = ACTIONS(117),
    [aux_sym_property_token1] = ACTIONS(120),
    [aux_sym_identifier_token1] = ACTIONS(123),
    [aux_sym_duration_token1] = ACTIONS(126),
    [aux_sym_constant_token1] = ACTIONS(129),
    [aux_sym_number_token1] = ACTIONS(132),
    [aux_sym_record_token1] = ACTIONS(135),
    [aux_sym_record_token2] = ACTIONS(135),
    [anon_sym_USE] = ACTIONS(138),
    [anon_sym_NS] = ACTIONS(138),
    [anon_sym_DB] = ACTIONS(138),
    [anon_sym_LET] = ACTIONS(138),
    [anon_sym_BEGIN] = ACTIONS(138),
    [anon_sym_TRANSACTION] = ACTIONS(138),
    [anon_sym_CANCEL] = ACTIONS(138),
    [anon_sym_COMMIT] = ACTIONS(138),
    [anon_sym_IF] = ACTIONS(138),
    [anon_sym_ELSE] = ACTIONS(138),
    [anon_sym_THEN] = ACTIONS(138),
    [anon_sym_END] = ACTIONS(138),
    [anon_sym_SELECT] = ACTIONS(138),
    [anon_sym_FROM] = ACTIONS(138),
    [anon_sym_WHERE] = ACTIONS(138),
    [anon_sym_SPLIT] = ACTIONS(138),
    [anon_sym_AT] = ACTIONS(138),
    [anon_sym_GROUP] = ACTIONS(138),
    [anon_sym_BY] = ACTIONS(138),
    [anon_sym_ORDER] = ACTIONS(138),
    [anon_sym_COLLATE] = ACTIONS(138),
    [anon_sym_NUMERIC] = ACTIONS(138),
    [anon_sym_ASC] = ACTIONS(138),
    [anon_sym_DESC] = ACTIONS(138),
    [anon_sym_LIMIT] = ACTIONS(138),
    [anon_sym_START] = ACTIONS(138),
    [anon_sym_FETCH] = ACTIONS(138),
    [anon_sym_TIMEOUT] = ACTIONS(138),
    [anon_sym_PARALLEL] = ACTIONS(138),
    [anon_sym_INSERT] = ACTIONS(138),
    [anon_sym_IGNORE] = ACTIONS(138),
    [anon_sym_INTO] = ACTIONS(138),
    [anon_sym_VALUES] = ACTIONS(138),
    [anon_sym_ON] = ACTIONS(138),
    [anon_sym_DUPLICATE] = ACTIONS(138),
    [anon_sym_KEY] = ACTIONS(138),
    [anon_sym_UPDATE] = ACTIONS(138),
    [anon_sym_CREATE] = ACTIONS(138),
    [anon_sym_CONTENT] = ACTIONS(138),
    [anon_sym_SET] = ACTIONS(138),
    [anon_sym_RETURN] = ACTIONS(138),
    [anon_sym_BEFORE] = ACTIONS(138),
    [anon_sym_AFTER] = ACTIONS(138),
    [anon_sym_DIFF] = ACTIONS(138),
    [anon_sym_MERGE] = ACTIONS(138),
    [anon_sym_PATCH] = ACTIONS(138),
    [anon_sym_RELATE] = ACTIONS(138),
    [anon_sym_DELETE] = ACTIONS(138),
    [anon_sym_DEFINE] = ACTIONS(138),
    [anon_sym_NAMESPACE] = ACTIONS(138),
    [anon_sym_DATABASE] = ACTIONS(138),
    [anon_sym_LOGIN] = ACTIONS(138),
    [anon_sym_PASSWORD] = ACTIONS(138),
    [anon_sym_PASSHASH] = ACTIONS(138),
    [anon_sym_TOKEN] = ACTIONS(138),
    [anon_sym_SCOPE] = ACTIONS(138),
    [anon_sym_TYPE] = ACTIONS(138),
    [anon_sym_VALUE] = ACTIONS(138),
    [anon_sym_SESSION] = ACTIONS(138),
    [anon_sym_SIGNUP] = ACTIONS(138),
    [anon_sym_SIGNIN] = ACTIONS(138),
    [anon_sym_TABLE] = ACTIONS(138),
    [anon_sym_DROP] = ACTIONS(138),
    [anon_sym_SCHEMAFULL] = ACTIONS(138),
    [anon_sym_SCHEMALESS] = ACTIONS(138),
    [anon_sym_AS] = ACTIONS(138),
    [anon_sym_PERMISSIONS] = ACTIONS(138),
    [anon_sym_FULL] = ACTIONS(138),
    [anon_sym_FOR] = ACTIONS(138),
    [anon_sym_select] = ACTIONS(138),
    [anon_sym_update] = ACTIONS(138),
    [anon_sym_create] = ACTIONS(138),
    [anon_sym_delete] = ACTIONS(138),
    [anon_sym_EVENT] = ACTIONS(138),
    [anon_sym_WHEN] = ACTIONS(138),
    [anon_sym_ASSERT] = ACTIONS(138),
    [anon_sym_INDEX] = ACTIONS(138),
    [anon_sym_FIELDS] = ACTIONS(138),
    [anon_sym_COLUMNS] = ACTIONS(138),
    [anon_sym_UNIQUE] = ACTIONS(138),
    [anon_sym_REMOVE] = ACTIONS(138),
    [anon_sym_SLEEP] = ACTIONS(138),
    [anon_sym_INFO] = ACTIONS(138),
    [anon_sym_KV] = ACTIONS(138),
    [anon_sym_FUNCTION] = ACTIONS(138),
    [anon_sym_PARAM] = ACTIONS(138),
    [anon_sym_AMP_AMP] = ACTIONS(141),
    [anon_sym_AND] = ACTIONS(144),
    [anon_sym_PIPE_PIPE] = ACTIONS(141),
    [anon_sym_OR] = ACTIONS(144),
    [anon_sym_QMARK_QMARK] = ACTIONS(141),
    [anon_sym_QMARK_COLON] = ACTIONS(141),
    [anon_sym_EQ] = ACTIONS(144),
    [anon_sym_IS] = ACTIONS(144),
    [anon_sym_BANG_EQ] = ACTIONS(141),
    [anon_sym_ISNOT] = ACTIONS(141),
    [anon_sym_EQ_EQ] = ACTIONS(141),
    [anon_sym_QMARK_EQ] = ACTIONS(141),
    [anon_sym_STAR_EQ] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(141),
    [anon_sym_BANG_TILDE] = ACTIONS(141),
    [anon_sym_QMARK_TILDE] = ACTIONS(141),
    [anon_sym_STAR_TILDE] = ACTIONS(141),
    [anon_sym_LT] = ACTIONS(144),
    [anon_sym_LT_EQ] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(144),
    [anon_sym_GT_EQ] = ACTIONS(141),
    [anon_sym_PLUS] = ACTIONS(141),
    [anon_sym_DASH] = ACTIONS(144),
    [anon_sym_STAR] = ACTIONS(144),
    [anon_sym_x] = ACTIONS(144),
    [anon_sym_SLASH] = ACTIONS(141),
    [anon_sym_] = ACTIONS(141),
    [anon_sym_STAR_STAR] = ACTIONS(141),
    [anon_sym_IN] = ACTIONS(144),
    [anon_sym_CONTAINS] = ACTIONS(144),
    [anon_sym_2] = ACTIONS(141),
    [anon_sym_CONTAINSNOT] = ACTIONS(144),
    [anon_sym_3] = ACTIONS(141),
    [anon_sym_CONTAINSALL] = ACTIONS(144),
    [anon_sym_4] = ACTIONS(141),
    [anon_sym_CONTAINSANY] = ACTIONS(144),
    [anon_sym_5] = ACTIONS(141),
    [anon_sym_CONTAINSNONE] = ACTIONS(144),
    [anon_sym_6] = ACTIONS(141),
    [anon_sym_INSIDE] = ACTIONS(144),
    [anon_sym_7] = ACTIONS(141),
    [anon_sym_NOTINSIDE] = ACTIONS(144),
    [anon_sym_NOTIN] = ACTIONS(141),
    [anon_sym_8] = ACTIONS(141),
    [anon_sym_ALLINSIDE] = ACTIONS(144),
    [anon_sym_9] = ACTIONS(141),
    [anon_sym_ANYINSIDE] = ACTIONS(144),
    [anon_sym_10] = ACTIONS(141),
    [anon_sym_NONEINSIDE] = ACTIONS(144),
    [anon_sym_11] = ACTIONS(141),
    [anon_sym_OUTSIDE] = ACTIONS(144),
    [anon_sym_INTERSECTS] = ACTIONS(144),
    [anon_sym_LPAREN] = ACTIONS(108),
    [anon_sym_RPAREN] = ACTIONS(108),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_RBRACK] = ACTIONS(108),
    [anon_sym_DASH_GT] = ACTIONS(108),
    [anon_sym_LT_DASH] = ACTIONS(108),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_any] = ACTIONS(150),
    [anon_sym_array] = ACTIONS(150),
    [anon_sym_bool] = ACTIONS(150),
    [anon_sym_datetime] = ACTIONS(150),
    [anon_sym_decimal] = ACTIONS(150),
    [anon_sym_duration] = ACTIONS(150),
    [anon_sym_float] = ACTIONS(150),
    [anon_sym_int] = ACTIONS(150),
    [anon_sym_number] = ACTIONS(150),
    [anon_sym_object] = ACTIONS(150),
    [anon_sym_string] = ACTIONS(150),
    [anon_sym_record] = ACTIONS(150),
    [anon_sym_geometry] = ACTIONS(150),
    [anon_sym_EDDSA] = ACTIONS(153),
    [anon_sym_ES256] = ACTIONS(153),
    [anon_sym_ES384] = ACTIONS(153),
    [anon_sym_ES512] = ACTIONS(153),
    [anon_sym_HS256] = ACTIONS(153),
    [anon_sym_HS384] = ACTIONS(153),
    [anon_sym_HS512] = ACTIONS(153),
    [anon_sym_PS256] = ACTIONS(153),
    [anon_sym_PS384] = ACTIONS(153),
    [anon_sym_PS512] = ACTIONS(153),
    [anon_sym_RS256] = ACTIONS(153),
    [anon_sym_RS384] = ACTIONS(153),
    [anon_sym_RS512] = ACTIONS(153),
    [aux_sym_function_token1] = ACTIONS(156),
    [aux_sym_function_token2] = ACTIONS(156),
    [anon_sym_count] = ACTIONS(159),
    [aux_sym_function_token3] = ACTIONS(156),
    [aux_sym_function_token4] = ACTIONS(156),
    [aux_sym_function_token5] = ACTIONS(156),
    [aux_sym_function_token6] = ACTIONS(156),
    [aux_sym_function_token7] = ACTIONS(156),
    [aux_sym_function_token8] = ACTIONS(156),
    [aux_sym_function_token9] = ACTIONS(156),
    [aux_sym_function_token10] = ACTIONS(159),
    [aux_sym_function_token11] = ACTIONS(156),
    [aux_sym_function_token12] = ACTIONS(159),
    [aux_sym_function_token13] = ACTIONS(156),
    [aux_sym_function_token14] = ACTIONS(156),
    [aux_sym_function_token15] = ACTIONS(156),
    [aux_sym_function_token16] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(162),
    [anon_sym_false] = ACTIONS(162),
    [anon_sym_TRUE] = ACTIONS(162),
    [anon_sym_FALSE] = ACTIONS(162),
    [anon_sym_null] = ACTIONS(165),
    [anon_sym_NULL] = ACTIONS(165),
    [anon_sym_none] = ACTIONS(165),
    [anon_sym_NONE] = ACTIONS(165),
    [sym_variable] = ACTIONS(168),
    [anon_sym_SQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(174),
  },
  [4] = {
    [sym_token] = STATE(4),
    [sym_scripting_function] = STATE(24),
    [sym_future] = STATE(24),
    [sym_casting] = STATE(24),
    [sym_property] = STATE(24),
    [sym_identifier] = STATE(24),
    [sym_duration] = STATE(24),
    [sym_constant] = STATE(24),
    [sym_number] = STATE(24),
    [sym_record] = STATE(24),
    [sym_keyword] = STATE(24),
    [sym_operator] = STATE(24),
    [sym_punctuation] = STATE(24),
    [sym_delimiter] = STATE(24),
    [sym_type] = STATE(24),
    [sym_datatype] = STATE(28),
    [sym_algotype] = STATE(28),
    [sym_function] = STATE(24),
    [sym_bool] = STATE(24),
    [sym_nothing] = STATE(24),
    [sym_string] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(182),
    [anon_sym_RBRACE] = ACTIONS(182),
    [aux_sym_future_token1] = ACTIONS(185),
    [aux_sym_casting_token1] = ACTIONS(188),
    [aux_sym_property_token1] = ACTIONS(191),
    [aux_sym_identifier_token1] = ACTIONS(194),
    [aux_sym_duration_token1] = ACTIONS(197),
    [aux_sym_constant_token1] = ACTIONS(200),
    [aux_sym_number_token1] = ACTIONS(203),
    [aux_sym_record_token1] = ACTIONS(206),
    [aux_sym_record_token2] = ACTIONS(206),
    [anon_sym_USE] = ACTIONS(209),
    [anon_sym_NS] = ACTIONS(209),
    [anon_sym_DB] = ACTIONS(209),
    [anon_sym_LET] = ACTIONS(209),
    [anon_sym_BEGIN] = ACTIONS(209),
    [anon_sym_TRANSACTION] = ACTIONS(209),
    [anon_sym_CANCEL] = ACTIONS(209),
    [anon_sym_COMMIT] = ACTIONS(209),
    [anon_sym_IF] = ACTIONS(209),
    [anon_sym_ELSE] = ACTIONS(209),
    [anon_sym_THEN] = ACTIONS(209),
    [anon_sym_END] = ACTIONS(209),
    [anon_sym_SELECT] = ACTIONS(209),
    [anon_sym_FROM] = ACTIONS(209),
    [anon_sym_WHERE] = ACTIONS(209),
    [anon_sym_SPLIT] = ACTIONS(209),
    [anon_sym_AT] = ACTIONS(209),
    [anon_sym_GROUP] = ACTIONS(209),
    [anon_sym_BY] = ACTIONS(209),
    [anon_sym_ORDER] = ACTIONS(209),
    [anon_sym_COLLATE] = ACTIONS(209),
    [anon_sym_NUMERIC] = ACTIONS(209),
    [anon_sym_ASC] = ACTIONS(209),
    [anon_sym_DESC] = ACTIONS(209),
    [anon_sym_LIMIT] = ACTIONS(209),
    [anon_sym_START] = ACTIONS(209),
    [anon_sym_FETCH] = ACTIONS(209),
    [anon_sym_TIMEOUT] = ACTIONS(209),
    [anon_sym_PARALLEL] = ACTIONS(209),
    [anon_sym_INSERT] = ACTIONS(209),
    [anon_sym_IGNORE] = ACTIONS(209),
    [anon_sym_INTO] = ACTIONS(209),
    [anon_sym_VALUES] = ACTIONS(209),
    [anon_sym_ON] = ACTIONS(209),
    [anon_sym_DUPLICATE] = ACTIONS(209),
    [anon_sym_KEY] = ACTIONS(209),
    [anon_sym_UPDATE] = ACTIONS(209),
    [anon_sym_CREATE] = ACTIONS(209),
    [anon_sym_CONTENT] = ACTIONS(209),
    [anon_sym_SET] = ACTIONS(209),
    [anon_sym_RETURN] = ACTIONS(209),
    [anon_sym_BEFORE] = ACTIONS(209),
    [anon_sym_AFTER] = ACTIONS(209),
    [anon_sym_DIFF] = ACTIONS(209),
    [anon_sym_MERGE] = ACTIONS(209),
    [anon_sym_PATCH] = ACTIONS(209),
    [anon_sym_RELATE] = ACTIONS(209),
    [anon_sym_DELETE] = ACTIONS(209),
    [anon_sym_DEFINE] = ACTIONS(209),
    [anon_sym_NAMESPACE] = ACTIONS(209),
    [anon_sym_DATABASE] = ACTIONS(209),
    [anon_sym_LOGIN] = ACTIONS(209),
    [anon_sym_PASSWORD] = ACTIONS(209),
    [anon_sym_PASSHASH] = ACTIONS(209),
    [anon_sym_TOKEN] = ACTIONS(209),
    [anon_sym_SCOPE] = ACTIONS(209),
    [anon_sym_TYPE] = ACTIONS(209),
    [anon_sym_VALUE] = ACTIONS(209),
    [anon_sym_SESSION] = ACTIONS(209),
    [anon_sym_SIGNUP] = ACTIONS(209),
    [anon_sym_SIGNIN] = ACTIONS(209),
    [anon_sym_TABLE] = ACTIONS(209),
    [anon_sym_DROP] = ACTIONS(209),
    [anon_sym_SCHEMAFULL] = ACTIONS(209),
    [anon_sym_SCHEMALESS] = ACTIONS(209),
    [anon_sym_AS] = ACTIONS(209),
    [anon_sym_PERMISSIONS] = ACTIONS(209),
    [anon_sym_FULL] = ACTIONS(209),
    [anon_sym_FOR] = ACTIONS(209),
    [anon_sym_select] = ACTIONS(209),
    [anon_sym_update] = ACTIONS(209),
    [anon_sym_create] = ACTIONS(209),
    [anon_sym_delete] = ACTIONS(209),
    [anon_sym_EVENT] = ACTIONS(209),
    [anon_sym_WHEN] = ACTIONS(209),
    [anon_sym_ASSERT] = ACTIONS(209),
    [anon_sym_INDEX] = ACTIONS(209),
    [anon_sym_FIELDS] = ACTIONS(209),
    [anon_sym_COLUMNS] = ACTIONS(209),
    [anon_sym_UNIQUE] = ACTIONS(209),
    [anon_sym_REMOVE] = ACTIONS(209),
    [anon_sym_SLEEP] = ACTIONS(209),
    [anon_sym_INFO] = ACTIONS(209),
    [anon_sym_KV] = ACTIONS(209),
    [anon_sym_FUNCTION] = ACTIONS(209),
    [anon_sym_PARAM] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(212),
    [anon_sym_AND] = ACTIONS(215),
    [anon_sym_PIPE_PIPE] = ACTIONS(212),
    [anon_sym_OR] = ACTIONS(215),
    [anon_sym_QMARK_QMARK] = ACTIONS(212),
    [anon_sym_QMARK_COLON] = ACTIONS(212),
    [anon_sym_EQ] = ACTIONS(215),
    [anon_sym_IS] = ACTIONS(215),
    [anon_sym_BANG_EQ] = ACTIONS(212),
    [anon_sym_ISNOT] = ACTIONS(212),
    [anon_sym_EQ_EQ] = ACTIONS(212),
    [anon_sym_QMARK_EQ] = ACTIONS(212),
    [anon_sym_STAR_EQ] = ACTIONS(212),
    [anon_sym_TILDE] = ACTIONS(212),
    [anon_sym_BANG_TILDE] = ACTIONS(212),
    [anon_sym_QMARK_TILDE] = ACTIONS(212),
    [anon_sym_STAR_TILDE] = ACTIONS(212),
    [anon_sym_LT] = ACTIONS(215),
    [anon_sym_LT_EQ] = ACTIONS(212),
    [anon_sym_GT] = ACTIONS(215),
    [anon_sym_GT_EQ] = ACTIONS(212),
    [anon_sym_PLUS] = ACTIONS(212),
    [anon_sym_DASH] = ACTIONS(215),
    [anon_sym_STAR] = ACTIONS(215),
    [anon_sym_x] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(215),
    [anon_sym_] = ACTIONS(212),
    [anon_sym_STAR_STAR] = ACTIONS(212),
    [anon_sym_IN] = ACTIONS(215),
    [anon_sym_CONTAINS] = ACTIONS(215),
    [anon_sym_2] = ACTIONS(212),
    [anon_sym_CONTAINSNOT] = ACTIONS(215),
    [anon_sym_3] = ACTIONS(212),
    [anon_sym_CONTAINSALL] = ACTIONS(215),
    [anon_sym_4] = ACTIONS(212),
    [anon_sym_CONTAINSANY] = ACTIONS(215),
    [anon_sym_5] = ACTIONS(212),
    [anon_sym_CONTAINSNONE] = ACTIONS(215),
    [anon_sym_6] = ACTIONS(212),
    [anon_sym_INSIDE] = ACTIONS(215),
    [anon_sym_7] = ACTIONS(212),
    [anon_sym_NOTINSIDE] = ACTIONS(215),
    [anon_sym_NOTIN] = ACTIONS(212),
    [anon_sym_8] = ACTIONS(212),
    [anon_sym_ALLINSIDE] = ACTIONS(215),
    [anon_sym_9] = ACTIONS(212),
    [anon_sym_ANYINSIDE] = ACTIONS(215),
    [anon_sym_10] = ACTIONS(212),
    [anon_sym_NONEINSIDE] = ACTIONS(215),
    [anon_sym_11] = ACTIONS(212),
    [anon_sym_OUTSIDE] = ACTIONS(215),
    [anon_sym_INTERSECTS] = ACTIONS(215),
    [anon_sym_LPAREN] = ACTIONS(182),
    [anon_sym_RPAREN] = ACTIONS(182),
    [anon_sym_LBRACK] = ACTIONS(182),
    [anon_sym_RBRACK] = ACTIONS(182),
    [anon_sym_DASH_GT] = ACTIONS(182),
    [anon_sym_LT_DASH] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(218),
    [anon_sym_SEMI] = ACTIONS(218),
    [anon_sym_COLON] = ACTIONS(218),
    [anon_sym_any] = ACTIONS(221),
    [anon_sym_array] = ACTIONS(221),
    [anon_sym_bool] = ACTIONS(221),
    [anon_sym_datetime] = ACTIONS(221),
    [anon_sym_decimal] = ACTIONS(221),
    [anon_sym_duration] = ACTIONS(221),
    [anon_sym_float] = ACTIONS(221),
    [anon_sym_int] = ACTIONS(221),
    [anon_sym_number] = ACTIONS(221),
    [anon_sym_object] = ACTIONS(221),
    [anon_sym_string] = ACTIONS(221),
    [anon_sym_record] = ACTIONS(221),
    [anon_sym_geometry] = ACTIONS(221),
    [anon_sym_EDDSA] = ACTIONS(224),
    [anon_sym_ES256] = ACTIONS(224),
    [anon_sym_ES384] = ACTIONS(224),
    [anon_sym_ES512] = ACTIONS(224),
    [anon_sym_HS256] = ACTIONS(224),
    [anon_sym_HS384] = ACTIONS(224),
    [anon_sym_HS512] = ACTIONS(224),
    [anon_sym_PS256] = ACTIONS(224),
    [anon_sym_PS384] = ACTIONS(224),
    [anon_sym_PS512] = ACTIONS(224),
    [anon_sym_RS256] = ACTIONS(224),
    [anon_sym_RS384] = ACTIONS(224),
    [anon_sym_RS512] = ACTIONS(224),
    [aux_sym_function_token1] = ACTIONS(227),
    [aux_sym_function_token2] = ACTIONS(227),
    [anon_sym_count] = ACTIONS(230),
    [aux_sym_function_token3] = ACTIONS(227),
    [aux_sym_function_token4] = ACTIONS(227),
    [aux_sym_function_token5] = ACTIONS(227),
    [aux_sym_function_token6] = ACTIONS(227),
    [aux_sym_function_token7] = ACTIONS(227),
    [aux_sym_function_token8] = ACTIONS(227),
    [aux_sym_function_token9] = ACTIONS(227),
    [aux_sym_function_token10] = ACTIONS(230),
    [aux_sym_function_token11] = ACTIONS(227),
    [aux_sym_function_token12] = ACTIONS(230),
    [aux_sym_function_token13] = ACTIONS(227),
    [aux_sym_function_token14] = ACTIONS(227),
    [aux_sym_function_token15] = ACTIONS(227),
    [aux_sym_function_token16] = ACTIONS(230),
    [anon_sym_true] = ACTIONS(233),
    [anon_sym_false] = ACTIONS(233),
    [anon_sym_TRUE] = ACTIONS(233),
    [anon_sym_FALSE] = ACTIONS(233),
    [anon_sym_null] = ACTIONS(236),
    [anon_sym_NULL] = ACTIONS(236),
    [anon_sym_none] = ACTIONS(236),
    [anon_sym_NONE] = ACTIONS(236),
    [sym_variable] = ACTIONS(239),
    [sym_comment] = ACTIONS(242),
    [anon_sym_SQUOTE] = ACTIONS(245),
    [anon_sym_DQUOTE] = ACTIONS(248),
  },
  [5] = {
    [sym_token] = STATE(2),
    [sym_scripting_function] = STATE(32),
    [sym_scripting_content] = STATE(64),
    [sym__scripting_statement] = STATE(2),
    [sym_future] = STATE(32),
    [sym_casting] = STATE(32),
    [sym_property] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_duration] = STATE(32),
    [sym_constant] = STATE(32),
    [sym_number] = STATE(32),
    [sym_record] = STATE(32),
    [sym_keyword] = STATE(32),
    [sym_operator] = STATE(32),
    [sym_punctuation] = STATE(32),
    [sym_delimiter] = STATE(32),
    [sym_type] = STATE(32),
    [sym_datatype] = STATE(31),
    [sym_algotype] = STATE(31),
    [sym_function] = STATE(32),
    [sym_bool] = STATE(32),
    [sym_nothing] = STATE(32),
    [sym_string] = STATE(32),
    [aux_sym_scripting_content_repeat1] = STATE(2),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(57),
    [aux_sym_future_token1] = ACTIONS(61),
    [aux_sym_casting_token1] = ACTIONS(63),
    [aux_sym_property_token1] = ACTIONS(65),
    [aux_sym_identifier_token1] = ACTIONS(67),
    [aux_sym_duration_token1] = ACTIONS(69),
    [aux_sym_constant_token1] = ACTIONS(71),
    [aux_sym_number_token1] = ACTIONS(73),
    [aux_sym_record_token1] = ACTIONS(75),
    [aux_sym_record_token2] = ACTIONS(75),
    [anon_sym_USE] = ACTIONS(77),
    [anon_sym_NS] = ACTIONS(77),
    [anon_sym_DB] = ACTIONS(77),
    [anon_sym_LET] = ACTIONS(77),
    [anon_sym_BEGIN] = ACTIONS(77),
    [anon_sym_TRANSACTION] = ACTIONS(77),
    [anon_sym_CANCEL] = ACTIONS(77),
    [anon_sym_COMMIT] = ACTIONS(77),
    [anon_sym_IF] = ACTIONS(77),
    [anon_sym_ELSE] = ACTIONS(77),
    [anon_sym_THEN] = ACTIONS(77),
    [anon_sym_END] = ACTIONS(77),
    [anon_sym_SELECT] = ACTIONS(77),
    [anon_sym_FROM] = ACTIONS(77),
    [anon_sym_WHERE] = ACTIONS(77),
    [anon_sym_SPLIT] = ACTIONS(77),
    [anon_sym_AT] = ACTIONS(77),
    [anon_sym_GROUP] = ACTIONS(77),
    [anon_sym_BY] = ACTIONS(77),
    [anon_sym_ORDER] = ACTIONS(77),
    [anon_sym_COLLATE] = ACTIONS(77),
    [anon_sym_NUMERIC] = ACTIONS(77),
    [anon_sym_ASC] = ACTIONS(77),
    [anon_sym_DESC] = ACTIONS(77),
    [anon_sym_LIMIT] = ACTIONS(77),
    [anon_sym_START] = ACTIONS(77),
    [anon_sym_FETCH] = ACTIONS(77),
    [anon_sym_TIMEOUT] = ACTIONS(77),
    [anon_sym_PARALLEL] = ACTIONS(77),
    [anon_sym_INSERT] = ACTIONS(77),
    [anon_sym_IGNORE] = ACTIONS(77),
    [anon_sym_INTO] = ACTIONS(77),
    [anon_sym_VALUES] = ACTIONS(77),
    [anon_sym_ON] = ACTIONS(77),
    [anon_sym_DUPLICATE] = ACTIONS(77),
    [anon_sym_KEY] = ACTIONS(77),
    [anon_sym_UPDATE] = ACTIONS(77),
    [anon_sym_CREATE] = ACTIONS(77),
    [anon_sym_CONTENT] = ACTIONS(77),
    [anon_sym_SET] = ACTIONS(77),
    [anon_sym_RETURN] = ACTIONS(77),
    [anon_sym_BEFORE] = ACTIONS(77),
    [anon_sym_AFTER] = ACTIONS(77),
    [anon_sym_DIFF] = ACTIONS(77),
    [anon_sym_MERGE] = ACTIONS(77),
    [anon_sym_PATCH] = ACTIONS(77),
    [anon_sym_RELATE] = ACTIONS(77),
    [anon_sym_DELETE] = ACTIONS(77),
    [anon_sym_DEFINE] = ACTIONS(77),
    [anon_sym_NAMESPACE] = ACTIONS(77),
    [anon_sym_DATABASE] = ACTIONS(77),
    [anon_sym_LOGIN] = ACTIONS(77),
    [anon_sym_PASSWORD] = ACTIONS(77),
    [anon_sym_PASSHASH] = ACTIONS(77),
    [anon_sym_TOKEN] = ACTIONS(77),
    [anon_sym_SCOPE] = ACTIONS(77),
    [anon_sym_TYPE] = ACTIONS(77),
    [anon_sym_VALUE] = ACTIONS(77),
    [anon_sym_SESSION] = ACTIONS(77),
    [anon_sym_SIGNUP] = ACTIONS(77),
    [anon_sym_SIGNIN] = ACTIONS(77),
    [anon_sym_TABLE] = ACTIONS(77),
    [anon_sym_DROP] = ACTIONS(77),
    [anon_sym_SCHEMAFULL] = ACTIONS(77),
    [anon_sym_SCHEMALESS] = ACTIONS(77),
    [anon_sym_AS] = ACTIONS(77),
    [anon_sym_PERMISSIONS] = ACTIONS(77),
    [anon_sym_FULL] = ACTIONS(77),
    [anon_sym_FOR] = ACTIONS(77),
    [anon_sym_select] = ACTIONS(77),
    [anon_sym_update] = ACTIONS(77),
    [anon_sym_create] = ACTIONS(77),
    [anon_sym_delete] = ACTIONS(77),
    [anon_sym_EVENT] = ACTIONS(77),
    [anon_sym_WHEN] = ACTIONS(77),
    [anon_sym_ASSERT] = ACTIONS(77),
    [anon_sym_INDEX] = ACTIONS(77),
    [anon_sym_FIELDS] = ACTIONS(77),
    [anon_sym_COLUMNS] = ACTIONS(77),
    [anon_sym_UNIQUE] = ACTIONS(77),
    [anon_sym_REMOVE] = ACTIONS(77),
    [anon_sym_SLEEP] = ACTIONS(77),
    [anon_sym_INFO] = ACTIONS(77),
    [anon_sym_KV] = ACTIONS(77),
    [anon_sym_FUNCTION] = ACTIONS(77),
    [anon_sym_PARAM] = ACTIONS(77),
    [anon_sym_AMP_AMP] = ACTIONS(79),
    [anon_sym_AND] = ACTIONS(81),
    [anon_sym_PIPE_PIPE] = ACTIONS(79),
    [anon_sym_OR] = ACTIONS(81),
    [anon_sym_QMARK_QMARK] = ACTIONS(79),
    [anon_sym_QMARK_COLON] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_IS] = ACTIONS(81),
    [anon_sym_BANG_EQ] = ACTIONS(79),
    [anon_sym_ISNOT] = ACTIONS(79),
    [anon_sym_EQ_EQ] = ACTIONS(79),
    [anon_sym_QMARK_EQ] = ACTIONS(79),
    [anon_sym_STAR_EQ] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(79),
    [anon_sym_BANG_TILDE] = ACTIONS(79),
    [anon_sym_QMARK_TILDE] = ACTIONS(79),
    [anon_sym_STAR_TILDE] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_GT_EQ] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_x] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_] = ACTIONS(79),
    [anon_sym_STAR_STAR] = ACTIONS(79),
    [anon_sym_IN] = ACTIONS(81),
    [anon_sym_CONTAINS] = ACTIONS(81),
    [anon_sym_2] = ACTIONS(79),
    [anon_sym_CONTAINSNOT] = ACTIONS(81),
    [anon_sym_3] = ACTIONS(79),
    [anon_sym_CONTAINSALL] = ACTIONS(81),
    [anon_sym_4] = ACTIONS(79),
    [anon_sym_CONTAINSANY] = ACTIONS(81),
    [anon_sym_5] = ACTIONS(79),
    [anon_sym_CONTAINSNONE] = ACTIONS(81),
    [anon_sym_6] = ACTIONS(79),
    [anon_sym_INSIDE] = ACTIONS(81),
    [anon_sym_7] = ACTIONS(79),
    [anon_sym_NOTINSIDE] = ACTIONS(81),
    [anon_sym_NOTIN] = ACTIONS(79),
    [anon_sym_8] = ACTIONS(79),
    [anon_sym_ALLINSIDE] = ACTIONS(81),
    [anon_sym_9] = ACTIONS(79),
    [anon_sym_ANYINSIDE] = ACTIONS(81),
    [anon_sym_10] = ACTIONS(79),
    [anon_sym_NONEINSIDE] = ACTIONS(81),
    [anon_sym_11] = ACTIONS(79),
    [anon_sym_OUTSIDE] = ACTIONS(81),
    [anon_sym_INTERSECTS] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_RBRACK] = ACTIONS(57),
    [anon_sym_DASH_GT] = ACTIONS(57),
    [anon_sym_LT_DASH] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(83),
    [anon_sym_any] = ACTIONS(85),
    [anon_sym_array] = ACTIONS(85),
    [anon_sym_bool] = ACTIONS(85),
    [anon_sym_datetime] = ACTIONS(85),
    [anon_sym_decimal] = ACTIONS(85),
    [anon_sym_duration] = ACTIONS(85),
    [anon_sym_float] = ACTIONS(85),
    [anon_sym_int] = ACTIONS(85),
    [anon_sym_number] = ACTIONS(85),
    [anon_sym_object] = ACTIONS(85),
    [anon_sym_string] = ACTIONS(85),
    [anon_sym_record] = ACTIONS(85),
    [anon_sym_geometry] = ACTIONS(85),
    [anon_sym_EDDSA] = ACTIONS(87),
    [anon_sym_ES256] = ACTIONS(87),
    [anon_sym_ES384] = ACTIONS(87),
    [anon_sym_ES512] = ACTIONS(87),
    [anon_sym_HS256] = ACTIONS(87),
    [anon_sym_HS384] = ACTIONS(87),
    [anon_sym_HS512] = ACTIONS(87),
    [anon_sym_PS256] = ACTIONS(87),
    [anon_sym_PS384] = ACTIONS(87),
    [anon_sym_PS512] = ACTIONS(87),
    [anon_sym_RS256] = ACTIONS(87),
    [anon_sym_RS384] = ACTIONS(87),
    [anon_sym_RS512] = ACTIONS(87),
    [aux_sym_function_token1] = ACTIONS(89),
    [aux_sym_function_token2] = ACTIONS(89),
    [anon_sym_count] = ACTIONS(91),
    [aux_sym_function_token3] = ACTIONS(89),
    [aux_sym_function_token4] = ACTIONS(89),
    [aux_sym_function_token5] = ACTIONS(89),
    [aux_sym_function_token6] = ACTIONS(89),
    [aux_sym_function_token7] = ACTIONS(89),
    [aux_sym_function_token8] = ACTIONS(89),
    [aux_sym_function_token9] = ACTIONS(89),
    [aux_sym_function_token10] = ACTIONS(91),
    [aux_sym_function_token11] = ACTIONS(89),
    [aux_sym_function_token12] = ACTIONS(91),
    [aux_sym_function_token13] = ACTIONS(89),
    [aux_sym_function_token14] = ACTIONS(89),
    [aux_sym_function_token15] = ACTIONS(89),
    [aux_sym_function_token16] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(93),
    [anon_sym_false] = ACTIONS(93),
    [anon_sym_TRUE] = ACTIONS(93),
    [anon_sym_FALSE] = ACTIONS(93),
    [anon_sym_null] = ACTIONS(95),
    [anon_sym_NULL] = ACTIONS(95),
    [anon_sym_none] = ACTIONS(95),
    [anon_sym_NONE] = ACTIONS(95),
    [sym_variable] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
  },
  [6] = {
    [sym_token] = STATE(2),
    [sym_scripting_function] = STATE(32),
    [sym_scripting_content] = STATE(65),
    [sym__scripting_statement] = STATE(2),
    [sym_future] = STATE(32),
    [sym_casting] = STATE(32),
    [sym_property] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_duration] = STATE(32),
    [sym_constant] = STATE(32),
    [sym_number] = STATE(32),
    [sym_record] = STATE(32),
    [sym_keyword] = STATE(32),
    [sym_operator] = STATE(32),
    [sym_punctuation] = STATE(32),
    [sym_delimiter] = STATE(32),
    [sym_type] = STATE(32),
    [sym_datatype] = STATE(31),
    [sym_algotype] = STATE(31),
    [sym_function] = STATE(32),
    [sym_bool] = STATE(32),
    [sym_nothing] = STATE(32),
    [sym_string] = STATE(32),
    [aux_sym_scripting_content_repeat1] = STATE(2),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(57),
    [aux_sym_future_token1] = ACTIONS(61),
    [aux_sym_casting_token1] = ACTIONS(63),
    [aux_sym_property_token1] = ACTIONS(65),
    [aux_sym_identifier_token1] = ACTIONS(67),
    [aux_sym_duration_token1] = ACTIONS(69),
    [aux_sym_constant_token1] = ACTIONS(71),
    [aux_sym_number_token1] = ACTIONS(73),
    [aux_sym_record_token1] = ACTIONS(75),
    [aux_sym_record_token2] = ACTIONS(75),
    [anon_sym_USE] = ACTIONS(77),
    [anon_sym_NS] = ACTIONS(77),
    [anon_sym_DB] = ACTIONS(77),
    [anon_sym_LET] = ACTIONS(77),
    [anon_sym_BEGIN] = ACTIONS(77),
    [anon_sym_TRANSACTION] = ACTIONS(77),
    [anon_sym_CANCEL] = ACTIONS(77),
    [anon_sym_COMMIT] = ACTIONS(77),
    [anon_sym_IF] = ACTIONS(77),
    [anon_sym_ELSE] = ACTIONS(77),
    [anon_sym_THEN] = ACTIONS(77),
    [anon_sym_END] = ACTIONS(77),
    [anon_sym_SELECT] = ACTIONS(77),
    [anon_sym_FROM] = ACTIONS(77),
    [anon_sym_WHERE] = ACTIONS(77),
    [anon_sym_SPLIT] = ACTIONS(77),
    [anon_sym_AT] = ACTIONS(77),
    [anon_sym_GROUP] = ACTIONS(77),
    [anon_sym_BY] = ACTIONS(77),
    [anon_sym_ORDER] = ACTIONS(77),
    [anon_sym_COLLATE] = ACTIONS(77),
    [anon_sym_NUMERIC] = ACTIONS(77),
    [anon_sym_ASC] = ACTIONS(77),
    [anon_sym_DESC] = ACTIONS(77),
    [anon_sym_LIMIT] = ACTIONS(77),
    [anon_sym_START] = ACTIONS(77),
    [anon_sym_FETCH] = ACTIONS(77),
    [anon_sym_TIMEOUT] = ACTIONS(77),
    [anon_sym_PARALLEL] = ACTIONS(77),
    [anon_sym_INSERT] = ACTIONS(77),
    [anon_sym_IGNORE] = ACTIONS(77),
    [anon_sym_INTO] = ACTIONS(77),
    [anon_sym_VALUES] = ACTIONS(77),
    [anon_sym_ON] = ACTIONS(77),
    [anon_sym_DUPLICATE] = ACTIONS(77),
    [anon_sym_KEY] = ACTIONS(77),
    [anon_sym_UPDATE] = ACTIONS(77),
    [anon_sym_CREATE] = ACTIONS(77),
    [anon_sym_CONTENT] = ACTIONS(77),
    [anon_sym_SET] = ACTIONS(77),
    [anon_sym_RETURN] = ACTIONS(77),
    [anon_sym_BEFORE] = ACTIONS(77),
    [anon_sym_AFTER] = ACTIONS(77),
    [anon_sym_DIFF] = ACTIONS(77),
    [anon_sym_MERGE] = ACTIONS(77),
    [anon_sym_PATCH] = ACTIONS(77),
    [anon_sym_RELATE] = ACTIONS(77),
    [anon_sym_DELETE] = ACTIONS(77),
    [anon_sym_DEFINE] = ACTIONS(77),
    [anon_sym_NAMESPACE] = ACTIONS(77),
    [anon_sym_DATABASE] = ACTIONS(77),
    [anon_sym_LOGIN] = ACTIONS(77),
    [anon_sym_PASSWORD] = ACTIONS(77),
    [anon_sym_PASSHASH] = ACTIONS(77),
    [anon_sym_TOKEN] = ACTIONS(77),
    [anon_sym_SCOPE] = ACTIONS(77),
    [anon_sym_TYPE] = ACTIONS(77),
    [anon_sym_VALUE] = ACTIONS(77),
    [anon_sym_SESSION] = ACTIONS(77),
    [anon_sym_SIGNUP] = ACTIONS(77),
    [anon_sym_SIGNIN] = ACTIONS(77),
    [anon_sym_TABLE] = ACTIONS(77),
    [anon_sym_DROP] = ACTIONS(77),
    [anon_sym_SCHEMAFULL] = ACTIONS(77),
    [anon_sym_SCHEMALESS] = ACTIONS(77),
    [anon_sym_AS] = ACTIONS(77),
    [anon_sym_PERMISSIONS] = ACTIONS(77),
    [anon_sym_FULL] = ACTIONS(77),
    [anon_sym_FOR] = ACTIONS(77),
    [anon_sym_select] = ACTIONS(77),
    [anon_sym_update] = ACTIONS(77),
    [anon_sym_create] = ACTIONS(77),
    [anon_sym_delete] = ACTIONS(77),
    [anon_sym_EVENT] = ACTIONS(77),
    [anon_sym_WHEN] = ACTIONS(77),
    [anon_sym_ASSERT] = ACTIONS(77),
    [anon_sym_INDEX] = ACTIONS(77),
    [anon_sym_FIELDS] = ACTIONS(77),
    [anon_sym_COLUMNS] = ACTIONS(77),
    [anon_sym_UNIQUE] = ACTIONS(77),
    [anon_sym_REMOVE] = ACTIONS(77),
    [anon_sym_SLEEP] = ACTIONS(77),
    [anon_sym_INFO] = ACTIONS(77),
    [anon_sym_KV] = ACTIONS(77),
    [anon_sym_FUNCTION] = ACTIONS(77),
    [anon_sym_PARAM] = ACTIONS(77),
    [anon_sym_AMP_AMP] = ACTIONS(79),
    [anon_sym_AND] = ACTIONS(81),
    [anon_sym_PIPE_PIPE] = ACTIONS(79),
    [anon_sym_OR] = ACTIONS(81),
    [anon_sym_QMARK_QMARK] = ACTIONS(79),
    [anon_sym_QMARK_COLON] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_IS] = ACTIONS(81),
    [anon_sym_BANG_EQ] = ACTIONS(79),
    [anon_sym_ISNOT] = ACTIONS(79),
    [anon_sym_EQ_EQ] = ACTIONS(79),
    [anon_sym_QMARK_EQ] = ACTIONS(79),
    [anon_sym_STAR_EQ] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(79),
    [anon_sym_BANG_TILDE] = ACTIONS(79),
    [anon_sym_QMARK_TILDE] = ACTIONS(79),
    [anon_sym_STAR_TILDE] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_GT_EQ] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_x] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_] = ACTIONS(79),
    [anon_sym_STAR_STAR] = ACTIONS(79),
    [anon_sym_IN] = ACTIONS(81),
    [anon_sym_CONTAINS] = ACTIONS(81),
    [anon_sym_2] = ACTIONS(79),
    [anon_sym_CONTAINSNOT] = ACTIONS(81),
    [anon_sym_3] = ACTIONS(79),
    [anon_sym_CONTAINSALL] = ACTIONS(81),
    [anon_sym_4] = ACTIONS(79),
    [anon_sym_CONTAINSANY] = ACTIONS(81),
    [anon_sym_5] = ACTIONS(79),
    [anon_sym_CONTAINSNONE] = ACTIONS(81),
    [anon_sym_6] = ACTIONS(79),
    [anon_sym_INSIDE] = ACTIONS(81),
    [anon_sym_7] = ACTIONS(79),
    [anon_sym_NOTINSIDE] = ACTIONS(81),
    [anon_sym_NOTIN] = ACTIONS(79),
    [anon_sym_8] = ACTIONS(79),
    [anon_sym_ALLINSIDE] = ACTIONS(81),
    [anon_sym_9] = ACTIONS(79),
    [anon_sym_ANYINSIDE] = ACTIONS(81),
    [anon_sym_10] = ACTIONS(79),
    [anon_sym_NONEINSIDE] = ACTIONS(81),
    [anon_sym_11] = ACTIONS(79),
    [anon_sym_OUTSIDE] = ACTIONS(81),
    [anon_sym_INTERSECTS] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_RBRACK] = ACTIONS(57),
    [anon_sym_DASH_GT] = ACTIONS(57),
    [anon_sym_LT_DASH] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(83),
    [anon_sym_any] = ACTIONS(85),
    [anon_sym_array] = ACTIONS(85),
    [anon_sym_bool] = ACTIONS(85),
    [anon_sym_datetime] = ACTIONS(85),
    [anon_sym_decimal] = ACTIONS(85),
    [anon_sym_duration] = ACTIONS(85),
    [anon_sym_float] = ACTIONS(85),
    [anon_sym_int] = ACTIONS(85),
    [anon_sym_number] = ACTIONS(85),
    [anon_sym_object] = ACTIONS(85),
    [anon_sym_string] = ACTIONS(85),
    [anon_sym_record] = ACTIONS(85),
    [anon_sym_geometry] = ACTIONS(85),
    [anon_sym_EDDSA] = ACTIONS(87),
    [anon_sym_ES256] = ACTIONS(87),
    [anon_sym_ES384] = ACTIONS(87),
    [anon_sym_ES512] = ACTIONS(87),
    [anon_sym_HS256] = ACTIONS(87),
    [anon_sym_HS384] = ACTIONS(87),
    [anon_sym_HS512] = ACTIONS(87),
    [anon_sym_PS256] = ACTIONS(87),
    [anon_sym_PS384] = ACTIONS(87),
    [anon_sym_PS512] = ACTIONS(87),
    [anon_sym_RS256] = ACTIONS(87),
    [anon_sym_RS384] = ACTIONS(87),
    [anon_sym_RS512] = ACTIONS(87),
    [aux_sym_function_token1] = ACTIONS(89),
    [aux_sym_function_token2] = ACTIONS(89),
    [anon_sym_count] = ACTIONS(91),
    [aux_sym_function_token3] = ACTIONS(89),
    [aux_sym_function_token4] = ACTIONS(89),
    [aux_sym_function_token5] = ACTIONS(89),
    [aux_sym_function_token6] = ACTIONS(89),
    [aux_sym_function_token7] = ACTIONS(89),
    [aux_sym_function_token8] = ACTIONS(89),
    [aux_sym_function_token9] = ACTIONS(89),
    [aux_sym_function_token10] = ACTIONS(91),
    [aux_sym_function_token11] = ACTIONS(89),
    [aux_sym_function_token12] = ACTIONS(91),
    [aux_sym_function_token13] = ACTIONS(89),
    [aux_sym_function_token14] = ACTIONS(89),
    [aux_sym_function_token15] = ACTIONS(89),
    [aux_sym_function_token16] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(93),
    [anon_sym_false] = ACTIONS(93),
    [anon_sym_TRUE] = ACTIONS(93),
    [anon_sym_FALSE] = ACTIONS(93),
    [anon_sym_null] = ACTIONS(95),
    [anon_sym_NULL] = ACTIONS(95),
    [anon_sym_none] = ACTIONS(95),
    [anon_sym_NONE] = ACTIONS(95),
    [sym_variable] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
  },
  [7] = {
    [sym_token] = STATE(4),
    [sym_scripting_function] = STATE(24),
    [sym_future] = STATE(24),
    [sym_casting] = STATE(24),
    [sym_property] = STATE(24),
    [sym_identifier] = STATE(24),
    [sym_duration] = STATE(24),
    [sym_constant] = STATE(24),
    [sym_number] = STATE(24),
    [sym_record] = STATE(24),
    [sym_keyword] = STATE(24),
    [sym_operator] = STATE(24),
    [sym_punctuation] = STATE(24),
    [sym_delimiter] = STATE(24),
    [sym_type] = STATE(24),
    [sym_datatype] = STATE(28),
    [sym_algotype] = STATE(28),
    [sym_function] = STATE(24),
    [sym_bool] = STATE(24),
    [sym_nothing] = STATE(24),
    [sym_string] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(7),
    [aux_sym_future_token1] = ACTIONS(9),
    [aux_sym_casting_token1] = ACTIONS(11),
    [aux_sym_property_token1] = ACTIONS(13),
    [aux_sym_identifier_token1] = ACTIONS(15),
    [aux_sym_duration_token1] = ACTIONS(17),
    [aux_sym_constant_token1] = ACTIONS(19),
    [aux_sym_number_token1] = ACTIONS(21),
    [aux_sym_record_token1] = ACTIONS(23),
    [aux_sym_record_token2] = ACTIONS(23),
    [anon_sym_USE] = ACTIONS(25),
    [anon_sym_NS] = ACTIONS(25),
    [anon_sym_DB] = ACTIONS(25),
    [anon_sym_LET] = ACTIONS(25),
    [anon_sym_BEGIN] = ACTIONS(25),
    [anon_sym_TRANSACTION] = ACTIONS(25),
    [anon_sym_CANCEL] = ACTIONS(25),
    [anon_sym_COMMIT] = ACTIONS(25),
    [anon_sym_IF] = ACTIONS(25),
    [anon_sym_ELSE] = ACTIONS(25),
    [anon_sym_THEN] = ACTIONS(25),
    [anon_sym_END] = ACTIONS(25),
    [anon_sym_SELECT] = ACTIONS(25),
    [anon_sym_FROM] = ACTIONS(25),
    [anon_sym_WHERE] = ACTIONS(25),
    [anon_sym_SPLIT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_GROUP] = ACTIONS(25),
    [anon_sym_BY] = ACTIONS(25),
    [anon_sym_ORDER] = ACTIONS(25),
    [anon_sym_COLLATE] = ACTIONS(25),
    [anon_sym_NUMERIC] = ACTIONS(25),
    [anon_sym_ASC] = ACTIONS(25),
    [anon_sym_DESC] = ACTIONS(25),
    [anon_sym_LIMIT] = ACTIONS(25),
    [anon_sym_START] = ACTIONS(25),
    [anon_sym_FETCH] = ACTIONS(25),
    [anon_sym_TIMEOUT] = ACTIONS(25),
    [anon_sym_PARALLEL] = ACTIONS(25),
    [anon_sym_INSERT] = ACTIONS(25),
    [anon_sym_IGNORE] = ACTIONS(25),
    [anon_sym_INTO] = ACTIONS(25),
    [anon_sym_VALUES] = ACTIONS(25),
    [anon_sym_ON] = ACTIONS(25),
    [anon_sym_DUPLICATE] = ACTIONS(25),
    [anon_sym_KEY] = ACTIONS(25),
    [anon_sym_UPDATE] = ACTIONS(25),
    [anon_sym_CREATE] = ACTIONS(25),
    [anon_sym_CONTENT] = ACTIONS(25),
    [anon_sym_SET] = ACTIONS(25),
    [anon_sym_RETURN] = ACTIONS(25),
    [anon_sym_BEFORE] = ACTIONS(25),
    [anon_sym_AFTER] = ACTIONS(25),
    [anon_sym_DIFF] = ACTIONS(25),
    [anon_sym_MERGE] = ACTIONS(25),
    [anon_sym_PATCH] = ACTIONS(25),
    [anon_sym_RELATE] = ACTIONS(25),
    [anon_sym_DELETE] = ACTIONS(25),
    [anon_sym_DEFINE] = ACTIONS(25),
    [anon_sym_NAMESPACE] = ACTIONS(25),
    [anon_sym_DATABASE] = ACTIONS(25),
    [anon_sym_LOGIN] = ACTIONS(25),
    [anon_sym_PASSWORD] = ACTIONS(25),
    [anon_sym_PASSHASH] = ACTIONS(25),
    [anon_sym_TOKEN] = ACTIONS(25),
    [anon_sym_SCOPE] = ACTIONS(25),
    [anon_sym_TYPE] = ACTIONS(25),
    [anon_sym_VALUE] = ACTIONS(25),
    [anon_sym_SESSION] = ACTIONS(25),
    [anon_sym_SIGNUP] = ACTIONS(25),
    [anon_sym_SIGNIN] = ACTIONS(25),
    [anon_sym_TABLE] = ACTIONS(25),
    [anon_sym_DROP] = ACTIONS(25),
    [anon_sym_SCHEMAFULL] = ACTIONS(25),
    [anon_sym_SCHEMALESS] = ACTIONS(25),
    [anon_sym_AS] = ACTIONS(25),
    [anon_sym_PERMISSIONS] = ACTIONS(25),
    [anon_sym_FULL] = ACTIONS(25),
    [anon_sym_FOR] = ACTIONS(25),
    [anon_sym_select] = ACTIONS(25),
    [anon_sym_update] = ACTIONS(25),
    [anon_sym_create] = ACTIONS(25),
    [anon_sym_delete] = ACTIONS(25),
    [anon_sym_EVENT] = ACTIONS(25),
    [anon_sym_WHEN] = ACTIONS(25),
    [anon_sym_ASSERT] = ACTIONS(25),
    [anon_sym_INDEX] = ACTIONS(25),
    [anon_sym_FIELDS] = ACTIONS(25),
    [anon_sym_COLUMNS] = ACTIONS(25),
    [anon_sym_UNIQUE] = ACTIONS(25),
    [anon_sym_REMOVE] = ACTIONS(25),
    [anon_sym_SLEEP] = ACTIONS(25),
    [anon_sym_INFO] = ACTIONS(25),
    [anon_sym_KV] = ACTIONS(25),
    [anon_sym_FUNCTION] = ACTIONS(25),
    [anon_sym_PARAM] = ACTIONS(25),
    [anon_sym_AMP_AMP] = ACTIONS(27),
    [anon_sym_AND] = ACTIONS(29),
    [anon_sym_PIPE_PIPE] = ACTIONS(27),
    [anon_sym_OR] = ACTIONS(29),
    [anon_sym_QMARK_QMARK] = ACTIONS(27),
    [anon_sym_QMARK_COLON] = ACTIONS(27),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_IS] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(27),
    [anon_sym_ISNOT] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(27),
    [anon_sym_QMARK_EQ] = ACTIONS(27),
    [anon_sym_STAR_EQ] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG_TILDE] = ACTIONS(27),
    [anon_sym_QMARK_TILDE] = ACTIONS(27),
    [anon_sym_STAR_TILDE] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_x] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_] = ACTIONS(27),
    [anon_sym_STAR_STAR] = ACTIONS(27),
    [anon_sym_IN] = ACTIONS(29),
    [anon_sym_CONTAINS] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(27),
    [anon_sym_CONTAINSNOT] = ACTIONS(29),
    [anon_sym_3] = ACTIONS(27),
    [anon_sym_CONTAINSALL] = ACTIONS(29),
    [anon_sym_4] = ACTIONS(27),
    [anon_sym_CONTAINSANY] = ACTIONS(29),
    [anon_sym_5] = ACTIONS(27),
    [anon_sym_CONTAINSNONE] = ACTIONS(29),
    [anon_sym_6] = ACTIONS(27),
    [anon_sym_INSIDE] = ACTIONS(29),
    [anon_sym_7] = ACTIONS(27),
    [anon_sym_NOTINSIDE] = ACTIONS(29),
    [anon_sym_NOTIN] = ACTIONS(27),
    [anon_sym_8] = ACTIONS(27),
    [anon_sym_ALLINSIDE] = ACTIONS(29),
    [anon_sym_9] = ACTIONS(27),
    [anon_sym_ANYINSIDE] = ACTIONS(29),
    [anon_sym_10] = ACTIONS(27),
    [anon_sym_NONEINSIDE] = ACTIONS(29),
    [anon_sym_11] = ACTIONS(27),
    [anon_sym_OUTSIDE] = ACTIONS(29),
    [anon_sym_INTERSECTS] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(7),
    [anon_sym_DASH_GT] = ACTIONS(7),
    [anon_sym_LT_DASH] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(31),
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
    [sym_comment] = ACTIONS(253),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(255),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(255),
    [anon_sym_LBRACE] = ACTIONS(255),
    [anon_sym_RBRACE] = ACTIONS(255),
    [aux_sym_future_token1] = ACTIONS(255),
    [aux_sym_casting_token1] = ACTIONS(255),
    [aux_sym_property_token1] = ACTIONS(257),
    [aux_sym_identifier_token1] = ACTIONS(257),
    [aux_sym_duration_token1] = ACTIONS(257),
    [aux_sym_constant_token1] = ACTIONS(255),
    [aux_sym_number_token1] = ACTIONS(257),
    [aux_sym_record_token1] = ACTIONS(255),
    [aux_sym_record_token2] = ACTIONS(255),
    [anon_sym_USE] = ACTIONS(257),
    [anon_sym_NS] = ACTIONS(257),
    [anon_sym_DB] = ACTIONS(257),
    [anon_sym_LET] = ACTIONS(257),
    [anon_sym_BEGIN] = ACTIONS(257),
    [anon_sym_TRANSACTION] = ACTIONS(257),
    [anon_sym_CANCEL] = ACTIONS(257),
    [anon_sym_COMMIT] = ACTIONS(257),
    [anon_sym_IF] = ACTIONS(257),
    [anon_sym_ELSE] = ACTIONS(257),
    [anon_sym_THEN] = ACTIONS(257),
    [anon_sym_END] = ACTIONS(257),
    [anon_sym_SELECT] = ACTIONS(257),
    [anon_sym_FROM] = ACTIONS(257),
    [anon_sym_WHERE] = ACTIONS(257),
    [anon_sym_SPLIT] = ACTIONS(257),
    [anon_sym_AT] = ACTIONS(257),
    [anon_sym_GROUP] = ACTIONS(257),
    [anon_sym_BY] = ACTIONS(257),
    [anon_sym_ORDER] = ACTIONS(257),
    [anon_sym_COLLATE] = ACTIONS(257),
    [anon_sym_NUMERIC] = ACTIONS(257),
    [anon_sym_ASC] = ACTIONS(257),
    [anon_sym_DESC] = ACTIONS(257),
    [anon_sym_LIMIT] = ACTIONS(257),
    [anon_sym_START] = ACTIONS(257),
    [anon_sym_FETCH] = ACTIONS(257),
    [anon_sym_TIMEOUT] = ACTIONS(257),
    [anon_sym_PARALLEL] = ACTIONS(257),
    [anon_sym_INSERT] = ACTIONS(257),
    [anon_sym_IGNORE] = ACTIONS(257),
    [anon_sym_INTO] = ACTIONS(257),
    [anon_sym_VALUES] = ACTIONS(257),
    [anon_sym_ON] = ACTIONS(257),
    [anon_sym_DUPLICATE] = ACTIONS(257),
    [anon_sym_KEY] = ACTIONS(257),
    [anon_sym_UPDATE] = ACTIONS(257),
    [anon_sym_CREATE] = ACTIONS(257),
    [anon_sym_CONTENT] = ACTIONS(257),
    [anon_sym_SET] = ACTIONS(257),
    [anon_sym_RETURN] = ACTIONS(257),
    [anon_sym_BEFORE] = ACTIONS(257),
    [anon_sym_AFTER] = ACTIONS(257),
    [anon_sym_DIFF] = ACTIONS(257),
    [anon_sym_MERGE] = ACTIONS(257),
    [anon_sym_PATCH] = ACTIONS(257),
    [anon_sym_RELATE] = ACTIONS(257),
    [anon_sym_DELETE] = ACTIONS(257),
    [anon_sym_DEFINE] = ACTIONS(257),
    [anon_sym_NAMESPACE] = ACTIONS(257),
    [anon_sym_DATABASE] = ACTIONS(257),
    [anon_sym_LOGIN] = ACTIONS(257),
    [anon_sym_PASSWORD] = ACTIONS(257),
    [anon_sym_PASSHASH] = ACTIONS(257),
    [anon_sym_TOKEN] = ACTIONS(257),
    [anon_sym_SCOPE] = ACTIONS(257),
    [anon_sym_TYPE] = ACTIONS(257),
    [anon_sym_VALUE] = ACTIONS(257),
    [anon_sym_SESSION] = ACTIONS(257),
    [anon_sym_SIGNUP] = ACTIONS(257),
    [anon_sym_SIGNIN] = ACTIONS(257),
    [anon_sym_TABLE] = ACTIONS(257),
    [anon_sym_DROP] = ACTIONS(257),
    [anon_sym_SCHEMAFULL] = ACTIONS(257),
    [anon_sym_SCHEMALESS] = ACTIONS(257),
    [anon_sym_AS] = ACTIONS(257),
    [anon_sym_PERMISSIONS] = ACTIONS(257),
    [anon_sym_FULL] = ACTIONS(257),
    [anon_sym_FOR] = ACTIONS(257),
    [anon_sym_select] = ACTIONS(257),
    [anon_sym_update] = ACTIONS(257),
    [anon_sym_create] = ACTIONS(257),
    [anon_sym_delete] = ACTIONS(257),
    [anon_sym_EVENT] = ACTIONS(257),
    [anon_sym_WHEN] = ACTIONS(257),
    [anon_sym_ASSERT] = ACTIONS(257),
    [anon_sym_INDEX] = ACTIONS(257),
    [anon_sym_FIELDS] = ACTIONS(257),
    [anon_sym_COLUMNS] = ACTIONS(257),
    [anon_sym_UNIQUE] = ACTIONS(257),
    [anon_sym_REMOVE] = ACTIONS(257),
    [anon_sym_SLEEP] = ACTIONS(257),
    [anon_sym_INFO] = ACTIONS(257),
    [anon_sym_KV] = ACTIONS(257),
    [anon_sym_FUNCTION] = ACTIONS(257),
    [anon_sym_PARAM] = ACTIONS(257),
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
    [anon_sym_DASH_GT] = ACTIONS(255),
    [anon_sym_LT_DASH] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(255),
    [anon_sym_SEMI] = ACTIONS(255),
    [anon_sym_COLON] = ACTIONS(255),
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
    [anon_sym_LBRACE] = ACTIONS(259),
    [anon_sym_RBRACE] = ACTIONS(261),
    [aux_sym_future_token1] = ACTIONS(259),
    [aux_sym_casting_token1] = ACTIONS(259),
    [aux_sym_property_token1] = ACTIONS(261),
    [aux_sym_identifier_token1] = ACTIONS(261),
    [aux_sym_duration_token1] = ACTIONS(261),
    [aux_sym_constant_token1] = ACTIONS(259),
    [aux_sym_number_token1] = ACTIONS(261),
    [aux_sym_record_token1] = ACTIONS(259),
    [aux_sym_record_token2] = ACTIONS(259),
    [anon_sym_USE] = ACTIONS(261),
    [anon_sym_NS] = ACTIONS(261),
    [anon_sym_DB] = ACTIONS(261),
    [anon_sym_LET] = ACTIONS(261),
    [anon_sym_BEGIN] = ACTIONS(261),
    [anon_sym_TRANSACTION] = ACTIONS(261),
    [anon_sym_CANCEL] = ACTIONS(261),
    [anon_sym_COMMIT] = ACTIONS(261),
    [anon_sym_IF] = ACTIONS(261),
    [anon_sym_ELSE] = ACTIONS(261),
    [anon_sym_THEN] = ACTIONS(261),
    [anon_sym_END] = ACTIONS(261),
    [anon_sym_SELECT] = ACTIONS(261),
    [anon_sym_FROM] = ACTIONS(261),
    [anon_sym_WHERE] = ACTIONS(261),
    [anon_sym_SPLIT] = ACTIONS(261),
    [anon_sym_AT] = ACTIONS(261),
    [anon_sym_GROUP] = ACTIONS(261),
    [anon_sym_BY] = ACTIONS(261),
    [anon_sym_ORDER] = ACTIONS(261),
    [anon_sym_COLLATE] = ACTIONS(261),
    [anon_sym_NUMERIC] = ACTIONS(261),
    [anon_sym_ASC] = ACTIONS(261),
    [anon_sym_DESC] = ACTIONS(261),
    [anon_sym_LIMIT] = ACTIONS(261),
    [anon_sym_START] = ACTIONS(261),
    [anon_sym_FETCH] = ACTIONS(261),
    [anon_sym_TIMEOUT] = ACTIONS(261),
    [anon_sym_PARALLEL] = ACTIONS(261),
    [anon_sym_INSERT] = ACTIONS(261),
    [anon_sym_IGNORE] = ACTIONS(261),
    [anon_sym_INTO] = ACTIONS(261),
    [anon_sym_VALUES] = ACTIONS(261),
    [anon_sym_ON] = ACTIONS(261),
    [anon_sym_DUPLICATE] = ACTIONS(261),
    [anon_sym_KEY] = ACTIONS(261),
    [anon_sym_UPDATE] = ACTIONS(261),
    [anon_sym_CREATE] = ACTIONS(261),
    [anon_sym_CONTENT] = ACTIONS(261),
    [anon_sym_SET] = ACTIONS(261),
    [anon_sym_RETURN] = ACTIONS(261),
    [anon_sym_BEFORE] = ACTIONS(261),
    [anon_sym_AFTER] = ACTIONS(261),
    [anon_sym_DIFF] = ACTIONS(261),
    [anon_sym_MERGE] = ACTIONS(261),
    [anon_sym_PATCH] = ACTIONS(261),
    [anon_sym_RELATE] = ACTIONS(261),
    [anon_sym_DELETE] = ACTIONS(261),
    [anon_sym_DEFINE] = ACTIONS(261),
    [anon_sym_NAMESPACE] = ACTIONS(261),
    [anon_sym_DATABASE] = ACTIONS(261),
    [anon_sym_LOGIN] = ACTIONS(261),
    [anon_sym_PASSWORD] = ACTIONS(261),
    [anon_sym_PASSHASH] = ACTIONS(261),
    [anon_sym_TOKEN] = ACTIONS(261),
    [anon_sym_SCOPE] = ACTIONS(261),
    [anon_sym_TYPE] = ACTIONS(261),
    [anon_sym_VALUE] = ACTIONS(261),
    [anon_sym_SESSION] = ACTIONS(261),
    [anon_sym_SIGNUP] = ACTIONS(261),
    [anon_sym_SIGNIN] = ACTIONS(261),
    [anon_sym_TABLE] = ACTIONS(261),
    [anon_sym_DROP] = ACTIONS(261),
    [anon_sym_SCHEMAFULL] = ACTIONS(261),
    [anon_sym_SCHEMALESS] = ACTIONS(261),
    [anon_sym_AS] = ACTIONS(261),
    [anon_sym_PERMISSIONS] = ACTIONS(261),
    [anon_sym_FULL] = ACTIONS(261),
    [anon_sym_FOR] = ACTIONS(261),
    [anon_sym_select] = ACTIONS(261),
    [anon_sym_update] = ACTIONS(261),
    [anon_sym_create] = ACTIONS(261),
    [anon_sym_delete] = ACTIONS(261),
    [anon_sym_EVENT] = ACTIONS(261),
    [anon_sym_WHEN] = ACTIONS(261),
    [anon_sym_ASSERT] = ACTIONS(261),
    [anon_sym_INDEX] = ACTIONS(261),
    [anon_sym_FIELDS] = ACTIONS(261),
    [anon_sym_COLUMNS] = ACTIONS(261),
    [anon_sym_UNIQUE] = ACTIONS(261),
    [anon_sym_REMOVE] = ACTIONS(261),
    [anon_sym_SLEEP] = ACTIONS(261),
    [anon_sym_INFO] = ACTIONS(261),
    [anon_sym_KV] = ACTIONS(261),
    [anon_sym_FUNCTION] = ACTIONS(261),
    [anon_sym_PARAM] = ACTIONS(261),
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
    [anon_sym_DASH_GT] = ACTIONS(259),
    [anon_sym_LT_DASH] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(259),
    [anon_sym_SEMI] = ACTIONS(259),
    [anon_sym_COLON] = ACTIONS(259),
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
    [anon_sym_LBRACE] = ACTIONS(263),
    [anon_sym_RBRACE] = ACTIONS(263),
    [aux_sym_future_token1] = ACTIONS(263),
    [aux_sym_casting_token1] = ACTIONS(263),
    [aux_sym_property_token1] = ACTIONS(265),
    [aux_sym_identifier_token1] = ACTIONS(265),
    [aux_sym_duration_token1] = ACTIONS(265),
    [aux_sym_constant_token1] = ACTIONS(263),
    [aux_sym_number_token1] = ACTIONS(265),
    [aux_sym_record_token1] = ACTIONS(263),
    [aux_sym_record_token2] = ACTIONS(263),
    [anon_sym_USE] = ACTIONS(265),
    [anon_sym_NS] = ACTIONS(265),
    [anon_sym_DB] = ACTIONS(265),
    [anon_sym_LET] = ACTIONS(265),
    [anon_sym_BEGIN] = ACTIONS(265),
    [anon_sym_TRANSACTION] = ACTIONS(265),
    [anon_sym_CANCEL] = ACTIONS(265),
    [anon_sym_COMMIT] = ACTIONS(265),
    [anon_sym_IF] = ACTIONS(265),
    [anon_sym_ELSE] = ACTIONS(265),
    [anon_sym_THEN] = ACTIONS(265),
    [anon_sym_END] = ACTIONS(265),
    [anon_sym_SELECT] = ACTIONS(265),
    [anon_sym_FROM] = ACTIONS(265),
    [anon_sym_WHERE] = ACTIONS(265),
    [anon_sym_SPLIT] = ACTIONS(265),
    [anon_sym_AT] = ACTIONS(265),
    [anon_sym_GROUP] = ACTIONS(265),
    [anon_sym_BY] = ACTIONS(265),
    [anon_sym_ORDER] = ACTIONS(265),
    [anon_sym_COLLATE] = ACTIONS(265),
    [anon_sym_NUMERIC] = ACTIONS(265),
    [anon_sym_ASC] = ACTIONS(265),
    [anon_sym_DESC] = ACTIONS(265),
    [anon_sym_LIMIT] = ACTIONS(265),
    [anon_sym_START] = ACTIONS(265),
    [anon_sym_FETCH] = ACTIONS(265),
    [anon_sym_TIMEOUT] = ACTIONS(265),
    [anon_sym_PARALLEL] = ACTIONS(265),
    [anon_sym_INSERT] = ACTIONS(265),
    [anon_sym_IGNORE] = ACTIONS(265),
    [anon_sym_INTO] = ACTIONS(265),
    [anon_sym_VALUES] = ACTIONS(265),
    [anon_sym_ON] = ACTIONS(265),
    [anon_sym_DUPLICATE] = ACTIONS(265),
    [anon_sym_KEY] = ACTIONS(265),
    [anon_sym_UPDATE] = ACTIONS(265),
    [anon_sym_CREATE] = ACTIONS(265),
    [anon_sym_CONTENT] = ACTIONS(265),
    [anon_sym_SET] = ACTIONS(265),
    [anon_sym_RETURN] = ACTIONS(265),
    [anon_sym_BEFORE] = ACTIONS(265),
    [anon_sym_AFTER] = ACTIONS(265),
    [anon_sym_DIFF] = ACTIONS(265),
    [anon_sym_MERGE] = ACTIONS(265),
    [anon_sym_PATCH] = ACTIONS(265),
    [anon_sym_RELATE] = ACTIONS(265),
    [anon_sym_DELETE] = ACTIONS(265),
    [anon_sym_DEFINE] = ACTIONS(265),
    [anon_sym_NAMESPACE] = ACTIONS(265),
    [anon_sym_DATABASE] = ACTIONS(265),
    [anon_sym_LOGIN] = ACTIONS(265),
    [anon_sym_PASSWORD] = ACTIONS(265),
    [anon_sym_PASSHASH] = ACTIONS(265),
    [anon_sym_TOKEN] = ACTIONS(265),
    [anon_sym_SCOPE] = ACTIONS(265),
    [anon_sym_TYPE] = ACTIONS(265),
    [anon_sym_VALUE] = ACTIONS(265),
    [anon_sym_SESSION] = ACTIONS(265),
    [anon_sym_SIGNUP] = ACTIONS(265),
    [anon_sym_SIGNIN] = ACTIONS(265),
    [anon_sym_TABLE] = ACTIONS(265),
    [anon_sym_DROP] = ACTIONS(265),
    [anon_sym_SCHEMAFULL] = ACTIONS(265),
    [anon_sym_SCHEMALESS] = ACTIONS(265),
    [anon_sym_AS] = ACTIONS(265),
    [anon_sym_PERMISSIONS] = ACTIONS(265),
    [anon_sym_FULL] = ACTIONS(265),
    [anon_sym_FOR] = ACTIONS(265),
    [anon_sym_select] = ACTIONS(265),
    [anon_sym_update] = ACTIONS(265),
    [anon_sym_create] = ACTIONS(265),
    [anon_sym_delete] = ACTIONS(265),
    [anon_sym_EVENT] = ACTIONS(265),
    [anon_sym_WHEN] = ACTIONS(265),
    [anon_sym_ASSERT] = ACTIONS(265),
    [anon_sym_INDEX] = ACTIONS(265),
    [anon_sym_FIELDS] = ACTIONS(265),
    [anon_sym_COLUMNS] = ACTIONS(265),
    [anon_sym_UNIQUE] = ACTIONS(265),
    [anon_sym_REMOVE] = ACTIONS(265),
    [anon_sym_SLEEP] = ACTIONS(265),
    [anon_sym_INFO] = ACTIONS(265),
    [anon_sym_KV] = ACTIONS(265),
    [anon_sym_FUNCTION] = ACTIONS(265),
    [anon_sym_PARAM] = ACTIONS(265),
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
    [anon_sym_DASH_GT] = ACTIONS(263),
    [anon_sym_LT_DASH] = ACTIONS(263),
    [anon_sym_COMMA] = ACTIONS(263),
    [anon_sym_SEMI] = ACTIONS(263),
    [anon_sym_COLON] = ACTIONS(263),
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
    [anon_sym_LBRACE] = ACTIONS(267),
    [anon_sym_RBRACE] = ACTIONS(267),
    [aux_sym_future_token1] = ACTIONS(267),
    [aux_sym_casting_token1] = ACTIONS(267),
    [aux_sym_property_token1] = ACTIONS(269),
    [aux_sym_identifier_token1] = ACTIONS(269),
    [aux_sym_duration_token1] = ACTIONS(269),
    [aux_sym_constant_token1] = ACTIONS(267),
    [aux_sym_number_token1] = ACTIONS(269),
    [aux_sym_record_token1] = ACTIONS(267),
    [aux_sym_record_token2] = ACTIONS(267),
    [anon_sym_USE] = ACTIONS(269),
    [anon_sym_NS] = ACTIONS(269),
    [anon_sym_DB] = ACTIONS(269),
    [anon_sym_LET] = ACTIONS(269),
    [anon_sym_BEGIN] = ACTIONS(269),
    [anon_sym_TRANSACTION] = ACTIONS(269),
    [anon_sym_CANCEL] = ACTIONS(269),
    [anon_sym_COMMIT] = ACTIONS(269),
    [anon_sym_IF] = ACTIONS(269),
    [anon_sym_ELSE] = ACTIONS(269),
    [anon_sym_THEN] = ACTIONS(269),
    [anon_sym_END] = ACTIONS(269),
    [anon_sym_SELECT] = ACTIONS(269),
    [anon_sym_FROM] = ACTIONS(269),
    [anon_sym_WHERE] = ACTIONS(269),
    [anon_sym_SPLIT] = ACTIONS(269),
    [anon_sym_AT] = ACTIONS(269),
    [anon_sym_GROUP] = ACTIONS(269),
    [anon_sym_BY] = ACTIONS(269),
    [anon_sym_ORDER] = ACTIONS(269),
    [anon_sym_COLLATE] = ACTIONS(269),
    [anon_sym_NUMERIC] = ACTIONS(269),
    [anon_sym_ASC] = ACTIONS(269),
    [anon_sym_DESC] = ACTIONS(269),
    [anon_sym_LIMIT] = ACTIONS(269),
    [anon_sym_START] = ACTIONS(269),
    [anon_sym_FETCH] = ACTIONS(269),
    [anon_sym_TIMEOUT] = ACTIONS(269),
    [anon_sym_PARALLEL] = ACTIONS(269),
    [anon_sym_INSERT] = ACTIONS(269),
    [anon_sym_IGNORE] = ACTIONS(269),
    [anon_sym_INTO] = ACTIONS(269),
    [anon_sym_VALUES] = ACTIONS(269),
    [anon_sym_ON] = ACTIONS(269),
    [anon_sym_DUPLICATE] = ACTIONS(269),
    [anon_sym_KEY] = ACTIONS(269),
    [anon_sym_UPDATE] = ACTIONS(269),
    [anon_sym_CREATE] = ACTIONS(269),
    [anon_sym_CONTENT] = ACTIONS(269),
    [anon_sym_SET] = ACTIONS(269),
    [anon_sym_RETURN] = ACTIONS(269),
    [anon_sym_BEFORE] = ACTIONS(269),
    [anon_sym_AFTER] = ACTIONS(269),
    [anon_sym_DIFF] = ACTIONS(269),
    [anon_sym_MERGE] = ACTIONS(269),
    [anon_sym_PATCH] = ACTIONS(269),
    [anon_sym_RELATE] = ACTIONS(269),
    [anon_sym_DELETE] = ACTIONS(269),
    [anon_sym_DEFINE] = ACTIONS(269),
    [anon_sym_NAMESPACE] = ACTIONS(269),
    [anon_sym_DATABASE] = ACTIONS(269),
    [anon_sym_LOGIN] = ACTIONS(269),
    [anon_sym_PASSWORD] = ACTIONS(269),
    [anon_sym_PASSHASH] = ACTIONS(269),
    [anon_sym_TOKEN] = ACTIONS(269),
    [anon_sym_SCOPE] = ACTIONS(269),
    [anon_sym_TYPE] = ACTIONS(269),
    [anon_sym_VALUE] = ACTIONS(269),
    [anon_sym_SESSION] = ACTIONS(269),
    [anon_sym_SIGNUP] = ACTIONS(269),
    [anon_sym_SIGNIN] = ACTIONS(269),
    [anon_sym_TABLE] = ACTIONS(269),
    [anon_sym_DROP] = ACTIONS(269),
    [anon_sym_SCHEMAFULL] = ACTIONS(269),
    [anon_sym_SCHEMALESS] = ACTIONS(269),
    [anon_sym_AS] = ACTIONS(269),
    [anon_sym_PERMISSIONS] = ACTIONS(269),
    [anon_sym_FULL] = ACTIONS(269),
    [anon_sym_FOR] = ACTIONS(269),
    [anon_sym_select] = ACTIONS(269),
    [anon_sym_update] = ACTIONS(269),
    [anon_sym_create] = ACTIONS(269),
    [anon_sym_delete] = ACTIONS(269),
    [anon_sym_EVENT] = ACTIONS(269),
    [anon_sym_WHEN] = ACTIONS(269),
    [anon_sym_ASSERT] = ACTIONS(269),
    [anon_sym_INDEX] = ACTIONS(269),
    [anon_sym_FIELDS] = ACTIONS(269),
    [anon_sym_COLUMNS] = ACTIONS(269),
    [anon_sym_UNIQUE] = ACTIONS(269),
    [anon_sym_REMOVE] = ACTIONS(269),
    [anon_sym_SLEEP] = ACTIONS(269),
    [anon_sym_INFO] = ACTIONS(269),
    [anon_sym_KV] = ACTIONS(269),
    [anon_sym_FUNCTION] = ACTIONS(269),
    [anon_sym_PARAM] = ACTIONS(269),
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
    [anon_sym_DASH_GT] = ACTIONS(267),
    [anon_sym_LT_DASH] = ACTIONS(267),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_SEMI] = ACTIONS(267),
    [anon_sym_COLON] = ACTIONS(267),
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
    [anon_sym_LBRACE] = ACTIONS(271),
    [anon_sym_RBRACE] = ACTIONS(271),
    [aux_sym_future_token1] = ACTIONS(271),
    [aux_sym_casting_token1] = ACTIONS(271),
    [aux_sym_property_token1] = ACTIONS(273),
    [aux_sym_identifier_token1] = ACTIONS(273),
    [aux_sym_duration_token1] = ACTIONS(273),
    [aux_sym_constant_token1] = ACTIONS(271),
    [aux_sym_number_token1] = ACTIONS(273),
    [aux_sym_record_token1] = ACTIONS(271),
    [aux_sym_record_token2] = ACTIONS(271),
    [anon_sym_USE] = ACTIONS(273),
    [anon_sym_NS] = ACTIONS(273),
    [anon_sym_DB] = ACTIONS(273),
    [anon_sym_LET] = ACTIONS(273),
    [anon_sym_BEGIN] = ACTIONS(273),
    [anon_sym_TRANSACTION] = ACTIONS(273),
    [anon_sym_CANCEL] = ACTIONS(273),
    [anon_sym_COMMIT] = ACTIONS(273),
    [anon_sym_IF] = ACTIONS(273),
    [anon_sym_ELSE] = ACTIONS(273),
    [anon_sym_THEN] = ACTIONS(273),
    [anon_sym_END] = ACTIONS(273),
    [anon_sym_SELECT] = ACTIONS(273),
    [anon_sym_FROM] = ACTIONS(273),
    [anon_sym_WHERE] = ACTIONS(273),
    [anon_sym_SPLIT] = ACTIONS(273),
    [anon_sym_AT] = ACTIONS(273),
    [anon_sym_GROUP] = ACTIONS(273),
    [anon_sym_BY] = ACTIONS(273),
    [anon_sym_ORDER] = ACTIONS(273),
    [anon_sym_COLLATE] = ACTIONS(273),
    [anon_sym_NUMERIC] = ACTIONS(273),
    [anon_sym_ASC] = ACTIONS(273),
    [anon_sym_DESC] = ACTIONS(273),
    [anon_sym_LIMIT] = ACTIONS(273),
    [anon_sym_START] = ACTIONS(273),
    [anon_sym_FETCH] = ACTIONS(273),
    [anon_sym_TIMEOUT] = ACTIONS(273),
    [anon_sym_PARALLEL] = ACTIONS(273),
    [anon_sym_INSERT] = ACTIONS(273),
    [anon_sym_IGNORE] = ACTIONS(273),
    [anon_sym_INTO] = ACTIONS(273),
    [anon_sym_VALUES] = ACTIONS(273),
    [anon_sym_ON] = ACTIONS(273),
    [anon_sym_DUPLICATE] = ACTIONS(273),
    [anon_sym_KEY] = ACTIONS(273),
    [anon_sym_UPDATE] = ACTIONS(273),
    [anon_sym_CREATE] = ACTIONS(273),
    [anon_sym_CONTENT] = ACTIONS(273),
    [anon_sym_SET] = ACTIONS(273),
    [anon_sym_RETURN] = ACTIONS(273),
    [anon_sym_BEFORE] = ACTIONS(273),
    [anon_sym_AFTER] = ACTIONS(273),
    [anon_sym_DIFF] = ACTIONS(273),
    [anon_sym_MERGE] = ACTIONS(273),
    [anon_sym_PATCH] = ACTIONS(273),
    [anon_sym_RELATE] = ACTIONS(273),
    [anon_sym_DELETE] = ACTIONS(273),
    [anon_sym_DEFINE] = ACTIONS(273),
    [anon_sym_NAMESPACE] = ACTIONS(273),
    [anon_sym_DATABASE] = ACTIONS(273),
    [anon_sym_LOGIN] = ACTIONS(273),
    [anon_sym_PASSWORD] = ACTIONS(273),
    [anon_sym_PASSHASH] = ACTIONS(273),
    [anon_sym_TOKEN] = ACTIONS(273),
    [anon_sym_SCOPE] = ACTIONS(273),
    [anon_sym_TYPE] = ACTIONS(273),
    [anon_sym_VALUE] = ACTIONS(273),
    [anon_sym_SESSION] = ACTIONS(273),
    [anon_sym_SIGNUP] = ACTIONS(273),
    [anon_sym_SIGNIN] = ACTIONS(273),
    [anon_sym_TABLE] = ACTIONS(273),
    [anon_sym_DROP] = ACTIONS(273),
    [anon_sym_SCHEMAFULL] = ACTIONS(273),
    [anon_sym_SCHEMALESS] = ACTIONS(273),
    [anon_sym_AS] = ACTIONS(273),
    [anon_sym_PERMISSIONS] = ACTIONS(273),
    [anon_sym_FULL] = ACTIONS(273),
    [anon_sym_FOR] = ACTIONS(273),
    [anon_sym_select] = ACTIONS(273),
    [anon_sym_update] = ACTIONS(273),
    [anon_sym_create] = ACTIONS(273),
    [anon_sym_delete] = ACTIONS(273),
    [anon_sym_EVENT] = ACTIONS(273),
    [anon_sym_WHEN] = ACTIONS(273),
    [anon_sym_ASSERT] = ACTIONS(273),
    [anon_sym_INDEX] = ACTIONS(273),
    [anon_sym_FIELDS] = ACTIONS(273),
    [anon_sym_COLUMNS] = ACTIONS(273),
    [anon_sym_UNIQUE] = ACTIONS(273),
    [anon_sym_REMOVE] = ACTIONS(273),
    [anon_sym_SLEEP] = ACTIONS(273),
    [anon_sym_INFO] = ACTIONS(273),
    [anon_sym_KV] = ACTIONS(273),
    [anon_sym_FUNCTION] = ACTIONS(273),
    [anon_sym_PARAM] = ACTIONS(273),
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
    [anon_sym_DASH_GT] = ACTIONS(271),
    [anon_sym_LT_DASH] = ACTIONS(271),
    [anon_sym_COMMA] = ACTIONS(271),
    [anon_sym_SEMI] = ACTIONS(271),
    [anon_sym_COLON] = ACTIONS(271),
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
    [anon_sym_LBRACE] = ACTIONS(275),
    [anon_sym_RBRACE] = ACTIONS(275),
    [aux_sym_future_token1] = ACTIONS(275),
    [aux_sym_casting_token1] = ACTIONS(275),
    [aux_sym_property_token1] = ACTIONS(277),
    [aux_sym_identifier_token1] = ACTIONS(277),
    [aux_sym_duration_token1] = ACTIONS(277),
    [aux_sym_constant_token1] = ACTIONS(275),
    [aux_sym_number_token1] = ACTIONS(277),
    [aux_sym_record_token1] = ACTIONS(275),
    [aux_sym_record_token2] = ACTIONS(275),
    [anon_sym_USE] = ACTIONS(277),
    [anon_sym_NS] = ACTIONS(277),
    [anon_sym_DB] = ACTIONS(277),
    [anon_sym_LET] = ACTIONS(277),
    [anon_sym_BEGIN] = ACTIONS(277),
    [anon_sym_TRANSACTION] = ACTIONS(277),
    [anon_sym_CANCEL] = ACTIONS(277),
    [anon_sym_COMMIT] = ACTIONS(277),
    [anon_sym_IF] = ACTIONS(277),
    [anon_sym_ELSE] = ACTIONS(277),
    [anon_sym_THEN] = ACTIONS(277),
    [anon_sym_END] = ACTIONS(277),
    [anon_sym_SELECT] = ACTIONS(277),
    [anon_sym_FROM] = ACTIONS(277),
    [anon_sym_WHERE] = ACTIONS(277),
    [anon_sym_SPLIT] = ACTIONS(277),
    [anon_sym_AT] = ACTIONS(277),
    [anon_sym_GROUP] = ACTIONS(277),
    [anon_sym_BY] = ACTIONS(277),
    [anon_sym_ORDER] = ACTIONS(277),
    [anon_sym_COLLATE] = ACTIONS(277),
    [anon_sym_NUMERIC] = ACTIONS(277),
    [anon_sym_ASC] = ACTIONS(277),
    [anon_sym_DESC] = ACTIONS(277),
    [anon_sym_LIMIT] = ACTIONS(277),
    [anon_sym_START] = ACTIONS(277),
    [anon_sym_FETCH] = ACTIONS(277),
    [anon_sym_TIMEOUT] = ACTIONS(277),
    [anon_sym_PARALLEL] = ACTIONS(277),
    [anon_sym_INSERT] = ACTIONS(277),
    [anon_sym_IGNORE] = ACTIONS(277),
    [anon_sym_INTO] = ACTIONS(277),
    [anon_sym_VALUES] = ACTIONS(277),
    [anon_sym_ON] = ACTIONS(277),
    [anon_sym_DUPLICATE] = ACTIONS(277),
    [anon_sym_KEY] = ACTIONS(277),
    [anon_sym_UPDATE] = ACTIONS(277),
    [anon_sym_CREATE] = ACTIONS(277),
    [anon_sym_CONTENT] = ACTIONS(277),
    [anon_sym_SET] = ACTIONS(277),
    [anon_sym_RETURN] = ACTIONS(277),
    [anon_sym_BEFORE] = ACTIONS(277),
    [anon_sym_AFTER] = ACTIONS(277),
    [anon_sym_DIFF] = ACTIONS(277),
    [anon_sym_MERGE] = ACTIONS(277),
    [anon_sym_PATCH] = ACTIONS(277),
    [anon_sym_RELATE] = ACTIONS(277),
    [anon_sym_DELETE] = ACTIONS(277),
    [anon_sym_DEFINE] = ACTIONS(277),
    [anon_sym_NAMESPACE] = ACTIONS(277),
    [anon_sym_DATABASE] = ACTIONS(277),
    [anon_sym_LOGIN] = ACTIONS(277),
    [anon_sym_PASSWORD] = ACTIONS(277),
    [anon_sym_PASSHASH] = ACTIONS(277),
    [anon_sym_TOKEN] = ACTIONS(277),
    [anon_sym_SCOPE] = ACTIONS(277),
    [anon_sym_TYPE] = ACTIONS(277),
    [anon_sym_VALUE] = ACTIONS(277),
    [anon_sym_SESSION] = ACTIONS(277),
    [anon_sym_SIGNUP] = ACTIONS(277),
    [anon_sym_SIGNIN] = ACTIONS(277),
    [anon_sym_TABLE] = ACTIONS(277),
    [anon_sym_DROP] = ACTIONS(277),
    [anon_sym_SCHEMAFULL] = ACTIONS(277),
    [anon_sym_SCHEMALESS] = ACTIONS(277),
    [anon_sym_AS] = ACTIONS(277),
    [anon_sym_PERMISSIONS] = ACTIONS(277),
    [anon_sym_FULL] = ACTIONS(277),
    [anon_sym_FOR] = ACTIONS(277),
    [anon_sym_select] = ACTIONS(277),
    [anon_sym_update] = ACTIONS(277),
    [anon_sym_create] = ACTIONS(277),
    [anon_sym_delete] = ACTIONS(277),
    [anon_sym_EVENT] = ACTIONS(277),
    [anon_sym_WHEN] = ACTIONS(277),
    [anon_sym_ASSERT] = ACTIONS(277),
    [anon_sym_INDEX] = ACTIONS(277),
    [anon_sym_FIELDS] = ACTIONS(277),
    [anon_sym_COLUMNS] = ACTIONS(277),
    [anon_sym_UNIQUE] = ACTIONS(277),
    [anon_sym_REMOVE] = ACTIONS(277),
    [anon_sym_SLEEP] = ACTIONS(277),
    [anon_sym_INFO] = ACTIONS(277),
    [anon_sym_KV] = ACTIONS(277),
    [anon_sym_FUNCTION] = ACTIONS(277),
    [anon_sym_PARAM] = ACTIONS(277),
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
    [anon_sym_DASH_GT] = ACTIONS(275),
    [anon_sym_LT_DASH] = ACTIONS(275),
    [anon_sym_COMMA] = ACTIONS(275),
    [anon_sym_SEMI] = ACTIONS(275),
    [anon_sym_COLON] = ACTIONS(275),
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
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_RBRACE] = ACTIONS(279),
    [aux_sym_future_token1] = ACTIONS(279),
    [aux_sym_casting_token1] = ACTIONS(279),
    [aux_sym_property_token1] = ACTIONS(281),
    [aux_sym_identifier_token1] = ACTIONS(281),
    [aux_sym_duration_token1] = ACTIONS(281),
    [aux_sym_constant_token1] = ACTIONS(279),
    [aux_sym_number_token1] = ACTIONS(281),
    [aux_sym_record_token1] = ACTIONS(279),
    [aux_sym_record_token2] = ACTIONS(279),
    [anon_sym_USE] = ACTIONS(281),
    [anon_sym_NS] = ACTIONS(281),
    [anon_sym_DB] = ACTIONS(281),
    [anon_sym_LET] = ACTIONS(281),
    [anon_sym_BEGIN] = ACTIONS(281),
    [anon_sym_TRANSACTION] = ACTIONS(281),
    [anon_sym_CANCEL] = ACTIONS(281),
    [anon_sym_COMMIT] = ACTIONS(281),
    [anon_sym_IF] = ACTIONS(281),
    [anon_sym_ELSE] = ACTIONS(281),
    [anon_sym_THEN] = ACTIONS(281),
    [anon_sym_END] = ACTIONS(281),
    [anon_sym_SELECT] = ACTIONS(281),
    [anon_sym_FROM] = ACTIONS(281),
    [anon_sym_WHERE] = ACTIONS(281),
    [anon_sym_SPLIT] = ACTIONS(281),
    [anon_sym_AT] = ACTIONS(281),
    [anon_sym_GROUP] = ACTIONS(281),
    [anon_sym_BY] = ACTIONS(281),
    [anon_sym_ORDER] = ACTIONS(281),
    [anon_sym_COLLATE] = ACTIONS(281),
    [anon_sym_NUMERIC] = ACTIONS(281),
    [anon_sym_ASC] = ACTIONS(281),
    [anon_sym_DESC] = ACTIONS(281),
    [anon_sym_LIMIT] = ACTIONS(281),
    [anon_sym_START] = ACTIONS(281),
    [anon_sym_FETCH] = ACTIONS(281),
    [anon_sym_TIMEOUT] = ACTIONS(281),
    [anon_sym_PARALLEL] = ACTIONS(281),
    [anon_sym_INSERT] = ACTIONS(281),
    [anon_sym_IGNORE] = ACTIONS(281),
    [anon_sym_INTO] = ACTIONS(281),
    [anon_sym_VALUES] = ACTIONS(281),
    [anon_sym_ON] = ACTIONS(281),
    [anon_sym_DUPLICATE] = ACTIONS(281),
    [anon_sym_KEY] = ACTIONS(281),
    [anon_sym_UPDATE] = ACTIONS(281),
    [anon_sym_CREATE] = ACTIONS(281),
    [anon_sym_CONTENT] = ACTIONS(281),
    [anon_sym_SET] = ACTIONS(281),
    [anon_sym_RETURN] = ACTIONS(281),
    [anon_sym_BEFORE] = ACTIONS(281),
    [anon_sym_AFTER] = ACTIONS(281),
    [anon_sym_DIFF] = ACTIONS(281),
    [anon_sym_MERGE] = ACTIONS(281),
    [anon_sym_PATCH] = ACTIONS(281),
    [anon_sym_RELATE] = ACTIONS(281),
    [anon_sym_DELETE] = ACTIONS(281),
    [anon_sym_DEFINE] = ACTIONS(281),
    [anon_sym_NAMESPACE] = ACTIONS(281),
    [anon_sym_DATABASE] = ACTIONS(281),
    [anon_sym_LOGIN] = ACTIONS(281),
    [anon_sym_PASSWORD] = ACTIONS(281),
    [anon_sym_PASSHASH] = ACTIONS(281),
    [anon_sym_TOKEN] = ACTIONS(281),
    [anon_sym_SCOPE] = ACTIONS(281),
    [anon_sym_TYPE] = ACTIONS(281),
    [anon_sym_VALUE] = ACTIONS(281),
    [anon_sym_SESSION] = ACTIONS(281),
    [anon_sym_SIGNUP] = ACTIONS(281),
    [anon_sym_SIGNIN] = ACTIONS(281),
    [anon_sym_TABLE] = ACTIONS(281),
    [anon_sym_DROP] = ACTIONS(281),
    [anon_sym_SCHEMAFULL] = ACTIONS(281),
    [anon_sym_SCHEMALESS] = ACTIONS(281),
    [anon_sym_AS] = ACTIONS(281),
    [anon_sym_PERMISSIONS] = ACTIONS(281),
    [anon_sym_FULL] = ACTIONS(281),
    [anon_sym_FOR] = ACTIONS(281),
    [anon_sym_select] = ACTIONS(281),
    [anon_sym_update] = ACTIONS(281),
    [anon_sym_create] = ACTIONS(281),
    [anon_sym_delete] = ACTIONS(281),
    [anon_sym_EVENT] = ACTIONS(281),
    [anon_sym_WHEN] = ACTIONS(281),
    [anon_sym_ASSERT] = ACTIONS(281),
    [anon_sym_INDEX] = ACTIONS(281),
    [anon_sym_FIELDS] = ACTIONS(281),
    [anon_sym_COLUMNS] = ACTIONS(281),
    [anon_sym_UNIQUE] = ACTIONS(281),
    [anon_sym_REMOVE] = ACTIONS(281),
    [anon_sym_SLEEP] = ACTIONS(281),
    [anon_sym_INFO] = ACTIONS(281),
    [anon_sym_KV] = ACTIONS(281),
    [anon_sym_FUNCTION] = ACTIONS(281),
    [anon_sym_PARAM] = ACTIONS(281),
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
    [anon_sym_DASH_GT] = ACTIONS(279),
    [anon_sym_LT_DASH] = ACTIONS(279),
    [anon_sym_COMMA] = ACTIONS(279),
    [anon_sym_SEMI] = ACTIONS(279),
    [anon_sym_COLON] = ACTIONS(279),
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
    [anon_sym_LBRACE] = ACTIONS(283),
    [anon_sym_RBRACE] = ACTIONS(283),
    [aux_sym_future_token1] = ACTIONS(283),
    [aux_sym_casting_token1] = ACTIONS(283),
    [aux_sym_property_token1] = ACTIONS(285),
    [aux_sym_identifier_token1] = ACTIONS(285),
    [aux_sym_duration_token1] = ACTIONS(285),
    [aux_sym_constant_token1] = ACTIONS(283),
    [aux_sym_number_token1] = ACTIONS(285),
    [aux_sym_record_token1] = ACTIONS(283),
    [aux_sym_record_token2] = ACTIONS(283),
    [anon_sym_USE] = ACTIONS(285),
    [anon_sym_NS] = ACTIONS(285),
    [anon_sym_DB] = ACTIONS(285),
    [anon_sym_LET] = ACTIONS(285),
    [anon_sym_BEGIN] = ACTIONS(285),
    [anon_sym_TRANSACTION] = ACTIONS(285),
    [anon_sym_CANCEL] = ACTIONS(285),
    [anon_sym_COMMIT] = ACTIONS(285),
    [anon_sym_IF] = ACTIONS(285),
    [anon_sym_ELSE] = ACTIONS(285),
    [anon_sym_THEN] = ACTIONS(285),
    [anon_sym_END] = ACTIONS(285),
    [anon_sym_SELECT] = ACTIONS(285),
    [anon_sym_FROM] = ACTIONS(285),
    [anon_sym_WHERE] = ACTIONS(285),
    [anon_sym_SPLIT] = ACTIONS(285),
    [anon_sym_AT] = ACTIONS(285),
    [anon_sym_GROUP] = ACTIONS(285),
    [anon_sym_BY] = ACTIONS(285),
    [anon_sym_ORDER] = ACTIONS(285),
    [anon_sym_COLLATE] = ACTIONS(285),
    [anon_sym_NUMERIC] = ACTIONS(285),
    [anon_sym_ASC] = ACTIONS(285),
    [anon_sym_DESC] = ACTIONS(285),
    [anon_sym_LIMIT] = ACTIONS(285),
    [anon_sym_START] = ACTIONS(285),
    [anon_sym_FETCH] = ACTIONS(285),
    [anon_sym_TIMEOUT] = ACTIONS(285),
    [anon_sym_PARALLEL] = ACTIONS(285),
    [anon_sym_INSERT] = ACTIONS(285),
    [anon_sym_IGNORE] = ACTIONS(285),
    [anon_sym_INTO] = ACTIONS(285),
    [anon_sym_VALUES] = ACTIONS(285),
    [anon_sym_ON] = ACTIONS(285),
    [anon_sym_DUPLICATE] = ACTIONS(285),
    [anon_sym_KEY] = ACTIONS(285),
    [anon_sym_UPDATE] = ACTIONS(285),
    [anon_sym_CREATE] = ACTIONS(285),
    [anon_sym_CONTENT] = ACTIONS(285),
    [anon_sym_SET] = ACTIONS(285),
    [anon_sym_RETURN] = ACTIONS(285),
    [anon_sym_BEFORE] = ACTIONS(285),
    [anon_sym_AFTER] = ACTIONS(285),
    [anon_sym_DIFF] = ACTIONS(285),
    [anon_sym_MERGE] = ACTIONS(285),
    [anon_sym_PATCH] = ACTIONS(285),
    [anon_sym_RELATE] = ACTIONS(285),
    [anon_sym_DELETE] = ACTIONS(285),
    [anon_sym_DEFINE] = ACTIONS(285),
    [anon_sym_NAMESPACE] = ACTIONS(285),
    [anon_sym_DATABASE] = ACTIONS(285),
    [anon_sym_LOGIN] = ACTIONS(285),
    [anon_sym_PASSWORD] = ACTIONS(285),
    [anon_sym_PASSHASH] = ACTIONS(285),
    [anon_sym_TOKEN] = ACTIONS(285),
    [anon_sym_SCOPE] = ACTIONS(285),
    [anon_sym_TYPE] = ACTIONS(285),
    [anon_sym_VALUE] = ACTIONS(285),
    [anon_sym_SESSION] = ACTIONS(285),
    [anon_sym_SIGNUP] = ACTIONS(285),
    [anon_sym_SIGNIN] = ACTIONS(285),
    [anon_sym_TABLE] = ACTIONS(285),
    [anon_sym_DROP] = ACTIONS(285),
    [anon_sym_SCHEMAFULL] = ACTIONS(285),
    [anon_sym_SCHEMALESS] = ACTIONS(285),
    [anon_sym_AS] = ACTIONS(285),
    [anon_sym_PERMISSIONS] = ACTIONS(285),
    [anon_sym_FULL] = ACTIONS(285),
    [anon_sym_FOR] = ACTIONS(285),
    [anon_sym_select] = ACTIONS(285),
    [anon_sym_update] = ACTIONS(285),
    [anon_sym_create] = ACTIONS(285),
    [anon_sym_delete] = ACTIONS(285),
    [anon_sym_EVENT] = ACTIONS(285),
    [anon_sym_WHEN] = ACTIONS(285),
    [anon_sym_ASSERT] = ACTIONS(285),
    [anon_sym_INDEX] = ACTIONS(285),
    [anon_sym_FIELDS] = ACTIONS(285),
    [anon_sym_COLUMNS] = ACTIONS(285),
    [anon_sym_UNIQUE] = ACTIONS(285),
    [anon_sym_REMOVE] = ACTIONS(285),
    [anon_sym_SLEEP] = ACTIONS(285),
    [anon_sym_INFO] = ACTIONS(285),
    [anon_sym_KV] = ACTIONS(285),
    [anon_sym_FUNCTION] = ACTIONS(285),
    [anon_sym_PARAM] = ACTIONS(285),
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
    [anon_sym_DASH_GT] = ACTIONS(283),
    [anon_sym_LT_DASH] = ACTIONS(283),
    [anon_sym_COMMA] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(283),
    [anon_sym_COLON] = ACTIONS(283),
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
    [anon_sym_LBRACE] = ACTIONS(287),
    [anon_sym_RBRACE] = ACTIONS(287),
    [aux_sym_future_token1] = ACTIONS(287),
    [aux_sym_casting_token1] = ACTIONS(287),
    [aux_sym_property_token1] = ACTIONS(289),
    [aux_sym_identifier_token1] = ACTIONS(289),
    [aux_sym_duration_token1] = ACTIONS(289),
    [aux_sym_constant_token1] = ACTIONS(287),
    [aux_sym_number_token1] = ACTIONS(289),
    [aux_sym_record_token1] = ACTIONS(287),
    [aux_sym_record_token2] = ACTIONS(287),
    [anon_sym_USE] = ACTIONS(289),
    [anon_sym_NS] = ACTIONS(289),
    [anon_sym_DB] = ACTIONS(289),
    [anon_sym_LET] = ACTIONS(289),
    [anon_sym_BEGIN] = ACTIONS(289),
    [anon_sym_TRANSACTION] = ACTIONS(289),
    [anon_sym_CANCEL] = ACTIONS(289),
    [anon_sym_COMMIT] = ACTIONS(289),
    [anon_sym_IF] = ACTIONS(289),
    [anon_sym_ELSE] = ACTIONS(289),
    [anon_sym_THEN] = ACTIONS(289),
    [anon_sym_END] = ACTIONS(289),
    [anon_sym_SELECT] = ACTIONS(289),
    [anon_sym_FROM] = ACTIONS(289),
    [anon_sym_WHERE] = ACTIONS(289),
    [anon_sym_SPLIT] = ACTIONS(289),
    [anon_sym_AT] = ACTIONS(289),
    [anon_sym_GROUP] = ACTIONS(289),
    [anon_sym_BY] = ACTIONS(289),
    [anon_sym_ORDER] = ACTIONS(289),
    [anon_sym_COLLATE] = ACTIONS(289),
    [anon_sym_NUMERIC] = ACTIONS(289),
    [anon_sym_ASC] = ACTIONS(289),
    [anon_sym_DESC] = ACTIONS(289),
    [anon_sym_LIMIT] = ACTIONS(289),
    [anon_sym_START] = ACTIONS(289),
    [anon_sym_FETCH] = ACTIONS(289),
    [anon_sym_TIMEOUT] = ACTIONS(289),
    [anon_sym_PARALLEL] = ACTIONS(289),
    [anon_sym_INSERT] = ACTIONS(289),
    [anon_sym_IGNORE] = ACTIONS(289),
    [anon_sym_INTO] = ACTIONS(289),
    [anon_sym_VALUES] = ACTIONS(289),
    [anon_sym_ON] = ACTIONS(289),
    [anon_sym_DUPLICATE] = ACTIONS(289),
    [anon_sym_KEY] = ACTIONS(289),
    [anon_sym_UPDATE] = ACTIONS(289),
    [anon_sym_CREATE] = ACTIONS(289),
    [anon_sym_CONTENT] = ACTIONS(289),
    [anon_sym_SET] = ACTIONS(289),
    [anon_sym_RETURN] = ACTIONS(289),
    [anon_sym_BEFORE] = ACTIONS(289),
    [anon_sym_AFTER] = ACTIONS(289),
    [anon_sym_DIFF] = ACTIONS(289),
    [anon_sym_MERGE] = ACTIONS(289),
    [anon_sym_PATCH] = ACTIONS(289),
    [anon_sym_RELATE] = ACTIONS(289),
    [anon_sym_DELETE] = ACTIONS(289),
    [anon_sym_DEFINE] = ACTIONS(289),
    [anon_sym_NAMESPACE] = ACTIONS(289),
    [anon_sym_DATABASE] = ACTIONS(289),
    [anon_sym_LOGIN] = ACTIONS(289),
    [anon_sym_PASSWORD] = ACTIONS(289),
    [anon_sym_PASSHASH] = ACTIONS(289),
    [anon_sym_TOKEN] = ACTIONS(289),
    [anon_sym_SCOPE] = ACTIONS(289),
    [anon_sym_TYPE] = ACTIONS(289),
    [anon_sym_VALUE] = ACTIONS(289),
    [anon_sym_SESSION] = ACTIONS(289),
    [anon_sym_SIGNUP] = ACTIONS(289),
    [anon_sym_SIGNIN] = ACTIONS(289),
    [anon_sym_TABLE] = ACTIONS(289),
    [anon_sym_DROP] = ACTIONS(289),
    [anon_sym_SCHEMAFULL] = ACTIONS(289),
    [anon_sym_SCHEMALESS] = ACTIONS(289),
    [anon_sym_AS] = ACTIONS(289),
    [anon_sym_PERMISSIONS] = ACTIONS(289),
    [anon_sym_FULL] = ACTIONS(289),
    [anon_sym_FOR] = ACTIONS(289),
    [anon_sym_select] = ACTIONS(289),
    [anon_sym_update] = ACTIONS(289),
    [anon_sym_create] = ACTIONS(289),
    [anon_sym_delete] = ACTIONS(289),
    [anon_sym_EVENT] = ACTIONS(289),
    [anon_sym_WHEN] = ACTIONS(289),
    [anon_sym_ASSERT] = ACTIONS(289),
    [anon_sym_INDEX] = ACTIONS(289),
    [anon_sym_FIELDS] = ACTIONS(289),
    [anon_sym_COLUMNS] = ACTIONS(289),
    [anon_sym_UNIQUE] = ACTIONS(289),
    [anon_sym_REMOVE] = ACTIONS(289),
    [anon_sym_SLEEP] = ACTIONS(289),
    [anon_sym_INFO] = ACTIONS(289),
    [anon_sym_KV] = ACTIONS(289),
    [anon_sym_FUNCTION] = ACTIONS(289),
    [anon_sym_PARAM] = ACTIONS(289),
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
    [anon_sym_DASH_GT] = ACTIONS(287),
    [anon_sym_LT_DASH] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(287),
    [anon_sym_SEMI] = ACTIONS(287),
    [anon_sym_COLON] = ACTIONS(287),
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
    [anon_sym_LBRACE] = ACTIONS(291),
    [anon_sym_RBRACE] = ACTIONS(291),
    [aux_sym_future_token1] = ACTIONS(291),
    [aux_sym_casting_token1] = ACTIONS(291),
    [aux_sym_property_token1] = ACTIONS(293),
    [aux_sym_identifier_token1] = ACTIONS(293),
    [aux_sym_duration_token1] = ACTIONS(293),
    [aux_sym_constant_token1] = ACTIONS(291),
    [aux_sym_number_token1] = ACTIONS(293),
    [aux_sym_record_token1] = ACTIONS(291),
    [aux_sym_record_token2] = ACTIONS(291),
    [anon_sym_USE] = ACTIONS(293),
    [anon_sym_NS] = ACTIONS(293),
    [anon_sym_DB] = ACTIONS(293),
    [anon_sym_LET] = ACTIONS(293),
    [anon_sym_BEGIN] = ACTIONS(293),
    [anon_sym_TRANSACTION] = ACTIONS(293),
    [anon_sym_CANCEL] = ACTIONS(293),
    [anon_sym_COMMIT] = ACTIONS(293),
    [anon_sym_IF] = ACTIONS(293),
    [anon_sym_ELSE] = ACTIONS(293),
    [anon_sym_THEN] = ACTIONS(293),
    [anon_sym_END] = ACTIONS(293),
    [anon_sym_SELECT] = ACTIONS(293),
    [anon_sym_FROM] = ACTIONS(293),
    [anon_sym_WHERE] = ACTIONS(293),
    [anon_sym_SPLIT] = ACTIONS(293),
    [anon_sym_AT] = ACTIONS(293),
    [anon_sym_GROUP] = ACTIONS(293),
    [anon_sym_BY] = ACTIONS(293),
    [anon_sym_ORDER] = ACTIONS(293),
    [anon_sym_COLLATE] = ACTIONS(293),
    [anon_sym_NUMERIC] = ACTIONS(293),
    [anon_sym_ASC] = ACTIONS(293),
    [anon_sym_DESC] = ACTIONS(293),
    [anon_sym_LIMIT] = ACTIONS(293),
    [anon_sym_START] = ACTIONS(293),
    [anon_sym_FETCH] = ACTIONS(293),
    [anon_sym_TIMEOUT] = ACTIONS(293),
    [anon_sym_PARALLEL] = ACTIONS(293),
    [anon_sym_INSERT] = ACTIONS(293),
    [anon_sym_IGNORE] = ACTIONS(293),
    [anon_sym_INTO] = ACTIONS(293),
    [anon_sym_VALUES] = ACTIONS(293),
    [anon_sym_ON] = ACTIONS(293),
    [anon_sym_DUPLICATE] = ACTIONS(293),
    [anon_sym_KEY] = ACTIONS(293),
    [anon_sym_UPDATE] = ACTIONS(293),
    [anon_sym_CREATE] = ACTIONS(293),
    [anon_sym_CONTENT] = ACTIONS(293),
    [anon_sym_SET] = ACTIONS(293),
    [anon_sym_RETURN] = ACTIONS(293),
    [anon_sym_BEFORE] = ACTIONS(293),
    [anon_sym_AFTER] = ACTIONS(293),
    [anon_sym_DIFF] = ACTIONS(293),
    [anon_sym_MERGE] = ACTIONS(293),
    [anon_sym_PATCH] = ACTIONS(293),
    [anon_sym_RELATE] = ACTIONS(293),
    [anon_sym_DELETE] = ACTIONS(293),
    [anon_sym_DEFINE] = ACTIONS(293),
    [anon_sym_NAMESPACE] = ACTIONS(293),
    [anon_sym_DATABASE] = ACTIONS(293),
    [anon_sym_LOGIN] = ACTIONS(293),
    [anon_sym_PASSWORD] = ACTIONS(293),
    [anon_sym_PASSHASH] = ACTIONS(293),
    [anon_sym_TOKEN] = ACTIONS(293),
    [anon_sym_SCOPE] = ACTIONS(293),
    [anon_sym_TYPE] = ACTIONS(293),
    [anon_sym_VALUE] = ACTIONS(293),
    [anon_sym_SESSION] = ACTIONS(293),
    [anon_sym_SIGNUP] = ACTIONS(293),
    [anon_sym_SIGNIN] = ACTIONS(293),
    [anon_sym_TABLE] = ACTIONS(293),
    [anon_sym_DROP] = ACTIONS(293),
    [anon_sym_SCHEMAFULL] = ACTIONS(293),
    [anon_sym_SCHEMALESS] = ACTIONS(293),
    [anon_sym_AS] = ACTIONS(293),
    [anon_sym_PERMISSIONS] = ACTIONS(293),
    [anon_sym_FULL] = ACTIONS(293),
    [anon_sym_FOR] = ACTIONS(293),
    [anon_sym_select] = ACTIONS(293),
    [anon_sym_update] = ACTIONS(293),
    [anon_sym_create] = ACTIONS(293),
    [anon_sym_delete] = ACTIONS(293),
    [anon_sym_EVENT] = ACTIONS(293),
    [anon_sym_WHEN] = ACTIONS(293),
    [anon_sym_ASSERT] = ACTIONS(293),
    [anon_sym_INDEX] = ACTIONS(293),
    [anon_sym_FIELDS] = ACTIONS(293),
    [anon_sym_COLUMNS] = ACTIONS(293),
    [anon_sym_UNIQUE] = ACTIONS(293),
    [anon_sym_REMOVE] = ACTIONS(293),
    [anon_sym_SLEEP] = ACTIONS(293),
    [anon_sym_INFO] = ACTIONS(293),
    [anon_sym_KV] = ACTIONS(293),
    [anon_sym_FUNCTION] = ACTIONS(293),
    [anon_sym_PARAM] = ACTIONS(293),
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
    [anon_sym_DASH_GT] = ACTIONS(291),
    [anon_sym_LT_DASH] = ACTIONS(291),
    [anon_sym_COMMA] = ACTIONS(291),
    [anon_sym_SEMI] = ACTIONS(291),
    [anon_sym_COLON] = ACTIONS(291),
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
    [anon_sym_LBRACE] = ACTIONS(295),
    [anon_sym_RBRACE] = ACTIONS(295),
    [aux_sym_future_token1] = ACTIONS(295),
    [aux_sym_casting_token1] = ACTIONS(295),
    [aux_sym_property_token1] = ACTIONS(297),
    [aux_sym_identifier_token1] = ACTIONS(297),
    [aux_sym_duration_token1] = ACTIONS(297),
    [aux_sym_constant_token1] = ACTIONS(295),
    [aux_sym_number_token1] = ACTIONS(297),
    [aux_sym_record_token1] = ACTIONS(295),
    [aux_sym_record_token2] = ACTIONS(295),
    [anon_sym_USE] = ACTIONS(297),
    [anon_sym_NS] = ACTIONS(297),
    [anon_sym_DB] = ACTIONS(297),
    [anon_sym_LET] = ACTIONS(297),
    [anon_sym_BEGIN] = ACTIONS(297),
    [anon_sym_TRANSACTION] = ACTIONS(297),
    [anon_sym_CANCEL] = ACTIONS(297),
    [anon_sym_COMMIT] = ACTIONS(297),
    [anon_sym_IF] = ACTIONS(297),
    [anon_sym_ELSE] = ACTIONS(297),
    [anon_sym_THEN] = ACTIONS(297),
    [anon_sym_END] = ACTIONS(297),
    [anon_sym_SELECT] = ACTIONS(297),
    [anon_sym_FROM] = ACTIONS(297),
    [anon_sym_WHERE] = ACTIONS(297),
    [anon_sym_SPLIT] = ACTIONS(297),
    [anon_sym_AT] = ACTIONS(297),
    [anon_sym_GROUP] = ACTIONS(297),
    [anon_sym_BY] = ACTIONS(297),
    [anon_sym_ORDER] = ACTIONS(297),
    [anon_sym_COLLATE] = ACTIONS(297),
    [anon_sym_NUMERIC] = ACTIONS(297),
    [anon_sym_ASC] = ACTIONS(297),
    [anon_sym_DESC] = ACTIONS(297),
    [anon_sym_LIMIT] = ACTIONS(297),
    [anon_sym_START] = ACTIONS(297),
    [anon_sym_FETCH] = ACTIONS(297),
    [anon_sym_TIMEOUT] = ACTIONS(297),
    [anon_sym_PARALLEL] = ACTIONS(297),
    [anon_sym_INSERT] = ACTIONS(297),
    [anon_sym_IGNORE] = ACTIONS(297),
    [anon_sym_INTO] = ACTIONS(297),
    [anon_sym_VALUES] = ACTIONS(297),
    [anon_sym_ON] = ACTIONS(297),
    [anon_sym_DUPLICATE] = ACTIONS(297),
    [anon_sym_KEY] = ACTIONS(297),
    [anon_sym_UPDATE] = ACTIONS(297),
    [anon_sym_CREATE] = ACTIONS(297),
    [anon_sym_CONTENT] = ACTIONS(297),
    [anon_sym_SET] = ACTIONS(297),
    [anon_sym_RETURN] = ACTIONS(297),
    [anon_sym_BEFORE] = ACTIONS(297),
    [anon_sym_AFTER] = ACTIONS(297),
    [anon_sym_DIFF] = ACTIONS(297),
    [anon_sym_MERGE] = ACTIONS(297),
    [anon_sym_PATCH] = ACTIONS(297),
    [anon_sym_RELATE] = ACTIONS(297),
    [anon_sym_DELETE] = ACTIONS(297),
    [anon_sym_DEFINE] = ACTIONS(297),
    [anon_sym_NAMESPACE] = ACTIONS(297),
    [anon_sym_DATABASE] = ACTIONS(297),
    [anon_sym_LOGIN] = ACTIONS(297),
    [anon_sym_PASSWORD] = ACTIONS(297),
    [anon_sym_PASSHASH] = ACTIONS(297),
    [anon_sym_TOKEN] = ACTIONS(297),
    [anon_sym_SCOPE] = ACTIONS(297),
    [anon_sym_TYPE] = ACTIONS(297),
    [anon_sym_VALUE] = ACTIONS(297),
    [anon_sym_SESSION] = ACTIONS(297),
    [anon_sym_SIGNUP] = ACTIONS(297),
    [anon_sym_SIGNIN] = ACTIONS(297),
    [anon_sym_TABLE] = ACTIONS(297),
    [anon_sym_DROP] = ACTIONS(297),
    [anon_sym_SCHEMAFULL] = ACTIONS(297),
    [anon_sym_SCHEMALESS] = ACTIONS(297),
    [anon_sym_AS] = ACTIONS(297),
    [anon_sym_PERMISSIONS] = ACTIONS(297),
    [anon_sym_FULL] = ACTIONS(297),
    [anon_sym_FOR] = ACTIONS(297),
    [anon_sym_select] = ACTIONS(297),
    [anon_sym_update] = ACTIONS(297),
    [anon_sym_create] = ACTIONS(297),
    [anon_sym_delete] = ACTIONS(297),
    [anon_sym_EVENT] = ACTIONS(297),
    [anon_sym_WHEN] = ACTIONS(297),
    [anon_sym_ASSERT] = ACTIONS(297),
    [anon_sym_INDEX] = ACTIONS(297),
    [anon_sym_FIELDS] = ACTIONS(297),
    [anon_sym_COLUMNS] = ACTIONS(297),
    [anon_sym_UNIQUE] = ACTIONS(297),
    [anon_sym_REMOVE] = ACTIONS(297),
    [anon_sym_SLEEP] = ACTIONS(297),
    [anon_sym_INFO] = ACTIONS(297),
    [anon_sym_KV] = ACTIONS(297),
    [anon_sym_FUNCTION] = ACTIONS(297),
    [anon_sym_PARAM] = ACTIONS(297),
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
    [anon_sym_DASH_GT] = ACTIONS(295),
    [anon_sym_LT_DASH] = ACTIONS(295),
    [anon_sym_COMMA] = ACTIONS(295),
    [anon_sym_SEMI] = ACTIONS(295),
    [anon_sym_COLON] = ACTIONS(295),
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
    [anon_sym_LBRACE] = ACTIONS(299),
    [anon_sym_RBRACE] = ACTIONS(299),
    [aux_sym_future_token1] = ACTIONS(299),
    [aux_sym_casting_token1] = ACTIONS(299),
    [aux_sym_property_token1] = ACTIONS(301),
    [aux_sym_identifier_token1] = ACTIONS(301),
    [aux_sym_duration_token1] = ACTIONS(301),
    [aux_sym_constant_token1] = ACTIONS(299),
    [aux_sym_number_token1] = ACTIONS(301),
    [aux_sym_record_token1] = ACTIONS(299),
    [aux_sym_record_token2] = ACTIONS(299),
    [anon_sym_USE] = ACTIONS(301),
    [anon_sym_NS] = ACTIONS(301),
    [anon_sym_DB] = ACTIONS(301),
    [anon_sym_LET] = ACTIONS(301),
    [anon_sym_BEGIN] = ACTIONS(301),
    [anon_sym_TRANSACTION] = ACTIONS(301),
    [anon_sym_CANCEL] = ACTIONS(301),
    [anon_sym_COMMIT] = ACTIONS(301),
    [anon_sym_IF] = ACTIONS(301),
    [anon_sym_ELSE] = ACTIONS(301),
    [anon_sym_THEN] = ACTIONS(301),
    [anon_sym_END] = ACTIONS(301),
    [anon_sym_SELECT] = ACTIONS(301),
    [anon_sym_FROM] = ACTIONS(301),
    [anon_sym_WHERE] = ACTIONS(301),
    [anon_sym_SPLIT] = ACTIONS(301),
    [anon_sym_AT] = ACTIONS(301),
    [anon_sym_GROUP] = ACTIONS(301),
    [anon_sym_BY] = ACTIONS(301),
    [anon_sym_ORDER] = ACTIONS(301),
    [anon_sym_COLLATE] = ACTIONS(301),
    [anon_sym_NUMERIC] = ACTIONS(301),
    [anon_sym_ASC] = ACTIONS(301),
    [anon_sym_DESC] = ACTIONS(301),
    [anon_sym_LIMIT] = ACTIONS(301),
    [anon_sym_START] = ACTIONS(301),
    [anon_sym_FETCH] = ACTIONS(301),
    [anon_sym_TIMEOUT] = ACTIONS(301),
    [anon_sym_PARALLEL] = ACTIONS(301),
    [anon_sym_INSERT] = ACTIONS(301),
    [anon_sym_IGNORE] = ACTIONS(301),
    [anon_sym_INTO] = ACTIONS(301),
    [anon_sym_VALUES] = ACTIONS(301),
    [anon_sym_ON] = ACTIONS(301),
    [anon_sym_DUPLICATE] = ACTIONS(301),
    [anon_sym_KEY] = ACTIONS(301),
    [anon_sym_UPDATE] = ACTIONS(301),
    [anon_sym_CREATE] = ACTIONS(301),
    [anon_sym_CONTENT] = ACTIONS(301),
    [anon_sym_SET] = ACTIONS(301),
    [anon_sym_RETURN] = ACTIONS(301),
    [anon_sym_BEFORE] = ACTIONS(301),
    [anon_sym_AFTER] = ACTIONS(301),
    [anon_sym_DIFF] = ACTIONS(301),
    [anon_sym_MERGE] = ACTIONS(301),
    [anon_sym_PATCH] = ACTIONS(301),
    [anon_sym_RELATE] = ACTIONS(301),
    [anon_sym_DELETE] = ACTIONS(301),
    [anon_sym_DEFINE] = ACTIONS(301),
    [anon_sym_NAMESPACE] = ACTIONS(301),
    [anon_sym_DATABASE] = ACTIONS(301),
    [anon_sym_LOGIN] = ACTIONS(301),
    [anon_sym_PASSWORD] = ACTIONS(301),
    [anon_sym_PASSHASH] = ACTIONS(301),
    [anon_sym_TOKEN] = ACTIONS(301),
    [anon_sym_SCOPE] = ACTIONS(301),
    [anon_sym_TYPE] = ACTIONS(301),
    [anon_sym_VALUE] = ACTIONS(301),
    [anon_sym_SESSION] = ACTIONS(301),
    [anon_sym_SIGNUP] = ACTIONS(301),
    [anon_sym_SIGNIN] = ACTIONS(301),
    [anon_sym_TABLE] = ACTIONS(301),
    [anon_sym_DROP] = ACTIONS(301),
    [anon_sym_SCHEMAFULL] = ACTIONS(301),
    [anon_sym_SCHEMALESS] = ACTIONS(301),
    [anon_sym_AS] = ACTIONS(301),
    [anon_sym_PERMISSIONS] = ACTIONS(301),
    [anon_sym_FULL] = ACTIONS(301),
    [anon_sym_FOR] = ACTIONS(301),
    [anon_sym_select] = ACTIONS(301),
    [anon_sym_update] = ACTIONS(301),
    [anon_sym_create] = ACTIONS(301),
    [anon_sym_delete] = ACTIONS(301),
    [anon_sym_EVENT] = ACTIONS(301),
    [anon_sym_WHEN] = ACTIONS(301),
    [anon_sym_ASSERT] = ACTIONS(301),
    [anon_sym_INDEX] = ACTIONS(301),
    [anon_sym_FIELDS] = ACTIONS(301),
    [anon_sym_COLUMNS] = ACTIONS(301),
    [anon_sym_UNIQUE] = ACTIONS(301),
    [anon_sym_REMOVE] = ACTIONS(301),
    [anon_sym_SLEEP] = ACTIONS(301),
    [anon_sym_INFO] = ACTIONS(301),
    [anon_sym_KV] = ACTIONS(301),
    [anon_sym_FUNCTION] = ACTIONS(301),
    [anon_sym_PARAM] = ACTIONS(301),
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
    [anon_sym_DASH_GT] = ACTIONS(299),
    [anon_sym_LT_DASH] = ACTIONS(299),
    [anon_sym_COMMA] = ACTIONS(299),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_COLON] = ACTIONS(299),
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
    [anon_sym_LBRACE] = ACTIONS(303),
    [anon_sym_RBRACE] = ACTIONS(303),
    [aux_sym_future_token1] = ACTIONS(303),
    [aux_sym_casting_token1] = ACTIONS(303),
    [aux_sym_property_token1] = ACTIONS(305),
    [aux_sym_identifier_token1] = ACTIONS(305),
    [aux_sym_duration_token1] = ACTIONS(305),
    [aux_sym_constant_token1] = ACTIONS(303),
    [aux_sym_number_token1] = ACTIONS(305),
    [aux_sym_record_token1] = ACTIONS(303),
    [aux_sym_record_token2] = ACTIONS(303),
    [anon_sym_USE] = ACTIONS(305),
    [anon_sym_NS] = ACTIONS(305),
    [anon_sym_DB] = ACTIONS(305),
    [anon_sym_LET] = ACTIONS(305),
    [anon_sym_BEGIN] = ACTIONS(305),
    [anon_sym_TRANSACTION] = ACTIONS(305),
    [anon_sym_CANCEL] = ACTIONS(305),
    [anon_sym_COMMIT] = ACTIONS(305),
    [anon_sym_IF] = ACTIONS(305),
    [anon_sym_ELSE] = ACTIONS(305),
    [anon_sym_THEN] = ACTIONS(305),
    [anon_sym_END] = ACTIONS(305),
    [anon_sym_SELECT] = ACTIONS(305),
    [anon_sym_FROM] = ACTIONS(305),
    [anon_sym_WHERE] = ACTIONS(305),
    [anon_sym_SPLIT] = ACTIONS(305),
    [anon_sym_AT] = ACTIONS(305),
    [anon_sym_GROUP] = ACTIONS(305),
    [anon_sym_BY] = ACTIONS(305),
    [anon_sym_ORDER] = ACTIONS(305),
    [anon_sym_COLLATE] = ACTIONS(305),
    [anon_sym_NUMERIC] = ACTIONS(305),
    [anon_sym_ASC] = ACTIONS(305),
    [anon_sym_DESC] = ACTIONS(305),
    [anon_sym_LIMIT] = ACTIONS(305),
    [anon_sym_START] = ACTIONS(305),
    [anon_sym_FETCH] = ACTIONS(305),
    [anon_sym_TIMEOUT] = ACTIONS(305),
    [anon_sym_PARALLEL] = ACTIONS(305),
    [anon_sym_INSERT] = ACTIONS(305),
    [anon_sym_IGNORE] = ACTIONS(305),
    [anon_sym_INTO] = ACTIONS(305),
    [anon_sym_VALUES] = ACTIONS(305),
    [anon_sym_ON] = ACTIONS(305),
    [anon_sym_DUPLICATE] = ACTIONS(305),
    [anon_sym_KEY] = ACTIONS(305),
    [anon_sym_UPDATE] = ACTIONS(305),
    [anon_sym_CREATE] = ACTIONS(305),
    [anon_sym_CONTENT] = ACTIONS(305),
    [anon_sym_SET] = ACTIONS(305),
    [anon_sym_RETURN] = ACTIONS(305),
    [anon_sym_BEFORE] = ACTIONS(305),
    [anon_sym_AFTER] = ACTIONS(305),
    [anon_sym_DIFF] = ACTIONS(305),
    [anon_sym_MERGE] = ACTIONS(305),
    [anon_sym_PATCH] = ACTIONS(305),
    [anon_sym_RELATE] = ACTIONS(305),
    [anon_sym_DELETE] = ACTIONS(305),
    [anon_sym_DEFINE] = ACTIONS(305),
    [anon_sym_NAMESPACE] = ACTIONS(305),
    [anon_sym_DATABASE] = ACTIONS(305),
    [anon_sym_LOGIN] = ACTIONS(305),
    [anon_sym_PASSWORD] = ACTIONS(305),
    [anon_sym_PASSHASH] = ACTIONS(305),
    [anon_sym_TOKEN] = ACTIONS(305),
    [anon_sym_SCOPE] = ACTIONS(305),
    [anon_sym_TYPE] = ACTIONS(305),
    [anon_sym_VALUE] = ACTIONS(305),
    [anon_sym_SESSION] = ACTIONS(305),
    [anon_sym_SIGNUP] = ACTIONS(305),
    [anon_sym_SIGNIN] = ACTIONS(305),
    [anon_sym_TABLE] = ACTIONS(305),
    [anon_sym_DROP] = ACTIONS(305),
    [anon_sym_SCHEMAFULL] = ACTIONS(305),
    [anon_sym_SCHEMALESS] = ACTIONS(305),
    [anon_sym_AS] = ACTIONS(305),
    [anon_sym_PERMISSIONS] = ACTIONS(305),
    [anon_sym_FULL] = ACTIONS(305),
    [anon_sym_FOR] = ACTIONS(305),
    [anon_sym_select] = ACTIONS(305),
    [anon_sym_update] = ACTIONS(305),
    [anon_sym_create] = ACTIONS(305),
    [anon_sym_delete] = ACTIONS(305),
    [anon_sym_EVENT] = ACTIONS(305),
    [anon_sym_WHEN] = ACTIONS(305),
    [anon_sym_ASSERT] = ACTIONS(305),
    [anon_sym_INDEX] = ACTIONS(305),
    [anon_sym_FIELDS] = ACTIONS(305),
    [anon_sym_COLUMNS] = ACTIONS(305),
    [anon_sym_UNIQUE] = ACTIONS(305),
    [anon_sym_REMOVE] = ACTIONS(305),
    [anon_sym_SLEEP] = ACTIONS(305),
    [anon_sym_INFO] = ACTIONS(305),
    [anon_sym_KV] = ACTIONS(305),
    [anon_sym_FUNCTION] = ACTIONS(305),
    [anon_sym_PARAM] = ACTIONS(305),
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
    [anon_sym_DASH_GT] = ACTIONS(303),
    [anon_sym_LT_DASH] = ACTIONS(303),
    [anon_sym_COMMA] = ACTIONS(303),
    [anon_sym_SEMI] = ACTIONS(303),
    [anon_sym_COLON] = ACTIONS(303),
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
    [ts_builtin_sym_end] = ACTIONS(259),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(259),
    [anon_sym_LBRACE] = ACTIONS(259),
    [anon_sym_RBRACE] = ACTIONS(259),
    [aux_sym_future_token1] = ACTIONS(259),
    [aux_sym_casting_token1] = ACTIONS(259),
    [aux_sym_property_token1] = ACTIONS(261),
    [aux_sym_identifier_token1] = ACTIONS(261),
    [aux_sym_duration_token1] = ACTIONS(261),
    [aux_sym_constant_token1] = ACTIONS(259),
    [aux_sym_number_token1] = ACTIONS(261),
    [aux_sym_record_token1] = ACTIONS(259),
    [aux_sym_record_token2] = ACTIONS(259),
    [anon_sym_USE] = ACTIONS(261),
    [anon_sym_NS] = ACTIONS(261),
    [anon_sym_DB] = ACTIONS(261),
    [anon_sym_LET] = ACTIONS(261),
    [anon_sym_BEGIN] = ACTIONS(261),
    [anon_sym_TRANSACTION] = ACTIONS(261),
    [anon_sym_CANCEL] = ACTIONS(261),
    [anon_sym_COMMIT] = ACTIONS(261),
    [anon_sym_IF] = ACTIONS(261),
    [anon_sym_ELSE] = ACTIONS(261),
    [anon_sym_THEN] = ACTIONS(261),
    [anon_sym_END] = ACTIONS(261),
    [anon_sym_SELECT] = ACTIONS(261),
    [anon_sym_FROM] = ACTIONS(261),
    [anon_sym_WHERE] = ACTIONS(261),
    [anon_sym_SPLIT] = ACTIONS(261),
    [anon_sym_AT] = ACTIONS(261),
    [anon_sym_GROUP] = ACTIONS(261),
    [anon_sym_BY] = ACTIONS(261),
    [anon_sym_ORDER] = ACTIONS(261),
    [anon_sym_COLLATE] = ACTIONS(261),
    [anon_sym_NUMERIC] = ACTIONS(261),
    [anon_sym_ASC] = ACTIONS(261),
    [anon_sym_DESC] = ACTIONS(261),
    [anon_sym_LIMIT] = ACTIONS(261),
    [anon_sym_START] = ACTIONS(261),
    [anon_sym_FETCH] = ACTIONS(261),
    [anon_sym_TIMEOUT] = ACTIONS(261),
    [anon_sym_PARALLEL] = ACTIONS(261),
    [anon_sym_INSERT] = ACTIONS(261),
    [anon_sym_IGNORE] = ACTIONS(261),
    [anon_sym_INTO] = ACTIONS(261),
    [anon_sym_VALUES] = ACTIONS(261),
    [anon_sym_ON] = ACTIONS(261),
    [anon_sym_DUPLICATE] = ACTIONS(261),
    [anon_sym_KEY] = ACTIONS(261),
    [anon_sym_UPDATE] = ACTIONS(261),
    [anon_sym_CREATE] = ACTIONS(261),
    [anon_sym_CONTENT] = ACTIONS(261),
    [anon_sym_SET] = ACTIONS(261),
    [anon_sym_RETURN] = ACTIONS(261),
    [anon_sym_BEFORE] = ACTIONS(261),
    [anon_sym_AFTER] = ACTIONS(261),
    [anon_sym_DIFF] = ACTIONS(261),
    [anon_sym_MERGE] = ACTIONS(261),
    [anon_sym_PATCH] = ACTIONS(261),
    [anon_sym_RELATE] = ACTIONS(261),
    [anon_sym_DELETE] = ACTIONS(261),
    [anon_sym_DEFINE] = ACTIONS(261),
    [anon_sym_NAMESPACE] = ACTIONS(261),
    [anon_sym_DATABASE] = ACTIONS(261),
    [anon_sym_LOGIN] = ACTIONS(261),
    [anon_sym_PASSWORD] = ACTIONS(261),
    [anon_sym_PASSHASH] = ACTIONS(261),
    [anon_sym_TOKEN] = ACTIONS(261),
    [anon_sym_SCOPE] = ACTIONS(261),
    [anon_sym_TYPE] = ACTIONS(261),
    [anon_sym_VALUE] = ACTIONS(261),
    [anon_sym_SESSION] = ACTIONS(261),
    [anon_sym_SIGNUP] = ACTIONS(261),
    [anon_sym_SIGNIN] = ACTIONS(261),
    [anon_sym_TABLE] = ACTIONS(261),
    [anon_sym_DROP] = ACTIONS(261),
    [anon_sym_SCHEMAFULL] = ACTIONS(261),
    [anon_sym_SCHEMALESS] = ACTIONS(261),
    [anon_sym_AS] = ACTIONS(261),
    [anon_sym_PERMISSIONS] = ACTIONS(261),
    [anon_sym_FULL] = ACTIONS(261),
    [anon_sym_FOR] = ACTIONS(261),
    [anon_sym_select] = ACTIONS(261),
    [anon_sym_update] = ACTIONS(261),
    [anon_sym_create] = ACTIONS(261),
    [anon_sym_delete] = ACTIONS(261),
    [anon_sym_EVENT] = ACTIONS(261),
    [anon_sym_WHEN] = ACTIONS(261),
    [anon_sym_ASSERT] = ACTIONS(261),
    [anon_sym_INDEX] = ACTIONS(261),
    [anon_sym_FIELDS] = ACTIONS(261),
    [anon_sym_COLUMNS] = ACTIONS(261),
    [anon_sym_UNIQUE] = ACTIONS(261),
    [anon_sym_REMOVE] = ACTIONS(261),
    [anon_sym_SLEEP] = ACTIONS(261),
    [anon_sym_INFO] = ACTIONS(261),
    [anon_sym_KV] = ACTIONS(261),
    [anon_sym_FUNCTION] = ACTIONS(261),
    [anon_sym_PARAM] = ACTIONS(261),
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
    [anon_sym_DASH_GT] = ACTIONS(259),
    [anon_sym_LT_DASH] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(259),
    [anon_sym_SEMI] = ACTIONS(259),
    [anon_sym_COLON] = ACTIONS(259),
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
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(307),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(307),
    [anon_sym_LBRACE] = ACTIONS(307),
    [anon_sym_RBRACE] = ACTIONS(307),
    [aux_sym_future_token1] = ACTIONS(307),
    [aux_sym_casting_token1] = ACTIONS(307),
    [aux_sym_property_token1] = ACTIONS(309),
    [aux_sym_identifier_token1] = ACTIONS(309),
    [aux_sym_duration_token1] = ACTIONS(309),
    [aux_sym_constant_token1] = ACTIONS(307),
    [aux_sym_number_token1] = ACTIONS(309),
    [aux_sym_record_token1] = ACTIONS(307),
    [aux_sym_record_token2] = ACTIONS(307),
    [anon_sym_USE] = ACTIONS(309),
    [anon_sym_NS] = ACTIONS(309),
    [anon_sym_DB] = ACTIONS(309),
    [anon_sym_LET] = ACTIONS(309),
    [anon_sym_BEGIN] = ACTIONS(309),
    [anon_sym_TRANSACTION] = ACTIONS(309),
    [anon_sym_CANCEL] = ACTIONS(309),
    [anon_sym_COMMIT] = ACTIONS(309),
    [anon_sym_IF] = ACTIONS(309),
    [anon_sym_ELSE] = ACTIONS(309),
    [anon_sym_THEN] = ACTIONS(309),
    [anon_sym_END] = ACTIONS(309),
    [anon_sym_SELECT] = ACTIONS(309),
    [anon_sym_FROM] = ACTIONS(309),
    [anon_sym_WHERE] = ACTIONS(309),
    [anon_sym_SPLIT] = ACTIONS(309),
    [anon_sym_AT] = ACTIONS(309),
    [anon_sym_GROUP] = ACTIONS(309),
    [anon_sym_BY] = ACTIONS(309),
    [anon_sym_ORDER] = ACTIONS(309),
    [anon_sym_COLLATE] = ACTIONS(309),
    [anon_sym_NUMERIC] = ACTIONS(309),
    [anon_sym_ASC] = ACTIONS(309),
    [anon_sym_DESC] = ACTIONS(309),
    [anon_sym_LIMIT] = ACTIONS(309),
    [anon_sym_START] = ACTIONS(309),
    [anon_sym_FETCH] = ACTIONS(309),
    [anon_sym_TIMEOUT] = ACTIONS(309),
    [anon_sym_PARALLEL] = ACTIONS(309),
    [anon_sym_INSERT] = ACTIONS(309),
    [anon_sym_IGNORE] = ACTIONS(309),
    [anon_sym_INTO] = ACTIONS(309),
    [anon_sym_VALUES] = ACTIONS(309),
    [anon_sym_ON] = ACTIONS(309),
    [anon_sym_DUPLICATE] = ACTIONS(309),
    [anon_sym_KEY] = ACTIONS(309),
    [anon_sym_UPDATE] = ACTIONS(309),
    [anon_sym_CREATE] = ACTIONS(309),
    [anon_sym_CONTENT] = ACTIONS(309),
    [anon_sym_SET] = ACTIONS(309),
    [anon_sym_RETURN] = ACTIONS(309),
    [anon_sym_BEFORE] = ACTIONS(309),
    [anon_sym_AFTER] = ACTIONS(309),
    [anon_sym_DIFF] = ACTIONS(309),
    [anon_sym_MERGE] = ACTIONS(309),
    [anon_sym_PATCH] = ACTIONS(309),
    [anon_sym_RELATE] = ACTIONS(309),
    [anon_sym_DELETE] = ACTIONS(309),
    [anon_sym_DEFINE] = ACTIONS(309),
    [anon_sym_NAMESPACE] = ACTIONS(309),
    [anon_sym_DATABASE] = ACTIONS(309),
    [anon_sym_LOGIN] = ACTIONS(309),
    [anon_sym_PASSWORD] = ACTIONS(309),
    [anon_sym_PASSHASH] = ACTIONS(309),
    [anon_sym_TOKEN] = ACTIONS(309),
    [anon_sym_SCOPE] = ACTIONS(309),
    [anon_sym_TYPE] = ACTIONS(309),
    [anon_sym_VALUE] = ACTIONS(309),
    [anon_sym_SESSION] = ACTIONS(309),
    [anon_sym_SIGNUP] = ACTIONS(309),
    [anon_sym_SIGNIN] = ACTIONS(309),
    [anon_sym_TABLE] = ACTIONS(309),
    [anon_sym_DROP] = ACTIONS(309),
    [anon_sym_SCHEMAFULL] = ACTIONS(309),
    [anon_sym_SCHEMALESS] = ACTIONS(309),
    [anon_sym_AS] = ACTIONS(309),
    [anon_sym_PERMISSIONS] = ACTIONS(309),
    [anon_sym_FULL] = ACTIONS(309),
    [anon_sym_FOR] = ACTIONS(309),
    [anon_sym_select] = ACTIONS(309),
    [anon_sym_update] = ACTIONS(309),
    [anon_sym_create] = ACTIONS(309),
    [anon_sym_delete] = ACTIONS(309),
    [anon_sym_EVENT] = ACTIONS(309),
    [anon_sym_WHEN] = ACTIONS(309),
    [anon_sym_ASSERT] = ACTIONS(309),
    [anon_sym_INDEX] = ACTIONS(309),
    [anon_sym_FIELDS] = ACTIONS(309),
    [anon_sym_COLUMNS] = ACTIONS(309),
    [anon_sym_UNIQUE] = ACTIONS(309),
    [anon_sym_REMOVE] = ACTIONS(309),
    [anon_sym_SLEEP] = ACTIONS(309),
    [anon_sym_INFO] = ACTIONS(309),
    [anon_sym_KV] = ACTIONS(309),
    [anon_sym_FUNCTION] = ACTIONS(309),
    [anon_sym_PARAM] = ACTIONS(309),
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
    [anon_sym_DASH_GT] = ACTIONS(307),
    [anon_sym_LT_DASH] = ACTIONS(307),
    [anon_sym_COMMA] = ACTIONS(307),
    [anon_sym_SEMI] = ACTIONS(307),
    [anon_sym_COLON] = ACTIONS(307),
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
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(311),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(311),
    [anon_sym_LBRACE] = ACTIONS(311),
    [anon_sym_RBRACE] = ACTIONS(311),
    [aux_sym_future_token1] = ACTIONS(311),
    [aux_sym_casting_token1] = ACTIONS(311),
    [aux_sym_property_token1] = ACTIONS(313),
    [aux_sym_identifier_token1] = ACTIONS(313),
    [aux_sym_duration_token1] = ACTIONS(313),
    [aux_sym_constant_token1] = ACTIONS(311),
    [aux_sym_number_token1] = ACTIONS(313),
    [aux_sym_record_token1] = ACTIONS(311),
    [aux_sym_record_token2] = ACTIONS(311),
    [anon_sym_USE] = ACTIONS(313),
    [anon_sym_NS] = ACTIONS(313),
    [anon_sym_DB] = ACTIONS(313),
    [anon_sym_LET] = ACTIONS(313),
    [anon_sym_BEGIN] = ACTIONS(313),
    [anon_sym_TRANSACTION] = ACTIONS(313),
    [anon_sym_CANCEL] = ACTIONS(313),
    [anon_sym_COMMIT] = ACTIONS(313),
    [anon_sym_IF] = ACTIONS(313),
    [anon_sym_ELSE] = ACTIONS(313),
    [anon_sym_THEN] = ACTIONS(313),
    [anon_sym_END] = ACTIONS(313),
    [anon_sym_SELECT] = ACTIONS(313),
    [anon_sym_FROM] = ACTIONS(313),
    [anon_sym_WHERE] = ACTIONS(313),
    [anon_sym_SPLIT] = ACTIONS(313),
    [anon_sym_AT] = ACTIONS(313),
    [anon_sym_GROUP] = ACTIONS(313),
    [anon_sym_BY] = ACTIONS(313),
    [anon_sym_ORDER] = ACTIONS(313),
    [anon_sym_COLLATE] = ACTIONS(313),
    [anon_sym_NUMERIC] = ACTIONS(313),
    [anon_sym_ASC] = ACTIONS(313),
    [anon_sym_DESC] = ACTIONS(313),
    [anon_sym_LIMIT] = ACTIONS(313),
    [anon_sym_START] = ACTIONS(313),
    [anon_sym_FETCH] = ACTIONS(313),
    [anon_sym_TIMEOUT] = ACTIONS(313),
    [anon_sym_PARALLEL] = ACTIONS(313),
    [anon_sym_INSERT] = ACTIONS(313),
    [anon_sym_IGNORE] = ACTIONS(313),
    [anon_sym_INTO] = ACTIONS(313),
    [anon_sym_VALUES] = ACTIONS(313),
    [anon_sym_ON] = ACTIONS(313),
    [anon_sym_DUPLICATE] = ACTIONS(313),
    [anon_sym_KEY] = ACTIONS(313),
    [anon_sym_UPDATE] = ACTIONS(313),
    [anon_sym_CREATE] = ACTIONS(313),
    [anon_sym_CONTENT] = ACTIONS(313),
    [anon_sym_SET] = ACTIONS(313),
    [anon_sym_RETURN] = ACTIONS(313),
    [anon_sym_BEFORE] = ACTIONS(313),
    [anon_sym_AFTER] = ACTIONS(313),
    [anon_sym_DIFF] = ACTIONS(313),
    [anon_sym_MERGE] = ACTIONS(313),
    [anon_sym_PATCH] = ACTIONS(313),
    [anon_sym_RELATE] = ACTIONS(313),
    [anon_sym_DELETE] = ACTIONS(313),
    [anon_sym_DEFINE] = ACTIONS(313),
    [anon_sym_NAMESPACE] = ACTIONS(313),
    [anon_sym_DATABASE] = ACTIONS(313),
    [anon_sym_LOGIN] = ACTIONS(313),
    [anon_sym_PASSWORD] = ACTIONS(313),
    [anon_sym_PASSHASH] = ACTIONS(313),
    [anon_sym_TOKEN] = ACTIONS(313),
    [anon_sym_SCOPE] = ACTIONS(313),
    [anon_sym_TYPE] = ACTIONS(313),
    [anon_sym_VALUE] = ACTIONS(313),
    [anon_sym_SESSION] = ACTIONS(313),
    [anon_sym_SIGNUP] = ACTIONS(313),
    [anon_sym_SIGNIN] = ACTIONS(313),
    [anon_sym_TABLE] = ACTIONS(313),
    [anon_sym_DROP] = ACTIONS(313),
    [anon_sym_SCHEMAFULL] = ACTIONS(313),
    [anon_sym_SCHEMALESS] = ACTIONS(313),
    [anon_sym_AS] = ACTIONS(313),
    [anon_sym_PERMISSIONS] = ACTIONS(313),
    [anon_sym_FULL] = ACTIONS(313),
    [anon_sym_FOR] = ACTIONS(313),
    [anon_sym_select] = ACTIONS(313),
    [anon_sym_update] = ACTIONS(313),
    [anon_sym_create] = ACTIONS(313),
    [anon_sym_delete] = ACTIONS(313),
    [anon_sym_EVENT] = ACTIONS(313),
    [anon_sym_WHEN] = ACTIONS(313),
    [anon_sym_ASSERT] = ACTIONS(313),
    [anon_sym_INDEX] = ACTIONS(313),
    [anon_sym_FIELDS] = ACTIONS(313),
    [anon_sym_COLUMNS] = ACTIONS(313),
    [anon_sym_UNIQUE] = ACTIONS(313),
    [anon_sym_REMOVE] = ACTIONS(313),
    [anon_sym_SLEEP] = ACTIONS(313),
    [anon_sym_INFO] = ACTIONS(313),
    [anon_sym_KV] = ACTIONS(313),
    [anon_sym_FUNCTION] = ACTIONS(313),
    [anon_sym_PARAM] = ACTIONS(313),
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
    [anon_sym_DASH_GT] = ACTIONS(311),
    [anon_sym_LT_DASH] = ACTIONS(311),
    [anon_sym_COMMA] = ACTIONS(311),
    [anon_sym_SEMI] = ACTIONS(311),
    [anon_sym_COLON] = ACTIONS(311),
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
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(315),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(315),
    [anon_sym_RBRACE] = ACTIONS(315),
    [aux_sym_future_token1] = ACTIONS(315),
    [aux_sym_casting_token1] = ACTIONS(315),
    [aux_sym_property_token1] = ACTIONS(317),
    [aux_sym_identifier_token1] = ACTIONS(317),
    [aux_sym_duration_token1] = ACTIONS(317),
    [aux_sym_constant_token1] = ACTIONS(315),
    [aux_sym_number_token1] = ACTIONS(317),
    [aux_sym_record_token1] = ACTIONS(315),
    [aux_sym_record_token2] = ACTIONS(315),
    [anon_sym_USE] = ACTIONS(317),
    [anon_sym_NS] = ACTIONS(317),
    [anon_sym_DB] = ACTIONS(317),
    [anon_sym_LET] = ACTIONS(317),
    [anon_sym_BEGIN] = ACTIONS(317),
    [anon_sym_TRANSACTION] = ACTIONS(317),
    [anon_sym_CANCEL] = ACTIONS(317),
    [anon_sym_COMMIT] = ACTIONS(317),
    [anon_sym_IF] = ACTIONS(317),
    [anon_sym_ELSE] = ACTIONS(317),
    [anon_sym_THEN] = ACTIONS(317),
    [anon_sym_END] = ACTIONS(317),
    [anon_sym_SELECT] = ACTIONS(317),
    [anon_sym_FROM] = ACTIONS(317),
    [anon_sym_WHERE] = ACTIONS(317),
    [anon_sym_SPLIT] = ACTIONS(317),
    [anon_sym_AT] = ACTIONS(317),
    [anon_sym_GROUP] = ACTIONS(317),
    [anon_sym_BY] = ACTIONS(317),
    [anon_sym_ORDER] = ACTIONS(317),
    [anon_sym_COLLATE] = ACTIONS(317),
    [anon_sym_NUMERIC] = ACTIONS(317),
    [anon_sym_ASC] = ACTIONS(317),
    [anon_sym_DESC] = ACTIONS(317),
    [anon_sym_LIMIT] = ACTIONS(317),
    [anon_sym_START] = ACTIONS(317),
    [anon_sym_FETCH] = ACTIONS(317),
    [anon_sym_TIMEOUT] = ACTIONS(317),
    [anon_sym_PARALLEL] = ACTIONS(317),
    [anon_sym_INSERT] = ACTIONS(317),
    [anon_sym_IGNORE] = ACTIONS(317),
    [anon_sym_INTO] = ACTIONS(317),
    [anon_sym_VALUES] = ACTIONS(317),
    [anon_sym_ON] = ACTIONS(317),
    [anon_sym_DUPLICATE] = ACTIONS(317),
    [anon_sym_KEY] = ACTIONS(317),
    [anon_sym_UPDATE] = ACTIONS(317),
    [anon_sym_CREATE] = ACTIONS(317),
    [anon_sym_CONTENT] = ACTIONS(317),
    [anon_sym_SET] = ACTIONS(317),
    [anon_sym_RETURN] = ACTIONS(317),
    [anon_sym_BEFORE] = ACTIONS(317),
    [anon_sym_AFTER] = ACTIONS(317),
    [anon_sym_DIFF] = ACTIONS(317),
    [anon_sym_MERGE] = ACTIONS(317),
    [anon_sym_PATCH] = ACTIONS(317),
    [anon_sym_RELATE] = ACTIONS(317),
    [anon_sym_DELETE] = ACTIONS(317),
    [anon_sym_DEFINE] = ACTIONS(317),
    [anon_sym_NAMESPACE] = ACTIONS(317),
    [anon_sym_DATABASE] = ACTIONS(317),
    [anon_sym_LOGIN] = ACTIONS(317),
    [anon_sym_PASSWORD] = ACTIONS(317),
    [anon_sym_PASSHASH] = ACTIONS(317),
    [anon_sym_TOKEN] = ACTIONS(317),
    [anon_sym_SCOPE] = ACTIONS(317),
    [anon_sym_TYPE] = ACTIONS(317),
    [anon_sym_VALUE] = ACTIONS(317),
    [anon_sym_SESSION] = ACTIONS(317),
    [anon_sym_SIGNUP] = ACTIONS(317),
    [anon_sym_SIGNIN] = ACTIONS(317),
    [anon_sym_TABLE] = ACTIONS(317),
    [anon_sym_DROP] = ACTIONS(317),
    [anon_sym_SCHEMAFULL] = ACTIONS(317),
    [anon_sym_SCHEMALESS] = ACTIONS(317),
    [anon_sym_AS] = ACTIONS(317),
    [anon_sym_PERMISSIONS] = ACTIONS(317),
    [anon_sym_FULL] = ACTIONS(317),
    [anon_sym_FOR] = ACTIONS(317),
    [anon_sym_select] = ACTIONS(317),
    [anon_sym_update] = ACTIONS(317),
    [anon_sym_create] = ACTIONS(317),
    [anon_sym_delete] = ACTIONS(317),
    [anon_sym_EVENT] = ACTIONS(317),
    [anon_sym_WHEN] = ACTIONS(317),
    [anon_sym_ASSERT] = ACTIONS(317),
    [anon_sym_INDEX] = ACTIONS(317),
    [anon_sym_FIELDS] = ACTIONS(317),
    [anon_sym_COLUMNS] = ACTIONS(317),
    [anon_sym_UNIQUE] = ACTIONS(317),
    [anon_sym_REMOVE] = ACTIONS(317),
    [anon_sym_SLEEP] = ACTIONS(317),
    [anon_sym_INFO] = ACTIONS(317),
    [anon_sym_KV] = ACTIONS(317),
    [anon_sym_FUNCTION] = ACTIONS(317),
    [anon_sym_PARAM] = ACTIONS(317),
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
    [anon_sym_DASH_GT] = ACTIONS(315),
    [anon_sym_LT_DASH] = ACTIONS(315),
    [anon_sym_COMMA] = ACTIONS(315),
    [anon_sym_SEMI] = ACTIONS(315),
    [anon_sym_COLON] = ACTIONS(315),
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
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(319),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(319),
    [anon_sym_LBRACE] = ACTIONS(319),
    [anon_sym_RBRACE] = ACTIONS(319),
    [aux_sym_future_token1] = ACTIONS(319),
    [aux_sym_casting_token1] = ACTIONS(319),
    [aux_sym_property_token1] = ACTIONS(321),
    [aux_sym_identifier_token1] = ACTIONS(321),
    [aux_sym_duration_token1] = ACTIONS(321),
    [aux_sym_constant_token1] = ACTIONS(319),
    [aux_sym_number_token1] = ACTIONS(321),
    [aux_sym_record_token1] = ACTIONS(319),
    [aux_sym_record_token2] = ACTIONS(319),
    [anon_sym_USE] = ACTIONS(321),
    [anon_sym_NS] = ACTIONS(321),
    [anon_sym_DB] = ACTIONS(321),
    [anon_sym_LET] = ACTIONS(321),
    [anon_sym_BEGIN] = ACTIONS(321),
    [anon_sym_TRANSACTION] = ACTIONS(321),
    [anon_sym_CANCEL] = ACTIONS(321),
    [anon_sym_COMMIT] = ACTIONS(321),
    [anon_sym_IF] = ACTIONS(321),
    [anon_sym_ELSE] = ACTIONS(321),
    [anon_sym_THEN] = ACTIONS(321),
    [anon_sym_END] = ACTIONS(321),
    [anon_sym_SELECT] = ACTIONS(321),
    [anon_sym_FROM] = ACTIONS(321),
    [anon_sym_WHERE] = ACTIONS(321),
    [anon_sym_SPLIT] = ACTIONS(321),
    [anon_sym_AT] = ACTIONS(321),
    [anon_sym_GROUP] = ACTIONS(321),
    [anon_sym_BY] = ACTIONS(321),
    [anon_sym_ORDER] = ACTIONS(321),
    [anon_sym_COLLATE] = ACTIONS(321),
    [anon_sym_NUMERIC] = ACTIONS(321),
    [anon_sym_ASC] = ACTIONS(321),
    [anon_sym_DESC] = ACTIONS(321),
    [anon_sym_LIMIT] = ACTIONS(321),
    [anon_sym_START] = ACTIONS(321),
    [anon_sym_FETCH] = ACTIONS(321),
    [anon_sym_TIMEOUT] = ACTIONS(321),
    [anon_sym_PARALLEL] = ACTIONS(321),
    [anon_sym_INSERT] = ACTIONS(321),
    [anon_sym_IGNORE] = ACTIONS(321),
    [anon_sym_INTO] = ACTIONS(321),
    [anon_sym_VALUES] = ACTIONS(321),
    [anon_sym_ON] = ACTIONS(321),
    [anon_sym_DUPLICATE] = ACTIONS(321),
    [anon_sym_KEY] = ACTIONS(321),
    [anon_sym_UPDATE] = ACTIONS(321),
    [anon_sym_CREATE] = ACTIONS(321),
    [anon_sym_CONTENT] = ACTIONS(321),
    [anon_sym_SET] = ACTIONS(321),
    [anon_sym_RETURN] = ACTIONS(321),
    [anon_sym_BEFORE] = ACTIONS(321),
    [anon_sym_AFTER] = ACTIONS(321),
    [anon_sym_DIFF] = ACTIONS(321),
    [anon_sym_MERGE] = ACTIONS(321),
    [anon_sym_PATCH] = ACTIONS(321),
    [anon_sym_RELATE] = ACTIONS(321),
    [anon_sym_DELETE] = ACTIONS(321),
    [anon_sym_DEFINE] = ACTIONS(321),
    [anon_sym_NAMESPACE] = ACTIONS(321),
    [anon_sym_DATABASE] = ACTIONS(321),
    [anon_sym_LOGIN] = ACTIONS(321),
    [anon_sym_PASSWORD] = ACTIONS(321),
    [anon_sym_PASSHASH] = ACTIONS(321),
    [anon_sym_TOKEN] = ACTIONS(321),
    [anon_sym_SCOPE] = ACTIONS(321),
    [anon_sym_TYPE] = ACTIONS(321),
    [anon_sym_VALUE] = ACTIONS(321),
    [anon_sym_SESSION] = ACTIONS(321),
    [anon_sym_SIGNUP] = ACTIONS(321),
    [anon_sym_SIGNIN] = ACTIONS(321),
    [anon_sym_TABLE] = ACTIONS(321),
    [anon_sym_DROP] = ACTIONS(321),
    [anon_sym_SCHEMAFULL] = ACTIONS(321),
    [anon_sym_SCHEMALESS] = ACTIONS(321),
    [anon_sym_AS] = ACTIONS(321),
    [anon_sym_PERMISSIONS] = ACTIONS(321),
    [anon_sym_FULL] = ACTIONS(321),
    [anon_sym_FOR] = ACTIONS(321),
    [anon_sym_select] = ACTIONS(321),
    [anon_sym_update] = ACTIONS(321),
    [anon_sym_create] = ACTIONS(321),
    [anon_sym_delete] = ACTIONS(321),
    [anon_sym_EVENT] = ACTIONS(321),
    [anon_sym_WHEN] = ACTIONS(321),
    [anon_sym_ASSERT] = ACTIONS(321),
    [anon_sym_INDEX] = ACTIONS(321),
    [anon_sym_FIELDS] = ACTIONS(321),
    [anon_sym_COLUMNS] = ACTIONS(321),
    [anon_sym_UNIQUE] = ACTIONS(321),
    [anon_sym_REMOVE] = ACTIONS(321),
    [anon_sym_SLEEP] = ACTIONS(321),
    [anon_sym_INFO] = ACTIONS(321),
    [anon_sym_KV] = ACTIONS(321),
    [anon_sym_FUNCTION] = ACTIONS(321),
    [anon_sym_PARAM] = ACTIONS(321),
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
    [anon_sym_DASH_GT] = ACTIONS(319),
    [anon_sym_LT_DASH] = ACTIONS(319),
    [anon_sym_COMMA] = ACTIONS(319),
    [anon_sym_SEMI] = ACTIONS(319),
    [anon_sym_COLON] = ACTIONS(319),
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
  [26] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(323),
    [anon_sym_RBRACE_SEMI] = ACTIONS(323),
    [anon_sym_RBRACE_COMMA] = ACTIONS(323),
    [anon_sym_LBRACE] = ACTIONS(323),
    [anon_sym_RBRACE] = ACTIONS(325),
    [aux_sym_future_token1] = ACTIONS(323),
    [aux_sym_casting_token1] = ACTIONS(323),
    [aux_sym_property_token1] = ACTIONS(325),
    [aux_sym_identifier_token1] = ACTIONS(325),
    [aux_sym_duration_token1] = ACTIONS(325),
    [aux_sym_constant_token1] = ACTIONS(323),
    [aux_sym_number_token1] = ACTIONS(325),
    [aux_sym_record_token1] = ACTIONS(323),
    [aux_sym_record_token2] = ACTIONS(323),
    [anon_sym_USE] = ACTIONS(325),
    [anon_sym_NS] = ACTIONS(325),
    [anon_sym_DB] = ACTIONS(325),
    [anon_sym_LET] = ACTIONS(325),
    [anon_sym_BEGIN] = ACTIONS(325),
    [anon_sym_TRANSACTION] = ACTIONS(325),
    [anon_sym_CANCEL] = ACTIONS(325),
    [anon_sym_COMMIT] = ACTIONS(325),
    [anon_sym_IF] = ACTIONS(325),
    [anon_sym_ELSE] = ACTIONS(325),
    [anon_sym_THEN] = ACTIONS(325),
    [anon_sym_END] = ACTIONS(325),
    [anon_sym_SELECT] = ACTIONS(325),
    [anon_sym_FROM] = ACTIONS(325),
    [anon_sym_WHERE] = ACTIONS(325),
    [anon_sym_SPLIT] = ACTIONS(325),
    [anon_sym_AT] = ACTIONS(325),
    [anon_sym_GROUP] = ACTIONS(325),
    [anon_sym_BY] = ACTIONS(325),
    [anon_sym_ORDER] = ACTIONS(325),
    [anon_sym_COLLATE] = ACTIONS(325),
    [anon_sym_NUMERIC] = ACTIONS(325),
    [anon_sym_ASC] = ACTIONS(325),
    [anon_sym_DESC] = ACTIONS(325),
    [anon_sym_LIMIT] = ACTIONS(325),
    [anon_sym_START] = ACTIONS(325),
    [anon_sym_FETCH] = ACTIONS(325),
    [anon_sym_TIMEOUT] = ACTIONS(325),
    [anon_sym_PARALLEL] = ACTIONS(325),
    [anon_sym_INSERT] = ACTIONS(325),
    [anon_sym_IGNORE] = ACTIONS(325),
    [anon_sym_INTO] = ACTIONS(325),
    [anon_sym_VALUES] = ACTIONS(325),
    [anon_sym_ON] = ACTIONS(325),
    [anon_sym_DUPLICATE] = ACTIONS(325),
    [anon_sym_KEY] = ACTIONS(325),
    [anon_sym_UPDATE] = ACTIONS(325),
    [anon_sym_CREATE] = ACTIONS(325),
    [anon_sym_CONTENT] = ACTIONS(325),
    [anon_sym_SET] = ACTIONS(325),
    [anon_sym_RETURN] = ACTIONS(325),
    [anon_sym_BEFORE] = ACTIONS(325),
    [anon_sym_AFTER] = ACTIONS(325),
    [anon_sym_DIFF] = ACTIONS(325),
    [anon_sym_MERGE] = ACTIONS(325),
    [anon_sym_PATCH] = ACTIONS(325),
    [anon_sym_RELATE] = ACTIONS(325),
    [anon_sym_DELETE] = ACTIONS(325),
    [anon_sym_DEFINE] = ACTIONS(325),
    [anon_sym_NAMESPACE] = ACTIONS(325),
    [anon_sym_DATABASE] = ACTIONS(325),
    [anon_sym_LOGIN] = ACTIONS(325),
    [anon_sym_PASSWORD] = ACTIONS(325),
    [anon_sym_PASSHASH] = ACTIONS(325),
    [anon_sym_TOKEN] = ACTIONS(325),
    [anon_sym_SCOPE] = ACTIONS(325),
    [anon_sym_TYPE] = ACTIONS(325),
    [anon_sym_VALUE] = ACTIONS(325),
    [anon_sym_SESSION] = ACTIONS(325),
    [anon_sym_SIGNUP] = ACTIONS(325),
    [anon_sym_SIGNIN] = ACTIONS(325),
    [anon_sym_TABLE] = ACTIONS(325),
    [anon_sym_DROP] = ACTIONS(325),
    [anon_sym_SCHEMAFULL] = ACTIONS(325),
    [anon_sym_SCHEMALESS] = ACTIONS(325),
    [anon_sym_AS] = ACTIONS(325),
    [anon_sym_PERMISSIONS] = ACTIONS(325),
    [anon_sym_FULL] = ACTIONS(325),
    [anon_sym_FOR] = ACTIONS(325),
    [anon_sym_select] = ACTIONS(325),
    [anon_sym_update] = ACTIONS(325),
    [anon_sym_create] = ACTIONS(325),
    [anon_sym_delete] = ACTIONS(325),
    [anon_sym_EVENT] = ACTIONS(325),
    [anon_sym_WHEN] = ACTIONS(325),
    [anon_sym_ASSERT] = ACTIONS(325),
    [anon_sym_INDEX] = ACTIONS(325),
    [anon_sym_FIELDS] = ACTIONS(325),
    [anon_sym_COLUMNS] = ACTIONS(325),
    [anon_sym_UNIQUE] = ACTIONS(325),
    [anon_sym_REMOVE] = ACTIONS(325),
    [anon_sym_SLEEP] = ACTIONS(325),
    [anon_sym_INFO] = ACTIONS(325),
    [anon_sym_KV] = ACTIONS(325),
    [anon_sym_FUNCTION] = ACTIONS(325),
    [anon_sym_PARAM] = ACTIONS(325),
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
    [anon_sym_DASH_GT] = ACTIONS(323),
    [anon_sym_LT_DASH] = ACTIONS(323),
    [anon_sym_COMMA] = ACTIONS(323),
    [anon_sym_SEMI] = ACTIONS(323),
    [anon_sym_COLON] = ACTIONS(323),
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
  [27] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(327),
    [anon_sym_RBRACE_SEMI] = ACTIONS(327),
    [anon_sym_RBRACE_COMMA] = ACTIONS(327),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_RBRACE] = ACTIONS(329),
    [aux_sym_future_token1] = ACTIONS(327),
    [aux_sym_casting_token1] = ACTIONS(327),
    [aux_sym_property_token1] = ACTIONS(329),
    [aux_sym_identifier_token1] = ACTIONS(329),
    [aux_sym_duration_token1] = ACTIONS(329),
    [aux_sym_constant_token1] = ACTIONS(327),
    [aux_sym_number_token1] = ACTIONS(329),
    [aux_sym_record_token1] = ACTIONS(327),
    [aux_sym_record_token2] = ACTIONS(327),
    [anon_sym_USE] = ACTIONS(329),
    [anon_sym_NS] = ACTIONS(329),
    [anon_sym_DB] = ACTIONS(329),
    [anon_sym_LET] = ACTIONS(329),
    [anon_sym_BEGIN] = ACTIONS(329),
    [anon_sym_TRANSACTION] = ACTIONS(329),
    [anon_sym_CANCEL] = ACTIONS(329),
    [anon_sym_COMMIT] = ACTIONS(329),
    [anon_sym_IF] = ACTIONS(329),
    [anon_sym_ELSE] = ACTIONS(329),
    [anon_sym_THEN] = ACTIONS(329),
    [anon_sym_END] = ACTIONS(329),
    [anon_sym_SELECT] = ACTIONS(329),
    [anon_sym_FROM] = ACTIONS(329),
    [anon_sym_WHERE] = ACTIONS(329),
    [anon_sym_SPLIT] = ACTIONS(329),
    [anon_sym_AT] = ACTIONS(329),
    [anon_sym_GROUP] = ACTIONS(329),
    [anon_sym_BY] = ACTIONS(329),
    [anon_sym_ORDER] = ACTIONS(329),
    [anon_sym_COLLATE] = ACTIONS(329),
    [anon_sym_NUMERIC] = ACTIONS(329),
    [anon_sym_ASC] = ACTIONS(329),
    [anon_sym_DESC] = ACTIONS(329),
    [anon_sym_LIMIT] = ACTIONS(329),
    [anon_sym_START] = ACTIONS(329),
    [anon_sym_FETCH] = ACTIONS(329),
    [anon_sym_TIMEOUT] = ACTIONS(329),
    [anon_sym_PARALLEL] = ACTIONS(329),
    [anon_sym_INSERT] = ACTIONS(329),
    [anon_sym_IGNORE] = ACTIONS(329),
    [anon_sym_INTO] = ACTIONS(329),
    [anon_sym_VALUES] = ACTIONS(329),
    [anon_sym_ON] = ACTIONS(329),
    [anon_sym_DUPLICATE] = ACTIONS(329),
    [anon_sym_KEY] = ACTIONS(329),
    [anon_sym_UPDATE] = ACTIONS(329),
    [anon_sym_CREATE] = ACTIONS(329),
    [anon_sym_CONTENT] = ACTIONS(329),
    [anon_sym_SET] = ACTIONS(329),
    [anon_sym_RETURN] = ACTIONS(329),
    [anon_sym_BEFORE] = ACTIONS(329),
    [anon_sym_AFTER] = ACTIONS(329),
    [anon_sym_DIFF] = ACTIONS(329),
    [anon_sym_MERGE] = ACTIONS(329),
    [anon_sym_PATCH] = ACTIONS(329),
    [anon_sym_RELATE] = ACTIONS(329),
    [anon_sym_DELETE] = ACTIONS(329),
    [anon_sym_DEFINE] = ACTIONS(329),
    [anon_sym_NAMESPACE] = ACTIONS(329),
    [anon_sym_DATABASE] = ACTIONS(329),
    [anon_sym_LOGIN] = ACTIONS(329),
    [anon_sym_PASSWORD] = ACTIONS(329),
    [anon_sym_PASSHASH] = ACTIONS(329),
    [anon_sym_TOKEN] = ACTIONS(329),
    [anon_sym_SCOPE] = ACTIONS(329),
    [anon_sym_TYPE] = ACTIONS(329),
    [anon_sym_VALUE] = ACTIONS(329),
    [anon_sym_SESSION] = ACTIONS(329),
    [anon_sym_SIGNUP] = ACTIONS(329),
    [anon_sym_SIGNIN] = ACTIONS(329),
    [anon_sym_TABLE] = ACTIONS(329),
    [anon_sym_DROP] = ACTIONS(329),
    [anon_sym_SCHEMAFULL] = ACTIONS(329),
    [anon_sym_SCHEMALESS] = ACTIONS(329),
    [anon_sym_AS] = ACTIONS(329),
    [anon_sym_PERMISSIONS] = ACTIONS(329),
    [anon_sym_FULL] = ACTIONS(329),
    [anon_sym_FOR] = ACTIONS(329),
    [anon_sym_select] = ACTIONS(329),
    [anon_sym_update] = ACTIONS(329),
    [anon_sym_create] = ACTIONS(329),
    [anon_sym_delete] = ACTIONS(329),
    [anon_sym_EVENT] = ACTIONS(329),
    [anon_sym_WHEN] = ACTIONS(329),
    [anon_sym_ASSERT] = ACTIONS(329),
    [anon_sym_INDEX] = ACTIONS(329),
    [anon_sym_FIELDS] = ACTIONS(329),
    [anon_sym_COLUMNS] = ACTIONS(329),
    [anon_sym_UNIQUE] = ACTIONS(329),
    [anon_sym_REMOVE] = ACTIONS(329),
    [anon_sym_SLEEP] = ACTIONS(329),
    [anon_sym_INFO] = ACTIONS(329),
    [anon_sym_KV] = ACTIONS(329),
    [anon_sym_FUNCTION] = ACTIONS(329),
    [anon_sym_PARAM] = ACTIONS(329),
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
    [anon_sym_DASH_GT] = ACTIONS(327),
    [anon_sym_LT_DASH] = ACTIONS(327),
    [anon_sym_COMMA] = ACTIONS(327),
    [anon_sym_SEMI] = ACTIONS(327),
    [anon_sym_COLON] = ACTIONS(327),
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
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(331),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(331),
    [anon_sym_LBRACE] = ACTIONS(331),
    [anon_sym_RBRACE] = ACTIONS(331),
    [aux_sym_future_token1] = ACTIONS(331),
    [aux_sym_casting_token1] = ACTIONS(331),
    [aux_sym_property_token1] = ACTIONS(333),
    [aux_sym_identifier_token1] = ACTIONS(333),
    [aux_sym_duration_token1] = ACTIONS(333),
    [aux_sym_constant_token1] = ACTIONS(331),
    [aux_sym_number_token1] = ACTIONS(333),
    [aux_sym_record_token1] = ACTIONS(331),
    [aux_sym_record_token2] = ACTIONS(331),
    [anon_sym_USE] = ACTIONS(333),
    [anon_sym_NS] = ACTIONS(333),
    [anon_sym_DB] = ACTIONS(333),
    [anon_sym_LET] = ACTIONS(333),
    [anon_sym_BEGIN] = ACTIONS(333),
    [anon_sym_TRANSACTION] = ACTIONS(333),
    [anon_sym_CANCEL] = ACTIONS(333),
    [anon_sym_COMMIT] = ACTIONS(333),
    [anon_sym_IF] = ACTIONS(333),
    [anon_sym_ELSE] = ACTIONS(333),
    [anon_sym_THEN] = ACTIONS(333),
    [anon_sym_END] = ACTIONS(333),
    [anon_sym_SELECT] = ACTIONS(333),
    [anon_sym_FROM] = ACTIONS(333),
    [anon_sym_WHERE] = ACTIONS(333),
    [anon_sym_SPLIT] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(333),
    [anon_sym_GROUP] = ACTIONS(333),
    [anon_sym_BY] = ACTIONS(333),
    [anon_sym_ORDER] = ACTIONS(333),
    [anon_sym_COLLATE] = ACTIONS(333),
    [anon_sym_NUMERIC] = ACTIONS(333),
    [anon_sym_ASC] = ACTIONS(333),
    [anon_sym_DESC] = ACTIONS(333),
    [anon_sym_LIMIT] = ACTIONS(333),
    [anon_sym_START] = ACTIONS(333),
    [anon_sym_FETCH] = ACTIONS(333),
    [anon_sym_TIMEOUT] = ACTIONS(333),
    [anon_sym_PARALLEL] = ACTIONS(333),
    [anon_sym_INSERT] = ACTIONS(333),
    [anon_sym_IGNORE] = ACTIONS(333),
    [anon_sym_INTO] = ACTIONS(333),
    [anon_sym_VALUES] = ACTIONS(333),
    [anon_sym_ON] = ACTIONS(333),
    [anon_sym_DUPLICATE] = ACTIONS(333),
    [anon_sym_KEY] = ACTIONS(333),
    [anon_sym_UPDATE] = ACTIONS(333),
    [anon_sym_CREATE] = ACTIONS(333),
    [anon_sym_CONTENT] = ACTIONS(333),
    [anon_sym_SET] = ACTIONS(333),
    [anon_sym_RETURN] = ACTIONS(333),
    [anon_sym_BEFORE] = ACTIONS(333),
    [anon_sym_AFTER] = ACTIONS(333),
    [anon_sym_DIFF] = ACTIONS(333),
    [anon_sym_MERGE] = ACTIONS(333),
    [anon_sym_PATCH] = ACTIONS(333),
    [anon_sym_RELATE] = ACTIONS(333),
    [anon_sym_DELETE] = ACTIONS(333),
    [anon_sym_DEFINE] = ACTIONS(333),
    [anon_sym_NAMESPACE] = ACTIONS(333),
    [anon_sym_DATABASE] = ACTIONS(333),
    [anon_sym_LOGIN] = ACTIONS(333),
    [anon_sym_PASSWORD] = ACTIONS(333),
    [anon_sym_PASSHASH] = ACTIONS(333),
    [anon_sym_TOKEN] = ACTIONS(333),
    [anon_sym_SCOPE] = ACTIONS(333),
    [anon_sym_TYPE] = ACTIONS(333),
    [anon_sym_VALUE] = ACTIONS(333),
    [anon_sym_SESSION] = ACTIONS(333),
    [anon_sym_SIGNUP] = ACTIONS(333),
    [anon_sym_SIGNIN] = ACTIONS(333),
    [anon_sym_TABLE] = ACTIONS(333),
    [anon_sym_DROP] = ACTIONS(333),
    [anon_sym_SCHEMAFULL] = ACTIONS(333),
    [anon_sym_SCHEMALESS] = ACTIONS(333),
    [anon_sym_AS] = ACTIONS(333),
    [anon_sym_PERMISSIONS] = ACTIONS(333),
    [anon_sym_FULL] = ACTIONS(333),
    [anon_sym_FOR] = ACTIONS(333),
    [anon_sym_select] = ACTIONS(333),
    [anon_sym_update] = ACTIONS(333),
    [anon_sym_create] = ACTIONS(333),
    [anon_sym_delete] = ACTIONS(333),
    [anon_sym_EVENT] = ACTIONS(333),
    [anon_sym_WHEN] = ACTIONS(333),
    [anon_sym_ASSERT] = ACTIONS(333),
    [anon_sym_INDEX] = ACTIONS(333),
    [anon_sym_FIELDS] = ACTIONS(333),
    [anon_sym_COLUMNS] = ACTIONS(333),
    [anon_sym_UNIQUE] = ACTIONS(333),
    [anon_sym_REMOVE] = ACTIONS(333),
    [anon_sym_SLEEP] = ACTIONS(333),
    [anon_sym_INFO] = ACTIONS(333),
    [anon_sym_KV] = ACTIONS(333),
    [anon_sym_FUNCTION] = ACTIONS(333),
    [anon_sym_PARAM] = ACTIONS(333),
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
    [anon_sym_DASH_GT] = ACTIONS(331),
    [anon_sym_LT_DASH] = ACTIONS(331),
    [anon_sym_COMMA] = ACTIONS(331),
    [anon_sym_SEMI] = ACTIONS(331),
    [anon_sym_COLON] = ACTIONS(331),
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
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(335),
    [anon_sym_RBRACE_SEMI] = ACTIONS(335),
    [anon_sym_RBRACE_COMMA] = ACTIONS(335),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_RBRACE] = ACTIONS(337),
    [aux_sym_future_token1] = ACTIONS(335),
    [aux_sym_casting_token1] = ACTIONS(335),
    [aux_sym_property_token1] = ACTIONS(337),
    [aux_sym_identifier_token1] = ACTIONS(337),
    [aux_sym_duration_token1] = ACTIONS(337),
    [aux_sym_constant_token1] = ACTIONS(335),
    [aux_sym_number_token1] = ACTIONS(337),
    [aux_sym_record_token1] = ACTIONS(335),
    [aux_sym_record_token2] = ACTIONS(335),
    [anon_sym_USE] = ACTIONS(337),
    [anon_sym_NS] = ACTIONS(337),
    [anon_sym_DB] = ACTIONS(337),
    [anon_sym_LET] = ACTIONS(337),
    [anon_sym_BEGIN] = ACTIONS(337),
    [anon_sym_TRANSACTION] = ACTIONS(337),
    [anon_sym_CANCEL] = ACTIONS(337),
    [anon_sym_COMMIT] = ACTIONS(337),
    [anon_sym_IF] = ACTIONS(337),
    [anon_sym_ELSE] = ACTIONS(337),
    [anon_sym_THEN] = ACTIONS(337),
    [anon_sym_END] = ACTIONS(337),
    [anon_sym_SELECT] = ACTIONS(337),
    [anon_sym_FROM] = ACTIONS(337),
    [anon_sym_WHERE] = ACTIONS(337),
    [anon_sym_SPLIT] = ACTIONS(337),
    [anon_sym_AT] = ACTIONS(337),
    [anon_sym_GROUP] = ACTIONS(337),
    [anon_sym_BY] = ACTIONS(337),
    [anon_sym_ORDER] = ACTIONS(337),
    [anon_sym_COLLATE] = ACTIONS(337),
    [anon_sym_NUMERIC] = ACTIONS(337),
    [anon_sym_ASC] = ACTIONS(337),
    [anon_sym_DESC] = ACTIONS(337),
    [anon_sym_LIMIT] = ACTIONS(337),
    [anon_sym_START] = ACTIONS(337),
    [anon_sym_FETCH] = ACTIONS(337),
    [anon_sym_TIMEOUT] = ACTIONS(337),
    [anon_sym_PARALLEL] = ACTIONS(337),
    [anon_sym_INSERT] = ACTIONS(337),
    [anon_sym_IGNORE] = ACTIONS(337),
    [anon_sym_INTO] = ACTIONS(337),
    [anon_sym_VALUES] = ACTIONS(337),
    [anon_sym_ON] = ACTIONS(337),
    [anon_sym_DUPLICATE] = ACTIONS(337),
    [anon_sym_KEY] = ACTIONS(337),
    [anon_sym_UPDATE] = ACTIONS(337),
    [anon_sym_CREATE] = ACTIONS(337),
    [anon_sym_CONTENT] = ACTIONS(337),
    [anon_sym_SET] = ACTIONS(337),
    [anon_sym_RETURN] = ACTIONS(337),
    [anon_sym_BEFORE] = ACTIONS(337),
    [anon_sym_AFTER] = ACTIONS(337),
    [anon_sym_DIFF] = ACTIONS(337),
    [anon_sym_MERGE] = ACTIONS(337),
    [anon_sym_PATCH] = ACTIONS(337),
    [anon_sym_RELATE] = ACTIONS(337),
    [anon_sym_DELETE] = ACTIONS(337),
    [anon_sym_DEFINE] = ACTIONS(337),
    [anon_sym_NAMESPACE] = ACTIONS(337),
    [anon_sym_DATABASE] = ACTIONS(337),
    [anon_sym_LOGIN] = ACTIONS(337),
    [anon_sym_PASSWORD] = ACTIONS(337),
    [anon_sym_PASSHASH] = ACTIONS(337),
    [anon_sym_TOKEN] = ACTIONS(337),
    [anon_sym_SCOPE] = ACTIONS(337),
    [anon_sym_TYPE] = ACTIONS(337),
    [anon_sym_VALUE] = ACTIONS(337),
    [anon_sym_SESSION] = ACTIONS(337),
    [anon_sym_SIGNUP] = ACTIONS(337),
    [anon_sym_SIGNIN] = ACTIONS(337),
    [anon_sym_TABLE] = ACTIONS(337),
    [anon_sym_DROP] = ACTIONS(337),
    [anon_sym_SCHEMAFULL] = ACTIONS(337),
    [anon_sym_SCHEMALESS] = ACTIONS(337),
    [anon_sym_AS] = ACTIONS(337),
    [anon_sym_PERMISSIONS] = ACTIONS(337),
    [anon_sym_FULL] = ACTIONS(337),
    [anon_sym_FOR] = ACTIONS(337),
    [anon_sym_select] = ACTIONS(337),
    [anon_sym_update] = ACTIONS(337),
    [anon_sym_create] = ACTIONS(337),
    [anon_sym_delete] = ACTIONS(337),
    [anon_sym_EVENT] = ACTIONS(337),
    [anon_sym_WHEN] = ACTIONS(337),
    [anon_sym_ASSERT] = ACTIONS(337),
    [anon_sym_INDEX] = ACTIONS(337),
    [anon_sym_FIELDS] = ACTIONS(337),
    [anon_sym_COLUMNS] = ACTIONS(337),
    [anon_sym_UNIQUE] = ACTIONS(337),
    [anon_sym_REMOVE] = ACTIONS(337),
    [anon_sym_SLEEP] = ACTIONS(337),
    [anon_sym_INFO] = ACTIONS(337),
    [anon_sym_KV] = ACTIONS(337),
    [anon_sym_FUNCTION] = ACTIONS(337),
    [anon_sym_PARAM] = ACTIONS(337),
    [anon_sym_AMP_AMP] = ACTIONS(335),
    [anon_sym_AND] = ACTIONS(337),
    [anon_sym_PIPE_PIPE] = ACTIONS(335),
    [anon_sym_OR] = ACTIONS(337),
    [anon_sym_QMARK_QMARK] = ACTIONS(335),
    [anon_sym_QMARK_COLON] = ACTIONS(335),
    [anon_sym_EQ] = ACTIONS(337),
    [anon_sym_IS] = ACTIONS(337),
    [anon_sym_BANG_EQ] = ACTIONS(335),
    [anon_sym_ISNOT] = ACTIONS(335),
    [anon_sym_EQ_EQ] = ACTIONS(335),
    [anon_sym_QMARK_EQ] = ACTIONS(335),
    [anon_sym_STAR_EQ] = ACTIONS(335),
    [anon_sym_TILDE] = ACTIONS(335),
    [anon_sym_BANG_TILDE] = ACTIONS(335),
    [anon_sym_QMARK_TILDE] = ACTIONS(335),
    [anon_sym_STAR_TILDE] = ACTIONS(335),
    [anon_sym_LT] = ACTIONS(337),
    [anon_sym_LT_EQ] = ACTIONS(335),
    [anon_sym_GT] = ACTIONS(337),
    [anon_sym_GT_EQ] = ACTIONS(335),
    [anon_sym_PLUS] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(337),
    [anon_sym_x] = ACTIONS(337),
    [anon_sym_SLASH] = ACTIONS(335),
    [anon_sym_] = ACTIONS(335),
    [anon_sym_STAR_STAR] = ACTIONS(335),
    [anon_sym_IN] = ACTIONS(337),
    [anon_sym_CONTAINS] = ACTIONS(337),
    [anon_sym_2] = ACTIONS(335),
    [anon_sym_CONTAINSNOT] = ACTIONS(337),
    [anon_sym_3] = ACTIONS(335),
    [anon_sym_CONTAINSALL] = ACTIONS(337),
    [anon_sym_4] = ACTIONS(335),
    [anon_sym_CONTAINSANY] = ACTIONS(337),
    [anon_sym_5] = ACTIONS(335),
    [anon_sym_CONTAINSNONE] = ACTIONS(337),
    [anon_sym_6] = ACTIONS(335),
    [anon_sym_INSIDE] = ACTIONS(337),
    [anon_sym_7] = ACTIONS(335),
    [anon_sym_NOTINSIDE] = ACTIONS(337),
    [anon_sym_NOTIN] = ACTIONS(335),
    [anon_sym_8] = ACTIONS(335),
    [anon_sym_ALLINSIDE] = ACTIONS(337),
    [anon_sym_9] = ACTIONS(335),
    [anon_sym_ANYINSIDE] = ACTIONS(337),
    [anon_sym_10] = ACTIONS(335),
    [anon_sym_NONEINSIDE] = ACTIONS(337),
    [anon_sym_11] = ACTIONS(335),
    [anon_sym_OUTSIDE] = ACTIONS(337),
    [anon_sym_INTERSECTS] = ACTIONS(337),
    [anon_sym_LPAREN] = ACTIONS(335),
    [anon_sym_RPAREN] = ACTIONS(335),
    [anon_sym_LBRACK] = ACTIONS(335),
    [anon_sym_RBRACK] = ACTIONS(335),
    [anon_sym_DASH_GT] = ACTIONS(335),
    [anon_sym_LT_DASH] = ACTIONS(335),
    [anon_sym_COMMA] = ACTIONS(335),
    [anon_sym_SEMI] = ACTIONS(335),
    [anon_sym_COLON] = ACTIONS(335),
    [anon_sym_any] = ACTIONS(337),
    [anon_sym_array] = ACTIONS(337),
    [anon_sym_bool] = ACTIONS(337),
    [anon_sym_datetime] = ACTIONS(337),
    [anon_sym_decimal] = ACTIONS(337),
    [anon_sym_duration] = ACTIONS(337),
    [anon_sym_float] = ACTIONS(337),
    [anon_sym_int] = ACTIONS(337),
    [anon_sym_number] = ACTIONS(337),
    [anon_sym_object] = ACTIONS(337),
    [anon_sym_string] = ACTIONS(337),
    [anon_sym_record] = ACTIONS(337),
    [anon_sym_geometry] = ACTIONS(337),
    [anon_sym_EDDSA] = ACTIONS(337),
    [anon_sym_ES256] = ACTIONS(337),
    [anon_sym_ES384] = ACTIONS(337),
    [anon_sym_ES512] = ACTIONS(337),
    [anon_sym_HS256] = ACTIONS(337),
    [anon_sym_HS384] = ACTIONS(337),
    [anon_sym_HS512] = ACTIONS(337),
    [anon_sym_PS256] = ACTIONS(337),
    [anon_sym_PS384] = ACTIONS(337),
    [anon_sym_PS512] = ACTIONS(337),
    [anon_sym_RS256] = ACTIONS(337),
    [anon_sym_RS384] = ACTIONS(337),
    [anon_sym_RS512] = ACTIONS(337),
    [aux_sym_function_token1] = ACTIONS(335),
    [aux_sym_function_token2] = ACTIONS(335),
    [anon_sym_count] = ACTIONS(337),
    [aux_sym_function_token3] = ACTIONS(335),
    [aux_sym_function_token4] = ACTIONS(335),
    [aux_sym_function_token5] = ACTIONS(335),
    [aux_sym_function_token6] = ACTIONS(335),
    [aux_sym_function_token7] = ACTIONS(335),
    [aux_sym_function_token8] = ACTIONS(335),
    [aux_sym_function_token9] = ACTIONS(335),
    [aux_sym_function_token10] = ACTIONS(337),
    [aux_sym_function_token11] = ACTIONS(335),
    [aux_sym_function_token12] = ACTIONS(337),
    [aux_sym_function_token13] = ACTIONS(335),
    [aux_sym_function_token14] = ACTIONS(335),
    [aux_sym_function_token15] = ACTIONS(335),
    [aux_sym_function_token16] = ACTIONS(337),
    [anon_sym_true] = ACTIONS(337),
    [anon_sym_false] = ACTIONS(337),
    [anon_sym_TRUE] = ACTIONS(337),
    [anon_sym_FALSE] = ACTIONS(337),
    [anon_sym_null] = ACTIONS(337),
    [anon_sym_NULL] = ACTIONS(337),
    [anon_sym_none] = ACTIONS(337),
    [anon_sym_NONE] = ACTIONS(337),
    [sym_variable] = ACTIONS(335),
    [anon_sym_SQUOTE] = ACTIONS(335),
    [anon_sym_DQUOTE] = ACTIONS(335),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(335),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(335),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_RBRACE] = ACTIONS(335),
    [aux_sym_future_token1] = ACTIONS(335),
    [aux_sym_casting_token1] = ACTIONS(335),
    [aux_sym_property_token1] = ACTIONS(337),
    [aux_sym_identifier_token1] = ACTIONS(337),
    [aux_sym_duration_token1] = ACTIONS(337),
    [aux_sym_constant_token1] = ACTIONS(335),
    [aux_sym_number_token1] = ACTIONS(337),
    [aux_sym_record_token1] = ACTIONS(335),
    [aux_sym_record_token2] = ACTIONS(335),
    [anon_sym_USE] = ACTIONS(337),
    [anon_sym_NS] = ACTIONS(337),
    [anon_sym_DB] = ACTIONS(337),
    [anon_sym_LET] = ACTIONS(337),
    [anon_sym_BEGIN] = ACTIONS(337),
    [anon_sym_TRANSACTION] = ACTIONS(337),
    [anon_sym_CANCEL] = ACTIONS(337),
    [anon_sym_COMMIT] = ACTIONS(337),
    [anon_sym_IF] = ACTIONS(337),
    [anon_sym_ELSE] = ACTIONS(337),
    [anon_sym_THEN] = ACTIONS(337),
    [anon_sym_END] = ACTIONS(337),
    [anon_sym_SELECT] = ACTIONS(337),
    [anon_sym_FROM] = ACTIONS(337),
    [anon_sym_WHERE] = ACTIONS(337),
    [anon_sym_SPLIT] = ACTIONS(337),
    [anon_sym_AT] = ACTIONS(337),
    [anon_sym_GROUP] = ACTIONS(337),
    [anon_sym_BY] = ACTIONS(337),
    [anon_sym_ORDER] = ACTIONS(337),
    [anon_sym_COLLATE] = ACTIONS(337),
    [anon_sym_NUMERIC] = ACTIONS(337),
    [anon_sym_ASC] = ACTIONS(337),
    [anon_sym_DESC] = ACTIONS(337),
    [anon_sym_LIMIT] = ACTIONS(337),
    [anon_sym_START] = ACTIONS(337),
    [anon_sym_FETCH] = ACTIONS(337),
    [anon_sym_TIMEOUT] = ACTIONS(337),
    [anon_sym_PARALLEL] = ACTIONS(337),
    [anon_sym_INSERT] = ACTIONS(337),
    [anon_sym_IGNORE] = ACTIONS(337),
    [anon_sym_INTO] = ACTIONS(337),
    [anon_sym_VALUES] = ACTIONS(337),
    [anon_sym_ON] = ACTIONS(337),
    [anon_sym_DUPLICATE] = ACTIONS(337),
    [anon_sym_KEY] = ACTIONS(337),
    [anon_sym_UPDATE] = ACTIONS(337),
    [anon_sym_CREATE] = ACTIONS(337),
    [anon_sym_CONTENT] = ACTIONS(337),
    [anon_sym_SET] = ACTIONS(337),
    [anon_sym_RETURN] = ACTIONS(337),
    [anon_sym_BEFORE] = ACTIONS(337),
    [anon_sym_AFTER] = ACTIONS(337),
    [anon_sym_DIFF] = ACTIONS(337),
    [anon_sym_MERGE] = ACTIONS(337),
    [anon_sym_PATCH] = ACTIONS(337),
    [anon_sym_RELATE] = ACTIONS(337),
    [anon_sym_DELETE] = ACTIONS(337),
    [anon_sym_DEFINE] = ACTIONS(337),
    [anon_sym_NAMESPACE] = ACTIONS(337),
    [anon_sym_DATABASE] = ACTIONS(337),
    [anon_sym_LOGIN] = ACTIONS(337),
    [anon_sym_PASSWORD] = ACTIONS(337),
    [anon_sym_PASSHASH] = ACTIONS(337),
    [anon_sym_TOKEN] = ACTIONS(337),
    [anon_sym_SCOPE] = ACTIONS(337),
    [anon_sym_TYPE] = ACTIONS(337),
    [anon_sym_VALUE] = ACTIONS(337),
    [anon_sym_SESSION] = ACTIONS(337),
    [anon_sym_SIGNUP] = ACTIONS(337),
    [anon_sym_SIGNIN] = ACTIONS(337),
    [anon_sym_TABLE] = ACTIONS(337),
    [anon_sym_DROP] = ACTIONS(337),
    [anon_sym_SCHEMAFULL] = ACTIONS(337),
    [anon_sym_SCHEMALESS] = ACTIONS(337),
    [anon_sym_AS] = ACTIONS(337),
    [anon_sym_PERMISSIONS] = ACTIONS(337),
    [anon_sym_FULL] = ACTIONS(337),
    [anon_sym_FOR] = ACTIONS(337),
    [anon_sym_select] = ACTIONS(337),
    [anon_sym_update] = ACTIONS(337),
    [anon_sym_create] = ACTIONS(337),
    [anon_sym_delete] = ACTIONS(337),
    [anon_sym_EVENT] = ACTIONS(337),
    [anon_sym_WHEN] = ACTIONS(337),
    [anon_sym_ASSERT] = ACTIONS(337),
    [anon_sym_INDEX] = ACTIONS(337),
    [anon_sym_FIELDS] = ACTIONS(337),
    [anon_sym_COLUMNS] = ACTIONS(337),
    [anon_sym_UNIQUE] = ACTIONS(337),
    [anon_sym_REMOVE] = ACTIONS(337),
    [anon_sym_SLEEP] = ACTIONS(337),
    [anon_sym_INFO] = ACTIONS(337),
    [anon_sym_KV] = ACTIONS(337),
    [anon_sym_FUNCTION] = ACTIONS(337),
    [anon_sym_PARAM] = ACTIONS(337),
    [anon_sym_AMP_AMP] = ACTIONS(335),
    [anon_sym_AND] = ACTIONS(337),
    [anon_sym_PIPE_PIPE] = ACTIONS(335),
    [anon_sym_OR] = ACTIONS(337),
    [anon_sym_QMARK_QMARK] = ACTIONS(335),
    [anon_sym_QMARK_COLON] = ACTIONS(335),
    [anon_sym_EQ] = ACTIONS(337),
    [anon_sym_IS] = ACTIONS(337),
    [anon_sym_BANG_EQ] = ACTIONS(335),
    [anon_sym_ISNOT] = ACTIONS(335),
    [anon_sym_EQ_EQ] = ACTIONS(335),
    [anon_sym_QMARK_EQ] = ACTIONS(335),
    [anon_sym_STAR_EQ] = ACTIONS(335),
    [anon_sym_TILDE] = ACTIONS(335),
    [anon_sym_BANG_TILDE] = ACTIONS(335),
    [anon_sym_QMARK_TILDE] = ACTIONS(335),
    [anon_sym_STAR_TILDE] = ACTIONS(335),
    [anon_sym_LT] = ACTIONS(337),
    [anon_sym_LT_EQ] = ACTIONS(335),
    [anon_sym_GT] = ACTIONS(337),
    [anon_sym_GT_EQ] = ACTIONS(335),
    [anon_sym_PLUS] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(337),
    [anon_sym_x] = ACTIONS(337),
    [anon_sym_SLASH] = ACTIONS(337),
    [anon_sym_] = ACTIONS(335),
    [anon_sym_STAR_STAR] = ACTIONS(335),
    [anon_sym_IN] = ACTIONS(337),
    [anon_sym_CONTAINS] = ACTIONS(337),
    [anon_sym_2] = ACTIONS(335),
    [anon_sym_CONTAINSNOT] = ACTIONS(337),
    [anon_sym_3] = ACTIONS(335),
    [anon_sym_CONTAINSALL] = ACTIONS(337),
    [anon_sym_4] = ACTIONS(335),
    [anon_sym_CONTAINSANY] = ACTIONS(337),
    [anon_sym_5] = ACTIONS(335),
    [anon_sym_CONTAINSNONE] = ACTIONS(337),
    [anon_sym_6] = ACTIONS(335),
    [anon_sym_INSIDE] = ACTIONS(337),
    [anon_sym_7] = ACTIONS(335),
    [anon_sym_NOTINSIDE] = ACTIONS(337),
    [anon_sym_NOTIN] = ACTIONS(335),
    [anon_sym_8] = ACTIONS(335),
    [anon_sym_ALLINSIDE] = ACTIONS(337),
    [anon_sym_9] = ACTIONS(335),
    [anon_sym_ANYINSIDE] = ACTIONS(337),
    [anon_sym_10] = ACTIONS(335),
    [anon_sym_NONEINSIDE] = ACTIONS(337),
    [anon_sym_11] = ACTIONS(335),
    [anon_sym_OUTSIDE] = ACTIONS(337),
    [anon_sym_INTERSECTS] = ACTIONS(337),
    [anon_sym_LPAREN] = ACTIONS(335),
    [anon_sym_RPAREN] = ACTIONS(335),
    [anon_sym_LBRACK] = ACTIONS(335),
    [anon_sym_RBRACK] = ACTIONS(335),
    [anon_sym_DASH_GT] = ACTIONS(335),
    [anon_sym_LT_DASH] = ACTIONS(335),
    [anon_sym_COMMA] = ACTIONS(335),
    [anon_sym_SEMI] = ACTIONS(335),
    [anon_sym_COLON] = ACTIONS(335),
    [anon_sym_any] = ACTIONS(337),
    [anon_sym_array] = ACTIONS(337),
    [anon_sym_bool] = ACTIONS(337),
    [anon_sym_datetime] = ACTIONS(337),
    [anon_sym_decimal] = ACTIONS(337),
    [anon_sym_duration] = ACTIONS(337),
    [anon_sym_float] = ACTIONS(337),
    [anon_sym_int] = ACTIONS(337),
    [anon_sym_number] = ACTIONS(337),
    [anon_sym_object] = ACTIONS(337),
    [anon_sym_string] = ACTIONS(337),
    [anon_sym_record] = ACTIONS(337),
    [anon_sym_geometry] = ACTIONS(337),
    [anon_sym_EDDSA] = ACTIONS(337),
    [anon_sym_ES256] = ACTIONS(337),
    [anon_sym_ES384] = ACTIONS(337),
    [anon_sym_ES512] = ACTIONS(337),
    [anon_sym_HS256] = ACTIONS(337),
    [anon_sym_HS384] = ACTIONS(337),
    [anon_sym_HS512] = ACTIONS(337),
    [anon_sym_PS256] = ACTIONS(337),
    [anon_sym_PS384] = ACTIONS(337),
    [anon_sym_PS512] = ACTIONS(337),
    [anon_sym_RS256] = ACTIONS(337),
    [anon_sym_RS384] = ACTIONS(337),
    [anon_sym_RS512] = ACTIONS(337),
    [aux_sym_function_token1] = ACTIONS(335),
    [aux_sym_function_token2] = ACTIONS(335),
    [anon_sym_count] = ACTIONS(337),
    [aux_sym_function_token3] = ACTIONS(335),
    [aux_sym_function_token4] = ACTIONS(335),
    [aux_sym_function_token5] = ACTIONS(335),
    [aux_sym_function_token6] = ACTIONS(335),
    [aux_sym_function_token7] = ACTIONS(335),
    [aux_sym_function_token8] = ACTIONS(335),
    [aux_sym_function_token9] = ACTIONS(335),
    [aux_sym_function_token10] = ACTIONS(337),
    [aux_sym_function_token11] = ACTIONS(335),
    [aux_sym_function_token12] = ACTIONS(337),
    [aux_sym_function_token13] = ACTIONS(335),
    [aux_sym_function_token14] = ACTIONS(335),
    [aux_sym_function_token15] = ACTIONS(335),
    [aux_sym_function_token16] = ACTIONS(337),
    [anon_sym_true] = ACTIONS(337),
    [anon_sym_false] = ACTIONS(337),
    [anon_sym_TRUE] = ACTIONS(337),
    [anon_sym_FALSE] = ACTIONS(337),
    [anon_sym_null] = ACTIONS(337),
    [anon_sym_NULL] = ACTIONS(337),
    [anon_sym_none] = ACTIONS(337),
    [anon_sym_NONE] = ACTIONS(337),
    [sym_variable] = ACTIONS(335),
    [sym_comment] = ACTIONS(335),
    [anon_sym_SQUOTE] = ACTIONS(335),
    [anon_sym_DQUOTE] = ACTIONS(335),
  },
  [31] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(331),
    [anon_sym_RBRACE_SEMI] = ACTIONS(331),
    [anon_sym_RBRACE_COMMA] = ACTIONS(331),
    [anon_sym_LBRACE] = ACTIONS(331),
    [anon_sym_RBRACE] = ACTIONS(333),
    [aux_sym_future_token1] = ACTIONS(331),
    [aux_sym_casting_token1] = ACTIONS(331),
    [aux_sym_property_token1] = ACTIONS(333),
    [aux_sym_identifier_token1] = ACTIONS(333),
    [aux_sym_duration_token1] = ACTIONS(333),
    [aux_sym_constant_token1] = ACTIONS(331),
    [aux_sym_number_token1] = ACTIONS(333),
    [aux_sym_record_token1] = ACTIONS(331),
    [aux_sym_record_token2] = ACTIONS(331),
    [anon_sym_USE] = ACTIONS(333),
    [anon_sym_NS] = ACTIONS(333),
    [anon_sym_DB] = ACTIONS(333),
    [anon_sym_LET] = ACTIONS(333),
    [anon_sym_BEGIN] = ACTIONS(333),
    [anon_sym_TRANSACTION] = ACTIONS(333),
    [anon_sym_CANCEL] = ACTIONS(333),
    [anon_sym_COMMIT] = ACTIONS(333),
    [anon_sym_IF] = ACTIONS(333),
    [anon_sym_ELSE] = ACTIONS(333),
    [anon_sym_THEN] = ACTIONS(333),
    [anon_sym_END] = ACTIONS(333),
    [anon_sym_SELECT] = ACTIONS(333),
    [anon_sym_FROM] = ACTIONS(333),
    [anon_sym_WHERE] = ACTIONS(333),
    [anon_sym_SPLIT] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(333),
    [anon_sym_GROUP] = ACTIONS(333),
    [anon_sym_BY] = ACTIONS(333),
    [anon_sym_ORDER] = ACTIONS(333),
    [anon_sym_COLLATE] = ACTIONS(333),
    [anon_sym_NUMERIC] = ACTIONS(333),
    [anon_sym_ASC] = ACTIONS(333),
    [anon_sym_DESC] = ACTIONS(333),
    [anon_sym_LIMIT] = ACTIONS(333),
    [anon_sym_START] = ACTIONS(333),
    [anon_sym_FETCH] = ACTIONS(333),
    [anon_sym_TIMEOUT] = ACTIONS(333),
    [anon_sym_PARALLEL] = ACTIONS(333),
    [anon_sym_INSERT] = ACTIONS(333),
    [anon_sym_IGNORE] = ACTIONS(333),
    [anon_sym_INTO] = ACTIONS(333),
    [anon_sym_VALUES] = ACTIONS(333),
    [anon_sym_ON] = ACTIONS(333),
    [anon_sym_DUPLICATE] = ACTIONS(333),
    [anon_sym_KEY] = ACTIONS(333),
    [anon_sym_UPDATE] = ACTIONS(333),
    [anon_sym_CREATE] = ACTIONS(333),
    [anon_sym_CONTENT] = ACTIONS(333),
    [anon_sym_SET] = ACTIONS(333),
    [anon_sym_RETURN] = ACTIONS(333),
    [anon_sym_BEFORE] = ACTIONS(333),
    [anon_sym_AFTER] = ACTIONS(333),
    [anon_sym_DIFF] = ACTIONS(333),
    [anon_sym_MERGE] = ACTIONS(333),
    [anon_sym_PATCH] = ACTIONS(333),
    [anon_sym_RELATE] = ACTIONS(333),
    [anon_sym_DELETE] = ACTIONS(333),
    [anon_sym_DEFINE] = ACTIONS(333),
    [anon_sym_NAMESPACE] = ACTIONS(333),
    [anon_sym_DATABASE] = ACTIONS(333),
    [anon_sym_LOGIN] = ACTIONS(333),
    [anon_sym_PASSWORD] = ACTIONS(333),
    [anon_sym_PASSHASH] = ACTIONS(333),
    [anon_sym_TOKEN] = ACTIONS(333),
    [anon_sym_SCOPE] = ACTIONS(333),
    [anon_sym_TYPE] = ACTIONS(333),
    [anon_sym_VALUE] = ACTIONS(333),
    [anon_sym_SESSION] = ACTIONS(333),
    [anon_sym_SIGNUP] = ACTIONS(333),
    [anon_sym_SIGNIN] = ACTIONS(333),
    [anon_sym_TABLE] = ACTIONS(333),
    [anon_sym_DROP] = ACTIONS(333),
    [anon_sym_SCHEMAFULL] = ACTIONS(333),
    [anon_sym_SCHEMALESS] = ACTIONS(333),
    [anon_sym_AS] = ACTIONS(333),
    [anon_sym_PERMISSIONS] = ACTIONS(333),
    [anon_sym_FULL] = ACTIONS(333),
    [anon_sym_FOR] = ACTIONS(333),
    [anon_sym_select] = ACTIONS(333),
    [anon_sym_update] = ACTIONS(333),
    [anon_sym_create] = ACTIONS(333),
    [anon_sym_delete] = ACTIONS(333),
    [anon_sym_EVENT] = ACTIONS(333),
    [anon_sym_WHEN] = ACTIONS(333),
    [anon_sym_ASSERT] = ACTIONS(333),
    [anon_sym_INDEX] = ACTIONS(333),
    [anon_sym_FIELDS] = ACTIONS(333),
    [anon_sym_COLUMNS] = ACTIONS(333),
    [anon_sym_UNIQUE] = ACTIONS(333),
    [anon_sym_REMOVE] = ACTIONS(333),
    [anon_sym_SLEEP] = ACTIONS(333),
    [anon_sym_INFO] = ACTIONS(333),
    [anon_sym_KV] = ACTIONS(333),
    [anon_sym_FUNCTION] = ACTIONS(333),
    [anon_sym_PARAM] = ACTIONS(333),
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
    [anon_sym_DASH_GT] = ACTIONS(331),
    [anon_sym_LT_DASH] = ACTIONS(331),
    [anon_sym_COMMA] = ACTIONS(331),
    [anon_sym_SEMI] = ACTIONS(331),
    [anon_sym_COLON] = ACTIONS(331),
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
  [32] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(315),
    [anon_sym_RBRACE_SEMI] = ACTIONS(315),
    [anon_sym_RBRACE_COMMA] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(315),
    [anon_sym_RBRACE] = ACTIONS(317),
    [aux_sym_future_token1] = ACTIONS(315),
    [aux_sym_casting_token1] = ACTIONS(315),
    [aux_sym_property_token1] = ACTIONS(317),
    [aux_sym_identifier_token1] = ACTIONS(317),
    [aux_sym_duration_token1] = ACTIONS(317),
    [aux_sym_constant_token1] = ACTIONS(315),
    [aux_sym_number_token1] = ACTIONS(317),
    [aux_sym_record_token1] = ACTIONS(315),
    [aux_sym_record_token2] = ACTIONS(315),
    [anon_sym_USE] = ACTIONS(317),
    [anon_sym_NS] = ACTIONS(317),
    [anon_sym_DB] = ACTIONS(317),
    [anon_sym_LET] = ACTIONS(317),
    [anon_sym_BEGIN] = ACTIONS(317),
    [anon_sym_TRANSACTION] = ACTIONS(317),
    [anon_sym_CANCEL] = ACTIONS(317),
    [anon_sym_COMMIT] = ACTIONS(317),
    [anon_sym_IF] = ACTIONS(317),
    [anon_sym_ELSE] = ACTIONS(317),
    [anon_sym_THEN] = ACTIONS(317),
    [anon_sym_END] = ACTIONS(317),
    [anon_sym_SELECT] = ACTIONS(317),
    [anon_sym_FROM] = ACTIONS(317),
    [anon_sym_WHERE] = ACTIONS(317),
    [anon_sym_SPLIT] = ACTIONS(317),
    [anon_sym_AT] = ACTIONS(317),
    [anon_sym_GROUP] = ACTIONS(317),
    [anon_sym_BY] = ACTIONS(317),
    [anon_sym_ORDER] = ACTIONS(317),
    [anon_sym_COLLATE] = ACTIONS(317),
    [anon_sym_NUMERIC] = ACTIONS(317),
    [anon_sym_ASC] = ACTIONS(317),
    [anon_sym_DESC] = ACTIONS(317),
    [anon_sym_LIMIT] = ACTIONS(317),
    [anon_sym_START] = ACTIONS(317),
    [anon_sym_FETCH] = ACTIONS(317),
    [anon_sym_TIMEOUT] = ACTIONS(317),
    [anon_sym_PARALLEL] = ACTIONS(317),
    [anon_sym_INSERT] = ACTIONS(317),
    [anon_sym_IGNORE] = ACTIONS(317),
    [anon_sym_INTO] = ACTIONS(317),
    [anon_sym_VALUES] = ACTIONS(317),
    [anon_sym_ON] = ACTIONS(317),
    [anon_sym_DUPLICATE] = ACTIONS(317),
    [anon_sym_KEY] = ACTIONS(317),
    [anon_sym_UPDATE] = ACTIONS(317),
    [anon_sym_CREATE] = ACTIONS(317),
    [anon_sym_CONTENT] = ACTIONS(317),
    [anon_sym_SET] = ACTIONS(317),
    [anon_sym_RETURN] = ACTIONS(317),
    [anon_sym_BEFORE] = ACTIONS(317),
    [anon_sym_AFTER] = ACTIONS(317),
    [anon_sym_DIFF] = ACTIONS(317),
    [anon_sym_MERGE] = ACTIONS(317),
    [anon_sym_PATCH] = ACTIONS(317),
    [anon_sym_RELATE] = ACTIONS(317),
    [anon_sym_DELETE] = ACTIONS(317),
    [anon_sym_DEFINE] = ACTIONS(317),
    [anon_sym_NAMESPACE] = ACTIONS(317),
    [anon_sym_DATABASE] = ACTIONS(317),
    [anon_sym_LOGIN] = ACTIONS(317),
    [anon_sym_PASSWORD] = ACTIONS(317),
    [anon_sym_PASSHASH] = ACTIONS(317),
    [anon_sym_TOKEN] = ACTIONS(317),
    [anon_sym_SCOPE] = ACTIONS(317),
    [anon_sym_TYPE] = ACTIONS(317),
    [anon_sym_VALUE] = ACTIONS(317),
    [anon_sym_SESSION] = ACTIONS(317),
    [anon_sym_SIGNUP] = ACTIONS(317),
    [anon_sym_SIGNIN] = ACTIONS(317),
    [anon_sym_TABLE] = ACTIONS(317),
    [anon_sym_DROP] = ACTIONS(317),
    [anon_sym_SCHEMAFULL] = ACTIONS(317),
    [anon_sym_SCHEMALESS] = ACTIONS(317),
    [anon_sym_AS] = ACTIONS(317),
    [anon_sym_PERMISSIONS] = ACTIONS(317),
    [anon_sym_FULL] = ACTIONS(317),
    [anon_sym_FOR] = ACTIONS(317),
    [anon_sym_select] = ACTIONS(317),
    [anon_sym_update] = ACTIONS(317),
    [anon_sym_create] = ACTIONS(317),
    [anon_sym_delete] = ACTIONS(317),
    [anon_sym_EVENT] = ACTIONS(317),
    [anon_sym_WHEN] = ACTIONS(317),
    [anon_sym_ASSERT] = ACTIONS(317),
    [anon_sym_INDEX] = ACTIONS(317),
    [anon_sym_FIELDS] = ACTIONS(317),
    [anon_sym_COLUMNS] = ACTIONS(317),
    [anon_sym_UNIQUE] = ACTIONS(317),
    [anon_sym_REMOVE] = ACTIONS(317),
    [anon_sym_SLEEP] = ACTIONS(317),
    [anon_sym_INFO] = ACTIONS(317),
    [anon_sym_KV] = ACTIONS(317),
    [anon_sym_FUNCTION] = ACTIONS(317),
    [anon_sym_PARAM] = ACTIONS(317),
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
    [anon_sym_DASH_GT] = ACTIONS(315),
    [anon_sym_LT_DASH] = ACTIONS(315),
    [anon_sym_COMMA] = ACTIONS(315),
    [anon_sym_SEMI] = ACTIONS(315),
    [anon_sym_COLON] = ACTIONS(315),
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
  [33] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(311),
    [anon_sym_RBRACE_SEMI] = ACTIONS(311),
    [anon_sym_RBRACE_COMMA] = ACTIONS(311),
    [anon_sym_LBRACE] = ACTIONS(311),
    [anon_sym_RBRACE] = ACTIONS(313),
    [aux_sym_future_token1] = ACTIONS(311),
    [aux_sym_casting_token1] = ACTIONS(311),
    [aux_sym_property_token1] = ACTIONS(313),
    [aux_sym_identifier_token1] = ACTIONS(313),
    [aux_sym_duration_token1] = ACTIONS(313),
    [aux_sym_constant_token1] = ACTIONS(311),
    [aux_sym_number_token1] = ACTIONS(313),
    [aux_sym_record_token1] = ACTIONS(311),
    [aux_sym_record_token2] = ACTIONS(311),
    [anon_sym_USE] = ACTIONS(313),
    [anon_sym_NS] = ACTIONS(313),
    [anon_sym_DB] = ACTIONS(313),
    [anon_sym_LET] = ACTIONS(313),
    [anon_sym_BEGIN] = ACTIONS(313),
    [anon_sym_TRANSACTION] = ACTIONS(313),
    [anon_sym_CANCEL] = ACTIONS(313),
    [anon_sym_COMMIT] = ACTIONS(313),
    [anon_sym_IF] = ACTIONS(313),
    [anon_sym_ELSE] = ACTIONS(313),
    [anon_sym_THEN] = ACTIONS(313),
    [anon_sym_END] = ACTIONS(313),
    [anon_sym_SELECT] = ACTIONS(313),
    [anon_sym_FROM] = ACTIONS(313),
    [anon_sym_WHERE] = ACTIONS(313),
    [anon_sym_SPLIT] = ACTIONS(313),
    [anon_sym_AT] = ACTIONS(313),
    [anon_sym_GROUP] = ACTIONS(313),
    [anon_sym_BY] = ACTIONS(313),
    [anon_sym_ORDER] = ACTIONS(313),
    [anon_sym_COLLATE] = ACTIONS(313),
    [anon_sym_NUMERIC] = ACTIONS(313),
    [anon_sym_ASC] = ACTIONS(313),
    [anon_sym_DESC] = ACTIONS(313),
    [anon_sym_LIMIT] = ACTIONS(313),
    [anon_sym_START] = ACTIONS(313),
    [anon_sym_FETCH] = ACTIONS(313),
    [anon_sym_TIMEOUT] = ACTIONS(313),
    [anon_sym_PARALLEL] = ACTIONS(313),
    [anon_sym_INSERT] = ACTIONS(313),
    [anon_sym_IGNORE] = ACTIONS(313),
    [anon_sym_INTO] = ACTIONS(313),
    [anon_sym_VALUES] = ACTIONS(313),
    [anon_sym_ON] = ACTIONS(313),
    [anon_sym_DUPLICATE] = ACTIONS(313),
    [anon_sym_KEY] = ACTIONS(313),
    [anon_sym_UPDATE] = ACTIONS(313),
    [anon_sym_CREATE] = ACTIONS(313),
    [anon_sym_CONTENT] = ACTIONS(313),
    [anon_sym_SET] = ACTIONS(313),
    [anon_sym_RETURN] = ACTIONS(313),
    [anon_sym_BEFORE] = ACTIONS(313),
    [anon_sym_AFTER] = ACTIONS(313),
    [anon_sym_DIFF] = ACTIONS(313),
    [anon_sym_MERGE] = ACTIONS(313),
    [anon_sym_PATCH] = ACTIONS(313),
    [anon_sym_RELATE] = ACTIONS(313),
    [anon_sym_DELETE] = ACTIONS(313),
    [anon_sym_DEFINE] = ACTIONS(313),
    [anon_sym_NAMESPACE] = ACTIONS(313),
    [anon_sym_DATABASE] = ACTIONS(313),
    [anon_sym_LOGIN] = ACTIONS(313),
    [anon_sym_PASSWORD] = ACTIONS(313),
    [anon_sym_PASSHASH] = ACTIONS(313),
    [anon_sym_TOKEN] = ACTIONS(313),
    [anon_sym_SCOPE] = ACTIONS(313),
    [anon_sym_TYPE] = ACTIONS(313),
    [anon_sym_VALUE] = ACTIONS(313),
    [anon_sym_SESSION] = ACTIONS(313),
    [anon_sym_SIGNUP] = ACTIONS(313),
    [anon_sym_SIGNIN] = ACTIONS(313),
    [anon_sym_TABLE] = ACTIONS(313),
    [anon_sym_DROP] = ACTIONS(313),
    [anon_sym_SCHEMAFULL] = ACTIONS(313),
    [anon_sym_SCHEMALESS] = ACTIONS(313),
    [anon_sym_AS] = ACTIONS(313),
    [anon_sym_PERMISSIONS] = ACTIONS(313),
    [anon_sym_FULL] = ACTIONS(313),
    [anon_sym_FOR] = ACTIONS(313),
    [anon_sym_select] = ACTIONS(313),
    [anon_sym_update] = ACTIONS(313),
    [anon_sym_create] = ACTIONS(313),
    [anon_sym_delete] = ACTIONS(313),
    [anon_sym_EVENT] = ACTIONS(313),
    [anon_sym_WHEN] = ACTIONS(313),
    [anon_sym_ASSERT] = ACTIONS(313),
    [anon_sym_INDEX] = ACTIONS(313),
    [anon_sym_FIELDS] = ACTIONS(313),
    [anon_sym_COLUMNS] = ACTIONS(313),
    [anon_sym_UNIQUE] = ACTIONS(313),
    [anon_sym_REMOVE] = ACTIONS(313),
    [anon_sym_SLEEP] = ACTIONS(313),
    [anon_sym_INFO] = ACTIONS(313),
    [anon_sym_KV] = ACTIONS(313),
    [anon_sym_FUNCTION] = ACTIONS(313),
    [anon_sym_PARAM] = ACTIONS(313),
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
    [anon_sym_DASH_GT] = ACTIONS(311),
    [anon_sym_LT_DASH] = ACTIONS(311),
    [anon_sym_COMMA] = ACTIONS(311),
    [anon_sym_SEMI] = ACTIONS(311),
    [anon_sym_COLON] = ACTIONS(311),
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
  [34] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(307),
    [anon_sym_RBRACE_SEMI] = ACTIONS(307),
    [anon_sym_RBRACE_COMMA] = ACTIONS(307),
    [anon_sym_LBRACE] = ACTIONS(307),
    [anon_sym_RBRACE] = ACTIONS(309),
    [aux_sym_future_token1] = ACTIONS(307),
    [aux_sym_casting_token1] = ACTIONS(307),
    [aux_sym_property_token1] = ACTIONS(309),
    [aux_sym_identifier_token1] = ACTIONS(309),
    [aux_sym_duration_token1] = ACTIONS(309),
    [aux_sym_constant_token1] = ACTIONS(307),
    [aux_sym_number_token1] = ACTIONS(309),
    [aux_sym_record_token1] = ACTIONS(307),
    [aux_sym_record_token2] = ACTIONS(307),
    [anon_sym_USE] = ACTIONS(309),
    [anon_sym_NS] = ACTIONS(309),
    [anon_sym_DB] = ACTIONS(309),
    [anon_sym_LET] = ACTIONS(309),
    [anon_sym_BEGIN] = ACTIONS(309),
    [anon_sym_TRANSACTION] = ACTIONS(309),
    [anon_sym_CANCEL] = ACTIONS(309),
    [anon_sym_COMMIT] = ACTIONS(309),
    [anon_sym_IF] = ACTIONS(309),
    [anon_sym_ELSE] = ACTIONS(309),
    [anon_sym_THEN] = ACTIONS(309),
    [anon_sym_END] = ACTIONS(309),
    [anon_sym_SELECT] = ACTIONS(309),
    [anon_sym_FROM] = ACTIONS(309),
    [anon_sym_WHERE] = ACTIONS(309),
    [anon_sym_SPLIT] = ACTIONS(309),
    [anon_sym_AT] = ACTIONS(309),
    [anon_sym_GROUP] = ACTIONS(309),
    [anon_sym_BY] = ACTIONS(309),
    [anon_sym_ORDER] = ACTIONS(309),
    [anon_sym_COLLATE] = ACTIONS(309),
    [anon_sym_NUMERIC] = ACTIONS(309),
    [anon_sym_ASC] = ACTIONS(309),
    [anon_sym_DESC] = ACTIONS(309),
    [anon_sym_LIMIT] = ACTIONS(309),
    [anon_sym_START] = ACTIONS(309),
    [anon_sym_FETCH] = ACTIONS(309),
    [anon_sym_TIMEOUT] = ACTIONS(309),
    [anon_sym_PARALLEL] = ACTIONS(309),
    [anon_sym_INSERT] = ACTIONS(309),
    [anon_sym_IGNORE] = ACTIONS(309),
    [anon_sym_INTO] = ACTIONS(309),
    [anon_sym_VALUES] = ACTIONS(309),
    [anon_sym_ON] = ACTIONS(309),
    [anon_sym_DUPLICATE] = ACTIONS(309),
    [anon_sym_KEY] = ACTIONS(309),
    [anon_sym_UPDATE] = ACTIONS(309),
    [anon_sym_CREATE] = ACTIONS(309),
    [anon_sym_CONTENT] = ACTIONS(309),
    [anon_sym_SET] = ACTIONS(309),
    [anon_sym_RETURN] = ACTIONS(309),
    [anon_sym_BEFORE] = ACTIONS(309),
    [anon_sym_AFTER] = ACTIONS(309),
    [anon_sym_DIFF] = ACTIONS(309),
    [anon_sym_MERGE] = ACTIONS(309),
    [anon_sym_PATCH] = ACTIONS(309),
    [anon_sym_RELATE] = ACTIONS(309),
    [anon_sym_DELETE] = ACTIONS(309),
    [anon_sym_DEFINE] = ACTIONS(309),
    [anon_sym_NAMESPACE] = ACTIONS(309),
    [anon_sym_DATABASE] = ACTIONS(309),
    [anon_sym_LOGIN] = ACTIONS(309),
    [anon_sym_PASSWORD] = ACTIONS(309),
    [anon_sym_PASSHASH] = ACTIONS(309),
    [anon_sym_TOKEN] = ACTIONS(309),
    [anon_sym_SCOPE] = ACTIONS(309),
    [anon_sym_TYPE] = ACTIONS(309),
    [anon_sym_VALUE] = ACTIONS(309),
    [anon_sym_SESSION] = ACTIONS(309),
    [anon_sym_SIGNUP] = ACTIONS(309),
    [anon_sym_SIGNIN] = ACTIONS(309),
    [anon_sym_TABLE] = ACTIONS(309),
    [anon_sym_DROP] = ACTIONS(309),
    [anon_sym_SCHEMAFULL] = ACTIONS(309),
    [anon_sym_SCHEMALESS] = ACTIONS(309),
    [anon_sym_AS] = ACTIONS(309),
    [anon_sym_PERMISSIONS] = ACTIONS(309),
    [anon_sym_FULL] = ACTIONS(309),
    [anon_sym_FOR] = ACTIONS(309),
    [anon_sym_select] = ACTIONS(309),
    [anon_sym_update] = ACTIONS(309),
    [anon_sym_create] = ACTIONS(309),
    [anon_sym_delete] = ACTIONS(309),
    [anon_sym_EVENT] = ACTIONS(309),
    [anon_sym_WHEN] = ACTIONS(309),
    [anon_sym_ASSERT] = ACTIONS(309),
    [anon_sym_INDEX] = ACTIONS(309),
    [anon_sym_FIELDS] = ACTIONS(309),
    [anon_sym_COLUMNS] = ACTIONS(309),
    [anon_sym_UNIQUE] = ACTIONS(309),
    [anon_sym_REMOVE] = ACTIONS(309),
    [anon_sym_SLEEP] = ACTIONS(309),
    [anon_sym_INFO] = ACTIONS(309),
    [anon_sym_KV] = ACTIONS(309),
    [anon_sym_FUNCTION] = ACTIONS(309),
    [anon_sym_PARAM] = ACTIONS(309),
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
    [anon_sym_DASH_GT] = ACTIONS(307),
    [anon_sym_LT_DASH] = ACTIONS(307),
    [anon_sym_COMMA] = ACTIONS(307),
    [anon_sym_SEMI] = ACTIONS(307),
    [anon_sym_COLON] = ACTIONS(307),
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
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(327),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(327),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_RBRACE] = ACTIONS(327),
    [aux_sym_future_token1] = ACTIONS(327),
    [aux_sym_casting_token1] = ACTIONS(327),
    [aux_sym_property_token1] = ACTIONS(329),
    [aux_sym_identifier_token1] = ACTIONS(329),
    [aux_sym_duration_token1] = ACTIONS(329),
    [aux_sym_constant_token1] = ACTIONS(327),
    [aux_sym_number_token1] = ACTIONS(329),
    [aux_sym_record_token1] = ACTIONS(327),
    [aux_sym_record_token2] = ACTIONS(327),
    [anon_sym_USE] = ACTIONS(329),
    [anon_sym_NS] = ACTIONS(329),
    [anon_sym_DB] = ACTIONS(329),
    [anon_sym_LET] = ACTIONS(329),
    [anon_sym_BEGIN] = ACTIONS(329),
    [anon_sym_TRANSACTION] = ACTIONS(329),
    [anon_sym_CANCEL] = ACTIONS(329),
    [anon_sym_COMMIT] = ACTIONS(329),
    [anon_sym_IF] = ACTIONS(329),
    [anon_sym_ELSE] = ACTIONS(329),
    [anon_sym_THEN] = ACTIONS(329),
    [anon_sym_END] = ACTIONS(329),
    [anon_sym_SELECT] = ACTIONS(329),
    [anon_sym_FROM] = ACTIONS(329),
    [anon_sym_WHERE] = ACTIONS(329),
    [anon_sym_SPLIT] = ACTIONS(329),
    [anon_sym_AT] = ACTIONS(329),
    [anon_sym_GROUP] = ACTIONS(329),
    [anon_sym_BY] = ACTIONS(329),
    [anon_sym_ORDER] = ACTIONS(329),
    [anon_sym_COLLATE] = ACTIONS(329),
    [anon_sym_NUMERIC] = ACTIONS(329),
    [anon_sym_ASC] = ACTIONS(329),
    [anon_sym_DESC] = ACTIONS(329),
    [anon_sym_LIMIT] = ACTIONS(329),
    [anon_sym_START] = ACTIONS(329),
    [anon_sym_FETCH] = ACTIONS(329),
    [anon_sym_TIMEOUT] = ACTIONS(329),
    [anon_sym_PARALLEL] = ACTIONS(329),
    [anon_sym_INSERT] = ACTIONS(329),
    [anon_sym_IGNORE] = ACTIONS(329),
    [anon_sym_INTO] = ACTIONS(329),
    [anon_sym_VALUES] = ACTIONS(329),
    [anon_sym_ON] = ACTIONS(329),
    [anon_sym_DUPLICATE] = ACTIONS(329),
    [anon_sym_KEY] = ACTIONS(329),
    [anon_sym_UPDATE] = ACTIONS(329),
    [anon_sym_CREATE] = ACTIONS(329),
    [anon_sym_CONTENT] = ACTIONS(329),
    [anon_sym_SET] = ACTIONS(329),
    [anon_sym_RETURN] = ACTIONS(329),
    [anon_sym_BEFORE] = ACTIONS(329),
    [anon_sym_AFTER] = ACTIONS(329),
    [anon_sym_DIFF] = ACTIONS(329),
    [anon_sym_MERGE] = ACTIONS(329),
    [anon_sym_PATCH] = ACTIONS(329),
    [anon_sym_RELATE] = ACTIONS(329),
    [anon_sym_DELETE] = ACTIONS(329),
    [anon_sym_DEFINE] = ACTIONS(329),
    [anon_sym_NAMESPACE] = ACTIONS(329),
    [anon_sym_DATABASE] = ACTIONS(329),
    [anon_sym_LOGIN] = ACTIONS(329),
    [anon_sym_PASSWORD] = ACTIONS(329),
    [anon_sym_PASSHASH] = ACTIONS(329),
    [anon_sym_TOKEN] = ACTIONS(329),
    [anon_sym_SCOPE] = ACTIONS(329),
    [anon_sym_TYPE] = ACTIONS(329),
    [anon_sym_VALUE] = ACTIONS(329),
    [anon_sym_SESSION] = ACTIONS(329),
    [anon_sym_SIGNUP] = ACTIONS(329),
    [anon_sym_SIGNIN] = ACTIONS(329),
    [anon_sym_TABLE] = ACTIONS(329),
    [anon_sym_DROP] = ACTIONS(329),
    [anon_sym_SCHEMAFULL] = ACTIONS(329),
    [anon_sym_SCHEMALESS] = ACTIONS(329),
    [anon_sym_AS] = ACTIONS(329),
    [anon_sym_PERMISSIONS] = ACTIONS(329),
    [anon_sym_FULL] = ACTIONS(329),
    [anon_sym_FOR] = ACTIONS(329),
    [anon_sym_select] = ACTIONS(329),
    [anon_sym_update] = ACTIONS(329),
    [anon_sym_create] = ACTIONS(329),
    [anon_sym_delete] = ACTIONS(329),
    [anon_sym_EVENT] = ACTIONS(329),
    [anon_sym_WHEN] = ACTIONS(329),
    [anon_sym_ASSERT] = ACTIONS(329),
    [anon_sym_INDEX] = ACTIONS(329),
    [anon_sym_FIELDS] = ACTIONS(329),
    [anon_sym_COLUMNS] = ACTIONS(329),
    [anon_sym_UNIQUE] = ACTIONS(329),
    [anon_sym_REMOVE] = ACTIONS(329),
    [anon_sym_SLEEP] = ACTIONS(329),
    [anon_sym_INFO] = ACTIONS(329),
    [anon_sym_KV] = ACTIONS(329),
    [anon_sym_FUNCTION] = ACTIONS(329),
    [anon_sym_PARAM] = ACTIONS(329),
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
    [anon_sym_DASH_GT] = ACTIONS(327),
    [anon_sym_LT_DASH] = ACTIONS(327),
    [anon_sym_COMMA] = ACTIONS(327),
    [anon_sym_SEMI] = ACTIONS(327),
    [anon_sym_COLON] = ACTIONS(327),
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
  [36] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(255),
    [anon_sym_RBRACE_SEMI] = ACTIONS(255),
    [anon_sym_RBRACE_COMMA] = ACTIONS(255),
    [anon_sym_LBRACE] = ACTIONS(255),
    [anon_sym_RBRACE] = ACTIONS(257),
    [aux_sym_future_token1] = ACTIONS(255),
    [aux_sym_casting_token1] = ACTIONS(255),
    [aux_sym_property_token1] = ACTIONS(257),
    [aux_sym_identifier_token1] = ACTIONS(257),
    [aux_sym_duration_token1] = ACTIONS(257),
    [aux_sym_constant_token1] = ACTIONS(255),
    [aux_sym_number_token1] = ACTIONS(257),
    [aux_sym_record_token1] = ACTIONS(255),
    [aux_sym_record_token2] = ACTIONS(255),
    [anon_sym_USE] = ACTIONS(257),
    [anon_sym_NS] = ACTIONS(257),
    [anon_sym_DB] = ACTIONS(257),
    [anon_sym_LET] = ACTIONS(257),
    [anon_sym_BEGIN] = ACTIONS(257),
    [anon_sym_TRANSACTION] = ACTIONS(257),
    [anon_sym_CANCEL] = ACTIONS(257),
    [anon_sym_COMMIT] = ACTIONS(257),
    [anon_sym_IF] = ACTIONS(257),
    [anon_sym_ELSE] = ACTIONS(257),
    [anon_sym_THEN] = ACTIONS(257),
    [anon_sym_END] = ACTIONS(257),
    [anon_sym_SELECT] = ACTIONS(257),
    [anon_sym_FROM] = ACTIONS(257),
    [anon_sym_WHERE] = ACTIONS(257),
    [anon_sym_SPLIT] = ACTIONS(257),
    [anon_sym_AT] = ACTIONS(257),
    [anon_sym_GROUP] = ACTIONS(257),
    [anon_sym_BY] = ACTIONS(257),
    [anon_sym_ORDER] = ACTIONS(257),
    [anon_sym_COLLATE] = ACTIONS(257),
    [anon_sym_NUMERIC] = ACTIONS(257),
    [anon_sym_ASC] = ACTIONS(257),
    [anon_sym_DESC] = ACTIONS(257),
    [anon_sym_LIMIT] = ACTIONS(257),
    [anon_sym_START] = ACTIONS(257),
    [anon_sym_FETCH] = ACTIONS(257),
    [anon_sym_TIMEOUT] = ACTIONS(257),
    [anon_sym_PARALLEL] = ACTIONS(257),
    [anon_sym_INSERT] = ACTIONS(257),
    [anon_sym_IGNORE] = ACTIONS(257),
    [anon_sym_INTO] = ACTIONS(257),
    [anon_sym_VALUES] = ACTIONS(257),
    [anon_sym_ON] = ACTIONS(257),
    [anon_sym_DUPLICATE] = ACTIONS(257),
    [anon_sym_KEY] = ACTIONS(257),
    [anon_sym_UPDATE] = ACTIONS(257),
    [anon_sym_CREATE] = ACTIONS(257),
    [anon_sym_CONTENT] = ACTIONS(257),
    [anon_sym_SET] = ACTIONS(257),
    [anon_sym_RETURN] = ACTIONS(257),
    [anon_sym_BEFORE] = ACTIONS(257),
    [anon_sym_AFTER] = ACTIONS(257),
    [anon_sym_DIFF] = ACTIONS(257),
    [anon_sym_MERGE] = ACTIONS(257),
    [anon_sym_PATCH] = ACTIONS(257),
    [anon_sym_RELATE] = ACTIONS(257),
    [anon_sym_DELETE] = ACTIONS(257),
    [anon_sym_DEFINE] = ACTIONS(257),
    [anon_sym_NAMESPACE] = ACTIONS(257),
    [anon_sym_DATABASE] = ACTIONS(257),
    [anon_sym_LOGIN] = ACTIONS(257),
    [anon_sym_PASSWORD] = ACTIONS(257),
    [anon_sym_PASSHASH] = ACTIONS(257),
    [anon_sym_TOKEN] = ACTIONS(257),
    [anon_sym_SCOPE] = ACTIONS(257),
    [anon_sym_TYPE] = ACTIONS(257),
    [anon_sym_VALUE] = ACTIONS(257),
    [anon_sym_SESSION] = ACTIONS(257),
    [anon_sym_SIGNUP] = ACTIONS(257),
    [anon_sym_SIGNIN] = ACTIONS(257),
    [anon_sym_TABLE] = ACTIONS(257),
    [anon_sym_DROP] = ACTIONS(257),
    [anon_sym_SCHEMAFULL] = ACTIONS(257),
    [anon_sym_SCHEMALESS] = ACTIONS(257),
    [anon_sym_AS] = ACTIONS(257),
    [anon_sym_PERMISSIONS] = ACTIONS(257),
    [anon_sym_FULL] = ACTIONS(257),
    [anon_sym_FOR] = ACTIONS(257),
    [anon_sym_select] = ACTIONS(257),
    [anon_sym_update] = ACTIONS(257),
    [anon_sym_create] = ACTIONS(257),
    [anon_sym_delete] = ACTIONS(257),
    [anon_sym_EVENT] = ACTIONS(257),
    [anon_sym_WHEN] = ACTIONS(257),
    [anon_sym_ASSERT] = ACTIONS(257),
    [anon_sym_INDEX] = ACTIONS(257),
    [anon_sym_FIELDS] = ACTIONS(257),
    [anon_sym_COLUMNS] = ACTIONS(257),
    [anon_sym_UNIQUE] = ACTIONS(257),
    [anon_sym_REMOVE] = ACTIONS(257),
    [anon_sym_SLEEP] = ACTIONS(257),
    [anon_sym_INFO] = ACTIONS(257),
    [anon_sym_KV] = ACTIONS(257),
    [anon_sym_FUNCTION] = ACTIONS(257),
    [anon_sym_PARAM] = ACTIONS(257),
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
    [anon_sym_DASH_GT] = ACTIONS(255),
    [anon_sym_LT_DASH] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(255),
    [anon_sym_SEMI] = ACTIONS(255),
    [anon_sym_COLON] = ACTIONS(255),
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
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(323),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(323),
    [anon_sym_LBRACE] = ACTIONS(323),
    [anon_sym_RBRACE] = ACTIONS(323),
    [aux_sym_future_token1] = ACTIONS(323),
    [aux_sym_casting_token1] = ACTIONS(323),
    [aux_sym_property_token1] = ACTIONS(325),
    [aux_sym_identifier_token1] = ACTIONS(325),
    [aux_sym_duration_token1] = ACTIONS(325),
    [aux_sym_constant_token1] = ACTIONS(323),
    [aux_sym_number_token1] = ACTIONS(325),
    [aux_sym_record_token1] = ACTIONS(323),
    [aux_sym_record_token2] = ACTIONS(323),
    [anon_sym_USE] = ACTIONS(325),
    [anon_sym_NS] = ACTIONS(325),
    [anon_sym_DB] = ACTIONS(325),
    [anon_sym_LET] = ACTIONS(325),
    [anon_sym_BEGIN] = ACTIONS(325),
    [anon_sym_TRANSACTION] = ACTIONS(325),
    [anon_sym_CANCEL] = ACTIONS(325),
    [anon_sym_COMMIT] = ACTIONS(325),
    [anon_sym_IF] = ACTIONS(325),
    [anon_sym_ELSE] = ACTIONS(325),
    [anon_sym_THEN] = ACTIONS(325),
    [anon_sym_END] = ACTIONS(325),
    [anon_sym_SELECT] = ACTIONS(325),
    [anon_sym_FROM] = ACTIONS(325),
    [anon_sym_WHERE] = ACTIONS(325),
    [anon_sym_SPLIT] = ACTIONS(325),
    [anon_sym_AT] = ACTIONS(325),
    [anon_sym_GROUP] = ACTIONS(325),
    [anon_sym_BY] = ACTIONS(325),
    [anon_sym_ORDER] = ACTIONS(325),
    [anon_sym_COLLATE] = ACTIONS(325),
    [anon_sym_NUMERIC] = ACTIONS(325),
    [anon_sym_ASC] = ACTIONS(325),
    [anon_sym_DESC] = ACTIONS(325),
    [anon_sym_LIMIT] = ACTIONS(325),
    [anon_sym_START] = ACTIONS(325),
    [anon_sym_FETCH] = ACTIONS(325),
    [anon_sym_TIMEOUT] = ACTIONS(325),
    [anon_sym_PARALLEL] = ACTIONS(325),
    [anon_sym_INSERT] = ACTIONS(325),
    [anon_sym_IGNORE] = ACTIONS(325),
    [anon_sym_INTO] = ACTIONS(325),
    [anon_sym_VALUES] = ACTIONS(325),
    [anon_sym_ON] = ACTIONS(325),
    [anon_sym_DUPLICATE] = ACTIONS(325),
    [anon_sym_KEY] = ACTIONS(325),
    [anon_sym_UPDATE] = ACTIONS(325),
    [anon_sym_CREATE] = ACTIONS(325),
    [anon_sym_CONTENT] = ACTIONS(325),
    [anon_sym_SET] = ACTIONS(325),
    [anon_sym_RETURN] = ACTIONS(325),
    [anon_sym_BEFORE] = ACTIONS(325),
    [anon_sym_AFTER] = ACTIONS(325),
    [anon_sym_DIFF] = ACTIONS(325),
    [anon_sym_MERGE] = ACTIONS(325),
    [anon_sym_PATCH] = ACTIONS(325),
    [anon_sym_RELATE] = ACTIONS(325),
    [anon_sym_DELETE] = ACTIONS(325),
    [anon_sym_DEFINE] = ACTIONS(325),
    [anon_sym_NAMESPACE] = ACTIONS(325),
    [anon_sym_DATABASE] = ACTIONS(325),
    [anon_sym_LOGIN] = ACTIONS(325),
    [anon_sym_PASSWORD] = ACTIONS(325),
    [anon_sym_PASSHASH] = ACTIONS(325),
    [anon_sym_TOKEN] = ACTIONS(325),
    [anon_sym_SCOPE] = ACTIONS(325),
    [anon_sym_TYPE] = ACTIONS(325),
    [anon_sym_VALUE] = ACTIONS(325),
    [anon_sym_SESSION] = ACTIONS(325),
    [anon_sym_SIGNUP] = ACTIONS(325),
    [anon_sym_SIGNIN] = ACTIONS(325),
    [anon_sym_TABLE] = ACTIONS(325),
    [anon_sym_DROP] = ACTIONS(325),
    [anon_sym_SCHEMAFULL] = ACTIONS(325),
    [anon_sym_SCHEMALESS] = ACTIONS(325),
    [anon_sym_AS] = ACTIONS(325),
    [anon_sym_PERMISSIONS] = ACTIONS(325),
    [anon_sym_FULL] = ACTIONS(325),
    [anon_sym_FOR] = ACTIONS(325),
    [anon_sym_select] = ACTIONS(325),
    [anon_sym_update] = ACTIONS(325),
    [anon_sym_create] = ACTIONS(325),
    [anon_sym_delete] = ACTIONS(325),
    [anon_sym_EVENT] = ACTIONS(325),
    [anon_sym_WHEN] = ACTIONS(325),
    [anon_sym_ASSERT] = ACTIONS(325),
    [anon_sym_INDEX] = ACTIONS(325),
    [anon_sym_FIELDS] = ACTIONS(325),
    [anon_sym_COLUMNS] = ACTIONS(325),
    [anon_sym_UNIQUE] = ACTIONS(325),
    [anon_sym_REMOVE] = ACTIONS(325),
    [anon_sym_SLEEP] = ACTIONS(325),
    [anon_sym_INFO] = ACTIONS(325),
    [anon_sym_KV] = ACTIONS(325),
    [anon_sym_FUNCTION] = ACTIONS(325),
    [anon_sym_PARAM] = ACTIONS(325),
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
    [anon_sym_DASH_GT] = ACTIONS(323),
    [anon_sym_LT_DASH] = ACTIONS(323),
    [anon_sym_COMMA] = ACTIONS(323),
    [anon_sym_SEMI] = ACTIONS(323),
    [anon_sym_COLON] = ACTIONS(323),
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
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(339),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(339),
    [anon_sym_LBRACE] = ACTIONS(339),
    [anon_sym_RBRACE] = ACTIONS(339),
    [aux_sym_future_token1] = ACTIONS(339),
    [aux_sym_casting_token1] = ACTIONS(339),
    [aux_sym_property_token1] = ACTIONS(341),
    [aux_sym_identifier_token1] = ACTIONS(341),
    [aux_sym_duration_token1] = ACTIONS(341),
    [aux_sym_constant_token1] = ACTIONS(339),
    [aux_sym_number_token1] = ACTIONS(341),
    [aux_sym_record_token1] = ACTIONS(339),
    [aux_sym_record_token2] = ACTIONS(339),
    [anon_sym_USE] = ACTIONS(341),
    [anon_sym_NS] = ACTIONS(341),
    [anon_sym_DB] = ACTIONS(341),
    [anon_sym_LET] = ACTIONS(341),
    [anon_sym_BEGIN] = ACTIONS(341),
    [anon_sym_TRANSACTION] = ACTIONS(341),
    [anon_sym_CANCEL] = ACTIONS(341),
    [anon_sym_COMMIT] = ACTIONS(341),
    [anon_sym_IF] = ACTIONS(341),
    [anon_sym_ELSE] = ACTIONS(341),
    [anon_sym_THEN] = ACTIONS(341),
    [anon_sym_END] = ACTIONS(341),
    [anon_sym_SELECT] = ACTIONS(341),
    [anon_sym_FROM] = ACTIONS(341),
    [anon_sym_WHERE] = ACTIONS(341),
    [anon_sym_SPLIT] = ACTIONS(341),
    [anon_sym_AT] = ACTIONS(341),
    [anon_sym_GROUP] = ACTIONS(341),
    [anon_sym_BY] = ACTIONS(341),
    [anon_sym_ORDER] = ACTIONS(341),
    [anon_sym_COLLATE] = ACTIONS(341),
    [anon_sym_NUMERIC] = ACTIONS(341),
    [anon_sym_ASC] = ACTIONS(341),
    [anon_sym_DESC] = ACTIONS(341),
    [anon_sym_LIMIT] = ACTIONS(341),
    [anon_sym_START] = ACTIONS(341),
    [anon_sym_FETCH] = ACTIONS(341),
    [anon_sym_TIMEOUT] = ACTIONS(341),
    [anon_sym_PARALLEL] = ACTIONS(341),
    [anon_sym_INSERT] = ACTIONS(341),
    [anon_sym_IGNORE] = ACTIONS(341),
    [anon_sym_INTO] = ACTIONS(341),
    [anon_sym_VALUES] = ACTIONS(341),
    [anon_sym_ON] = ACTIONS(341),
    [anon_sym_DUPLICATE] = ACTIONS(341),
    [anon_sym_KEY] = ACTIONS(341),
    [anon_sym_UPDATE] = ACTIONS(341),
    [anon_sym_CREATE] = ACTIONS(341),
    [anon_sym_CONTENT] = ACTIONS(341),
    [anon_sym_SET] = ACTIONS(341),
    [anon_sym_RETURN] = ACTIONS(341),
    [anon_sym_BEFORE] = ACTIONS(341),
    [anon_sym_AFTER] = ACTIONS(341),
    [anon_sym_DIFF] = ACTIONS(341),
    [anon_sym_MERGE] = ACTIONS(341),
    [anon_sym_PATCH] = ACTIONS(341),
    [anon_sym_RELATE] = ACTIONS(341),
    [anon_sym_DELETE] = ACTIONS(341),
    [anon_sym_DEFINE] = ACTIONS(341),
    [anon_sym_NAMESPACE] = ACTIONS(341),
    [anon_sym_DATABASE] = ACTIONS(341),
    [anon_sym_LOGIN] = ACTIONS(341),
    [anon_sym_PASSWORD] = ACTIONS(341),
    [anon_sym_PASSHASH] = ACTIONS(341),
    [anon_sym_TOKEN] = ACTIONS(341),
    [anon_sym_SCOPE] = ACTIONS(341),
    [anon_sym_TYPE] = ACTIONS(341),
    [anon_sym_VALUE] = ACTIONS(341),
    [anon_sym_SESSION] = ACTIONS(341),
    [anon_sym_SIGNUP] = ACTIONS(341),
    [anon_sym_SIGNIN] = ACTIONS(341),
    [anon_sym_TABLE] = ACTIONS(341),
    [anon_sym_DROP] = ACTIONS(341),
    [anon_sym_SCHEMAFULL] = ACTIONS(341),
    [anon_sym_SCHEMALESS] = ACTIONS(341),
    [anon_sym_AS] = ACTIONS(341),
    [anon_sym_PERMISSIONS] = ACTIONS(341),
    [anon_sym_FULL] = ACTIONS(341),
    [anon_sym_FOR] = ACTIONS(341),
    [anon_sym_select] = ACTIONS(341),
    [anon_sym_update] = ACTIONS(341),
    [anon_sym_create] = ACTIONS(341),
    [anon_sym_delete] = ACTIONS(341),
    [anon_sym_EVENT] = ACTIONS(341),
    [anon_sym_WHEN] = ACTIONS(341),
    [anon_sym_ASSERT] = ACTIONS(341),
    [anon_sym_INDEX] = ACTIONS(341),
    [anon_sym_FIELDS] = ACTIONS(341),
    [anon_sym_COLUMNS] = ACTIONS(341),
    [anon_sym_UNIQUE] = ACTIONS(341),
    [anon_sym_REMOVE] = ACTIONS(341),
    [anon_sym_SLEEP] = ACTIONS(341),
    [anon_sym_INFO] = ACTIONS(341),
    [anon_sym_KV] = ACTIONS(341),
    [anon_sym_FUNCTION] = ACTIONS(341),
    [anon_sym_PARAM] = ACTIONS(341),
    [anon_sym_AMP_AMP] = ACTIONS(339),
    [anon_sym_AND] = ACTIONS(341),
    [anon_sym_PIPE_PIPE] = ACTIONS(339),
    [anon_sym_OR] = ACTIONS(341),
    [anon_sym_QMARK_QMARK] = ACTIONS(339),
    [anon_sym_QMARK_COLON] = ACTIONS(339),
    [anon_sym_EQ] = ACTIONS(341),
    [anon_sym_IS] = ACTIONS(341),
    [anon_sym_BANG_EQ] = ACTIONS(339),
    [anon_sym_ISNOT] = ACTIONS(339),
    [anon_sym_EQ_EQ] = ACTIONS(339),
    [anon_sym_QMARK_EQ] = ACTIONS(339),
    [anon_sym_STAR_EQ] = ACTIONS(339),
    [anon_sym_TILDE] = ACTIONS(339),
    [anon_sym_BANG_TILDE] = ACTIONS(339),
    [anon_sym_QMARK_TILDE] = ACTIONS(339),
    [anon_sym_STAR_TILDE] = ACTIONS(339),
    [anon_sym_LT] = ACTIONS(341),
    [anon_sym_LT_EQ] = ACTIONS(339),
    [anon_sym_GT] = ACTIONS(341),
    [anon_sym_GT_EQ] = ACTIONS(339),
    [anon_sym_PLUS] = ACTIONS(339),
    [anon_sym_DASH] = ACTIONS(341),
    [anon_sym_STAR] = ACTIONS(341),
    [anon_sym_x] = ACTIONS(341),
    [anon_sym_SLASH] = ACTIONS(341),
    [anon_sym_] = ACTIONS(339),
    [anon_sym_STAR_STAR] = ACTIONS(339),
    [anon_sym_IN] = ACTIONS(341),
    [anon_sym_CONTAINS] = ACTIONS(341),
    [anon_sym_2] = ACTIONS(339),
    [anon_sym_CONTAINSNOT] = ACTIONS(341),
    [anon_sym_3] = ACTIONS(339),
    [anon_sym_CONTAINSALL] = ACTIONS(341),
    [anon_sym_4] = ACTIONS(339),
    [anon_sym_CONTAINSANY] = ACTIONS(341),
    [anon_sym_5] = ACTIONS(339),
    [anon_sym_CONTAINSNONE] = ACTIONS(341),
    [anon_sym_6] = ACTIONS(339),
    [anon_sym_INSIDE] = ACTIONS(341),
    [anon_sym_7] = ACTIONS(339),
    [anon_sym_NOTINSIDE] = ACTIONS(341),
    [anon_sym_NOTIN] = ACTIONS(339),
    [anon_sym_8] = ACTIONS(339),
    [anon_sym_ALLINSIDE] = ACTIONS(341),
    [anon_sym_9] = ACTIONS(339),
    [anon_sym_ANYINSIDE] = ACTIONS(341),
    [anon_sym_10] = ACTIONS(339),
    [anon_sym_NONEINSIDE] = ACTIONS(341),
    [anon_sym_11] = ACTIONS(339),
    [anon_sym_OUTSIDE] = ACTIONS(341),
    [anon_sym_INTERSECTS] = ACTIONS(341),
    [anon_sym_LPAREN] = ACTIONS(339),
    [anon_sym_RPAREN] = ACTIONS(339),
    [anon_sym_LBRACK] = ACTIONS(339),
    [anon_sym_RBRACK] = ACTIONS(339),
    [anon_sym_DASH_GT] = ACTIONS(339),
    [anon_sym_LT_DASH] = ACTIONS(339),
    [anon_sym_COMMA] = ACTIONS(339),
    [anon_sym_SEMI] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(339),
    [anon_sym_any] = ACTIONS(341),
    [anon_sym_array] = ACTIONS(341),
    [anon_sym_bool] = ACTIONS(341),
    [anon_sym_datetime] = ACTIONS(341),
    [anon_sym_decimal] = ACTIONS(341),
    [anon_sym_duration] = ACTIONS(341),
    [anon_sym_float] = ACTIONS(341),
    [anon_sym_int] = ACTIONS(341),
    [anon_sym_number] = ACTIONS(341),
    [anon_sym_object] = ACTIONS(341),
    [anon_sym_string] = ACTIONS(341),
    [anon_sym_record] = ACTIONS(341),
    [anon_sym_geometry] = ACTIONS(341),
    [anon_sym_EDDSA] = ACTIONS(341),
    [anon_sym_ES256] = ACTIONS(341),
    [anon_sym_ES384] = ACTIONS(341),
    [anon_sym_ES512] = ACTIONS(341),
    [anon_sym_HS256] = ACTIONS(341),
    [anon_sym_HS384] = ACTIONS(341),
    [anon_sym_HS512] = ACTIONS(341),
    [anon_sym_PS256] = ACTIONS(341),
    [anon_sym_PS384] = ACTIONS(341),
    [anon_sym_PS512] = ACTIONS(341),
    [anon_sym_RS256] = ACTIONS(341),
    [anon_sym_RS384] = ACTIONS(341),
    [anon_sym_RS512] = ACTIONS(341),
    [aux_sym_function_token1] = ACTIONS(339),
    [aux_sym_function_token2] = ACTIONS(339),
    [anon_sym_count] = ACTIONS(341),
    [aux_sym_function_token3] = ACTIONS(339),
    [aux_sym_function_token4] = ACTIONS(339),
    [aux_sym_function_token5] = ACTIONS(339),
    [aux_sym_function_token6] = ACTIONS(339),
    [aux_sym_function_token7] = ACTIONS(339),
    [aux_sym_function_token8] = ACTIONS(339),
    [aux_sym_function_token9] = ACTIONS(339),
    [aux_sym_function_token10] = ACTIONS(341),
    [aux_sym_function_token11] = ACTIONS(339),
    [aux_sym_function_token12] = ACTIONS(341),
    [aux_sym_function_token13] = ACTIONS(339),
    [aux_sym_function_token14] = ACTIONS(339),
    [aux_sym_function_token15] = ACTIONS(339),
    [aux_sym_function_token16] = ACTIONS(341),
    [anon_sym_true] = ACTIONS(341),
    [anon_sym_false] = ACTIONS(341),
    [anon_sym_TRUE] = ACTIONS(341),
    [anon_sym_FALSE] = ACTIONS(341),
    [anon_sym_null] = ACTIONS(341),
    [anon_sym_NULL] = ACTIONS(341),
    [anon_sym_none] = ACTIONS(341),
    [anon_sym_NONE] = ACTIONS(341),
    [sym_variable] = ACTIONS(339),
    [sym_comment] = ACTIONS(339),
    [anon_sym_SQUOTE] = ACTIONS(339),
    [anon_sym_DQUOTE] = ACTIONS(339),
  },
  [39] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(303),
    [anon_sym_RBRACE_SEMI] = ACTIONS(303),
    [anon_sym_RBRACE_COMMA] = ACTIONS(303),
    [anon_sym_LBRACE] = ACTIONS(303),
    [anon_sym_RBRACE] = ACTIONS(305),
    [aux_sym_future_token1] = ACTIONS(303),
    [aux_sym_casting_token1] = ACTIONS(303),
    [aux_sym_property_token1] = ACTIONS(305),
    [aux_sym_identifier_token1] = ACTIONS(305),
    [aux_sym_duration_token1] = ACTIONS(305),
    [aux_sym_constant_token1] = ACTIONS(303),
    [aux_sym_number_token1] = ACTIONS(305),
    [aux_sym_record_token1] = ACTIONS(303),
    [aux_sym_record_token2] = ACTIONS(303),
    [anon_sym_USE] = ACTIONS(305),
    [anon_sym_NS] = ACTIONS(305),
    [anon_sym_DB] = ACTIONS(305),
    [anon_sym_LET] = ACTIONS(305),
    [anon_sym_BEGIN] = ACTIONS(305),
    [anon_sym_TRANSACTION] = ACTIONS(305),
    [anon_sym_CANCEL] = ACTIONS(305),
    [anon_sym_COMMIT] = ACTIONS(305),
    [anon_sym_IF] = ACTIONS(305),
    [anon_sym_ELSE] = ACTIONS(305),
    [anon_sym_THEN] = ACTIONS(305),
    [anon_sym_END] = ACTIONS(305),
    [anon_sym_SELECT] = ACTIONS(305),
    [anon_sym_FROM] = ACTIONS(305),
    [anon_sym_WHERE] = ACTIONS(305),
    [anon_sym_SPLIT] = ACTIONS(305),
    [anon_sym_AT] = ACTIONS(305),
    [anon_sym_GROUP] = ACTIONS(305),
    [anon_sym_BY] = ACTIONS(305),
    [anon_sym_ORDER] = ACTIONS(305),
    [anon_sym_COLLATE] = ACTIONS(305),
    [anon_sym_NUMERIC] = ACTIONS(305),
    [anon_sym_ASC] = ACTIONS(305),
    [anon_sym_DESC] = ACTIONS(305),
    [anon_sym_LIMIT] = ACTIONS(305),
    [anon_sym_START] = ACTIONS(305),
    [anon_sym_FETCH] = ACTIONS(305),
    [anon_sym_TIMEOUT] = ACTIONS(305),
    [anon_sym_PARALLEL] = ACTIONS(305),
    [anon_sym_INSERT] = ACTIONS(305),
    [anon_sym_IGNORE] = ACTIONS(305),
    [anon_sym_INTO] = ACTIONS(305),
    [anon_sym_VALUES] = ACTIONS(305),
    [anon_sym_ON] = ACTIONS(305),
    [anon_sym_DUPLICATE] = ACTIONS(305),
    [anon_sym_KEY] = ACTIONS(305),
    [anon_sym_UPDATE] = ACTIONS(305),
    [anon_sym_CREATE] = ACTIONS(305),
    [anon_sym_CONTENT] = ACTIONS(305),
    [anon_sym_SET] = ACTIONS(305),
    [anon_sym_RETURN] = ACTIONS(305),
    [anon_sym_BEFORE] = ACTIONS(305),
    [anon_sym_AFTER] = ACTIONS(305),
    [anon_sym_DIFF] = ACTIONS(305),
    [anon_sym_MERGE] = ACTIONS(305),
    [anon_sym_PATCH] = ACTIONS(305),
    [anon_sym_RELATE] = ACTIONS(305),
    [anon_sym_DELETE] = ACTIONS(305),
    [anon_sym_DEFINE] = ACTIONS(305),
    [anon_sym_NAMESPACE] = ACTIONS(305),
    [anon_sym_DATABASE] = ACTIONS(305),
    [anon_sym_LOGIN] = ACTIONS(305),
    [anon_sym_PASSWORD] = ACTIONS(305),
    [anon_sym_PASSHASH] = ACTIONS(305),
    [anon_sym_TOKEN] = ACTIONS(305),
    [anon_sym_SCOPE] = ACTIONS(305),
    [anon_sym_TYPE] = ACTIONS(305),
    [anon_sym_VALUE] = ACTIONS(305),
    [anon_sym_SESSION] = ACTIONS(305),
    [anon_sym_SIGNUP] = ACTIONS(305),
    [anon_sym_SIGNIN] = ACTIONS(305),
    [anon_sym_TABLE] = ACTIONS(305),
    [anon_sym_DROP] = ACTIONS(305),
    [anon_sym_SCHEMAFULL] = ACTIONS(305),
    [anon_sym_SCHEMALESS] = ACTIONS(305),
    [anon_sym_AS] = ACTIONS(305),
    [anon_sym_PERMISSIONS] = ACTIONS(305),
    [anon_sym_FULL] = ACTIONS(305),
    [anon_sym_FOR] = ACTIONS(305),
    [anon_sym_select] = ACTIONS(305),
    [anon_sym_update] = ACTIONS(305),
    [anon_sym_create] = ACTIONS(305),
    [anon_sym_delete] = ACTIONS(305),
    [anon_sym_EVENT] = ACTIONS(305),
    [anon_sym_WHEN] = ACTIONS(305),
    [anon_sym_ASSERT] = ACTIONS(305),
    [anon_sym_INDEX] = ACTIONS(305),
    [anon_sym_FIELDS] = ACTIONS(305),
    [anon_sym_COLUMNS] = ACTIONS(305),
    [anon_sym_UNIQUE] = ACTIONS(305),
    [anon_sym_REMOVE] = ACTIONS(305),
    [anon_sym_SLEEP] = ACTIONS(305),
    [anon_sym_INFO] = ACTIONS(305),
    [anon_sym_KV] = ACTIONS(305),
    [anon_sym_FUNCTION] = ACTIONS(305),
    [anon_sym_PARAM] = ACTIONS(305),
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
    [anon_sym_DASH_GT] = ACTIONS(303),
    [anon_sym_LT_DASH] = ACTIONS(303),
    [anon_sym_COMMA] = ACTIONS(303),
    [anon_sym_SEMI] = ACTIONS(303),
    [anon_sym_COLON] = ACTIONS(303),
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
  [40] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(299),
    [anon_sym_RBRACE_SEMI] = ACTIONS(299),
    [anon_sym_RBRACE_COMMA] = ACTIONS(299),
    [anon_sym_LBRACE] = ACTIONS(299),
    [anon_sym_RBRACE] = ACTIONS(301),
    [aux_sym_future_token1] = ACTIONS(299),
    [aux_sym_casting_token1] = ACTIONS(299),
    [aux_sym_property_token1] = ACTIONS(301),
    [aux_sym_identifier_token1] = ACTIONS(301),
    [aux_sym_duration_token1] = ACTIONS(301),
    [aux_sym_constant_token1] = ACTIONS(299),
    [aux_sym_number_token1] = ACTIONS(301),
    [aux_sym_record_token1] = ACTIONS(299),
    [aux_sym_record_token2] = ACTIONS(299),
    [anon_sym_USE] = ACTIONS(301),
    [anon_sym_NS] = ACTIONS(301),
    [anon_sym_DB] = ACTIONS(301),
    [anon_sym_LET] = ACTIONS(301),
    [anon_sym_BEGIN] = ACTIONS(301),
    [anon_sym_TRANSACTION] = ACTIONS(301),
    [anon_sym_CANCEL] = ACTIONS(301),
    [anon_sym_COMMIT] = ACTIONS(301),
    [anon_sym_IF] = ACTIONS(301),
    [anon_sym_ELSE] = ACTIONS(301),
    [anon_sym_THEN] = ACTIONS(301),
    [anon_sym_END] = ACTIONS(301),
    [anon_sym_SELECT] = ACTIONS(301),
    [anon_sym_FROM] = ACTIONS(301),
    [anon_sym_WHERE] = ACTIONS(301),
    [anon_sym_SPLIT] = ACTIONS(301),
    [anon_sym_AT] = ACTIONS(301),
    [anon_sym_GROUP] = ACTIONS(301),
    [anon_sym_BY] = ACTIONS(301),
    [anon_sym_ORDER] = ACTIONS(301),
    [anon_sym_COLLATE] = ACTIONS(301),
    [anon_sym_NUMERIC] = ACTIONS(301),
    [anon_sym_ASC] = ACTIONS(301),
    [anon_sym_DESC] = ACTIONS(301),
    [anon_sym_LIMIT] = ACTIONS(301),
    [anon_sym_START] = ACTIONS(301),
    [anon_sym_FETCH] = ACTIONS(301),
    [anon_sym_TIMEOUT] = ACTIONS(301),
    [anon_sym_PARALLEL] = ACTIONS(301),
    [anon_sym_INSERT] = ACTIONS(301),
    [anon_sym_IGNORE] = ACTIONS(301),
    [anon_sym_INTO] = ACTIONS(301),
    [anon_sym_VALUES] = ACTIONS(301),
    [anon_sym_ON] = ACTIONS(301),
    [anon_sym_DUPLICATE] = ACTIONS(301),
    [anon_sym_KEY] = ACTIONS(301),
    [anon_sym_UPDATE] = ACTIONS(301),
    [anon_sym_CREATE] = ACTIONS(301),
    [anon_sym_CONTENT] = ACTIONS(301),
    [anon_sym_SET] = ACTIONS(301),
    [anon_sym_RETURN] = ACTIONS(301),
    [anon_sym_BEFORE] = ACTIONS(301),
    [anon_sym_AFTER] = ACTIONS(301),
    [anon_sym_DIFF] = ACTIONS(301),
    [anon_sym_MERGE] = ACTIONS(301),
    [anon_sym_PATCH] = ACTIONS(301),
    [anon_sym_RELATE] = ACTIONS(301),
    [anon_sym_DELETE] = ACTIONS(301),
    [anon_sym_DEFINE] = ACTIONS(301),
    [anon_sym_NAMESPACE] = ACTIONS(301),
    [anon_sym_DATABASE] = ACTIONS(301),
    [anon_sym_LOGIN] = ACTIONS(301),
    [anon_sym_PASSWORD] = ACTIONS(301),
    [anon_sym_PASSHASH] = ACTIONS(301),
    [anon_sym_TOKEN] = ACTIONS(301),
    [anon_sym_SCOPE] = ACTIONS(301),
    [anon_sym_TYPE] = ACTIONS(301),
    [anon_sym_VALUE] = ACTIONS(301),
    [anon_sym_SESSION] = ACTIONS(301),
    [anon_sym_SIGNUP] = ACTIONS(301),
    [anon_sym_SIGNIN] = ACTIONS(301),
    [anon_sym_TABLE] = ACTIONS(301),
    [anon_sym_DROP] = ACTIONS(301),
    [anon_sym_SCHEMAFULL] = ACTIONS(301),
    [anon_sym_SCHEMALESS] = ACTIONS(301),
    [anon_sym_AS] = ACTIONS(301),
    [anon_sym_PERMISSIONS] = ACTIONS(301),
    [anon_sym_FULL] = ACTIONS(301),
    [anon_sym_FOR] = ACTIONS(301),
    [anon_sym_select] = ACTIONS(301),
    [anon_sym_update] = ACTIONS(301),
    [anon_sym_create] = ACTIONS(301),
    [anon_sym_delete] = ACTIONS(301),
    [anon_sym_EVENT] = ACTIONS(301),
    [anon_sym_WHEN] = ACTIONS(301),
    [anon_sym_ASSERT] = ACTIONS(301),
    [anon_sym_INDEX] = ACTIONS(301),
    [anon_sym_FIELDS] = ACTIONS(301),
    [anon_sym_COLUMNS] = ACTIONS(301),
    [anon_sym_UNIQUE] = ACTIONS(301),
    [anon_sym_REMOVE] = ACTIONS(301),
    [anon_sym_SLEEP] = ACTIONS(301),
    [anon_sym_INFO] = ACTIONS(301),
    [anon_sym_KV] = ACTIONS(301),
    [anon_sym_FUNCTION] = ACTIONS(301),
    [anon_sym_PARAM] = ACTIONS(301),
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
    [anon_sym_DASH_GT] = ACTIONS(299),
    [anon_sym_LT_DASH] = ACTIONS(299),
    [anon_sym_COMMA] = ACTIONS(299),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_COLON] = ACTIONS(299),
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
  [41] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(319),
    [anon_sym_RBRACE_SEMI] = ACTIONS(319),
    [anon_sym_RBRACE_COMMA] = ACTIONS(319),
    [anon_sym_LBRACE] = ACTIONS(319),
    [anon_sym_RBRACE] = ACTIONS(321),
    [aux_sym_future_token1] = ACTIONS(319),
    [aux_sym_casting_token1] = ACTIONS(319),
    [aux_sym_property_token1] = ACTIONS(321),
    [aux_sym_identifier_token1] = ACTIONS(321),
    [aux_sym_duration_token1] = ACTIONS(321),
    [aux_sym_constant_token1] = ACTIONS(319),
    [aux_sym_number_token1] = ACTIONS(321),
    [aux_sym_record_token1] = ACTIONS(319),
    [aux_sym_record_token2] = ACTIONS(319),
    [anon_sym_USE] = ACTIONS(321),
    [anon_sym_NS] = ACTIONS(321),
    [anon_sym_DB] = ACTIONS(321),
    [anon_sym_LET] = ACTIONS(321),
    [anon_sym_BEGIN] = ACTIONS(321),
    [anon_sym_TRANSACTION] = ACTIONS(321),
    [anon_sym_CANCEL] = ACTIONS(321),
    [anon_sym_COMMIT] = ACTIONS(321),
    [anon_sym_IF] = ACTIONS(321),
    [anon_sym_ELSE] = ACTIONS(321),
    [anon_sym_THEN] = ACTIONS(321),
    [anon_sym_END] = ACTIONS(321),
    [anon_sym_SELECT] = ACTIONS(321),
    [anon_sym_FROM] = ACTIONS(321),
    [anon_sym_WHERE] = ACTIONS(321),
    [anon_sym_SPLIT] = ACTIONS(321),
    [anon_sym_AT] = ACTIONS(321),
    [anon_sym_GROUP] = ACTIONS(321),
    [anon_sym_BY] = ACTIONS(321),
    [anon_sym_ORDER] = ACTIONS(321),
    [anon_sym_COLLATE] = ACTIONS(321),
    [anon_sym_NUMERIC] = ACTIONS(321),
    [anon_sym_ASC] = ACTIONS(321),
    [anon_sym_DESC] = ACTIONS(321),
    [anon_sym_LIMIT] = ACTIONS(321),
    [anon_sym_START] = ACTIONS(321),
    [anon_sym_FETCH] = ACTIONS(321),
    [anon_sym_TIMEOUT] = ACTIONS(321),
    [anon_sym_PARALLEL] = ACTIONS(321),
    [anon_sym_INSERT] = ACTIONS(321),
    [anon_sym_IGNORE] = ACTIONS(321),
    [anon_sym_INTO] = ACTIONS(321),
    [anon_sym_VALUES] = ACTIONS(321),
    [anon_sym_ON] = ACTIONS(321),
    [anon_sym_DUPLICATE] = ACTIONS(321),
    [anon_sym_KEY] = ACTIONS(321),
    [anon_sym_UPDATE] = ACTIONS(321),
    [anon_sym_CREATE] = ACTIONS(321),
    [anon_sym_CONTENT] = ACTIONS(321),
    [anon_sym_SET] = ACTIONS(321),
    [anon_sym_RETURN] = ACTIONS(321),
    [anon_sym_BEFORE] = ACTIONS(321),
    [anon_sym_AFTER] = ACTIONS(321),
    [anon_sym_DIFF] = ACTIONS(321),
    [anon_sym_MERGE] = ACTIONS(321),
    [anon_sym_PATCH] = ACTIONS(321),
    [anon_sym_RELATE] = ACTIONS(321),
    [anon_sym_DELETE] = ACTIONS(321),
    [anon_sym_DEFINE] = ACTIONS(321),
    [anon_sym_NAMESPACE] = ACTIONS(321),
    [anon_sym_DATABASE] = ACTIONS(321),
    [anon_sym_LOGIN] = ACTIONS(321),
    [anon_sym_PASSWORD] = ACTIONS(321),
    [anon_sym_PASSHASH] = ACTIONS(321),
    [anon_sym_TOKEN] = ACTIONS(321),
    [anon_sym_SCOPE] = ACTIONS(321),
    [anon_sym_TYPE] = ACTIONS(321),
    [anon_sym_VALUE] = ACTIONS(321),
    [anon_sym_SESSION] = ACTIONS(321),
    [anon_sym_SIGNUP] = ACTIONS(321),
    [anon_sym_SIGNIN] = ACTIONS(321),
    [anon_sym_TABLE] = ACTIONS(321),
    [anon_sym_DROP] = ACTIONS(321),
    [anon_sym_SCHEMAFULL] = ACTIONS(321),
    [anon_sym_SCHEMALESS] = ACTIONS(321),
    [anon_sym_AS] = ACTIONS(321),
    [anon_sym_PERMISSIONS] = ACTIONS(321),
    [anon_sym_FULL] = ACTIONS(321),
    [anon_sym_FOR] = ACTIONS(321),
    [anon_sym_select] = ACTIONS(321),
    [anon_sym_update] = ACTIONS(321),
    [anon_sym_create] = ACTIONS(321),
    [anon_sym_delete] = ACTIONS(321),
    [anon_sym_EVENT] = ACTIONS(321),
    [anon_sym_WHEN] = ACTIONS(321),
    [anon_sym_ASSERT] = ACTIONS(321),
    [anon_sym_INDEX] = ACTIONS(321),
    [anon_sym_FIELDS] = ACTIONS(321),
    [anon_sym_COLUMNS] = ACTIONS(321),
    [anon_sym_UNIQUE] = ACTIONS(321),
    [anon_sym_REMOVE] = ACTIONS(321),
    [anon_sym_SLEEP] = ACTIONS(321),
    [anon_sym_INFO] = ACTIONS(321),
    [anon_sym_KV] = ACTIONS(321),
    [anon_sym_FUNCTION] = ACTIONS(321),
    [anon_sym_PARAM] = ACTIONS(321),
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
    [anon_sym_DASH_GT] = ACTIONS(319),
    [anon_sym_LT_DASH] = ACTIONS(319),
    [anon_sym_COMMA] = ACTIONS(319),
    [anon_sym_SEMI] = ACTIONS(319),
    [anon_sym_COLON] = ACTIONS(319),
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
  [42] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(339),
    [anon_sym_RBRACE_SEMI] = ACTIONS(339),
    [anon_sym_RBRACE_COMMA] = ACTIONS(339),
    [anon_sym_LBRACE] = ACTIONS(339),
    [anon_sym_RBRACE] = ACTIONS(341),
    [aux_sym_future_token1] = ACTIONS(339),
    [aux_sym_casting_token1] = ACTIONS(339),
    [aux_sym_property_token1] = ACTIONS(341),
    [aux_sym_identifier_token1] = ACTIONS(341),
    [aux_sym_duration_token1] = ACTIONS(341),
    [aux_sym_constant_token1] = ACTIONS(339),
    [aux_sym_number_token1] = ACTIONS(341),
    [aux_sym_record_token1] = ACTIONS(339),
    [aux_sym_record_token2] = ACTIONS(339),
    [anon_sym_USE] = ACTIONS(341),
    [anon_sym_NS] = ACTIONS(341),
    [anon_sym_DB] = ACTIONS(341),
    [anon_sym_LET] = ACTIONS(341),
    [anon_sym_BEGIN] = ACTIONS(341),
    [anon_sym_TRANSACTION] = ACTIONS(341),
    [anon_sym_CANCEL] = ACTIONS(341),
    [anon_sym_COMMIT] = ACTIONS(341),
    [anon_sym_IF] = ACTIONS(341),
    [anon_sym_ELSE] = ACTIONS(341),
    [anon_sym_THEN] = ACTIONS(341),
    [anon_sym_END] = ACTIONS(341),
    [anon_sym_SELECT] = ACTIONS(341),
    [anon_sym_FROM] = ACTIONS(341),
    [anon_sym_WHERE] = ACTIONS(341),
    [anon_sym_SPLIT] = ACTIONS(341),
    [anon_sym_AT] = ACTIONS(341),
    [anon_sym_GROUP] = ACTIONS(341),
    [anon_sym_BY] = ACTIONS(341),
    [anon_sym_ORDER] = ACTIONS(341),
    [anon_sym_COLLATE] = ACTIONS(341),
    [anon_sym_NUMERIC] = ACTIONS(341),
    [anon_sym_ASC] = ACTIONS(341),
    [anon_sym_DESC] = ACTIONS(341),
    [anon_sym_LIMIT] = ACTIONS(341),
    [anon_sym_START] = ACTIONS(341),
    [anon_sym_FETCH] = ACTIONS(341),
    [anon_sym_TIMEOUT] = ACTIONS(341),
    [anon_sym_PARALLEL] = ACTIONS(341),
    [anon_sym_INSERT] = ACTIONS(341),
    [anon_sym_IGNORE] = ACTIONS(341),
    [anon_sym_INTO] = ACTIONS(341),
    [anon_sym_VALUES] = ACTIONS(341),
    [anon_sym_ON] = ACTIONS(341),
    [anon_sym_DUPLICATE] = ACTIONS(341),
    [anon_sym_KEY] = ACTIONS(341),
    [anon_sym_UPDATE] = ACTIONS(341),
    [anon_sym_CREATE] = ACTIONS(341),
    [anon_sym_CONTENT] = ACTIONS(341),
    [anon_sym_SET] = ACTIONS(341),
    [anon_sym_RETURN] = ACTIONS(341),
    [anon_sym_BEFORE] = ACTIONS(341),
    [anon_sym_AFTER] = ACTIONS(341),
    [anon_sym_DIFF] = ACTIONS(341),
    [anon_sym_MERGE] = ACTIONS(341),
    [anon_sym_PATCH] = ACTIONS(341),
    [anon_sym_RELATE] = ACTIONS(341),
    [anon_sym_DELETE] = ACTIONS(341),
    [anon_sym_DEFINE] = ACTIONS(341),
    [anon_sym_NAMESPACE] = ACTIONS(341),
    [anon_sym_DATABASE] = ACTIONS(341),
    [anon_sym_LOGIN] = ACTIONS(341),
    [anon_sym_PASSWORD] = ACTIONS(341),
    [anon_sym_PASSHASH] = ACTIONS(341),
    [anon_sym_TOKEN] = ACTIONS(341),
    [anon_sym_SCOPE] = ACTIONS(341),
    [anon_sym_TYPE] = ACTIONS(341),
    [anon_sym_VALUE] = ACTIONS(341),
    [anon_sym_SESSION] = ACTIONS(341),
    [anon_sym_SIGNUP] = ACTIONS(341),
    [anon_sym_SIGNIN] = ACTIONS(341),
    [anon_sym_TABLE] = ACTIONS(341),
    [anon_sym_DROP] = ACTIONS(341),
    [anon_sym_SCHEMAFULL] = ACTIONS(341),
    [anon_sym_SCHEMALESS] = ACTIONS(341),
    [anon_sym_AS] = ACTIONS(341),
    [anon_sym_PERMISSIONS] = ACTIONS(341),
    [anon_sym_FULL] = ACTIONS(341),
    [anon_sym_FOR] = ACTIONS(341),
    [anon_sym_select] = ACTIONS(341),
    [anon_sym_update] = ACTIONS(341),
    [anon_sym_create] = ACTIONS(341),
    [anon_sym_delete] = ACTIONS(341),
    [anon_sym_EVENT] = ACTIONS(341),
    [anon_sym_WHEN] = ACTIONS(341),
    [anon_sym_ASSERT] = ACTIONS(341),
    [anon_sym_INDEX] = ACTIONS(341),
    [anon_sym_FIELDS] = ACTIONS(341),
    [anon_sym_COLUMNS] = ACTIONS(341),
    [anon_sym_UNIQUE] = ACTIONS(341),
    [anon_sym_REMOVE] = ACTIONS(341),
    [anon_sym_SLEEP] = ACTIONS(341),
    [anon_sym_INFO] = ACTIONS(341),
    [anon_sym_KV] = ACTIONS(341),
    [anon_sym_FUNCTION] = ACTIONS(341),
    [anon_sym_PARAM] = ACTIONS(341),
    [anon_sym_AMP_AMP] = ACTIONS(339),
    [anon_sym_AND] = ACTIONS(341),
    [anon_sym_PIPE_PIPE] = ACTIONS(339),
    [anon_sym_OR] = ACTIONS(341),
    [anon_sym_QMARK_QMARK] = ACTIONS(339),
    [anon_sym_QMARK_COLON] = ACTIONS(339),
    [anon_sym_EQ] = ACTIONS(341),
    [anon_sym_IS] = ACTIONS(341),
    [anon_sym_BANG_EQ] = ACTIONS(339),
    [anon_sym_ISNOT] = ACTIONS(339),
    [anon_sym_EQ_EQ] = ACTIONS(339),
    [anon_sym_QMARK_EQ] = ACTIONS(339),
    [anon_sym_STAR_EQ] = ACTIONS(339),
    [anon_sym_TILDE] = ACTIONS(339),
    [anon_sym_BANG_TILDE] = ACTIONS(339),
    [anon_sym_QMARK_TILDE] = ACTIONS(339),
    [anon_sym_STAR_TILDE] = ACTIONS(339),
    [anon_sym_LT] = ACTIONS(341),
    [anon_sym_LT_EQ] = ACTIONS(339),
    [anon_sym_GT] = ACTIONS(341),
    [anon_sym_GT_EQ] = ACTIONS(339),
    [anon_sym_PLUS] = ACTIONS(339),
    [anon_sym_DASH] = ACTIONS(341),
    [anon_sym_STAR] = ACTIONS(341),
    [anon_sym_x] = ACTIONS(341),
    [anon_sym_SLASH] = ACTIONS(339),
    [anon_sym_] = ACTIONS(339),
    [anon_sym_STAR_STAR] = ACTIONS(339),
    [anon_sym_IN] = ACTIONS(341),
    [anon_sym_CONTAINS] = ACTIONS(341),
    [anon_sym_2] = ACTIONS(339),
    [anon_sym_CONTAINSNOT] = ACTIONS(341),
    [anon_sym_3] = ACTIONS(339),
    [anon_sym_CONTAINSALL] = ACTIONS(341),
    [anon_sym_4] = ACTIONS(339),
    [anon_sym_CONTAINSANY] = ACTIONS(341),
    [anon_sym_5] = ACTIONS(339),
    [anon_sym_CONTAINSNONE] = ACTIONS(341),
    [anon_sym_6] = ACTIONS(339),
    [anon_sym_INSIDE] = ACTIONS(341),
    [anon_sym_7] = ACTIONS(339),
    [anon_sym_NOTINSIDE] = ACTIONS(341),
    [anon_sym_NOTIN] = ACTIONS(339),
    [anon_sym_8] = ACTIONS(339),
    [anon_sym_ALLINSIDE] = ACTIONS(341),
    [anon_sym_9] = ACTIONS(339),
    [anon_sym_ANYINSIDE] = ACTIONS(341),
    [anon_sym_10] = ACTIONS(339),
    [anon_sym_NONEINSIDE] = ACTIONS(341),
    [anon_sym_11] = ACTIONS(339),
    [anon_sym_OUTSIDE] = ACTIONS(341),
    [anon_sym_INTERSECTS] = ACTIONS(341),
    [anon_sym_LPAREN] = ACTIONS(339),
    [anon_sym_RPAREN] = ACTIONS(339),
    [anon_sym_LBRACK] = ACTIONS(339),
    [anon_sym_RBRACK] = ACTIONS(339),
    [anon_sym_DASH_GT] = ACTIONS(339),
    [anon_sym_LT_DASH] = ACTIONS(339),
    [anon_sym_COMMA] = ACTIONS(339),
    [anon_sym_SEMI] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(339),
    [anon_sym_any] = ACTIONS(341),
    [anon_sym_array] = ACTIONS(341),
    [anon_sym_bool] = ACTIONS(341),
    [anon_sym_datetime] = ACTIONS(341),
    [anon_sym_decimal] = ACTIONS(341),
    [anon_sym_duration] = ACTIONS(341),
    [anon_sym_float] = ACTIONS(341),
    [anon_sym_int] = ACTIONS(341),
    [anon_sym_number] = ACTIONS(341),
    [anon_sym_object] = ACTIONS(341),
    [anon_sym_string] = ACTIONS(341),
    [anon_sym_record] = ACTIONS(341),
    [anon_sym_geometry] = ACTIONS(341),
    [anon_sym_EDDSA] = ACTIONS(341),
    [anon_sym_ES256] = ACTIONS(341),
    [anon_sym_ES384] = ACTIONS(341),
    [anon_sym_ES512] = ACTIONS(341),
    [anon_sym_HS256] = ACTIONS(341),
    [anon_sym_HS384] = ACTIONS(341),
    [anon_sym_HS512] = ACTIONS(341),
    [anon_sym_PS256] = ACTIONS(341),
    [anon_sym_PS384] = ACTIONS(341),
    [anon_sym_PS512] = ACTIONS(341),
    [anon_sym_RS256] = ACTIONS(341),
    [anon_sym_RS384] = ACTIONS(341),
    [anon_sym_RS512] = ACTIONS(341),
    [aux_sym_function_token1] = ACTIONS(339),
    [aux_sym_function_token2] = ACTIONS(339),
    [anon_sym_count] = ACTIONS(341),
    [aux_sym_function_token3] = ACTIONS(339),
    [aux_sym_function_token4] = ACTIONS(339),
    [aux_sym_function_token5] = ACTIONS(339),
    [aux_sym_function_token6] = ACTIONS(339),
    [aux_sym_function_token7] = ACTIONS(339),
    [aux_sym_function_token8] = ACTIONS(339),
    [aux_sym_function_token9] = ACTIONS(339),
    [aux_sym_function_token10] = ACTIONS(341),
    [aux_sym_function_token11] = ACTIONS(339),
    [aux_sym_function_token12] = ACTIONS(341),
    [aux_sym_function_token13] = ACTIONS(339),
    [aux_sym_function_token14] = ACTIONS(339),
    [aux_sym_function_token15] = ACTIONS(339),
    [aux_sym_function_token16] = ACTIONS(341),
    [anon_sym_true] = ACTIONS(341),
    [anon_sym_false] = ACTIONS(341),
    [anon_sym_TRUE] = ACTIONS(341),
    [anon_sym_FALSE] = ACTIONS(341),
    [anon_sym_null] = ACTIONS(341),
    [anon_sym_NULL] = ACTIONS(341),
    [anon_sym_none] = ACTIONS(341),
    [anon_sym_NONE] = ACTIONS(341),
    [sym_variable] = ACTIONS(339),
    [anon_sym_SQUOTE] = ACTIONS(339),
    [anon_sym_DQUOTE] = ACTIONS(339),
  },
  [43] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(263),
    [anon_sym_RBRACE_SEMI] = ACTIONS(263),
    [anon_sym_RBRACE_COMMA] = ACTIONS(263),
    [anon_sym_LBRACE] = ACTIONS(263),
    [anon_sym_RBRACE] = ACTIONS(265),
    [aux_sym_future_token1] = ACTIONS(263),
    [aux_sym_casting_token1] = ACTIONS(263),
    [aux_sym_property_token1] = ACTIONS(265),
    [aux_sym_identifier_token1] = ACTIONS(265),
    [aux_sym_duration_token1] = ACTIONS(265),
    [aux_sym_constant_token1] = ACTIONS(263),
    [aux_sym_number_token1] = ACTIONS(265),
    [aux_sym_record_token1] = ACTIONS(263),
    [aux_sym_record_token2] = ACTIONS(263),
    [anon_sym_USE] = ACTIONS(265),
    [anon_sym_NS] = ACTIONS(265),
    [anon_sym_DB] = ACTIONS(265),
    [anon_sym_LET] = ACTIONS(265),
    [anon_sym_BEGIN] = ACTIONS(265),
    [anon_sym_TRANSACTION] = ACTIONS(265),
    [anon_sym_CANCEL] = ACTIONS(265),
    [anon_sym_COMMIT] = ACTIONS(265),
    [anon_sym_IF] = ACTIONS(265),
    [anon_sym_ELSE] = ACTIONS(265),
    [anon_sym_THEN] = ACTIONS(265),
    [anon_sym_END] = ACTIONS(265),
    [anon_sym_SELECT] = ACTIONS(265),
    [anon_sym_FROM] = ACTIONS(265),
    [anon_sym_WHERE] = ACTIONS(265),
    [anon_sym_SPLIT] = ACTIONS(265),
    [anon_sym_AT] = ACTIONS(265),
    [anon_sym_GROUP] = ACTIONS(265),
    [anon_sym_BY] = ACTIONS(265),
    [anon_sym_ORDER] = ACTIONS(265),
    [anon_sym_COLLATE] = ACTIONS(265),
    [anon_sym_NUMERIC] = ACTIONS(265),
    [anon_sym_ASC] = ACTIONS(265),
    [anon_sym_DESC] = ACTIONS(265),
    [anon_sym_LIMIT] = ACTIONS(265),
    [anon_sym_START] = ACTIONS(265),
    [anon_sym_FETCH] = ACTIONS(265),
    [anon_sym_TIMEOUT] = ACTIONS(265),
    [anon_sym_PARALLEL] = ACTIONS(265),
    [anon_sym_INSERT] = ACTIONS(265),
    [anon_sym_IGNORE] = ACTIONS(265),
    [anon_sym_INTO] = ACTIONS(265),
    [anon_sym_VALUES] = ACTIONS(265),
    [anon_sym_ON] = ACTIONS(265),
    [anon_sym_DUPLICATE] = ACTIONS(265),
    [anon_sym_KEY] = ACTIONS(265),
    [anon_sym_UPDATE] = ACTIONS(265),
    [anon_sym_CREATE] = ACTIONS(265),
    [anon_sym_CONTENT] = ACTIONS(265),
    [anon_sym_SET] = ACTIONS(265),
    [anon_sym_RETURN] = ACTIONS(265),
    [anon_sym_BEFORE] = ACTIONS(265),
    [anon_sym_AFTER] = ACTIONS(265),
    [anon_sym_DIFF] = ACTIONS(265),
    [anon_sym_MERGE] = ACTIONS(265),
    [anon_sym_PATCH] = ACTIONS(265),
    [anon_sym_RELATE] = ACTIONS(265),
    [anon_sym_DELETE] = ACTIONS(265),
    [anon_sym_DEFINE] = ACTIONS(265),
    [anon_sym_NAMESPACE] = ACTIONS(265),
    [anon_sym_DATABASE] = ACTIONS(265),
    [anon_sym_LOGIN] = ACTIONS(265),
    [anon_sym_PASSWORD] = ACTIONS(265),
    [anon_sym_PASSHASH] = ACTIONS(265),
    [anon_sym_TOKEN] = ACTIONS(265),
    [anon_sym_SCOPE] = ACTIONS(265),
    [anon_sym_TYPE] = ACTIONS(265),
    [anon_sym_VALUE] = ACTIONS(265),
    [anon_sym_SESSION] = ACTIONS(265),
    [anon_sym_SIGNUP] = ACTIONS(265),
    [anon_sym_SIGNIN] = ACTIONS(265),
    [anon_sym_TABLE] = ACTIONS(265),
    [anon_sym_DROP] = ACTIONS(265),
    [anon_sym_SCHEMAFULL] = ACTIONS(265),
    [anon_sym_SCHEMALESS] = ACTIONS(265),
    [anon_sym_AS] = ACTIONS(265),
    [anon_sym_PERMISSIONS] = ACTIONS(265),
    [anon_sym_FULL] = ACTIONS(265),
    [anon_sym_FOR] = ACTIONS(265),
    [anon_sym_select] = ACTIONS(265),
    [anon_sym_update] = ACTIONS(265),
    [anon_sym_create] = ACTIONS(265),
    [anon_sym_delete] = ACTIONS(265),
    [anon_sym_EVENT] = ACTIONS(265),
    [anon_sym_WHEN] = ACTIONS(265),
    [anon_sym_ASSERT] = ACTIONS(265),
    [anon_sym_INDEX] = ACTIONS(265),
    [anon_sym_FIELDS] = ACTIONS(265),
    [anon_sym_COLUMNS] = ACTIONS(265),
    [anon_sym_UNIQUE] = ACTIONS(265),
    [anon_sym_REMOVE] = ACTIONS(265),
    [anon_sym_SLEEP] = ACTIONS(265),
    [anon_sym_INFO] = ACTIONS(265),
    [anon_sym_KV] = ACTIONS(265),
    [anon_sym_FUNCTION] = ACTIONS(265),
    [anon_sym_PARAM] = ACTIONS(265),
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
    [anon_sym_DASH_GT] = ACTIONS(263),
    [anon_sym_LT_DASH] = ACTIONS(263),
    [anon_sym_COMMA] = ACTIONS(263),
    [anon_sym_SEMI] = ACTIONS(263),
    [anon_sym_COLON] = ACTIONS(263),
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
  [44] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(267),
    [anon_sym_RBRACE_SEMI] = ACTIONS(267),
    [anon_sym_RBRACE_COMMA] = ACTIONS(267),
    [anon_sym_LBRACE] = ACTIONS(267),
    [anon_sym_RBRACE] = ACTIONS(269),
    [aux_sym_future_token1] = ACTIONS(267),
    [aux_sym_casting_token1] = ACTIONS(267),
    [aux_sym_property_token1] = ACTIONS(269),
    [aux_sym_identifier_token1] = ACTIONS(269),
    [aux_sym_duration_token1] = ACTIONS(269),
    [aux_sym_constant_token1] = ACTIONS(267),
    [aux_sym_number_token1] = ACTIONS(269),
    [aux_sym_record_token1] = ACTIONS(267),
    [aux_sym_record_token2] = ACTIONS(267),
    [anon_sym_USE] = ACTIONS(269),
    [anon_sym_NS] = ACTIONS(269),
    [anon_sym_DB] = ACTIONS(269),
    [anon_sym_LET] = ACTIONS(269),
    [anon_sym_BEGIN] = ACTIONS(269),
    [anon_sym_TRANSACTION] = ACTIONS(269),
    [anon_sym_CANCEL] = ACTIONS(269),
    [anon_sym_COMMIT] = ACTIONS(269),
    [anon_sym_IF] = ACTIONS(269),
    [anon_sym_ELSE] = ACTIONS(269),
    [anon_sym_THEN] = ACTIONS(269),
    [anon_sym_END] = ACTIONS(269),
    [anon_sym_SELECT] = ACTIONS(269),
    [anon_sym_FROM] = ACTIONS(269),
    [anon_sym_WHERE] = ACTIONS(269),
    [anon_sym_SPLIT] = ACTIONS(269),
    [anon_sym_AT] = ACTIONS(269),
    [anon_sym_GROUP] = ACTIONS(269),
    [anon_sym_BY] = ACTIONS(269),
    [anon_sym_ORDER] = ACTIONS(269),
    [anon_sym_COLLATE] = ACTIONS(269),
    [anon_sym_NUMERIC] = ACTIONS(269),
    [anon_sym_ASC] = ACTIONS(269),
    [anon_sym_DESC] = ACTIONS(269),
    [anon_sym_LIMIT] = ACTIONS(269),
    [anon_sym_START] = ACTIONS(269),
    [anon_sym_FETCH] = ACTIONS(269),
    [anon_sym_TIMEOUT] = ACTIONS(269),
    [anon_sym_PARALLEL] = ACTIONS(269),
    [anon_sym_INSERT] = ACTIONS(269),
    [anon_sym_IGNORE] = ACTIONS(269),
    [anon_sym_INTO] = ACTIONS(269),
    [anon_sym_VALUES] = ACTIONS(269),
    [anon_sym_ON] = ACTIONS(269),
    [anon_sym_DUPLICATE] = ACTIONS(269),
    [anon_sym_KEY] = ACTIONS(269),
    [anon_sym_UPDATE] = ACTIONS(269),
    [anon_sym_CREATE] = ACTIONS(269),
    [anon_sym_CONTENT] = ACTIONS(269),
    [anon_sym_SET] = ACTIONS(269),
    [anon_sym_RETURN] = ACTIONS(269),
    [anon_sym_BEFORE] = ACTIONS(269),
    [anon_sym_AFTER] = ACTIONS(269),
    [anon_sym_DIFF] = ACTIONS(269),
    [anon_sym_MERGE] = ACTIONS(269),
    [anon_sym_PATCH] = ACTIONS(269),
    [anon_sym_RELATE] = ACTIONS(269),
    [anon_sym_DELETE] = ACTIONS(269),
    [anon_sym_DEFINE] = ACTIONS(269),
    [anon_sym_NAMESPACE] = ACTIONS(269),
    [anon_sym_DATABASE] = ACTIONS(269),
    [anon_sym_LOGIN] = ACTIONS(269),
    [anon_sym_PASSWORD] = ACTIONS(269),
    [anon_sym_PASSHASH] = ACTIONS(269),
    [anon_sym_TOKEN] = ACTIONS(269),
    [anon_sym_SCOPE] = ACTIONS(269),
    [anon_sym_TYPE] = ACTIONS(269),
    [anon_sym_VALUE] = ACTIONS(269),
    [anon_sym_SESSION] = ACTIONS(269),
    [anon_sym_SIGNUP] = ACTIONS(269),
    [anon_sym_SIGNIN] = ACTIONS(269),
    [anon_sym_TABLE] = ACTIONS(269),
    [anon_sym_DROP] = ACTIONS(269),
    [anon_sym_SCHEMAFULL] = ACTIONS(269),
    [anon_sym_SCHEMALESS] = ACTIONS(269),
    [anon_sym_AS] = ACTIONS(269),
    [anon_sym_PERMISSIONS] = ACTIONS(269),
    [anon_sym_FULL] = ACTIONS(269),
    [anon_sym_FOR] = ACTIONS(269),
    [anon_sym_select] = ACTIONS(269),
    [anon_sym_update] = ACTIONS(269),
    [anon_sym_create] = ACTIONS(269),
    [anon_sym_delete] = ACTIONS(269),
    [anon_sym_EVENT] = ACTIONS(269),
    [anon_sym_WHEN] = ACTIONS(269),
    [anon_sym_ASSERT] = ACTIONS(269),
    [anon_sym_INDEX] = ACTIONS(269),
    [anon_sym_FIELDS] = ACTIONS(269),
    [anon_sym_COLUMNS] = ACTIONS(269),
    [anon_sym_UNIQUE] = ACTIONS(269),
    [anon_sym_REMOVE] = ACTIONS(269),
    [anon_sym_SLEEP] = ACTIONS(269),
    [anon_sym_INFO] = ACTIONS(269),
    [anon_sym_KV] = ACTIONS(269),
    [anon_sym_FUNCTION] = ACTIONS(269),
    [anon_sym_PARAM] = ACTIONS(269),
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
    [anon_sym_DASH_GT] = ACTIONS(267),
    [anon_sym_LT_DASH] = ACTIONS(267),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_SEMI] = ACTIONS(267),
    [anon_sym_COLON] = ACTIONS(267),
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
  [45] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(271),
    [anon_sym_RBRACE_SEMI] = ACTIONS(271),
    [anon_sym_RBRACE_COMMA] = ACTIONS(271),
    [anon_sym_LBRACE] = ACTIONS(271),
    [anon_sym_RBRACE] = ACTIONS(273),
    [aux_sym_future_token1] = ACTIONS(271),
    [aux_sym_casting_token1] = ACTIONS(271),
    [aux_sym_property_token1] = ACTIONS(273),
    [aux_sym_identifier_token1] = ACTIONS(273),
    [aux_sym_duration_token1] = ACTIONS(273),
    [aux_sym_constant_token1] = ACTIONS(271),
    [aux_sym_number_token1] = ACTIONS(273),
    [aux_sym_record_token1] = ACTIONS(271),
    [aux_sym_record_token2] = ACTIONS(271),
    [anon_sym_USE] = ACTIONS(273),
    [anon_sym_NS] = ACTIONS(273),
    [anon_sym_DB] = ACTIONS(273),
    [anon_sym_LET] = ACTIONS(273),
    [anon_sym_BEGIN] = ACTIONS(273),
    [anon_sym_TRANSACTION] = ACTIONS(273),
    [anon_sym_CANCEL] = ACTIONS(273),
    [anon_sym_COMMIT] = ACTIONS(273),
    [anon_sym_IF] = ACTIONS(273),
    [anon_sym_ELSE] = ACTIONS(273),
    [anon_sym_THEN] = ACTIONS(273),
    [anon_sym_END] = ACTIONS(273),
    [anon_sym_SELECT] = ACTIONS(273),
    [anon_sym_FROM] = ACTIONS(273),
    [anon_sym_WHERE] = ACTIONS(273),
    [anon_sym_SPLIT] = ACTIONS(273),
    [anon_sym_AT] = ACTIONS(273),
    [anon_sym_GROUP] = ACTIONS(273),
    [anon_sym_BY] = ACTIONS(273),
    [anon_sym_ORDER] = ACTIONS(273),
    [anon_sym_COLLATE] = ACTIONS(273),
    [anon_sym_NUMERIC] = ACTIONS(273),
    [anon_sym_ASC] = ACTIONS(273),
    [anon_sym_DESC] = ACTIONS(273),
    [anon_sym_LIMIT] = ACTIONS(273),
    [anon_sym_START] = ACTIONS(273),
    [anon_sym_FETCH] = ACTIONS(273),
    [anon_sym_TIMEOUT] = ACTIONS(273),
    [anon_sym_PARALLEL] = ACTIONS(273),
    [anon_sym_INSERT] = ACTIONS(273),
    [anon_sym_IGNORE] = ACTIONS(273),
    [anon_sym_INTO] = ACTIONS(273),
    [anon_sym_VALUES] = ACTIONS(273),
    [anon_sym_ON] = ACTIONS(273),
    [anon_sym_DUPLICATE] = ACTIONS(273),
    [anon_sym_KEY] = ACTIONS(273),
    [anon_sym_UPDATE] = ACTIONS(273),
    [anon_sym_CREATE] = ACTIONS(273),
    [anon_sym_CONTENT] = ACTIONS(273),
    [anon_sym_SET] = ACTIONS(273),
    [anon_sym_RETURN] = ACTIONS(273),
    [anon_sym_BEFORE] = ACTIONS(273),
    [anon_sym_AFTER] = ACTIONS(273),
    [anon_sym_DIFF] = ACTIONS(273),
    [anon_sym_MERGE] = ACTIONS(273),
    [anon_sym_PATCH] = ACTIONS(273),
    [anon_sym_RELATE] = ACTIONS(273),
    [anon_sym_DELETE] = ACTIONS(273),
    [anon_sym_DEFINE] = ACTIONS(273),
    [anon_sym_NAMESPACE] = ACTIONS(273),
    [anon_sym_DATABASE] = ACTIONS(273),
    [anon_sym_LOGIN] = ACTIONS(273),
    [anon_sym_PASSWORD] = ACTIONS(273),
    [anon_sym_PASSHASH] = ACTIONS(273),
    [anon_sym_TOKEN] = ACTIONS(273),
    [anon_sym_SCOPE] = ACTIONS(273),
    [anon_sym_TYPE] = ACTIONS(273),
    [anon_sym_VALUE] = ACTIONS(273),
    [anon_sym_SESSION] = ACTIONS(273),
    [anon_sym_SIGNUP] = ACTIONS(273),
    [anon_sym_SIGNIN] = ACTIONS(273),
    [anon_sym_TABLE] = ACTIONS(273),
    [anon_sym_DROP] = ACTIONS(273),
    [anon_sym_SCHEMAFULL] = ACTIONS(273),
    [anon_sym_SCHEMALESS] = ACTIONS(273),
    [anon_sym_AS] = ACTIONS(273),
    [anon_sym_PERMISSIONS] = ACTIONS(273),
    [anon_sym_FULL] = ACTIONS(273),
    [anon_sym_FOR] = ACTIONS(273),
    [anon_sym_select] = ACTIONS(273),
    [anon_sym_update] = ACTIONS(273),
    [anon_sym_create] = ACTIONS(273),
    [anon_sym_delete] = ACTIONS(273),
    [anon_sym_EVENT] = ACTIONS(273),
    [anon_sym_WHEN] = ACTIONS(273),
    [anon_sym_ASSERT] = ACTIONS(273),
    [anon_sym_INDEX] = ACTIONS(273),
    [anon_sym_FIELDS] = ACTIONS(273),
    [anon_sym_COLUMNS] = ACTIONS(273),
    [anon_sym_UNIQUE] = ACTIONS(273),
    [anon_sym_REMOVE] = ACTIONS(273),
    [anon_sym_SLEEP] = ACTIONS(273),
    [anon_sym_INFO] = ACTIONS(273),
    [anon_sym_KV] = ACTIONS(273),
    [anon_sym_FUNCTION] = ACTIONS(273),
    [anon_sym_PARAM] = ACTIONS(273),
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
    [anon_sym_DASH_GT] = ACTIONS(271),
    [anon_sym_LT_DASH] = ACTIONS(271),
    [anon_sym_COMMA] = ACTIONS(271),
    [anon_sym_SEMI] = ACTIONS(271),
    [anon_sym_COLON] = ACTIONS(271),
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
  [46] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(275),
    [anon_sym_RBRACE_SEMI] = ACTIONS(275),
    [anon_sym_RBRACE_COMMA] = ACTIONS(275),
    [anon_sym_LBRACE] = ACTIONS(275),
    [anon_sym_RBRACE] = ACTIONS(277),
    [aux_sym_future_token1] = ACTIONS(275),
    [aux_sym_casting_token1] = ACTIONS(275),
    [aux_sym_property_token1] = ACTIONS(277),
    [aux_sym_identifier_token1] = ACTIONS(277),
    [aux_sym_duration_token1] = ACTIONS(277),
    [aux_sym_constant_token1] = ACTIONS(275),
    [aux_sym_number_token1] = ACTIONS(277),
    [aux_sym_record_token1] = ACTIONS(275),
    [aux_sym_record_token2] = ACTIONS(275),
    [anon_sym_USE] = ACTIONS(277),
    [anon_sym_NS] = ACTIONS(277),
    [anon_sym_DB] = ACTIONS(277),
    [anon_sym_LET] = ACTIONS(277),
    [anon_sym_BEGIN] = ACTIONS(277),
    [anon_sym_TRANSACTION] = ACTIONS(277),
    [anon_sym_CANCEL] = ACTIONS(277),
    [anon_sym_COMMIT] = ACTIONS(277),
    [anon_sym_IF] = ACTIONS(277),
    [anon_sym_ELSE] = ACTIONS(277),
    [anon_sym_THEN] = ACTIONS(277),
    [anon_sym_END] = ACTIONS(277),
    [anon_sym_SELECT] = ACTIONS(277),
    [anon_sym_FROM] = ACTIONS(277),
    [anon_sym_WHERE] = ACTIONS(277),
    [anon_sym_SPLIT] = ACTIONS(277),
    [anon_sym_AT] = ACTIONS(277),
    [anon_sym_GROUP] = ACTIONS(277),
    [anon_sym_BY] = ACTIONS(277),
    [anon_sym_ORDER] = ACTIONS(277),
    [anon_sym_COLLATE] = ACTIONS(277),
    [anon_sym_NUMERIC] = ACTIONS(277),
    [anon_sym_ASC] = ACTIONS(277),
    [anon_sym_DESC] = ACTIONS(277),
    [anon_sym_LIMIT] = ACTIONS(277),
    [anon_sym_START] = ACTIONS(277),
    [anon_sym_FETCH] = ACTIONS(277),
    [anon_sym_TIMEOUT] = ACTIONS(277),
    [anon_sym_PARALLEL] = ACTIONS(277),
    [anon_sym_INSERT] = ACTIONS(277),
    [anon_sym_IGNORE] = ACTIONS(277),
    [anon_sym_INTO] = ACTIONS(277),
    [anon_sym_VALUES] = ACTIONS(277),
    [anon_sym_ON] = ACTIONS(277),
    [anon_sym_DUPLICATE] = ACTIONS(277),
    [anon_sym_KEY] = ACTIONS(277),
    [anon_sym_UPDATE] = ACTIONS(277),
    [anon_sym_CREATE] = ACTIONS(277),
    [anon_sym_CONTENT] = ACTIONS(277),
    [anon_sym_SET] = ACTIONS(277),
    [anon_sym_RETURN] = ACTIONS(277),
    [anon_sym_BEFORE] = ACTIONS(277),
    [anon_sym_AFTER] = ACTIONS(277),
    [anon_sym_DIFF] = ACTIONS(277),
    [anon_sym_MERGE] = ACTIONS(277),
    [anon_sym_PATCH] = ACTIONS(277),
    [anon_sym_RELATE] = ACTIONS(277),
    [anon_sym_DELETE] = ACTIONS(277),
    [anon_sym_DEFINE] = ACTIONS(277),
    [anon_sym_NAMESPACE] = ACTIONS(277),
    [anon_sym_DATABASE] = ACTIONS(277),
    [anon_sym_LOGIN] = ACTIONS(277),
    [anon_sym_PASSWORD] = ACTIONS(277),
    [anon_sym_PASSHASH] = ACTIONS(277),
    [anon_sym_TOKEN] = ACTIONS(277),
    [anon_sym_SCOPE] = ACTIONS(277),
    [anon_sym_TYPE] = ACTIONS(277),
    [anon_sym_VALUE] = ACTIONS(277),
    [anon_sym_SESSION] = ACTIONS(277),
    [anon_sym_SIGNUP] = ACTIONS(277),
    [anon_sym_SIGNIN] = ACTIONS(277),
    [anon_sym_TABLE] = ACTIONS(277),
    [anon_sym_DROP] = ACTIONS(277),
    [anon_sym_SCHEMAFULL] = ACTIONS(277),
    [anon_sym_SCHEMALESS] = ACTIONS(277),
    [anon_sym_AS] = ACTIONS(277),
    [anon_sym_PERMISSIONS] = ACTIONS(277),
    [anon_sym_FULL] = ACTIONS(277),
    [anon_sym_FOR] = ACTIONS(277),
    [anon_sym_select] = ACTIONS(277),
    [anon_sym_update] = ACTIONS(277),
    [anon_sym_create] = ACTIONS(277),
    [anon_sym_delete] = ACTIONS(277),
    [anon_sym_EVENT] = ACTIONS(277),
    [anon_sym_WHEN] = ACTIONS(277),
    [anon_sym_ASSERT] = ACTIONS(277),
    [anon_sym_INDEX] = ACTIONS(277),
    [anon_sym_FIELDS] = ACTIONS(277),
    [anon_sym_COLUMNS] = ACTIONS(277),
    [anon_sym_UNIQUE] = ACTIONS(277),
    [anon_sym_REMOVE] = ACTIONS(277),
    [anon_sym_SLEEP] = ACTIONS(277),
    [anon_sym_INFO] = ACTIONS(277),
    [anon_sym_KV] = ACTIONS(277),
    [anon_sym_FUNCTION] = ACTIONS(277),
    [anon_sym_PARAM] = ACTIONS(277),
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
    [anon_sym_DASH_GT] = ACTIONS(275),
    [anon_sym_LT_DASH] = ACTIONS(275),
    [anon_sym_COMMA] = ACTIONS(275),
    [anon_sym_SEMI] = ACTIONS(275),
    [anon_sym_COLON] = ACTIONS(275),
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
  [47] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(279),
    [anon_sym_RBRACE_SEMI] = ACTIONS(279),
    [anon_sym_RBRACE_COMMA] = ACTIONS(279),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_RBRACE] = ACTIONS(281),
    [aux_sym_future_token1] = ACTIONS(279),
    [aux_sym_casting_token1] = ACTIONS(279),
    [aux_sym_property_token1] = ACTIONS(281),
    [aux_sym_identifier_token1] = ACTIONS(281),
    [aux_sym_duration_token1] = ACTIONS(281),
    [aux_sym_constant_token1] = ACTIONS(279),
    [aux_sym_number_token1] = ACTIONS(281),
    [aux_sym_record_token1] = ACTIONS(279),
    [aux_sym_record_token2] = ACTIONS(279),
    [anon_sym_USE] = ACTIONS(281),
    [anon_sym_NS] = ACTIONS(281),
    [anon_sym_DB] = ACTIONS(281),
    [anon_sym_LET] = ACTIONS(281),
    [anon_sym_BEGIN] = ACTIONS(281),
    [anon_sym_TRANSACTION] = ACTIONS(281),
    [anon_sym_CANCEL] = ACTIONS(281),
    [anon_sym_COMMIT] = ACTIONS(281),
    [anon_sym_IF] = ACTIONS(281),
    [anon_sym_ELSE] = ACTIONS(281),
    [anon_sym_THEN] = ACTIONS(281),
    [anon_sym_END] = ACTIONS(281),
    [anon_sym_SELECT] = ACTIONS(281),
    [anon_sym_FROM] = ACTIONS(281),
    [anon_sym_WHERE] = ACTIONS(281),
    [anon_sym_SPLIT] = ACTIONS(281),
    [anon_sym_AT] = ACTIONS(281),
    [anon_sym_GROUP] = ACTIONS(281),
    [anon_sym_BY] = ACTIONS(281),
    [anon_sym_ORDER] = ACTIONS(281),
    [anon_sym_COLLATE] = ACTIONS(281),
    [anon_sym_NUMERIC] = ACTIONS(281),
    [anon_sym_ASC] = ACTIONS(281),
    [anon_sym_DESC] = ACTIONS(281),
    [anon_sym_LIMIT] = ACTIONS(281),
    [anon_sym_START] = ACTIONS(281),
    [anon_sym_FETCH] = ACTIONS(281),
    [anon_sym_TIMEOUT] = ACTIONS(281),
    [anon_sym_PARALLEL] = ACTIONS(281),
    [anon_sym_INSERT] = ACTIONS(281),
    [anon_sym_IGNORE] = ACTIONS(281),
    [anon_sym_INTO] = ACTIONS(281),
    [anon_sym_VALUES] = ACTIONS(281),
    [anon_sym_ON] = ACTIONS(281),
    [anon_sym_DUPLICATE] = ACTIONS(281),
    [anon_sym_KEY] = ACTIONS(281),
    [anon_sym_UPDATE] = ACTIONS(281),
    [anon_sym_CREATE] = ACTIONS(281),
    [anon_sym_CONTENT] = ACTIONS(281),
    [anon_sym_SET] = ACTIONS(281),
    [anon_sym_RETURN] = ACTIONS(281),
    [anon_sym_BEFORE] = ACTIONS(281),
    [anon_sym_AFTER] = ACTIONS(281),
    [anon_sym_DIFF] = ACTIONS(281),
    [anon_sym_MERGE] = ACTIONS(281),
    [anon_sym_PATCH] = ACTIONS(281),
    [anon_sym_RELATE] = ACTIONS(281),
    [anon_sym_DELETE] = ACTIONS(281),
    [anon_sym_DEFINE] = ACTIONS(281),
    [anon_sym_NAMESPACE] = ACTIONS(281),
    [anon_sym_DATABASE] = ACTIONS(281),
    [anon_sym_LOGIN] = ACTIONS(281),
    [anon_sym_PASSWORD] = ACTIONS(281),
    [anon_sym_PASSHASH] = ACTIONS(281),
    [anon_sym_TOKEN] = ACTIONS(281),
    [anon_sym_SCOPE] = ACTIONS(281),
    [anon_sym_TYPE] = ACTIONS(281),
    [anon_sym_VALUE] = ACTIONS(281),
    [anon_sym_SESSION] = ACTIONS(281),
    [anon_sym_SIGNUP] = ACTIONS(281),
    [anon_sym_SIGNIN] = ACTIONS(281),
    [anon_sym_TABLE] = ACTIONS(281),
    [anon_sym_DROP] = ACTIONS(281),
    [anon_sym_SCHEMAFULL] = ACTIONS(281),
    [anon_sym_SCHEMALESS] = ACTIONS(281),
    [anon_sym_AS] = ACTIONS(281),
    [anon_sym_PERMISSIONS] = ACTIONS(281),
    [anon_sym_FULL] = ACTIONS(281),
    [anon_sym_FOR] = ACTIONS(281),
    [anon_sym_select] = ACTIONS(281),
    [anon_sym_update] = ACTIONS(281),
    [anon_sym_create] = ACTIONS(281),
    [anon_sym_delete] = ACTIONS(281),
    [anon_sym_EVENT] = ACTIONS(281),
    [anon_sym_WHEN] = ACTIONS(281),
    [anon_sym_ASSERT] = ACTIONS(281),
    [anon_sym_INDEX] = ACTIONS(281),
    [anon_sym_FIELDS] = ACTIONS(281),
    [anon_sym_COLUMNS] = ACTIONS(281),
    [anon_sym_UNIQUE] = ACTIONS(281),
    [anon_sym_REMOVE] = ACTIONS(281),
    [anon_sym_SLEEP] = ACTIONS(281),
    [anon_sym_INFO] = ACTIONS(281),
    [anon_sym_KV] = ACTIONS(281),
    [anon_sym_FUNCTION] = ACTIONS(281),
    [anon_sym_PARAM] = ACTIONS(281),
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
    [anon_sym_DASH_GT] = ACTIONS(279),
    [anon_sym_LT_DASH] = ACTIONS(279),
    [anon_sym_COMMA] = ACTIONS(279),
    [anon_sym_SEMI] = ACTIONS(279),
    [anon_sym_COLON] = ACTIONS(279),
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
  [48] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(283),
    [anon_sym_RBRACE_SEMI] = ACTIONS(283),
    [anon_sym_RBRACE_COMMA] = ACTIONS(283),
    [anon_sym_LBRACE] = ACTIONS(283),
    [anon_sym_RBRACE] = ACTIONS(285),
    [aux_sym_future_token1] = ACTIONS(283),
    [aux_sym_casting_token1] = ACTIONS(283),
    [aux_sym_property_token1] = ACTIONS(285),
    [aux_sym_identifier_token1] = ACTIONS(285),
    [aux_sym_duration_token1] = ACTIONS(285),
    [aux_sym_constant_token1] = ACTIONS(283),
    [aux_sym_number_token1] = ACTIONS(285),
    [aux_sym_record_token1] = ACTIONS(283),
    [aux_sym_record_token2] = ACTIONS(283),
    [anon_sym_USE] = ACTIONS(285),
    [anon_sym_NS] = ACTIONS(285),
    [anon_sym_DB] = ACTIONS(285),
    [anon_sym_LET] = ACTIONS(285),
    [anon_sym_BEGIN] = ACTIONS(285),
    [anon_sym_TRANSACTION] = ACTIONS(285),
    [anon_sym_CANCEL] = ACTIONS(285),
    [anon_sym_COMMIT] = ACTIONS(285),
    [anon_sym_IF] = ACTIONS(285),
    [anon_sym_ELSE] = ACTIONS(285),
    [anon_sym_THEN] = ACTIONS(285),
    [anon_sym_END] = ACTIONS(285),
    [anon_sym_SELECT] = ACTIONS(285),
    [anon_sym_FROM] = ACTIONS(285),
    [anon_sym_WHERE] = ACTIONS(285),
    [anon_sym_SPLIT] = ACTIONS(285),
    [anon_sym_AT] = ACTIONS(285),
    [anon_sym_GROUP] = ACTIONS(285),
    [anon_sym_BY] = ACTIONS(285),
    [anon_sym_ORDER] = ACTIONS(285),
    [anon_sym_COLLATE] = ACTIONS(285),
    [anon_sym_NUMERIC] = ACTIONS(285),
    [anon_sym_ASC] = ACTIONS(285),
    [anon_sym_DESC] = ACTIONS(285),
    [anon_sym_LIMIT] = ACTIONS(285),
    [anon_sym_START] = ACTIONS(285),
    [anon_sym_FETCH] = ACTIONS(285),
    [anon_sym_TIMEOUT] = ACTIONS(285),
    [anon_sym_PARALLEL] = ACTIONS(285),
    [anon_sym_INSERT] = ACTIONS(285),
    [anon_sym_IGNORE] = ACTIONS(285),
    [anon_sym_INTO] = ACTIONS(285),
    [anon_sym_VALUES] = ACTIONS(285),
    [anon_sym_ON] = ACTIONS(285),
    [anon_sym_DUPLICATE] = ACTIONS(285),
    [anon_sym_KEY] = ACTIONS(285),
    [anon_sym_UPDATE] = ACTIONS(285),
    [anon_sym_CREATE] = ACTIONS(285),
    [anon_sym_CONTENT] = ACTIONS(285),
    [anon_sym_SET] = ACTIONS(285),
    [anon_sym_RETURN] = ACTIONS(285),
    [anon_sym_BEFORE] = ACTIONS(285),
    [anon_sym_AFTER] = ACTIONS(285),
    [anon_sym_DIFF] = ACTIONS(285),
    [anon_sym_MERGE] = ACTIONS(285),
    [anon_sym_PATCH] = ACTIONS(285),
    [anon_sym_RELATE] = ACTIONS(285),
    [anon_sym_DELETE] = ACTIONS(285),
    [anon_sym_DEFINE] = ACTIONS(285),
    [anon_sym_NAMESPACE] = ACTIONS(285),
    [anon_sym_DATABASE] = ACTIONS(285),
    [anon_sym_LOGIN] = ACTIONS(285),
    [anon_sym_PASSWORD] = ACTIONS(285),
    [anon_sym_PASSHASH] = ACTIONS(285),
    [anon_sym_TOKEN] = ACTIONS(285),
    [anon_sym_SCOPE] = ACTIONS(285),
    [anon_sym_TYPE] = ACTIONS(285),
    [anon_sym_VALUE] = ACTIONS(285),
    [anon_sym_SESSION] = ACTIONS(285),
    [anon_sym_SIGNUP] = ACTIONS(285),
    [anon_sym_SIGNIN] = ACTIONS(285),
    [anon_sym_TABLE] = ACTIONS(285),
    [anon_sym_DROP] = ACTIONS(285),
    [anon_sym_SCHEMAFULL] = ACTIONS(285),
    [anon_sym_SCHEMALESS] = ACTIONS(285),
    [anon_sym_AS] = ACTIONS(285),
    [anon_sym_PERMISSIONS] = ACTIONS(285),
    [anon_sym_FULL] = ACTIONS(285),
    [anon_sym_FOR] = ACTIONS(285),
    [anon_sym_select] = ACTIONS(285),
    [anon_sym_update] = ACTIONS(285),
    [anon_sym_create] = ACTIONS(285),
    [anon_sym_delete] = ACTIONS(285),
    [anon_sym_EVENT] = ACTIONS(285),
    [anon_sym_WHEN] = ACTIONS(285),
    [anon_sym_ASSERT] = ACTIONS(285),
    [anon_sym_INDEX] = ACTIONS(285),
    [anon_sym_FIELDS] = ACTIONS(285),
    [anon_sym_COLUMNS] = ACTIONS(285),
    [anon_sym_UNIQUE] = ACTIONS(285),
    [anon_sym_REMOVE] = ACTIONS(285),
    [anon_sym_SLEEP] = ACTIONS(285),
    [anon_sym_INFO] = ACTIONS(285),
    [anon_sym_KV] = ACTIONS(285),
    [anon_sym_FUNCTION] = ACTIONS(285),
    [anon_sym_PARAM] = ACTIONS(285),
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
    [anon_sym_DASH_GT] = ACTIONS(283),
    [anon_sym_LT_DASH] = ACTIONS(283),
    [anon_sym_COMMA] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(283),
    [anon_sym_COLON] = ACTIONS(283),
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
  [49] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(287),
    [anon_sym_RBRACE_SEMI] = ACTIONS(287),
    [anon_sym_RBRACE_COMMA] = ACTIONS(287),
    [anon_sym_LBRACE] = ACTIONS(287),
    [anon_sym_RBRACE] = ACTIONS(289),
    [aux_sym_future_token1] = ACTIONS(287),
    [aux_sym_casting_token1] = ACTIONS(287),
    [aux_sym_property_token1] = ACTIONS(289),
    [aux_sym_identifier_token1] = ACTIONS(289),
    [aux_sym_duration_token1] = ACTIONS(289),
    [aux_sym_constant_token1] = ACTIONS(287),
    [aux_sym_number_token1] = ACTIONS(289),
    [aux_sym_record_token1] = ACTIONS(287),
    [aux_sym_record_token2] = ACTIONS(287),
    [anon_sym_USE] = ACTIONS(289),
    [anon_sym_NS] = ACTIONS(289),
    [anon_sym_DB] = ACTIONS(289),
    [anon_sym_LET] = ACTIONS(289),
    [anon_sym_BEGIN] = ACTIONS(289),
    [anon_sym_TRANSACTION] = ACTIONS(289),
    [anon_sym_CANCEL] = ACTIONS(289),
    [anon_sym_COMMIT] = ACTIONS(289),
    [anon_sym_IF] = ACTIONS(289),
    [anon_sym_ELSE] = ACTIONS(289),
    [anon_sym_THEN] = ACTIONS(289),
    [anon_sym_END] = ACTIONS(289),
    [anon_sym_SELECT] = ACTIONS(289),
    [anon_sym_FROM] = ACTIONS(289),
    [anon_sym_WHERE] = ACTIONS(289),
    [anon_sym_SPLIT] = ACTIONS(289),
    [anon_sym_AT] = ACTIONS(289),
    [anon_sym_GROUP] = ACTIONS(289),
    [anon_sym_BY] = ACTIONS(289),
    [anon_sym_ORDER] = ACTIONS(289),
    [anon_sym_COLLATE] = ACTIONS(289),
    [anon_sym_NUMERIC] = ACTIONS(289),
    [anon_sym_ASC] = ACTIONS(289),
    [anon_sym_DESC] = ACTIONS(289),
    [anon_sym_LIMIT] = ACTIONS(289),
    [anon_sym_START] = ACTIONS(289),
    [anon_sym_FETCH] = ACTIONS(289),
    [anon_sym_TIMEOUT] = ACTIONS(289),
    [anon_sym_PARALLEL] = ACTIONS(289),
    [anon_sym_INSERT] = ACTIONS(289),
    [anon_sym_IGNORE] = ACTIONS(289),
    [anon_sym_INTO] = ACTIONS(289),
    [anon_sym_VALUES] = ACTIONS(289),
    [anon_sym_ON] = ACTIONS(289),
    [anon_sym_DUPLICATE] = ACTIONS(289),
    [anon_sym_KEY] = ACTIONS(289),
    [anon_sym_UPDATE] = ACTIONS(289),
    [anon_sym_CREATE] = ACTIONS(289),
    [anon_sym_CONTENT] = ACTIONS(289),
    [anon_sym_SET] = ACTIONS(289),
    [anon_sym_RETURN] = ACTIONS(289),
    [anon_sym_BEFORE] = ACTIONS(289),
    [anon_sym_AFTER] = ACTIONS(289),
    [anon_sym_DIFF] = ACTIONS(289),
    [anon_sym_MERGE] = ACTIONS(289),
    [anon_sym_PATCH] = ACTIONS(289),
    [anon_sym_RELATE] = ACTIONS(289),
    [anon_sym_DELETE] = ACTIONS(289),
    [anon_sym_DEFINE] = ACTIONS(289),
    [anon_sym_NAMESPACE] = ACTIONS(289),
    [anon_sym_DATABASE] = ACTIONS(289),
    [anon_sym_LOGIN] = ACTIONS(289),
    [anon_sym_PASSWORD] = ACTIONS(289),
    [anon_sym_PASSHASH] = ACTIONS(289),
    [anon_sym_TOKEN] = ACTIONS(289),
    [anon_sym_SCOPE] = ACTIONS(289),
    [anon_sym_TYPE] = ACTIONS(289),
    [anon_sym_VALUE] = ACTIONS(289),
    [anon_sym_SESSION] = ACTIONS(289),
    [anon_sym_SIGNUP] = ACTIONS(289),
    [anon_sym_SIGNIN] = ACTIONS(289),
    [anon_sym_TABLE] = ACTIONS(289),
    [anon_sym_DROP] = ACTIONS(289),
    [anon_sym_SCHEMAFULL] = ACTIONS(289),
    [anon_sym_SCHEMALESS] = ACTIONS(289),
    [anon_sym_AS] = ACTIONS(289),
    [anon_sym_PERMISSIONS] = ACTIONS(289),
    [anon_sym_FULL] = ACTIONS(289),
    [anon_sym_FOR] = ACTIONS(289),
    [anon_sym_select] = ACTIONS(289),
    [anon_sym_update] = ACTIONS(289),
    [anon_sym_create] = ACTIONS(289),
    [anon_sym_delete] = ACTIONS(289),
    [anon_sym_EVENT] = ACTIONS(289),
    [anon_sym_WHEN] = ACTIONS(289),
    [anon_sym_ASSERT] = ACTIONS(289),
    [anon_sym_INDEX] = ACTIONS(289),
    [anon_sym_FIELDS] = ACTIONS(289),
    [anon_sym_COLUMNS] = ACTIONS(289),
    [anon_sym_UNIQUE] = ACTIONS(289),
    [anon_sym_REMOVE] = ACTIONS(289),
    [anon_sym_SLEEP] = ACTIONS(289),
    [anon_sym_INFO] = ACTIONS(289),
    [anon_sym_KV] = ACTIONS(289),
    [anon_sym_FUNCTION] = ACTIONS(289),
    [anon_sym_PARAM] = ACTIONS(289),
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
    [anon_sym_DASH_GT] = ACTIONS(287),
    [anon_sym_LT_DASH] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(287),
    [anon_sym_SEMI] = ACTIONS(287),
    [anon_sym_COLON] = ACTIONS(287),
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
  [50] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(291),
    [anon_sym_RBRACE_SEMI] = ACTIONS(291),
    [anon_sym_RBRACE_COMMA] = ACTIONS(291),
    [anon_sym_LBRACE] = ACTIONS(291),
    [anon_sym_RBRACE] = ACTIONS(293),
    [aux_sym_future_token1] = ACTIONS(291),
    [aux_sym_casting_token1] = ACTIONS(291),
    [aux_sym_property_token1] = ACTIONS(293),
    [aux_sym_identifier_token1] = ACTIONS(293),
    [aux_sym_duration_token1] = ACTIONS(293),
    [aux_sym_constant_token1] = ACTIONS(291),
    [aux_sym_number_token1] = ACTIONS(293),
    [aux_sym_record_token1] = ACTIONS(291),
    [aux_sym_record_token2] = ACTIONS(291),
    [anon_sym_USE] = ACTIONS(293),
    [anon_sym_NS] = ACTIONS(293),
    [anon_sym_DB] = ACTIONS(293),
    [anon_sym_LET] = ACTIONS(293),
    [anon_sym_BEGIN] = ACTIONS(293),
    [anon_sym_TRANSACTION] = ACTIONS(293),
    [anon_sym_CANCEL] = ACTIONS(293),
    [anon_sym_COMMIT] = ACTIONS(293),
    [anon_sym_IF] = ACTIONS(293),
    [anon_sym_ELSE] = ACTIONS(293),
    [anon_sym_THEN] = ACTIONS(293),
    [anon_sym_END] = ACTIONS(293),
    [anon_sym_SELECT] = ACTIONS(293),
    [anon_sym_FROM] = ACTIONS(293),
    [anon_sym_WHERE] = ACTIONS(293),
    [anon_sym_SPLIT] = ACTIONS(293),
    [anon_sym_AT] = ACTIONS(293),
    [anon_sym_GROUP] = ACTIONS(293),
    [anon_sym_BY] = ACTIONS(293),
    [anon_sym_ORDER] = ACTIONS(293),
    [anon_sym_COLLATE] = ACTIONS(293),
    [anon_sym_NUMERIC] = ACTIONS(293),
    [anon_sym_ASC] = ACTIONS(293),
    [anon_sym_DESC] = ACTIONS(293),
    [anon_sym_LIMIT] = ACTIONS(293),
    [anon_sym_START] = ACTIONS(293),
    [anon_sym_FETCH] = ACTIONS(293),
    [anon_sym_TIMEOUT] = ACTIONS(293),
    [anon_sym_PARALLEL] = ACTIONS(293),
    [anon_sym_INSERT] = ACTIONS(293),
    [anon_sym_IGNORE] = ACTIONS(293),
    [anon_sym_INTO] = ACTIONS(293),
    [anon_sym_VALUES] = ACTIONS(293),
    [anon_sym_ON] = ACTIONS(293),
    [anon_sym_DUPLICATE] = ACTIONS(293),
    [anon_sym_KEY] = ACTIONS(293),
    [anon_sym_UPDATE] = ACTIONS(293),
    [anon_sym_CREATE] = ACTIONS(293),
    [anon_sym_CONTENT] = ACTIONS(293),
    [anon_sym_SET] = ACTIONS(293),
    [anon_sym_RETURN] = ACTIONS(293),
    [anon_sym_BEFORE] = ACTIONS(293),
    [anon_sym_AFTER] = ACTIONS(293),
    [anon_sym_DIFF] = ACTIONS(293),
    [anon_sym_MERGE] = ACTIONS(293),
    [anon_sym_PATCH] = ACTIONS(293),
    [anon_sym_RELATE] = ACTIONS(293),
    [anon_sym_DELETE] = ACTIONS(293),
    [anon_sym_DEFINE] = ACTIONS(293),
    [anon_sym_NAMESPACE] = ACTIONS(293),
    [anon_sym_DATABASE] = ACTIONS(293),
    [anon_sym_LOGIN] = ACTIONS(293),
    [anon_sym_PASSWORD] = ACTIONS(293),
    [anon_sym_PASSHASH] = ACTIONS(293),
    [anon_sym_TOKEN] = ACTIONS(293),
    [anon_sym_SCOPE] = ACTIONS(293),
    [anon_sym_TYPE] = ACTIONS(293),
    [anon_sym_VALUE] = ACTIONS(293),
    [anon_sym_SESSION] = ACTIONS(293),
    [anon_sym_SIGNUP] = ACTIONS(293),
    [anon_sym_SIGNIN] = ACTIONS(293),
    [anon_sym_TABLE] = ACTIONS(293),
    [anon_sym_DROP] = ACTIONS(293),
    [anon_sym_SCHEMAFULL] = ACTIONS(293),
    [anon_sym_SCHEMALESS] = ACTIONS(293),
    [anon_sym_AS] = ACTIONS(293),
    [anon_sym_PERMISSIONS] = ACTIONS(293),
    [anon_sym_FULL] = ACTIONS(293),
    [anon_sym_FOR] = ACTIONS(293),
    [anon_sym_select] = ACTIONS(293),
    [anon_sym_update] = ACTIONS(293),
    [anon_sym_create] = ACTIONS(293),
    [anon_sym_delete] = ACTIONS(293),
    [anon_sym_EVENT] = ACTIONS(293),
    [anon_sym_WHEN] = ACTIONS(293),
    [anon_sym_ASSERT] = ACTIONS(293),
    [anon_sym_INDEX] = ACTIONS(293),
    [anon_sym_FIELDS] = ACTIONS(293),
    [anon_sym_COLUMNS] = ACTIONS(293),
    [anon_sym_UNIQUE] = ACTIONS(293),
    [anon_sym_REMOVE] = ACTIONS(293),
    [anon_sym_SLEEP] = ACTIONS(293),
    [anon_sym_INFO] = ACTIONS(293),
    [anon_sym_KV] = ACTIONS(293),
    [anon_sym_FUNCTION] = ACTIONS(293),
    [anon_sym_PARAM] = ACTIONS(293),
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
    [anon_sym_DASH_GT] = ACTIONS(291),
    [anon_sym_LT_DASH] = ACTIONS(291),
    [anon_sym_COMMA] = ACTIONS(291),
    [anon_sym_SEMI] = ACTIONS(291),
    [anon_sym_COLON] = ACTIONS(291),
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
  [51] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(295),
    [anon_sym_RBRACE_SEMI] = ACTIONS(295),
    [anon_sym_RBRACE_COMMA] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(295),
    [anon_sym_RBRACE] = ACTIONS(297),
    [aux_sym_future_token1] = ACTIONS(295),
    [aux_sym_casting_token1] = ACTIONS(295),
    [aux_sym_property_token1] = ACTIONS(297),
    [aux_sym_identifier_token1] = ACTIONS(297),
    [aux_sym_duration_token1] = ACTIONS(297),
    [aux_sym_constant_token1] = ACTIONS(295),
    [aux_sym_number_token1] = ACTIONS(297),
    [aux_sym_record_token1] = ACTIONS(295),
    [aux_sym_record_token2] = ACTIONS(295),
    [anon_sym_USE] = ACTIONS(297),
    [anon_sym_NS] = ACTIONS(297),
    [anon_sym_DB] = ACTIONS(297),
    [anon_sym_LET] = ACTIONS(297),
    [anon_sym_BEGIN] = ACTIONS(297),
    [anon_sym_TRANSACTION] = ACTIONS(297),
    [anon_sym_CANCEL] = ACTIONS(297),
    [anon_sym_COMMIT] = ACTIONS(297),
    [anon_sym_IF] = ACTIONS(297),
    [anon_sym_ELSE] = ACTIONS(297),
    [anon_sym_THEN] = ACTIONS(297),
    [anon_sym_END] = ACTIONS(297),
    [anon_sym_SELECT] = ACTIONS(297),
    [anon_sym_FROM] = ACTIONS(297),
    [anon_sym_WHERE] = ACTIONS(297),
    [anon_sym_SPLIT] = ACTIONS(297),
    [anon_sym_AT] = ACTIONS(297),
    [anon_sym_GROUP] = ACTIONS(297),
    [anon_sym_BY] = ACTIONS(297),
    [anon_sym_ORDER] = ACTIONS(297),
    [anon_sym_COLLATE] = ACTIONS(297),
    [anon_sym_NUMERIC] = ACTIONS(297),
    [anon_sym_ASC] = ACTIONS(297),
    [anon_sym_DESC] = ACTIONS(297),
    [anon_sym_LIMIT] = ACTIONS(297),
    [anon_sym_START] = ACTIONS(297),
    [anon_sym_FETCH] = ACTIONS(297),
    [anon_sym_TIMEOUT] = ACTIONS(297),
    [anon_sym_PARALLEL] = ACTIONS(297),
    [anon_sym_INSERT] = ACTIONS(297),
    [anon_sym_IGNORE] = ACTIONS(297),
    [anon_sym_INTO] = ACTIONS(297),
    [anon_sym_VALUES] = ACTIONS(297),
    [anon_sym_ON] = ACTIONS(297),
    [anon_sym_DUPLICATE] = ACTIONS(297),
    [anon_sym_KEY] = ACTIONS(297),
    [anon_sym_UPDATE] = ACTIONS(297),
    [anon_sym_CREATE] = ACTIONS(297),
    [anon_sym_CONTENT] = ACTIONS(297),
    [anon_sym_SET] = ACTIONS(297),
    [anon_sym_RETURN] = ACTIONS(297),
    [anon_sym_BEFORE] = ACTIONS(297),
    [anon_sym_AFTER] = ACTIONS(297),
    [anon_sym_DIFF] = ACTIONS(297),
    [anon_sym_MERGE] = ACTIONS(297),
    [anon_sym_PATCH] = ACTIONS(297),
    [anon_sym_RELATE] = ACTIONS(297),
    [anon_sym_DELETE] = ACTIONS(297),
    [anon_sym_DEFINE] = ACTIONS(297),
    [anon_sym_NAMESPACE] = ACTIONS(297),
    [anon_sym_DATABASE] = ACTIONS(297),
    [anon_sym_LOGIN] = ACTIONS(297),
    [anon_sym_PASSWORD] = ACTIONS(297),
    [anon_sym_PASSHASH] = ACTIONS(297),
    [anon_sym_TOKEN] = ACTIONS(297),
    [anon_sym_SCOPE] = ACTIONS(297),
    [anon_sym_TYPE] = ACTIONS(297),
    [anon_sym_VALUE] = ACTIONS(297),
    [anon_sym_SESSION] = ACTIONS(297),
    [anon_sym_SIGNUP] = ACTIONS(297),
    [anon_sym_SIGNIN] = ACTIONS(297),
    [anon_sym_TABLE] = ACTIONS(297),
    [anon_sym_DROP] = ACTIONS(297),
    [anon_sym_SCHEMAFULL] = ACTIONS(297),
    [anon_sym_SCHEMALESS] = ACTIONS(297),
    [anon_sym_AS] = ACTIONS(297),
    [anon_sym_PERMISSIONS] = ACTIONS(297),
    [anon_sym_FULL] = ACTIONS(297),
    [anon_sym_FOR] = ACTIONS(297),
    [anon_sym_select] = ACTIONS(297),
    [anon_sym_update] = ACTIONS(297),
    [anon_sym_create] = ACTIONS(297),
    [anon_sym_delete] = ACTIONS(297),
    [anon_sym_EVENT] = ACTIONS(297),
    [anon_sym_WHEN] = ACTIONS(297),
    [anon_sym_ASSERT] = ACTIONS(297),
    [anon_sym_INDEX] = ACTIONS(297),
    [anon_sym_FIELDS] = ACTIONS(297),
    [anon_sym_COLUMNS] = ACTIONS(297),
    [anon_sym_UNIQUE] = ACTIONS(297),
    [anon_sym_REMOVE] = ACTIONS(297),
    [anon_sym_SLEEP] = ACTIONS(297),
    [anon_sym_INFO] = ACTIONS(297),
    [anon_sym_KV] = ACTIONS(297),
    [anon_sym_FUNCTION] = ACTIONS(297),
    [anon_sym_PARAM] = ACTIONS(297),
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
    [anon_sym_DASH_GT] = ACTIONS(295),
    [anon_sym_LT_DASH] = ACTIONS(295),
    [anon_sym_COMMA] = ACTIONS(295),
    [anon_sym_SEMI] = ACTIONS(295),
    [anon_sym_COLON] = ACTIONS(295),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(343), 1,
      anon_sym_BSLASH,
    ACTIONS(346), 1,
      anon_sym_DQUOTE,
    ACTIONS(348), 1,
      aux_sym_string_token3,
    STATE(52), 1,
      aux_sym_string_repeat2,
  [13] = 4,
    ACTIONS(351), 1,
      anon_sym_SQUOTE,
    ACTIONS(353), 1,
      aux_sym_string_token1,
    ACTIONS(356), 1,
      anon_sym_BSLASH,
    STATE(53), 1,
      aux_sym_string_repeat1,
  [26] = 4,
    ACTIONS(359), 1,
      anon_sym_BSLASH,
    ACTIONS(361), 1,
      anon_sym_DQUOTE,
    ACTIONS(363), 1,
      aux_sym_string_token3,
    STATE(52), 1,
      aux_sym_string_repeat2,
  [39] = 4,
    ACTIONS(361), 1,
      anon_sym_SQUOTE,
    ACTIONS(365), 1,
      aux_sym_string_token1,
    ACTIONS(367), 1,
      anon_sym_BSLASH,
    STATE(53), 1,
      aux_sym_string_repeat1,
  [52] = 4,
    ACTIONS(359), 1,
      anon_sym_BSLASH,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    ACTIONS(371), 1,
      aux_sym_string_token3,
    STATE(54), 1,
      aux_sym_string_repeat2,
  [65] = 4,
    ACTIONS(367), 1,
      anon_sym_BSLASH,
    ACTIONS(373), 1,
      anon_sym_SQUOTE,
    ACTIONS(375), 1,
      aux_sym_string_token1,
    STATE(59), 1,
      aux_sym_string_repeat1,
  [78] = 4,
    ACTIONS(359), 1,
      anon_sym_BSLASH,
    ACTIONS(373), 1,
      anon_sym_DQUOTE,
    ACTIONS(377), 1,
      aux_sym_string_token3,
    STATE(60), 1,
      aux_sym_string_repeat2,
  [91] = 4,
    ACTIONS(365), 1,
      aux_sym_string_token1,
    ACTIONS(367), 1,
      anon_sym_BSLASH,
    ACTIONS(379), 1,
      anon_sym_SQUOTE,
    STATE(53), 1,
      aux_sym_string_repeat1,
  [104] = 4,
    ACTIONS(359), 1,
      anon_sym_BSLASH,
    ACTIONS(363), 1,
      aux_sym_string_token3,
    ACTIONS(379), 1,
      anon_sym_DQUOTE,
    STATE(52), 1,
      aux_sym_string_repeat2,
  [117] = 4,
    ACTIONS(367), 1,
      anon_sym_BSLASH,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(381), 1,
      aux_sym_string_token1,
    STATE(55), 1,
      aux_sym_string_repeat1,
  [130] = 2,
    ACTIONS(383), 1,
      aux_sym_string_token3,
    ACTIONS(346), 2,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
  [138] = 2,
    ACTIONS(385), 1,
      aux_sym_string_token1,
    ACTIONS(351), 2,
      anon_sym_SQUOTE,
      anon_sym_BSLASH,
  [146] = 1,
    ACTIONS(387), 2,
      anon_sym_RBRACE_SEMI,
      anon_sym_RBRACE_COMMA,
  [151] = 1,
    ACTIONS(389), 2,
      anon_sym_RBRACE_SEMI,
      anon_sym_RBRACE_COMMA,
  [156] = 1,
    ACTIONS(391), 1,
      aux_sym_string_token2,
  [160] = 1,
    ACTIONS(393), 1,
      aux_sym_string_token2,
  [164] = 1,
    ACTIONS(395), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(52)] = 0,
  [SMALL_STATE(53)] = 13,
  [SMALL_STATE(54)] = 26,
  [SMALL_STATE(55)] = 39,
  [SMALL_STATE(56)] = 52,
  [SMALL_STATE(57)] = 65,
  [SMALL_STATE(58)] = 78,
  [SMALL_STATE(59)] = 91,
  [SMALL_STATE(60)] = 104,
  [SMALL_STATE(61)] = 117,
  [SMALL_STATE(62)] = 130,
  [SMALL_STATE(63)] = 138,
  [SMALL_STATE(64)] = 146,
  [SMALL_STATE(65)] = 151,
  [SMALL_STATE(66)] = 156,
  [SMALL_STATE(67)] = 160,
  [SMALL_STATE(68)] = 164,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripting_content, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(6),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(41),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(41),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(42),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(43),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(44),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(45),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(46),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(47),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(48),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(49),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(50),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(51),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(51),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(40),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(39),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(9),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(36),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(36),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(34),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(33),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(32),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(57),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(58),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_algotype, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_algotype, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_casting, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_casting, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 1),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delimiter, 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delimiter, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype, 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nothing, 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nothing, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token, 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_punctuation, 1),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_punctuation, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripting_function, 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scripting_function, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_future, 1),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_future, 1),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(66),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(52),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(53),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(67),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [395] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
