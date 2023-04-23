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
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 24
#define SYMBOL_COUNT 241
#define ALIAS_COUNT 0
#define TOKEN_COUNT 218
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_future_token1 = 1,
  aux_sym_casting_token1 = 2,
  aux_sym_property_token1 = 3,
  aux_sym_identifier_token1 = 4,
  aux_sym_duration_token1 = 5,
  aux_sym_constant_token1 = 6,
  aux_sym_number_token1 = 7,
  aux_sym_record_token1 = 8,
  aux_sym_record_token2 = 9,
  anon_sym_USE = 10,
  anon_sym_NS = 11,
  anon_sym_DB = 12,
  anon_sym_LET = 13,
  anon_sym_BEGIN = 14,
  anon_sym_TRANSACTION = 15,
  anon_sym_CANCEL = 16,
  anon_sym_COMMIT = 17,
  anon_sym_IF = 18,
  anon_sym_ELSE = 19,
  anon_sym_THEN = 20,
  anon_sym_END = 21,
  anon_sym_SELECT = 22,
  anon_sym_FROM = 23,
  anon_sym_WHERE = 24,
  anon_sym_SPLIT = 25,
  anon_sym_AT = 26,
  anon_sym_GROUP = 27,
  anon_sym_BY = 28,
  anon_sym_ORDER = 29,
  anon_sym_COLLATE = 30,
  anon_sym_NUMERIC = 31,
  anon_sym_ASC = 32,
  anon_sym_DESC = 33,
  anon_sym_LIMIT = 34,
  anon_sym_START = 35,
  anon_sym_FETCH = 36,
  anon_sym_TIMEOUT = 37,
  anon_sym_PARALLEL = 38,
  anon_sym_INSERT = 39,
  anon_sym_IGNORE = 40,
  anon_sym_INTO = 41,
  anon_sym_VALUES = 42,
  anon_sym_ON = 43,
  anon_sym_DUPLICATE = 44,
  anon_sym_KEY = 45,
  anon_sym_UPDATE = 46,
  anon_sym_CREATE = 47,
  anon_sym_CONTENT = 48,
  anon_sym_SET = 49,
  anon_sym_RETURN = 50,
  anon_sym_BEFORE = 51,
  anon_sym_AFTER = 52,
  anon_sym_DIFF = 53,
  anon_sym_MERGE = 54,
  anon_sym_PATCH = 55,
  anon_sym_RELATE = 56,
  anon_sym_DELETE = 57,
  anon_sym_DEFINE = 58,
  anon_sym_NAMESPACE = 59,
  anon_sym_DATABASE = 60,
  anon_sym_LOGIN = 61,
  anon_sym_PASSWORD = 62,
  anon_sym_PASSHASH = 63,
  anon_sym_TOKEN = 64,
  anon_sym_SCOPE = 65,
  anon_sym_TYPE = 66,
  anon_sym_VALUE = 67,
  anon_sym_SESSION = 68,
  anon_sym_SIGNUP = 69,
  anon_sym_SIGNIN = 70,
  anon_sym_TABLE = 71,
  anon_sym_DROP = 72,
  anon_sym_SCHEMAFULL = 73,
  anon_sym_SCHEMALESS = 74,
  anon_sym_AS = 75,
  anon_sym_PERMISSIONS = 76,
  anon_sym_FULL = 77,
  anon_sym_FOR = 78,
  anon_sym_select = 79,
  anon_sym_update = 80,
  anon_sym_create = 81,
  anon_sym_delete = 82,
  anon_sym_EVENT = 83,
  anon_sym_WHEN = 84,
  anon_sym_ASSERT = 85,
  anon_sym_INDEX = 86,
  anon_sym_FIELDS = 87,
  anon_sym_COLUMNS = 88,
  anon_sym_UNIQUE = 89,
  anon_sym_REMOVE = 90,
  anon_sym_SLEEP = 91,
  anon_sym_INFO = 92,
  anon_sym_KV = 93,
  anon_sym_FUNCTION = 94,
  anon_sym_PARAM = 95,
  anon_sym_AMP_AMP = 96,
  anon_sym_AND = 97,
  anon_sym_PIPE_PIPE = 98,
  anon_sym_OR = 99,
  anon_sym_QMARK_QMARK = 100,
  anon_sym_QMARK_COLON = 101,
  anon_sym_EQ = 102,
  anon_sym_IS = 103,
  anon_sym_BANG_EQ = 104,
  anon_sym_ISNOT = 105,
  anon_sym_EQ_EQ = 106,
  anon_sym_QMARK_EQ = 107,
  anon_sym_STAR_EQ = 108,
  anon_sym_TILDE = 109,
  anon_sym_BANG_TILDE = 110,
  anon_sym_QMARK_TILDE = 111,
  anon_sym_STAR_TILDE = 112,
  anon_sym_LT = 113,
  anon_sym_LT_EQ = 114,
  anon_sym_GT = 115,
  anon_sym_GT_EQ = 116,
  anon_sym_PLUS = 117,
  anon_sym_DASH = 118,
  anon_sym_STAR = 119,
  anon_sym_x = 120,
  anon_sym_SLASH = 121,
  anon_sym_ = 122,
  anon_sym_STAR_STAR = 123,
  anon_sym_IN = 124,
  anon_sym_CONTAINS = 125,
  anon_sym_2 = 126,
  anon_sym_CONTAINSNOT = 127,
  anon_sym_3 = 128,
  anon_sym_CONTAINSALL = 129,
  anon_sym_4 = 130,
  anon_sym_CONTAINSANY = 131,
  anon_sym_5 = 132,
  anon_sym_CONTAINSNONE = 133,
  anon_sym_6 = 134,
  anon_sym_INSIDE = 135,
  anon_sym_7 = 136,
  anon_sym_NOTINSIDE = 137,
  anon_sym_NOTIN = 138,
  anon_sym_8 = 139,
  anon_sym_ALLINSIDE = 140,
  anon_sym_9 = 141,
  anon_sym_ANYINSIDE = 142,
  anon_sym_10 = 143,
  anon_sym_NONEINSIDE = 144,
  anon_sym_11 = 145,
  anon_sym_OUTSIDE = 146,
  anon_sym_INTERSECTS = 147,
  anon_sym_COMMA = 148,
  anon_sym_SEMI = 149,
  anon_sym_COLON = 150,
  anon_sym_LPAREN = 151,
  anon_sym_RPAREN = 152,
  anon_sym_LBRACK = 153,
  anon_sym_RBRACK = 154,
  anon_sym_LBRACE = 155,
  anon_sym_RBRACE = 156,
  anon_sym_DASH_GT = 157,
  anon_sym_LT_DASH = 158,
  anon_sym_any = 159,
  anon_sym_array = 160,
  anon_sym_bool = 161,
  anon_sym_datetime = 162,
  anon_sym_decimal = 163,
  anon_sym_duration = 164,
  anon_sym_float = 165,
  anon_sym_int = 166,
  anon_sym_number = 167,
  anon_sym_object = 168,
  anon_sym_string = 169,
  anon_sym_record = 170,
  anon_sym_geometry = 171,
  anon_sym_EDDSA = 172,
  anon_sym_ES256 = 173,
  anon_sym_ES384 = 174,
  anon_sym_ES512 = 175,
  anon_sym_HS256 = 176,
  anon_sym_HS384 = 177,
  anon_sym_HS512 = 178,
  anon_sym_PS256 = 179,
  anon_sym_PS384 = 180,
  anon_sym_PS512 = 181,
  anon_sym_RS256 = 182,
  anon_sym_RS384 = 183,
  anon_sym_RS512 = 184,
  aux_sym_function_token1 = 185,
  aux_sym_function_token2 = 186,
  anon_sym_count = 187,
  aux_sym_function_token3 = 188,
  aux_sym_function_token4 = 189,
  aux_sym_function_token5 = 190,
  aux_sym_function_token6 = 191,
  aux_sym_function_token7 = 192,
  aux_sym_function_token8 = 193,
  aux_sym_function_token9 = 194,
  aux_sym_function_token10 = 195,
  aux_sym_function_token11 = 196,
  aux_sym_function_token12 = 197,
  aux_sym_function_token13 = 198,
  aux_sym_function_token14 = 199,
  aux_sym_function_token15 = 200,
  aux_sym_function_token16 = 201,
  anon_sym_true = 202,
  anon_sym_false = 203,
  anon_sym_TRUE = 204,
  anon_sym_FALSE = 205,
  anon_sym_null = 206,
  anon_sym_NULL = 207,
  anon_sym_none = 208,
  anon_sym_NONE = 209,
  sym_variable = 210,
  sym_comment = 211,
  anon_sym_SQUOTE = 212,
  aux_sym_string_token1 = 213,
  anon_sym_BSLASH = 214,
  aux_sym_string_token2 = 215,
  anon_sym_DQUOTE = 216,
  aux_sym_string_token3 = 217,
  sym_source_file = 218,
  sym_token = 219,
  sym_future = 220,
  sym_casting = 221,
  sym_property = 222,
  sym_identifier = 223,
  sym_duration = 224,
  sym_constant = 225,
  sym_number = 226,
  sym_record = 227,
  sym_keyword = 228,
  sym_operator = 229,
  sym_punctuation = 230,
  sym_type = 231,
  sym_datatype = 232,
  sym_algotype = 233,
  sym_function = 234,
  sym_bool = 235,
  sym_nothing = 236,
  sym_string = 237,
  aux_sym_source_file_repeat1 = 238,
  aux_sym_string_repeat1 = 239,
  aux_sym_string_repeat2 = 240,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LT_DASH] = "<-",
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
  [sym_type] = "type",
  [sym_datatype] = "datatype",
  [sym_algotype] = "algotype",
  [sym_function] = "function",
  [sym_bool] = "bool",
  [sym_nothing] = "nothing",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
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
  [sym_type] = sym_type,
  [sym_datatype] = sym_datatype,
  [sym_algotype] = sym_algotype,
  [sym_function] = sym_function,
  [sym_bool] = sym_bool,
  [sym_nothing] = sym_nothing,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(89);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '"') ADVANCE(801);
      if (lookahead == '#') ADVANCE(794);
      if (lookahead == '$') ADVANCE(84);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(795);
      if (lookahead == '(') ADVANCE(730);
      if (lookahead == ')') ADVANCE(731);
      if (lookahead == '*') ADVANCE(698);
      if (lookahead == '+') ADVANCE(696);
      if (lookahead == ',') ADVANCE(727);
      if (lookahead == '-') ADVANCE(697);
      if (lookahead == '/') ADVANCE(700);
      if (lookahead == ':') ADVANCE(729);
      if (lookahead == ';') ADVANCE(728);
      if (lookahead == '<') ADVANCE(692);
      if (lookahead == '=') ADVANCE(681);
      if (lookahead == '>') ADVANCE(694);
      if (lookahead == '?') ADVANCE(7);
      if (lookahead == 'A') ADVANCE(247);
      if (lookahead == 'B') ADVANCE(188);
      if (lookahead == 'C') ADVANCE(137);
      if (lookahead == 'D') ADVANCE(142);
      if (lookahead == 'E') ADVANCE(175);
      if (lookahead == 'F') ADVANCE(143);
      if (lookahead == 'G') ADVANCE(373);
      if (lookahead == 'H') ADVANCE(403);
      if (lookahead == 'I') ADVANCE(248);
      if (lookahead == 'K') ADVANCE(189);
      if (lookahead == 'L') ADVANCE(226);
      if (lookahead == 'M') ADVANCE(149);
      if (lookahead == 'N') ADVANCE(144);
      if (lookahead == 'O') ADVANCE(319);
      if (lookahead == 'P') ADVANCE(138);
      if (lookahead == 'R') ADVANCE(190);
      if (lookahead == 'S') ADVANCE(163);
      if (lookahead == 'T') ADVANCE(139);
      if (lookahead == 'U') ADVANCE(320);
      if (lookahead == 'V') ADVANCE(147);
      if (lookahead == 'W') ADVANCE(261);
      if (lookahead == '[') ADVANCE(732);
      if (lookahead == '\\') ADVANCE(798);
      if (lookahead == ']') ADVANCE(733);
      if (lookahead == 'a') ADVANCE(510);
      if (lookahead == 'b') ADVANCE(520);
      if (lookahead == 'c') ADVANCE(519);
      if (lookahead == 'd') ADVANCE(448);
      if (lookahead == 'f') ADVANCE(447);
      if (lookahead == 'g') ADVANCE(478);
      if (lookahead == 'h') ADVANCE(552);
      if (lookahead == 'i') ADVANCE(515);
      if (lookahead == 'm') ADVANCE(453);
      if (lookahead == 'n') ADVANCE(522);
      if (lookahead == 'o') ADVANCE(459);
      if (lookahead == 'p') ADVANCE(450);
      if (lookahead == 'r') ADVANCE(451);
      if (lookahead == 's') ADVANCE(469);
      if (lookahead == 't') ADVANCE(492);
      if (lookahead == 'u') ADVANCE(531);
      if (lookahead == 'x') ADVANCE(699);
      if (lookahead == '{') ADVANCE(734);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '}') ADVANCE(735);
      if (lookahead == '~') ADVANCE(688);
      if (lookahead == 247) ADVANCE(701);
      if (lookahead == 8712) ADVANCE(715);
      if (lookahead == 8713) ADVANCE(718);
      if (lookahead == 8715) ADVANCE(705);
      if (lookahead == 8716) ADVANCE(707);
      if (lookahead == 8834) ADVANCE(722);
      if (lookahead == 8835) ADVANCE(711);
      if (lookahead == 8836) ADVANCE(724);
      if (lookahead == 8837) ADVANCE(713);
      if (lookahead == 8838) ADVANCE(720);
      if (lookahead == 8839) ADVANCE(709);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      if (('J' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == '/') ADVANCE(793);
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
          lookahead == ' ') ADVANCE(800);
      if (lookahead != 0) ADVANCE(799);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(801);
      if (lookahead == '\\') ADVANCE(798);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(803);
      if (lookahead != 0) ADVANCE(802);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(675);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(795);
      if (lookahead == '\\') ADVANCE(798);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(797);
      if (lookahead != 0) ADVANCE(796);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(680);
      if (lookahead == '=') ADVANCE(686);
      if (lookahead == '?') ADVANCE(679);
      if (lookahead == '~') ADVANCE(690);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(80);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(81);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(74);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(76);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(77);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(683);
      if (lookahead == '~') ADVANCE(689);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(91);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(90);
      END_STATE();
    case 18:
      if (lookahead == 'I') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'N') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'N') ADVANCE(717);
      END_STATE();
    case 21:
      if (lookahead == 'O') ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'T') ADVANCE(684);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(16);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 62:
      if (lookahead == '|') ADVANCE(677);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(586);
      END_STATE();
    case 64:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      END_STATE();
    case 65:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 66:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      END_STATE();
    case 67:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 68:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      END_STATE();
    case 69:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 70:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 71:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(765);
      END_STATE();
    case 72:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(775);
      END_STATE();
    case 73:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 74:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 75:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 76:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 77:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(776);
      END_STATE();
    case 78:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(768);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(778);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(584);
      END_STATE();
    case 83:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(780);
      END_STATE();
    case 84:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(792);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(764);
      END_STATE();
    case 87:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead == '`' ||
          lookahead == 10217) ADVANCE(588);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_future_token1);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_casting_token1);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '1') ADVANCE(114);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '1') ADVANCE(115);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '1') ADVANCE(116);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '1') ADVANCE(117);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(125);
      if (lookahead == '3') ADVANCE(133);
      if (lookahead == '5') ADVANCE(109);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(754);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(757);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(760);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(763);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(126);
      if (lookahead == '3') ADVANCE(134);
      if (lookahead == '5') ADVANCE(110);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(127);
      if (lookahead == '3') ADVANCE(135);
      if (lookahead == '5') ADVANCE(111);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(128);
      if (lookahead == '3') ADVANCE(136);
      if (lookahead == '5') ADVANCE(112);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '4') ADVANCE(753);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '4') ADVANCE(756);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '4') ADVANCE(759);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '4') ADVANCE(762);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '5') ADVANCE(129);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '5') ADVANCE(130);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '5') ADVANCE(131);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '5') ADVANCE(132);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '6') ADVANCE(752);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '6') ADVANCE(755);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '6') ADVANCE(758);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '6') ADVANCE(761);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '8') ADVANCE(121);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '8') ADVANCE(122);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '8') ADVANCE(123);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '8') ADVANCE(124);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'A') ADVANCE(321);
      if (lookahead == 'O') ADVANCE(288);
      if (lookahead == 'R') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'A') ADVANCE(375);
      if (lookahead == 'E') ADVANCE(383);
      if (lookahead == 'S') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'A') ADVANCE(162);
      if (lookahead == 'H') ADVANCE(228);
      if (lookahead == 'I') ADVANCE(317);
      if (lookahead == 'O') ADVANCE(287);
      if (lookahead == 'R') ADVANCE(150);
      if (lookahead == 'Y') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'A') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'A') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'A') ADVANCE(426);
      if (lookahead == 'B') ADVANCE(591);
      if (lookahead == 'E') ADVANCE(253);
      if (lookahead == 'I') ADVANCE(250);
      if (lookahead == 'R') ADVANCE(351);
      if (lookahead == 'U') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'A') ADVANCE(306);
      if (lookahead == 'E') ADVANCE(424);
      if (lookahead == 'I') ADVANCE(227);
      if (lookahead == 'O') ADVANCE(370);
      if (lookahead == 'R') ADVANCE(352);
      if (lookahead == 'U') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'A') ADVANCE(316);
      if (lookahead == 'O') ADVANCE(336);
      if (lookahead == 'S') ADVANCE(590);
      if (lookahead == 'U') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'A') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'A') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'A') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'A') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'A') ADVANCE(423);
      if (lookahead == 'E') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'A') ADVANCE(341);
      if (lookahead == 'U') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'A') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'A') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'A') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'A') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'A') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'A') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'A') ADVANCE(277);
      if (lookahead == 'E') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'A') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'A') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'A') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'B') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'B') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'C') ADVANCE(263);
      if (lookahead == 'E') ADVANCE(303);
      if (lookahead == 'I') ADVANCE(254);
      if (lookahead == 'L') ADVANCE(241);
      if (lookahead == 'P') ADVANCE(307);
      if (lookahead == 'T') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'C') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'C') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'C') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'C') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'C') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'C') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'C') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'C') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'C') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'C') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'C') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'D') ADVANCE(179);
      if (lookahead == 'L') ADVANCE(399);
      if (lookahead == 'N') ADVANCE(177);
      if (lookahead == 'S') ADVANCE(113);
      if (lookahead == 'V') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'D') ADVANCE(676);
      if (lookahead == 'Y') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'D') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'D') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'D') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'D') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'D') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'D') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'D') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'D') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'D') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'D') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'D') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(251);
      if (lookahead == 'Y') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(445);
      if (lookahead == 'V') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(309);
      if (lookahead == 'S') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(411);
      if (lookahead == 'I') ADVANCE(312);
      if (lookahead == 'O') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(385);
      if (lookahead == 'O') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(380);
      if (lookahead == 'I') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'F') ADVANCE(427);
      if (lookahead == 'L') ADVANCE(295);
      if (lookahead == 'N') ADVANCE(176);
      if (lookahead == 'S') ADVANCE(654);
      if (lookahead == 'T') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'F') ADVANCE(597);
      if (lookahead == 'G') ADVANCE(342);
      if (lookahead == 'N') ADVANCE(703);
      if (lookahead == 'S') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'F') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'F') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'F') ADVANCE(354);
      if (lookahead == 'G') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'F') ADVANCE(439);
      if (lookahead == 'L') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'F') ADVANCE(271);
      if (lookahead == 'L') ADVANCE(244);
      if (lookahead == 'S') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'G') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'G') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'G') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'H') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'H') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'H') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'H') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'H') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'H') ADVANCE(151);
      if (lookahead == 'W') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'H') ADVANCE(230);
      if (lookahead == 'O') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(329);
      if (lookahead == 'U') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'K') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(310);
      if (lookahead == 'M') ADVANCE(318);
      if (lookahead == 'N') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(289);
      if (lookahead == 'N') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(290);
      if (lookahead == 'M') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(308);
      if (lookahead == 'M') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(294);
      if (lookahead == 'N') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(242);
      if (lookahead == 'S') ADVANCE(397);
      if (lookahead == 'T') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(154);
      if (lookahead == 'M') ADVANCE(349);
      if (lookahead == 'T') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(158);
      if (lookahead == 'U') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'M') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'M') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'M') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'M') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'M') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'M') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'M') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'M') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(622);
      if (lookahead == 'R') ADVANCE(678);
      if (lookahead == 'U') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(264);
      if (lookahead == 'P') ADVANCE(187);
      if (lookahead == 'S') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(663);
      if (lookahead == 'R') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(195);
      if (lookahead == 'T') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(223);
      if (lookahead == 'T') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'O') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'O') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'O') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'O') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'O') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'O') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'O') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'O') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'O') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'O') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'O') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'O') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'O') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'O') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'P') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'P') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'P') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'P') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'P') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'P') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'P') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'P') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'Q') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(145);
      if (lookahead == 'S') ADVANCE(386);
      if (lookahead == 'T') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'U') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'U') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'U') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'U') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'U') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'U') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'V') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'X') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'Y') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'Y') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(500);
      if (lookahead == 'l') ADVANCE(528);
      if (lookahead == 'n') ADVANCE(570);
      if (lookahead == 'u') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'e') ADVANCE(461);
      if (lookahead == 'u') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(514);
      if (lookahead == 'e') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(546);
      if (lookahead == 'e') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'b') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'b') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'c') ADVANCE(493);
      if (lookahead == 'l') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'c') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'c') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'c') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'c') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(505);
      if (lookahead == 'l') ADVANCE(481);
      if (lookahead == 't') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(456);
      if (lookahead == 'y') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'g') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'h') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(507);
      if (lookahead == 'r') ADVANCE(564);
      if (lookahead == 'y') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'j') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(502);
      if (lookahead == 'm') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(486);
      if (lookahead == 's') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'm') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'm') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'm') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(565);
      if (lookahead == 'r') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(545);
      if (lookahead == 's') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(563);
      if (lookahead == 'r') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(516);
      if (lookahead == 'u') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'p') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'p') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'p') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'p') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'p') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 's') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 's') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 's') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 't') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 't') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 't') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 't') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 't') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 't') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 't') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 't') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 't') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 't') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 't') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 't') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 't') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 't') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 't') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 't') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 't') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 't') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'y') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'y') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'y') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_duration_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 's' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(584);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 's' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(586);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_record_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_record_token2);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_USE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_NS);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_DB);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_LET);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_BEGIN);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_TRANSACTION);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_CANCEL);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_COMMIT);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_THEN);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_SELECT);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_WHERE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_SPLIT);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_GROUP);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_BY);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_ORDER);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_COLLATE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_NUMERIC);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_ASC);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_DESC);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_LIMIT);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_START);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_FETCH);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_TIMEOUT);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_PARALLEL);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_INSERT);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_IGNORE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_INTO);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_VALUES);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_ON);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_DUPLICATE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_KEY);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_UPDATE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_CREATE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_CONTENT);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_RETURN);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_BEFORE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_AFTER);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_DIFF);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_MERGE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_RELATE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_DEFINE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_NAMESPACE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_DATABASE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_LOGIN);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_PASSWORD);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_PASSHASH);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_TOKEN);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_SCOPE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_TYPE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_VALUE);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_SESSION);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_SIGNUP);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_SIGNIN);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_TABLE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_DROP);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_SCHEMAFULL);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_SCHEMALESS);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_AS);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'C') ADVANCE(611);
      if (lookahead == 'S') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_PERMISSIONS);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_FULL);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_select);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_update);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_create);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_EVENT);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_WHEN);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_ASSERT);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_INDEX);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_FIELDS);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_COLUMNS);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_UNIQUE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_REMOVE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_SLEEP);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_INFO);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_KV);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_FUNCTION);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_PARAM);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_AND);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_OR);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'D') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_QMARK_COLON);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(685);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_IS);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_ISNOT);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_QMARK_EQ);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_QMARK_TILDE);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_STAR_TILDE);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(737);
      if (lookahead == '=') ADVANCE(693);
      if (lookahead == 'b') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(695);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(794);
      if (lookahead == '>') ADVANCE(736);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(702);
      if (lookahead == '=') ADVANCE(687);
      if (lookahead == '~') ADVANCE(691);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(794);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'D') ADVANCE(194);
      if (lookahead == 'F') ADVANCE(348);
      if (lookahead == 'S') ADVANCE(246);
      if (lookahead == 'T') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_CONTAINS);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'A') ADVANCE(302);
      if (lookahead == 'N') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_CONTAINSNOT);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_CONTAINSALL);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_CONTAINSANY);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_CONTAINSNONE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_INSIDE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_NOTINSIDE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_NOTIN);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_ALLINSIDE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_ANYINSIDE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_NONEINSIDE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_OUTSIDE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_INTERSECTS);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_array);
      if (lookahead == ':') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_duration);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_number);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_object);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == ':') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_record);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_geometry);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_EDDSA);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_ES256);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_ES384);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_ES512);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_HS256);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_HS384);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_HS512);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_PS256);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_PS384);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_PS512);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_RS256);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_RS384);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_RS512);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_function_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(764);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_function_token2);
      if (lookahead == ':') ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(765);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_function_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_count);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_function_token3);
      if (lookahead == ':') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(768);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_function_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_function_token4);
      if (lookahead == ':') ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_function_token4);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_function_token5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_function_token6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_function_token7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_function_token8);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_function_token9);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(776);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_function_token10);
      if (lookahead == ':') ADVANCE(9);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_function_token10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(778);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_function_token11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_function_token13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(780);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_function_token14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_function_token15);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_NONE);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '.') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '.') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(792);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(794);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(796);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(800);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(799);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(802);
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
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
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
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
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
    [sym_source_file] = STATE(34),
    [sym_token] = STATE(3),
    [sym_future] = STATE(18),
    [sym_casting] = STATE(18),
    [sym_property] = STATE(18),
    [sym_identifier] = STATE(18),
    [sym_duration] = STATE(18),
    [sym_constant] = STATE(18),
    [sym_number] = STATE(18),
    [sym_record] = STATE(18),
    [sym_keyword] = STATE(18),
    [sym_operator] = STATE(18),
    [sym_punctuation] = STATE(18),
    [sym_type] = STATE(18),
    [sym_datatype] = STATE(22),
    [sym_algotype] = STATE(22),
    [sym_function] = STATE(18),
    [sym_bool] = STATE(18),
    [sym_nothing] = STATE(18),
    [sym_string] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_future_token1] = ACTIONS(5),
    [aux_sym_casting_token1] = ACTIONS(7),
    [aux_sym_property_token1] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [aux_sym_duration_token1] = ACTIONS(13),
    [aux_sym_constant_token1] = ACTIONS(15),
    [aux_sym_number_token1] = ACTIONS(17),
    [aux_sym_record_token1] = ACTIONS(19),
    [aux_sym_record_token2] = ACTIONS(19),
    [anon_sym_USE] = ACTIONS(21),
    [anon_sym_NS] = ACTIONS(21),
    [anon_sym_DB] = ACTIONS(21),
    [anon_sym_LET] = ACTIONS(21),
    [anon_sym_BEGIN] = ACTIONS(21),
    [anon_sym_TRANSACTION] = ACTIONS(21),
    [anon_sym_CANCEL] = ACTIONS(21),
    [anon_sym_COMMIT] = ACTIONS(21),
    [anon_sym_IF] = ACTIONS(21),
    [anon_sym_ELSE] = ACTIONS(21),
    [anon_sym_THEN] = ACTIONS(21),
    [anon_sym_END] = ACTIONS(21),
    [anon_sym_SELECT] = ACTIONS(21),
    [anon_sym_FROM] = ACTIONS(21),
    [anon_sym_WHERE] = ACTIONS(21),
    [anon_sym_SPLIT] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_GROUP] = ACTIONS(21),
    [anon_sym_BY] = ACTIONS(21),
    [anon_sym_ORDER] = ACTIONS(21),
    [anon_sym_COLLATE] = ACTIONS(21),
    [anon_sym_NUMERIC] = ACTIONS(21),
    [anon_sym_ASC] = ACTIONS(21),
    [anon_sym_DESC] = ACTIONS(21),
    [anon_sym_LIMIT] = ACTIONS(21),
    [anon_sym_START] = ACTIONS(21),
    [anon_sym_FETCH] = ACTIONS(21),
    [anon_sym_TIMEOUT] = ACTIONS(21),
    [anon_sym_PARALLEL] = ACTIONS(21),
    [anon_sym_INSERT] = ACTIONS(21),
    [anon_sym_IGNORE] = ACTIONS(21),
    [anon_sym_INTO] = ACTIONS(21),
    [anon_sym_VALUES] = ACTIONS(21),
    [anon_sym_ON] = ACTIONS(21),
    [anon_sym_DUPLICATE] = ACTIONS(21),
    [anon_sym_KEY] = ACTIONS(21),
    [anon_sym_UPDATE] = ACTIONS(21),
    [anon_sym_CREATE] = ACTIONS(21),
    [anon_sym_CONTENT] = ACTIONS(21),
    [anon_sym_SET] = ACTIONS(21),
    [anon_sym_RETURN] = ACTIONS(21),
    [anon_sym_BEFORE] = ACTIONS(21),
    [anon_sym_AFTER] = ACTIONS(21),
    [anon_sym_DIFF] = ACTIONS(21),
    [anon_sym_MERGE] = ACTIONS(21),
    [anon_sym_PATCH] = ACTIONS(21),
    [anon_sym_RELATE] = ACTIONS(21),
    [anon_sym_DELETE] = ACTIONS(21),
    [anon_sym_DEFINE] = ACTIONS(21),
    [anon_sym_NAMESPACE] = ACTIONS(21),
    [anon_sym_DATABASE] = ACTIONS(21),
    [anon_sym_LOGIN] = ACTIONS(21),
    [anon_sym_PASSWORD] = ACTIONS(21),
    [anon_sym_PASSHASH] = ACTIONS(21),
    [anon_sym_TOKEN] = ACTIONS(21),
    [anon_sym_SCOPE] = ACTIONS(21),
    [anon_sym_TYPE] = ACTIONS(21),
    [anon_sym_VALUE] = ACTIONS(21),
    [anon_sym_SESSION] = ACTIONS(21),
    [anon_sym_SIGNUP] = ACTIONS(21),
    [anon_sym_SIGNIN] = ACTIONS(21),
    [anon_sym_TABLE] = ACTIONS(21),
    [anon_sym_DROP] = ACTIONS(21),
    [anon_sym_SCHEMAFULL] = ACTIONS(21),
    [anon_sym_SCHEMALESS] = ACTIONS(21),
    [anon_sym_AS] = ACTIONS(21),
    [anon_sym_PERMISSIONS] = ACTIONS(21),
    [anon_sym_FULL] = ACTIONS(21),
    [anon_sym_FOR] = ACTIONS(21),
    [anon_sym_select] = ACTIONS(21),
    [anon_sym_update] = ACTIONS(21),
    [anon_sym_create] = ACTIONS(21),
    [anon_sym_delete] = ACTIONS(21),
    [anon_sym_EVENT] = ACTIONS(21),
    [anon_sym_WHEN] = ACTIONS(21),
    [anon_sym_ASSERT] = ACTIONS(21),
    [anon_sym_INDEX] = ACTIONS(21),
    [anon_sym_FIELDS] = ACTIONS(21),
    [anon_sym_COLUMNS] = ACTIONS(21),
    [anon_sym_UNIQUE] = ACTIONS(21),
    [anon_sym_REMOVE] = ACTIONS(21),
    [anon_sym_SLEEP] = ACTIONS(21),
    [anon_sym_INFO] = ACTIONS(21),
    [anon_sym_KV] = ACTIONS(21),
    [anon_sym_FUNCTION] = ACTIONS(21),
    [anon_sym_PARAM] = ACTIONS(21),
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
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_SEMI] = ACTIONS(27),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(27),
    [anon_sym_LT_DASH] = ACTIONS(27),
    [anon_sym_any] = ACTIONS(29),
    [anon_sym_array] = ACTIONS(29),
    [anon_sym_bool] = ACTIONS(29),
    [anon_sym_datetime] = ACTIONS(29),
    [anon_sym_decimal] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(29),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_int] = ACTIONS(29),
    [anon_sym_number] = ACTIONS(29),
    [anon_sym_object] = ACTIONS(29),
    [anon_sym_string] = ACTIONS(29),
    [anon_sym_record] = ACTIONS(29),
    [anon_sym_geometry] = ACTIONS(29),
    [anon_sym_EDDSA] = ACTIONS(31),
    [anon_sym_ES256] = ACTIONS(31),
    [anon_sym_ES384] = ACTIONS(31),
    [anon_sym_ES512] = ACTIONS(31),
    [anon_sym_HS256] = ACTIONS(31),
    [anon_sym_HS384] = ACTIONS(31),
    [anon_sym_HS512] = ACTIONS(31),
    [anon_sym_PS256] = ACTIONS(31),
    [anon_sym_PS384] = ACTIONS(31),
    [anon_sym_PS512] = ACTIONS(31),
    [anon_sym_RS256] = ACTIONS(31),
    [anon_sym_RS384] = ACTIONS(31),
    [anon_sym_RS512] = ACTIONS(31),
    [aux_sym_function_token1] = ACTIONS(33),
    [aux_sym_function_token2] = ACTIONS(33),
    [anon_sym_count] = ACTIONS(35),
    [aux_sym_function_token3] = ACTIONS(33),
    [aux_sym_function_token4] = ACTIONS(33),
    [aux_sym_function_token5] = ACTIONS(33),
    [aux_sym_function_token6] = ACTIONS(33),
    [aux_sym_function_token7] = ACTIONS(33),
    [aux_sym_function_token8] = ACTIONS(33),
    [aux_sym_function_token9] = ACTIONS(33),
    [aux_sym_function_token10] = ACTIONS(35),
    [aux_sym_function_token11] = ACTIONS(33),
    [aux_sym_function_token12] = ACTIONS(35),
    [aux_sym_function_token13] = ACTIONS(33),
    [aux_sym_function_token14] = ACTIONS(33),
    [aux_sym_function_token15] = ACTIONS(33),
    [aux_sym_function_token16] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_TRUE] = ACTIONS(37),
    [anon_sym_FALSE] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_NULL] = ACTIONS(39),
    [anon_sym_none] = ACTIONS(39),
    [anon_sym_NONE] = ACTIONS(39),
    [sym_variable] = ACTIONS(41),
    [sym_comment] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
  },
  [2] = {
    [sym_token] = STATE(2),
    [sym_future] = STATE(18),
    [sym_casting] = STATE(18),
    [sym_property] = STATE(18),
    [sym_identifier] = STATE(18),
    [sym_duration] = STATE(18),
    [sym_constant] = STATE(18),
    [sym_number] = STATE(18),
    [sym_record] = STATE(18),
    [sym_keyword] = STATE(18),
    [sym_operator] = STATE(18),
    [sym_punctuation] = STATE(18),
    [sym_type] = STATE(18),
    [sym_datatype] = STATE(22),
    [sym_algotype] = STATE(22),
    [sym_function] = STATE(18),
    [sym_bool] = STATE(18),
    [sym_nothing] = STATE(18),
    [sym_string] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(49),
    [aux_sym_future_token1] = ACTIONS(51),
    [aux_sym_casting_token1] = ACTIONS(54),
    [aux_sym_property_token1] = ACTIONS(57),
    [aux_sym_identifier_token1] = ACTIONS(60),
    [aux_sym_duration_token1] = ACTIONS(63),
    [aux_sym_constant_token1] = ACTIONS(66),
    [aux_sym_number_token1] = ACTIONS(69),
    [aux_sym_record_token1] = ACTIONS(72),
    [aux_sym_record_token2] = ACTIONS(72),
    [anon_sym_USE] = ACTIONS(75),
    [anon_sym_NS] = ACTIONS(75),
    [anon_sym_DB] = ACTIONS(75),
    [anon_sym_LET] = ACTIONS(75),
    [anon_sym_BEGIN] = ACTIONS(75),
    [anon_sym_TRANSACTION] = ACTIONS(75),
    [anon_sym_CANCEL] = ACTIONS(75),
    [anon_sym_COMMIT] = ACTIONS(75),
    [anon_sym_IF] = ACTIONS(75),
    [anon_sym_ELSE] = ACTIONS(75),
    [anon_sym_THEN] = ACTIONS(75),
    [anon_sym_END] = ACTIONS(75),
    [anon_sym_SELECT] = ACTIONS(75),
    [anon_sym_FROM] = ACTIONS(75),
    [anon_sym_WHERE] = ACTIONS(75),
    [anon_sym_SPLIT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_GROUP] = ACTIONS(75),
    [anon_sym_BY] = ACTIONS(75),
    [anon_sym_ORDER] = ACTIONS(75),
    [anon_sym_COLLATE] = ACTIONS(75),
    [anon_sym_NUMERIC] = ACTIONS(75),
    [anon_sym_ASC] = ACTIONS(75),
    [anon_sym_DESC] = ACTIONS(75),
    [anon_sym_LIMIT] = ACTIONS(75),
    [anon_sym_START] = ACTIONS(75),
    [anon_sym_FETCH] = ACTIONS(75),
    [anon_sym_TIMEOUT] = ACTIONS(75),
    [anon_sym_PARALLEL] = ACTIONS(75),
    [anon_sym_INSERT] = ACTIONS(75),
    [anon_sym_IGNORE] = ACTIONS(75),
    [anon_sym_INTO] = ACTIONS(75),
    [anon_sym_VALUES] = ACTIONS(75),
    [anon_sym_ON] = ACTIONS(75),
    [anon_sym_DUPLICATE] = ACTIONS(75),
    [anon_sym_KEY] = ACTIONS(75),
    [anon_sym_UPDATE] = ACTIONS(75),
    [anon_sym_CREATE] = ACTIONS(75),
    [anon_sym_CONTENT] = ACTIONS(75),
    [anon_sym_SET] = ACTIONS(75),
    [anon_sym_RETURN] = ACTIONS(75),
    [anon_sym_BEFORE] = ACTIONS(75),
    [anon_sym_AFTER] = ACTIONS(75),
    [anon_sym_DIFF] = ACTIONS(75),
    [anon_sym_MERGE] = ACTIONS(75),
    [anon_sym_PATCH] = ACTIONS(75),
    [anon_sym_RELATE] = ACTIONS(75),
    [anon_sym_DELETE] = ACTIONS(75),
    [anon_sym_DEFINE] = ACTIONS(75),
    [anon_sym_NAMESPACE] = ACTIONS(75),
    [anon_sym_DATABASE] = ACTIONS(75),
    [anon_sym_LOGIN] = ACTIONS(75),
    [anon_sym_PASSWORD] = ACTIONS(75),
    [anon_sym_PASSHASH] = ACTIONS(75),
    [anon_sym_TOKEN] = ACTIONS(75),
    [anon_sym_SCOPE] = ACTIONS(75),
    [anon_sym_TYPE] = ACTIONS(75),
    [anon_sym_VALUE] = ACTIONS(75),
    [anon_sym_SESSION] = ACTIONS(75),
    [anon_sym_SIGNUP] = ACTIONS(75),
    [anon_sym_SIGNIN] = ACTIONS(75),
    [anon_sym_TABLE] = ACTIONS(75),
    [anon_sym_DROP] = ACTIONS(75),
    [anon_sym_SCHEMAFULL] = ACTIONS(75),
    [anon_sym_SCHEMALESS] = ACTIONS(75),
    [anon_sym_AS] = ACTIONS(75),
    [anon_sym_PERMISSIONS] = ACTIONS(75),
    [anon_sym_FULL] = ACTIONS(75),
    [anon_sym_FOR] = ACTIONS(75),
    [anon_sym_select] = ACTIONS(75),
    [anon_sym_update] = ACTIONS(75),
    [anon_sym_create] = ACTIONS(75),
    [anon_sym_delete] = ACTIONS(75),
    [anon_sym_EVENT] = ACTIONS(75),
    [anon_sym_WHEN] = ACTIONS(75),
    [anon_sym_ASSERT] = ACTIONS(75),
    [anon_sym_INDEX] = ACTIONS(75),
    [anon_sym_FIELDS] = ACTIONS(75),
    [anon_sym_COLUMNS] = ACTIONS(75),
    [anon_sym_UNIQUE] = ACTIONS(75),
    [anon_sym_REMOVE] = ACTIONS(75),
    [anon_sym_SLEEP] = ACTIONS(75),
    [anon_sym_INFO] = ACTIONS(75),
    [anon_sym_KV] = ACTIONS(75),
    [anon_sym_FUNCTION] = ACTIONS(75),
    [anon_sym_PARAM] = ACTIONS(75),
    [anon_sym_AMP_AMP] = ACTIONS(78),
    [anon_sym_AND] = ACTIONS(81),
    [anon_sym_PIPE_PIPE] = ACTIONS(78),
    [anon_sym_OR] = ACTIONS(81),
    [anon_sym_QMARK_QMARK] = ACTIONS(78),
    [anon_sym_QMARK_COLON] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_IS] = ACTIONS(81),
    [anon_sym_BANG_EQ] = ACTIONS(78),
    [anon_sym_ISNOT] = ACTIONS(78),
    [anon_sym_EQ_EQ] = ACTIONS(78),
    [anon_sym_QMARK_EQ] = ACTIONS(78),
    [anon_sym_STAR_EQ] = ACTIONS(78),
    [anon_sym_TILDE] = ACTIONS(78),
    [anon_sym_BANG_TILDE] = ACTIONS(78),
    [anon_sym_QMARK_TILDE] = ACTIONS(78),
    [anon_sym_STAR_TILDE] = ACTIONS(78),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_GT_EQ] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_x] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(81),
    [anon_sym_] = ACTIONS(78),
    [anon_sym_STAR_STAR] = ACTIONS(78),
    [anon_sym_IN] = ACTIONS(81),
    [anon_sym_CONTAINS] = ACTIONS(81),
    [anon_sym_2] = ACTIONS(78),
    [anon_sym_CONTAINSNOT] = ACTIONS(81),
    [anon_sym_3] = ACTIONS(78),
    [anon_sym_CONTAINSALL] = ACTIONS(81),
    [anon_sym_4] = ACTIONS(78),
    [anon_sym_CONTAINSANY] = ACTIONS(81),
    [anon_sym_5] = ACTIONS(78),
    [anon_sym_CONTAINSNONE] = ACTIONS(81),
    [anon_sym_6] = ACTIONS(78),
    [anon_sym_INSIDE] = ACTIONS(81),
    [anon_sym_7] = ACTIONS(78),
    [anon_sym_NOTINSIDE] = ACTIONS(81),
    [anon_sym_NOTIN] = ACTIONS(78),
    [anon_sym_8] = ACTIONS(78),
    [anon_sym_ALLINSIDE] = ACTIONS(81),
    [anon_sym_9] = ACTIONS(78),
    [anon_sym_ANYINSIDE] = ACTIONS(81),
    [anon_sym_10] = ACTIONS(78),
    [anon_sym_NONEINSIDE] = ACTIONS(81),
    [anon_sym_11] = ACTIONS(78),
    [anon_sym_OUTSIDE] = ACTIONS(81),
    [anon_sym_INTERSECTS] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(84),
    [anon_sym_SEMI] = ACTIONS(84),
    [anon_sym_COLON] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(84),
    [anon_sym_LBRACK] = ACTIONS(84),
    [anon_sym_RBRACK] = ACTIONS(84),
    [anon_sym_LBRACE] = ACTIONS(84),
    [anon_sym_RBRACE] = ACTIONS(84),
    [anon_sym_DASH_GT] = ACTIONS(84),
    [anon_sym_LT_DASH] = ACTIONS(84),
    [anon_sym_any] = ACTIONS(87),
    [anon_sym_array] = ACTIONS(87),
    [anon_sym_bool] = ACTIONS(87),
    [anon_sym_datetime] = ACTIONS(87),
    [anon_sym_decimal] = ACTIONS(87),
    [anon_sym_duration] = ACTIONS(87),
    [anon_sym_float] = ACTIONS(87),
    [anon_sym_int] = ACTIONS(87),
    [anon_sym_number] = ACTIONS(87),
    [anon_sym_object] = ACTIONS(87),
    [anon_sym_string] = ACTIONS(87),
    [anon_sym_record] = ACTIONS(87),
    [anon_sym_geometry] = ACTIONS(87),
    [anon_sym_EDDSA] = ACTIONS(90),
    [anon_sym_ES256] = ACTIONS(90),
    [anon_sym_ES384] = ACTIONS(90),
    [anon_sym_ES512] = ACTIONS(90),
    [anon_sym_HS256] = ACTIONS(90),
    [anon_sym_HS384] = ACTIONS(90),
    [anon_sym_HS512] = ACTIONS(90),
    [anon_sym_PS256] = ACTIONS(90),
    [anon_sym_PS384] = ACTIONS(90),
    [anon_sym_PS512] = ACTIONS(90),
    [anon_sym_RS256] = ACTIONS(90),
    [anon_sym_RS384] = ACTIONS(90),
    [anon_sym_RS512] = ACTIONS(90),
    [aux_sym_function_token1] = ACTIONS(93),
    [aux_sym_function_token2] = ACTIONS(93),
    [anon_sym_count] = ACTIONS(96),
    [aux_sym_function_token3] = ACTIONS(93),
    [aux_sym_function_token4] = ACTIONS(93),
    [aux_sym_function_token5] = ACTIONS(93),
    [aux_sym_function_token6] = ACTIONS(93),
    [aux_sym_function_token7] = ACTIONS(93),
    [aux_sym_function_token8] = ACTIONS(93),
    [aux_sym_function_token9] = ACTIONS(93),
    [aux_sym_function_token10] = ACTIONS(96),
    [aux_sym_function_token11] = ACTIONS(93),
    [aux_sym_function_token12] = ACTIONS(96),
    [aux_sym_function_token13] = ACTIONS(93),
    [aux_sym_function_token14] = ACTIONS(93),
    [aux_sym_function_token15] = ACTIONS(93),
    [aux_sym_function_token16] = ACTIONS(96),
    [anon_sym_true] = ACTIONS(99),
    [anon_sym_false] = ACTIONS(99),
    [anon_sym_TRUE] = ACTIONS(99),
    [anon_sym_FALSE] = ACTIONS(99),
    [anon_sym_null] = ACTIONS(102),
    [anon_sym_NULL] = ACTIONS(102),
    [anon_sym_none] = ACTIONS(102),
    [anon_sym_NONE] = ACTIONS(102),
    [sym_variable] = ACTIONS(105),
    [sym_comment] = ACTIONS(108),
    [anon_sym_SQUOTE] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(114),
  },
  [3] = {
    [sym_token] = STATE(2),
    [sym_future] = STATE(18),
    [sym_casting] = STATE(18),
    [sym_property] = STATE(18),
    [sym_identifier] = STATE(18),
    [sym_duration] = STATE(18),
    [sym_constant] = STATE(18),
    [sym_number] = STATE(18),
    [sym_record] = STATE(18),
    [sym_keyword] = STATE(18),
    [sym_operator] = STATE(18),
    [sym_punctuation] = STATE(18),
    [sym_type] = STATE(18),
    [sym_datatype] = STATE(22),
    [sym_algotype] = STATE(22),
    [sym_function] = STATE(18),
    [sym_bool] = STATE(18),
    [sym_nothing] = STATE(18),
    [sym_string] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(117),
    [aux_sym_future_token1] = ACTIONS(5),
    [aux_sym_casting_token1] = ACTIONS(7),
    [aux_sym_property_token1] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [aux_sym_duration_token1] = ACTIONS(13),
    [aux_sym_constant_token1] = ACTIONS(15),
    [aux_sym_number_token1] = ACTIONS(17),
    [aux_sym_record_token1] = ACTIONS(19),
    [aux_sym_record_token2] = ACTIONS(19),
    [anon_sym_USE] = ACTIONS(21),
    [anon_sym_NS] = ACTIONS(21),
    [anon_sym_DB] = ACTIONS(21),
    [anon_sym_LET] = ACTIONS(21),
    [anon_sym_BEGIN] = ACTIONS(21),
    [anon_sym_TRANSACTION] = ACTIONS(21),
    [anon_sym_CANCEL] = ACTIONS(21),
    [anon_sym_COMMIT] = ACTIONS(21),
    [anon_sym_IF] = ACTIONS(21),
    [anon_sym_ELSE] = ACTIONS(21),
    [anon_sym_THEN] = ACTIONS(21),
    [anon_sym_END] = ACTIONS(21),
    [anon_sym_SELECT] = ACTIONS(21),
    [anon_sym_FROM] = ACTIONS(21),
    [anon_sym_WHERE] = ACTIONS(21),
    [anon_sym_SPLIT] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_GROUP] = ACTIONS(21),
    [anon_sym_BY] = ACTIONS(21),
    [anon_sym_ORDER] = ACTIONS(21),
    [anon_sym_COLLATE] = ACTIONS(21),
    [anon_sym_NUMERIC] = ACTIONS(21),
    [anon_sym_ASC] = ACTIONS(21),
    [anon_sym_DESC] = ACTIONS(21),
    [anon_sym_LIMIT] = ACTIONS(21),
    [anon_sym_START] = ACTIONS(21),
    [anon_sym_FETCH] = ACTIONS(21),
    [anon_sym_TIMEOUT] = ACTIONS(21),
    [anon_sym_PARALLEL] = ACTIONS(21),
    [anon_sym_INSERT] = ACTIONS(21),
    [anon_sym_IGNORE] = ACTIONS(21),
    [anon_sym_INTO] = ACTIONS(21),
    [anon_sym_VALUES] = ACTIONS(21),
    [anon_sym_ON] = ACTIONS(21),
    [anon_sym_DUPLICATE] = ACTIONS(21),
    [anon_sym_KEY] = ACTIONS(21),
    [anon_sym_UPDATE] = ACTIONS(21),
    [anon_sym_CREATE] = ACTIONS(21),
    [anon_sym_CONTENT] = ACTIONS(21),
    [anon_sym_SET] = ACTIONS(21),
    [anon_sym_RETURN] = ACTIONS(21),
    [anon_sym_BEFORE] = ACTIONS(21),
    [anon_sym_AFTER] = ACTIONS(21),
    [anon_sym_DIFF] = ACTIONS(21),
    [anon_sym_MERGE] = ACTIONS(21),
    [anon_sym_PATCH] = ACTIONS(21),
    [anon_sym_RELATE] = ACTIONS(21),
    [anon_sym_DELETE] = ACTIONS(21),
    [anon_sym_DEFINE] = ACTIONS(21),
    [anon_sym_NAMESPACE] = ACTIONS(21),
    [anon_sym_DATABASE] = ACTIONS(21),
    [anon_sym_LOGIN] = ACTIONS(21),
    [anon_sym_PASSWORD] = ACTIONS(21),
    [anon_sym_PASSHASH] = ACTIONS(21),
    [anon_sym_TOKEN] = ACTIONS(21),
    [anon_sym_SCOPE] = ACTIONS(21),
    [anon_sym_TYPE] = ACTIONS(21),
    [anon_sym_VALUE] = ACTIONS(21),
    [anon_sym_SESSION] = ACTIONS(21),
    [anon_sym_SIGNUP] = ACTIONS(21),
    [anon_sym_SIGNIN] = ACTIONS(21),
    [anon_sym_TABLE] = ACTIONS(21),
    [anon_sym_DROP] = ACTIONS(21),
    [anon_sym_SCHEMAFULL] = ACTIONS(21),
    [anon_sym_SCHEMALESS] = ACTIONS(21),
    [anon_sym_AS] = ACTIONS(21),
    [anon_sym_PERMISSIONS] = ACTIONS(21),
    [anon_sym_FULL] = ACTIONS(21),
    [anon_sym_FOR] = ACTIONS(21),
    [anon_sym_select] = ACTIONS(21),
    [anon_sym_update] = ACTIONS(21),
    [anon_sym_create] = ACTIONS(21),
    [anon_sym_delete] = ACTIONS(21),
    [anon_sym_EVENT] = ACTIONS(21),
    [anon_sym_WHEN] = ACTIONS(21),
    [anon_sym_ASSERT] = ACTIONS(21),
    [anon_sym_INDEX] = ACTIONS(21),
    [anon_sym_FIELDS] = ACTIONS(21),
    [anon_sym_COLUMNS] = ACTIONS(21),
    [anon_sym_UNIQUE] = ACTIONS(21),
    [anon_sym_REMOVE] = ACTIONS(21),
    [anon_sym_SLEEP] = ACTIONS(21),
    [anon_sym_INFO] = ACTIONS(21),
    [anon_sym_KV] = ACTIONS(21),
    [anon_sym_FUNCTION] = ACTIONS(21),
    [anon_sym_PARAM] = ACTIONS(21),
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
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_SEMI] = ACTIONS(27),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(27),
    [anon_sym_LT_DASH] = ACTIONS(27),
    [anon_sym_any] = ACTIONS(29),
    [anon_sym_array] = ACTIONS(29),
    [anon_sym_bool] = ACTIONS(29),
    [anon_sym_datetime] = ACTIONS(29),
    [anon_sym_decimal] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(29),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_int] = ACTIONS(29),
    [anon_sym_number] = ACTIONS(29),
    [anon_sym_object] = ACTIONS(29),
    [anon_sym_string] = ACTIONS(29),
    [anon_sym_record] = ACTIONS(29),
    [anon_sym_geometry] = ACTIONS(29),
    [anon_sym_EDDSA] = ACTIONS(31),
    [anon_sym_ES256] = ACTIONS(31),
    [anon_sym_ES384] = ACTIONS(31),
    [anon_sym_ES512] = ACTIONS(31),
    [anon_sym_HS256] = ACTIONS(31),
    [anon_sym_HS384] = ACTIONS(31),
    [anon_sym_HS512] = ACTIONS(31),
    [anon_sym_PS256] = ACTIONS(31),
    [anon_sym_PS384] = ACTIONS(31),
    [anon_sym_PS512] = ACTIONS(31),
    [anon_sym_RS256] = ACTIONS(31),
    [anon_sym_RS384] = ACTIONS(31),
    [anon_sym_RS512] = ACTIONS(31),
    [aux_sym_function_token1] = ACTIONS(33),
    [aux_sym_function_token2] = ACTIONS(33),
    [anon_sym_count] = ACTIONS(35),
    [aux_sym_function_token3] = ACTIONS(33),
    [aux_sym_function_token4] = ACTIONS(33),
    [aux_sym_function_token5] = ACTIONS(33),
    [aux_sym_function_token6] = ACTIONS(33),
    [aux_sym_function_token7] = ACTIONS(33),
    [aux_sym_function_token8] = ACTIONS(33),
    [aux_sym_function_token9] = ACTIONS(33),
    [aux_sym_function_token10] = ACTIONS(35),
    [aux_sym_function_token11] = ACTIONS(33),
    [aux_sym_function_token12] = ACTIONS(35),
    [aux_sym_function_token13] = ACTIONS(33),
    [aux_sym_function_token14] = ACTIONS(33),
    [aux_sym_function_token15] = ACTIONS(33),
    [aux_sym_function_token16] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_TRUE] = ACTIONS(37),
    [anon_sym_FALSE] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_NULL] = ACTIONS(39),
    [anon_sym_none] = ACTIONS(39),
    [anon_sym_NONE] = ACTIONS(39),
    [sym_variable] = ACTIONS(41),
    [sym_comment] = ACTIONS(119),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [aux_sym_future_token1] = ACTIONS(121),
    [aux_sym_casting_token1] = ACTIONS(121),
    [aux_sym_property_token1] = ACTIONS(123),
    [aux_sym_identifier_token1] = ACTIONS(123),
    [aux_sym_duration_token1] = ACTIONS(123),
    [aux_sym_constant_token1] = ACTIONS(121),
    [aux_sym_number_token1] = ACTIONS(123),
    [aux_sym_record_token1] = ACTIONS(121),
    [aux_sym_record_token2] = ACTIONS(121),
    [anon_sym_USE] = ACTIONS(123),
    [anon_sym_NS] = ACTIONS(123),
    [anon_sym_DB] = ACTIONS(123),
    [anon_sym_LET] = ACTIONS(123),
    [anon_sym_BEGIN] = ACTIONS(123),
    [anon_sym_TRANSACTION] = ACTIONS(123),
    [anon_sym_CANCEL] = ACTIONS(123),
    [anon_sym_COMMIT] = ACTIONS(123),
    [anon_sym_IF] = ACTIONS(123),
    [anon_sym_ELSE] = ACTIONS(123),
    [anon_sym_THEN] = ACTIONS(123),
    [anon_sym_END] = ACTIONS(123),
    [anon_sym_SELECT] = ACTIONS(123),
    [anon_sym_FROM] = ACTIONS(123),
    [anon_sym_WHERE] = ACTIONS(123),
    [anon_sym_SPLIT] = ACTIONS(123),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_GROUP] = ACTIONS(123),
    [anon_sym_BY] = ACTIONS(123),
    [anon_sym_ORDER] = ACTIONS(123),
    [anon_sym_COLLATE] = ACTIONS(123),
    [anon_sym_NUMERIC] = ACTIONS(123),
    [anon_sym_ASC] = ACTIONS(123),
    [anon_sym_DESC] = ACTIONS(123),
    [anon_sym_LIMIT] = ACTIONS(123),
    [anon_sym_START] = ACTIONS(123),
    [anon_sym_FETCH] = ACTIONS(123),
    [anon_sym_TIMEOUT] = ACTIONS(123),
    [anon_sym_PARALLEL] = ACTIONS(123),
    [anon_sym_INSERT] = ACTIONS(123),
    [anon_sym_IGNORE] = ACTIONS(123),
    [anon_sym_INTO] = ACTIONS(123),
    [anon_sym_VALUES] = ACTIONS(123),
    [anon_sym_ON] = ACTIONS(123),
    [anon_sym_DUPLICATE] = ACTIONS(123),
    [anon_sym_KEY] = ACTIONS(123),
    [anon_sym_UPDATE] = ACTIONS(123),
    [anon_sym_CREATE] = ACTIONS(123),
    [anon_sym_CONTENT] = ACTIONS(123),
    [anon_sym_SET] = ACTIONS(123),
    [anon_sym_RETURN] = ACTIONS(123),
    [anon_sym_BEFORE] = ACTIONS(123),
    [anon_sym_AFTER] = ACTIONS(123),
    [anon_sym_DIFF] = ACTIONS(123),
    [anon_sym_MERGE] = ACTIONS(123),
    [anon_sym_PATCH] = ACTIONS(123),
    [anon_sym_RELATE] = ACTIONS(123),
    [anon_sym_DELETE] = ACTIONS(123),
    [anon_sym_DEFINE] = ACTIONS(123),
    [anon_sym_NAMESPACE] = ACTIONS(123),
    [anon_sym_DATABASE] = ACTIONS(123),
    [anon_sym_LOGIN] = ACTIONS(123),
    [anon_sym_PASSWORD] = ACTIONS(123),
    [anon_sym_PASSHASH] = ACTIONS(123),
    [anon_sym_TOKEN] = ACTIONS(123),
    [anon_sym_SCOPE] = ACTIONS(123),
    [anon_sym_TYPE] = ACTIONS(123),
    [anon_sym_VALUE] = ACTIONS(123),
    [anon_sym_SESSION] = ACTIONS(123),
    [anon_sym_SIGNUP] = ACTIONS(123),
    [anon_sym_SIGNIN] = ACTIONS(123),
    [anon_sym_TABLE] = ACTIONS(123),
    [anon_sym_DROP] = ACTIONS(123),
    [anon_sym_SCHEMAFULL] = ACTIONS(123),
    [anon_sym_SCHEMALESS] = ACTIONS(123),
    [anon_sym_AS] = ACTIONS(123),
    [anon_sym_PERMISSIONS] = ACTIONS(123),
    [anon_sym_FULL] = ACTIONS(123),
    [anon_sym_FOR] = ACTIONS(123),
    [anon_sym_select] = ACTIONS(123),
    [anon_sym_update] = ACTIONS(123),
    [anon_sym_create] = ACTIONS(123),
    [anon_sym_delete] = ACTIONS(123),
    [anon_sym_EVENT] = ACTIONS(123),
    [anon_sym_WHEN] = ACTIONS(123),
    [anon_sym_ASSERT] = ACTIONS(123),
    [anon_sym_INDEX] = ACTIONS(123),
    [anon_sym_FIELDS] = ACTIONS(123),
    [anon_sym_COLUMNS] = ACTIONS(123),
    [anon_sym_UNIQUE] = ACTIONS(123),
    [anon_sym_REMOVE] = ACTIONS(123),
    [anon_sym_SLEEP] = ACTIONS(123),
    [anon_sym_INFO] = ACTIONS(123),
    [anon_sym_KV] = ACTIONS(123),
    [anon_sym_FUNCTION] = ACTIONS(123),
    [anon_sym_PARAM] = ACTIONS(123),
    [anon_sym_AMP_AMP] = ACTIONS(121),
    [anon_sym_AND] = ACTIONS(123),
    [anon_sym_PIPE_PIPE] = ACTIONS(121),
    [anon_sym_OR] = ACTIONS(123),
    [anon_sym_QMARK_QMARK] = ACTIONS(121),
    [anon_sym_QMARK_COLON] = ACTIONS(121),
    [anon_sym_EQ] = ACTIONS(123),
    [anon_sym_IS] = ACTIONS(123),
    [anon_sym_BANG_EQ] = ACTIONS(121),
    [anon_sym_ISNOT] = ACTIONS(121),
    [anon_sym_EQ_EQ] = ACTIONS(121),
    [anon_sym_QMARK_EQ] = ACTIONS(121),
    [anon_sym_STAR_EQ] = ACTIONS(121),
    [anon_sym_TILDE] = ACTIONS(121),
    [anon_sym_BANG_TILDE] = ACTIONS(121),
    [anon_sym_QMARK_TILDE] = ACTIONS(121),
    [anon_sym_STAR_TILDE] = ACTIONS(121),
    [anon_sym_LT] = ACTIONS(123),
    [anon_sym_LT_EQ] = ACTIONS(121),
    [anon_sym_GT] = ACTIONS(123),
    [anon_sym_GT_EQ] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(121),
    [anon_sym_DASH] = ACTIONS(123),
    [anon_sym_STAR] = ACTIONS(123),
    [anon_sym_x] = ACTIONS(123),
    [anon_sym_SLASH] = ACTIONS(123),
    [anon_sym_] = ACTIONS(121),
    [anon_sym_STAR_STAR] = ACTIONS(121),
    [anon_sym_IN] = ACTIONS(123),
    [anon_sym_CONTAINS] = ACTIONS(123),
    [anon_sym_2] = ACTIONS(121),
    [anon_sym_CONTAINSNOT] = ACTIONS(123),
    [anon_sym_3] = ACTIONS(121),
    [anon_sym_CONTAINSALL] = ACTIONS(123),
    [anon_sym_4] = ACTIONS(121),
    [anon_sym_CONTAINSANY] = ACTIONS(123),
    [anon_sym_5] = ACTIONS(121),
    [anon_sym_CONTAINSNONE] = ACTIONS(123),
    [anon_sym_6] = ACTIONS(121),
    [anon_sym_INSIDE] = ACTIONS(123),
    [anon_sym_7] = ACTIONS(121),
    [anon_sym_NOTINSIDE] = ACTIONS(123),
    [anon_sym_NOTIN] = ACTIONS(121),
    [anon_sym_8] = ACTIONS(121),
    [anon_sym_ALLINSIDE] = ACTIONS(123),
    [anon_sym_9] = ACTIONS(121),
    [anon_sym_ANYINSIDE] = ACTIONS(123),
    [anon_sym_10] = ACTIONS(121),
    [anon_sym_NONEINSIDE] = ACTIONS(123),
    [anon_sym_11] = ACTIONS(121),
    [anon_sym_OUTSIDE] = ACTIONS(123),
    [anon_sym_INTERSECTS] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(121),
    [anon_sym_SEMI] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(121),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_DASH_GT] = ACTIONS(121),
    [anon_sym_LT_DASH] = ACTIONS(121),
    [anon_sym_any] = ACTIONS(123),
    [anon_sym_array] = ACTIONS(123),
    [anon_sym_bool] = ACTIONS(123),
    [anon_sym_datetime] = ACTIONS(123),
    [anon_sym_decimal] = ACTIONS(123),
    [anon_sym_duration] = ACTIONS(123),
    [anon_sym_float] = ACTIONS(123),
    [anon_sym_int] = ACTIONS(123),
    [anon_sym_number] = ACTIONS(123),
    [anon_sym_object] = ACTIONS(123),
    [anon_sym_string] = ACTIONS(123),
    [anon_sym_record] = ACTIONS(123),
    [anon_sym_geometry] = ACTIONS(123),
    [anon_sym_EDDSA] = ACTIONS(123),
    [anon_sym_ES256] = ACTIONS(123),
    [anon_sym_ES384] = ACTIONS(123),
    [anon_sym_ES512] = ACTIONS(123),
    [anon_sym_HS256] = ACTIONS(123),
    [anon_sym_HS384] = ACTIONS(123),
    [anon_sym_HS512] = ACTIONS(123),
    [anon_sym_PS256] = ACTIONS(123),
    [anon_sym_PS384] = ACTIONS(123),
    [anon_sym_PS512] = ACTIONS(123),
    [anon_sym_RS256] = ACTIONS(123),
    [anon_sym_RS384] = ACTIONS(123),
    [anon_sym_RS512] = ACTIONS(123),
    [aux_sym_function_token1] = ACTIONS(121),
    [aux_sym_function_token2] = ACTIONS(121),
    [anon_sym_count] = ACTIONS(123),
    [aux_sym_function_token3] = ACTIONS(121),
    [aux_sym_function_token4] = ACTIONS(121),
    [aux_sym_function_token5] = ACTIONS(121),
    [aux_sym_function_token6] = ACTIONS(121),
    [aux_sym_function_token7] = ACTIONS(121),
    [aux_sym_function_token8] = ACTIONS(121),
    [aux_sym_function_token9] = ACTIONS(121),
    [aux_sym_function_token10] = ACTIONS(123),
    [aux_sym_function_token11] = ACTIONS(121),
    [aux_sym_function_token12] = ACTIONS(123),
    [aux_sym_function_token13] = ACTIONS(121),
    [aux_sym_function_token14] = ACTIONS(121),
    [aux_sym_function_token15] = ACTIONS(121),
    [aux_sym_function_token16] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(123),
    [anon_sym_false] = ACTIONS(123),
    [anon_sym_TRUE] = ACTIONS(123),
    [anon_sym_FALSE] = ACTIONS(123),
    [anon_sym_null] = ACTIONS(123),
    [anon_sym_NULL] = ACTIONS(123),
    [anon_sym_none] = ACTIONS(123),
    [anon_sym_NONE] = ACTIONS(123),
    [sym_variable] = ACTIONS(121),
    [sym_comment] = ACTIONS(121),
    [anon_sym_SQUOTE] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(121),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [aux_sym_future_token1] = ACTIONS(125),
    [aux_sym_casting_token1] = ACTIONS(125),
    [aux_sym_property_token1] = ACTIONS(127),
    [aux_sym_identifier_token1] = ACTIONS(127),
    [aux_sym_duration_token1] = ACTIONS(127),
    [aux_sym_constant_token1] = ACTIONS(125),
    [aux_sym_number_token1] = ACTIONS(127),
    [aux_sym_record_token1] = ACTIONS(125),
    [aux_sym_record_token2] = ACTIONS(125),
    [anon_sym_USE] = ACTIONS(127),
    [anon_sym_NS] = ACTIONS(127),
    [anon_sym_DB] = ACTIONS(127),
    [anon_sym_LET] = ACTIONS(127),
    [anon_sym_BEGIN] = ACTIONS(127),
    [anon_sym_TRANSACTION] = ACTIONS(127),
    [anon_sym_CANCEL] = ACTIONS(127),
    [anon_sym_COMMIT] = ACTIONS(127),
    [anon_sym_IF] = ACTIONS(127),
    [anon_sym_ELSE] = ACTIONS(127),
    [anon_sym_THEN] = ACTIONS(127),
    [anon_sym_END] = ACTIONS(127),
    [anon_sym_SELECT] = ACTIONS(127),
    [anon_sym_FROM] = ACTIONS(127),
    [anon_sym_WHERE] = ACTIONS(127),
    [anon_sym_SPLIT] = ACTIONS(127),
    [anon_sym_AT] = ACTIONS(127),
    [anon_sym_GROUP] = ACTIONS(127),
    [anon_sym_BY] = ACTIONS(127),
    [anon_sym_ORDER] = ACTIONS(127),
    [anon_sym_COLLATE] = ACTIONS(127),
    [anon_sym_NUMERIC] = ACTIONS(127),
    [anon_sym_ASC] = ACTIONS(127),
    [anon_sym_DESC] = ACTIONS(127),
    [anon_sym_LIMIT] = ACTIONS(127),
    [anon_sym_START] = ACTIONS(127),
    [anon_sym_FETCH] = ACTIONS(127),
    [anon_sym_TIMEOUT] = ACTIONS(127),
    [anon_sym_PARALLEL] = ACTIONS(127),
    [anon_sym_INSERT] = ACTIONS(127),
    [anon_sym_IGNORE] = ACTIONS(127),
    [anon_sym_INTO] = ACTIONS(127),
    [anon_sym_VALUES] = ACTIONS(127),
    [anon_sym_ON] = ACTIONS(127),
    [anon_sym_DUPLICATE] = ACTIONS(127),
    [anon_sym_KEY] = ACTIONS(127),
    [anon_sym_UPDATE] = ACTIONS(127),
    [anon_sym_CREATE] = ACTIONS(127),
    [anon_sym_CONTENT] = ACTIONS(127),
    [anon_sym_SET] = ACTIONS(127),
    [anon_sym_RETURN] = ACTIONS(127),
    [anon_sym_BEFORE] = ACTIONS(127),
    [anon_sym_AFTER] = ACTIONS(127),
    [anon_sym_DIFF] = ACTIONS(127),
    [anon_sym_MERGE] = ACTIONS(127),
    [anon_sym_PATCH] = ACTIONS(127),
    [anon_sym_RELATE] = ACTIONS(127),
    [anon_sym_DELETE] = ACTIONS(127),
    [anon_sym_DEFINE] = ACTIONS(127),
    [anon_sym_NAMESPACE] = ACTIONS(127),
    [anon_sym_DATABASE] = ACTIONS(127),
    [anon_sym_LOGIN] = ACTIONS(127),
    [anon_sym_PASSWORD] = ACTIONS(127),
    [anon_sym_PASSHASH] = ACTIONS(127),
    [anon_sym_TOKEN] = ACTIONS(127),
    [anon_sym_SCOPE] = ACTIONS(127),
    [anon_sym_TYPE] = ACTIONS(127),
    [anon_sym_VALUE] = ACTIONS(127),
    [anon_sym_SESSION] = ACTIONS(127),
    [anon_sym_SIGNUP] = ACTIONS(127),
    [anon_sym_SIGNIN] = ACTIONS(127),
    [anon_sym_TABLE] = ACTIONS(127),
    [anon_sym_DROP] = ACTIONS(127),
    [anon_sym_SCHEMAFULL] = ACTIONS(127),
    [anon_sym_SCHEMALESS] = ACTIONS(127),
    [anon_sym_AS] = ACTIONS(127),
    [anon_sym_PERMISSIONS] = ACTIONS(127),
    [anon_sym_FULL] = ACTIONS(127),
    [anon_sym_FOR] = ACTIONS(127),
    [anon_sym_select] = ACTIONS(127),
    [anon_sym_update] = ACTIONS(127),
    [anon_sym_create] = ACTIONS(127),
    [anon_sym_delete] = ACTIONS(127),
    [anon_sym_EVENT] = ACTIONS(127),
    [anon_sym_WHEN] = ACTIONS(127),
    [anon_sym_ASSERT] = ACTIONS(127),
    [anon_sym_INDEX] = ACTIONS(127),
    [anon_sym_FIELDS] = ACTIONS(127),
    [anon_sym_COLUMNS] = ACTIONS(127),
    [anon_sym_UNIQUE] = ACTIONS(127),
    [anon_sym_REMOVE] = ACTIONS(127),
    [anon_sym_SLEEP] = ACTIONS(127),
    [anon_sym_INFO] = ACTIONS(127),
    [anon_sym_KV] = ACTIONS(127),
    [anon_sym_FUNCTION] = ACTIONS(127),
    [anon_sym_PARAM] = ACTIONS(127),
    [anon_sym_AMP_AMP] = ACTIONS(125),
    [anon_sym_AND] = ACTIONS(127),
    [anon_sym_PIPE_PIPE] = ACTIONS(125),
    [anon_sym_OR] = ACTIONS(127),
    [anon_sym_QMARK_QMARK] = ACTIONS(125),
    [anon_sym_QMARK_COLON] = ACTIONS(125),
    [anon_sym_EQ] = ACTIONS(127),
    [anon_sym_IS] = ACTIONS(127),
    [anon_sym_BANG_EQ] = ACTIONS(125),
    [anon_sym_ISNOT] = ACTIONS(125),
    [anon_sym_EQ_EQ] = ACTIONS(125),
    [anon_sym_QMARK_EQ] = ACTIONS(125),
    [anon_sym_STAR_EQ] = ACTIONS(125),
    [anon_sym_TILDE] = ACTIONS(125),
    [anon_sym_BANG_TILDE] = ACTIONS(125),
    [anon_sym_QMARK_TILDE] = ACTIONS(125),
    [anon_sym_STAR_TILDE] = ACTIONS(125),
    [anon_sym_LT] = ACTIONS(127),
    [anon_sym_LT_EQ] = ACTIONS(125),
    [anon_sym_GT] = ACTIONS(127),
    [anon_sym_GT_EQ] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_STAR] = ACTIONS(127),
    [anon_sym_x] = ACTIONS(127),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_] = ACTIONS(125),
    [anon_sym_STAR_STAR] = ACTIONS(125),
    [anon_sym_IN] = ACTIONS(127),
    [anon_sym_CONTAINS] = ACTIONS(127),
    [anon_sym_2] = ACTIONS(125),
    [anon_sym_CONTAINSNOT] = ACTIONS(127),
    [anon_sym_3] = ACTIONS(125),
    [anon_sym_CONTAINSALL] = ACTIONS(127),
    [anon_sym_4] = ACTIONS(125),
    [anon_sym_CONTAINSANY] = ACTIONS(127),
    [anon_sym_5] = ACTIONS(125),
    [anon_sym_CONTAINSNONE] = ACTIONS(127),
    [anon_sym_6] = ACTIONS(125),
    [anon_sym_INSIDE] = ACTIONS(127),
    [anon_sym_7] = ACTIONS(125),
    [anon_sym_NOTINSIDE] = ACTIONS(127),
    [anon_sym_NOTIN] = ACTIONS(125),
    [anon_sym_8] = ACTIONS(125),
    [anon_sym_ALLINSIDE] = ACTIONS(127),
    [anon_sym_9] = ACTIONS(125),
    [anon_sym_ANYINSIDE] = ACTIONS(127),
    [anon_sym_10] = ACTIONS(125),
    [anon_sym_NONEINSIDE] = ACTIONS(127),
    [anon_sym_11] = ACTIONS(125),
    [anon_sym_OUTSIDE] = ACTIONS(127),
    [anon_sym_INTERSECTS] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(125),
    [anon_sym_SEMI] = ACTIONS(125),
    [anon_sym_COLON] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(125),
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_DASH_GT] = ACTIONS(125),
    [anon_sym_LT_DASH] = ACTIONS(125),
    [anon_sym_any] = ACTIONS(127),
    [anon_sym_array] = ACTIONS(127),
    [anon_sym_bool] = ACTIONS(127),
    [anon_sym_datetime] = ACTIONS(127),
    [anon_sym_decimal] = ACTIONS(127),
    [anon_sym_duration] = ACTIONS(127),
    [anon_sym_float] = ACTIONS(127),
    [anon_sym_int] = ACTIONS(127),
    [anon_sym_number] = ACTIONS(127),
    [anon_sym_object] = ACTIONS(127),
    [anon_sym_string] = ACTIONS(127),
    [anon_sym_record] = ACTIONS(127),
    [anon_sym_geometry] = ACTIONS(127),
    [anon_sym_EDDSA] = ACTIONS(127),
    [anon_sym_ES256] = ACTIONS(127),
    [anon_sym_ES384] = ACTIONS(127),
    [anon_sym_ES512] = ACTIONS(127),
    [anon_sym_HS256] = ACTIONS(127),
    [anon_sym_HS384] = ACTIONS(127),
    [anon_sym_HS512] = ACTIONS(127),
    [anon_sym_PS256] = ACTIONS(127),
    [anon_sym_PS384] = ACTIONS(127),
    [anon_sym_PS512] = ACTIONS(127),
    [anon_sym_RS256] = ACTIONS(127),
    [anon_sym_RS384] = ACTIONS(127),
    [anon_sym_RS512] = ACTIONS(127),
    [aux_sym_function_token1] = ACTIONS(125),
    [aux_sym_function_token2] = ACTIONS(125),
    [anon_sym_count] = ACTIONS(127),
    [aux_sym_function_token3] = ACTIONS(125),
    [aux_sym_function_token4] = ACTIONS(125),
    [aux_sym_function_token5] = ACTIONS(125),
    [aux_sym_function_token6] = ACTIONS(125),
    [aux_sym_function_token7] = ACTIONS(125),
    [aux_sym_function_token8] = ACTIONS(125),
    [aux_sym_function_token9] = ACTIONS(125),
    [aux_sym_function_token10] = ACTIONS(127),
    [aux_sym_function_token11] = ACTIONS(125),
    [aux_sym_function_token12] = ACTIONS(127),
    [aux_sym_function_token13] = ACTIONS(125),
    [aux_sym_function_token14] = ACTIONS(125),
    [aux_sym_function_token15] = ACTIONS(125),
    [aux_sym_function_token16] = ACTIONS(127),
    [anon_sym_true] = ACTIONS(127),
    [anon_sym_false] = ACTIONS(127),
    [anon_sym_TRUE] = ACTIONS(127),
    [anon_sym_FALSE] = ACTIONS(127),
    [anon_sym_null] = ACTIONS(127),
    [anon_sym_NULL] = ACTIONS(127),
    [anon_sym_none] = ACTIONS(127),
    [anon_sym_NONE] = ACTIONS(127),
    [sym_variable] = ACTIONS(125),
    [sym_comment] = ACTIONS(125),
    [anon_sym_SQUOTE] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(125),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [aux_sym_future_token1] = ACTIONS(129),
    [aux_sym_casting_token1] = ACTIONS(129),
    [aux_sym_property_token1] = ACTIONS(131),
    [aux_sym_identifier_token1] = ACTIONS(131),
    [aux_sym_duration_token1] = ACTIONS(131),
    [aux_sym_constant_token1] = ACTIONS(129),
    [aux_sym_number_token1] = ACTIONS(131),
    [aux_sym_record_token1] = ACTIONS(129),
    [aux_sym_record_token2] = ACTIONS(129),
    [anon_sym_USE] = ACTIONS(131),
    [anon_sym_NS] = ACTIONS(131),
    [anon_sym_DB] = ACTIONS(131),
    [anon_sym_LET] = ACTIONS(131),
    [anon_sym_BEGIN] = ACTIONS(131),
    [anon_sym_TRANSACTION] = ACTIONS(131),
    [anon_sym_CANCEL] = ACTIONS(131),
    [anon_sym_COMMIT] = ACTIONS(131),
    [anon_sym_IF] = ACTIONS(131),
    [anon_sym_ELSE] = ACTIONS(131),
    [anon_sym_THEN] = ACTIONS(131),
    [anon_sym_END] = ACTIONS(131),
    [anon_sym_SELECT] = ACTIONS(131),
    [anon_sym_FROM] = ACTIONS(131),
    [anon_sym_WHERE] = ACTIONS(131),
    [anon_sym_SPLIT] = ACTIONS(131),
    [anon_sym_AT] = ACTIONS(131),
    [anon_sym_GROUP] = ACTIONS(131),
    [anon_sym_BY] = ACTIONS(131),
    [anon_sym_ORDER] = ACTIONS(131),
    [anon_sym_COLLATE] = ACTIONS(131),
    [anon_sym_NUMERIC] = ACTIONS(131),
    [anon_sym_ASC] = ACTIONS(131),
    [anon_sym_DESC] = ACTIONS(131),
    [anon_sym_LIMIT] = ACTIONS(131),
    [anon_sym_START] = ACTIONS(131),
    [anon_sym_FETCH] = ACTIONS(131),
    [anon_sym_TIMEOUT] = ACTIONS(131),
    [anon_sym_PARALLEL] = ACTIONS(131),
    [anon_sym_INSERT] = ACTIONS(131),
    [anon_sym_IGNORE] = ACTIONS(131),
    [anon_sym_INTO] = ACTIONS(131),
    [anon_sym_VALUES] = ACTIONS(131),
    [anon_sym_ON] = ACTIONS(131),
    [anon_sym_DUPLICATE] = ACTIONS(131),
    [anon_sym_KEY] = ACTIONS(131),
    [anon_sym_UPDATE] = ACTIONS(131),
    [anon_sym_CREATE] = ACTIONS(131),
    [anon_sym_CONTENT] = ACTIONS(131),
    [anon_sym_SET] = ACTIONS(131),
    [anon_sym_RETURN] = ACTIONS(131),
    [anon_sym_BEFORE] = ACTIONS(131),
    [anon_sym_AFTER] = ACTIONS(131),
    [anon_sym_DIFF] = ACTIONS(131),
    [anon_sym_MERGE] = ACTIONS(131),
    [anon_sym_PATCH] = ACTIONS(131),
    [anon_sym_RELATE] = ACTIONS(131),
    [anon_sym_DELETE] = ACTIONS(131),
    [anon_sym_DEFINE] = ACTIONS(131),
    [anon_sym_NAMESPACE] = ACTIONS(131),
    [anon_sym_DATABASE] = ACTIONS(131),
    [anon_sym_LOGIN] = ACTIONS(131),
    [anon_sym_PASSWORD] = ACTIONS(131),
    [anon_sym_PASSHASH] = ACTIONS(131),
    [anon_sym_TOKEN] = ACTIONS(131),
    [anon_sym_SCOPE] = ACTIONS(131),
    [anon_sym_TYPE] = ACTIONS(131),
    [anon_sym_VALUE] = ACTIONS(131),
    [anon_sym_SESSION] = ACTIONS(131),
    [anon_sym_SIGNUP] = ACTIONS(131),
    [anon_sym_SIGNIN] = ACTIONS(131),
    [anon_sym_TABLE] = ACTIONS(131),
    [anon_sym_DROP] = ACTIONS(131),
    [anon_sym_SCHEMAFULL] = ACTIONS(131),
    [anon_sym_SCHEMALESS] = ACTIONS(131),
    [anon_sym_AS] = ACTIONS(131),
    [anon_sym_PERMISSIONS] = ACTIONS(131),
    [anon_sym_FULL] = ACTIONS(131),
    [anon_sym_FOR] = ACTIONS(131),
    [anon_sym_select] = ACTIONS(131),
    [anon_sym_update] = ACTIONS(131),
    [anon_sym_create] = ACTIONS(131),
    [anon_sym_delete] = ACTIONS(131),
    [anon_sym_EVENT] = ACTIONS(131),
    [anon_sym_WHEN] = ACTIONS(131),
    [anon_sym_ASSERT] = ACTIONS(131),
    [anon_sym_INDEX] = ACTIONS(131),
    [anon_sym_FIELDS] = ACTIONS(131),
    [anon_sym_COLUMNS] = ACTIONS(131),
    [anon_sym_UNIQUE] = ACTIONS(131),
    [anon_sym_REMOVE] = ACTIONS(131),
    [anon_sym_SLEEP] = ACTIONS(131),
    [anon_sym_INFO] = ACTIONS(131),
    [anon_sym_KV] = ACTIONS(131),
    [anon_sym_FUNCTION] = ACTIONS(131),
    [anon_sym_PARAM] = ACTIONS(131),
    [anon_sym_AMP_AMP] = ACTIONS(129),
    [anon_sym_AND] = ACTIONS(131),
    [anon_sym_PIPE_PIPE] = ACTIONS(129),
    [anon_sym_OR] = ACTIONS(131),
    [anon_sym_QMARK_QMARK] = ACTIONS(129),
    [anon_sym_QMARK_COLON] = ACTIONS(129),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_IS] = ACTIONS(131),
    [anon_sym_BANG_EQ] = ACTIONS(129),
    [anon_sym_ISNOT] = ACTIONS(129),
    [anon_sym_EQ_EQ] = ACTIONS(129),
    [anon_sym_QMARK_EQ] = ACTIONS(129),
    [anon_sym_STAR_EQ] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [anon_sym_BANG_TILDE] = ACTIONS(129),
    [anon_sym_QMARK_TILDE] = ACTIONS(129),
    [anon_sym_STAR_TILDE] = ACTIONS(129),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_LT_EQ] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_EQ] = ACTIONS(129),
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_x] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(131),
    [anon_sym_] = ACTIONS(129),
    [anon_sym_STAR_STAR] = ACTIONS(129),
    [anon_sym_IN] = ACTIONS(131),
    [anon_sym_CONTAINS] = ACTIONS(131),
    [anon_sym_2] = ACTIONS(129),
    [anon_sym_CONTAINSNOT] = ACTIONS(131),
    [anon_sym_3] = ACTIONS(129),
    [anon_sym_CONTAINSALL] = ACTIONS(131),
    [anon_sym_4] = ACTIONS(129),
    [anon_sym_CONTAINSANY] = ACTIONS(131),
    [anon_sym_5] = ACTIONS(129),
    [anon_sym_CONTAINSNONE] = ACTIONS(131),
    [anon_sym_6] = ACTIONS(129),
    [anon_sym_INSIDE] = ACTIONS(131),
    [anon_sym_7] = ACTIONS(129),
    [anon_sym_NOTINSIDE] = ACTIONS(131),
    [anon_sym_NOTIN] = ACTIONS(129),
    [anon_sym_8] = ACTIONS(129),
    [anon_sym_ALLINSIDE] = ACTIONS(131),
    [anon_sym_9] = ACTIONS(129),
    [anon_sym_ANYINSIDE] = ACTIONS(131),
    [anon_sym_10] = ACTIONS(129),
    [anon_sym_NONEINSIDE] = ACTIONS(131),
    [anon_sym_11] = ACTIONS(129),
    [anon_sym_OUTSIDE] = ACTIONS(131),
    [anon_sym_INTERSECTS] = ACTIONS(131),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_SEMI] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(129),
    [anon_sym_RPAREN] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_RBRACK] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_DASH_GT] = ACTIONS(129),
    [anon_sym_LT_DASH] = ACTIONS(129),
    [anon_sym_any] = ACTIONS(131),
    [anon_sym_array] = ACTIONS(131),
    [anon_sym_bool] = ACTIONS(131),
    [anon_sym_datetime] = ACTIONS(131),
    [anon_sym_decimal] = ACTIONS(131),
    [anon_sym_duration] = ACTIONS(131),
    [anon_sym_float] = ACTIONS(131),
    [anon_sym_int] = ACTIONS(131),
    [anon_sym_number] = ACTIONS(131),
    [anon_sym_object] = ACTIONS(131),
    [anon_sym_string] = ACTIONS(131),
    [anon_sym_record] = ACTIONS(131),
    [anon_sym_geometry] = ACTIONS(131),
    [anon_sym_EDDSA] = ACTIONS(131),
    [anon_sym_ES256] = ACTIONS(131),
    [anon_sym_ES384] = ACTIONS(131),
    [anon_sym_ES512] = ACTIONS(131),
    [anon_sym_HS256] = ACTIONS(131),
    [anon_sym_HS384] = ACTIONS(131),
    [anon_sym_HS512] = ACTIONS(131),
    [anon_sym_PS256] = ACTIONS(131),
    [anon_sym_PS384] = ACTIONS(131),
    [anon_sym_PS512] = ACTIONS(131),
    [anon_sym_RS256] = ACTIONS(131),
    [anon_sym_RS384] = ACTIONS(131),
    [anon_sym_RS512] = ACTIONS(131),
    [aux_sym_function_token1] = ACTIONS(129),
    [aux_sym_function_token2] = ACTIONS(129),
    [anon_sym_count] = ACTIONS(131),
    [aux_sym_function_token3] = ACTIONS(129),
    [aux_sym_function_token4] = ACTIONS(129),
    [aux_sym_function_token5] = ACTIONS(129),
    [aux_sym_function_token6] = ACTIONS(129),
    [aux_sym_function_token7] = ACTIONS(129),
    [aux_sym_function_token8] = ACTIONS(129),
    [aux_sym_function_token9] = ACTIONS(129),
    [aux_sym_function_token10] = ACTIONS(131),
    [aux_sym_function_token11] = ACTIONS(129),
    [aux_sym_function_token12] = ACTIONS(131),
    [aux_sym_function_token13] = ACTIONS(129),
    [aux_sym_function_token14] = ACTIONS(129),
    [aux_sym_function_token15] = ACTIONS(129),
    [aux_sym_function_token16] = ACTIONS(131),
    [anon_sym_true] = ACTIONS(131),
    [anon_sym_false] = ACTIONS(131),
    [anon_sym_TRUE] = ACTIONS(131),
    [anon_sym_FALSE] = ACTIONS(131),
    [anon_sym_null] = ACTIONS(131),
    [anon_sym_NULL] = ACTIONS(131),
    [anon_sym_none] = ACTIONS(131),
    [anon_sym_NONE] = ACTIONS(131),
    [sym_variable] = ACTIONS(129),
    [sym_comment] = ACTIONS(129),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [anon_sym_DQUOTE] = ACTIONS(129),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [aux_sym_future_token1] = ACTIONS(133),
    [aux_sym_casting_token1] = ACTIONS(133),
    [aux_sym_property_token1] = ACTIONS(135),
    [aux_sym_identifier_token1] = ACTIONS(135),
    [aux_sym_duration_token1] = ACTIONS(135),
    [aux_sym_constant_token1] = ACTIONS(133),
    [aux_sym_number_token1] = ACTIONS(135),
    [aux_sym_record_token1] = ACTIONS(133),
    [aux_sym_record_token2] = ACTIONS(133),
    [anon_sym_USE] = ACTIONS(135),
    [anon_sym_NS] = ACTIONS(135),
    [anon_sym_DB] = ACTIONS(135),
    [anon_sym_LET] = ACTIONS(135),
    [anon_sym_BEGIN] = ACTIONS(135),
    [anon_sym_TRANSACTION] = ACTIONS(135),
    [anon_sym_CANCEL] = ACTIONS(135),
    [anon_sym_COMMIT] = ACTIONS(135),
    [anon_sym_IF] = ACTIONS(135),
    [anon_sym_ELSE] = ACTIONS(135),
    [anon_sym_THEN] = ACTIONS(135),
    [anon_sym_END] = ACTIONS(135),
    [anon_sym_SELECT] = ACTIONS(135),
    [anon_sym_FROM] = ACTIONS(135),
    [anon_sym_WHERE] = ACTIONS(135),
    [anon_sym_SPLIT] = ACTIONS(135),
    [anon_sym_AT] = ACTIONS(135),
    [anon_sym_GROUP] = ACTIONS(135),
    [anon_sym_BY] = ACTIONS(135),
    [anon_sym_ORDER] = ACTIONS(135),
    [anon_sym_COLLATE] = ACTIONS(135),
    [anon_sym_NUMERIC] = ACTIONS(135),
    [anon_sym_ASC] = ACTIONS(135),
    [anon_sym_DESC] = ACTIONS(135),
    [anon_sym_LIMIT] = ACTIONS(135),
    [anon_sym_START] = ACTIONS(135),
    [anon_sym_FETCH] = ACTIONS(135),
    [anon_sym_TIMEOUT] = ACTIONS(135),
    [anon_sym_PARALLEL] = ACTIONS(135),
    [anon_sym_INSERT] = ACTIONS(135),
    [anon_sym_IGNORE] = ACTIONS(135),
    [anon_sym_INTO] = ACTIONS(135),
    [anon_sym_VALUES] = ACTIONS(135),
    [anon_sym_ON] = ACTIONS(135),
    [anon_sym_DUPLICATE] = ACTIONS(135),
    [anon_sym_KEY] = ACTIONS(135),
    [anon_sym_UPDATE] = ACTIONS(135),
    [anon_sym_CREATE] = ACTIONS(135),
    [anon_sym_CONTENT] = ACTIONS(135),
    [anon_sym_SET] = ACTIONS(135),
    [anon_sym_RETURN] = ACTIONS(135),
    [anon_sym_BEFORE] = ACTIONS(135),
    [anon_sym_AFTER] = ACTIONS(135),
    [anon_sym_DIFF] = ACTIONS(135),
    [anon_sym_MERGE] = ACTIONS(135),
    [anon_sym_PATCH] = ACTIONS(135),
    [anon_sym_RELATE] = ACTIONS(135),
    [anon_sym_DELETE] = ACTIONS(135),
    [anon_sym_DEFINE] = ACTIONS(135),
    [anon_sym_NAMESPACE] = ACTIONS(135),
    [anon_sym_DATABASE] = ACTIONS(135),
    [anon_sym_LOGIN] = ACTIONS(135),
    [anon_sym_PASSWORD] = ACTIONS(135),
    [anon_sym_PASSHASH] = ACTIONS(135),
    [anon_sym_TOKEN] = ACTIONS(135),
    [anon_sym_SCOPE] = ACTIONS(135),
    [anon_sym_TYPE] = ACTIONS(135),
    [anon_sym_VALUE] = ACTIONS(135),
    [anon_sym_SESSION] = ACTIONS(135),
    [anon_sym_SIGNUP] = ACTIONS(135),
    [anon_sym_SIGNIN] = ACTIONS(135),
    [anon_sym_TABLE] = ACTIONS(135),
    [anon_sym_DROP] = ACTIONS(135),
    [anon_sym_SCHEMAFULL] = ACTIONS(135),
    [anon_sym_SCHEMALESS] = ACTIONS(135),
    [anon_sym_AS] = ACTIONS(135),
    [anon_sym_PERMISSIONS] = ACTIONS(135),
    [anon_sym_FULL] = ACTIONS(135),
    [anon_sym_FOR] = ACTIONS(135),
    [anon_sym_select] = ACTIONS(135),
    [anon_sym_update] = ACTIONS(135),
    [anon_sym_create] = ACTIONS(135),
    [anon_sym_delete] = ACTIONS(135),
    [anon_sym_EVENT] = ACTIONS(135),
    [anon_sym_WHEN] = ACTIONS(135),
    [anon_sym_ASSERT] = ACTIONS(135),
    [anon_sym_INDEX] = ACTIONS(135),
    [anon_sym_FIELDS] = ACTIONS(135),
    [anon_sym_COLUMNS] = ACTIONS(135),
    [anon_sym_UNIQUE] = ACTIONS(135),
    [anon_sym_REMOVE] = ACTIONS(135),
    [anon_sym_SLEEP] = ACTIONS(135),
    [anon_sym_INFO] = ACTIONS(135),
    [anon_sym_KV] = ACTIONS(135),
    [anon_sym_FUNCTION] = ACTIONS(135),
    [anon_sym_PARAM] = ACTIONS(135),
    [anon_sym_AMP_AMP] = ACTIONS(133),
    [anon_sym_AND] = ACTIONS(135),
    [anon_sym_PIPE_PIPE] = ACTIONS(133),
    [anon_sym_OR] = ACTIONS(135),
    [anon_sym_QMARK_QMARK] = ACTIONS(133),
    [anon_sym_QMARK_COLON] = ACTIONS(133),
    [anon_sym_EQ] = ACTIONS(135),
    [anon_sym_IS] = ACTIONS(135),
    [anon_sym_BANG_EQ] = ACTIONS(133),
    [anon_sym_ISNOT] = ACTIONS(133),
    [anon_sym_EQ_EQ] = ACTIONS(133),
    [anon_sym_QMARK_EQ] = ACTIONS(133),
    [anon_sym_STAR_EQ] = ACTIONS(133),
    [anon_sym_TILDE] = ACTIONS(133),
    [anon_sym_BANG_TILDE] = ACTIONS(133),
    [anon_sym_QMARK_TILDE] = ACTIONS(133),
    [anon_sym_STAR_TILDE] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(135),
    [anon_sym_LT_EQ] = ACTIONS(133),
    [anon_sym_GT] = ACTIONS(135),
    [anon_sym_GT_EQ] = ACTIONS(133),
    [anon_sym_PLUS] = ACTIONS(133),
    [anon_sym_DASH] = ACTIONS(135),
    [anon_sym_STAR] = ACTIONS(135),
    [anon_sym_x] = ACTIONS(135),
    [anon_sym_SLASH] = ACTIONS(135),
    [anon_sym_] = ACTIONS(133),
    [anon_sym_STAR_STAR] = ACTIONS(133),
    [anon_sym_IN] = ACTIONS(135),
    [anon_sym_CONTAINS] = ACTIONS(135),
    [anon_sym_2] = ACTIONS(133),
    [anon_sym_CONTAINSNOT] = ACTIONS(135),
    [anon_sym_3] = ACTIONS(133),
    [anon_sym_CONTAINSALL] = ACTIONS(135),
    [anon_sym_4] = ACTIONS(133),
    [anon_sym_CONTAINSANY] = ACTIONS(135),
    [anon_sym_5] = ACTIONS(133),
    [anon_sym_CONTAINSNONE] = ACTIONS(135),
    [anon_sym_6] = ACTIONS(133),
    [anon_sym_INSIDE] = ACTIONS(135),
    [anon_sym_7] = ACTIONS(133),
    [anon_sym_NOTINSIDE] = ACTIONS(135),
    [anon_sym_NOTIN] = ACTIONS(133),
    [anon_sym_8] = ACTIONS(133),
    [anon_sym_ALLINSIDE] = ACTIONS(135),
    [anon_sym_9] = ACTIONS(133),
    [anon_sym_ANYINSIDE] = ACTIONS(135),
    [anon_sym_10] = ACTIONS(133),
    [anon_sym_NONEINSIDE] = ACTIONS(135),
    [anon_sym_11] = ACTIONS(133),
    [anon_sym_OUTSIDE] = ACTIONS(135),
    [anon_sym_INTERSECTS] = ACTIONS(135),
    [anon_sym_COMMA] = ACTIONS(133),
    [anon_sym_SEMI] = ACTIONS(133),
    [anon_sym_COLON] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(133),
    [anon_sym_RBRACE] = ACTIONS(133),
    [anon_sym_DASH_GT] = ACTIONS(133),
    [anon_sym_LT_DASH] = ACTIONS(133),
    [anon_sym_any] = ACTIONS(135),
    [anon_sym_array] = ACTIONS(135),
    [anon_sym_bool] = ACTIONS(135),
    [anon_sym_datetime] = ACTIONS(135),
    [anon_sym_decimal] = ACTIONS(135),
    [anon_sym_duration] = ACTIONS(135),
    [anon_sym_float] = ACTIONS(135),
    [anon_sym_int] = ACTIONS(135),
    [anon_sym_number] = ACTIONS(135),
    [anon_sym_object] = ACTIONS(135),
    [anon_sym_string] = ACTIONS(135),
    [anon_sym_record] = ACTIONS(135),
    [anon_sym_geometry] = ACTIONS(135),
    [anon_sym_EDDSA] = ACTIONS(135),
    [anon_sym_ES256] = ACTIONS(135),
    [anon_sym_ES384] = ACTIONS(135),
    [anon_sym_ES512] = ACTIONS(135),
    [anon_sym_HS256] = ACTIONS(135),
    [anon_sym_HS384] = ACTIONS(135),
    [anon_sym_HS512] = ACTIONS(135),
    [anon_sym_PS256] = ACTIONS(135),
    [anon_sym_PS384] = ACTIONS(135),
    [anon_sym_PS512] = ACTIONS(135),
    [anon_sym_RS256] = ACTIONS(135),
    [anon_sym_RS384] = ACTIONS(135),
    [anon_sym_RS512] = ACTIONS(135),
    [aux_sym_function_token1] = ACTIONS(133),
    [aux_sym_function_token2] = ACTIONS(133),
    [anon_sym_count] = ACTIONS(135),
    [aux_sym_function_token3] = ACTIONS(133),
    [aux_sym_function_token4] = ACTIONS(133),
    [aux_sym_function_token5] = ACTIONS(133),
    [aux_sym_function_token6] = ACTIONS(133),
    [aux_sym_function_token7] = ACTIONS(133),
    [aux_sym_function_token8] = ACTIONS(133),
    [aux_sym_function_token9] = ACTIONS(133),
    [aux_sym_function_token10] = ACTIONS(135),
    [aux_sym_function_token11] = ACTIONS(133),
    [aux_sym_function_token12] = ACTIONS(135),
    [aux_sym_function_token13] = ACTIONS(133),
    [aux_sym_function_token14] = ACTIONS(133),
    [aux_sym_function_token15] = ACTIONS(133),
    [aux_sym_function_token16] = ACTIONS(135),
    [anon_sym_true] = ACTIONS(135),
    [anon_sym_false] = ACTIONS(135),
    [anon_sym_TRUE] = ACTIONS(135),
    [anon_sym_FALSE] = ACTIONS(135),
    [anon_sym_null] = ACTIONS(135),
    [anon_sym_NULL] = ACTIONS(135),
    [anon_sym_none] = ACTIONS(135),
    [anon_sym_NONE] = ACTIONS(135),
    [sym_variable] = ACTIONS(133),
    [sym_comment] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(133),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [aux_sym_future_token1] = ACTIONS(137),
    [aux_sym_casting_token1] = ACTIONS(137),
    [aux_sym_property_token1] = ACTIONS(139),
    [aux_sym_identifier_token1] = ACTIONS(139),
    [aux_sym_duration_token1] = ACTIONS(139),
    [aux_sym_constant_token1] = ACTIONS(137),
    [aux_sym_number_token1] = ACTIONS(139),
    [aux_sym_record_token1] = ACTIONS(137),
    [aux_sym_record_token2] = ACTIONS(137),
    [anon_sym_USE] = ACTIONS(139),
    [anon_sym_NS] = ACTIONS(139),
    [anon_sym_DB] = ACTIONS(139),
    [anon_sym_LET] = ACTIONS(139),
    [anon_sym_BEGIN] = ACTIONS(139),
    [anon_sym_TRANSACTION] = ACTIONS(139),
    [anon_sym_CANCEL] = ACTIONS(139),
    [anon_sym_COMMIT] = ACTIONS(139),
    [anon_sym_IF] = ACTIONS(139),
    [anon_sym_ELSE] = ACTIONS(139),
    [anon_sym_THEN] = ACTIONS(139),
    [anon_sym_END] = ACTIONS(139),
    [anon_sym_SELECT] = ACTIONS(139),
    [anon_sym_FROM] = ACTIONS(139),
    [anon_sym_WHERE] = ACTIONS(139),
    [anon_sym_SPLIT] = ACTIONS(139),
    [anon_sym_AT] = ACTIONS(139),
    [anon_sym_GROUP] = ACTIONS(139),
    [anon_sym_BY] = ACTIONS(139),
    [anon_sym_ORDER] = ACTIONS(139),
    [anon_sym_COLLATE] = ACTIONS(139),
    [anon_sym_NUMERIC] = ACTIONS(139),
    [anon_sym_ASC] = ACTIONS(139),
    [anon_sym_DESC] = ACTIONS(139),
    [anon_sym_LIMIT] = ACTIONS(139),
    [anon_sym_START] = ACTIONS(139),
    [anon_sym_FETCH] = ACTIONS(139),
    [anon_sym_TIMEOUT] = ACTIONS(139),
    [anon_sym_PARALLEL] = ACTIONS(139),
    [anon_sym_INSERT] = ACTIONS(139),
    [anon_sym_IGNORE] = ACTIONS(139),
    [anon_sym_INTO] = ACTIONS(139),
    [anon_sym_VALUES] = ACTIONS(139),
    [anon_sym_ON] = ACTIONS(139),
    [anon_sym_DUPLICATE] = ACTIONS(139),
    [anon_sym_KEY] = ACTIONS(139),
    [anon_sym_UPDATE] = ACTIONS(139),
    [anon_sym_CREATE] = ACTIONS(139),
    [anon_sym_CONTENT] = ACTIONS(139),
    [anon_sym_SET] = ACTIONS(139),
    [anon_sym_RETURN] = ACTIONS(139),
    [anon_sym_BEFORE] = ACTIONS(139),
    [anon_sym_AFTER] = ACTIONS(139),
    [anon_sym_DIFF] = ACTIONS(139),
    [anon_sym_MERGE] = ACTIONS(139),
    [anon_sym_PATCH] = ACTIONS(139),
    [anon_sym_RELATE] = ACTIONS(139),
    [anon_sym_DELETE] = ACTIONS(139),
    [anon_sym_DEFINE] = ACTIONS(139),
    [anon_sym_NAMESPACE] = ACTIONS(139),
    [anon_sym_DATABASE] = ACTIONS(139),
    [anon_sym_LOGIN] = ACTIONS(139),
    [anon_sym_PASSWORD] = ACTIONS(139),
    [anon_sym_PASSHASH] = ACTIONS(139),
    [anon_sym_TOKEN] = ACTIONS(139),
    [anon_sym_SCOPE] = ACTIONS(139),
    [anon_sym_TYPE] = ACTIONS(139),
    [anon_sym_VALUE] = ACTIONS(139),
    [anon_sym_SESSION] = ACTIONS(139),
    [anon_sym_SIGNUP] = ACTIONS(139),
    [anon_sym_SIGNIN] = ACTIONS(139),
    [anon_sym_TABLE] = ACTIONS(139),
    [anon_sym_DROP] = ACTIONS(139),
    [anon_sym_SCHEMAFULL] = ACTIONS(139),
    [anon_sym_SCHEMALESS] = ACTIONS(139),
    [anon_sym_AS] = ACTIONS(139),
    [anon_sym_PERMISSIONS] = ACTIONS(139),
    [anon_sym_FULL] = ACTIONS(139),
    [anon_sym_FOR] = ACTIONS(139),
    [anon_sym_select] = ACTIONS(139),
    [anon_sym_update] = ACTIONS(139),
    [anon_sym_create] = ACTIONS(139),
    [anon_sym_delete] = ACTIONS(139),
    [anon_sym_EVENT] = ACTIONS(139),
    [anon_sym_WHEN] = ACTIONS(139),
    [anon_sym_ASSERT] = ACTIONS(139),
    [anon_sym_INDEX] = ACTIONS(139),
    [anon_sym_FIELDS] = ACTIONS(139),
    [anon_sym_COLUMNS] = ACTIONS(139),
    [anon_sym_UNIQUE] = ACTIONS(139),
    [anon_sym_REMOVE] = ACTIONS(139),
    [anon_sym_SLEEP] = ACTIONS(139),
    [anon_sym_INFO] = ACTIONS(139),
    [anon_sym_KV] = ACTIONS(139),
    [anon_sym_FUNCTION] = ACTIONS(139),
    [anon_sym_PARAM] = ACTIONS(139),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_AND] = ACTIONS(139),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_OR] = ACTIONS(139),
    [anon_sym_QMARK_QMARK] = ACTIONS(137),
    [anon_sym_QMARK_COLON] = ACTIONS(137),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_IS] = ACTIONS(139),
    [anon_sym_BANG_EQ] = ACTIONS(137),
    [anon_sym_ISNOT] = ACTIONS(137),
    [anon_sym_EQ_EQ] = ACTIONS(137),
    [anon_sym_QMARK_EQ] = ACTIONS(137),
    [anon_sym_STAR_EQ] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(137),
    [anon_sym_BANG_TILDE] = ACTIONS(137),
    [anon_sym_QMARK_TILDE] = ACTIONS(137),
    [anon_sym_STAR_TILDE] = ACTIONS(137),
    [anon_sym_LT] = ACTIONS(139),
    [anon_sym_LT_EQ] = ACTIONS(137),
    [anon_sym_GT] = ACTIONS(139),
    [anon_sym_GT_EQ] = ACTIONS(137),
    [anon_sym_PLUS] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_x] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(139),
    [anon_sym_] = ACTIONS(137),
    [anon_sym_STAR_STAR] = ACTIONS(137),
    [anon_sym_IN] = ACTIONS(139),
    [anon_sym_CONTAINS] = ACTIONS(139),
    [anon_sym_2] = ACTIONS(137),
    [anon_sym_CONTAINSNOT] = ACTIONS(139),
    [anon_sym_3] = ACTIONS(137),
    [anon_sym_CONTAINSALL] = ACTIONS(139),
    [anon_sym_4] = ACTIONS(137),
    [anon_sym_CONTAINSANY] = ACTIONS(139),
    [anon_sym_5] = ACTIONS(137),
    [anon_sym_CONTAINSNONE] = ACTIONS(139),
    [anon_sym_6] = ACTIONS(137),
    [anon_sym_INSIDE] = ACTIONS(139),
    [anon_sym_7] = ACTIONS(137),
    [anon_sym_NOTINSIDE] = ACTIONS(139),
    [anon_sym_NOTIN] = ACTIONS(137),
    [anon_sym_8] = ACTIONS(137),
    [anon_sym_ALLINSIDE] = ACTIONS(139),
    [anon_sym_9] = ACTIONS(137),
    [anon_sym_ANYINSIDE] = ACTIONS(139),
    [anon_sym_10] = ACTIONS(137),
    [anon_sym_NONEINSIDE] = ACTIONS(139),
    [anon_sym_11] = ACTIONS(137),
    [anon_sym_OUTSIDE] = ACTIONS(139),
    [anon_sym_INTERSECTS] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_COLON] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_DASH_GT] = ACTIONS(137),
    [anon_sym_LT_DASH] = ACTIONS(137),
    [anon_sym_any] = ACTIONS(139),
    [anon_sym_array] = ACTIONS(139),
    [anon_sym_bool] = ACTIONS(139),
    [anon_sym_datetime] = ACTIONS(139),
    [anon_sym_decimal] = ACTIONS(139),
    [anon_sym_duration] = ACTIONS(139),
    [anon_sym_float] = ACTIONS(139),
    [anon_sym_int] = ACTIONS(139),
    [anon_sym_number] = ACTIONS(139),
    [anon_sym_object] = ACTIONS(139),
    [anon_sym_string] = ACTIONS(139),
    [anon_sym_record] = ACTIONS(139),
    [anon_sym_geometry] = ACTIONS(139),
    [anon_sym_EDDSA] = ACTIONS(139),
    [anon_sym_ES256] = ACTIONS(139),
    [anon_sym_ES384] = ACTIONS(139),
    [anon_sym_ES512] = ACTIONS(139),
    [anon_sym_HS256] = ACTIONS(139),
    [anon_sym_HS384] = ACTIONS(139),
    [anon_sym_HS512] = ACTIONS(139),
    [anon_sym_PS256] = ACTIONS(139),
    [anon_sym_PS384] = ACTIONS(139),
    [anon_sym_PS512] = ACTIONS(139),
    [anon_sym_RS256] = ACTIONS(139),
    [anon_sym_RS384] = ACTIONS(139),
    [anon_sym_RS512] = ACTIONS(139),
    [aux_sym_function_token1] = ACTIONS(137),
    [aux_sym_function_token2] = ACTIONS(137),
    [anon_sym_count] = ACTIONS(139),
    [aux_sym_function_token3] = ACTIONS(137),
    [aux_sym_function_token4] = ACTIONS(137),
    [aux_sym_function_token5] = ACTIONS(137),
    [aux_sym_function_token6] = ACTIONS(137),
    [aux_sym_function_token7] = ACTIONS(137),
    [aux_sym_function_token8] = ACTIONS(137),
    [aux_sym_function_token9] = ACTIONS(137),
    [aux_sym_function_token10] = ACTIONS(139),
    [aux_sym_function_token11] = ACTIONS(137),
    [aux_sym_function_token12] = ACTIONS(139),
    [aux_sym_function_token13] = ACTIONS(137),
    [aux_sym_function_token14] = ACTIONS(137),
    [aux_sym_function_token15] = ACTIONS(137),
    [aux_sym_function_token16] = ACTIONS(139),
    [anon_sym_true] = ACTIONS(139),
    [anon_sym_false] = ACTIONS(139),
    [anon_sym_TRUE] = ACTIONS(139),
    [anon_sym_FALSE] = ACTIONS(139),
    [anon_sym_null] = ACTIONS(139),
    [anon_sym_NULL] = ACTIONS(139),
    [anon_sym_none] = ACTIONS(139),
    [anon_sym_NONE] = ACTIONS(139),
    [sym_variable] = ACTIONS(137),
    [sym_comment] = ACTIONS(137),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_DQUOTE] = ACTIONS(137),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [aux_sym_future_token1] = ACTIONS(141),
    [aux_sym_casting_token1] = ACTIONS(141),
    [aux_sym_property_token1] = ACTIONS(143),
    [aux_sym_identifier_token1] = ACTIONS(143),
    [aux_sym_duration_token1] = ACTIONS(143),
    [aux_sym_constant_token1] = ACTIONS(141),
    [aux_sym_number_token1] = ACTIONS(143),
    [aux_sym_record_token1] = ACTIONS(141),
    [aux_sym_record_token2] = ACTIONS(141),
    [anon_sym_USE] = ACTIONS(143),
    [anon_sym_NS] = ACTIONS(143),
    [anon_sym_DB] = ACTIONS(143),
    [anon_sym_LET] = ACTIONS(143),
    [anon_sym_BEGIN] = ACTIONS(143),
    [anon_sym_TRANSACTION] = ACTIONS(143),
    [anon_sym_CANCEL] = ACTIONS(143),
    [anon_sym_COMMIT] = ACTIONS(143),
    [anon_sym_IF] = ACTIONS(143),
    [anon_sym_ELSE] = ACTIONS(143),
    [anon_sym_THEN] = ACTIONS(143),
    [anon_sym_END] = ACTIONS(143),
    [anon_sym_SELECT] = ACTIONS(143),
    [anon_sym_FROM] = ACTIONS(143),
    [anon_sym_WHERE] = ACTIONS(143),
    [anon_sym_SPLIT] = ACTIONS(143),
    [anon_sym_AT] = ACTIONS(143),
    [anon_sym_GROUP] = ACTIONS(143),
    [anon_sym_BY] = ACTIONS(143),
    [anon_sym_ORDER] = ACTIONS(143),
    [anon_sym_COLLATE] = ACTIONS(143),
    [anon_sym_NUMERIC] = ACTIONS(143),
    [anon_sym_ASC] = ACTIONS(143),
    [anon_sym_DESC] = ACTIONS(143),
    [anon_sym_LIMIT] = ACTIONS(143),
    [anon_sym_START] = ACTIONS(143),
    [anon_sym_FETCH] = ACTIONS(143),
    [anon_sym_TIMEOUT] = ACTIONS(143),
    [anon_sym_PARALLEL] = ACTIONS(143),
    [anon_sym_INSERT] = ACTIONS(143),
    [anon_sym_IGNORE] = ACTIONS(143),
    [anon_sym_INTO] = ACTIONS(143),
    [anon_sym_VALUES] = ACTIONS(143),
    [anon_sym_ON] = ACTIONS(143),
    [anon_sym_DUPLICATE] = ACTIONS(143),
    [anon_sym_KEY] = ACTIONS(143),
    [anon_sym_UPDATE] = ACTIONS(143),
    [anon_sym_CREATE] = ACTIONS(143),
    [anon_sym_CONTENT] = ACTIONS(143),
    [anon_sym_SET] = ACTIONS(143),
    [anon_sym_RETURN] = ACTIONS(143),
    [anon_sym_BEFORE] = ACTIONS(143),
    [anon_sym_AFTER] = ACTIONS(143),
    [anon_sym_DIFF] = ACTIONS(143),
    [anon_sym_MERGE] = ACTIONS(143),
    [anon_sym_PATCH] = ACTIONS(143),
    [anon_sym_RELATE] = ACTIONS(143),
    [anon_sym_DELETE] = ACTIONS(143),
    [anon_sym_DEFINE] = ACTIONS(143),
    [anon_sym_NAMESPACE] = ACTIONS(143),
    [anon_sym_DATABASE] = ACTIONS(143),
    [anon_sym_LOGIN] = ACTIONS(143),
    [anon_sym_PASSWORD] = ACTIONS(143),
    [anon_sym_PASSHASH] = ACTIONS(143),
    [anon_sym_TOKEN] = ACTIONS(143),
    [anon_sym_SCOPE] = ACTIONS(143),
    [anon_sym_TYPE] = ACTIONS(143),
    [anon_sym_VALUE] = ACTIONS(143),
    [anon_sym_SESSION] = ACTIONS(143),
    [anon_sym_SIGNUP] = ACTIONS(143),
    [anon_sym_SIGNIN] = ACTIONS(143),
    [anon_sym_TABLE] = ACTIONS(143),
    [anon_sym_DROP] = ACTIONS(143),
    [anon_sym_SCHEMAFULL] = ACTIONS(143),
    [anon_sym_SCHEMALESS] = ACTIONS(143),
    [anon_sym_AS] = ACTIONS(143),
    [anon_sym_PERMISSIONS] = ACTIONS(143),
    [anon_sym_FULL] = ACTIONS(143),
    [anon_sym_FOR] = ACTIONS(143),
    [anon_sym_select] = ACTIONS(143),
    [anon_sym_update] = ACTIONS(143),
    [anon_sym_create] = ACTIONS(143),
    [anon_sym_delete] = ACTIONS(143),
    [anon_sym_EVENT] = ACTIONS(143),
    [anon_sym_WHEN] = ACTIONS(143),
    [anon_sym_ASSERT] = ACTIONS(143),
    [anon_sym_INDEX] = ACTIONS(143),
    [anon_sym_FIELDS] = ACTIONS(143),
    [anon_sym_COLUMNS] = ACTIONS(143),
    [anon_sym_UNIQUE] = ACTIONS(143),
    [anon_sym_REMOVE] = ACTIONS(143),
    [anon_sym_SLEEP] = ACTIONS(143),
    [anon_sym_INFO] = ACTIONS(143),
    [anon_sym_KV] = ACTIONS(143),
    [anon_sym_FUNCTION] = ACTIONS(143),
    [anon_sym_PARAM] = ACTIONS(143),
    [anon_sym_AMP_AMP] = ACTIONS(141),
    [anon_sym_AND] = ACTIONS(143),
    [anon_sym_PIPE_PIPE] = ACTIONS(141),
    [anon_sym_OR] = ACTIONS(143),
    [anon_sym_QMARK_QMARK] = ACTIONS(141),
    [anon_sym_QMARK_COLON] = ACTIONS(141),
    [anon_sym_EQ] = ACTIONS(143),
    [anon_sym_IS] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(141),
    [anon_sym_ISNOT] = ACTIONS(141),
    [anon_sym_EQ_EQ] = ACTIONS(141),
    [anon_sym_QMARK_EQ] = ACTIONS(141),
    [anon_sym_STAR_EQ] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(141),
    [anon_sym_BANG_TILDE] = ACTIONS(141),
    [anon_sym_QMARK_TILDE] = ACTIONS(141),
    [anon_sym_STAR_TILDE] = ACTIONS(141),
    [anon_sym_LT] = ACTIONS(143),
    [anon_sym_LT_EQ] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_GT_EQ] = ACTIONS(141),
    [anon_sym_PLUS] = ACTIONS(141),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_x] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_] = ACTIONS(141),
    [anon_sym_STAR_STAR] = ACTIONS(141),
    [anon_sym_IN] = ACTIONS(143),
    [anon_sym_CONTAINS] = ACTIONS(143),
    [anon_sym_2] = ACTIONS(141),
    [anon_sym_CONTAINSNOT] = ACTIONS(143),
    [anon_sym_3] = ACTIONS(141),
    [anon_sym_CONTAINSALL] = ACTIONS(143),
    [anon_sym_4] = ACTIONS(141),
    [anon_sym_CONTAINSANY] = ACTIONS(143),
    [anon_sym_5] = ACTIONS(141),
    [anon_sym_CONTAINSNONE] = ACTIONS(143),
    [anon_sym_6] = ACTIONS(141),
    [anon_sym_INSIDE] = ACTIONS(143),
    [anon_sym_7] = ACTIONS(141),
    [anon_sym_NOTINSIDE] = ACTIONS(143),
    [anon_sym_NOTIN] = ACTIONS(141),
    [anon_sym_8] = ACTIONS(141),
    [anon_sym_ALLINSIDE] = ACTIONS(143),
    [anon_sym_9] = ACTIONS(141),
    [anon_sym_ANYINSIDE] = ACTIONS(143),
    [anon_sym_10] = ACTIONS(141),
    [anon_sym_NONEINSIDE] = ACTIONS(143),
    [anon_sym_11] = ACTIONS(141),
    [anon_sym_OUTSIDE] = ACTIONS(143),
    [anon_sym_INTERSECTS] = ACTIONS(143),
    [anon_sym_COMMA] = ACTIONS(141),
    [anon_sym_SEMI] = ACTIONS(141),
    [anon_sym_COLON] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(141),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_RBRACE] = ACTIONS(141),
    [anon_sym_DASH_GT] = ACTIONS(141),
    [anon_sym_LT_DASH] = ACTIONS(141),
    [anon_sym_any] = ACTIONS(143),
    [anon_sym_array] = ACTIONS(143),
    [anon_sym_bool] = ACTIONS(143),
    [anon_sym_datetime] = ACTIONS(143),
    [anon_sym_decimal] = ACTIONS(143),
    [anon_sym_duration] = ACTIONS(143),
    [anon_sym_float] = ACTIONS(143),
    [anon_sym_int] = ACTIONS(143),
    [anon_sym_number] = ACTIONS(143),
    [anon_sym_object] = ACTIONS(143),
    [anon_sym_string] = ACTIONS(143),
    [anon_sym_record] = ACTIONS(143),
    [anon_sym_geometry] = ACTIONS(143),
    [anon_sym_EDDSA] = ACTIONS(143),
    [anon_sym_ES256] = ACTIONS(143),
    [anon_sym_ES384] = ACTIONS(143),
    [anon_sym_ES512] = ACTIONS(143),
    [anon_sym_HS256] = ACTIONS(143),
    [anon_sym_HS384] = ACTIONS(143),
    [anon_sym_HS512] = ACTIONS(143),
    [anon_sym_PS256] = ACTIONS(143),
    [anon_sym_PS384] = ACTIONS(143),
    [anon_sym_PS512] = ACTIONS(143),
    [anon_sym_RS256] = ACTIONS(143),
    [anon_sym_RS384] = ACTIONS(143),
    [anon_sym_RS512] = ACTIONS(143),
    [aux_sym_function_token1] = ACTIONS(141),
    [aux_sym_function_token2] = ACTIONS(141),
    [anon_sym_count] = ACTIONS(143),
    [aux_sym_function_token3] = ACTIONS(141),
    [aux_sym_function_token4] = ACTIONS(141),
    [aux_sym_function_token5] = ACTIONS(141),
    [aux_sym_function_token6] = ACTIONS(141),
    [aux_sym_function_token7] = ACTIONS(141),
    [aux_sym_function_token8] = ACTIONS(141),
    [aux_sym_function_token9] = ACTIONS(141),
    [aux_sym_function_token10] = ACTIONS(143),
    [aux_sym_function_token11] = ACTIONS(141),
    [aux_sym_function_token12] = ACTIONS(143),
    [aux_sym_function_token13] = ACTIONS(141),
    [aux_sym_function_token14] = ACTIONS(141),
    [aux_sym_function_token15] = ACTIONS(141),
    [aux_sym_function_token16] = ACTIONS(143),
    [anon_sym_true] = ACTIONS(143),
    [anon_sym_false] = ACTIONS(143),
    [anon_sym_TRUE] = ACTIONS(143),
    [anon_sym_FALSE] = ACTIONS(143),
    [anon_sym_null] = ACTIONS(143),
    [anon_sym_NULL] = ACTIONS(143),
    [anon_sym_none] = ACTIONS(143),
    [anon_sym_NONE] = ACTIONS(143),
    [sym_variable] = ACTIONS(141),
    [sym_comment] = ACTIONS(141),
    [anon_sym_SQUOTE] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(141),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [aux_sym_future_token1] = ACTIONS(145),
    [aux_sym_casting_token1] = ACTIONS(145),
    [aux_sym_property_token1] = ACTIONS(147),
    [aux_sym_identifier_token1] = ACTIONS(147),
    [aux_sym_duration_token1] = ACTIONS(147),
    [aux_sym_constant_token1] = ACTIONS(145),
    [aux_sym_number_token1] = ACTIONS(147),
    [aux_sym_record_token1] = ACTIONS(145),
    [aux_sym_record_token2] = ACTIONS(145),
    [anon_sym_USE] = ACTIONS(147),
    [anon_sym_NS] = ACTIONS(147),
    [anon_sym_DB] = ACTIONS(147),
    [anon_sym_LET] = ACTIONS(147),
    [anon_sym_BEGIN] = ACTIONS(147),
    [anon_sym_TRANSACTION] = ACTIONS(147),
    [anon_sym_CANCEL] = ACTIONS(147),
    [anon_sym_COMMIT] = ACTIONS(147),
    [anon_sym_IF] = ACTIONS(147),
    [anon_sym_ELSE] = ACTIONS(147),
    [anon_sym_THEN] = ACTIONS(147),
    [anon_sym_END] = ACTIONS(147),
    [anon_sym_SELECT] = ACTIONS(147),
    [anon_sym_FROM] = ACTIONS(147),
    [anon_sym_WHERE] = ACTIONS(147),
    [anon_sym_SPLIT] = ACTIONS(147),
    [anon_sym_AT] = ACTIONS(147),
    [anon_sym_GROUP] = ACTIONS(147),
    [anon_sym_BY] = ACTIONS(147),
    [anon_sym_ORDER] = ACTIONS(147),
    [anon_sym_COLLATE] = ACTIONS(147),
    [anon_sym_NUMERIC] = ACTIONS(147),
    [anon_sym_ASC] = ACTIONS(147),
    [anon_sym_DESC] = ACTIONS(147),
    [anon_sym_LIMIT] = ACTIONS(147),
    [anon_sym_START] = ACTIONS(147),
    [anon_sym_FETCH] = ACTIONS(147),
    [anon_sym_TIMEOUT] = ACTIONS(147),
    [anon_sym_PARALLEL] = ACTIONS(147),
    [anon_sym_INSERT] = ACTIONS(147),
    [anon_sym_IGNORE] = ACTIONS(147),
    [anon_sym_INTO] = ACTIONS(147),
    [anon_sym_VALUES] = ACTIONS(147),
    [anon_sym_ON] = ACTIONS(147),
    [anon_sym_DUPLICATE] = ACTIONS(147),
    [anon_sym_KEY] = ACTIONS(147),
    [anon_sym_UPDATE] = ACTIONS(147),
    [anon_sym_CREATE] = ACTIONS(147),
    [anon_sym_CONTENT] = ACTIONS(147),
    [anon_sym_SET] = ACTIONS(147),
    [anon_sym_RETURN] = ACTIONS(147),
    [anon_sym_BEFORE] = ACTIONS(147),
    [anon_sym_AFTER] = ACTIONS(147),
    [anon_sym_DIFF] = ACTIONS(147),
    [anon_sym_MERGE] = ACTIONS(147),
    [anon_sym_PATCH] = ACTIONS(147),
    [anon_sym_RELATE] = ACTIONS(147),
    [anon_sym_DELETE] = ACTIONS(147),
    [anon_sym_DEFINE] = ACTIONS(147),
    [anon_sym_NAMESPACE] = ACTIONS(147),
    [anon_sym_DATABASE] = ACTIONS(147),
    [anon_sym_LOGIN] = ACTIONS(147),
    [anon_sym_PASSWORD] = ACTIONS(147),
    [anon_sym_PASSHASH] = ACTIONS(147),
    [anon_sym_TOKEN] = ACTIONS(147),
    [anon_sym_SCOPE] = ACTIONS(147),
    [anon_sym_TYPE] = ACTIONS(147),
    [anon_sym_VALUE] = ACTIONS(147),
    [anon_sym_SESSION] = ACTIONS(147),
    [anon_sym_SIGNUP] = ACTIONS(147),
    [anon_sym_SIGNIN] = ACTIONS(147),
    [anon_sym_TABLE] = ACTIONS(147),
    [anon_sym_DROP] = ACTIONS(147),
    [anon_sym_SCHEMAFULL] = ACTIONS(147),
    [anon_sym_SCHEMALESS] = ACTIONS(147),
    [anon_sym_AS] = ACTIONS(147),
    [anon_sym_PERMISSIONS] = ACTIONS(147),
    [anon_sym_FULL] = ACTIONS(147),
    [anon_sym_FOR] = ACTIONS(147),
    [anon_sym_select] = ACTIONS(147),
    [anon_sym_update] = ACTIONS(147),
    [anon_sym_create] = ACTIONS(147),
    [anon_sym_delete] = ACTIONS(147),
    [anon_sym_EVENT] = ACTIONS(147),
    [anon_sym_WHEN] = ACTIONS(147),
    [anon_sym_ASSERT] = ACTIONS(147),
    [anon_sym_INDEX] = ACTIONS(147),
    [anon_sym_FIELDS] = ACTIONS(147),
    [anon_sym_COLUMNS] = ACTIONS(147),
    [anon_sym_UNIQUE] = ACTIONS(147),
    [anon_sym_REMOVE] = ACTIONS(147),
    [anon_sym_SLEEP] = ACTIONS(147),
    [anon_sym_INFO] = ACTIONS(147),
    [anon_sym_KV] = ACTIONS(147),
    [anon_sym_FUNCTION] = ACTIONS(147),
    [anon_sym_PARAM] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(145),
    [anon_sym_AND] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(145),
    [anon_sym_OR] = ACTIONS(147),
    [anon_sym_QMARK_QMARK] = ACTIONS(145),
    [anon_sym_QMARK_COLON] = ACTIONS(145),
    [anon_sym_EQ] = ACTIONS(147),
    [anon_sym_IS] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(145),
    [anon_sym_ISNOT] = ACTIONS(145),
    [anon_sym_EQ_EQ] = ACTIONS(145),
    [anon_sym_QMARK_EQ] = ACTIONS(145),
    [anon_sym_STAR_EQ] = ACTIONS(145),
    [anon_sym_TILDE] = ACTIONS(145),
    [anon_sym_BANG_TILDE] = ACTIONS(145),
    [anon_sym_QMARK_TILDE] = ACTIONS(145),
    [anon_sym_STAR_TILDE] = ACTIONS(145),
    [anon_sym_LT] = ACTIONS(147),
    [anon_sym_LT_EQ] = ACTIONS(145),
    [anon_sym_GT] = ACTIONS(147),
    [anon_sym_GT_EQ] = ACTIONS(145),
    [anon_sym_PLUS] = ACTIONS(145),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_x] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_] = ACTIONS(145),
    [anon_sym_STAR_STAR] = ACTIONS(145),
    [anon_sym_IN] = ACTIONS(147),
    [anon_sym_CONTAINS] = ACTIONS(147),
    [anon_sym_2] = ACTIONS(145),
    [anon_sym_CONTAINSNOT] = ACTIONS(147),
    [anon_sym_3] = ACTIONS(145),
    [anon_sym_CONTAINSALL] = ACTIONS(147),
    [anon_sym_4] = ACTIONS(145),
    [anon_sym_CONTAINSANY] = ACTIONS(147),
    [anon_sym_5] = ACTIONS(145),
    [anon_sym_CONTAINSNONE] = ACTIONS(147),
    [anon_sym_6] = ACTIONS(145),
    [anon_sym_INSIDE] = ACTIONS(147),
    [anon_sym_7] = ACTIONS(145),
    [anon_sym_NOTINSIDE] = ACTIONS(147),
    [anon_sym_NOTIN] = ACTIONS(145),
    [anon_sym_8] = ACTIONS(145),
    [anon_sym_ALLINSIDE] = ACTIONS(147),
    [anon_sym_9] = ACTIONS(145),
    [anon_sym_ANYINSIDE] = ACTIONS(147),
    [anon_sym_10] = ACTIONS(145),
    [anon_sym_NONEINSIDE] = ACTIONS(147),
    [anon_sym_11] = ACTIONS(145),
    [anon_sym_OUTSIDE] = ACTIONS(147),
    [anon_sym_INTERSECTS] = ACTIONS(147),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(145),
    [anon_sym_COLON] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_RPAREN] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym_RBRACK] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_RBRACE] = ACTIONS(145),
    [anon_sym_DASH_GT] = ACTIONS(145),
    [anon_sym_LT_DASH] = ACTIONS(145),
    [anon_sym_any] = ACTIONS(147),
    [anon_sym_array] = ACTIONS(147),
    [anon_sym_bool] = ACTIONS(147),
    [anon_sym_datetime] = ACTIONS(147),
    [anon_sym_decimal] = ACTIONS(147),
    [anon_sym_duration] = ACTIONS(147),
    [anon_sym_float] = ACTIONS(147),
    [anon_sym_int] = ACTIONS(147),
    [anon_sym_number] = ACTIONS(147),
    [anon_sym_object] = ACTIONS(147),
    [anon_sym_string] = ACTIONS(147),
    [anon_sym_record] = ACTIONS(147),
    [anon_sym_geometry] = ACTIONS(147),
    [anon_sym_EDDSA] = ACTIONS(147),
    [anon_sym_ES256] = ACTIONS(147),
    [anon_sym_ES384] = ACTIONS(147),
    [anon_sym_ES512] = ACTIONS(147),
    [anon_sym_HS256] = ACTIONS(147),
    [anon_sym_HS384] = ACTIONS(147),
    [anon_sym_HS512] = ACTIONS(147),
    [anon_sym_PS256] = ACTIONS(147),
    [anon_sym_PS384] = ACTIONS(147),
    [anon_sym_PS512] = ACTIONS(147),
    [anon_sym_RS256] = ACTIONS(147),
    [anon_sym_RS384] = ACTIONS(147),
    [anon_sym_RS512] = ACTIONS(147),
    [aux_sym_function_token1] = ACTIONS(145),
    [aux_sym_function_token2] = ACTIONS(145),
    [anon_sym_count] = ACTIONS(147),
    [aux_sym_function_token3] = ACTIONS(145),
    [aux_sym_function_token4] = ACTIONS(145),
    [aux_sym_function_token5] = ACTIONS(145),
    [aux_sym_function_token6] = ACTIONS(145),
    [aux_sym_function_token7] = ACTIONS(145),
    [aux_sym_function_token8] = ACTIONS(145),
    [aux_sym_function_token9] = ACTIONS(145),
    [aux_sym_function_token10] = ACTIONS(147),
    [aux_sym_function_token11] = ACTIONS(145),
    [aux_sym_function_token12] = ACTIONS(147),
    [aux_sym_function_token13] = ACTIONS(145),
    [aux_sym_function_token14] = ACTIONS(145),
    [aux_sym_function_token15] = ACTIONS(145),
    [aux_sym_function_token16] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(147),
    [anon_sym_false] = ACTIONS(147),
    [anon_sym_TRUE] = ACTIONS(147),
    [anon_sym_FALSE] = ACTIONS(147),
    [anon_sym_null] = ACTIONS(147),
    [anon_sym_NULL] = ACTIONS(147),
    [anon_sym_none] = ACTIONS(147),
    [anon_sym_NONE] = ACTIONS(147),
    [sym_variable] = ACTIONS(145),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SQUOTE] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(145),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [aux_sym_future_token1] = ACTIONS(149),
    [aux_sym_casting_token1] = ACTIONS(149),
    [aux_sym_property_token1] = ACTIONS(151),
    [aux_sym_identifier_token1] = ACTIONS(151),
    [aux_sym_duration_token1] = ACTIONS(151),
    [aux_sym_constant_token1] = ACTIONS(149),
    [aux_sym_number_token1] = ACTIONS(151),
    [aux_sym_record_token1] = ACTIONS(149),
    [aux_sym_record_token2] = ACTIONS(149),
    [anon_sym_USE] = ACTIONS(151),
    [anon_sym_NS] = ACTIONS(151),
    [anon_sym_DB] = ACTIONS(151),
    [anon_sym_LET] = ACTIONS(151),
    [anon_sym_BEGIN] = ACTIONS(151),
    [anon_sym_TRANSACTION] = ACTIONS(151),
    [anon_sym_CANCEL] = ACTIONS(151),
    [anon_sym_COMMIT] = ACTIONS(151),
    [anon_sym_IF] = ACTIONS(151),
    [anon_sym_ELSE] = ACTIONS(151),
    [anon_sym_THEN] = ACTIONS(151),
    [anon_sym_END] = ACTIONS(151),
    [anon_sym_SELECT] = ACTIONS(151),
    [anon_sym_FROM] = ACTIONS(151),
    [anon_sym_WHERE] = ACTIONS(151),
    [anon_sym_SPLIT] = ACTIONS(151),
    [anon_sym_AT] = ACTIONS(151),
    [anon_sym_GROUP] = ACTIONS(151),
    [anon_sym_BY] = ACTIONS(151),
    [anon_sym_ORDER] = ACTIONS(151),
    [anon_sym_COLLATE] = ACTIONS(151),
    [anon_sym_NUMERIC] = ACTIONS(151),
    [anon_sym_ASC] = ACTIONS(151),
    [anon_sym_DESC] = ACTIONS(151),
    [anon_sym_LIMIT] = ACTIONS(151),
    [anon_sym_START] = ACTIONS(151),
    [anon_sym_FETCH] = ACTIONS(151),
    [anon_sym_TIMEOUT] = ACTIONS(151),
    [anon_sym_PARALLEL] = ACTIONS(151),
    [anon_sym_INSERT] = ACTIONS(151),
    [anon_sym_IGNORE] = ACTIONS(151),
    [anon_sym_INTO] = ACTIONS(151),
    [anon_sym_VALUES] = ACTIONS(151),
    [anon_sym_ON] = ACTIONS(151),
    [anon_sym_DUPLICATE] = ACTIONS(151),
    [anon_sym_KEY] = ACTIONS(151),
    [anon_sym_UPDATE] = ACTIONS(151),
    [anon_sym_CREATE] = ACTIONS(151),
    [anon_sym_CONTENT] = ACTIONS(151),
    [anon_sym_SET] = ACTIONS(151),
    [anon_sym_RETURN] = ACTIONS(151),
    [anon_sym_BEFORE] = ACTIONS(151),
    [anon_sym_AFTER] = ACTIONS(151),
    [anon_sym_DIFF] = ACTIONS(151),
    [anon_sym_MERGE] = ACTIONS(151),
    [anon_sym_PATCH] = ACTIONS(151),
    [anon_sym_RELATE] = ACTIONS(151),
    [anon_sym_DELETE] = ACTIONS(151),
    [anon_sym_DEFINE] = ACTIONS(151),
    [anon_sym_NAMESPACE] = ACTIONS(151),
    [anon_sym_DATABASE] = ACTIONS(151),
    [anon_sym_LOGIN] = ACTIONS(151),
    [anon_sym_PASSWORD] = ACTIONS(151),
    [anon_sym_PASSHASH] = ACTIONS(151),
    [anon_sym_TOKEN] = ACTIONS(151),
    [anon_sym_SCOPE] = ACTIONS(151),
    [anon_sym_TYPE] = ACTIONS(151),
    [anon_sym_VALUE] = ACTIONS(151),
    [anon_sym_SESSION] = ACTIONS(151),
    [anon_sym_SIGNUP] = ACTIONS(151),
    [anon_sym_SIGNIN] = ACTIONS(151),
    [anon_sym_TABLE] = ACTIONS(151),
    [anon_sym_DROP] = ACTIONS(151),
    [anon_sym_SCHEMAFULL] = ACTIONS(151),
    [anon_sym_SCHEMALESS] = ACTIONS(151),
    [anon_sym_AS] = ACTIONS(151),
    [anon_sym_PERMISSIONS] = ACTIONS(151),
    [anon_sym_FULL] = ACTIONS(151),
    [anon_sym_FOR] = ACTIONS(151),
    [anon_sym_select] = ACTIONS(151),
    [anon_sym_update] = ACTIONS(151),
    [anon_sym_create] = ACTIONS(151),
    [anon_sym_delete] = ACTIONS(151),
    [anon_sym_EVENT] = ACTIONS(151),
    [anon_sym_WHEN] = ACTIONS(151),
    [anon_sym_ASSERT] = ACTIONS(151),
    [anon_sym_INDEX] = ACTIONS(151),
    [anon_sym_FIELDS] = ACTIONS(151),
    [anon_sym_COLUMNS] = ACTIONS(151),
    [anon_sym_UNIQUE] = ACTIONS(151),
    [anon_sym_REMOVE] = ACTIONS(151),
    [anon_sym_SLEEP] = ACTIONS(151),
    [anon_sym_INFO] = ACTIONS(151),
    [anon_sym_KV] = ACTIONS(151),
    [anon_sym_FUNCTION] = ACTIONS(151),
    [anon_sym_PARAM] = ACTIONS(151),
    [anon_sym_AMP_AMP] = ACTIONS(149),
    [anon_sym_AND] = ACTIONS(151),
    [anon_sym_PIPE_PIPE] = ACTIONS(149),
    [anon_sym_OR] = ACTIONS(151),
    [anon_sym_QMARK_QMARK] = ACTIONS(149),
    [anon_sym_QMARK_COLON] = ACTIONS(149),
    [anon_sym_EQ] = ACTIONS(151),
    [anon_sym_IS] = ACTIONS(151),
    [anon_sym_BANG_EQ] = ACTIONS(149),
    [anon_sym_ISNOT] = ACTIONS(149),
    [anon_sym_EQ_EQ] = ACTIONS(149),
    [anon_sym_QMARK_EQ] = ACTIONS(149),
    [anon_sym_STAR_EQ] = ACTIONS(149),
    [anon_sym_TILDE] = ACTIONS(149),
    [anon_sym_BANG_TILDE] = ACTIONS(149),
    [anon_sym_QMARK_TILDE] = ACTIONS(149),
    [anon_sym_STAR_TILDE] = ACTIONS(149),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_LT_EQ] = ACTIONS(149),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_GT_EQ] = ACTIONS(149),
    [anon_sym_PLUS] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(151),
    [anon_sym_STAR] = ACTIONS(151),
    [anon_sym_x] = ACTIONS(151),
    [anon_sym_SLASH] = ACTIONS(151),
    [anon_sym_] = ACTIONS(149),
    [anon_sym_STAR_STAR] = ACTIONS(149),
    [anon_sym_IN] = ACTIONS(151),
    [anon_sym_CONTAINS] = ACTIONS(151),
    [anon_sym_2] = ACTIONS(149),
    [anon_sym_CONTAINSNOT] = ACTIONS(151),
    [anon_sym_3] = ACTIONS(149),
    [anon_sym_CONTAINSALL] = ACTIONS(151),
    [anon_sym_4] = ACTIONS(149),
    [anon_sym_CONTAINSANY] = ACTIONS(151),
    [anon_sym_5] = ACTIONS(149),
    [anon_sym_CONTAINSNONE] = ACTIONS(151),
    [anon_sym_6] = ACTIONS(149),
    [anon_sym_INSIDE] = ACTIONS(151),
    [anon_sym_7] = ACTIONS(149),
    [anon_sym_NOTINSIDE] = ACTIONS(151),
    [anon_sym_NOTIN] = ACTIONS(149),
    [anon_sym_8] = ACTIONS(149),
    [anon_sym_ALLINSIDE] = ACTIONS(151),
    [anon_sym_9] = ACTIONS(149),
    [anon_sym_ANYINSIDE] = ACTIONS(151),
    [anon_sym_10] = ACTIONS(149),
    [anon_sym_NONEINSIDE] = ACTIONS(151),
    [anon_sym_11] = ACTIONS(149),
    [anon_sym_OUTSIDE] = ACTIONS(151),
    [anon_sym_INTERSECTS] = ACTIONS(151),
    [anon_sym_COMMA] = ACTIONS(149),
    [anon_sym_SEMI] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_RBRACK] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(149),
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_DASH_GT] = ACTIONS(149),
    [anon_sym_LT_DASH] = ACTIONS(149),
    [anon_sym_any] = ACTIONS(151),
    [anon_sym_array] = ACTIONS(151),
    [anon_sym_bool] = ACTIONS(151),
    [anon_sym_datetime] = ACTIONS(151),
    [anon_sym_decimal] = ACTIONS(151),
    [anon_sym_duration] = ACTIONS(151),
    [anon_sym_float] = ACTIONS(151),
    [anon_sym_int] = ACTIONS(151),
    [anon_sym_number] = ACTIONS(151),
    [anon_sym_object] = ACTIONS(151),
    [anon_sym_string] = ACTIONS(151),
    [anon_sym_record] = ACTIONS(151),
    [anon_sym_geometry] = ACTIONS(151),
    [anon_sym_EDDSA] = ACTIONS(151),
    [anon_sym_ES256] = ACTIONS(151),
    [anon_sym_ES384] = ACTIONS(151),
    [anon_sym_ES512] = ACTIONS(151),
    [anon_sym_HS256] = ACTIONS(151),
    [anon_sym_HS384] = ACTIONS(151),
    [anon_sym_HS512] = ACTIONS(151),
    [anon_sym_PS256] = ACTIONS(151),
    [anon_sym_PS384] = ACTIONS(151),
    [anon_sym_PS512] = ACTIONS(151),
    [anon_sym_RS256] = ACTIONS(151),
    [anon_sym_RS384] = ACTIONS(151),
    [anon_sym_RS512] = ACTIONS(151),
    [aux_sym_function_token1] = ACTIONS(149),
    [aux_sym_function_token2] = ACTIONS(149),
    [anon_sym_count] = ACTIONS(151),
    [aux_sym_function_token3] = ACTIONS(149),
    [aux_sym_function_token4] = ACTIONS(149),
    [aux_sym_function_token5] = ACTIONS(149),
    [aux_sym_function_token6] = ACTIONS(149),
    [aux_sym_function_token7] = ACTIONS(149),
    [aux_sym_function_token8] = ACTIONS(149),
    [aux_sym_function_token9] = ACTIONS(149),
    [aux_sym_function_token10] = ACTIONS(151),
    [aux_sym_function_token11] = ACTIONS(149),
    [aux_sym_function_token12] = ACTIONS(151),
    [aux_sym_function_token13] = ACTIONS(149),
    [aux_sym_function_token14] = ACTIONS(149),
    [aux_sym_function_token15] = ACTIONS(149),
    [aux_sym_function_token16] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(151),
    [anon_sym_TRUE] = ACTIONS(151),
    [anon_sym_FALSE] = ACTIONS(151),
    [anon_sym_null] = ACTIONS(151),
    [anon_sym_NULL] = ACTIONS(151),
    [anon_sym_none] = ACTIONS(151),
    [anon_sym_NONE] = ACTIONS(151),
    [sym_variable] = ACTIONS(149),
    [sym_comment] = ACTIONS(149),
    [anon_sym_SQUOTE] = ACTIONS(149),
    [anon_sym_DQUOTE] = ACTIONS(149),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [aux_sym_future_token1] = ACTIONS(153),
    [aux_sym_casting_token1] = ACTIONS(153),
    [aux_sym_property_token1] = ACTIONS(155),
    [aux_sym_identifier_token1] = ACTIONS(155),
    [aux_sym_duration_token1] = ACTIONS(155),
    [aux_sym_constant_token1] = ACTIONS(153),
    [aux_sym_number_token1] = ACTIONS(155),
    [aux_sym_record_token1] = ACTIONS(153),
    [aux_sym_record_token2] = ACTIONS(153),
    [anon_sym_USE] = ACTIONS(155),
    [anon_sym_NS] = ACTIONS(155),
    [anon_sym_DB] = ACTIONS(155),
    [anon_sym_LET] = ACTIONS(155),
    [anon_sym_BEGIN] = ACTIONS(155),
    [anon_sym_TRANSACTION] = ACTIONS(155),
    [anon_sym_CANCEL] = ACTIONS(155),
    [anon_sym_COMMIT] = ACTIONS(155),
    [anon_sym_IF] = ACTIONS(155),
    [anon_sym_ELSE] = ACTIONS(155),
    [anon_sym_THEN] = ACTIONS(155),
    [anon_sym_END] = ACTIONS(155),
    [anon_sym_SELECT] = ACTIONS(155),
    [anon_sym_FROM] = ACTIONS(155),
    [anon_sym_WHERE] = ACTIONS(155),
    [anon_sym_SPLIT] = ACTIONS(155),
    [anon_sym_AT] = ACTIONS(155),
    [anon_sym_GROUP] = ACTIONS(155),
    [anon_sym_BY] = ACTIONS(155),
    [anon_sym_ORDER] = ACTIONS(155),
    [anon_sym_COLLATE] = ACTIONS(155),
    [anon_sym_NUMERIC] = ACTIONS(155),
    [anon_sym_ASC] = ACTIONS(155),
    [anon_sym_DESC] = ACTIONS(155),
    [anon_sym_LIMIT] = ACTIONS(155),
    [anon_sym_START] = ACTIONS(155),
    [anon_sym_FETCH] = ACTIONS(155),
    [anon_sym_TIMEOUT] = ACTIONS(155),
    [anon_sym_PARALLEL] = ACTIONS(155),
    [anon_sym_INSERT] = ACTIONS(155),
    [anon_sym_IGNORE] = ACTIONS(155),
    [anon_sym_INTO] = ACTIONS(155),
    [anon_sym_VALUES] = ACTIONS(155),
    [anon_sym_ON] = ACTIONS(155),
    [anon_sym_DUPLICATE] = ACTIONS(155),
    [anon_sym_KEY] = ACTIONS(155),
    [anon_sym_UPDATE] = ACTIONS(155),
    [anon_sym_CREATE] = ACTIONS(155),
    [anon_sym_CONTENT] = ACTIONS(155),
    [anon_sym_SET] = ACTIONS(155),
    [anon_sym_RETURN] = ACTIONS(155),
    [anon_sym_BEFORE] = ACTIONS(155),
    [anon_sym_AFTER] = ACTIONS(155),
    [anon_sym_DIFF] = ACTIONS(155),
    [anon_sym_MERGE] = ACTIONS(155),
    [anon_sym_PATCH] = ACTIONS(155),
    [anon_sym_RELATE] = ACTIONS(155),
    [anon_sym_DELETE] = ACTIONS(155),
    [anon_sym_DEFINE] = ACTIONS(155),
    [anon_sym_NAMESPACE] = ACTIONS(155),
    [anon_sym_DATABASE] = ACTIONS(155),
    [anon_sym_LOGIN] = ACTIONS(155),
    [anon_sym_PASSWORD] = ACTIONS(155),
    [anon_sym_PASSHASH] = ACTIONS(155),
    [anon_sym_TOKEN] = ACTIONS(155),
    [anon_sym_SCOPE] = ACTIONS(155),
    [anon_sym_TYPE] = ACTIONS(155),
    [anon_sym_VALUE] = ACTIONS(155),
    [anon_sym_SESSION] = ACTIONS(155),
    [anon_sym_SIGNUP] = ACTIONS(155),
    [anon_sym_SIGNIN] = ACTIONS(155),
    [anon_sym_TABLE] = ACTIONS(155),
    [anon_sym_DROP] = ACTIONS(155),
    [anon_sym_SCHEMAFULL] = ACTIONS(155),
    [anon_sym_SCHEMALESS] = ACTIONS(155),
    [anon_sym_AS] = ACTIONS(155),
    [anon_sym_PERMISSIONS] = ACTIONS(155),
    [anon_sym_FULL] = ACTIONS(155),
    [anon_sym_FOR] = ACTIONS(155),
    [anon_sym_select] = ACTIONS(155),
    [anon_sym_update] = ACTIONS(155),
    [anon_sym_create] = ACTIONS(155),
    [anon_sym_delete] = ACTIONS(155),
    [anon_sym_EVENT] = ACTIONS(155),
    [anon_sym_WHEN] = ACTIONS(155),
    [anon_sym_ASSERT] = ACTIONS(155),
    [anon_sym_INDEX] = ACTIONS(155),
    [anon_sym_FIELDS] = ACTIONS(155),
    [anon_sym_COLUMNS] = ACTIONS(155),
    [anon_sym_UNIQUE] = ACTIONS(155),
    [anon_sym_REMOVE] = ACTIONS(155),
    [anon_sym_SLEEP] = ACTIONS(155),
    [anon_sym_INFO] = ACTIONS(155),
    [anon_sym_KV] = ACTIONS(155),
    [anon_sym_FUNCTION] = ACTIONS(155),
    [anon_sym_PARAM] = ACTIONS(155),
    [anon_sym_AMP_AMP] = ACTIONS(153),
    [anon_sym_AND] = ACTIONS(155),
    [anon_sym_PIPE_PIPE] = ACTIONS(153),
    [anon_sym_OR] = ACTIONS(155),
    [anon_sym_QMARK_QMARK] = ACTIONS(153),
    [anon_sym_QMARK_COLON] = ACTIONS(153),
    [anon_sym_EQ] = ACTIONS(155),
    [anon_sym_IS] = ACTIONS(155),
    [anon_sym_BANG_EQ] = ACTIONS(153),
    [anon_sym_ISNOT] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(153),
    [anon_sym_QMARK_EQ] = ACTIONS(153),
    [anon_sym_STAR_EQ] = ACTIONS(153),
    [anon_sym_TILDE] = ACTIONS(153),
    [anon_sym_BANG_TILDE] = ACTIONS(153),
    [anon_sym_QMARK_TILDE] = ACTIONS(153),
    [anon_sym_STAR_TILDE] = ACTIONS(153),
    [anon_sym_LT] = ACTIONS(155),
    [anon_sym_LT_EQ] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(155),
    [anon_sym_GT_EQ] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(155),
    [anon_sym_STAR] = ACTIONS(155),
    [anon_sym_x] = ACTIONS(155),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_] = ACTIONS(153),
    [anon_sym_STAR_STAR] = ACTIONS(153),
    [anon_sym_IN] = ACTIONS(155),
    [anon_sym_CONTAINS] = ACTIONS(155),
    [anon_sym_2] = ACTIONS(153),
    [anon_sym_CONTAINSNOT] = ACTIONS(155),
    [anon_sym_3] = ACTIONS(153),
    [anon_sym_CONTAINSALL] = ACTIONS(155),
    [anon_sym_4] = ACTIONS(153),
    [anon_sym_CONTAINSANY] = ACTIONS(155),
    [anon_sym_5] = ACTIONS(153),
    [anon_sym_CONTAINSNONE] = ACTIONS(155),
    [anon_sym_6] = ACTIONS(153),
    [anon_sym_INSIDE] = ACTIONS(155),
    [anon_sym_7] = ACTIONS(153),
    [anon_sym_NOTINSIDE] = ACTIONS(155),
    [anon_sym_NOTIN] = ACTIONS(153),
    [anon_sym_8] = ACTIONS(153),
    [anon_sym_ALLINSIDE] = ACTIONS(155),
    [anon_sym_9] = ACTIONS(153),
    [anon_sym_ANYINSIDE] = ACTIONS(155),
    [anon_sym_10] = ACTIONS(153),
    [anon_sym_NONEINSIDE] = ACTIONS(155),
    [anon_sym_11] = ACTIONS(153),
    [anon_sym_OUTSIDE] = ACTIONS(155),
    [anon_sym_INTERSECTS] = ACTIONS(155),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_SEMI] = ACTIONS(153),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_RPAREN] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(153),
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_DASH_GT] = ACTIONS(153),
    [anon_sym_LT_DASH] = ACTIONS(153),
    [anon_sym_any] = ACTIONS(155),
    [anon_sym_array] = ACTIONS(155),
    [anon_sym_bool] = ACTIONS(155),
    [anon_sym_datetime] = ACTIONS(155),
    [anon_sym_decimal] = ACTIONS(155),
    [anon_sym_duration] = ACTIONS(155),
    [anon_sym_float] = ACTIONS(155),
    [anon_sym_int] = ACTIONS(155),
    [anon_sym_number] = ACTIONS(155),
    [anon_sym_object] = ACTIONS(155),
    [anon_sym_string] = ACTIONS(155),
    [anon_sym_record] = ACTIONS(155),
    [anon_sym_geometry] = ACTIONS(155),
    [anon_sym_EDDSA] = ACTIONS(155),
    [anon_sym_ES256] = ACTIONS(155),
    [anon_sym_ES384] = ACTIONS(155),
    [anon_sym_ES512] = ACTIONS(155),
    [anon_sym_HS256] = ACTIONS(155),
    [anon_sym_HS384] = ACTIONS(155),
    [anon_sym_HS512] = ACTIONS(155),
    [anon_sym_PS256] = ACTIONS(155),
    [anon_sym_PS384] = ACTIONS(155),
    [anon_sym_PS512] = ACTIONS(155),
    [anon_sym_RS256] = ACTIONS(155),
    [anon_sym_RS384] = ACTIONS(155),
    [anon_sym_RS512] = ACTIONS(155),
    [aux_sym_function_token1] = ACTIONS(153),
    [aux_sym_function_token2] = ACTIONS(153),
    [anon_sym_count] = ACTIONS(155),
    [aux_sym_function_token3] = ACTIONS(153),
    [aux_sym_function_token4] = ACTIONS(153),
    [aux_sym_function_token5] = ACTIONS(153),
    [aux_sym_function_token6] = ACTIONS(153),
    [aux_sym_function_token7] = ACTIONS(153),
    [aux_sym_function_token8] = ACTIONS(153),
    [aux_sym_function_token9] = ACTIONS(153),
    [aux_sym_function_token10] = ACTIONS(155),
    [aux_sym_function_token11] = ACTIONS(153),
    [aux_sym_function_token12] = ACTIONS(155),
    [aux_sym_function_token13] = ACTIONS(153),
    [aux_sym_function_token14] = ACTIONS(153),
    [aux_sym_function_token15] = ACTIONS(153),
    [aux_sym_function_token16] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(155),
    [anon_sym_false] = ACTIONS(155),
    [anon_sym_TRUE] = ACTIONS(155),
    [anon_sym_FALSE] = ACTIONS(155),
    [anon_sym_null] = ACTIONS(155),
    [anon_sym_NULL] = ACTIONS(155),
    [anon_sym_none] = ACTIONS(155),
    [anon_sym_NONE] = ACTIONS(155),
    [sym_variable] = ACTIONS(153),
    [sym_comment] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(153),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [aux_sym_future_token1] = ACTIONS(157),
    [aux_sym_casting_token1] = ACTIONS(157),
    [aux_sym_property_token1] = ACTIONS(159),
    [aux_sym_identifier_token1] = ACTIONS(159),
    [aux_sym_duration_token1] = ACTIONS(159),
    [aux_sym_constant_token1] = ACTIONS(157),
    [aux_sym_number_token1] = ACTIONS(159),
    [aux_sym_record_token1] = ACTIONS(157),
    [aux_sym_record_token2] = ACTIONS(157),
    [anon_sym_USE] = ACTIONS(159),
    [anon_sym_NS] = ACTIONS(159),
    [anon_sym_DB] = ACTIONS(159),
    [anon_sym_LET] = ACTIONS(159),
    [anon_sym_BEGIN] = ACTIONS(159),
    [anon_sym_TRANSACTION] = ACTIONS(159),
    [anon_sym_CANCEL] = ACTIONS(159),
    [anon_sym_COMMIT] = ACTIONS(159),
    [anon_sym_IF] = ACTIONS(159),
    [anon_sym_ELSE] = ACTIONS(159),
    [anon_sym_THEN] = ACTIONS(159),
    [anon_sym_END] = ACTIONS(159),
    [anon_sym_SELECT] = ACTIONS(159),
    [anon_sym_FROM] = ACTIONS(159),
    [anon_sym_WHERE] = ACTIONS(159),
    [anon_sym_SPLIT] = ACTIONS(159),
    [anon_sym_AT] = ACTIONS(159),
    [anon_sym_GROUP] = ACTIONS(159),
    [anon_sym_BY] = ACTIONS(159),
    [anon_sym_ORDER] = ACTIONS(159),
    [anon_sym_COLLATE] = ACTIONS(159),
    [anon_sym_NUMERIC] = ACTIONS(159),
    [anon_sym_ASC] = ACTIONS(159),
    [anon_sym_DESC] = ACTIONS(159),
    [anon_sym_LIMIT] = ACTIONS(159),
    [anon_sym_START] = ACTIONS(159),
    [anon_sym_FETCH] = ACTIONS(159),
    [anon_sym_TIMEOUT] = ACTIONS(159),
    [anon_sym_PARALLEL] = ACTIONS(159),
    [anon_sym_INSERT] = ACTIONS(159),
    [anon_sym_IGNORE] = ACTIONS(159),
    [anon_sym_INTO] = ACTIONS(159),
    [anon_sym_VALUES] = ACTIONS(159),
    [anon_sym_ON] = ACTIONS(159),
    [anon_sym_DUPLICATE] = ACTIONS(159),
    [anon_sym_KEY] = ACTIONS(159),
    [anon_sym_UPDATE] = ACTIONS(159),
    [anon_sym_CREATE] = ACTIONS(159),
    [anon_sym_CONTENT] = ACTIONS(159),
    [anon_sym_SET] = ACTIONS(159),
    [anon_sym_RETURN] = ACTIONS(159),
    [anon_sym_BEFORE] = ACTIONS(159),
    [anon_sym_AFTER] = ACTIONS(159),
    [anon_sym_DIFF] = ACTIONS(159),
    [anon_sym_MERGE] = ACTIONS(159),
    [anon_sym_PATCH] = ACTIONS(159),
    [anon_sym_RELATE] = ACTIONS(159),
    [anon_sym_DELETE] = ACTIONS(159),
    [anon_sym_DEFINE] = ACTIONS(159),
    [anon_sym_NAMESPACE] = ACTIONS(159),
    [anon_sym_DATABASE] = ACTIONS(159),
    [anon_sym_LOGIN] = ACTIONS(159),
    [anon_sym_PASSWORD] = ACTIONS(159),
    [anon_sym_PASSHASH] = ACTIONS(159),
    [anon_sym_TOKEN] = ACTIONS(159),
    [anon_sym_SCOPE] = ACTIONS(159),
    [anon_sym_TYPE] = ACTIONS(159),
    [anon_sym_VALUE] = ACTIONS(159),
    [anon_sym_SESSION] = ACTIONS(159),
    [anon_sym_SIGNUP] = ACTIONS(159),
    [anon_sym_SIGNIN] = ACTIONS(159),
    [anon_sym_TABLE] = ACTIONS(159),
    [anon_sym_DROP] = ACTIONS(159),
    [anon_sym_SCHEMAFULL] = ACTIONS(159),
    [anon_sym_SCHEMALESS] = ACTIONS(159),
    [anon_sym_AS] = ACTIONS(159),
    [anon_sym_PERMISSIONS] = ACTIONS(159),
    [anon_sym_FULL] = ACTIONS(159),
    [anon_sym_FOR] = ACTIONS(159),
    [anon_sym_select] = ACTIONS(159),
    [anon_sym_update] = ACTIONS(159),
    [anon_sym_create] = ACTIONS(159),
    [anon_sym_delete] = ACTIONS(159),
    [anon_sym_EVENT] = ACTIONS(159),
    [anon_sym_WHEN] = ACTIONS(159),
    [anon_sym_ASSERT] = ACTIONS(159),
    [anon_sym_INDEX] = ACTIONS(159),
    [anon_sym_FIELDS] = ACTIONS(159),
    [anon_sym_COLUMNS] = ACTIONS(159),
    [anon_sym_UNIQUE] = ACTIONS(159),
    [anon_sym_REMOVE] = ACTIONS(159),
    [anon_sym_SLEEP] = ACTIONS(159),
    [anon_sym_INFO] = ACTIONS(159),
    [anon_sym_KV] = ACTIONS(159),
    [anon_sym_FUNCTION] = ACTIONS(159),
    [anon_sym_PARAM] = ACTIONS(159),
    [anon_sym_AMP_AMP] = ACTIONS(157),
    [anon_sym_AND] = ACTIONS(159),
    [anon_sym_PIPE_PIPE] = ACTIONS(157),
    [anon_sym_OR] = ACTIONS(159),
    [anon_sym_QMARK_QMARK] = ACTIONS(157),
    [anon_sym_QMARK_COLON] = ACTIONS(157),
    [anon_sym_EQ] = ACTIONS(159),
    [anon_sym_IS] = ACTIONS(159),
    [anon_sym_BANG_EQ] = ACTIONS(157),
    [anon_sym_ISNOT] = ACTIONS(157),
    [anon_sym_EQ_EQ] = ACTIONS(157),
    [anon_sym_QMARK_EQ] = ACTIONS(157),
    [anon_sym_STAR_EQ] = ACTIONS(157),
    [anon_sym_TILDE] = ACTIONS(157),
    [anon_sym_BANG_TILDE] = ACTIONS(157),
    [anon_sym_QMARK_TILDE] = ACTIONS(157),
    [anon_sym_STAR_TILDE] = ACTIONS(157),
    [anon_sym_LT] = ACTIONS(159),
    [anon_sym_LT_EQ] = ACTIONS(157),
    [anon_sym_GT] = ACTIONS(159),
    [anon_sym_GT_EQ] = ACTIONS(157),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_DASH] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(159),
    [anon_sym_x] = ACTIONS(159),
    [anon_sym_SLASH] = ACTIONS(159),
    [anon_sym_] = ACTIONS(157),
    [anon_sym_STAR_STAR] = ACTIONS(157),
    [anon_sym_IN] = ACTIONS(159),
    [anon_sym_CONTAINS] = ACTIONS(159),
    [anon_sym_2] = ACTIONS(157),
    [anon_sym_CONTAINSNOT] = ACTIONS(159),
    [anon_sym_3] = ACTIONS(157),
    [anon_sym_CONTAINSALL] = ACTIONS(159),
    [anon_sym_4] = ACTIONS(157),
    [anon_sym_CONTAINSANY] = ACTIONS(159),
    [anon_sym_5] = ACTIONS(157),
    [anon_sym_CONTAINSNONE] = ACTIONS(159),
    [anon_sym_6] = ACTIONS(157),
    [anon_sym_INSIDE] = ACTIONS(159),
    [anon_sym_7] = ACTIONS(157),
    [anon_sym_NOTINSIDE] = ACTIONS(159),
    [anon_sym_NOTIN] = ACTIONS(157),
    [anon_sym_8] = ACTIONS(157),
    [anon_sym_ALLINSIDE] = ACTIONS(159),
    [anon_sym_9] = ACTIONS(157),
    [anon_sym_ANYINSIDE] = ACTIONS(159),
    [anon_sym_10] = ACTIONS(157),
    [anon_sym_NONEINSIDE] = ACTIONS(159),
    [anon_sym_11] = ACTIONS(157),
    [anon_sym_OUTSIDE] = ACTIONS(159),
    [anon_sym_INTERSECTS] = ACTIONS(159),
    [anon_sym_COMMA] = ACTIONS(157),
    [anon_sym_SEMI] = ACTIONS(157),
    [anon_sym_COLON] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(157),
    [anon_sym_RPAREN] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(157),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_RBRACE] = ACTIONS(157),
    [anon_sym_DASH_GT] = ACTIONS(157),
    [anon_sym_LT_DASH] = ACTIONS(157),
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
    [anon_sym_EDDSA] = ACTIONS(159),
    [anon_sym_ES256] = ACTIONS(159),
    [anon_sym_ES384] = ACTIONS(159),
    [anon_sym_ES512] = ACTIONS(159),
    [anon_sym_HS256] = ACTIONS(159),
    [anon_sym_HS384] = ACTIONS(159),
    [anon_sym_HS512] = ACTIONS(159),
    [anon_sym_PS256] = ACTIONS(159),
    [anon_sym_PS384] = ACTIONS(159),
    [anon_sym_PS512] = ACTIONS(159),
    [anon_sym_RS256] = ACTIONS(159),
    [anon_sym_RS384] = ACTIONS(159),
    [anon_sym_RS512] = ACTIONS(159),
    [aux_sym_function_token1] = ACTIONS(157),
    [aux_sym_function_token2] = ACTIONS(157),
    [anon_sym_count] = ACTIONS(159),
    [aux_sym_function_token3] = ACTIONS(157),
    [aux_sym_function_token4] = ACTIONS(157),
    [aux_sym_function_token5] = ACTIONS(157),
    [aux_sym_function_token6] = ACTIONS(157),
    [aux_sym_function_token7] = ACTIONS(157),
    [aux_sym_function_token8] = ACTIONS(157),
    [aux_sym_function_token9] = ACTIONS(157),
    [aux_sym_function_token10] = ACTIONS(159),
    [aux_sym_function_token11] = ACTIONS(157),
    [aux_sym_function_token12] = ACTIONS(159),
    [aux_sym_function_token13] = ACTIONS(157),
    [aux_sym_function_token14] = ACTIONS(157),
    [aux_sym_function_token15] = ACTIONS(157),
    [aux_sym_function_token16] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(159),
    [anon_sym_false] = ACTIONS(159),
    [anon_sym_TRUE] = ACTIONS(159),
    [anon_sym_FALSE] = ACTIONS(159),
    [anon_sym_null] = ACTIONS(159),
    [anon_sym_NULL] = ACTIONS(159),
    [anon_sym_none] = ACTIONS(159),
    [anon_sym_NONE] = ACTIONS(159),
    [sym_variable] = ACTIONS(157),
    [sym_comment] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(157),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [aux_sym_future_token1] = ACTIONS(161),
    [aux_sym_casting_token1] = ACTIONS(161),
    [aux_sym_property_token1] = ACTIONS(163),
    [aux_sym_identifier_token1] = ACTIONS(163),
    [aux_sym_duration_token1] = ACTIONS(163),
    [aux_sym_constant_token1] = ACTIONS(161),
    [aux_sym_number_token1] = ACTIONS(163),
    [aux_sym_record_token1] = ACTIONS(161),
    [aux_sym_record_token2] = ACTIONS(161),
    [anon_sym_USE] = ACTIONS(163),
    [anon_sym_NS] = ACTIONS(163),
    [anon_sym_DB] = ACTIONS(163),
    [anon_sym_LET] = ACTIONS(163),
    [anon_sym_BEGIN] = ACTIONS(163),
    [anon_sym_TRANSACTION] = ACTIONS(163),
    [anon_sym_CANCEL] = ACTIONS(163),
    [anon_sym_COMMIT] = ACTIONS(163),
    [anon_sym_IF] = ACTIONS(163),
    [anon_sym_ELSE] = ACTIONS(163),
    [anon_sym_THEN] = ACTIONS(163),
    [anon_sym_END] = ACTIONS(163),
    [anon_sym_SELECT] = ACTIONS(163),
    [anon_sym_FROM] = ACTIONS(163),
    [anon_sym_WHERE] = ACTIONS(163),
    [anon_sym_SPLIT] = ACTIONS(163),
    [anon_sym_AT] = ACTIONS(163),
    [anon_sym_GROUP] = ACTIONS(163),
    [anon_sym_BY] = ACTIONS(163),
    [anon_sym_ORDER] = ACTIONS(163),
    [anon_sym_COLLATE] = ACTIONS(163),
    [anon_sym_NUMERIC] = ACTIONS(163),
    [anon_sym_ASC] = ACTIONS(163),
    [anon_sym_DESC] = ACTIONS(163),
    [anon_sym_LIMIT] = ACTIONS(163),
    [anon_sym_START] = ACTIONS(163),
    [anon_sym_FETCH] = ACTIONS(163),
    [anon_sym_TIMEOUT] = ACTIONS(163),
    [anon_sym_PARALLEL] = ACTIONS(163),
    [anon_sym_INSERT] = ACTIONS(163),
    [anon_sym_IGNORE] = ACTIONS(163),
    [anon_sym_INTO] = ACTIONS(163),
    [anon_sym_VALUES] = ACTIONS(163),
    [anon_sym_ON] = ACTIONS(163),
    [anon_sym_DUPLICATE] = ACTIONS(163),
    [anon_sym_KEY] = ACTIONS(163),
    [anon_sym_UPDATE] = ACTIONS(163),
    [anon_sym_CREATE] = ACTIONS(163),
    [anon_sym_CONTENT] = ACTIONS(163),
    [anon_sym_SET] = ACTIONS(163),
    [anon_sym_RETURN] = ACTIONS(163),
    [anon_sym_BEFORE] = ACTIONS(163),
    [anon_sym_AFTER] = ACTIONS(163),
    [anon_sym_DIFF] = ACTIONS(163),
    [anon_sym_MERGE] = ACTIONS(163),
    [anon_sym_PATCH] = ACTIONS(163),
    [anon_sym_RELATE] = ACTIONS(163),
    [anon_sym_DELETE] = ACTIONS(163),
    [anon_sym_DEFINE] = ACTIONS(163),
    [anon_sym_NAMESPACE] = ACTIONS(163),
    [anon_sym_DATABASE] = ACTIONS(163),
    [anon_sym_LOGIN] = ACTIONS(163),
    [anon_sym_PASSWORD] = ACTIONS(163),
    [anon_sym_PASSHASH] = ACTIONS(163),
    [anon_sym_TOKEN] = ACTIONS(163),
    [anon_sym_SCOPE] = ACTIONS(163),
    [anon_sym_TYPE] = ACTIONS(163),
    [anon_sym_VALUE] = ACTIONS(163),
    [anon_sym_SESSION] = ACTIONS(163),
    [anon_sym_SIGNUP] = ACTIONS(163),
    [anon_sym_SIGNIN] = ACTIONS(163),
    [anon_sym_TABLE] = ACTIONS(163),
    [anon_sym_DROP] = ACTIONS(163),
    [anon_sym_SCHEMAFULL] = ACTIONS(163),
    [anon_sym_SCHEMALESS] = ACTIONS(163),
    [anon_sym_AS] = ACTIONS(163),
    [anon_sym_PERMISSIONS] = ACTIONS(163),
    [anon_sym_FULL] = ACTIONS(163),
    [anon_sym_FOR] = ACTIONS(163),
    [anon_sym_select] = ACTIONS(163),
    [anon_sym_update] = ACTIONS(163),
    [anon_sym_create] = ACTIONS(163),
    [anon_sym_delete] = ACTIONS(163),
    [anon_sym_EVENT] = ACTIONS(163),
    [anon_sym_WHEN] = ACTIONS(163),
    [anon_sym_ASSERT] = ACTIONS(163),
    [anon_sym_INDEX] = ACTIONS(163),
    [anon_sym_FIELDS] = ACTIONS(163),
    [anon_sym_COLUMNS] = ACTIONS(163),
    [anon_sym_UNIQUE] = ACTIONS(163),
    [anon_sym_REMOVE] = ACTIONS(163),
    [anon_sym_SLEEP] = ACTIONS(163),
    [anon_sym_INFO] = ACTIONS(163),
    [anon_sym_KV] = ACTIONS(163),
    [anon_sym_FUNCTION] = ACTIONS(163),
    [anon_sym_PARAM] = ACTIONS(163),
    [anon_sym_AMP_AMP] = ACTIONS(161),
    [anon_sym_AND] = ACTIONS(163),
    [anon_sym_PIPE_PIPE] = ACTIONS(161),
    [anon_sym_OR] = ACTIONS(163),
    [anon_sym_QMARK_QMARK] = ACTIONS(161),
    [anon_sym_QMARK_COLON] = ACTIONS(161),
    [anon_sym_EQ] = ACTIONS(163),
    [anon_sym_IS] = ACTIONS(163),
    [anon_sym_BANG_EQ] = ACTIONS(161),
    [anon_sym_ISNOT] = ACTIONS(161),
    [anon_sym_EQ_EQ] = ACTIONS(161),
    [anon_sym_QMARK_EQ] = ACTIONS(161),
    [anon_sym_STAR_EQ] = ACTIONS(161),
    [anon_sym_TILDE] = ACTIONS(161),
    [anon_sym_BANG_TILDE] = ACTIONS(161),
    [anon_sym_QMARK_TILDE] = ACTIONS(161),
    [anon_sym_STAR_TILDE] = ACTIONS(161),
    [anon_sym_LT] = ACTIONS(163),
    [anon_sym_LT_EQ] = ACTIONS(161),
    [anon_sym_GT] = ACTIONS(163),
    [anon_sym_GT_EQ] = ACTIONS(161),
    [anon_sym_PLUS] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(163),
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_x] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(163),
    [anon_sym_] = ACTIONS(161),
    [anon_sym_STAR_STAR] = ACTIONS(161),
    [anon_sym_IN] = ACTIONS(163),
    [anon_sym_CONTAINS] = ACTIONS(163),
    [anon_sym_2] = ACTIONS(161),
    [anon_sym_CONTAINSNOT] = ACTIONS(163),
    [anon_sym_3] = ACTIONS(161),
    [anon_sym_CONTAINSALL] = ACTIONS(163),
    [anon_sym_4] = ACTIONS(161),
    [anon_sym_CONTAINSANY] = ACTIONS(163),
    [anon_sym_5] = ACTIONS(161),
    [anon_sym_CONTAINSNONE] = ACTIONS(163),
    [anon_sym_6] = ACTIONS(161),
    [anon_sym_INSIDE] = ACTIONS(163),
    [anon_sym_7] = ACTIONS(161),
    [anon_sym_NOTINSIDE] = ACTIONS(163),
    [anon_sym_NOTIN] = ACTIONS(161),
    [anon_sym_8] = ACTIONS(161),
    [anon_sym_ALLINSIDE] = ACTIONS(163),
    [anon_sym_9] = ACTIONS(161),
    [anon_sym_ANYINSIDE] = ACTIONS(163),
    [anon_sym_10] = ACTIONS(161),
    [anon_sym_NONEINSIDE] = ACTIONS(163),
    [anon_sym_11] = ACTIONS(161),
    [anon_sym_OUTSIDE] = ACTIONS(163),
    [anon_sym_INTERSECTS] = ACTIONS(163),
    [anon_sym_COMMA] = ACTIONS(161),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_COLON] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_RPAREN] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_RBRACK] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(161),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_DASH_GT] = ACTIONS(161),
    [anon_sym_LT_DASH] = ACTIONS(161),
    [anon_sym_any] = ACTIONS(163),
    [anon_sym_array] = ACTIONS(163),
    [anon_sym_bool] = ACTIONS(163),
    [anon_sym_datetime] = ACTIONS(163),
    [anon_sym_decimal] = ACTIONS(163),
    [anon_sym_duration] = ACTIONS(163),
    [anon_sym_float] = ACTIONS(163),
    [anon_sym_int] = ACTIONS(163),
    [anon_sym_number] = ACTIONS(163),
    [anon_sym_object] = ACTIONS(163),
    [anon_sym_string] = ACTIONS(163),
    [anon_sym_record] = ACTIONS(163),
    [anon_sym_geometry] = ACTIONS(163),
    [anon_sym_EDDSA] = ACTIONS(163),
    [anon_sym_ES256] = ACTIONS(163),
    [anon_sym_ES384] = ACTIONS(163),
    [anon_sym_ES512] = ACTIONS(163),
    [anon_sym_HS256] = ACTIONS(163),
    [anon_sym_HS384] = ACTIONS(163),
    [anon_sym_HS512] = ACTIONS(163),
    [anon_sym_PS256] = ACTIONS(163),
    [anon_sym_PS384] = ACTIONS(163),
    [anon_sym_PS512] = ACTIONS(163),
    [anon_sym_RS256] = ACTIONS(163),
    [anon_sym_RS384] = ACTIONS(163),
    [anon_sym_RS512] = ACTIONS(163),
    [aux_sym_function_token1] = ACTIONS(161),
    [aux_sym_function_token2] = ACTIONS(161),
    [anon_sym_count] = ACTIONS(163),
    [aux_sym_function_token3] = ACTIONS(161),
    [aux_sym_function_token4] = ACTIONS(161),
    [aux_sym_function_token5] = ACTIONS(161),
    [aux_sym_function_token6] = ACTIONS(161),
    [aux_sym_function_token7] = ACTIONS(161),
    [aux_sym_function_token8] = ACTIONS(161),
    [aux_sym_function_token9] = ACTIONS(161),
    [aux_sym_function_token10] = ACTIONS(163),
    [aux_sym_function_token11] = ACTIONS(161),
    [aux_sym_function_token12] = ACTIONS(163),
    [aux_sym_function_token13] = ACTIONS(161),
    [aux_sym_function_token14] = ACTIONS(161),
    [aux_sym_function_token15] = ACTIONS(161),
    [aux_sym_function_token16] = ACTIONS(163),
    [anon_sym_true] = ACTIONS(163),
    [anon_sym_false] = ACTIONS(163),
    [anon_sym_TRUE] = ACTIONS(163),
    [anon_sym_FALSE] = ACTIONS(163),
    [anon_sym_null] = ACTIONS(163),
    [anon_sym_NULL] = ACTIONS(163),
    [anon_sym_none] = ACTIONS(163),
    [anon_sym_NONE] = ACTIONS(163),
    [sym_variable] = ACTIONS(161),
    [sym_comment] = ACTIONS(161),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(161),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [aux_sym_future_token1] = ACTIONS(165),
    [aux_sym_casting_token1] = ACTIONS(165),
    [aux_sym_property_token1] = ACTIONS(167),
    [aux_sym_identifier_token1] = ACTIONS(167),
    [aux_sym_duration_token1] = ACTIONS(167),
    [aux_sym_constant_token1] = ACTIONS(165),
    [aux_sym_number_token1] = ACTIONS(167),
    [aux_sym_record_token1] = ACTIONS(165),
    [aux_sym_record_token2] = ACTIONS(165),
    [anon_sym_USE] = ACTIONS(167),
    [anon_sym_NS] = ACTIONS(167),
    [anon_sym_DB] = ACTIONS(167),
    [anon_sym_LET] = ACTIONS(167),
    [anon_sym_BEGIN] = ACTIONS(167),
    [anon_sym_TRANSACTION] = ACTIONS(167),
    [anon_sym_CANCEL] = ACTIONS(167),
    [anon_sym_COMMIT] = ACTIONS(167),
    [anon_sym_IF] = ACTIONS(167),
    [anon_sym_ELSE] = ACTIONS(167),
    [anon_sym_THEN] = ACTIONS(167),
    [anon_sym_END] = ACTIONS(167),
    [anon_sym_SELECT] = ACTIONS(167),
    [anon_sym_FROM] = ACTIONS(167),
    [anon_sym_WHERE] = ACTIONS(167),
    [anon_sym_SPLIT] = ACTIONS(167),
    [anon_sym_AT] = ACTIONS(167),
    [anon_sym_GROUP] = ACTIONS(167),
    [anon_sym_BY] = ACTIONS(167),
    [anon_sym_ORDER] = ACTIONS(167),
    [anon_sym_COLLATE] = ACTIONS(167),
    [anon_sym_NUMERIC] = ACTIONS(167),
    [anon_sym_ASC] = ACTIONS(167),
    [anon_sym_DESC] = ACTIONS(167),
    [anon_sym_LIMIT] = ACTIONS(167),
    [anon_sym_START] = ACTIONS(167),
    [anon_sym_FETCH] = ACTIONS(167),
    [anon_sym_TIMEOUT] = ACTIONS(167),
    [anon_sym_PARALLEL] = ACTIONS(167),
    [anon_sym_INSERT] = ACTIONS(167),
    [anon_sym_IGNORE] = ACTIONS(167),
    [anon_sym_INTO] = ACTIONS(167),
    [anon_sym_VALUES] = ACTIONS(167),
    [anon_sym_ON] = ACTIONS(167),
    [anon_sym_DUPLICATE] = ACTIONS(167),
    [anon_sym_KEY] = ACTIONS(167),
    [anon_sym_UPDATE] = ACTIONS(167),
    [anon_sym_CREATE] = ACTIONS(167),
    [anon_sym_CONTENT] = ACTIONS(167),
    [anon_sym_SET] = ACTIONS(167),
    [anon_sym_RETURN] = ACTIONS(167),
    [anon_sym_BEFORE] = ACTIONS(167),
    [anon_sym_AFTER] = ACTIONS(167),
    [anon_sym_DIFF] = ACTIONS(167),
    [anon_sym_MERGE] = ACTIONS(167),
    [anon_sym_PATCH] = ACTIONS(167),
    [anon_sym_RELATE] = ACTIONS(167),
    [anon_sym_DELETE] = ACTIONS(167),
    [anon_sym_DEFINE] = ACTIONS(167),
    [anon_sym_NAMESPACE] = ACTIONS(167),
    [anon_sym_DATABASE] = ACTIONS(167),
    [anon_sym_LOGIN] = ACTIONS(167),
    [anon_sym_PASSWORD] = ACTIONS(167),
    [anon_sym_PASSHASH] = ACTIONS(167),
    [anon_sym_TOKEN] = ACTIONS(167),
    [anon_sym_SCOPE] = ACTIONS(167),
    [anon_sym_TYPE] = ACTIONS(167),
    [anon_sym_VALUE] = ACTIONS(167),
    [anon_sym_SESSION] = ACTIONS(167),
    [anon_sym_SIGNUP] = ACTIONS(167),
    [anon_sym_SIGNIN] = ACTIONS(167),
    [anon_sym_TABLE] = ACTIONS(167),
    [anon_sym_DROP] = ACTIONS(167),
    [anon_sym_SCHEMAFULL] = ACTIONS(167),
    [anon_sym_SCHEMALESS] = ACTIONS(167),
    [anon_sym_AS] = ACTIONS(167),
    [anon_sym_PERMISSIONS] = ACTIONS(167),
    [anon_sym_FULL] = ACTIONS(167),
    [anon_sym_FOR] = ACTIONS(167),
    [anon_sym_select] = ACTIONS(167),
    [anon_sym_update] = ACTIONS(167),
    [anon_sym_create] = ACTIONS(167),
    [anon_sym_delete] = ACTIONS(167),
    [anon_sym_EVENT] = ACTIONS(167),
    [anon_sym_WHEN] = ACTIONS(167),
    [anon_sym_ASSERT] = ACTIONS(167),
    [anon_sym_INDEX] = ACTIONS(167),
    [anon_sym_FIELDS] = ACTIONS(167),
    [anon_sym_COLUMNS] = ACTIONS(167),
    [anon_sym_UNIQUE] = ACTIONS(167),
    [anon_sym_REMOVE] = ACTIONS(167),
    [anon_sym_SLEEP] = ACTIONS(167),
    [anon_sym_INFO] = ACTIONS(167),
    [anon_sym_KV] = ACTIONS(167),
    [anon_sym_FUNCTION] = ACTIONS(167),
    [anon_sym_PARAM] = ACTIONS(167),
    [anon_sym_AMP_AMP] = ACTIONS(165),
    [anon_sym_AND] = ACTIONS(167),
    [anon_sym_PIPE_PIPE] = ACTIONS(165),
    [anon_sym_OR] = ACTIONS(167),
    [anon_sym_QMARK_QMARK] = ACTIONS(165),
    [anon_sym_QMARK_COLON] = ACTIONS(165),
    [anon_sym_EQ] = ACTIONS(167),
    [anon_sym_IS] = ACTIONS(167),
    [anon_sym_BANG_EQ] = ACTIONS(165),
    [anon_sym_ISNOT] = ACTIONS(165),
    [anon_sym_EQ_EQ] = ACTIONS(165),
    [anon_sym_QMARK_EQ] = ACTIONS(165),
    [anon_sym_STAR_EQ] = ACTIONS(165),
    [anon_sym_TILDE] = ACTIONS(165),
    [anon_sym_BANG_TILDE] = ACTIONS(165),
    [anon_sym_QMARK_TILDE] = ACTIONS(165),
    [anon_sym_STAR_TILDE] = ACTIONS(165),
    [anon_sym_LT] = ACTIONS(167),
    [anon_sym_LT_EQ] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(167),
    [anon_sym_GT_EQ] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(165),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_STAR] = ACTIONS(167),
    [anon_sym_x] = ACTIONS(167),
    [anon_sym_SLASH] = ACTIONS(167),
    [anon_sym_] = ACTIONS(165),
    [anon_sym_STAR_STAR] = ACTIONS(165),
    [anon_sym_IN] = ACTIONS(167),
    [anon_sym_CONTAINS] = ACTIONS(167),
    [anon_sym_2] = ACTIONS(165),
    [anon_sym_CONTAINSNOT] = ACTIONS(167),
    [anon_sym_3] = ACTIONS(165),
    [anon_sym_CONTAINSALL] = ACTIONS(167),
    [anon_sym_4] = ACTIONS(165),
    [anon_sym_CONTAINSANY] = ACTIONS(167),
    [anon_sym_5] = ACTIONS(165),
    [anon_sym_CONTAINSNONE] = ACTIONS(167),
    [anon_sym_6] = ACTIONS(165),
    [anon_sym_INSIDE] = ACTIONS(167),
    [anon_sym_7] = ACTIONS(165),
    [anon_sym_NOTINSIDE] = ACTIONS(167),
    [anon_sym_NOTIN] = ACTIONS(165),
    [anon_sym_8] = ACTIONS(165),
    [anon_sym_ALLINSIDE] = ACTIONS(167),
    [anon_sym_9] = ACTIONS(165),
    [anon_sym_ANYINSIDE] = ACTIONS(167),
    [anon_sym_10] = ACTIONS(165),
    [anon_sym_NONEINSIDE] = ACTIONS(167),
    [anon_sym_11] = ACTIONS(165),
    [anon_sym_OUTSIDE] = ACTIONS(167),
    [anon_sym_INTERSECTS] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(165),
    [anon_sym_SEMI] = ACTIONS(165),
    [anon_sym_COLON] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_RBRACK] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_RBRACE] = ACTIONS(165),
    [anon_sym_DASH_GT] = ACTIONS(165),
    [anon_sym_LT_DASH] = ACTIONS(165),
    [anon_sym_any] = ACTIONS(167),
    [anon_sym_array] = ACTIONS(167),
    [anon_sym_bool] = ACTIONS(167),
    [anon_sym_datetime] = ACTIONS(167),
    [anon_sym_decimal] = ACTIONS(167),
    [anon_sym_duration] = ACTIONS(167),
    [anon_sym_float] = ACTIONS(167),
    [anon_sym_int] = ACTIONS(167),
    [anon_sym_number] = ACTIONS(167),
    [anon_sym_object] = ACTIONS(167),
    [anon_sym_string] = ACTIONS(167),
    [anon_sym_record] = ACTIONS(167),
    [anon_sym_geometry] = ACTIONS(167),
    [anon_sym_EDDSA] = ACTIONS(167),
    [anon_sym_ES256] = ACTIONS(167),
    [anon_sym_ES384] = ACTIONS(167),
    [anon_sym_ES512] = ACTIONS(167),
    [anon_sym_HS256] = ACTIONS(167),
    [anon_sym_HS384] = ACTIONS(167),
    [anon_sym_HS512] = ACTIONS(167),
    [anon_sym_PS256] = ACTIONS(167),
    [anon_sym_PS384] = ACTIONS(167),
    [anon_sym_PS512] = ACTIONS(167),
    [anon_sym_RS256] = ACTIONS(167),
    [anon_sym_RS384] = ACTIONS(167),
    [anon_sym_RS512] = ACTIONS(167),
    [aux_sym_function_token1] = ACTIONS(165),
    [aux_sym_function_token2] = ACTIONS(165),
    [anon_sym_count] = ACTIONS(167),
    [aux_sym_function_token3] = ACTIONS(165),
    [aux_sym_function_token4] = ACTIONS(165),
    [aux_sym_function_token5] = ACTIONS(165),
    [aux_sym_function_token6] = ACTIONS(165),
    [aux_sym_function_token7] = ACTIONS(165),
    [aux_sym_function_token8] = ACTIONS(165),
    [aux_sym_function_token9] = ACTIONS(165),
    [aux_sym_function_token10] = ACTIONS(167),
    [aux_sym_function_token11] = ACTIONS(165),
    [aux_sym_function_token12] = ACTIONS(167),
    [aux_sym_function_token13] = ACTIONS(165),
    [aux_sym_function_token14] = ACTIONS(165),
    [aux_sym_function_token15] = ACTIONS(165),
    [aux_sym_function_token16] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(167),
    [anon_sym_false] = ACTIONS(167),
    [anon_sym_TRUE] = ACTIONS(167),
    [anon_sym_FALSE] = ACTIONS(167),
    [anon_sym_null] = ACTIONS(167),
    [anon_sym_NULL] = ACTIONS(167),
    [anon_sym_none] = ACTIONS(167),
    [anon_sym_NONE] = ACTIONS(167),
    [sym_variable] = ACTIONS(165),
    [sym_comment] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(165),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [aux_sym_future_token1] = ACTIONS(169),
    [aux_sym_casting_token1] = ACTIONS(169),
    [aux_sym_property_token1] = ACTIONS(171),
    [aux_sym_identifier_token1] = ACTIONS(171),
    [aux_sym_duration_token1] = ACTIONS(171),
    [aux_sym_constant_token1] = ACTIONS(169),
    [aux_sym_number_token1] = ACTIONS(171),
    [aux_sym_record_token1] = ACTIONS(169),
    [aux_sym_record_token2] = ACTIONS(169),
    [anon_sym_USE] = ACTIONS(171),
    [anon_sym_NS] = ACTIONS(171),
    [anon_sym_DB] = ACTIONS(171),
    [anon_sym_LET] = ACTIONS(171),
    [anon_sym_BEGIN] = ACTIONS(171),
    [anon_sym_TRANSACTION] = ACTIONS(171),
    [anon_sym_CANCEL] = ACTIONS(171),
    [anon_sym_COMMIT] = ACTIONS(171),
    [anon_sym_IF] = ACTIONS(171),
    [anon_sym_ELSE] = ACTIONS(171),
    [anon_sym_THEN] = ACTIONS(171),
    [anon_sym_END] = ACTIONS(171),
    [anon_sym_SELECT] = ACTIONS(171),
    [anon_sym_FROM] = ACTIONS(171),
    [anon_sym_WHERE] = ACTIONS(171),
    [anon_sym_SPLIT] = ACTIONS(171),
    [anon_sym_AT] = ACTIONS(171),
    [anon_sym_GROUP] = ACTIONS(171),
    [anon_sym_BY] = ACTIONS(171),
    [anon_sym_ORDER] = ACTIONS(171),
    [anon_sym_COLLATE] = ACTIONS(171),
    [anon_sym_NUMERIC] = ACTIONS(171),
    [anon_sym_ASC] = ACTIONS(171),
    [anon_sym_DESC] = ACTIONS(171),
    [anon_sym_LIMIT] = ACTIONS(171),
    [anon_sym_START] = ACTIONS(171),
    [anon_sym_FETCH] = ACTIONS(171),
    [anon_sym_TIMEOUT] = ACTIONS(171),
    [anon_sym_PARALLEL] = ACTIONS(171),
    [anon_sym_INSERT] = ACTIONS(171),
    [anon_sym_IGNORE] = ACTIONS(171),
    [anon_sym_INTO] = ACTIONS(171),
    [anon_sym_VALUES] = ACTIONS(171),
    [anon_sym_ON] = ACTIONS(171),
    [anon_sym_DUPLICATE] = ACTIONS(171),
    [anon_sym_KEY] = ACTIONS(171),
    [anon_sym_UPDATE] = ACTIONS(171),
    [anon_sym_CREATE] = ACTIONS(171),
    [anon_sym_CONTENT] = ACTIONS(171),
    [anon_sym_SET] = ACTIONS(171),
    [anon_sym_RETURN] = ACTIONS(171),
    [anon_sym_BEFORE] = ACTIONS(171),
    [anon_sym_AFTER] = ACTIONS(171),
    [anon_sym_DIFF] = ACTIONS(171),
    [anon_sym_MERGE] = ACTIONS(171),
    [anon_sym_PATCH] = ACTIONS(171),
    [anon_sym_RELATE] = ACTIONS(171),
    [anon_sym_DELETE] = ACTIONS(171),
    [anon_sym_DEFINE] = ACTIONS(171),
    [anon_sym_NAMESPACE] = ACTIONS(171),
    [anon_sym_DATABASE] = ACTIONS(171),
    [anon_sym_LOGIN] = ACTIONS(171),
    [anon_sym_PASSWORD] = ACTIONS(171),
    [anon_sym_PASSHASH] = ACTIONS(171),
    [anon_sym_TOKEN] = ACTIONS(171),
    [anon_sym_SCOPE] = ACTIONS(171),
    [anon_sym_TYPE] = ACTIONS(171),
    [anon_sym_VALUE] = ACTIONS(171),
    [anon_sym_SESSION] = ACTIONS(171),
    [anon_sym_SIGNUP] = ACTIONS(171),
    [anon_sym_SIGNIN] = ACTIONS(171),
    [anon_sym_TABLE] = ACTIONS(171),
    [anon_sym_DROP] = ACTIONS(171),
    [anon_sym_SCHEMAFULL] = ACTIONS(171),
    [anon_sym_SCHEMALESS] = ACTIONS(171),
    [anon_sym_AS] = ACTIONS(171),
    [anon_sym_PERMISSIONS] = ACTIONS(171),
    [anon_sym_FULL] = ACTIONS(171),
    [anon_sym_FOR] = ACTIONS(171),
    [anon_sym_select] = ACTIONS(171),
    [anon_sym_update] = ACTIONS(171),
    [anon_sym_create] = ACTIONS(171),
    [anon_sym_delete] = ACTIONS(171),
    [anon_sym_EVENT] = ACTIONS(171),
    [anon_sym_WHEN] = ACTIONS(171),
    [anon_sym_ASSERT] = ACTIONS(171),
    [anon_sym_INDEX] = ACTIONS(171),
    [anon_sym_FIELDS] = ACTIONS(171),
    [anon_sym_COLUMNS] = ACTIONS(171),
    [anon_sym_UNIQUE] = ACTIONS(171),
    [anon_sym_REMOVE] = ACTIONS(171),
    [anon_sym_SLEEP] = ACTIONS(171),
    [anon_sym_INFO] = ACTIONS(171),
    [anon_sym_KV] = ACTIONS(171),
    [anon_sym_FUNCTION] = ACTIONS(171),
    [anon_sym_PARAM] = ACTIONS(171),
    [anon_sym_AMP_AMP] = ACTIONS(169),
    [anon_sym_AND] = ACTIONS(171),
    [anon_sym_PIPE_PIPE] = ACTIONS(169),
    [anon_sym_OR] = ACTIONS(171),
    [anon_sym_QMARK_QMARK] = ACTIONS(169),
    [anon_sym_QMARK_COLON] = ACTIONS(169),
    [anon_sym_EQ] = ACTIONS(171),
    [anon_sym_IS] = ACTIONS(171),
    [anon_sym_BANG_EQ] = ACTIONS(169),
    [anon_sym_ISNOT] = ACTIONS(169),
    [anon_sym_EQ_EQ] = ACTIONS(169),
    [anon_sym_QMARK_EQ] = ACTIONS(169),
    [anon_sym_STAR_EQ] = ACTIONS(169),
    [anon_sym_TILDE] = ACTIONS(169),
    [anon_sym_BANG_TILDE] = ACTIONS(169),
    [anon_sym_QMARK_TILDE] = ACTIONS(169),
    [anon_sym_STAR_TILDE] = ACTIONS(169),
    [anon_sym_LT] = ACTIONS(171),
    [anon_sym_LT_EQ] = ACTIONS(169),
    [anon_sym_GT] = ACTIONS(171),
    [anon_sym_GT_EQ] = ACTIONS(169),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_STAR] = ACTIONS(171),
    [anon_sym_x] = ACTIONS(171),
    [anon_sym_SLASH] = ACTIONS(171),
    [anon_sym_] = ACTIONS(169),
    [anon_sym_STAR_STAR] = ACTIONS(169),
    [anon_sym_IN] = ACTIONS(171),
    [anon_sym_CONTAINS] = ACTIONS(171),
    [anon_sym_2] = ACTIONS(169),
    [anon_sym_CONTAINSNOT] = ACTIONS(171),
    [anon_sym_3] = ACTIONS(169),
    [anon_sym_CONTAINSALL] = ACTIONS(171),
    [anon_sym_4] = ACTIONS(169),
    [anon_sym_CONTAINSANY] = ACTIONS(171),
    [anon_sym_5] = ACTIONS(169),
    [anon_sym_CONTAINSNONE] = ACTIONS(171),
    [anon_sym_6] = ACTIONS(169),
    [anon_sym_INSIDE] = ACTIONS(171),
    [anon_sym_7] = ACTIONS(169),
    [anon_sym_NOTINSIDE] = ACTIONS(171),
    [anon_sym_NOTIN] = ACTIONS(169),
    [anon_sym_8] = ACTIONS(169),
    [anon_sym_ALLINSIDE] = ACTIONS(171),
    [anon_sym_9] = ACTIONS(169),
    [anon_sym_ANYINSIDE] = ACTIONS(171),
    [anon_sym_10] = ACTIONS(169),
    [anon_sym_NONEINSIDE] = ACTIONS(171),
    [anon_sym_11] = ACTIONS(169),
    [anon_sym_OUTSIDE] = ACTIONS(171),
    [anon_sym_INTERSECTS] = ACTIONS(171),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_SEMI] = ACTIONS(169),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(169),
    [anon_sym_LBRACE] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_DASH_GT] = ACTIONS(169),
    [anon_sym_LT_DASH] = ACTIONS(169),
    [anon_sym_any] = ACTIONS(171),
    [anon_sym_array] = ACTIONS(171),
    [anon_sym_bool] = ACTIONS(171),
    [anon_sym_datetime] = ACTIONS(171),
    [anon_sym_decimal] = ACTIONS(171),
    [anon_sym_duration] = ACTIONS(171),
    [anon_sym_float] = ACTIONS(171),
    [anon_sym_int] = ACTIONS(171),
    [anon_sym_number] = ACTIONS(171),
    [anon_sym_object] = ACTIONS(171),
    [anon_sym_string] = ACTIONS(171),
    [anon_sym_record] = ACTIONS(171),
    [anon_sym_geometry] = ACTIONS(171),
    [anon_sym_EDDSA] = ACTIONS(171),
    [anon_sym_ES256] = ACTIONS(171),
    [anon_sym_ES384] = ACTIONS(171),
    [anon_sym_ES512] = ACTIONS(171),
    [anon_sym_HS256] = ACTIONS(171),
    [anon_sym_HS384] = ACTIONS(171),
    [anon_sym_HS512] = ACTIONS(171),
    [anon_sym_PS256] = ACTIONS(171),
    [anon_sym_PS384] = ACTIONS(171),
    [anon_sym_PS512] = ACTIONS(171),
    [anon_sym_RS256] = ACTIONS(171),
    [anon_sym_RS384] = ACTIONS(171),
    [anon_sym_RS512] = ACTIONS(171),
    [aux_sym_function_token1] = ACTIONS(169),
    [aux_sym_function_token2] = ACTIONS(169),
    [anon_sym_count] = ACTIONS(171),
    [aux_sym_function_token3] = ACTIONS(169),
    [aux_sym_function_token4] = ACTIONS(169),
    [aux_sym_function_token5] = ACTIONS(169),
    [aux_sym_function_token6] = ACTIONS(169),
    [aux_sym_function_token7] = ACTIONS(169),
    [aux_sym_function_token8] = ACTIONS(169),
    [aux_sym_function_token9] = ACTIONS(169),
    [aux_sym_function_token10] = ACTIONS(171),
    [aux_sym_function_token11] = ACTIONS(169),
    [aux_sym_function_token12] = ACTIONS(171),
    [aux_sym_function_token13] = ACTIONS(169),
    [aux_sym_function_token14] = ACTIONS(169),
    [aux_sym_function_token15] = ACTIONS(169),
    [aux_sym_function_token16] = ACTIONS(171),
    [anon_sym_true] = ACTIONS(171),
    [anon_sym_false] = ACTIONS(171),
    [anon_sym_TRUE] = ACTIONS(171),
    [anon_sym_FALSE] = ACTIONS(171),
    [anon_sym_null] = ACTIONS(171),
    [anon_sym_NULL] = ACTIONS(171),
    [anon_sym_none] = ACTIONS(171),
    [anon_sym_NONE] = ACTIONS(171),
    [sym_variable] = ACTIONS(169),
    [sym_comment] = ACTIONS(169),
    [anon_sym_SQUOTE] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(169),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [aux_sym_future_token1] = ACTIONS(173),
    [aux_sym_casting_token1] = ACTIONS(173),
    [aux_sym_property_token1] = ACTIONS(175),
    [aux_sym_identifier_token1] = ACTIONS(175),
    [aux_sym_duration_token1] = ACTIONS(175),
    [aux_sym_constant_token1] = ACTIONS(173),
    [aux_sym_number_token1] = ACTIONS(175),
    [aux_sym_record_token1] = ACTIONS(173),
    [aux_sym_record_token2] = ACTIONS(173),
    [anon_sym_USE] = ACTIONS(175),
    [anon_sym_NS] = ACTIONS(175),
    [anon_sym_DB] = ACTIONS(175),
    [anon_sym_LET] = ACTIONS(175),
    [anon_sym_BEGIN] = ACTIONS(175),
    [anon_sym_TRANSACTION] = ACTIONS(175),
    [anon_sym_CANCEL] = ACTIONS(175),
    [anon_sym_COMMIT] = ACTIONS(175),
    [anon_sym_IF] = ACTIONS(175),
    [anon_sym_ELSE] = ACTIONS(175),
    [anon_sym_THEN] = ACTIONS(175),
    [anon_sym_END] = ACTIONS(175),
    [anon_sym_SELECT] = ACTIONS(175),
    [anon_sym_FROM] = ACTIONS(175),
    [anon_sym_WHERE] = ACTIONS(175),
    [anon_sym_SPLIT] = ACTIONS(175),
    [anon_sym_AT] = ACTIONS(175),
    [anon_sym_GROUP] = ACTIONS(175),
    [anon_sym_BY] = ACTIONS(175),
    [anon_sym_ORDER] = ACTIONS(175),
    [anon_sym_COLLATE] = ACTIONS(175),
    [anon_sym_NUMERIC] = ACTIONS(175),
    [anon_sym_ASC] = ACTIONS(175),
    [anon_sym_DESC] = ACTIONS(175),
    [anon_sym_LIMIT] = ACTIONS(175),
    [anon_sym_START] = ACTIONS(175),
    [anon_sym_FETCH] = ACTIONS(175),
    [anon_sym_TIMEOUT] = ACTIONS(175),
    [anon_sym_PARALLEL] = ACTIONS(175),
    [anon_sym_INSERT] = ACTIONS(175),
    [anon_sym_IGNORE] = ACTIONS(175),
    [anon_sym_INTO] = ACTIONS(175),
    [anon_sym_VALUES] = ACTIONS(175),
    [anon_sym_ON] = ACTIONS(175),
    [anon_sym_DUPLICATE] = ACTIONS(175),
    [anon_sym_KEY] = ACTIONS(175),
    [anon_sym_UPDATE] = ACTIONS(175),
    [anon_sym_CREATE] = ACTIONS(175),
    [anon_sym_CONTENT] = ACTIONS(175),
    [anon_sym_SET] = ACTIONS(175),
    [anon_sym_RETURN] = ACTIONS(175),
    [anon_sym_BEFORE] = ACTIONS(175),
    [anon_sym_AFTER] = ACTIONS(175),
    [anon_sym_DIFF] = ACTIONS(175),
    [anon_sym_MERGE] = ACTIONS(175),
    [anon_sym_PATCH] = ACTIONS(175),
    [anon_sym_RELATE] = ACTIONS(175),
    [anon_sym_DELETE] = ACTIONS(175),
    [anon_sym_DEFINE] = ACTIONS(175),
    [anon_sym_NAMESPACE] = ACTIONS(175),
    [anon_sym_DATABASE] = ACTIONS(175),
    [anon_sym_LOGIN] = ACTIONS(175),
    [anon_sym_PASSWORD] = ACTIONS(175),
    [anon_sym_PASSHASH] = ACTIONS(175),
    [anon_sym_TOKEN] = ACTIONS(175),
    [anon_sym_SCOPE] = ACTIONS(175),
    [anon_sym_TYPE] = ACTIONS(175),
    [anon_sym_VALUE] = ACTIONS(175),
    [anon_sym_SESSION] = ACTIONS(175),
    [anon_sym_SIGNUP] = ACTIONS(175),
    [anon_sym_SIGNIN] = ACTIONS(175),
    [anon_sym_TABLE] = ACTIONS(175),
    [anon_sym_DROP] = ACTIONS(175),
    [anon_sym_SCHEMAFULL] = ACTIONS(175),
    [anon_sym_SCHEMALESS] = ACTIONS(175),
    [anon_sym_AS] = ACTIONS(175),
    [anon_sym_PERMISSIONS] = ACTIONS(175),
    [anon_sym_FULL] = ACTIONS(175),
    [anon_sym_FOR] = ACTIONS(175),
    [anon_sym_select] = ACTIONS(175),
    [anon_sym_update] = ACTIONS(175),
    [anon_sym_create] = ACTIONS(175),
    [anon_sym_delete] = ACTIONS(175),
    [anon_sym_EVENT] = ACTIONS(175),
    [anon_sym_WHEN] = ACTIONS(175),
    [anon_sym_ASSERT] = ACTIONS(175),
    [anon_sym_INDEX] = ACTIONS(175),
    [anon_sym_FIELDS] = ACTIONS(175),
    [anon_sym_COLUMNS] = ACTIONS(175),
    [anon_sym_UNIQUE] = ACTIONS(175),
    [anon_sym_REMOVE] = ACTIONS(175),
    [anon_sym_SLEEP] = ACTIONS(175),
    [anon_sym_INFO] = ACTIONS(175),
    [anon_sym_KV] = ACTIONS(175),
    [anon_sym_FUNCTION] = ACTIONS(175),
    [anon_sym_PARAM] = ACTIONS(175),
    [anon_sym_AMP_AMP] = ACTIONS(173),
    [anon_sym_AND] = ACTIONS(175),
    [anon_sym_PIPE_PIPE] = ACTIONS(173),
    [anon_sym_OR] = ACTIONS(175),
    [anon_sym_QMARK_QMARK] = ACTIONS(173),
    [anon_sym_QMARK_COLON] = ACTIONS(173),
    [anon_sym_EQ] = ACTIONS(175),
    [anon_sym_IS] = ACTIONS(175),
    [anon_sym_BANG_EQ] = ACTIONS(173),
    [anon_sym_ISNOT] = ACTIONS(173),
    [anon_sym_EQ_EQ] = ACTIONS(173),
    [anon_sym_QMARK_EQ] = ACTIONS(173),
    [anon_sym_STAR_EQ] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(173),
    [anon_sym_BANG_TILDE] = ACTIONS(173),
    [anon_sym_QMARK_TILDE] = ACTIONS(173),
    [anon_sym_STAR_TILDE] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(175),
    [anon_sym_LT_EQ] = ACTIONS(173),
    [anon_sym_GT] = ACTIONS(175),
    [anon_sym_GT_EQ] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(175),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_x] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_] = ACTIONS(173),
    [anon_sym_STAR_STAR] = ACTIONS(173),
    [anon_sym_IN] = ACTIONS(175),
    [anon_sym_CONTAINS] = ACTIONS(175),
    [anon_sym_2] = ACTIONS(173),
    [anon_sym_CONTAINSNOT] = ACTIONS(175),
    [anon_sym_3] = ACTIONS(173),
    [anon_sym_CONTAINSALL] = ACTIONS(175),
    [anon_sym_4] = ACTIONS(173),
    [anon_sym_CONTAINSANY] = ACTIONS(175),
    [anon_sym_5] = ACTIONS(173),
    [anon_sym_CONTAINSNONE] = ACTIONS(175),
    [anon_sym_6] = ACTIONS(173),
    [anon_sym_INSIDE] = ACTIONS(175),
    [anon_sym_7] = ACTIONS(173),
    [anon_sym_NOTINSIDE] = ACTIONS(175),
    [anon_sym_NOTIN] = ACTIONS(173),
    [anon_sym_8] = ACTIONS(173),
    [anon_sym_ALLINSIDE] = ACTIONS(175),
    [anon_sym_9] = ACTIONS(173),
    [anon_sym_ANYINSIDE] = ACTIONS(175),
    [anon_sym_10] = ACTIONS(173),
    [anon_sym_NONEINSIDE] = ACTIONS(175),
    [anon_sym_11] = ACTIONS(173),
    [anon_sym_OUTSIDE] = ACTIONS(175),
    [anon_sym_INTERSECTS] = ACTIONS(175),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_SEMI] = ACTIONS(173),
    [anon_sym_COLON] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_RBRACK] = ACTIONS(173),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_DASH_GT] = ACTIONS(173),
    [anon_sym_LT_DASH] = ACTIONS(173),
    [anon_sym_any] = ACTIONS(175),
    [anon_sym_array] = ACTIONS(175),
    [anon_sym_bool] = ACTIONS(175),
    [anon_sym_datetime] = ACTIONS(175),
    [anon_sym_decimal] = ACTIONS(175),
    [anon_sym_duration] = ACTIONS(175),
    [anon_sym_float] = ACTIONS(175),
    [anon_sym_int] = ACTIONS(175),
    [anon_sym_number] = ACTIONS(175),
    [anon_sym_object] = ACTIONS(175),
    [anon_sym_string] = ACTIONS(175),
    [anon_sym_record] = ACTIONS(175),
    [anon_sym_geometry] = ACTIONS(175),
    [anon_sym_EDDSA] = ACTIONS(175),
    [anon_sym_ES256] = ACTIONS(175),
    [anon_sym_ES384] = ACTIONS(175),
    [anon_sym_ES512] = ACTIONS(175),
    [anon_sym_HS256] = ACTIONS(175),
    [anon_sym_HS384] = ACTIONS(175),
    [anon_sym_HS512] = ACTIONS(175),
    [anon_sym_PS256] = ACTIONS(175),
    [anon_sym_PS384] = ACTIONS(175),
    [anon_sym_PS512] = ACTIONS(175),
    [anon_sym_RS256] = ACTIONS(175),
    [anon_sym_RS384] = ACTIONS(175),
    [anon_sym_RS512] = ACTIONS(175),
    [aux_sym_function_token1] = ACTIONS(173),
    [aux_sym_function_token2] = ACTIONS(173),
    [anon_sym_count] = ACTIONS(175),
    [aux_sym_function_token3] = ACTIONS(173),
    [aux_sym_function_token4] = ACTIONS(173),
    [aux_sym_function_token5] = ACTIONS(173),
    [aux_sym_function_token6] = ACTIONS(173),
    [aux_sym_function_token7] = ACTIONS(173),
    [aux_sym_function_token8] = ACTIONS(173),
    [aux_sym_function_token9] = ACTIONS(173),
    [aux_sym_function_token10] = ACTIONS(175),
    [aux_sym_function_token11] = ACTIONS(173),
    [aux_sym_function_token12] = ACTIONS(175),
    [aux_sym_function_token13] = ACTIONS(173),
    [aux_sym_function_token14] = ACTIONS(173),
    [aux_sym_function_token15] = ACTIONS(173),
    [aux_sym_function_token16] = ACTIONS(175),
    [anon_sym_true] = ACTIONS(175),
    [anon_sym_false] = ACTIONS(175),
    [anon_sym_TRUE] = ACTIONS(175),
    [anon_sym_FALSE] = ACTIONS(175),
    [anon_sym_null] = ACTIONS(175),
    [anon_sym_NULL] = ACTIONS(175),
    [anon_sym_none] = ACTIONS(175),
    [anon_sym_NONE] = ACTIONS(175),
    [sym_variable] = ACTIONS(173),
    [sym_comment] = ACTIONS(173),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(173),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [aux_sym_future_token1] = ACTIONS(177),
    [aux_sym_casting_token1] = ACTIONS(177),
    [aux_sym_property_token1] = ACTIONS(179),
    [aux_sym_identifier_token1] = ACTIONS(179),
    [aux_sym_duration_token1] = ACTIONS(179),
    [aux_sym_constant_token1] = ACTIONS(177),
    [aux_sym_number_token1] = ACTIONS(179),
    [aux_sym_record_token1] = ACTIONS(177),
    [aux_sym_record_token2] = ACTIONS(177),
    [anon_sym_USE] = ACTIONS(179),
    [anon_sym_NS] = ACTIONS(179),
    [anon_sym_DB] = ACTIONS(179),
    [anon_sym_LET] = ACTIONS(179),
    [anon_sym_BEGIN] = ACTIONS(179),
    [anon_sym_TRANSACTION] = ACTIONS(179),
    [anon_sym_CANCEL] = ACTIONS(179),
    [anon_sym_COMMIT] = ACTIONS(179),
    [anon_sym_IF] = ACTIONS(179),
    [anon_sym_ELSE] = ACTIONS(179),
    [anon_sym_THEN] = ACTIONS(179),
    [anon_sym_END] = ACTIONS(179),
    [anon_sym_SELECT] = ACTIONS(179),
    [anon_sym_FROM] = ACTIONS(179),
    [anon_sym_WHERE] = ACTIONS(179),
    [anon_sym_SPLIT] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(179),
    [anon_sym_GROUP] = ACTIONS(179),
    [anon_sym_BY] = ACTIONS(179),
    [anon_sym_ORDER] = ACTIONS(179),
    [anon_sym_COLLATE] = ACTIONS(179),
    [anon_sym_NUMERIC] = ACTIONS(179),
    [anon_sym_ASC] = ACTIONS(179),
    [anon_sym_DESC] = ACTIONS(179),
    [anon_sym_LIMIT] = ACTIONS(179),
    [anon_sym_START] = ACTIONS(179),
    [anon_sym_FETCH] = ACTIONS(179),
    [anon_sym_TIMEOUT] = ACTIONS(179),
    [anon_sym_PARALLEL] = ACTIONS(179),
    [anon_sym_INSERT] = ACTIONS(179),
    [anon_sym_IGNORE] = ACTIONS(179),
    [anon_sym_INTO] = ACTIONS(179),
    [anon_sym_VALUES] = ACTIONS(179),
    [anon_sym_ON] = ACTIONS(179),
    [anon_sym_DUPLICATE] = ACTIONS(179),
    [anon_sym_KEY] = ACTIONS(179),
    [anon_sym_UPDATE] = ACTIONS(179),
    [anon_sym_CREATE] = ACTIONS(179),
    [anon_sym_CONTENT] = ACTIONS(179),
    [anon_sym_SET] = ACTIONS(179),
    [anon_sym_RETURN] = ACTIONS(179),
    [anon_sym_BEFORE] = ACTIONS(179),
    [anon_sym_AFTER] = ACTIONS(179),
    [anon_sym_DIFF] = ACTIONS(179),
    [anon_sym_MERGE] = ACTIONS(179),
    [anon_sym_PATCH] = ACTIONS(179),
    [anon_sym_RELATE] = ACTIONS(179),
    [anon_sym_DELETE] = ACTIONS(179),
    [anon_sym_DEFINE] = ACTIONS(179),
    [anon_sym_NAMESPACE] = ACTIONS(179),
    [anon_sym_DATABASE] = ACTIONS(179),
    [anon_sym_LOGIN] = ACTIONS(179),
    [anon_sym_PASSWORD] = ACTIONS(179),
    [anon_sym_PASSHASH] = ACTIONS(179),
    [anon_sym_TOKEN] = ACTIONS(179),
    [anon_sym_SCOPE] = ACTIONS(179),
    [anon_sym_TYPE] = ACTIONS(179),
    [anon_sym_VALUE] = ACTIONS(179),
    [anon_sym_SESSION] = ACTIONS(179),
    [anon_sym_SIGNUP] = ACTIONS(179),
    [anon_sym_SIGNIN] = ACTIONS(179),
    [anon_sym_TABLE] = ACTIONS(179),
    [anon_sym_DROP] = ACTIONS(179),
    [anon_sym_SCHEMAFULL] = ACTIONS(179),
    [anon_sym_SCHEMALESS] = ACTIONS(179),
    [anon_sym_AS] = ACTIONS(179),
    [anon_sym_PERMISSIONS] = ACTIONS(179),
    [anon_sym_FULL] = ACTIONS(179),
    [anon_sym_FOR] = ACTIONS(179),
    [anon_sym_select] = ACTIONS(179),
    [anon_sym_update] = ACTIONS(179),
    [anon_sym_create] = ACTIONS(179),
    [anon_sym_delete] = ACTIONS(179),
    [anon_sym_EVENT] = ACTIONS(179),
    [anon_sym_WHEN] = ACTIONS(179),
    [anon_sym_ASSERT] = ACTIONS(179),
    [anon_sym_INDEX] = ACTIONS(179),
    [anon_sym_FIELDS] = ACTIONS(179),
    [anon_sym_COLUMNS] = ACTIONS(179),
    [anon_sym_UNIQUE] = ACTIONS(179),
    [anon_sym_REMOVE] = ACTIONS(179),
    [anon_sym_SLEEP] = ACTIONS(179),
    [anon_sym_INFO] = ACTIONS(179),
    [anon_sym_KV] = ACTIONS(179),
    [anon_sym_FUNCTION] = ACTIONS(179),
    [anon_sym_PARAM] = ACTIONS(179),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_AND] = ACTIONS(179),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_OR] = ACTIONS(179),
    [anon_sym_QMARK_QMARK] = ACTIONS(177),
    [anon_sym_QMARK_COLON] = ACTIONS(177),
    [anon_sym_EQ] = ACTIONS(179),
    [anon_sym_IS] = ACTIONS(179),
    [anon_sym_BANG_EQ] = ACTIONS(177),
    [anon_sym_ISNOT] = ACTIONS(177),
    [anon_sym_EQ_EQ] = ACTIONS(177),
    [anon_sym_QMARK_EQ] = ACTIONS(177),
    [anon_sym_STAR_EQ] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_BANG_TILDE] = ACTIONS(177),
    [anon_sym_QMARK_TILDE] = ACTIONS(177),
    [anon_sym_STAR_TILDE] = ACTIONS(177),
    [anon_sym_LT] = ACTIONS(179),
    [anon_sym_LT_EQ] = ACTIONS(177),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_GT_EQ] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(177),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_STAR] = ACTIONS(179),
    [anon_sym_x] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(179),
    [anon_sym_] = ACTIONS(177),
    [anon_sym_STAR_STAR] = ACTIONS(177),
    [anon_sym_IN] = ACTIONS(179),
    [anon_sym_CONTAINS] = ACTIONS(179),
    [anon_sym_2] = ACTIONS(177),
    [anon_sym_CONTAINSNOT] = ACTIONS(179),
    [anon_sym_3] = ACTIONS(177),
    [anon_sym_CONTAINSALL] = ACTIONS(179),
    [anon_sym_4] = ACTIONS(177),
    [anon_sym_CONTAINSANY] = ACTIONS(179),
    [anon_sym_5] = ACTIONS(177),
    [anon_sym_CONTAINSNONE] = ACTIONS(179),
    [anon_sym_6] = ACTIONS(177),
    [anon_sym_INSIDE] = ACTIONS(179),
    [anon_sym_7] = ACTIONS(177),
    [anon_sym_NOTINSIDE] = ACTIONS(179),
    [anon_sym_NOTIN] = ACTIONS(177),
    [anon_sym_8] = ACTIONS(177),
    [anon_sym_ALLINSIDE] = ACTIONS(179),
    [anon_sym_9] = ACTIONS(177),
    [anon_sym_ANYINSIDE] = ACTIONS(179),
    [anon_sym_10] = ACTIONS(177),
    [anon_sym_NONEINSIDE] = ACTIONS(179),
    [anon_sym_11] = ACTIONS(177),
    [anon_sym_OUTSIDE] = ACTIONS(179),
    [anon_sym_INTERSECTS] = ACTIONS(179),
    [anon_sym_COMMA] = ACTIONS(177),
    [anon_sym_SEMI] = ACTIONS(177),
    [anon_sym_COLON] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_DASH_GT] = ACTIONS(177),
    [anon_sym_LT_DASH] = ACTIONS(177),
    [anon_sym_any] = ACTIONS(179),
    [anon_sym_array] = ACTIONS(179),
    [anon_sym_bool] = ACTIONS(179),
    [anon_sym_datetime] = ACTIONS(179),
    [anon_sym_decimal] = ACTIONS(179),
    [anon_sym_duration] = ACTIONS(179),
    [anon_sym_float] = ACTIONS(179),
    [anon_sym_int] = ACTIONS(179),
    [anon_sym_number] = ACTIONS(179),
    [anon_sym_object] = ACTIONS(179),
    [anon_sym_string] = ACTIONS(179),
    [anon_sym_record] = ACTIONS(179),
    [anon_sym_geometry] = ACTIONS(179),
    [anon_sym_EDDSA] = ACTIONS(179),
    [anon_sym_ES256] = ACTIONS(179),
    [anon_sym_ES384] = ACTIONS(179),
    [anon_sym_ES512] = ACTIONS(179),
    [anon_sym_HS256] = ACTIONS(179),
    [anon_sym_HS384] = ACTIONS(179),
    [anon_sym_HS512] = ACTIONS(179),
    [anon_sym_PS256] = ACTIONS(179),
    [anon_sym_PS384] = ACTIONS(179),
    [anon_sym_PS512] = ACTIONS(179),
    [anon_sym_RS256] = ACTIONS(179),
    [anon_sym_RS384] = ACTIONS(179),
    [anon_sym_RS512] = ACTIONS(179),
    [aux_sym_function_token1] = ACTIONS(177),
    [aux_sym_function_token2] = ACTIONS(177),
    [anon_sym_count] = ACTIONS(179),
    [aux_sym_function_token3] = ACTIONS(177),
    [aux_sym_function_token4] = ACTIONS(177),
    [aux_sym_function_token5] = ACTIONS(177),
    [aux_sym_function_token6] = ACTIONS(177),
    [aux_sym_function_token7] = ACTIONS(177),
    [aux_sym_function_token8] = ACTIONS(177),
    [aux_sym_function_token9] = ACTIONS(177),
    [aux_sym_function_token10] = ACTIONS(179),
    [aux_sym_function_token11] = ACTIONS(177),
    [aux_sym_function_token12] = ACTIONS(179),
    [aux_sym_function_token13] = ACTIONS(177),
    [aux_sym_function_token14] = ACTIONS(177),
    [aux_sym_function_token15] = ACTIONS(177),
    [aux_sym_function_token16] = ACTIONS(179),
    [anon_sym_true] = ACTIONS(179),
    [anon_sym_false] = ACTIONS(179),
    [anon_sym_TRUE] = ACTIONS(179),
    [anon_sym_FALSE] = ACTIONS(179),
    [anon_sym_null] = ACTIONS(179),
    [anon_sym_NULL] = ACTIONS(179),
    [anon_sym_none] = ACTIONS(179),
    [anon_sym_NONE] = ACTIONS(179),
    [sym_variable] = ACTIONS(177),
    [sym_comment] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(177),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [aux_sym_future_token1] = ACTIONS(181),
    [aux_sym_casting_token1] = ACTIONS(181),
    [aux_sym_property_token1] = ACTIONS(183),
    [aux_sym_identifier_token1] = ACTIONS(183),
    [aux_sym_duration_token1] = ACTIONS(183),
    [aux_sym_constant_token1] = ACTIONS(181),
    [aux_sym_number_token1] = ACTIONS(183),
    [aux_sym_record_token1] = ACTIONS(181),
    [aux_sym_record_token2] = ACTIONS(181),
    [anon_sym_USE] = ACTIONS(183),
    [anon_sym_NS] = ACTIONS(183),
    [anon_sym_DB] = ACTIONS(183),
    [anon_sym_LET] = ACTIONS(183),
    [anon_sym_BEGIN] = ACTIONS(183),
    [anon_sym_TRANSACTION] = ACTIONS(183),
    [anon_sym_CANCEL] = ACTIONS(183),
    [anon_sym_COMMIT] = ACTIONS(183),
    [anon_sym_IF] = ACTIONS(183),
    [anon_sym_ELSE] = ACTIONS(183),
    [anon_sym_THEN] = ACTIONS(183),
    [anon_sym_END] = ACTIONS(183),
    [anon_sym_SELECT] = ACTIONS(183),
    [anon_sym_FROM] = ACTIONS(183),
    [anon_sym_WHERE] = ACTIONS(183),
    [anon_sym_SPLIT] = ACTIONS(183),
    [anon_sym_AT] = ACTIONS(183),
    [anon_sym_GROUP] = ACTIONS(183),
    [anon_sym_BY] = ACTIONS(183),
    [anon_sym_ORDER] = ACTIONS(183),
    [anon_sym_COLLATE] = ACTIONS(183),
    [anon_sym_NUMERIC] = ACTIONS(183),
    [anon_sym_ASC] = ACTIONS(183),
    [anon_sym_DESC] = ACTIONS(183),
    [anon_sym_LIMIT] = ACTIONS(183),
    [anon_sym_START] = ACTIONS(183),
    [anon_sym_FETCH] = ACTIONS(183),
    [anon_sym_TIMEOUT] = ACTIONS(183),
    [anon_sym_PARALLEL] = ACTIONS(183),
    [anon_sym_INSERT] = ACTIONS(183),
    [anon_sym_IGNORE] = ACTIONS(183),
    [anon_sym_INTO] = ACTIONS(183),
    [anon_sym_VALUES] = ACTIONS(183),
    [anon_sym_ON] = ACTIONS(183),
    [anon_sym_DUPLICATE] = ACTIONS(183),
    [anon_sym_KEY] = ACTIONS(183),
    [anon_sym_UPDATE] = ACTIONS(183),
    [anon_sym_CREATE] = ACTIONS(183),
    [anon_sym_CONTENT] = ACTIONS(183),
    [anon_sym_SET] = ACTIONS(183),
    [anon_sym_RETURN] = ACTIONS(183),
    [anon_sym_BEFORE] = ACTIONS(183),
    [anon_sym_AFTER] = ACTIONS(183),
    [anon_sym_DIFF] = ACTIONS(183),
    [anon_sym_MERGE] = ACTIONS(183),
    [anon_sym_PATCH] = ACTIONS(183),
    [anon_sym_RELATE] = ACTIONS(183),
    [anon_sym_DELETE] = ACTIONS(183),
    [anon_sym_DEFINE] = ACTIONS(183),
    [anon_sym_NAMESPACE] = ACTIONS(183),
    [anon_sym_DATABASE] = ACTIONS(183),
    [anon_sym_LOGIN] = ACTIONS(183),
    [anon_sym_PASSWORD] = ACTIONS(183),
    [anon_sym_PASSHASH] = ACTIONS(183),
    [anon_sym_TOKEN] = ACTIONS(183),
    [anon_sym_SCOPE] = ACTIONS(183),
    [anon_sym_TYPE] = ACTIONS(183),
    [anon_sym_VALUE] = ACTIONS(183),
    [anon_sym_SESSION] = ACTIONS(183),
    [anon_sym_SIGNUP] = ACTIONS(183),
    [anon_sym_SIGNIN] = ACTIONS(183),
    [anon_sym_TABLE] = ACTIONS(183),
    [anon_sym_DROP] = ACTIONS(183),
    [anon_sym_SCHEMAFULL] = ACTIONS(183),
    [anon_sym_SCHEMALESS] = ACTIONS(183),
    [anon_sym_AS] = ACTIONS(183),
    [anon_sym_PERMISSIONS] = ACTIONS(183),
    [anon_sym_FULL] = ACTIONS(183),
    [anon_sym_FOR] = ACTIONS(183),
    [anon_sym_select] = ACTIONS(183),
    [anon_sym_update] = ACTIONS(183),
    [anon_sym_create] = ACTIONS(183),
    [anon_sym_delete] = ACTIONS(183),
    [anon_sym_EVENT] = ACTIONS(183),
    [anon_sym_WHEN] = ACTIONS(183),
    [anon_sym_ASSERT] = ACTIONS(183),
    [anon_sym_INDEX] = ACTIONS(183),
    [anon_sym_FIELDS] = ACTIONS(183),
    [anon_sym_COLUMNS] = ACTIONS(183),
    [anon_sym_UNIQUE] = ACTIONS(183),
    [anon_sym_REMOVE] = ACTIONS(183),
    [anon_sym_SLEEP] = ACTIONS(183),
    [anon_sym_INFO] = ACTIONS(183),
    [anon_sym_KV] = ACTIONS(183),
    [anon_sym_FUNCTION] = ACTIONS(183),
    [anon_sym_PARAM] = ACTIONS(183),
    [anon_sym_AMP_AMP] = ACTIONS(181),
    [anon_sym_AND] = ACTIONS(183),
    [anon_sym_PIPE_PIPE] = ACTIONS(181),
    [anon_sym_OR] = ACTIONS(183),
    [anon_sym_QMARK_QMARK] = ACTIONS(181),
    [anon_sym_QMARK_COLON] = ACTIONS(181),
    [anon_sym_EQ] = ACTIONS(183),
    [anon_sym_IS] = ACTIONS(183),
    [anon_sym_BANG_EQ] = ACTIONS(181),
    [anon_sym_ISNOT] = ACTIONS(181),
    [anon_sym_EQ_EQ] = ACTIONS(181),
    [anon_sym_QMARK_EQ] = ACTIONS(181),
    [anon_sym_STAR_EQ] = ACTIONS(181),
    [anon_sym_TILDE] = ACTIONS(181),
    [anon_sym_BANG_TILDE] = ACTIONS(181),
    [anon_sym_QMARK_TILDE] = ACTIONS(181),
    [anon_sym_STAR_TILDE] = ACTIONS(181),
    [anon_sym_LT] = ACTIONS(183),
    [anon_sym_LT_EQ] = ACTIONS(181),
    [anon_sym_GT] = ACTIONS(183),
    [anon_sym_GT_EQ] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_STAR] = ACTIONS(183),
    [anon_sym_x] = ACTIONS(183),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_] = ACTIONS(181),
    [anon_sym_STAR_STAR] = ACTIONS(181),
    [anon_sym_IN] = ACTIONS(183),
    [anon_sym_CONTAINS] = ACTIONS(183),
    [anon_sym_2] = ACTIONS(181),
    [anon_sym_CONTAINSNOT] = ACTIONS(183),
    [anon_sym_3] = ACTIONS(181),
    [anon_sym_CONTAINSALL] = ACTIONS(183),
    [anon_sym_4] = ACTIONS(181),
    [anon_sym_CONTAINSANY] = ACTIONS(183),
    [anon_sym_5] = ACTIONS(181),
    [anon_sym_CONTAINSNONE] = ACTIONS(183),
    [anon_sym_6] = ACTIONS(181),
    [anon_sym_INSIDE] = ACTIONS(183),
    [anon_sym_7] = ACTIONS(181),
    [anon_sym_NOTINSIDE] = ACTIONS(183),
    [anon_sym_NOTIN] = ACTIONS(181),
    [anon_sym_8] = ACTIONS(181),
    [anon_sym_ALLINSIDE] = ACTIONS(183),
    [anon_sym_9] = ACTIONS(181),
    [anon_sym_ANYINSIDE] = ACTIONS(183),
    [anon_sym_10] = ACTIONS(181),
    [anon_sym_NONEINSIDE] = ACTIONS(183),
    [anon_sym_11] = ACTIONS(181),
    [anon_sym_OUTSIDE] = ACTIONS(183),
    [anon_sym_INTERSECTS] = ACTIONS(183),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_SEMI] = ACTIONS(181),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_RBRACK] = ACTIONS(181),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_DASH_GT] = ACTIONS(181),
    [anon_sym_LT_DASH] = ACTIONS(181),
    [anon_sym_any] = ACTIONS(183),
    [anon_sym_array] = ACTIONS(183),
    [anon_sym_bool] = ACTIONS(183),
    [anon_sym_datetime] = ACTIONS(183),
    [anon_sym_decimal] = ACTIONS(183),
    [anon_sym_duration] = ACTIONS(183),
    [anon_sym_float] = ACTIONS(183),
    [anon_sym_int] = ACTIONS(183),
    [anon_sym_number] = ACTIONS(183),
    [anon_sym_object] = ACTIONS(183),
    [anon_sym_string] = ACTIONS(183),
    [anon_sym_record] = ACTIONS(183),
    [anon_sym_geometry] = ACTIONS(183),
    [anon_sym_EDDSA] = ACTIONS(183),
    [anon_sym_ES256] = ACTIONS(183),
    [anon_sym_ES384] = ACTIONS(183),
    [anon_sym_ES512] = ACTIONS(183),
    [anon_sym_HS256] = ACTIONS(183),
    [anon_sym_HS384] = ACTIONS(183),
    [anon_sym_HS512] = ACTIONS(183),
    [anon_sym_PS256] = ACTIONS(183),
    [anon_sym_PS384] = ACTIONS(183),
    [anon_sym_PS512] = ACTIONS(183),
    [anon_sym_RS256] = ACTIONS(183),
    [anon_sym_RS384] = ACTIONS(183),
    [anon_sym_RS512] = ACTIONS(183),
    [aux_sym_function_token1] = ACTIONS(181),
    [aux_sym_function_token2] = ACTIONS(181),
    [anon_sym_count] = ACTIONS(183),
    [aux_sym_function_token3] = ACTIONS(181),
    [aux_sym_function_token4] = ACTIONS(181),
    [aux_sym_function_token5] = ACTIONS(181),
    [aux_sym_function_token6] = ACTIONS(181),
    [aux_sym_function_token7] = ACTIONS(181),
    [aux_sym_function_token8] = ACTIONS(181),
    [aux_sym_function_token9] = ACTIONS(181),
    [aux_sym_function_token10] = ACTIONS(183),
    [aux_sym_function_token11] = ACTIONS(181),
    [aux_sym_function_token12] = ACTIONS(183),
    [aux_sym_function_token13] = ACTIONS(181),
    [aux_sym_function_token14] = ACTIONS(181),
    [aux_sym_function_token15] = ACTIONS(181),
    [aux_sym_function_token16] = ACTIONS(183),
    [anon_sym_true] = ACTIONS(183),
    [anon_sym_false] = ACTIONS(183),
    [anon_sym_TRUE] = ACTIONS(183),
    [anon_sym_FALSE] = ACTIONS(183),
    [anon_sym_null] = ACTIONS(183),
    [anon_sym_NULL] = ACTIONS(183),
    [anon_sym_none] = ACTIONS(183),
    [anon_sym_NONE] = ACTIONS(183),
    [sym_variable] = ACTIONS(181),
    [sym_comment] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(181),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [aux_sym_future_token1] = ACTIONS(185),
    [aux_sym_casting_token1] = ACTIONS(185),
    [aux_sym_property_token1] = ACTIONS(187),
    [aux_sym_identifier_token1] = ACTIONS(187),
    [aux_sym_duration_token1] = ACTIONS(187),
    [aux_sym_constant_token1] = ACTIONS(185),
    [aux_sym_number_token1] = ACTIONS(187),
    [aux_sym_record_token1] = ACTIONS(185),
    [aux_sym_record_token2] = ACTIONS(185),
    [anon_sym_USE] = ACTIONS(187),
    [anon_sym_NS] = ACTIONS(187),
    [anon_sym_DB] = ACTIONS(187),
    [anon_sym_LET] = ACTIONS(187),
    [anon_sym_BEGIN] = ACTIONS(187),
    [anon_sym_TRANSACTION] = ACTIONS(187),
    [anon_sym_CANCEL] = ACTIONS(187),
    [anon_sym_COMMIT] = ACTIONS(187),
    [anon_sym_IF] = ACTIONS(187),
    [anon_sym_ELSE] = ACTIONS(187),
    [anon_sym_THEN] = ACTIONS(187),
    [anon_sym_END] = ACTIONS(187),
    [anon_sym_SELECT] = ACTIONS(187),
    [anon_sym_FROM] = ACTIONS(187),
    [anon_sym_WHERE] = ACTIONS(187),
    [anon_sym_SPLIT] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(187),
    [anon_sym_GROUP] = ACTIONS(187),
    [anon_sym_BY] = ACTIONS(187),
    [anon_sym_ORDER] = ACTIONS(187),
    [anon_sym_COLLATE] = ACTIONS(187),
    [anon_sym_NUMERIC] = ACTIONS(187),
    [anon_sym_ASC] = ACTIONS(187),
    [anon_sym_DESC] = ACTIONS(187),
    [anon_sym_LIMIT] = ACTIONS(187),
    [anon_sym_START] = ACTIONS(187),
    [anon_sym_FETCH] = ACTIONS(187),
    [anon_sym_TIMEOUT] = ACTIONS(187),
    [anon_sym_PARALLEL] = ACTIONS(187),
    [anon_sym_INSERT] = ACTIONS(187),
    [anon_sym_IGNORE] = ACTIONS(187),
    [anon_sym_INTO] = ACTIONS(187),
    [anon_sym_VALUES] = ACTIONS(187),
    [anon_sym_ON] = ACTIONS(187),
    [anon_sym_DUPLICATE] = ACTIONS(187),
    [anon_sym_KEY] = ACTIONS(187),
    [anon_sym_UPDATE] = ACTIONS(187),
    [anon_sym_CREATE] = ACTIONS(187),
    [anon_sym_CONTENT] = ACTIONS(187),
    [anon_sym_SET] = ACTIONS(187),
    [anon_sym_RETURN] = ACTIONS(187),
    [anon_sym_BEFORE] = ACTIONS(187),
    [anon_sym_AFTER] = ACTIONS(187),
    [anon_sym_DIFF] = ACTIONS(187),
    [anon_sym_MERGE] = ACTIONS(187),
    [anon_sym_PATCH] = ACTIONS(187),
    [anon_sym_RELATE] = ACTIONS(187),
    [anon_sym_DELETE] = ACTIONS(187),
    [anon_sym_DEFINE] = ACTIONS(187),
    [anon_sym_NAMESPACE] = ACTIONS(187),
    [anon_sym_DATABASE] = ACTIONS(187),
    [anon_sym_LOGIN] = ACTIONS(187),
    [anon_sym_PASSWORD] = ACTIONS(187),
    [anon_sym_PASSHASH] = ACTIONS(187),
    [anon_sym_TOKEN] = ACTIONS(187),
    [anon_sym_SCOPE] = ACTIONS(187),
    [anon_sym_TYPE] = ACTIONS(187),
    [anon_sym_VALUE] = ACTIONS(187),
    [anon_sym_SESSION] = ACTIONS(187),
    [anon_sym_SIGNUP] = ACTIONS(187),
    [anon_sym_SIGNIN] = ACTIONS(187),
    [anon_sym_TABLE] = ACTIONS(187),
    [anon_sym_DROP] = ACTIONS(187),
    [anon_sym_SCHEMAFULL] = ACTIONS(187),
    [anon_sym_SCHEMALESS] = ACTIONS(187),
    [anon_sym_AS] = ACTIONS(187),
    [anon_sym_PERMISSIONS] = ACTIONS(187),
    [anon_sym_FULL] = ACTIONS(187),
    [anon_sym_FOR] = ACTIONS(187),
    [anon_sym_select] = ACTIONS(187),
    [anon_sym_update] = ACTIONS(187),
    [anon_sym_create] = ACTIONS(187),
    [anon_sym_delete] = ACTIONS(187),
    [anon_sym_EVENT] = ACTIONS(187),
    [anon_sym_WHEN] = ACTIONS(187),
    [anon_sym_ASSERT] = ACTIONS(187),
    [anon_sym_INDEX] = ACTIONS(187),
    [anon_sym_FIELDS] = ACTIONS(187),
    [anon_sym_COLUMNS] = ACTIONS(187),
    [anon_sym_UNIQUE] = ACTIONS(187),
    [anon_sym_REMOVE] = ACTIONS(187),
    [anon_sym_SLEEP] = ACTIONS(187),
    [anon_sym_INFO] = ACTIONS(187),
    [anon_sym_KV] = ACTIONS(187),
    [anon_sym_FUNCTION] = ACTIONS(187),
    [anon_sym_PARAM] = ACTIONS(187),
    [anon_sym_AMP_AMP] = ACTIONS(185),
    [anon_sym_AND] = ACTIONS(187),
    [anon_sym_PIPE_PIPE] = ACTIONS(185),
    [anon_sym_OR] = ACTIONS(187),
    [anon_sym_QMARK_QMARK] = ACTIONS(185),
    [anon_sym_QMARK_COLON] = ACTIONS(185),
    [anon_sym_EQ] = ACTIONS(187),
    [anon_sym_IS] = ACTIONS(187),
    [anon_sym_BANG_EQ] = ACTIONS(185),
    [anon_sym_ISNOT] = ACTIONS(185),
    [anon_sym_EQ_EQ] = ACTIONS(185),
    [anon_sym_QMARK_EQ] = ACTIONS(185),
    [anon_sym_STAR_EQ] = ACTIONS(185),
    [anon_sym_TILDE] = ACTIONS(185),
    [anon_sym_BANG_TILDE] = ACTIONS(185),
    [anon_sym_QMARK_TILDE] = ACTIONS(185),
    [anon_sym_STAR_TILDE] = ACTIONS(185),
    [anon_sym_LT] = ACTIONS(187),
    [anon_sym_LT_EQ] = ACTIONS(185),
    [anon_sym_GT] = ACTIONS(187),
    [anon_sym_GT_EQ] = ACTIONS(185),
    [anon_sym_PLUS] = ACTIONS(185),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(187),
    [anon_sym_x] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(187),
    [anon_sym_] = ACTIONS(185),
    [anon_sym_STAR_STAR] = ACTIONS(185),
    [anon_sym_IN] = ACTIONS(187),
    [anon_sym_CONTAINS] = ACTIONS(187),
    [anon_sym_2] = ACTIONS(185),
    [anon_sym_CONTAINSNOT] = ACTIONS(187),
    [anon_sym_3] = ACTIONS(185),
    [anon_sym_CONTAINSALL] = ACTIONS(187),
    [anon_sym_4] = ACTIONS(185),
    [anon_sym_CONTAINSANY] = ACTIONS(187),
    [anon_sym_5] = ACTIONS(185),
    [anon_sym_CONTAINSNONE] = ACTIONS(187),
    [anon_sym_6] = ACTIONS(185),
    [anon_sym_INSIDE] = ACTIONS(187),
    [anon_sym_7] = ACTIONS(185),
    [anon_sym_NOTINSIDE] = ACTIONS(187),
    [anon_sym_NOTIN] = ACTIONS(185),
    [anon_sym_8] = ACTIONS(185),
    [anon_sym_ALLINSIDE] = ACTIONS(187),
    [anon_sym_9] = ACTIONS(185),
    [anon_sym_ANYINSIDE] = ACTIONS(187),
    [anon_sym_10] = ACTIONS(185),
    [anon_sym_NONEINSIDE] = ACTIONS(187),
    [anon_sym_11] = ACTIONS(185),
    [anon_sym_OUTSIDE] = ACTIONS(187),
    [anon_sym_INTERSECTS] = ACTIONS(187),
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_SEMI] = ACTIONS(185),
    [anon_sym_COLON] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_RBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_RBRACE] = ACTIONS(185),
    [anon_sym_DASH_GT] = ACTIONS(185),
    [anon_sym_LT_DASH] = ACTIONS(185),
    [anon_sym_any] = ACTIONS(187),
    [anon_sym_array] = ACTIONS(187),
    [anon_sym_bool] = ACTIONS(187),
    [anon_sym_datetime] = ACTIONS(187),
    [anon_sym_decimal] = ACTIONS(187),
    [anon_sym_duration] = ACTIONS(187),
    [anon_sym_float] = ACTIONS(187),
    [anon_sym_int] = ACTIONS(187),
    [anon_sym_number] = ACTIONS(187),
    [anon_sym_object] = ACTIONS(187),
    [anon_sym_string] = ACTIONS(187),
    [anon_sym_record] = ACTIONS(187),
    [anon_sym_geometry] = ACTIONS(187),
    [anon_sym_EDDSA] = ACTIONS(187),
    [anon_sym_ES256] = ACTIONS(187),
    [anon_sym_ES384] = ACTIONS(187),
    [anon_sym_ES512] = ACTIONS(187),
    [anon_sym_HS256] = ACTIONS(187),
    [anon_sym_HS384] = ACTIONS(187),
    [anon_sym_HS512] = ACTIONS(187),
    [anon_sym_PS256] = ACTIONS(187),
    [anon_sym_PS384] = ACTIONS(187),
    [anon_sym_PS512] = ACTIONS(187),
    [anon_sym_RS256] = ACTIONS(187),
    [anon_sym_RS384] = ACTIONS(187),
    [anon_sym_RS512] = ACTIONS(187),
    [aux_sym_function_token1] = ACTIONS(185),
    [aux_sym_function_token2] = ACTIONS(185),
    [anon_sym_count] = ACTIONS(187),
    [aux_sym_function_token3] = ACTIONS(185),
    [aux_sym_function_token4] = ACTIONS(185),
    [aux_sym_function_token5] = ACTIONS(185),
    [aux_sym_function_token6] = ACTIONS(185),
    [aux_sym_function_token7] = ACTIONS(185),
    [aux_sym_function_token8] = ACTIONS(185),
    [aux_sym_function_token9] = ACTIONS(185),
    [aux_sym_function_token10] = ACTIONS(187),
    [aux_sym_function_token11] = ACTIONS(185),
    [aux_sym_function_token12] = ACTIONS(187),
    [aux_sym_function_token13] = ACTIONS(185),
    [aux_sym_function_token14] = ACTIONS(185),
    [aux_sym_function_token15] = ACTIONS(185),
    [aux_sym_function_token16] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(187),
    [anon_sym_false] = ACTIONS(187),
    [anon_sym_TRUE] = ACTIONS(187),
    [anon_sym_FALSE] = ACTIONS(187),
    [anon_sym_null] = ACTIONS(187),
    [anon_sym_NULL] = ACTIONS(187),
    [anon_sym_none] = ACTIONS(187),
    [anon_sym_NONE] = ACTIONS(187),
    [sym_variable] = ACTIONS(185),
    [sym_comment] = ACTIONS(185),
    [anon_sym_SQUOTE] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(185),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [aux_sym_future_token1] = ACTIONS(189),
    [aux_sym_casting_token1] = ACTIONS(189),
    [aux_sym_property_token1] = ACTIONS(191),
    [aux_sym_identifier_token1] = ACTIONS(191),
    [aux_sym_duration_token1] = ACTIONS(191),
    [aux_sym_constant_token1] = ACTIONS(189),
    [aux_sym_number_token1] = ACTIONS(191),
    [aux_sym_record_token1] = ACTIONS(189),
    [aux_sym_record_token2] = ACTIONS(189),
    [anon_sym_USE] = ACTIONS(191),
    [anon_sym_NS] = ACTIONS(191),
    [anon_sym_DB] = ACTIONS(191),
    [anon_sym_LET] = ACTIONS(191),
    [anon_sym_BEGIN] = ACTIONS(191),
    [anon_sym_TRANSACTION] = ACTIONS(191),
    [anon_sym_CANCEL] = ACTIONS(191),
    [anon_sym_COMMIT] = ACTIONS(191),
    [anon_sym_IF] = ACTIONS(191),
    [anon_sym_ELSE] = ACTIONS(191),
    [anon_sym_THEN] = ACTIONS(191),
    [anon_sym_END] = ACTIONS(191),
    [anon_sym_SELECT] = ACTIONS(191),
    [anon_sym_FROM] = ACTIONS(191),
    [anon_sym_WHERE] = ACTIONS(191),
    [anon_sym_SPLIT] = ACTIONS(191),
    [anon_sym_AT] = ACTIONS(191),
    [anon_sym_GROUP] = ACTIONS(191),
    [anon_sym_BY] = ACTIONS(191),
    [anon_sym_ORDER] = ACTIONS(191),
    [anon_sym_COLLATE] = ACTIONS(191),
    [anon_sym_NUMERIC] = ACTIONS(191),
    [anon_sym_ASC] = ACTIONS(191),
    [anon_sym_DESC] = ACTIONS(191),
    [anon_sym_LIMIT] = ACTIONS(191),
    [anon_sym_START] = ACTIONS(191),
    [anon_sym_FETCH] = ACTIONS(191),
    [anon_sym_TIMEOUT] = ACTIONS(191),
    [anon_sym_PARALLEL] = ACTIONS(191),
    [anon_sym_INSERT] = ACTIONS(191),
    [anon_sym_IGNORE] = ACTIONS(191),
    [anon_sym_INTO] = ACTIONS(191),
    [anon_sym_VALUES] = ACTIONS(191),
    [anon_sym_ON] = ACTIONS(191),
    [anon_sym_DUPLICATE] = ACTIONS(191),
    [anon_sym_KEY] = ACTIONS(191),
    [anon_sym_UPDATE] = ACTIONS(191),
    [anon_sym_CREATE] = ACTIONS(191),
    [anon_sym_CONTENT] = ACTIONS(191),
    [anon_sym_SET] = ACTIONS(191),
    [anon_sym_RETURN] = ACTIONS(191),
    [anon_sym_BEFORE] = ACTIONS(191),
    [anon_sym_AFTER] = ACTIONS(191),
    [anon_sym_DIFF] = ACTIONS(191),
    [anon_sym_MERGE] = ACTIONS(191),
    [anon_sym_PATCH] = ACTIONS(191),
    [anon_sym_RELATE] = ACTIONS(191),
    [anon_sym_DELETE] = ACTIONS(191),
    [anon_sym_DEFINE] = ACTIONS(191),
    [anon_sym_NAMESPACE] = ACTIONS(191),
    [anon_sym_DATABASE] = ACTIONS(191),
    [anon_sym_LOGIN] = ACTIONS(191),
    [anon_sym_PASSWORD] = ACTIONS(191),
    [anon_sym_PASSHASH] = ACTIONS(191),
    [anon_sym_TOKEN] = ACTIONS(191),
    [anon_sym_SCOPE] = ACTIONS(191),
    [anon_sym_TYPE] = ACTIONS(191),
    [anon_sym_VALUE] = ACTIONS(191),
    [anon_sym_SESSION] = ACTIONS(191),
    [anon_sym_SIGNUP] = ACTIONS(191),
    [anon_sym_SIGNIN] = ACTIONS(191),
    [anon_sym_TABLE] = ACTIONS(191),
    [anon_sym_DROP] = ACTIONS(191),
    [anon_sym_SCHEMAFULL] = ACTIONS(191),
    [anon_sym_SCHEMALESS] = ACTIONS(191),
    [anon_sym_AS] = ACTIONS(191),
    [anon_sym_PERMISSIONS] = ACTIONS(191),
    [anon_sym_FULL] = ACTIONS(191),
    [anon_sym_FOR] = ACTIONS(191),
    [anon_sym_select] = ACTIONS(191),
    [anon_sym_update] = ACTIONS(191),
    [anon_sym_create] = ACTIONS(191),
    [anon_sym_delete] = ACTIONS(191),
    [anon_sym_EVENT] = ACTIONS(191),
    [anon_sym_WHEN] = ACTIONS(191),
    [anon_sym_ASSERT] = ACTIONS(191),
    [anon_sym_INDEX] = ACTIONS(191),
    [anon_sym_FIELDS] = ACTIONS(191),
    [anon_sym_COLUMNS] = ACTIONS(191),
    [anon_sym_UNIQUE] = ACTIONS(191),
    [anon_sym_REMOVE] = ACTIONS(191),
    [anon_sym_SLEEP] = ACTIONS(191),
    [anon_sym_INFO] = ACTIONS(191),
    [anon_sym_KV] = ACTIONS(191),
    [anon_sym_FUNCTION] = ACTIONS(191),
    [anon_sym_PARAM] = ACTIONS(191),
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_AND] = ACTIONS(191),
    [anon_sym_PIPE_PIPE] = ACTIONS(189),
    [anon_sym_OR] = ACTIONS(191),
    [anon_sym_QMARK_QMARK] = ACTIONS(189),
    [anon_sym_QMARK_COLON] = ACTIONS(189),
    [anon_sym_EQ] = ACTIONS(191),
    [anon_sym_IS] = ACTIONS(191),
    [anon_sym_BANG_EQ] = ACTIONS(189),
    [anon_sym_ISNOT] = ACTIONS(189),
    [anon_sym_EQ_EQ] = ACTIONS(189),
    [anon_sym_QMARK_EQ] = ACTIONS(189),
    [anon_sym_STAR_EQ] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(189),
    [anon_sym_BANG_TILDE] = ACTIONS(189),
    [anon_sym_QMARK_TILDE] = ACTIONS(189),
    [anon_sym_STAR_TILDE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(191),
    [anon_sym_LT_EQ] = ACTIONS(189),
    [anon_sym_GT] = ACTIONS(191),
    [anon_sym_GT_EQ] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(189),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_STAR] = ACTIONS(191),
    [anon_sym_x] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(191),
    [anon_sym_] = ACTIONS(189),
    [anon_sym_STAR_STAR] = ACTIONS(189),
    [anon_sym_IN] = ACTIONS(191),
    [anon_sym_CONTAINS] = ACTIONS(191),
    [anon_sym_2] = ACTIONS(189),
    [anon_sym_CONTAINSNOT] = ACTIONS(191),
    [anon_sym_3] = ACTIONS(189),
    [anon_sym_CONTAINSALL] = ACTIONS(191),
    [anon_sym_4] = ACTIONS(189),
    [anon_sym_CONTAINSANY] = ACTIONS(191),
    [anon_sym_5] = ACTIONS(189),
    [anon_sym_CONTAINSNONE] = ACTIONS(191),
    [anon_sym_6] = ACTIONS(189),
    [anon_sym_INSIDE] = ACTIONS(191),
    [anon_sym_7] = ACTIONS(189),
    [anon_sym_NOTINSIDE] = ACTIONS(191),
    [anon_sym_NOTIN] = ACTIONS(189),
    [anon_sym_8] = ACTIONS(189),
    [anon_sym_ALLINSIDE] = ACTIONS(191),
    [anon_sym_9] = ACTIONS(189),
    [anon_sym_ANYINSIDE] = ACTIONS(191),
    [anon_sym_10] = ACTIONS(189),
    [anon_sym_NONEINSIDE] = ACTIONS(191),
    [anon_sym_11] = ACTIONS(189),
    [anon_sym_OUTSIDE] = ACTIONS(191),
    [anon_sym_INTERSECTS] = ACTIONS(191),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_SEMI] = ACTIONS(189),
    [anon_sym_COLON] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(189),
    [anon_sym_RBRACK] = ACTIONS(189),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(189),
    [anon_sym_DASH_GT] = ACTIONS(189),
    [anon_sym_LT_DASH] = ACTIONS(189),
    [anon_sym_any] = ACTIONS(191),
    [anon_sym_array] = ACTIONS(191),
    [anon_sym_bool] = ACTIONS(191),
    [anon_sym_datetime] = ACTIONS(191),
    [anon_sym_decimal] = ACTIONS(191),
    [anon_sym_duration] = ACTIONS(191),
    [anon_sym_float] = ACTIONS(191),
    [anon_sym_int] = ACTIONS(191),
    [anon_sym_number] = ACTIONS(191),
    [anon_sym_object] = ACTIONS(191),
    [anon_sym_string] = ACTIONS(191),
    [anon_sym_record] = ACTIONS(191),
    [anon_sym_geometry] = ACTIONS(191),
    [anon_sym_EDDSA] = ACTIONS(191),
    [anon_sym_ES256] = ACTIONS(191),
    [anon_sym_ES384] = ACTIONS(191),
    [anon_sym_ES512] = ACTIONS(191),
    [anon_sym_HS256] = ACTIONS(191),
    [anon_sym_HS384] = ACTIONS(191),
    [anon_sym_HS512] = ACTIONS(191),
    [anon_sym_PS256] = ACTIONS(191),
    [anon_sym_PS384] = ACTIONS(191),
    [anon_sym_PS512] = ACTIONS(191),
    [anon_sym_RS256] = ACTIONS(191),
    [anon_sym_RS384] = ACTIONS(191),
    [anon_sym_RS512] = ACTIONS(191),
    [aux_sym_function_token1] = ACTIONS(189),
    [aux_sym_function_token2] = ACTIONS(189),
    [anon_sym_count] = ACTIONS(191),
    [aux_sym_function_token3] = ACTIONS(189),
    [aux_sym_function_token4] = ACTIONS(189),
    [aux_sym_function_token5] = ACTIONS(189),
    [aux_sym_function_token6] = ACTIONS(189),
    [aux_sym_function_token7] = ACTIONS(189),
    [aux_sym_function_token8] = ACTIONS(189),
    [aux_sym_function_token9] = ACTIONS(189),
    [aux_sym_function_token10] = ACTIONS(191),
    [aux_sym_function_token11] = ACTIONS(189),
    [aux_sym_function_token12] = ACTIONS(191),
    [aux_sym_function_token13] = ACTIONS(189),
    [aux_sym_function_token14] = ACTIONS(189),
    [aux_sym_function_token15] = ACTIONS(189),
    [aux_sym_function_token16] = ACTIONS(191),
    [anon_sym_true] = ACTIONS(191),
    [anon_sym_false] = ACTIONS(191),
    [anon_sym_TRUE] = ACTIONS(191),
    [anon_sym_FALSE] = ACTIONS(191),
    [anon_sym_null] = ACTIONS(191),
    [anon_sym_NULL] = ACTIONS(191),
    [anon_sym_none] = ACTIONS(191),
    [anon_sym_NONE] = ACTIONS(191),
    [sym_variable] = ACTIONS(189),
    [sym_comment] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(189),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [aux_sym_future_token1] = ACTIONS(193),
    [aux_sym_casting_token1] = ACTIONS(193),
    [aux_sym_property_token1] = ACTIONS(195),
    [aux_sym_identifier_token1] = ACTIONS(195),
    [aux_sym_duration_token1] = ACTIONS(195),
    [aux_sym_constant_token1] = ACTIONS(193),
    [aux_sym_number_token1] = ACTIONS(195),
    [aux_sym_record_token1] = ACTIONS(193),
    [aux_sym_record_token2] = ACTIONS(193),
    [anon_sym_USE] = ACTIONS(195),
    [anon_sym_NS] = ACTIONS(195),
    [anon_sym_DB] = ACTIONS(195),
    [anon_sym_LET] = ACTIONS(195),
    [anon_sym_BEGIN] = ACTIONS(195),
    [anon_sym_TRANSACTION] = ACTIONS(195),
    [anon_sym_CANCEL] = ACTIONS(195),
    [anon_sym_COMMIT] = ACTIONS(195),
    [anon_sym_IF] = ACTIONS(195),
    [anon_sym_ELSE] = ACTIONS(195),
    [anon_sym_THEN] = ACTIONS(195),
    [anon_sym_END] = ACTIONS(195),
    [anon_sym_SELECT] = ACTIONS(195),
    [anon_sym_FROM] = ACTIONS(195),
    [anon_sym_WHERE] = ACTIONS(195),
    [anon_sym_SPLIT] = ACTIONS(195),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_GROUP] = ACTIONS(195),
    [anon_sym_BY] = ACTIONS(195),
    [anon_sym_ORDER] = ACTIONS(195),
    [anon_sym_COLLATE] = ACTIONS(195),
    [anon_sym_NUMERIC] = ACTIONS(195),
    [anon_sym_ASC] = ACTIONS(195),
    [anon_sym_DESC] = ACTIONS(195),
    [anon_sym_LIMIT] = ACTIONS(195),
    [anon_sym_START] = ACTIONS(195),
    [anon_sym_FETCH] = ACTIONS(195),
    [anon_sym_TIMEOUT] = ACTIONS(195),
    [anon_sym_PARALLEL] = ACTIONS(195),
    [anon_sym_INSERT] = ACTIONS(195),
    [anon_sym_IGNORE] = ACTIONS(195),
    [anon_sym_INTO] = ACTIONS(195),
    [anon_sym_VALUES] = ACTIONS(195),
    [anon_sym_ON] = ACTIONS(195),
    [anon_sym_DUPLICATE] = ACTIONS(195),
    [anon_sym_KEY] = ACTIONS(195),
    [anon_sym_UPDATE] = ACTIONS(195),
    [anon_sym_CREATE] = ACTIONS(195),
    [anon_sym_CONTENT] = ACTIONS(195),
    [anon_sym_SET] = ACTIONS(195),
    [anon_sym_RETURN] = ACTIONS(195),
    [anon_sym_BEFORE] = ACTIONS(195),
    [anon_sym_AFTER] = ACTIONS(195),
    [anon_sym_DIFF] = ACTIONS(195),
    [anon_sym_MERGE] = ACTIONS(195),
    [anon_sym_PATCH] = ACTIONS(195),
    [anon_sym_RELATE] = ACTIONS(195),
    [anon_sym_DELETE] = ACTIONS(195),
    [anon_sym_DEFINE] = ACTIONS(195),
    [anon_sym_NAMESPACE] = ACTIONS(195),
    [anon_sym_DATABASE] = ACTIONS(195),
    [anon_sym_LOGIN] = ACTIONS(195),
    [anon_sym_PASSWORD] = ACTIONS(195),
    [anon_sym_PASSHASH] = ACTIONS(195),
    [anon_sym_TOKEN] = ACTIONS(195),
    [anon_sym_SCOPE] = ACTIONS(195),
    [anon_sym_TYPE] = ACTIONS(195),
    [anon_sym_VALUE] = ACTIONS(195),
    [anon_sym_SESSION] = ACTIONS(195),
    [anon_sym_SIGNUP] = ACTIONS(195),
    [anon_sym_SIGNIN] = ACTIONS(195),
    [anon_sym_TABLE] = ACTIONS(195),
    [anon_sym_DROP] = ACTIONS(195),
    [anon_sym_SCHEMAFULL] = ACTIONS(195),
    [anon_sym_SCHEMALESS] = ACTIONS(195),
    [anon_sym_AS] = ACTIONS(195),
    [anon_sym_PERMISSIONS] = ACTIONS(195),
    [anon_sym_FULL] = ACTIONS(195),
    [anon_sym_FOR] = ACTIONS(195),
    [anon_sym_select] = ACTIONS(195),
    [anon_sym_update] = ACTIONS(195),
    [anon_sym_create] = ACTIONS(195),
    [anon_sym_delete] = ACTIONS(195),
    [anon_sym_EVENT] = ACTIONS(195),
    [anon_sym_WHEN] = ACTIONS(195),
    [anon_sym_ASSERT] = ACTIONS(195),
    [anon_sym_INDEX] = ACTIONS(195),
    [anon_sym_FIELDS] = ACTIONS(195),
    [anon_sym_COLUMNS] = ACTIONS(195),
    [anon_sym_UNIQUE] = ACTIONS(195),
    [anon_sym_REMOVE] = ACTIONS(195),
    [anon_sym_SLEEP] = ACTIONS(195),
    [anon_sym_INFO] = ACTIONS(195),
    [anon_sym_KV] = ACTIONS(195),
    [anon_sym_FUNCTION] = ACTIONS(195),
    [anon_sym_PARAM] = ACTIONS(195),
    [anon_sym_AMP_AMP] = ACTIONS(193),
    [anon_sym_AND] = ACTIONS(195),
    [anon_sym_PIPE_PIPE] = ACTIONS(193),
    [anon_sym_OR] = ACTIONS(195),
    [anon_sym_QMARK_QMARK] = ACTIONS(193),
    [anon_sym_QMARK_COLON] = ACTIONS(193),
    [anon_sym_EQ] = ACTIONS(195),
    [anon_sym_IS] = ACTIONS(195),
    [anon_sym_BANG_EQ] = ACTIONS(193),
    [anon_sym_ISNOT] = ACTIONS(193),
    [anon_sym_EQ_EQ] = ACTIONS(193),
    [anon_sym_QMARK_EQ] = ACTIONS(193),
    [anon_sym_STAR_EQ] = ACTIONS(193),
    [anon_sym_TILDE] = ACTIONS(193),
    [anon_sym_BANG_TILDE] = ACTIONS(193),
    [anon_sym_QMARK_TILDE] = ACTIONS(193),
    [anon_sym_STAR_TILDE] = ACTIONS(193),
    [anon_sym_LT] = ACTIONS(195),
    [anon_sym_LT_EQ] = ACTIONS(193),
    [anon_sym_GT] = ACTIONS(195),
    [anon_sym_GT_EQ] = ACTIONS(193),
    [anon_sym_PLUS] = ACTIONS(193),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_STAR] = ACTIONS(195),
    [anon_sym_x] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(195),
    [anon_sym_] = ACTIONS(193),
    [anon_sym_STAR_STAR] = ACTIONS(193),
    [anon_sym_IN] = ACTIONS(195),
    [anon_sym_CONTAINS] = ACTIONS(195),
    [anon_sym_2] = ACTIONS(193),
    [anon_sym_CONTAINSNOT] = ACTIONS(195),
    [anon_sym_3] = ACTIONS(193),
    [anon_sym_CONTAINSALL] = ACTIONS(195),
    [anon_sym_4] = ACTIONS(193),
    [anon_sym_CONTAINSANY] = ACTIONS(195),
    [anon_sym_5] = ACTIONS(193),
    [anon_sym_CONTAINSNONE] = ACTIONS(195),
    [anon_sym_6] = ACTIONS(193),
    [anon_sym_INSIDE] = ACTIONS(195),
    [anon_sym_7] = ACTIONS(193),
    [anon_sym_NOTINSIDE] = ACTIONS(195),
    [anon_sym_NOTIN] = ACTIONS(193),
    [anon_sym_8] = ACTIONS(193),
    [anon_sym_ALLINSIDE] = ACTIONS(195),
    [anon_sym_9] = ACTIONS(193),
    [anon_sym_ANYINSIDE] = ACTIONS(195),
    [anon_sym_10] = ACTIONS(193),
    [anon_sym_NONEINSIDE] = ACTIONS(195),
    [anon_sym_11] = ACTIONS(193),
    [anon_sym_OUTSIDE] = ACTIONS(195),
    [anon_sym_INTERSECTS] = ACTIONS(195),
    [anon_sym_COMMA] = ACTIONS(193),
    [anon_sym_SEMI] = ACTIONS(193),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(193),
    [anon_sym_RBRACK] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(193),
    [anon_sym_DASH_GT] = ACTIONS(193),
    [anon_sym_LT_DASH] = ACTIONS(193),
    [anon_sym_any] = ACTIONS(195),
    [anon_sym_array] = ACTIONS(195),
    [anon_sym_bool] = ACTIONS(195),
    [anon_sym_datetime] = ACTIONS(195),
    [anon_sym_decimal] = ACTIONS(195),
    [anon_sym_duration] = ACTIONS(195),
    [anon_sym_float] = ACTIONS(195),
    [anon_sym_int] = ACTIONS(195),
    [anon_sym_number] = ACTIONS(195),
    [anon_sym_object] = ACTIONS(195),
    [anon_sym_string] = ACTIONS(195),
    [anon_sym_record] = ACTIONS(195),
    [anon_sym_geometry] = ACTIONS(195),
    [anon_sym_EDDSA] = ACTIONS(195),
    [anon_sym_ES256] = ACTIONS(195),
    [anon_sym_ES384] = ACTIONS(195),
    [anon_sym_ES512] = ACTIONS(195),
    [anon_sym_HS256] = ACTIONS(195),
    [anon_sym_HS384] = ACTIONS(195),
    [anon_sym_HS512] = ACTIONS(195),
    [anon_sym_PS256] = ACTIONS(195),
    [anon_sym_PS384] = ACTIONS(195),
    [anon_sym_PS512] = ACTIONS(195),
    [anon_sym_RS256] = ACTIONS(195),
    [anon_sym_RS384] = ACTIONS(195),
    [anon_sym_RS512] = ACTIONS(195),
    [aux_sym_function_token1] = ACTIONS(193),
    [aux_sym_function_token2] = ACTIONS(193),
    [anon_sym_count] = ACTIONS(195),
    [aux_sym_function_token3] = ACTIONS(193),
    [aux_sym_function_token4] = ACTIONS(193),
    [aux_sym_function_token5] = ACTIONS(193),
    [aux_sym_function_token6] = ACTIONS(193),
    [aux_sym_function_token7] = ACTIONS(193),
    [aux_sym_function_token8] = ACTIONS(193),
    [aux_sym_function_token9] = ACTIONS(193),
    [aux_sym_function_token10] = ACTIONS(195),
    [aux_sym_function_token11] = ACTIONS(193),
    [aux_sym_function_token12] = ACTIONS(195),
    [aux_sym_function_token13] = ACTIONS(193),
    [aux_sym_function_token14] = ACTIONS(193),
    [aux_sym_function_token15] = ACTIONS(193),
    [aux_sym_function_token16] = ACTIONS(195),
    [anon_sym_true] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(195),
    [anon_sym_TRUE] = ACTIONS(195),
    [anon_sym_FALSE] = ACTIONS(195),
    [anon_sym_null] = ACTIONS(195),
    [anon_sym_NULL] = ACTIONS(195),
    [anon_sym_none] = ACTIONS(195),
    [anon_sym_NONE] = ACTIONS(195),
    [sym_variable] = ACTIONS(193),
    [sym_comment] = ACTIONS(193),
    [anon_sym_SQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(193),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [aux_sym_future_token1] = ACTIONS(197),
    [aux_sym_casting_token1] = ACTIONS(197),
    [aux_sym_property_token1] = ACTIONS(199),
    [aux_sym_identifier_token1] = ACTIONS(199),
    [aux_sym_duration_token1] = ACTIONS(199),
    [aux_sym_constant_token1] = ACTIONS(197),
    [aux_sym_number_token1] = ACTIONS(199),
    [aux_sym_record_token1] = ACTIONS(197),
    [aux_sym_record_token2] = ACTIONS(197),
    [anon_sym_USE] = ACTIONS(199),
    [anon_sym_NS] = ACTIONS(199),
    [anon_sym_DB] = ACTIONS(199),
    [anon_sym_LET] = ACTIONS(199),
    [anon_sym_BEGIN] = ACTIONS(199),
    [anon_sym_TRANSACTION] = ACTIONS(199),
    [anon_sym_CANCEL] = ACTIONS(199),
    [anon_sym_COMMIT] = ACTIONS(199),
    [anon_sym_IF] = ACTIONS(199),
    [anon_sym_ELSE] = ACTIONS(199),
    [anon_sym_THEN] = ACTIONS(199),
    [anon_sym_END] = ACTIONS(199),
    [anon_sym_SELECT] = ACTIONS(199),
    [anon_sym_FROM] = ACTIONS(199),
    [anon_sym_WHERE] = ACTIONS(199),
    [anon_sym_SPLIT] = ACTIONS(199),
    [anon_sym_AT] = ACTIONS(199),
    [anon_sym_GROUP] = ACTIONS(199),
    [anon_sym_BY] = ACTIONS(199),
    [anon_sym_ORDER] = ACTIONS(199),
    [anon_sym_COLLATE] = ACTIONS(199),
    [anon_sym_NUMERIC] = ACTIONS(199),
    [anon_sym_ASC] = ACTIONS(199),
    [anon_sym_DESC] = ACTIONS(199),
    [anon_sym_LIMIT] = ACTIONS(199),
    [anon_sym_START] = ACTIONS(199),
    [anon_sym_FETCH] = ACTIONS(199),
    [anon_sym_TIMEOUT] = ACTIONS(199),
    [anon_sym_PARALLEL] = ACTIONS(199),
    [anon_sym_INSERT] = ACTIONS(199),
    [anon_sym_IGNORE] = ACTIONS(199),
    [anon_sym_INTO] = ACTIONS(199),
    [anon_sym_VALUES] = ACTIONS(199),
    [anon_sym_ON] = ACTIONS(199),
    [anon_sym_DUPLICATE] = ACTIONS(199),
    [anon_sym_KEY] = ACTIONS(199),
    [anon_sym_UPDATE] = ACTIONS(199),
    [anon_sym_CREATE] = ACTIONS(199),
    [anon_sym_CONTENT] = ACTIONS(199),
    [anon_sym_SET] = ACTIONS(199),
    [anon_sym_RETURN] = ACTIONS(199),
    [anon_sym_BEFORE] = ACTIONS(199),
    [anon_sym_AFTER] = ACTIONS(199),
    [anon_sym_DIFF] = ACTIONS(199),
    [anon_sym_MERGE] = ACTIONS(199),
    [anon_sym_PATCH] = ACTIONS(199),
    [anon_sym_RELATE] = ACTIONS(199),
    [anon_sym_DELETE] = ACTIONS(199),
    [anon_sym_DEFINE] = ACTIONS(199),
    [anon_sym_NAMESPACE] = ACTIONS(199),
    [anon_sym_DATABASE] = ACTIONS(199),
    [anon_sym_LOGIN] = ACTIONS(199),
    [anon_sym_PASSWORD] = ACTIONS(199),
    [anon_sym_PASSHASH] = ACTIONS(199),
    [anon_sym_TOKEN] = ACTIONS(199),
    [anon_sym_SCOPE] = ACTIONS(199),
    [anon_sym_TYPE] = ACTIONS(199),
    [anon_sym_VALUE] = ACTIONS(199),
    [anon_sym_SESSION] = ACTIONS(199),
    [anon_sym_SIGNUP] = ACTIONS(199),
    [anon_sym_SIGNIN] = ACTIONS(199),
    [anon_sym_TABLE] = ACTIONS(199),
    [anon_sym_DROP] = ACTIONS(199),
    [anon_sym_SCHEMAFULL] = ACTIONS(199),
    [anon_sym_SCHEMALESS] = ACTIONS(199),
    [anon_sym_AS] = ACTIONS(199),
    [anon_sym_PERMISSIONS] = ACTIONS(199),
    [anon_sym_FULL] = ACTIONS(199),
    [anon_sym_FOR] = ACTIONS(199),
    [anon_sym_select] = ACTIONS(199),
    [anon_sym_update] = ACTIONS(199),
    [anon_sym_create] = ACTIONS(199),
    [anon_sym_delete] = ACTIONS(199),
    [anon_sym_EVENT] = ACTIONS(199),
    [anon_sym_WHEN] = ACTIONS(199),
    [anon_sym_ASSERT] = ACTIONS(199),
    [anon_sym_INDEX] = ACTIONS(199),
    [anon_sym_FIELDS] = ACTIONS(199),
    [anon_sym_COLUMNS] = ACTIONS(199),
    [anon_sym_UNIQUE] = ACTIONS(199),
    [anon_sym_REMOVE] = ACTIONS(199),
    [anon_sym_SLEEP] = ACTIONS(199),
    [anon_sym_INFO] = ACTIONS(199),
    [anon_sym_KV] = ACTIONS(199),
    [anon_sym_FUNCTION] = ACTIONS(199),
    [anon_sym_PARAM] = ACTIONS(199),
    [anon_sym_AMP_AMP] = ACTIONS(197),
    [anon_sym_AND] = ACTIONS(199),
    [anon_sym_PIPE_PIPE] = ACTIONS(197),
    [anon_sym_OR] = ACTIONS(199),
    [anon_sym_QMARK_QMARK] = ACTIONS(197),
    [anon_sym_QMARK_COLON] = ACTIONS(197),
    [anon_sym_EQ] = ACTIONS(199),
    [anon_sym_IS] = ACTIONS(199),
    [anon_sym_BANG_EQ] = ACTIONS(197),
    [anon_sym_ISNOT] = ACTIONS(197),
    [anon_sym_EQ_EQ] = ACTIONS(197),
    [anon_sym_QMARK_EQ] = ACTIONS(197),
    [anon_sym_STAR_EQ] = ACTIONS(197),
    [anon_sym_TILDE] = ACTIONS(197),
    [anon_sym_BANG_TILDE] = ACTIONS(197),
    [anon_sym_QMARK_TILDE] = ACTIONS(197),
    [anon_sym_STAR_TILDE] = ACTIONS(197),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_LT_EQ] = ACTIONS(197),
    [anon_sym_GT] = ACTIONS(199),
    [anon_sym_GT_EQ] = ACTIONS(197),
    [anon_sym_PLUS] = ACTIONS(197),
    [anon_sym_DASH] = ACTIONS(199),
    [anon_sym_STAR] = ACTIONS(199),
    [anon_sym_x] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(199),
    [anon_sym_] = ACTIONS(197),
    [anon_sym_STAR_STAR] = ACTIONS(197),
    [anon_sym_IN] = ACTIONS(199),
    [anon_sym_CONTAINS] = ACTIONS(199),
    [anon_sym_2] = ACTIONS(197),
    [anon_sym_CONTAINSNOT] = ACTIONS(199),
    [anon_sym_3] = ACTIONS(197),
    [anon_sym_CONTAINSALL] = ACTIONS(199),
    [anon_sym_4] = ACTIONS(197),
    [anon_sym_CONTAINSANY] = ACTIONS(199),
    [anon_sym_5] = ACTIONS(197),
    [anon_sym_CONTAINSNONE] = ACTIONS(199),
    [anon_sym_6] = ACTIONS(197),
    [anon_sym_INSIDE] = ACTIONS(199),
    [anon_sym_7] = ACTIONS(197),
    [anon_sym_NOTINSIDE] = ACTIONS(199),
    [anon_sym_NOTIN] = ACTIONS(197),
    [anon_sym_8] = ACTIONS(197),
    [anon_sym_ALLINSIDE] = ACTIONS(199),
    [anon_sym_9] = ACTIONS(197),
    [anon_sym_ANYINSIDE] = ACTIONS(199),
    [anon_sym_10] = ACTIONS(197),
    [anon_sym_NONEINSIDE] = ACTIONS(199),
    [anon_sym_11] = ACTIONS(197),
    [anon_sym_OUTSIDE] = ACTIONS(199),
    [anon_sym_INTERSECTS] = ACTIONS(199),
    [anon_sym_COMMA] = ACTIONS(197),
    [anon_sym_SEMI] = ACTIONS(197),
    [anon_sym_COLON] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_RBRACK] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(197),
    [anon_sym_RBRACE] = ACTIONS(197),
    [anon_sym_DASH_GT] = ACTIONS(197),
    [anon_sym_LT_DASH] = ACTIONS(197),
    [anon_sym_any] = ACTIONS(199),
    [anon_sym_array] = ACTIONS(199),
    [anon_sym_bool] = ACTIONS(199),
    [anon_sym_datetime] = ACTIONS(199),
    [anon_sym_decimal] = ACTIONS(199),
    [anon_sym_duration] = ACTIONS(199),
    [anon_sym_float] = ACTIONS(199),
    [anon_sym_int] = ACTIONS(199),
    [anon_sym_number] = ACTIONS(199),
    [anon_sym_object] = ACTIONS(199),
    [anon_sym_string] = ACTIONS(199),
    [anon_sym_record] = ACTIONS(199),
    [anon_sym_geometry] = ACTIONS(199),
    [anon_sym_EDDSA] = ACTIONS(199),
    [anon_sym_ES256] = ACTIONS(199),
    [anon_sym_ES384] = ACTIONS(199),
    [anon_sym_ES512] = ACTIONS(199),
    [anon_sym_HS256] = ACTIONS(199),
    [anon_sym_HS384] = ACTIONS(199),
    [anon_sym_HS512] = ACTIONS(199),
    [anon_sym_PS256] = ACTIONS(199),
    [anon_sym_PS384] = ACTIONS(199),
    [anon_sym_PS512] = ACTIONS(199),
    [anon_sym_RS256] = ACTIONS(199),
    [anon_sym_RS384] = ACTIONS(199),
    [anon_sym_RS512] = ACTIONS(199),
    [aux_sym_function_token1] = ACTIONS(197),
    [aux_sym_function_token2] = ACTIONS(197),
    [anon_sym_count] = ACTIONS(199),
    [aux_sym_function_token3] = ACTIONS(197),
    [aux_sym_function_token4] = ACTIONS(197),
    [aux_sym_function_token5] = ACTIONS(197),
    [aux_sym_function_token6] = ACTIONS(197),
    [aux_sym_function_token7] = ACTIONS(197),
    [aux_sym_function_token8] = ACTIONS(197),
    [aux_sym_function_token9] = ACTIONS(197),
    [aux_sym_function_token10] = ACTIONS(199),
    [aux_sym_function_token11] = ACTIONS(197),
    [aux_sym_function_token12] = ACTIONS(199),
    [aux_sym_function_token13] = ACTIONS(197),
    [aux_sym_function_token14] = ACTIONS(197),
    [aux_sym_function_token15] = ACTIONS(197),
    [aux_sym_function_token16] = ACTIONS(199),
    [anon_sym_true] = ACTIONS(199),
    [anon_sym_false] = ACTIONS(199),
    [anon_sym_TRUE] = ACTIONS(199),
    [anon_sym_FALSE] = ACTIONS(199),
    [anon_sym_null] = ACTIONS(199),
    [anon_sym_NULL] = ACTIONS(199),
    [anon_sym_none] = ACTIONS(199),
    [anon_sym_NONE] = ACTIONS(199),
    [sym_variable] = ACTIONS(197),
    [sym_comment] = ACTIONS(197),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(197),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      aux_sym_string_token1,
    ACTIONS(205), 1,
      anon_sym_BSLASH,
    STATE(25), 1,
      aux_sym_string_repeat1,
  [13] = 4,
    ACTIONS(205), 1,
      anon_sym_BSLASH,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      aux_sym_string_token1,
    STATE(28), 1,
      aux_sym_string_repeat1,
  [26] = 4,
    ACTIONS(207), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_BSLASH,
    ACTIONS(213), 1,
      aux_sym_string_token3,
    STATE(29), 1,
      aux_sym_string_repeat2,
  [39] = 4,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_BSLASH,
    ACTIONS(215), 1,
      aux_sym_string_token3,
    STATE(26), 1,
      aux_sym_string_repeat2,
  [52] = 4,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      aux_sym_string_token1,
    ACTIONS(222), 1,
      anon_sym_BSLASH,
    STATE(28), 1,
      aux_sym_string_repeat1,
  [65] = 4,
    ACTIONS(225), 1,
      anon_sym_BSLASH,
    ACTIONS(228), 1,
      anon_sym_DQUOTE,
    ACTIONS(230), 1,
      aux_sym_string_token3,
    STATE(29), 1,
      aux_sym_string_repeat2,
  [78] = 2,
    ACTIONS(233), 1,
      aux_sym_string_token1,
    ACTIONS(217), 2,
      anon_sym_SQUOTE,
      anon_sym_BSLASH,
  [86] = 2,
    ACTIONS(235), 1,
      aux_sym_string_token3,
    ACTIONS(228), 2,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
  [94] = 1,
    ACTIONS(237), 1,
      aux_sym_string_token2,
  [98] = 1,
    ACTIONS(239), 1,
      aux_sym_string_token2,
  [102] = 1,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(24)] = 0,
  [SMALL_STATE(25)] = 13,
  [SMALL_STATE(26)] = 26,
  [SMALL_STATE(27)] = 39,
  [SMALL_STATE(28)] = 52,
  [SMALL_STATE(29)] = 65,
  [SMALL_STATE(30)] = 78,
  [SMALL_STATE(31)] = 86,
  [SMALL_STATE(32)] = 94,
  [SMALL_STATE(33)] = 98,
  [SMALL_STATE(34)] = 102,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_punctuation, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_punctuation, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_algotype, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_algotype, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_future, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_future, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nothing, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nothing, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_casting, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_casting, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(28),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(32),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(33),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(29),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [241] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
