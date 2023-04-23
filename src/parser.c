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
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 23
#define SYMBOL_COUNT 239
#define ALIAS_COUNT 0
#define TOKEN_COUNT 217
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_future_token1 = 1,
  aux_sym_casting_token1 = 2,
  aux_sym_property_token1 = 3,
  aux_sym_identifier_token1 = 4,
  aux_sym_constant_token1 = 5,
  aux_sym_number_token1 = 6,
  aux_sym_record_token1 = 7,
  aux_sym_record_token2 = 8,
  anon_sym_USE = 9,
  anon_sym_NS = 10,
  anon_sym_DB = 11,
  anon_sym_LET = 12,
  anon_sym_BEGIN = 13,
  anon_sym_TRANSACTION = 14,
  anon_sym_CANCEL = 15,
  anon_sym_COMMIT = 16,
  anon_sym_IF = 17,
  anon_sym_ELSE = 18,
  anon_sym_THEN = 19,
  anon_sym_END = 20,
  anon_sym_SELECT = 21,
  anon_sym_FROM = 22,
  anon_sym_WHERE = 23,
  anon_sym_SPLIT = 24,
  anon_sym_AT = 25,
  anon_sym_GROUP = 26,
  anon_sym_BY = 27,
  anon_sym_ORDER = 28,
  anon_sym_COLLATE = 29,
  anon_sym_NUMERIC = 30,
  anon_sym_ASC = 31,
  anon_sym_DESC = 32,
  anon_sym_LIMIT = 33,
  anon_sym_START = 34,
  anon_sym_FETCH = 35,
  anon_sym_TIMEOUT = 36,
  anon_sym_PARALLEL = 37,
  anon_sym_INSERT = 38,
  anon_sym_IGNORE = 39,
  anon_sym_INTO = 40,
  anon_sym_VALUES = 41,
  anon_sym_ON = 42,
  anon_sym_DUPLICATE = 43,
  anon_sym_KEY = 44,
  anon_sym_UPDATE = 45,
  anon_sym_CREATE = 46,
  anon_sym_CONTENT = 47,
  anon_sym_SET = 48,
  anon_sym_RETURN = 49,
  anon_sym_BEFORE = 50,
  anon_sym_AFTER = 51,
  anon_sym_DIFF = 52,
  anon_sym_MERGE = 53,
  anon_sym_PATCH = 54,
  anon_sym_RELATE = 55,
  anon_sym_DELETE = 56,
  anon_sym_DEFINE = 57,
  anon_sym_NAMESPACE = 58,
  anon_sym_DATABASE = 59,
  anon_sym_LOGIN = 60,
  anon_sym_PASSWORD = 61,
  anon_sym_PASSHASH = 62,
  anon_sym_TOKEN = 63,
  anon_sym_SCOPE = 64,
  anon_sym_TYPE = 65,
  anon_sym_VALUE = 66,
  anon_sym_SESSION = 67,
  anon_sym_SIGNUP = 68,
  anon_sym_SIGNIN = 69,
  anon_sym_TABLE = 70,
  anon_sym_DROP = 71,
  anon_sym_SCHEMAFULL = 72,
  anon_sym_SCHEMALESS = 73,
  anon_sym_AS = 74,
  anon_sym_PERMISSIONS = 75,
  anon_sym_FULL = 76,
  anon_sym_FOR = 77,
  anon_sym_select = 78,
  anon_sym_update = 79,
  anon_sym_create = 80,
  anon_sym_delete = 81,
  anon_sym_EVENT = 82,
  anon_sym_WHEN = 83,
  anon_sym_ASSERT = 84,
  anon_sym_INDEX = 85,
  anon_sym_FIELDS = 86,
  anon_sym_COLUMNS = 87,
  anon_sym_UNIQUE = 88,
  anon_sym_REMOVE = 89,
  anon_sym_SLEEP = 90,
  anon_sym_INFO = 91,
  anon_sym_KV = 92,
  anon_sym_FUNCTION = 93,
  anon_sym_PARAM = 94,
  anon_sym_AMP_AMP = 95,
  anon_sym_AND = 96,
  anon_sym_PIPE_PIPE = 97,
  anon_sym_OR = 98,
  anon_sym_QMARK_QMARK = 99,
  anon_sym_QMARK_COLON = 100,
  anon_sym_EQ = 101,
  anon_sym_IS = 102,
  anon_sym_BANG_EQ = 103,
  anon_sym_ISNOT = 104,
  anon_sym_EQ_EQ = 105,
  anon_sym_QMARK_EQ = 106,
  anon_sym_STAR_EQ = 107,
  anon_sym_TILDE = 108,
  anon_sym_BANG_TILDE = 109,
  anon_sym_QMARK_TILDE = 110,
  anon_sym_STAR_TILDE = 111,
  anon_sym_LT = 112,
  anon_sym_LT_EQ = 113,
  anon_sym_GT = 114,
  anon_sym_GT_EQ = 115,
  anon_sym_PLUS = 116,
  anon_sym_DASH = 117,
  anon_sym_STAR = 118,
  anon_sym_x = 119,
  anon_sym_SLASH = 120,
  anon_sym_ = 121,
  anon_sym_STAR_STAR = 122,
  anon_sym_IN = 123,
  anon_sym_CONTAINS = 124,
  anon_sym_2 = 125,
  anon_sym_CONTAINSNOT = 126,
  anon_sym_3 = 127,
  anon_sym_CONTAINSALL = 128,
  anon_sym_4 = 129,
  anon_sym_CONTAINSANY = 130,
  anon_sym_5 = 131,
  anon_sym_CONTAINSNONE = 132,
  anon_sym_6 = 133,
  anon_sym_INSIDE = 134,
  anon_sym_7 = 135,
  anon_sym_NOTINSIDE = 136,
  anon_sym_NOTIN = 137,
  anon_sym_8 = 138,
  anon_sym_ALLINSIDE = 139,
  anon_sym_9 = 140,
  anon_sym_ANYINSIDE = 141,
  anon_sym_10 = 142,
  anon_sym_NONEINSIDE = 143,
  anon_sym_11 = 144,
  anon_sym_OUTSIDE = 145,
  anon_sym_INTERSECTS = 146,
  anon_sym_COMMA = 147,
  anon_sym_SEMI = 148,
  anon_sym_COLON = 149,
  anon_sym_LPAREN = 150,
  anon_sym_RPAREN = 151,
  anon_sym_LBRACK = 152,
  anon_sym_RBRACK = 153,
  anon_sym_LBRACE = 154,
  anon_sym_RBRACE = 155,
  anon_sym_DASH_GT = 156,
  anon_sym_LT_DASH = 157,
  anon_sym_any = 158,
  anon_sym_array = 159,
  anon_sym_bool = 160,
  anon_sym_datetime = 161,
  anon_sym_decimal = 162,
  anon_sym_duration = 163,
  anon_sym_float = 164,
  anon_sym_int = 165,
  anon_sym_number = 166,
  anon_sym_object = 167,
  anon_sym_string = 168,
  anon_sym_record = 169,
  anon_sym_geometry = 170,
  anon_sym_EDDSA = 171,
  anon_sym_ES256 = 172,
  anon_sym_ES384 = 173,
  anon_sym_ES512 = 174,
  anon_sym_HS256 = 175,
  anon_sym_HS384 = 176,
  anon_sym_HS512 = 177,
  anon_sym_PS256 = 178,
  anon_sym_PS384 = 179,
  anon_sym_PS512 = 180,
  anon_sym_RS256 = 181,
  anon_sym_RS384 = 182,
  anon_sym_RS512 = 183,
  aux_sym_function_token1 = 184,
  aux_sym_function_token2 = 185,
  anon_sym_count = 186,
  aux_sym_function_token3 = 187,
  aux_sym_function_token4 = 188,
  aux_sym_function_token5 = 189,
  aux_sym_function_token6 = 190,
  aux_sym_function_token7 = 191,
  aux_sym_function_token8 = 192,
  aux_sym_function_token9 = 193,
  aux_sym_function_token10 = 194,
  aux_sym_function_token11 = 195,
  aux_sym_function_token12 = 196,
  aux_sym_function_token13 = 197,
  aux_sym_function_token14 = 198,
  aux_sym_function_token15 = 199,
  aux_sym_function_token16 = 200,
  anon_sym_true = 201,
  anon_sym_false = 202,
  anon_sym_TRUE = 203,
  anon_sym_FALSE = 204,
  anon_sym_null = 205,
  anon_sym_NULL = 206,
  anon_sym_none = 207,
  anon_sym_NONE = 208,
  sym_variable = 209,
  sym_comment = 210,
  anon_sym_SQUOTE = 211,
  aux_sym_string_token1 = 212,
  anon_sym_BSLASH = 213,
  aux_sym_string_token2 = 214,
  anon_sym_DQUOTE = 215,
  aux_sym_string_token3 = 216,
  sym_source_file = 217,
  sym_token = 218,
  sym_future = 219,
  sym_casting = 220,
  sym_property = 221,
  sym_identifier = 222,
  sym_constant = 223,
  sym_number = 224,
  sym_record = 225,
  sym_keyword = 226,
  sym_operator = 227,
  sym_punctuation = 228,
  sym_type = 229,
  sym_datatype = 230,
  sym_algotype = 231,
  sym_function = 232,
  sym_bool = 233,
  sym_nothing = 234,
  sym_string = 235,
  aux_sym_source_file_repeat1 = 236,
  aux_sym_string_repeat1 = 237,
  aux_sym_string_repeat2 = 238,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_future_token1] = "future_token1",
  [aux_sym_casting_token1] = "casting_token1",
  [aux_sym_property_token1] = "property_token1",
  [aux_sym_identifier_token1] = "identifier_token1",
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(89);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '"') ADVANCE(800);
      if (lookahead == '#') ADVANCE(793);
      if (lookahead == '$') ADVANCE(84);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(794);
      if (lookahead == '(') ADVANCE(729);
      if (lookahead == ')') ADVANCE(730);
      if (lookahead == '*') ADVANCE(697);
      if (lookahead == '+') ADVANCE(695);
      if (lookahead == ',') ADVANCE(726);
      if (lookahead == '-') ADVANCE(696);
      if (lookahead == '/') ADVANCE(699);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == ';') ADVANCE(727);
      if (lookahead == '<') ADVANCE(691);
      if (lookahead == '=') ADVANCE(680);
      if (lookahead == '>') ADVANCE(693);
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
      if (lookahead == '[') ADVANCE(731);
      if (lookahead == '\\') ADVANCE(797);
      if (lookahead == ']') ADVANCE(732);
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
      if (lookahead == 'x') ADVANCE(698);
      if (lookahead == '{') ADVANCE(733);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '}') ADVANCE(734);
      if (lookahead == '~') ADVANCE(687);
      if (lookahead == 247) ADVANCE(700);
      if (lookahead == 8712) ADVANCE(714);
      if (lookahead == 8713) ADVANCE(717);
      if (lookahead == 8715) ADVANCE(704);
      if (lookahead == 8716) ADVANCE(706);
      if (lookahead == 8834) ADVANCE(721);
      if (lookahead == 8835) ADVANCE(710);
      if (lookahead == 8836) ADVANCE(723);
      if (lookahead == 8837) ADVANCE(712);
      if (lookahead == 8838) ADVANCE(719);
      if (lookahead == 8839) ADVANCE(708);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      if (('J' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == '/') ADVANCE(792);
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
          lookahead == ' ') ADVANCE(799);
      if (lookahead != 0) ADVANCE(798);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(800);
      if (lookahead == '\\') ADVANCE(797);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(802);
      if (lookahead != 0) ADVANCE(801);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(674);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(794);
      if (lookahead == '\\') ADVANCE(797);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(796);
      if (lookahead != 0) ADVANCE(795);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(679);
      if (lookahead == '=') ADVANCE(685);
      if (lookahead == '?') ADVANCE(678);
      if (lookahead == '~') ADVANCE(689);
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
      if (lookahead == '=') ADVANCE(682);
      if (lookahead == '~') ADVANCE(688);
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
      if (lookahead == 'N') ADVANCE(716);
      END_STATE();
    case 21:
      if (lookahead == 'O') ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'T') ADVANCE(683);
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
      if (lookahead == '|') ADVANCE(676);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      END_STATE();
    case 64:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      END_STATE();
    case 65:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 66:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 67:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      END_STATE();
    case 68:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(776);
      END_STATE();
    case 69:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(780);
      END_STATE();
    case 70:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 71:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(764);
      END_STATE();
    case 72:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 73:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 74:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 75:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(778);
      END_STATE();
    case 76:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(765);
      END_STATE();
    case 77:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(775);
      END_STATE();
    case 78:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(767);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(768);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 83:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 84:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(763);
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
          lookahead == 10217) ADVANCE(587);
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
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(586);
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
      if (lookahead == '2') ADVANCE(753);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(756);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(759);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(762);
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
      if (lookahead == '4') ADVANCE(752);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '4') ADVANCE(755);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '4') ADVANCE(758);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '4') ADVANCE(761);
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
      if (lookahead == '6') ADVANCE(751);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '6') ADVANCE(754);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '6') ADVANCE(757);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '6') ADVANCE(760);
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
      if (lookahead == 'A') ADVANCE(750);
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
      if (lookahead == 'B') ADVANCE(590);
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
      if (lookahead == 'S') ADVANCE(589);
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
      if (lookahead == 'C') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'C') ADVANCE(609);
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
      if (lookahead == 'D') ADVANCE(675);
      if (lookahead == 'Y') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'D') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'D') ADVANCE(640);
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
      if (lookahead == 'Y') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(445);
      if (lookahead == 'V') ADVANCE(671);
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
      if (lookahead == 'E') ADVANCE(588);
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
      if (lookahead == 'E') ADVANCE(597);
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
      if (lookahead == 'E') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(711);
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
      if (lookahead == 'O') ADVANCE(619);
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
      if (lookahead == 'S') ADVANCE(653);
      if (lookahead == 'T') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'F') ADVANCE(596);
      if (lookahead == 'G') ADVANCE(342);
      if (lookahead == 'N') ADVANCE(702);
      if (lookahead == 'S') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'F') ADVANCE(631);
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
      if (lookahead == 'H') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'H') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'H') ADVANCE(641);
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
      if (lookahead == 'L') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(707);
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
      if (lookahead == 'M') ADVANCE(673);
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
      if (lookahead == 'T') ADVANCE(627);
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
      if (lookahead == 'M') ADVANCE(601);
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
      if (lookahead == 'N') ADVANCE(621);
      if (lookahead == 'R') ADVANCE(677);
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
      if (lookahead == 'N') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(662);
      if (lookahead == 'R') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(593);
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
      if (lookahead == 'T') ADVANCE(705);
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
      if (lookahead == 'O') ADVANCE(670);
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
      if (lookahead == 'P') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'P') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'P') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'P') ADVANCE(647);
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
      if (lookahead == 'R') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(607);
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
      if (lookahead == 'S') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(654);
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
      if (lookahead == 'T') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(615);
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
      if (lookahead == 'X') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'Y') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'Y') ADVANCE(709);
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
      if (lookahead == 'd') ADVANCE(748);
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
      if (lookahead == 'e') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(740);
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
      if (lookahead == 'g') ADVANCE(747);
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
      if (lookahead == 'l') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(741);
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
      if (lookahead == 'n') ADVANCE(742);
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
      if (lookahead == 'r') ADVANCE(745);
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
      if (lookahead == 't') ADVANCE(744);
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
      if (lookahead == 't') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 't') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 't') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 't') ADVANCE(657);
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
      if (lookahead == 'y') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'y') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'y') ADVANCE(749);
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
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_record_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_record_token2);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_USE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_NS);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_DB);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_LET);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_BEGIN);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_TRANSACTION);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_CANCEL);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_COMMIT);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_THEN);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_SELECT);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_WHERE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_SPLIT);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_GROUP);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_BY);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_ORDER);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_COLLATE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_NUMERIC);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_ASC);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_DESC);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_LIMIT);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_START);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_FETCH);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_TIMEOUT);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_PARALLEL);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_INSERT);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_IGNORE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_INTO);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_VALUES);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_ON);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_DUPLICATE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_KEY);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_UPDATE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_CREATE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_CONTENT);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_RETURN);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_BEFORE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_AFTER);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_DIFF);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_MERGE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_RELATE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_DEFINE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_NAMESPACE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_DATABASE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_LOGIN);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_PASSWORD);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_PASSHASH);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_TOKEN);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_SCOPE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_TYPE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_VALUE);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_SESSION);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_SIGNUP);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_SIGNIN);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_TABLE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_DROP);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_SCHEMAFULL);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_SCHEMALESS);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_AS);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'C') ADVANCE(610);
      if (lookahead == 'S') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_PERMISSIONS);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_FULL);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_select);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_update);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_create);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_EVENT);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_WHEN);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_ASSERT);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_INDEX);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_FIELDS);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_COLUMNS);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_UNIQUE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_REMOVE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_SLEEP);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_INFO);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_KV);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_FUNCTION);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_PARAM);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_AND);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_OR);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'D') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_QMARK_COLON);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(684);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_IS);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_ISNOT);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_QMARK_EQ);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_QMARK_TILDE);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_STAR_TILDE);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(736);
      if (lookahead == '=') ADVANCE(692);
      if (lookahead == 'b') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(694);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(793);
      if (lookahead == '>') ADVANCE(735);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(701);
      if (lookahead == '=') ADVANCE(686);
      if (lookahead == '~') ADVANCE(690);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(793);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 702:
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
    case 703:
      ACCEPT_TOKEN(anon_sym_CONTAINS);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'A') ADVANCE(302);
      if (lookahead == 'N') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_CONTAINSNOT);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_CONTAINSALL);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_CONTAINSANY);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_CONTAINSNONE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_INSIDE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_NOTINSIDE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_NOTIN);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_ALLINSIDE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_ANYINSIDE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_NONEINSIDE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_OUTSIDE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_INTERSECTS);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_array);
      if (lookahead == ':') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_duration);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_number);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_object);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == ':') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_record);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_geometry);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_EDDSA);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_ES256);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_ES384);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_ES512);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_HS256);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_HS384);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_HS512);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_PS256);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_PS384);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_PS512);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_RS256);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_RS384);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_RS512);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_function_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(763);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_function_token2);
      if (lookahead == ':') ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(764);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_function_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(765);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_count);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_function_token3);
      if (lookahead == ':') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(767);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_function_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(768);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_function_token4);
      if (lookahead == ':') ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_function_token4);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_function_token5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_function_token6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_function_token7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_function_token8);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_function_token9);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(775);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_function_token10);
      if (lookahead == ':') ADVANCE(9);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(776);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_function_token10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_function_token11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(778);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_function_token13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_function_token14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(780);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_function_token15);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_NONE);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '.') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '.') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(793);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(795);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(798);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(801);
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
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_future_token1] = ACTIONS(1),
    [aux_sym_casting_token1] = ACTIONS(1),
    [aux_sym_property_token1] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(33),
    [sym_token] = STATE(3),
    [sym_future] = STATE(17),
    [sym_casting] = STATE(17),
    [sym_property] = STATE(17),
    [sym_identifier] = STATE(17),
    [sym_constant] = STATE(17),
    [sym_number] = STATE(17),
    [sym_record] = STATE(17),
    [sym_keyword] = STATE(17),
    [sym_operator] = STATE(17),
    [sym_punctuation] = STATE(17),
    [sym_type] = STATE(17),
    [sym_datatype] = STATE(21),
    [sym_algotype] = STATE(21),
    [sym_function] = STATE(17),
    [sym_bool] = STATE(17),
    [sym_nothing] = STATE(17),
    [sym_string] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_future_token1] = ACTIONS(5),
    [aux_sym_casting_token1] = ACTIONS(7),
    [aux_sym_property_token1] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [aux_sym_constant_token1] = ACTIONS(13),
    [aux_sym_number_token1] = ACTIONS(15),
    [aux_sym_record_token1] = ACTIONS(17),
    [aux_sym_record_token2] = ACTIONS(17),
    [anon_sym_USE] = ACTIONS(19),
    [anon_sym_NS] = ACTIONS(19),
    [anon_sym_DB] = ACTIONS(19),
    [anon_sym_LET] = ACTIONS(19),
    [anon_sym_BEGIN] = ACTIONS(19),
    [anon_sym_TRANSACTION] = ACTIONS(19),
    [anon_sym_CANCEL] = ACTIONS(19),
    [anon_sym_COMMIT] = ACTIONS(19),
    [anon_sym_IF] = ACTIONS(19),
    [anon_sym_ELSE] = ACTIONS(19),
    [anon_sym_THEN] = ACTIONS(19),
    [anon_sym_END] = ACTIONS(19),
    [anon_sym_SELECT] = ACTIONS(19),
    [anon_sym_FROM] = ACTIONS(19),
    [anon_sym_WHERE] = ACTIONS(19),
    [anon_sym_SPLIT] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(19),
    [anon_sym_GROUP] = ACTIONS(19),
    [anon_sym_BY] = ACTIONS(19),
    [anon_sym_ORDER] = ACTIONS(19),
    [anon_sym_COLLATE] = ACTIONS(19),
    [anon_sym_NUMERIC] = ACTIONS(19),
    [anon_sym_ASC] = ACTIONS(19),
    [anon_sym_DESC] = ACTIONS(19),
    [anon_sym_LIMIT] = ACTIONS(19),
    [anon_sym_START] = ACTIONS(19),
    [anon_sym_FETCH] = ACTIONS(19),
    [anon_sym_TIMEOUT] = ACTIONS(19),
    [anon_sym_PARALLEL] = ACTIONS(19),
    [anon_sym_INSERT] = ACTIONS(19),
    [anon_sym_IGNORE] = ACTIONS(19),
    [anon_sym_INTO] = ACTIONS(19),
    [anon_sym_VALUES] = ACTIONS(19),
    [anon_sym_ON] = ACTIONS(19),
    [anon_sym_DUPLICATE] = ACTIONS(19),
    [anon_sym_KEY] = ACTIONS(19),
    [anon_sym_UPDATE] = ACTIONS(19),
    [anon_sym_CREATE] = ACTIONS(19),
    [anon_sym_CONTENT] = ACTIONS(19),
    [anon_sym_SET] = ACTIONS(19),
    [anon_sym_RETURN] = ACTIONS(19),
    [anon_sym_BEFORE] = ACTIONS(19),
    [anon_sym_AFTER] = ACTIONS(19),
    [anon_sym_DIFF] = ACTIONS(19),
    [anon_sym_MERGE] = ACTIONS(19),
    [anon_sym_PATCH] = ACTIONS(19),
    [anon_sym_RELATE] = ACTIONS(19),
    [anon_sym_DELETE] = ACTIONS(19),
    [anon_sym_DEFINE] = ACTIONS(19),
    [anon_sym_NAMESPACE] = ACTIONS(19),
    [anon_sym_DATABASE] = ACTIONS(19),
    [anon_sym_LOGIN] = ACTIONS(19),
    [anon_sym_PASSWORD] = ACTIONS(19),
    [anon_sym_PASSHASH] = ACTIONS(19),
    [anon_sym_TOKEN] = ACTIONS(19),
    [anon_sym_SCOPE] = ACTIONS(19),
    [anon_sym_TYPE] = ACTIONS(19),
    [anon_sym_VALUE] = ACTIONS(19),
    [anon_sym_SESSION] = ACTIONS(19),
    [anon_sym_SIGNUP] = ACTIONS(19),
    [anon_sym_SIGNIN] = ACTIONS(19),
    [anon_sym_TABLE] = ACTIONS(19),
    [anon_sym_DROP] = ACTIONS(19),
    [anon_sym_SCHEMAFULL] = ACTIONS(19),
    [anon_sym_SCHEMALESS] = ACTIONS(19),
    [anon_sym_AS] = ACTIONS(19),
    [anon_sym_PERMISSIONS] = ACTIONS(19),
    [anon_sym_FULL] = ACTIONS(19),
    [anon_sym_FOR] = ACTIONS(19),
    [anon_sym_select] = ACTIONS(19),
    [anon_sym_update] = ACTIONS(19),
    [anon_sym_create] = ACTIONS(19),
    [anon_sym_delete] = ACTIONS(19),
    [anon_sym_EVENT] = ACTIONS(19),
    [anon_sym_WHEN] = ACTIONS(19),
    [anon_sym_ASSERT] = ACTIONS(19),
    [anon_sym_INDEX] = ACTIONS(19),
    [anon_sym_FIELDS] = ACTIONS(19),
    [anon_sym_COLUMNS] = ACTIONS(19),
    [anon_sym_UNIQUE] = ACTIONS(19),
    [anon_sym_REMOVE] = ACTIONS(19),
    [anon_sym_SLEEP] = ACTIONS(19),
    [anon_sym_INFO] = ACTIONS(19),
    [anon_sym_KV] = ACTIONS(19),
    [anon_sym_FUNCTION] = ACTIONS(19),
    [anon_sym_PARAM] = ACTIONS(19),
    [anon_sym_AMP_AMP] = ACTIONS(21),
    [anon_sym_AND] = ACTIONS(23),
    [anon_sym_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_OR] = ACTIONS(23),
    [anon_sym_QMARK_QMARK] = ACTIONS(21),
    [anon_sym_QMARK_COLON] = ACTIONS(21),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_IS] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_ISNOT] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_QMARK_EQ] = ACTIONS(21),
    [anon_sym_STAR_EQ] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_BANG_TILDE] = ACTIONS(21),
    [anon_sym_QMARK_TILDE] = ACTIONS(21),
    [anon_sym_STAR_TILDE] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_x] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_] = ACTIONS(21),
    [anon_sym_STAR_STAR] = ACTIONS(21),
    [anon_sym_IN] = ACTIONS(23),
    [anon_sym_CONTAINS] = ACTIONS(23),
    [anon_sym_2] = ACTIONS(21),
    [anon_sym_CONTAINSNOT] = ACTIONS(23),
    [anon_sym_3] = ACTIONS(21),
    [anon_sym_CONTAINSALL] = ACTIONS(23),
    [anon_sym_4] = ACTIONS(21),
    [anon_sym_CONTAINSANY] = ACTIONS(23),
    [anon_sym_5] = ACTIONS(21),
    [anon_sym_CONTAINSNONE] = ACTIONS(23),
    [anon_sym_6] = ACTIONS(21),
    [anon_sym_INSIDE] = ACTIONS(23),
    [anon_sym_7] = ACTIONS(21),
    [anon_sym_NOTINSIDE] = ACTIONS(23),
    [anon_sym_NOTIN] = ACTIONS(21),
    [anon_sym_8] = ACTIONS(21),
    [anon_sym_ALLINSIDE] = ACTIONS(23),
    [anon_sym_9] = ACTIONS(21),
    [anon_sym_ANYINSIDE] = ACTIONS(23),
    [anon_sym_10] = ACTIONS(21),
    [anon_sym_NONEINSIDE] = ACTIONS(23),
    [anon_sym_11] = ACTIONS(21),
    [anon_sym_OUTSIDE] = ACTIONS(23),
    [anon_sym_INTERSECTS] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(25),
    [anon_sym_DASH_GT] = ACTIONS(25),
    [anon_sym_LT_DASH] = ACTIONS(25),
    [anon_sym_any] = ACTIONS(27),
    [anon_sym_array] = ACTIONS(27),
    [anon_sym_bool] = ACTIONS(27),
    [anon_sym_datetime] = ACTIONS(27),
    [anon_sym_decimal] = ACTIONS(27),
    [anon_sym_duration] = ACTIONS(27),
    [anon_sym_float] = ACTIONS(27),
    [anon_sym_int] = ACTIONS(27),
    [anon_sym_number] = ACTIONS(27),
    [anon_sym_object] = ACTIONS(27),
    [anon_sym_string] = ACTIONS(27),
    [anon_sym_record] = ACTIONS(27),
    [anon_sym_geometry] = ACTIONS(27),
    [anon_sym_EDDSA] = ACTIONS(29),
    [anon_sym_ES256] = ACTIONS(29),
    [anon_sym_ES384] = ACTIONS(29),
    [anon_sym_ES512] = ACTIONS(29),
    [anon_sym_HS256] = ACTIONS(29),
    [anon_sym_HS384] = ACTIONS(29),
    [anon_sym_HS512] = ACTIONS(29),
    [anon_sym_PS256] = ACTIONS(29),
    [anon_sym_PS384] = ACTIONS(29),
    [anon_sym_PS512] = ACTIONS(29),
    [anon_sym_RS256] = ACTIONS(29),
    [anon_sym_RS384] = ACTIONS(29),
    [anon_sym_RS512] = ACTIONS(29),
    [aux_sym_function_token1] = ACTIONS(31),
    [aux_sym_function_token2] = ACTIONS(31),
    [anon_sym_count] = ACTIONS(33),
    [aux_sym_function_token3] = ACTIONS(31),
    [aux_sym_function_token4] = ACTIONS(31),
    [aux_sym_function_token5] = ACTIONS(31),
    [aux_sym_function_token6] = ACTIONS(31),
    [aux_sym_function_token7] = ACTIONS(31),
    [aux_sym_function_token8] = ACTIONS(31),
    [aux_sym_function_token9] = ACTIONS(31),
    [aux_sym_function_token10] = ACTIONS(33),
    [aux_sym_function_token11] = ACTIONS(31),
    [aux_sym_function_token12] = ACTIONS(33),
    [aux_sym_function_token13] = ACTIONS(31),
    [aux_sym_function_token14] = ACTIONS(31),
    [aux_sym_function_token15] = ACTIONS(31),
    [aux_sym_function_token16] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_TRUE] = ACTIONS(35),
    [anon_sym_FALSE] = ACTIONS(35),
    [anon_sym_null] = ACTIONS(37),
    [anon_sym_NULL] = ACTIONS(37),
    [anon_sym_none] = ACTIONS(37),
    [anon_sym_NONE] = ACTIONS(37),
    [sym_variable] = ACTIONS(39),
    [sym_comment] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
  },
  [2] = {
    [sym_token] = STATE(2),
    [sym_future] = STATE(17),
    [sym_casting] = STATE(17),
    [sym_property] = STATE(17),
    [sym_identifier] = STATE(17),
    [sym_constant] = STATE(17),
    [sym_number] = STATE(17),
    [sym_record] = STATE(17),
    [sym_keyword] = STATE(17),
    [sym_operator] = STATE(17),
    [sym_punctuation] = STATE(17),
    [sym_type] = STATE(17),
    [sym_datatype] = STATE(21),
    [sym_algotype] = STATE(21),
    [sym_function] = STATE(17),
    [sym_bool] = STATE(17),
    [sym_nothing] = STATE(17),
    [sym_string] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(47),
    [aux_sym_future_token1] = ACTIONS(49),
    [aux_sym_casting_token1] = ACTIONS(52),
    [aux_sym_property_token1] = ACTIONS(55),
    [aux_sym_identifier_token1] = ACTIONS(58),
    [aux_sym_constant_token1] = ACTIONS(61),
    [aux_sym_number_token1] = ACTIONS(64),
    [aux_sym_record_token1] = ACTIONS(67),
    [aux_sym_record_token2] = ACTIONS(67),
    [anon_sym_USE] = ACTIONS(70),
    [anon_sym_NS] = ACTIONS(70),
    [anon_sym_DB] = ACTIONS(70),
    [anon_sym_LET] = ACTIONS(70),
    [anon_sym_BEGIN] = ACTIONS(70),
    [anon_sym_TRANSACTION] = ACTIONS(70),
    [anon_sym_CANCEL] = ACTIONS(70),
    [anon_sym_COMMIT] = ACTIONS(70),
    [anon_sym_IF] = ACTIONS(70),
    [anon_sym_ELSE] = ACTIONS(70),
    [anon_sym_THEN] = ACTIONS(70),
    [anon_sym_END] = ACTIONS(70),
    [anon_sym_SELECT] = ACTIONS(70),
    [anon_sym_FROM] = ACTIONS(70),
    [anon_sym_WHERE] = ACTIONS(70),
    [anon_sym_SPLIT] = ACTIONS(70),
    [anon_sym_AT] = ACTIONS(70),
    [anon_sym_GROUP] = ACTIONS(70),
    [anon_sym_BY] = ACTIONS(70),
    [anon_sym_ORDER] = ACTIONS(70),
    [anon_sym_COLLATE] = ACTIONS(70),
    [anon_sym_NUMERIC] = ACTIONS(70),
    [anon_sym_ASC] = ACTIONS(70),
    [anon_sym_DESC] = ACTIONS(70),
    [anon_sym_LIMIT] = ACTIONS(70),
    [anon_sym_START] = ACTIONS(70),
    [anon_sym_FETCH] = ACTIONS(70),
    [anon_sym_TIMEOUT] = ACTIONS(70),
    [anon_sym_PARALLEL] = ACTIONS(70),
    [anon_sym_INSERT] = ACTIONS(70),
    [anon_sym_IGNORE] = ACTIONS(70),
    [anon_sym_INTO] = ACTIONS(70),
    [anon_sym_VALUES] = ACTIONS(70),
    [anon_sym_ON] = ACTIONS(70),
    [anon_sym_DUPLICATE] = ACTIONS(70),
    [anon_sym_KEY] = ACTIONS(70),
    [anon_sym_UPDATE] = ACTIONS(70),
    [anon_sym_CREATE] = ACTIONS(70),
    [anon_sym_CONTENT] = ACTIONS(70),
    [anon_sym_SET] = ACTIONS(70),
    [anon_sym_RETURN] = ACTIONS(70),
    [anon_sym_BEFORE] = ACTIONS(70),
    [anon_sym_AFTER] = ACTIONS(70),
    [anon_sym_DIFF] = ACTIONS(70),
    [anon_sym_MERGE] = ACTIONS(70),
    [anon_sym_PATCH] = ACTIONS(70),
    [anon_sym_RELATE] = ACTIONS(70),
    [anon_sym_DELETE] = ACTIONS(70),
    [anon_sym_DEFINE] = ACTIONS(70),
    [anon_sym_NAMESPACE] = ACTIONS(70),
    [anon_sym_DATABASE] = ACTIONS(70),
    [anon_sym_LOGIN] = ACTIONS(70),
    [anon_sym_PASSWORD] = ACTIONS(70),
    [anon_sym_PASSHASH] = ACTIONS(70),
    [anon_sym_TOKEN] = ACTIONS(70),
    [anon_sym_SCOPE] = ACTIONS(70),
    [anon_sym_TYPE] = ACTIONS(70),
    [anon_sym_VALUE] = ACTIONS(70),
    [anon_sym_SESSION] = ACTIONS(70),
    [anon_sym_SIGNUP] = ACTIONS(70),
    [anon_sym_SIGNIN] = ACTIONS(70),
    [anon_sym_TABLE] = ACTIONS(70),
    [anon_sym_DROP] = ACTIONS(70),
    [anon_sym_SCHEMAFULL] = ACTIONS(70),
    [anon_sym_SCHEMALESS] = ACTIONS(70),
    [anon_sym_AS] = ACTIONS(70),
    [anon_sym_PERMISSIONS] = ACTIONS(70),
    [anon_sym_FULL] = ACTIONS(70),
    [anon_sym_FOR] = ACTIONS(70),
    [anon_sym_select] = ACTIONS(70),
    [anon_sym_update] = ACTIONS(70),
    [anon_sym_create] = ACTIONS(70),
    [anon_sym_delete] = ACTIONS(70),
    [anon_sym_EVENT] = ACTIONS(70),
    [anon_sym_WHEN] = ACTIONS(70),
    [anon_sym_ASSERT] = ACTIONS(70),
    [anon_sym_INDEX] = ACTIONS(70),
    [anon_sym_FIELDS] = ACTIONS(70),
    [anon_sym_COLUMNS] = ACTIONS(70),
    [anon_sym_UNIQUE] = ACTIONS(70),
    [anon_sym_REMOVE] = ACTIONS(70),
    [anon_sym_SLEEP] = ACTIONS(70),
    [anon_sym_INFO] = ACTIONS(70),
    [anon_sym_KV] = ACTIONS(70),
    [anon_sym_FUNCTION] = ACTIONS(70),
    [anon_sym_PARAM] = ACTIONS(70),
    [anon_sym_AMP_AMP] = ACTIONS(73),
    [anon_sym_AND] = ACTIONS(76),
    [anon_sym_PIPE_PIPE] = ACTIONS(73),
    [anon_sym_OR] = ACTIONS(76),
    [anon_sym_QMARK_QMARK] = ACTIONS(73),
    [anon_sym_QMARK_COLON] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(76),
    [anon_sym_IS] = ACTIONS(76),
    [anon_sym_BANG_EQ] = ACTIONS(73),
    [anon_sym_ISNOT] = ACTIONS(73),
    [anon_sym_EQ_EQ] = ACTIONS(73),
    [anon_sym_QMARK_EQ] = ACTIONS(73),
    [anon_sym_STAR_EQ] = ACTIONS(73),
    [anon_sym_TILDE] = ACTIONS(73),
    [anon_sym_BANG_TILDE] = ACTIONS(73),
    [anon_sym_QMARK_TILDE] = ACTIONS(73),
    [anon_sym_STAR_TILDE] = ACTIONS(73),
    [anon_sym_LT] = ACTIONS(76),
    [anon_sym_LT_EQ] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(76),
    [anon_sym_GT_EQ] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(76),
    [anon_sym_STAR] = ACTIONS(76),
    [anon_sym_x] = ACTIONS(76),
    [anon_sym_SLASH] = ACTIONS(76),
    [anon_sym_] = ACTIONS(73),
    [anon_sym_STAR_STAR] = ACTIONS(73),
    [anon_sym_IN] = ACTIONS(76),
    [anon_sym_CONTAINS] = ACTIONS(76),
    [anon_sym_2] = ACTIONS(73),
    [anon_sym_CONTAINSNOT] = ACTIONS(76),
    [anon_sym_3] = ACTIONS(73),
    [anon_sym_CONTAINSALL] = ACTIONS(76),
    [anon_sym_4] = ACTIONS(73),
    [anon_sym_CONTAINSANY] = ACTIONS(76),
    [anon_sym_5] = ACTIONS(73),
    [anon_sym_CONTAINSNONE] = ACTIONS(76),
    [anon_sym_6] = ACTIONS(73),
    [anon_sym_INSIDE] = ACTIONS(76),
    [anon_sym_7] = ACTIONS(73),
    [anon_sym_NOTINSIDE] = ACTIONS(76),
    [anon_sym_NOTIN] = ACTIONS(73),
    [anon_sym_8] = ACTIONS(73),
    [anon_sym_ALLINSIDE] = ACTIONS(76),
    [anon_sym_9] = ACTIONS(73),
    [anon_sym_ANYINSIDE] = ACTIONS(76),
    [anon_sym_10] = ACTIONS(73),
    [anon_sym_NONEINSIDE] = ACTIONS(76),
    [anon_sym_11] = ACTIONS(73),
    [anon_sym_OUTSIDE] = ACTIONS(76),
    [anon_sym_INTERSECTS] = ACTIONS(76),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [anon_sym_LT_DASH] = ACTIONS(79),
    [anon_sym_any] = ACTIONS(82),
    [anon_sym_array] = ACTIONS(82),
    [anon_sym_bool] = ACTIONS(82),
    [anon_sym_datetime] = ACTIONS(82),
    [anon_sym_decimal] = ACTIONS(82),
    [anon_sym_duration] = ACTIONS(82),
    [anon_sym_float] = ACTIONS(82),
    [anon_sym_int] = ACTIONS(82),
    [anon_sym_number] = ACTIONS(82),
    [anon_sym_object] = ACTIONS(82),
    [anon_sym_string] = ACTIONS(82),
    [anon_sym_record] = ACTIONS(82),
    [anon_sym_geometry] = ACTIONS(82),
    [anon_sym_EDDSA] = ACTIONS(85),
    [anon_sym_ES256] = ACTIONS(85),
    [anon_sym_ES384] = ACTIONS(85),
    [anon_sym_ES512] = ACTIONS(85),
    [anon_sym_HS256] = ACTIONS(85),
    [anon_sym_HS384] = ACTIONS(85),
    [anon_sym_HS512] = ACTIONS(85),
    [anon_sym_PS256] = ACTIONS(85),
    [anon_sym_PS384] = ACTIONS(85),
    [anon_sym_PS512] = ACTIONS(85),
    [anon_sym_RS256] = ACTIONS(85),
    [anon_sym_RS384] = ACTIONS(85),
    [anon_sym_RS512] = ACTIONS(85),
    [aux_sym_function_token1] = ACTIONS(88),
    [aux_sym_function_token2] = ACTIONS(88),
    [anon_sym_count] = ACTIONS(91),
    [aux_sym_function_token3] = ACTIONS(88),
    [aux_sym_function_token4] = ACTIONS(88),
    [aux_sym_function_token5] = ACTIONS(88),
    [aux_sym_function_token6] = ACTIONS(88),
    [aux_sym_function_token7] = ACTIONS(88),
    [aux_sym_function_token8] = ACTIONS(88),
    [aux_sym_function_token9] = ACTIONS(88),
    [aux_sym_function_token10] = ACTIONS(91),
    [aux_sym_function_token11] = ACTIONS(88),
    [aux_sym_function_token12] = ACTIONS(91),
    [aux_sym_function_token13] = ACTIONS(88),
    [aux_sym_function_token14] = ACTIONS(88),
    [aux_sym_function_token15] = ACTIONS(88),
    [aux_sym_function_token16] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(94),
    [anon_sym_false] = ACTIONS(94),
    [anon_sym_TRUE] = ACTIONS(94),
    [anon_sym_FALSE] = ACTIONS(94),
    [anon_sym_null] = ACTIONS(97),
    [anon_sym_NULL] = ACTIONS(97),
    [anon_sym_none] = ACTIONS(97),
    [anon_sym_NONE] = ACTIONS(97),
    [sym_variable] = ACTIONS(100),
    [sym_comment] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(106),
    [anon_sym_DQUOTE] = ACTIONS(109),
  },
  [3] = {
    [sym_token] = STATE(2),
    [sym_future] = STATE(17),
    [sym_casting] = STATE(17),
    [sym_property] = STATE(17),
    [sym_identifier] = STATE(17),
    [sym_constant] = STATE(17),
    [sym_number] = STATE(17),
    [sym_record] = STATE(17),
    [sym_keyword] = STATE(17),
    [sym_operator] = STATE(17),
    [sym_punctuation] = STATE(17),
    [sym_type] = STATE(17),
    [sym_datatype] = STATE(21),
    [sym_algotype] = STATE(21),
    [sym_function] = STATE(17),
    [sym_bool] = STATE(17),
    [sym_nothing] = STATE(17),
    [sym_string] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(112),
    [aux_sym_future_token1] = ACTIONS(5),
    [aux_sym_casting_token1] = ACTIONS(7),
    [aux_sym_property_token1] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [aux_sym_constant_token1] = ACTIONS(13),
    [aux_sym_number_token1] = ACTIONS(15),
    [aux_sym_record_token1] = ACTIONS(17),
    [aux_sym_record_token2] = ACTIONS(17),
    [anon_sym_USE] = ACTIONS(19),
    [anon_sym_NS] = ACTIONS(19),
    [anon_sym_DB] = ACTIONS(19),
    [anon_sym_LET] = ACTIONS(19),
    [anon_sym_BEGIN] = ACTIONS(19),
    [anon_sym_TRANSACTION] = ACTIONS(19),
    [anon_sym_CANCEL] = ACTIONS(19),
    [anon_sym_COMMIT] = ACTIONS(19),
    [anon_sym_IF] = ACTIONS(19),
    [anon_sym_ELSE] = ACTIONS(19),
    [anon_sym_THEN] = ACTIONS(19),
    [anon_sym_END] = ACTIONS(19),
    [anon_sym_SELECT] = ACTIONS(19),
    [anon_sym_FROM] = ACTIONS(19),
    [anon_sym_WHERE] = ACTIONS(19),
    [anon_sym_SPLIT] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(19),
    [anon_sym_GROUP] = ACTIONS(19),
    [anon_sym_BY] = ACTIONS(19),
    [anon_sym_ORDER] = ACTIONS(19),
    [anon_sym_COLLATE] = ACTIONS(19),
    [anon_sym_NUMERIC] = ACTIONS(19),
    [anon_sym_ASC] = ACTIONS(19),
    [anon_sym_DESC] = ACTIONS(19),
    [anon_sym_LIMIT] = ACTIONS(19),
    [anon_sym_START] = ACTIONS(19),
    [anon_sym_FETCH] = ACTIONS(19),
    [anon_sym_TIMEOUT] = ACTIONS(19),
    [anon_sym_PARALLEL] = ACTIONS(19),
    [anon_sym_INSERT] = ACTIONS(19),
    [anon_sym_IGNORE] = ACTIONS(19),
    [anon_sym_INTO] = ACTIONS(19),
    [anon_sym_VALUES] = ACTIONS(19),
    [anon_sym_ON] = ACTIONS(19),
    [anon_sym_DUPLICATE] = ACTIONS(19),
    [anon_sym_KEY] = ACTIONS(19),
    [anon_sym_UPDATE] = ACTIONS(19),
    [anon_sym_CREATE] = ACTIONS(19),
    [anon_sym_CONTENT] = ACTIONS(19),
    [anon_sym_SET] = ACTIONS(19),
    [anon_sym_RETURN] = ACTIONS(19),
    [anon_sym_BEFORE] = ACTIONS(19),
    [anon_sym_AFTER] = ACTIONS(19),
    [anon_sym_DIFF] = ACTIONS(19),
    [anon_sym_MERGE] = ACTIONS(19),
    [anon_sym_PATCH] = ACTIONS(19),
    [anon_sym_RELATE] = ACTIONS(19),
    [anon_sym_DELETE] = ACTIONS(19),
    [anon_sym_DEFINE] = ACTIONS(19),
    [anon_sym_NAMESPACE] = ACTIONS(19),
    [anon_sym_DATABASE] = ACTIONS(19),
    [anon_sym_LOGIN] = ACTIONS(19),
    [anon_sym_PASSWORD] = ACTIONS(19),
    [anon_sym_PASSHASH] = ACTIONS(19),
    [anon_sym_TOKEN] = ACTIONS(19),
    [anon_sym_SCOPE] = ACTIONS(19),
    [anon_sym_TYPE] = ACTIONS(19),
    [anon_sym_VALUE] = ACTIONS(19),
    [anon_sym_SESSION] = ACTIONS(19),
    [anon_sym_SIGNUP] = ACTIONS(19),
    [anon_sym_SIGNIN] = ACTIONS(19),
    [anon_sym_TABLE] = ACTIONS(19),
    [anon_sym_DROP] = ACTIONS(19),
    [anon_sym_SCHEMAFULL] = ACTIONS(19),
    [anon_sym_SCHEMALESS] = ACTIONS(19),
    [anon_sym_AS] = ACTIONS(19),
    [anon_sym_PERMISSIONS] = ACTIONS(19),
    [anon_sym_FULL] = ACTIONS(19),
    [anon_sym_FOR] = ACTIONS(19),
    [anon_sym_select] = ACTIONS(19),
    [anon_sym_update] = ACTIONS(19),
    [anon_sym_create] = ACTIONS(19),
    [anon_sym_delete] = ACTIONS(19),
    [anon_sym_EVENT] = ACTIONS(19),
    [anon_sym_WHEN] = ACTIONS(19),
    [anon_sym_ASSERT] = ACTIONS(19),
    [anon_sym_INDEX] = ACTIONS(19),
    [anon_sym_FIELDS] = ACTIONS(19),
    [anon_sym_COLUMNS] = ACTIONS(19),
    [anon_sym_UNIQUE] = ACTIONS(19),
    [anon_sym_REMOVE] = ACTIONS(19),
    [anon_sym_SLEEP] = ACTIONS(19),
    [anon_sym_INFO] = ACTIONS(19),
    [anon_sym_KV] = ACTIONS(19),
    [anon_sym_FUNCTION] = ACTIONS(19),
    [anon_sym_PARAM] = ACTIONS(19),
    [anon_sym_AMP_AMP] = ACTIONS(21),
    [anon_sym_AND] = ACTIONS(23),
    [anon_sym_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_OR] = ACTIONS(23),
    [anon_sym_QMARK_QMARK] = ACTIONS(21),
    [anon_sym_QMARK_COLON] = ACTIONS(21),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_IS] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_ISNOT] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_QMARK_EQ] = ACTIONS(21),
    [anon_sym_STAR_EQ] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_BANG_TILDE] = ACTIONS(21),
    [anon_sym_QMARK_TILDE] = ACTIONS(21),
    [anon_sym_STAR_TILDE] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_x] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_] = ACTIONS(21),
    [anon_sym_STAR_STAR] = ACTIONS(21),
    [anon_sym_IN] = ACTIONS(23),
    [anon_sym_CONTAINS] = ACTIONS(23),
    [anon_sym_2] = ACTIONS(21),
    [anon_sym_CONTAINSNOT] = ACTIONS(23),
    [anon_sym_3] = ACTIONS(21),
    [anon_sym_CONTAINSALL] = ACTIONS(23),
    [anon_sym_4] = ACTIONS(21),
    [anon_sym_CONTAINSANY] = ACTIONS(23),
    [anon_sym_5] = ACTIONS(21),
    [anon_sym_CONTAINSNONE] = ACTIONS(23),
    [anon_sym_6] = ACTIONS(21),
    [anon_sym_INSIDE] = ACTIONS(23),
    [anon_sym_7] = ACTIONS(21),
    [anon_sym_NOTINSIDE] = ACTIONS(23),
    [anon_sym_NOTIN] = ACTIONS(21),
    [anon_sym_8] = ACTIONS(21),
    [anon_sym_ALLINSIDE] = ACTIONS(23),
    [anon_sym_9] = ACTIONS(21),
    [anon_sym_ANYINSIDE] = ACTIONS(23),
    [anon_sym_10] = ACTIONS(21),
    [anon_sym_NONEINSIDE] = ACTIONS(23),
    [anon_sym_11] = ACTIONS(21),
    [anon_sym_OUTSIDE] = ACTIONS(23),
    [anon_sym_INTERSECTS] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(25),
    [anon_sym_DASH_GT] = ACTIONS(25),
    [anon_sym_LT_DASH] = ACTIONS(25),
    [anon_sym_any] = ACTIONS(27),
    [anon_sym_array] = ACTIONS(27),
    [anon_sym_bool] = ACTIONS(27),
    [anon_sym_datetime] = ACTIONS(27),
    [anon_sym_decimal] = ACTIONS(27),
    [anon_sym_duration] = ACTIONS(27),
    [anon_sym_float] = ACTIONS(27),
    [anon_sym_int] = ACTIONS(27),
    [anon_sym_number] = ACTIONS(27),
    [anon_sym_object] = ACTIONS(27),
    [anon_sym_string] = ACTIONS(27),
    [anon_sym_record] = ACTIONS(27),
    [anon_sym_geometry] = ACTIONS(27),
    [anon_sym_EDDSA] = ACTIONS(29),
    [anon_sym_ES256] = ACTIONS(29),
    [anon_sym_ES384] = ACTIONS(29),
    [anon_sym_ES512] = ACTIONS(29),
    [anon_sym_HS256] = ACTIONS(29),
    [anon_sym_HS384] = ACTIONS(29),
    [anon_sym_HS512] = ACTIONS(29),
    [anon_sym_PS256] = ACTIONS(29),
    [anon_sym_PS384] = ACTIONS(29),
    [anon_sym_PS512] = ACTIONS(29),
    [anon_sym_RS256] = ACTIONS(29),
    [anon_sym_RS384] = ACTIONS(29),
    [anon_sym_RS512] = ACTIONS(29),
    [aux_sym_function_token1] = ACTIONS(31),
    [aux_sym_function_token2] = ACTIONS(31),
    [anon_sym_count] = ACTIONS(33),
    [aux_sym_function_token3] = ACTIONS(31),
    [aux_sym_function_token4] = ACTIONS(31),
    [aux_sym_function_token5] = ACTIONS(31),
    [aux_sym_function_token6] = ACTIONS(31),
    [aux_sym_function_token7] = ACTIONS(31),
    [aux_sym_function_token8] = ACTIONS(31),
    [aux_sym_function_token9] = ACTIONS(31),
    [aux_sym_function_token10] = ACTIONS(33),
    [aux_sym_function_token11] = ACTIONS(31),
    [aux_sym_function_token12] = ACTIONS(33),
    [aux_sym_function_token13] = ACTIONS(31),
    [aux_sym_function_token14] = ACTIONS(31),
    [aux_sym_function_token15] = ACTIONS(31),
    [aux_sym_function_token16] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_TRUE] = ACTIONS(35),
    [anon_sym_FALSE] = ACTIONS(35),
    [anon_sym_null] = ACTIONS(37),
    [anon_sym_NULL] = ACTIONS(37),
    [anon_sym_none] = ACTIONS(37),
    [anon_sym_NONE] = ACTIONS(37),
    [sym_variable] = ACTIONS(39),
    [sym_comment] = ACTIONS(114),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [aux_sym_future_token1] = ACTIONS(116),
    [aux_sym_casting_token1] = ACTIONS(116),
    [aux_sym_property_token1] = ACTIONS(118),
    [aux_sym_identifier_token1] = ACTIONS(118),
    [aux_sym_constant_token1] = ACTIONS(116),
    [aux_sym_number_token1] = ACTIONS(118),
    [aux_sym_record_token1] = ACTIONS(116),
    [aux_sym_record_token2] = ACTIONS(116),
    [anon_sym_USE] = ACTIONS(118),
    [anon_sym_NS] = ACTIONS(118),
    [anon_sym_DB] = ACTIONS(118),
    [anon_sym_LET] = ACTIONS(118),
    [anon_sym_BEGIN] = ACTIONS(118),
    [anon_sym_TRANSACTION] = ACTIONS(118),
    [anon_sym_CANCEL] = ACTIONS(118),
    [anon_sym_COMMIT] = ACTIONS(118),
    [anon_sym_IF] = ACTIONS(118),
    [anon_sym_ELSE] = ACTIONS(118),
    [anon_sym_THEN] = ACTIONS(118),
    [anon_sym_END] = ACTIONS(118),
    [anon_sym_SELECT] = ACTIONS(118),
    [anon_sym_FROM] = ACTIONS(118),
    [anon_sym_WHERE] = ACTIONS(118),
    [anon_sym_SPLIT] = ACTIONS(118),
    [anon_sym_AT] = ACTIONS(118),
    [anon_sym_GROUP] = ACTIONS(118),
    [anon_sym_BY] = ACTIONS(118),
    [anon_sym_ORDER] = ACTIONS(118),
    [anon_sym_COLLATE] = ACTIONS(118),
    [anon_sym_NUMERIC] = ACTIONS(118),
    [anon_sym_ASC] = ACTIONS(118),
    [anon_sym_DESC] = ACTIONS(118),
    [anon_sym_LIMIT] = ACTIONS(118),
    [anon_sym_START] = ACTIONS(118),
    [anon_sym_FETCH] = ACTIONS(118),
    [anon_sym_TIMEOUT] = ACTIONS(118),
    [anon_sym_PARALLEL] = ACTIONS(118),
    [anon_sym_INSERT] = ACTIONS(118),
    [anon_sym_IGNORE] = ACTIONS(118),
    [anon_sym_INTO] = ACTIONS(118),
    [anon_sym_VALUES] = ACTIONS(118),
    [anon_sym_ON] = ACTIONS(118),
    [anon_sym_DUPLICATE] = ACTIONS(118),
    [anon_sym_KEY] = ACTIONS(118),
    [anon_sym_UPDATE] = ACTIONS(118),
    [anon_sym_CREATE] = ACTIONS(118),
    [anon_sym_CONTENT] = ACTIONS(118),
    [anon_sym_SET] = ACTIONS(118),
    [anon_sym_RETURN] = ACTIONS(118),
    [anon_sym_BEFORE] = ACTIONS(118),
    [anon_sym_AFTER] = ACTIONS(118),
    [anon_sym_DIFF] = ACTIONS(118),
    [anon_sym_MERGE] = ACTIONS(118),
    [anon_sym_PATCH] = ACTIONS(118),
    [anon_sym_RELATE] = ACTIONS(118),
    [anon_sym_DELETE] = ACTIONS(118),
    [anon_sym_DEFINE] = ACTIONS(118),
    [anon_sym_NAMESPACE] = ACTIONS(118),
    [anon_sym_DATABASE] = ACTIONS(118),
    [anon_sym_LOGIN] = ACTIONS(118),
    [anon_sym_PASSWORD] = ACTIONS(118),
    [anon_sym_PASSHASH] = ACTIONS(118),
    [anon_sym_TOKEN] = ACTIONS(118),
    [anon_sym_SCOPE] = ACTIONS(118),
    [anon_sym_TYPE] = ACTIONS(118),
    [anon_sym_VALUE] = ACTIONS(118),
    [anon_sym_SESSION] = ACTIONS(118),
    [anon_sym_SIGNUP] = ACTIONS(118),
    [anon_sym_SIGNIN] = ACTIONS(118),
    [anon_sym_TABLE] = ACTIONS(118),
    [anon_sym_DROP] = ACTIONS(118),
    [anon_sym_SCHEMAFULL] = ACTIONS(118),
    [anon_sym_SCHEMALESS] = ACTIONS(118),
    [anon_sym_AS] = ACTIONS(118),
    [anon_sym_PERMISSIONS] = ACTIONS(118),
    [anon_sym_FULL] = ACTIONS(118),
    [anon_sym_FOR] = ACTIONS(118),
    [anon_sym_select] = ACTIONS(118),
    [anon_sym_update] = ACTIONS(118),
    [anon_sym_create] = ACTIONS(118),
    [anon_sym_delete] = ACTIONS(118),
    [anon_sym_EVENT] = ACTIONS(118),
    [anon_sym_WHEN] = ACTIONS(118),
    [anon_sym_ASSERT] = ACTIONS(118),
    [anon_sym_INDEX] = ACTIONS(118),
    [anon_sym_FIELDS] = ACTIONS(118),
    [anon_sym_COLUMNS] = ACTIONS(118),
    [anon_sym_UNIQUE] = ACTIONS(118),
    [anon_sym_REMOVE] = ACTIONS(118),
    [anon_sym_SLEEP] = ACTIONS(118),
    [anon_sym_INFO] = ACTIONS(118),
    [anon_sym_KV] = ACTIONS(118),
    [anon_sym_FUNCTION] = ACTIONS(118),
    [anon_sym_PARAM] = ACTIONS(118),
    [anon_sym_AMP_AMP] = ACTIONS(116),
    [anon_sym_AND] = ACTIONS(118),
    [anon_sym_PIPE_PIPE] = ACTIONS(116),
    [anon_sym_OR] = ACTIONS(118),
    [anon_sym_QMARK_QMARK] = ACTIONS(116),
    [anon_sym_QMARK_COLON] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(118),
    [anon_sym_IS] = ACTIONS(118),
    [anon_sym_BANG_EQ] = ACTIONS(116),
    [anon_sym_ISNOT] = ACTIONS(116),
    [anon_sym_EQ_EQ] = ACTIONS(116),
    [anon_sym_QMARK_EQ] = ACTIONS(116),
    [anon_sym_STAR_EQ] = ACTIONS(116),
    [anon_sym_TILDE] = ACTIONS(116),
    [anon_sym_BANG_TILDE] = ACTIONS(116),
    [anon_sym_QMARK_TILDE] = ACTIONS(116),
    [anon_sym_STAR_TILDE] = ACTIONS(116),
    [anon_sym_LT] = ACTIONS(118),
    [anon_sym_LT_EQ] = ACTIONS(116),
    [anon_sym_GT] = ACTIONS(118),
    [anon_sym_GT_EQ] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(118),
    [anon_sym_STAR] = ACTIONS(118),
    [anon_sym_x] = ACTIONS(118),
    [anon_sym_SLASH] = ACTIONS(118),
    [anon_sym_] = ACTIONS(116),
    [anon_sym_STAR_STAR] = ACTIONS(116),
    [anon_sym_IN] = ACTIONS(118),
    [anon_sym_CONTAINS] = ACTIONS(118),
    [anon_sym_2] = ACTIONS(116),
    [anon_sym_CONTAINSNOT] = ACTIONS(118),
    [anon_sym_3] = ACTIONS(116),
    [anon_sym_CONTAINSALL] = ACTIONS(118),
    [anon_sym_4] = ACTIONS(116),
    [anon_sym_CONTAINSANY] = ACTIONS(118),
    [anon_sym_5] = ACTIONS(116),
    [anon_sym_CONTAINSNONE] = ACTIONS(118),
    [anon_sym_6] = ACTIONS(116),
    [anon_sym_INSIDE] = ACTIONS(118),
    [anon_sym_7] = ACTIONS(116),
    [anon_sym_NOTINSIDE] = ACTIONS(118),
    [anon_sym_NOTIN] = ACTIONS(116),
    [anon_sym_8] = ACTIONS(116),
    [anon_sym_ALLINSIDE] = ACTIONS(118),
    [anon_sym_9] = ACTIONS(116),
    [anon_sym_ANYINSIDE] = ACTIONS(118),
    [anon_sym_10] = ACTIONS(116),
    [anon_sym_NONEINSIDE] = ACTIONS(118),
    [anon_sym_11] = ACTIONS(116),
    [anon_sym_OUTSIDE] = ACTIONS(118),
    [anon_sym_INTERSECTS] = ACTIONS(118),
    [anon_sym_COMMA] = ACTIONS(116),
    [anon_sym_SEMI] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(116),
    [anon_sym_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_DASH_GT] = ACTIONS(116),
    [anon_sym_LT_DASH] = ACTIONS(116),
    [anon_sym_any] = ACTIONS(118),
    [anon_sym_array] = ACTIONS(118),
    [anon_sym_bool] = ACTIONS(118),
    [anon_sym_datetime] = ACTIONS(118),
    [anon_sym_decimal] = ACTIONS(118),
    [anon_sym_duration] = ACTIONS(118),
    [anon_sym_float] = ACTIONS(118),
    [anon_sym_int] = ACTIONS(118),
    [anon_sym_number] = ACTIONS(118),
    [anon_sym_object] = ACTIONS(118),
    [anon_sym_string] = ACTIONS(118),
    [anon_sym_record] = ACTIONS(118),
    [anon_sym_geometry] = ACTIONS(118),
    [anon_sym_EDDSA] = ACTIONS(118),
    [anon_sym_ES256] = ACTIONS(118),
    [anon_sym_ES384] = ACTIONS(118),
    [anon_sym_ES512] = ACTIONS(118),
    [anon_sym_HS256] = ACTIONS(118),
    [anon_sym_HS384] = ACTIONS(118),
    [anon_sym_HS512] = ACTIONS(118),
    [anon_sym_PS256] = ACTIONS(118),
    [anon_sym_PS384] = ACTIONS(118),
    [anon_sym_PS512] = ACTIONS(118),
    [anon_sym_RS256] = ACTIONS(118),
    [anon_sym_RS384] = ACTIONS(118),
    [anon_sym_RS512] = ACTIONS(118),
    [aux_sym_function_token1] = ACTIONS(116),
    [aux_sym_function_token2] = ACTIONS(116),
    [anon_sym_count] = ACTIONS(118),
    [aux_sym_function_token3] = ACTIONS(116),
    [aux_sym_function_token4] = ACTIONS(116),
    [aux_sym_function_token5] = ACTIONS(116),
    [aux_sym_function_token6] = ACTIONS(116),
    [aux_sym_function_token7] = ACTIONS(116),
    [aux_sym_function_token8] = ACTIONS(116),
    [aux_sym_function_token9] = ACTIONS(116),
    [aux_sym_function_token10] = ACTIONS(118),
    [aux_sym_function_token11] = ACTIONS(116),
    [aux_sym_function_token12] = ACTIONS(118),
    [aux_sym_function_token13] = ACTIONS(116),
    [aux_sym_function_token14] = ACTIONS(116),
    [aux_sym_function_token15] = ACTIONS(116),
    [aux_sym_function_token16] = ACTIONS(118),
    [anon_sym_true] = ACTIONS(118),
    [anon_sym_false] = ACTIONS(118),
    [anon_sym_TRUE] = ACTIONS(118),
    [anon_sym_FALSE] = ACTIONS(118),
    [anon_sym_null] = ACTIONS(118),
    [anon_sym_NULL] = ACTIONS(118),
    [anon_sym_none] = ACTIONS(118),
    [anon_sym_NONE] = ACTIONS(118),
    [sym_variable] = ACTIONS(116),
    [sym_comment] = ACTIONS(116),
    [anon_sym_SQUOTE] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(116),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [aux_sym_future_token1] = ACTIONS(120),
    [aux_sym_casting_token1] = ACTIONS(120),
    [aux_sym_property_token1] = ACTIONS(122),
    [aux_sym_identifier_token1] = ACTIONS(122),
    [aux_sym_constant_token1] = ACTIONS(120),
    [aux_sym_number_token1] = ACTIONS(122),
    [aux_sym_record_token1] = ACTIONS(120),
    [aux_sym_record_token2] = ACTIONS(120),
    [anon_sym_USE] = ACTIONS(122),
    [anon_sym_NS] = ACTIONS(122),
    [anon_sym_DB] = ACTIONS(122),
    [anon_sym_LET] = ACTIONS(122),
    [anon_sym_BEGIN] = ACTIONS(122),
    [anon_sym_TRANSACTION] = ACTIONS(122),
    [anon_sym_CANCEL] = ACTIONS(122),
    [anon_sym_COMMIT] = ACTIONS(122),
    [anon_sym_IF] = ACTIONS(122),
    [anon_sym_ELSE] = ACTIONS(122),
    [anon_sym_THEN] = ACTIONS(122),
    [anon_sym_END] = ACTIONS(122),
    [anon_sym_SELECT] = ACTIONS(122),
    [anon_sym_FROM] = ACTIONS(122),
    [anon_sym_WHERE] = ACTIONS(122),
    [anon_sym_SPLIT] = ACTIONS(122),
    [anon_sym_AT] = ACTIONS(122),
    [anon_sym_GROUP] = ACTIONS(122),
    [anon_sym_BY] = ACTIONS(122),
    [anon_sym_ORDER] = ACTIONS(122),
    [anon_sym_COLLATE] = ACTIONS(122),
    [anon_sym_NUMERIC] = ACTIONS(122),
    [anon_sym_ASC] = ACTIONS(122),
    [anon_sym_DESC] = ACTIONS(122),
    [anon_sym_LIMIT] = ACTIONS(122),
    [anon_sym_START] = ACTIONS(122),
    [anon_sym_FETCH] = ACTIONS(122),
    [anon_sym_TIMEOUT] = ACTIONS(122),
    [anon_sym_PARALLEL] = ACTIONS(122),
    [anon_sym_INSERT] = ACTIONS(122),
    [anon_sym_IGNORE] = ACTIONS(122),
    [anon_sym_INTO] = ACTIONS(122),
    [anon_sym_VALUES] = ACTIONS(122),
    [anon_sym_ON] = ACTIONS(122),
    [anon_sym_DUPLICATE] = ACTIONS(122),
    [anon_sym_KEY] = ACTIONS(122),
    [anon_sym_UPDATE] = ACTIONS(122),
    [anon_sym_CREATE] = ACTIONS(122),
    [anon_sym_CONTENT] = ACTIONS(122),
    [anon_sym_SET] = ACTIONS(122),
    [anon_sym_RETURN] = ACTIONS(122),
    [anon_sym_BEFORE] = ACTIONS(122),
    [anon_sym_AFTER] = ACTIONS(122),
    [anon_sym_DIFF] = ACTIONS(122),
    [anon_sym_MERGE] = ACTIONS(122),
    [anon_sym_PATCH] = ACTIONS(122),
    [anon_sym_RELATE] = ACTIONS(122),
    [anon_sym_DELETE] = ACTIONS(122),
    [anon_sym_DEFINE] = ACTIONS(122),
    [anon_sym_NAMESPACE] = ACTIONS(122),
    [anon_sym_DATABASE] = ACTIONS(122),
    [anon_sym_LOGIN] = ACTIONS(122),
    [anon_sym_PASSWORD] = ACTIONS(122),
    [anon_sym_PASSHASH] = ACTIONS(122),
    [anon_sym_TOKEN] = ACTIONS(122),
    [anon_sym_SCOPE] = ACTIONS(122),
    [anon_sym_TYPE] = ACTIONS(122),
    [anon_sym_VALUE] = ACTIONS(122),
    [anon_sym_SESSION] = ACTIONS(122),
    [anon_sym_SIGNUP] = ACTIONS(122),
    [anon_sym_SIGNIN] = ACTIONS(122),
    [anon_sym_TABLE] = ACTIONS(122),
    [anon_sym_DROP] = ACTIONS(122),
    [anon_sym_SCHEMAFULL] = ACTIONS(122),
    [anon_sym_SCHEMALESS] = ACTIONS(122),
    [anon_sym_AS] = ACTIONS(122),
    [anon_sym_PERMISSIONS] = ACTIONS(122),
    [anon_sym_FULL] = ACTIONS(122),
    [anon_sym_FOR] = ACTIONS(122),
    [anon_sym_select] = ACTIONS(122),
    [anon_sym_update] = ACTIONS(122),
    [anon_sym_create] = ACTIONS(122),
    [anon_sym_delete] = ACTIONS(122),
    [anon_sym_EVENT] = ACTIONS(122),
    [anon_sym_WHEN] = ACTIONS(122),
    [anon_sym_ASSERT] = ACTIONS(122),
    [anon_sym_INDEX] = ACTIONS(122),
    [anon_sym_FIELDS] = ACTIONS(122),
    [anon_sym_COLUMNS] = ACTIONS(122),
    [anon_sym_UNIQUE] = ACTIONS(122),
    [anon_sym_REMOVE] = ACTIONS(122),
    [anon_sym_SLEEP] = ACTIONS(122),
    [anon_sym_INFO] = ACTIONS(122),
    [anon_sym_KV] = ACTIONS(122),
    [anon_sym_FUNCTION] = ACTIONS(122),
    [anon_sym_PARAM] = ACTIONS(122),
    [anon_sym_AMP_AMP] = ACTIONS(120),
    [anon_sym_AND] = ACTIONS(122),
    [anon_sym_PIPE_PIPE] = ACTIONS(120),
    [anon_sym_OR] = ACTIONS(122),
    [anon_sym_QMARK_QMARK] = ACTIONS(120),
    [anon_sym_QMARK_COLON] = ACTIONS(120),
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_IS] = ACTIONS(122),
    [anon_sym_BANG_EQ] = ACTIONS(120),
    [anon_sym_ISNOT] = ACTIONS(120),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [anon_sym_QMARK_EQ] = ACTIONS(120),
    [anon_sym_STAR_EQ] = ACTIONS(120),
    [anon_sym_TILDE] = ACTIONS(120),
    [anon_sym_BANG_TILDE] = ACTIONS(120),
    [anon_sym_QMARK_TILDE] = ACTIONS(120),
    [anon_sym_STAR_TILDE] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_STAR] = ACTIONS(122),
    [anon_sym_x] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_] = ACTIONS(120),
    [anon_sym_STAR_STAR] = ACTIONS(120),
    [anon_sym_IN] = ACTIONS(122),
    [anon_sym_CONTAINS] = ACTIONS(122),
    [anon_sym_2] = ACTIONS(120),
    [anon_sym_CONTAINSNOT] = ACTIONS(122),
    [anon_sym_3] = ACTIONS(120),
    [anon_sym_CONTAINSALL] = ACTIONS(122),
    [anon_sym_4] = ACTIONS(120),
    [anon_sym_CONTAINSANY] = ACTIONS(122),
    [anon_sym_5] = ACTIONS(120),
    [anon_sym_CONTAINSNONE] = ACTIONS(122),
    [anon_sym_6] = ACTIONS(120),
    [anon_sym_INSIDE] = ACTIONS(122),
    [anon_sym_7] = ACTIONS(120),
    [anon_sym_NOTINSIDE] = ACTIONS(122),
    [anon_sym_NOTIN] = ACTIONS(120),
    [anon_sym_8] = ACTIONS(120),
    [anon_sym_ALLINSIDE] = ACTIONS(122),
    [anon_sym_9] = ACTIONS(120),
    [anon_sym_ANYINSIDE] = ACTIONS(122),
    [anon_sym_10] = ACTIONS(120),
    [anon_sym_NONEINSIDE] = ACTIONS(122),
    [anon_sym_11] = ACTIONS(120),
    [anon_sym_OUTSIDE] = ACTIONS(122),
    [anon_sym_INTERSECTS] = ACTIONS(122),
    [anon_sym_COMMA] = ACTIONS(120),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_DASH_GT] = ACTIONS(120),
    [anon_sym_LT_DASH] = ACTIONS(120),
    [anon_sym_any] = ACTIONS(122),
    [anon_sym_array] = ACTIONS(122),
    [anon_sym_bool] = ACTIONS(122),
    [anon_sym_datetime] = ACTIONS(122),
    [anon_sym_decimal] = ACTIONS(122),
    [anon_sym_duration] = ACTIONS(122),
    [anon_sym_float] = ACTIONS(122),
    [anon_sym_int] = ACTIONS(122),
    [anon_sym_number] = ACTIONS(122),
    [anon_sym_object] = ACTIONS(122),
    [anon_sym_string] = ACTIONS(122),
    [anon_sym_record] = ACTIONS(122),
    [anon_sym_geometry] = ACTIONS(122),
    [anon_sym_EDDSA] = ACTIONS(122),
    [anon_sym_ES256] = ACTIONS(122),
    [anon_sym_ES384] = ACTIONS(122),
    [anon_sym_ES512] = ACTIONS(122),
    [anon_sym_HS256] = ACTIONS(122),
    [anon_sym_HS384] = ACTIONS(122),
    [anon_sym_HS512] = ACTIONS(122),
    [anon_sym_PS256] = ACTIONS(122),
    [anon_sym_PS384] = ACTIONS(122),
    [anon_sym_PS512] = ACTIONS(122),
    [anon_sym_RS256] = ACTIONS(122),
    [anon_sym_RS384] = ACTIONS(122),
    [anon_sym_RS512] = ACTIONS(122),
    [aux_sym_function_token1] = ACTIONS(120),
    [aux_sym_function_token2] = ACTIONS(120),
    [anon_sym_count] = ACTIONS(122),
    [aux_sym_function_token3] = ACTIONS(120),
    [aux_sym_function_token4] = ACTIONS(120),
    [aux_sym_function_token5] = ACTIONS(120),
    [aux_sym_function_token6] = ACTIONS(120),
    [aux_sym_function_token7] = ACTIONS(120),
    [aux_sym_function_token8] = ACTIONS(120),
    [aux_sym_function_token9] = ACTIONS(120),
    [aux_sym_function_token10] = ACTIONS(122),
    [aux_sym_function_token11] = ACTIONS(120),
    [aux_sym_function_token12] = ACTIONS(122),
    [aux_sym_function_token13] = ACTIONS(120),
    [aux_sym_function_token14] = ACTIONS(120),
    [aux_sym_function_token15] = ACTIONS(120),
    [aux_sym_function_token16] = ACTIONS(122),
    [anon_sym_true] = ACTIONS(122),
    [anon_sym_false] = ACTIONS(122),
    [anon_sym_TRUE] = ACTIONS(122),
    [anon_sym_FALSE] = ACTIONS(122),
    [anon_sym_null] = ACTIONS(122),
    [anon_sym_NULL] = ACTIONS(122),
    [anon_sym_none] = ACTIONS(122),
    [anon_sym_NONE] = ACTIONS(122),
    [sym_variable] = ACTIONS(120),
    [sym_comment] = ACTIONS(120),
    [anon_sym_SQUOTE] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(120),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(124),
    [aux_sym_future_token1] = ACTIONS(124),
    [aux_sym_casting_token1] = ACTIONS(124),
    [aux_sym_property_token1] = ACTIONS(126),
    [aux_sym_identifier_token1] = ACTIONS(126),
    [aux_sym_constant_token1] = ACTIONS(124),
    [aux_sym_number_token1] = ACTIONS(126),
    [aux_sym_record_token1] = ACTIONS(124),
    [aux_sym_record_token2] = ACTIONS(124),
    [anon_sym_USE] = ACTIONS(126),
    [anon_sym_NS] = ACTIONS(126),
    [anon_sym_DB] = ACTIONS(126),
    [anon_sym_LET] = ACTIONS(126),
    [anon_sym_BEGIN] = ACTIONS(126),
    [anon_sym_TRANSACTION] = ACTIONS(126),
    [anon_sym_CANCEL] = ACTIONS(126),
    [anon_sym_COMMIT] = ACTIONS(126),
    [anon_sym_IF] = ACTIONS(126),
    [anon_sym_ELSE] = ACTIONS(126),
    [anon_sym_THEN] = ACTIONS(126),
    [anon_sym_END] = ACTIONS(126),
    [anon_sym_SELECT] = ACTIONS(126),
    [anon_sym_FROM] = ACTIONS(126),
    [anon_sym_WHERE] = ACTIONS(126),
    [anon_sym_SPLIT] = ACTIONS(126),
    [anon_sym_AT] = ACTIONS(126),
    [anon_sym_GROUP] = ACTIONS(126),
    [anon_sym_BY] = ACTIONS(126),
    [anon_sym_ORDER] = ACTIONS(126),
    [anon_sym_COLLATE] = ACTIONS(126),
    [anon_sym_NUMERIC] = ACTIONS(126),
    [anon_sym_ASC] = ACTIONS(126),
    [anon_sym_DESC] = ACTIONS(126),
    [anon_sym_LIMIT] = ACTIONS(126),
    [anon_sym_START] = ACTIONS(126),
    [anon_sym_FETCH] = ACTIONS(126),
    [anon_sym_TIMEOUT] = ACTIONS(126),
    [anon_sym_PARALLEL] = ACTIONS(126),
    [anon_sym_INSERT] = ACTIONS(126),
    [anon_sym_IGNORE] = ACTIONS(126),
    [anon_sym_INTO] = ACTIONS(126),
    [anon_sym_VALUES] = ACTIONS(126),
    [anon_sym_ON] = ACTIONS(126),
    [anon_sym_DUPLICATE] = ACTIONS(126),
    [anon_sym_KEY] = ACTIONS(126),
    [anon_sym_UPDATE] = ACTIONS(126),
    [anon_sym_CREATE] = ACTIONS(126),
    [anon_sym_CONTENT] = ACTIONS(126),
    [anon_sym_SET] = ACTIONS(126),
    [anon_sym_RETURN] = ACTIONS(126),
    [anon_sym_BEFORE] = ACTIONS(126),
    [anon_sym_AFTER] = ACTIONS(126),
    [anon_sym_DIFF] = ACTIONS(126),
    [anon_sym_MERGE] = ACTIONS(126),
    [anon_sym_PATCH] = ACTIONS(126),
    [anon_sym_RELATE] = ACTIONS(126),
    [anon_sym_DELETE] = ACTIONS(126),
    [anon_sym_DEFINE] = ACTIONS(126),
    [anon_sym_NAMESPACE] = ACTIONS(126),
    [anon_sym_DATABASE] = ACTIONS(126),
    [anon_sym_LOGIN] = ACTIONS(126),
    [anon_sym_PASSWORD] = ACTIONS(126),
    [anon_sym_PASSHASH] = ACTIONS(126),
    [anon_sym_TOKEN] = ACTIONS(126),
    [anon_sym_SCOPE] = ACTIONS(126),
    [anon_sym_TYPE] = ACTIONS(126),
    [anon_sym_VALUE] = ACTIONS(126),
    [anon_sym_SESSION] = ACTIONS(126),
    [anon_sym_SIGNUP] = ACTIONS(126),
    [anon_sym_SIGNIN] = ACTIONS(126),
    [anon_sym_TABLE] = ACTIONS(126),
    [anon_sym_DROP] = ACTIONS(126),
    [anon_sym_SCHEMAFULL] = ACTIONS(126),
    [anon_sym_SCHEMALESS] = ACTIONS(126),
    [anon_sym_AS] = ACTIONS(126),
    [anon_sym_PERMISSIONS] = ACTIONS(126),
    [anon_sym_FULL] = ACTIONS(126),
    [anon_sym_FOR] = ACTIONS(126),
    [anon_sym_select] = ACTIONS(126),
    [anon_sym_update] = ACTIONS(126),
    [anon_sym_create] = ACTIONS(126),
    [anon_sym_delete] = ACTIONS(126),
    [anon_sym_EVENT] = ACTIONS(126),
    [anon_sym_WHEN] = ACTIONS(126),
    [anon_sym_ASSERT] = ACTIONS(126),
    [anon_sym_INDEX] = ACTIONS(126),
    [anon_sym_FIELDS] = ACTIONS(126),
    [anon_sym_COLUMNS] = ACTIONS(126),
    [anon_sym_UNIQUE] = ACTIONS(126),
    [anon_sym_REMOVE] = ACTIONS(126),
    [anon_sym_SLEEP] = ACTIONS(126),
    [anon_sym_INFO] = ACTIONS(126),
    [anon_sym_KV] = ACTIONS(126),
    [anon_sym_FUNCTION] = ACTIONS(126),
    [anon_sym_PARAM] = ACTIONS(126),
    [anon_sym_AMP_AMP] = ACTIONS(124),
    [anon_sym_AND] = ACTIONS(126),
    [anon_sym_PIPE_PIPE] = ACTIONS(124),
    [anon_sym_OR] = ACTIONS(126),
    [anon_sym_QMARK_QMARK] = ACTIONS(124),
    [anon_sym_QMARK_COLON] = ACTIONS(124),
    [anon_sym_EQ] = ACTIONS(126),
    [anon_sym_IS] = ACTIONS(126),
    [anon_sym_BANG_EQ] = ACTIONS(124),
    [anon_sym_ISNOT] = ACTIONS(124),
    [anon_sym_EQ_EQ] = ACTIONS(124),
    [anon_sym_QMARK_EQ] = ACTIONS(124),
    [anon_sym_STAR_EQ] = ACTIONS(124),
    [anon_sym_TILDE] = ACTIONS(124),
    [anon_sym_BANG_TILDE] = ACTIONS(124),
    [anon_sym_QMARK_TILDE] = ACTIONS(124),
    [anon_sym_STAR_TILDE] = ACTIONS(124),
    [anon_sym_LT] = ACTIONS(126),
    [anon_sym_LT_EQ] = ACTIONS(124),
    [anon_sym_GT] = ACTIONS(126),
    [anon_sym_GT_EQ] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_DASH] = ACTIONS(126),
    [anon_sym_STAR] = ACTIONS(126),
    [anon_sym_x] = ACTIONS(126),
    [anon_sym_SLASH] = ACTIONS(126),
    [anon_sym_] = ACTIONS(124),
    [anon_sym_STAR_STAR] = ACTIONS(124),
    [anon_sym_IN] = ACTIONS(126),
    [anon_sym_CONTAINS] = ACTIONS(126),
    [anon_sym_2] = ACTIONS(124),
    [anon_sym_CONTAINSNOT] = ACTIONS(126),
    [anon_sym_3] = ACTIONS(124),
    [anon_sym_CONTAINSALL] = ACTIONS(126),
    [anon_sym_4] = ACTIONS(124),
    [anon_sym_CONTAINSANY] = ACTIONS(126),
    [anon_sym_5] = ACTIONS(124),
    [anon_sym_CONTAINSNONE] = ACTIONS(126),
    [anon_sym_6] = ACTIONS(124),
    [anon_sym_INSIDE] = ACTIONS(126),
    [anon_sym_7] = ACTIONS(124),
    [anon_sym_NOTINSIDE] = ACTIONS(126),
    [anon_sym_NOTIN] = ACTIONS(124),
    [anon_sym_8] = ACTIONS(124),
    [anon_sym_ALLINSIDE] = ACTIONS(126),
    [anon_sym_9] = ACTIONS(124),
    [anon_sym_ANYINSIDE] = ACTIONS(126),
    [anon_sym_10] = ACTIONS(124),
    [anon_sym_NONEINSIDE] = ACTIONS(126),
    [anon_sym_11] = ACTIONS(124),
    [anon_sym_OUTSIDE] = ACTIONS(126),
    [anon_sym_INTERSECTS] = ACTIONS(126),
    [anon_sym_COMMA] = ACTIONS(124),
    [anon_sym_SEMI] = ACTIONS(124),
    [anon_sym_COLON] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(124),
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(124),
    [anon_sym_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACE] = ACTIONS(124),
    [anon_sym_RBRACE] = ACTIONS(124),
    [anon_sym_DASH_GT] = ACTIONS(124),
    [anon_sym_LT_DASH] = ACTIONS(124),
    [anon_sym_any] = ACTIONS(126),
    [anon_sym_array] = ACTIONS(126),
    [anon_sym_bool] = ACTIONS(126),
    [anon_sym_datetime] = ACTIONS(126),
    [anon_sym_decimal] = ACTIONS(126),
    [anon_sym_duration] = ACTIONS(126),
    [anon_sym_float] = ACTIONS(126),
    [anon_sym_int] = ACTIONS(126),
    [anon_sym_number] = ACTIONS(126),
    [anon_sym_object] = ACTIONS(126),
    [anon_sym_string] = ACTIONS(126),
    [anon_sym_record] = ACTIONS(126),
    [anon_sym_geometry] = ACTIONS(126),
    [anon_sym_EDDSA] = ACTIONS(126),
    [anon_sym_ES256] = ACTIONS(126),
    [anon_sym_ES384] = ACTIONS(126),
    [anon_sym_ES512] = ACTIONS(126),
    [anon_sym_HS256] = ACTIONS(126),
    [anon_sym_HS384] = ACTIONS(126),
    [anon_sym_HS512] = ACTIONS(126),
    [anon_sym_PS256] = ACTIONS(126),
    [anon_sym_PS384] = ACTIONS(126),
    [anon_sym_PS512] = ACTIONS(126),
    [anon_sym_RS256] = ACTIONS(126),
    [anon_sym_RS384] = ACTIONS(126),
    [anon_sym_RS512] = ACTIONS(126),
    [aux_sym_function_token1] = ACTIONS(124),
    [aux_sym_function_token2] = ACTIONS(124),
    [anon_sym_count] = ACTIONS(126),
    [aux_sym_function_token3] = ACTIONS(124),
    [aux_sym_function_token4] = ACTIONS(124),
    [aux_sym_function_token5] = ACTIONS(124),
    [aux_sym_function_token6] = ACTIONS(124),
    [aux_sym_function_token7] = ACTIONS(124),
    [aux_sym_function_token8] = ACTIONS(124),
    [aux_sym_function_token9] = ACTIONS(124),
    [aux_sym_function_token10] = ACTIONS(126),
    [aux_sym_function_token11] = ACTIONS(124),
    [aux_sym_function_token12] = ACTIONS(126),
    [aux_sym_function_token13] = ACTIONS(124),
    [aux_sym_function_token14] = ACTIONS(124),
    [aux_sym_function_token15] = ACTIONS(124),
    [aux_sym_function_token16] = ACTIONS(126),
    [anon_sym_true] = ACTIONS(126),
    [anon_sym_false] = ACTIONS(126),
    [anon_sym_TRUE] = ACTIONS(126),
    [anon_sym_FALSE] = ACTIONS(126),
    [anon_sym_null] = ACTIONS(126),
    [anon_sym_NULL] = ACTIONS(126),
    [anon_sym_none] = ACTIONS(126),
    [anon_sym_NONE] = ACTIONS(126),
    [sym_variable] = ACTIONS(124),
    [sym_comment] = ACTIONS(124),
    [anon_sym_SQUOTE] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(124),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(128),
    [aux_sym_future_token1] = ACTIONS(128),
    [aux_sym_casting_token1] = ACTIONS(128),
    [aux_sym_property_token1] = ACTIONS(130),
    [aux_sym_identifier_token1] = ACTIONS(130),
    [aux_sym_constant_token1] = ACTIONS(128),
    [aux_sym_number_token1] = ACTIONS(130),
    [aux_sym_record_token1] = ACTIONS(128),
    [aux_sym_record_token2] = ACTIONS(128),
    [anon_sym_USE] = ACTIONS(130),
    [anon_sym_NS] = ACTIONS(130),
    [anon_sym_DB] = ACTIONS(130),
    [anon_sym_LET] = ACTIONS(130),
    [anon_sym_BEGIN] = ACTIONS(130),
    [anon_sym_TRANSACTION] = ACTIONS(130),
    [anon_sym_CANCEL] = ACTIONS(130),
    [anon_sym_COMMIT] = ACTIONS(130),
    [anon_sym_IF] = ACTIONS(130),
    [anon_sym_ELSE] = ACTIONS(130),
    [anon_sym_THEN] = ACTIONS(130),
    [anon_sym_END] = ACTIONS(130),
    [anon_sym_SELECT] = ACTIONS(130),
    [anon_sym_FROM] = ACTIONS(130),
    [anon_sym_WHERE] = ACTIONS(130),
    [anon_sym_SPLIT] = ACTIONS(130),
    [anon_sym_AT] = ACTIONS(130),
    [anon_sym_GROUP] = ACTIONS(130),
    [anon_sym_BY] = ACTIONS(130),
    [anon_sym_ORDER] = ACTIONS(130),
    [anon_sym_COLLATE] = ACTIONS(130),
    [anon_sym_NUMERIC] = ACTIONS(130),
    [anon_sym_ASC] = ACTIONS(130),
    [anon_sym_DESC] = ACTIONS(130),
    [anon_sym_LIMIT] = ACTIONS(130),
    [anon_sym_START] = ACTIONS(130),
    [anon_sym_FETCH] = ACTIONS(130),
    [anon_sym_TIMEOUT] = ACTIONS(130),
    [anon_sym_PARALLEL] = ACTIONS(130),
    [anon_sym_INSERT] = ACTIONS(130),
    [anon_sym_IGNORE] = ACTIONS(130),
    [anon_sym_INTO] = ACTIONS(130),
    [anon_sym_VALUES] = ACTIONS(130),
    [anon_sym_ON] = ACTIONS(130),
    [anon_sym_DUPLICATE] = ACTIONS(130),
    [anon_sym_KEY] = ACTIONS(130),
    [anon_sym_UPDATE] = ACTIONS(130),
    [anon_sym_CREATE] = ACTIONS(130),
    [anon_sym_CONTENT] = ACTIONS(130),
    [anon_sym_SET] = ACTIONS(130),
    [anon_sym_RETURN] = ACTIONS(130),
    [anon_sym_BEFORE] = ACTIONS(130),
    [anon_sym_AFTER] = ACTIONS(130),
    [anon_sym_DIFF] = ACTIONS(130),
    [anon_sym_MERGE] = ACTIONS(130),
    [anon_sym_PATCH] = ACTIONS(130),
    [anon_sym_RELATE] = ACTIONS(130),
    [anon_sym_DELETE] = ACTIONS(130),
    [anon_sym_DEFINE] = ACTIONS(130),
    [anon_sym_NAMESPACE] = ACTIONS(130),
    [anon_sym_DATABASE] = ACTIONS(130),
    [anon_sym_LOGIN] = ACTIONS(130),
    [anon_sym_PASSWORD] = ACTIONS(130),
    [anon_sym_PASSHASH] = ACTIONS(130),
    [anon_sym_TOKEN] = ACTIONS(130),
    [anon_sym_SCOPE] = ACTIONS(130),
    [anon_sym_TYPE] = ACTIONS(130),
    [anon_sym_VALUE] = ACTIONS(130),
    [anon_sym_SESSION] = ACTIONS(130),
    [anon_sym_SIGNUP] = ACTIONS(130),
    [anon_sym_SIGNIN] = ACTIONS(130),
    [anon_sym_TABLE] = ACTIONS(130),
    [anon_sym_DROP] = ACTIONS(130),
    [anon_sym_SCHEMAFULL] = ACTIONS(130),
    [anon_sym_SCHEMALESS] = ACTIONS(130),
    [anon_sym_AS] = ACTIONS(130),
    [anon_sym_PERMISSIONS] = ACTIONS(130),
    [anon_sym_FULL] = ACTIONS(130),
    [anon_sym_FOR] = ACTIONS(130),
    [anon_sym_select] = ACTIONS(130),
    [anon_sym_update] = ACTIONS(130),
    [anon_sym_create] = ACTIONS(130),
    [anon_sym_delete] = ACTIONS(130),
    [anon_sym_EVENT] = ACTIONS(130),
    [anon_sym_WHEN] = ACTIONS(130),
    [anon_sym_ASSERT] = ACTIONS(130),
    [anon_sym_INDEX] = ACTIONS(130),
    [anon_sym_FIELDS] = ACTIONS(130),
    [anon_sym_COLUMNS] = ACTIONS(130),
    [anon_sym_UNIQUE] = ACTIONS(130),
    [anon_sym_REMOVE] = ACTIONS(130),
    [anon_sym_SLEEP] = ACTIONS(130),
    [anon_sym_INFO] = ACTIONS(130),
    [anon_sym_KV] = ACTIONS(130),
    [anon_sym_FUNCTION] = ACTIONS(130),
    [anon_sym_PARAM] = ACTIONS(130),
    [anon_sym_AMP_AMP] = ACTIONS(128),
    [anon_sym_AND] = ACTIONS(130),
    [anon_sym_PIPE_PIPE] = ACTIONS(128),
    [anon_sym_OR] = ACTIONS(130),
    [anon_sym_QMARK_QMARK] = ACTIONS(128),
    [anon_sym_QMARK_COLON] = ACTIONS(128),
    [anon_sym_EQ] = ACTIONS(130),
    [anon_sym_IS] = ACTIONS(130),
    [anon_sym_BANG_EQ] = ACTIONS(128),
    [anon_sym_ISNOT] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [anon_sym_QMARK_EQ] = ACTIONS(128),
    [anon_sym_STAR_EQ] = ACTIONS(128),
    [anon_sym_TILDE] = ACTIONS(128),
    [anon_sym_BANG_TILDE] = ACTIONS(128),
    [anon_sym_QMARK_TILDE] = ACTIONS(128),
    [anon_sym_STAR_TILDE] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(130),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(130),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(130),
    [anon_sym_STAR] = ACTIONS(130),
    [anon_sym_x] = ACTIONS(130),
    [anon_sym_SLASH] = ACTIONS(130),
    [anon_sym_] = ACTIONS(128),
    [anon_sym_STAR_STAR] = ACTIONS(128),
    [anon_sym_IN] = ACTIONS(130),
    [anon_sym_CONTAINS] = ACTIONS(130),
    [anon_sym_2] = ACTIONS(128),
    [anon_sym_CONTAINSNOT] = ACTIONS(130),
    [anon_sym_3] = ACTIONS(128),
    [anon_sym_CONTAINSALL] = ACTIONS(130),
    [anon_sym_4] = ACTIONS(128),
    [anon_sym_CONTAINSANY] = ACTIONS(130),
    [anon_sym_5] = ACTIONS(128),
    [anon_sym_CONTAINSNONE] = ACTIONS(130),
    [anon_sym_6] = ACTIONS(128),
    [anon_sym_INSIDE] = ACTIONS(130),
    [anon_sym_7] = ACTIONS(128),
    [anon_sym_NOTINSIDE] = ACTIONS(130),
    [anon_sym_NOTIN] = ACTIONS(128),
    [anon_sym_8] = ACTIONS(128),
    [anon_sym_ALLINSIDE] = ACTIONS(130),
    [anon_sym_9] = ACTIONS(128),
    [anon_sym_ANYINSIDE] = ACTIONS(130),
    [anon_sym_10] = ACTIONS(128),
    [anon_sym_NONEINSIDE] = ACTIONS(130),
    [anon_sym_11] = ACTIONS(128),
    [anon_sym_OUTSIDE] = ACTIONS(130),
    [anon_sym_INTERSECTS] = ACTIONS(130),
    [anon_sym_COMMA] = ACTIONS(128),
    [anon_sym_SEMI] = ACTIONS(128),
    [anon_sym_COLON] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_RPAREN] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(128),
    [anon_sym_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACE] = ACTIONS(128),
    [anon_sym_RBRACE] = ACTIONS(128),
    [anon_sym_DASH_GT] = ACTIONS(128),
    [anon_sym_LT_DASH] = ACTIONS(128),
    [anon_sym_any] = ACTIONS(130),
    [anon_sym_array] = ACTIONS(130),
    [anon_sym_bool] = ACTIONS(130),
    [anon_sym_datetime] = ACTIONS(130),
    [anon_sym_decimal] = ACTIONS(130),
    [anon_sym_duration] = ACTIONS(130),
    [anon_sym_float] = ACTIONS(130),
    [anon_sym_int] = ACTIONS(130),
    [anon_sym_number] = ACTIONS(130),
    [anon_sym_object] = ACTIONS(130),
    [anon_sym_string] = ACTIONS(130),
    [anon_sym_record] = ACTIONS(130),
    [anon_sym_geometry] = ACTIONS(130),
    [anon_sym_EDDSA] = ACTIONS(130),
    [anon_sym_ES256] = ACTIONS(130),
    [anon_sym_ES384] = ACTIONS(130),
    [anon_sym_ES512] = ACTIONS(130),
    [anon_sym_HS256] = ACTIONS(130),
    [anon_sym_HS384] = ACTIONS(130),
    [anon_sym_HS512] = ACTIONS(130),
    [anon_sym_PS256] = ACTIONS(130),
    [anon_sym_PS384] = ACTIONS(130),
    [anon_sym_PS512] = ACTIONS(130),
    [anon_sym_RS256] = ACTIONS(130),
    [anon_sym_RS384] = ACTIONS(130),
    [anon_sym_RS512] = ACTIONS(130),
    [aux_sym_function_token1] = ACTIONS(128),
    [aux_sym_function_token2] = ACTIONS(128),
    [anon_sym_count] = ACTIONS(130),
    [aux_sym_function_token3] = ACTIONS(128),
    [aux_sym_function_token4] = ACTIONS(128),
    [aux_sym_function_token5] = ACTIONS(128),
    [aux_sym_function_token6] = ACTIONS(128),
    [aux_sym_function_token7] = ACTIONS(128),
    [aux_sym_function_token8] = ACTIONS(128),
    [aux_sym_function_token9] = ACTIONS(128),
    [aux_sym_function_token10] = ACTIONS(130),
    [aux_sym_function_token11] = ACTIONS(128),
    [aux_sym_function_token12] = ACTIONS(130),
    [aux_sym_function_token13] = ACTIONS(128),
    [aux_sym_function_token14] = ACTIONS(128),
    [aux_sym_function_token15] = ACTIONS(128),
    [aux_sym_function_token16] = ACTIONS(130),
    [anon_sym_true] = ACTIONS(130),
    [anon_sym_false] = ACTIONS(130),
    [anon_sym_TRUE] = ACTIONS(130),
    [anon_sym_FALSE] = ACTIONS(130),
    [anon_sym_null] = ACTIONS(130),
    [anon_sym_NULL] = ACTIONS(130),
    [anon_sym_none] = ACTIONS(130),
    [anon_sym_NONE] = ACTIONS(130),
    [sym_variable] = ACTIONS(128),
    [sym_comment] = ACTIONS(128),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_DQUOTE] = ACTIONS(128),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(132),
    [aux_sym_future_token1] = ACTIONS(132),
    [aux_sym_casting_token1] = ACTIONS(132),
    [aux_sym_property_token1] = ACTIONS(134),
    [aux_sym_identifier_token1] = ACTIONS(134),
    [aux_sym_constant_token1] = ACTIONS(132),
    [aux_sym_number_token1] = ACTIONS(134),
    [aux_sym_record_token1] = ACTIONS(132),
    [aux_sym_record_token2] = ACTIONS(132),
    [anon_sym_USE] = ACTIONS(134),
    [anon_sym_NS] = ACTIONS(134),
    [anon_sym_DB] = ACTIONS(134),
    [anon_sym_LET] = ACTIONS(134),
    [anon_sym_BEGIN] = ACTIONS(134),
    [anon_sym_TRANSACTION] = ACTIONS(134),
    [anon_sym_CANCEL] = ACTIONS(134),
    [anon_sym_COMMIT] = ACTIONS(134),
    [anon_sym_IF] = ACTIONS(134),
    [anon_sym_ELSE] = ACTIONS(134),
    [anon_sym_THEN] = ACTIONS(134),
    [anon_sym_END] = ACTIONS(134),
    [anon_sym_SELECT] = ACTIONS(134),
    [anon_sym_FROM] = ACTIONS(134),
    [anon_sym_WHERE] = ACTIONS(134),
    [anon_sym_SPLIT] = ACTIONS(134),
    [anon_sym_AT] = ACTIONS(134),
    [anon_sym_GROUP] = ACTIONS(134),
    [anon_sym_BY] = ACTIONS(134),
    [anon_sym_ORDER] = ACTIONS(134),
    [anon_sym_COLLATE] = ACTIONS(134),
    [anon_sym_NUMERIC] = ACTIONS(134),
    [anon_sym_ASC] = ACTIONS(134),
    [anon_sym_DESC] = ACTIONS(134),
    [anon_sym_LIMIT] = ACTIONS(134),
    [anon_sym_START] = ACTIONS(134),
    [anon_sym_FETCH] = ACTIONS(134),
    [anon_sym_TIMEOUT] = ACTIONS(134),
    [anon_sym_PARALLEL] = ACTIONS(134),
    [anon_sym_INSERT] = ACTIONS(134),
    [anon_sym_IGNORE] = ACTIONS(134),
    [anon_sym_INTO] = ACTIONS(134),
    [anon_sym_VALUES] = ACTIONS(134),
    [anon_sym_ON] = ACTIONS(134),
    [anon_sym_DUPLICATE] = ACTIONS(134),
    [anon_sym_KEY] = ACTIONS(134),
    [anon_sym_UPDATE] = ACTIONS(134),
    [anon_sym_CREATE] = ACTIONS(134),
    [anon_sym_CONTENT] = ACTIONS(134),
    [anon_sym_SET] = ACTIONS(134),
    [anon_sym_RETURN] = ACTIONS(134),
    [anon_sym_BEFORE] = ACTIONS(134),
    [anon_sym_AFTER] = ACTIONS(134),
    [anon_sym_DIFF] = ACTIONS(134),
    [anon_sym_MERGE] = ACTIONS(134),
    [anon_sym_PATCH] = ACTIONS(134),
    [anon_sym_RELATE] = ACTIONS(134),
    [anon_sym_DELETE] = ACTIONS(134),
    [anon_sym_DEFINE] = ACTIONS(134),
    [anon_sym_NAMESPACE] = ACTIONS(134),
    [anon_sym_DATABASE] = ACTIONS(134),
    [anon_sym_LOGIN] = ACTIONS(134),
    [anon_sym_PASSWORD] = ACTIONS(134),
    [anon_sym_PASSHASH] = ACTIONS(134),
    [anon_sym_TOKEN] = ACTIONS(134),
    [anon_sym_SCOPE] = ACTIONS(134),
    [anon_sym_TYPE] = ACTIONS(134),
    [anon_sym_VALUE] = ACTIONS(134),
    [anon_sym_SESSION] = ACTIONS(134),
    [anon_sym_SIGNUP] = ACTIONS(134),
    [anon_sym_SIGNIN] = ACTIONS(134),
    [anon_sym_TABLE] = ACTIONS(134),
    [anon_sym_DROP] = ACTIONS(134),
    [anon_sym_SCHEMAFULL] = ACTIONS(134),
    [anon_sym_SCHEMALESS] = ACTIONS(134),
    [anon_sym_AS] = ACTIONS(134),
    [anon_sym_PERMISSIONS] = ACTIONS(134),
    [anon_sym_FULL] = ACTIONS(134),
    [anon_sym_FOR] = ACTIONS(134),
    [anon_sym_select] = ACTIONS(134),
    [anon_sym_update] = ACTIONS(134),
    [anon_sym_create] = ACTIONS(134),
    [anon_sym_delete] = ACTIONS(134),
    [anon_sym_EVENT] = ACTIONS(134),
    [anon_sym_WHEN] = ACTIONS(134),
    [anon_sym_ASSERT] = ACTIONS(134),
    [anon_sym_INDEX] = ACTIONS(134),
    [anon_sym_FIELDS] = ACTIONS(134),
    [anon_sym_COLUMNS] = ACTIONS(134),
    [anon_sym_UNIQUE] = ACTIONS(134),
    [anon_sym_REMOVE] = ACTIONS(134),
    [anon_sym_SLEEP] = ACTIONS(134),
    [anon_sym_INFO] = ACTIONS(134),
    [anon_sym_KV] = ACTIONS(134),
    [anon_sym_FUNCTION] = ACTIONS(134),
    [anon_sym_PARAM] = ACTIONS(134),
    [anon_sym_AMP_AMP] = ACTIONS(132),
    [anon_sym_AND] = ACTIONS(134),
    [anon_sym_PIPE_PIPE] = ACTIONS(132),
    [anon_sym_OR] = ACTIONS(134),
    [anon_sym_QMARK_QMARK] = ACTIONS(132),
    [anon_sym_QMARK_COLON] = ACTIONS(132),
    [anon_sym_EQ] = ACTIONS(134),
    [anon_sym_IS] = ACTIONS(134),
    [anon_sym_BANG_EQ] = ACTIONS(132),
    [anon_sym_ISNOT] = ACTIONS(132),
    [anon_sym_EQ_EQ] = ACTIONS(132),
    [anon_sym_QMARK_EQ] = ACTIONS(132),
    [anon_sym_STAR_EQ] = ACTIONS(132),
    [anon_sym_TILDE] = ACTIONS(132),
    [anon_sym_BANG_TILDE] = ACTIONS(132),
    [anon_sym_QMARK_TILDE] = ACTIONS(132),
    [anon_sym_STAR_TILDE] = ACTIONS(132),
    [anon_sym_LT] = ACTIONS(134),
    [anon_sym_LT_EQ] = ACTIONS(132),
    [anon_sym_GT] = ACTIONS(134),
    [anon_sym_GT_EQ] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(132),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(134),
    [anon_sym_x] = ACTIONS(134),
    [anon_sym_SLASH] = ACTIONS(134),
    [anon_sym_] = ACTIONS(132),
    [anon_sym_STAR_STAR] = ACTIONS(132),
    [anon_sym_IN] = ACTIONS(134),
    [anon_sym_CONTAINS] = ACTIONS(134),
    [anon_sym_2] = ACTIONS(132),
    [anon_sym_CONTAINSNOT] = ACTIONS(134),
    [anon_sym_3] = ACTIONS(132),
    [anon_sym_CONTAINSALL] = ACTIONS(134),
    [anon_sym_4] = ACTIONS(132),
    [anon_sym_CONTAINSANY] = ACTIONS(134),
    [anon_sym_5] = ACTIONS(132),
    [anon_sym_CONTAINSNONE] = ACTIONS(134),
    [anon_sym_6] = ACTIONS(132),
    [anon_sym_INSIDE] = ACTIONS(134),
    [anon_sym_7] = ACTIONS(132),
    [anon_sym_NOTINSIDE] = ACTIONS(134),
    [anon_sym_NOTIN] = ACTIONS(132),
    [anon_sym_8] = ACTIONS(132),
    [anon_sym_ALLINSIDE] = ACTIONS(134),
    [anon_sym_9] = ACTIONS(132),
    [anon_sym_ANYINSIDE] = ACTIONS(134),
    [anon_sym_10] = ACTIONS(132),
    [anon_sym_NONEINSIDE] = ACTIONS(134),
    [anon_sym_11] = ACTIONS(132),
    [anon_sym_OUTSIDE] = ACTIONS(134),
    [anon_sym_INTERSECTS] = ACTIONS(134),
    [anon_sym_COMMA] = ACTIONS(132),
    [anon_sym_SEMI] = ACTIONS(132),
    [anon_sym_COLON] = ACTIONS(132),
    [anon_sym_LPAREN] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(132),
    [anon_sym_LBRACK] = ACTIONS(132),
    [anon_sym_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACE] = ACTIONS(132),
    [anon_sym_RBRACE] = ACTIONS(132),
    [anon_sym_DASH_GT] = ACTIONS(132),
    [anon_sym_LT_DASH] = ACTIONS(132),
    [anon_sym_any] = ACTIONS(134),
    [anon_sym_array] = ACTIONS(134),
    [anon_sym_bool] = ACTIONS(134),
    [anon_sym_datetime] = ACTIONS(134),
    [anon_sym_decimal] = ACTIONS(134),
    [anon_sym_duration] = ACTIONS(134),
    [anon_sym_float] = ACTIONS(134),
    [anon_sym_int] = ACTIONS(134),
    [anon_sym_number] = ACTIONS(134),
    [anon_sym_object] = ACTIONS(134),
    [anon_sym_string] = ACTIONS(134),
    [anon_sym_record] = ACTIONS(134),
    [anon_sym_geometry] = ACTIONS(134),
    [anon_sym_EDDSA] = ACTIONS(134),
    [anon_sym_ES256] = ACTIONS(134),
    [anon_sym_ES384] = ACTIONS(134),
    [anon_sym_ES512] = ACTIONS(134),
    [anon_sym_HS256] = ACTIONS(134),
    [anon_sym_HS384] = ACTIONS(134),
    [anon_sym_HS512] = ACTIONS(134),
    [anon_sym_PS256] = ACTIONS(134),
    [anon_sym_PS384] = ACTIONS(134),
    [anon_sym_PS512] = ACTIONS(134),
    [anon_sym_RS256] = ACTIONS(134),
    [anon_sym_RS384] = ACTIONS(134),
    [anon_sym_RS512] = ACTIONS(134),
    [aux_sym_function_token1] = ACTIONS(132),
    [aux_sym_function_token2] = ACTIONS(132),
    [anon_sym_count] = ACTIONS(134),
    [aux_sym_function_token3] = ACTIONS(132),
    [aux_sym_function_token4] = ACTIONS(132),
    [aux_sym_function_token5] = ACTIONS(132),
    [aux_sym_function_token6] = ACTIONS(132),
    [aux_sym_function_token7] = ACTIONS(132),
    [aux_sym_function_token8] = ACTIONS(132),
    [aux_sym_function_token9] = ACTIONS(132),
    [aux_sym_function_token10] = ACTIONS(134),
    [aux_sym_function_token11] = ACTIONS(132),
    [aux_sym_function_token12] = ACTIONS(134),
    [aux_sym_function_token13] = ACTIONS(132),
    [aux_sym_function_token14] = ACTIONS(132),
    [aux_sym_function_token15] = ACTIONS(132),
    [aux_sym_function_token16] = ACTIONS(134),
    [anon_sym_true] = ACTIONS(134),
    [anon_sym_false] = ACTIONS(134),
    [anon_sym_TRUE] = ACTIONS(134),
    [anon_sym_FALSE] = ACTIONS(134),
    [anon_sym_null] = ACTIONS(134),
    [anon_sym_NULL] = ACTIONS(134),
    [anon_sym_none] = ACTIONS(134),
    [anon_sym_NONE] = ACTIONS(134),
    [sym_variable] = ACTIONS(132),
    [sym_comment] = ACTIONS(132),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DQUOTE] = ACTIONS(132),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(136),
    [aux_sym_future_token1] = ACTIONS(136),
    [aux_sym_casting_token1] = ACTIONS(136),
    [aux_sym_property_token1] = ACTIONS(138),
    [aux_sym_identifier_token1] = ACTIONS(138),
    [aux_sym_constant_token1] = ACTIONS(136),
    [aux_sym_number_token1] = ACTIONS(138),
    [aux_sym_record_token1] = ACTIONS(136),
    [aux_sym_record_token2] = ACTIONS(136),
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
    [anon_sym_AMP_AMP] = ACTIONS(136),
    [anon_sym_AND] = ACTIONS(138),
    [anon_sym_PIPE_PIPE] = ACTIONS(136),
    [anon_sym_OR] = ACTIONS(138),
    [anon_sym_QMARK_QMARK] = ACTIONS(136),
    [anon_sym_QMARK_COLON] = ACTIONS(136),
    [anon_sym_EQ] = ACTIONS(138),
    [anon_sym_IS] = ACTIONS(138),
    [anon_sym_BANG_EQ] = ACTIONS(136),
    [anon_sym_ISNOT] = ACTIONS(136),
    [anon_sym_EQ_EQ] = ACTIONS(136),
    [anon_sym_QMARK_EQ] = ACTIONS(136),
    [anon_sym_STAR_EQ] = ACTIONS(136),
    [anon_sym_TILDE] = ACTIONS(136),
    [anon_sym_BANG_TILDE] = ACTIONS(136),
    [anon_sym_QMARK_TILDE] = ACTIONS(136),
    [anon_sym_STAR_TILDE] = ACTIONS(136),
    [anon_sym_LT] = ACTIONS(138),
    [anon_sym_LT_EQ] = ACTIONS(136),
    [anon_sym_GT] = ACTIONS(138),
    [anon_sym_GT_EQ] = ACTIONS(136),
    [anon_sym_PLUS] = ACTIONS(136),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_x] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_] = ACTIONS(136),
    [anon_sym_STAR_STAR] = ACTIONS(136),
    [anon_sym_IN] = ACTIONS(138),
    [anon_sym_CONTAINS] = ACTIONS(138),
    [anon_sym_2] = ACTIONS(136),
    [anon_sym_CONTAINSNOT] = ACTIONS(138),
    [anon_sym_3] = ACTIONS(136),
    [anon_sym_CONTAINSALL] = ACTIONS(138),
    [anon_sym_4] = ACTIONS(136),
    [anon_sym_CONTAINSANY] = ACTIONS(138),
    [anon_sym_5] = ACTIONS(136),
    [anon_sym_CONTAINSNONE] = ACTIONS(138),
    [anon_sym_6] = ACTIONS(136),
    [anon_sym_INSIDE] = ACTIONS(138),
    [anon_sym_7] = ACTIONS(136),
    [anon_sym_NOTINSIDE] = ACTIONS(138),
    [anon_sym_NOTIN] = ACTIONS(136),
    [anon_sym_8] = ACTIONS(136),
    [anon_sym_ALLINSIDE] = ACTIONS(138),
    [anon_sym_9] = ACTIONS(136),
    [anon_sym_ANYINSIDE] = ACTIONS(138),
    [anon_sym_10] = ACTIONS(136),
    [anon_sym_NONEINSIDE] = ACTIONS(138),
    [anon_sym_11] = ACTIONS(136),
    [anon_sym_OUTSIDE] = ACTIONS(138),
    [anon_sym_INTERSECTS] = ACTIONS(138),
    [anon_sym_COMMA] = ACTIONS(136),
    [anon_sym_SEMI] = ACTIONS(136),
    [anon_sym_COLON] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(136),
    [anon_sym_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(136),
    [anon_sym_DASH_GT] = ACTIONS(136),
    [anon_sym_LT_DASH] = ACTIONS(136),
    [anon_sym_any] = ACTIONS(138),
    [anon_sym_array] = ACTIONS(138),
    [anon_sym_bool] = ACTIONS(138),
    [anon_sym_datetime] = ACTIONS(138),
    [anon_sym_decimal] = ACTIONS(138),
    [anon_sym_duration] = ACTIONS(138),
    [anon_sym_float] = ACTIONS(138),
    [anon_sym_int] = ACTIONS(138),
    [anon_sym_number] = ACTIONS(138),
    [anon_sym_object] = ACTIONS(138),
    [anon_sym_string] = ACTIONS(138),
    [anon_sym_record] = ACTIONS(138),
    [anon_sym_geometry] = ACTIONS(138),
    [anon_sym_EDDSA] = ACTIONS(138),
    [anon_sym_ES256] = ACTIONS(138),
    [anon_sym_ES384] = ACTIONS(138),
    [anon_sym_ES512] = ACTIONS(138),
    [anon_sym_HS256] = ACTIONS(138),
    [anon_sym_HS384] = ACTIONS(138),
    [anon_sym_HS512] = ACTIONS(138),
    [anon_sym_PS256] = ACTIONS(138),
    [anon_sym_PS384] = ACTIONS(138),
    [anon_sym_PS512] = ACTIONS(138),
    [anon_sym_RS256] = ACTIONS(138),
    [anon_sym_RS384] = ACTIONS(138),
    [anon_sym_RS512] = ACTIONS(138),
    [aux_sym_function_token1] = ACTIONS(136),
    [aux_sym_function_token2] = ACTIONS(136),
    [anon_sym_count] = ACTIONS(138),
    [aux_sym_function_token3] = ACTIONS(136),
    [aux_sym_function_token4] = ACTIONS(136),
    [aux_sym_function_token5] = ACTIONS(136),
    [aux_sym_function_token6] = ACTIONS(136),
    [aux_sym_function_token7] = ACTIONS(136),
    [aux_sym_function_token8] = ACTIONS(136),
    [aux_sym_function_token9] = ACTIONS(136),
    [aux_sym_function_token10] = ACTIONS(138),
    [aux_sym_function_token11] = ACTIONS(136),
    [aux_sym_function_token12] = ACTIONS(138),
    [aux_sym_function_token13] = ACTIONS(136),
    [aux_sym_function_token14] = ACTIONS(136),
    [aux_sym_function_token15] = ACTIONS(136),
    [aux_sym_function_token16] = ACTIONS(138),
    [anon_sym_true] = ACTIONS(138),
    [anon_sym_false] = ACTIONS(138),
    [anon_sym_TRUE] = ACTIONS(138),
    [anon_sym_FALSE] = ACTIONS(138),
    [anon_sym_null] = ACTIONS(138),
    [anon_sym_NULL] = ACTIONS(138),
    [anon_sym_none] = ACTIONS(138),
    [anon_sym_NONE] = ACTIONS(138),
    [sym_variable] = ACTIONS(136),
    [sym_comment] = ACTIONS(136),
    [anon_sym_SQUOTE] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(136),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [aux_sym_future_token1] = ACTIONS(140),
    [aux_sym_casting_token1] = ACTIONS(140),
    [aux_sym_property_token1] = ACTIONS(142),
    [aux_sym_identifier_token1] = ACTIONS(142),
    [aux_sym_constant_token1] = ACTIONS(140),
    [aux_sym_number_token1] = ACTIONS(142),
    [aux_sym_record_token1] = ACTIONS(140),
    [aux_sym_record_token2] = ACTIONS(140),
    [anon_sym_USE] = ACTIONS(142),
    [anon_sym_NS] = ACTIONS(142),
    [anon_sym_DB] = ACTIONS(142),
    [anon_sym_LET] = ACTIONS(142),
    [anon_sym_BEGIN] = ACTIONS(142),
    [anon_sym_TRANSACTION] = ACTIONS(142),
    [anon_sym_CANCEL] = ACTIONS(142),
    [anon_sym_COMMIT] = ACTIONS(142),
    [anon_sym_IF] = ACTIONS(142),
    [anon_sym_ELSE] = ACTIONS(142),
    [anon_sym_THEN] = ACTIONS(142),
    [anon_sym_END] = ACTIONS(142),
    [anon_sym_SELECT] = ACTIONS(142),
    [anon_sym_FROM] = ACTIONS(142),
    [anon_sym_WHERE] = ACTIONS(142),
    [anon_sym_SPLIT] = ACTIONS(142),
    [anon_sym_AT] = ACTIONS(142),
    [anon_sym_GROUP] = ACTIONS(142),
    [anon_sym_BY] = ACTIONS(142),
    [anon_sym_ORDER] = ACTIONS(142),
    [anon_sym_COLLATE] = ACTIONS(142),
    [anon_sym_NUMERIC] = ACTIONS(142),
    [anon_sym_ASC] = ACTIONS(142),
    [anon_sym_DESC] = ACTIONS(142),
    [anon_sym_LIMIT] = ACTIONS(142),
    [anon_sym_START] = ACTIONS(142),
    [anon_sym_FETCH] = ACTIONS(142),
    [anon_sym_TIMEOUT] = ACTIONS(142),
    [anon_sym_PARALLEL] = ACTIONS(142),
    [anon_sym_INSERT] = ACTIONS(142),
    [anon_sym_IGNORE] = ACTIONS(142),
    [anon_sym_INTO] = ACTIONS(142),
    [anon_sym_VALUES] = ACTIONS(142),
    [anon_sym_ON] = ACTIONS(142),
    [anon_sym_DUPLICATE] = ACTIONS(142),
    [anon_sym_KEY] = ACTIONS(142),
    [anon_sym_UPDATE] = ACTIONS(142),
    [anon_sym_CREATE] = ACTIONS(142),
    [anon_sym_CONTENT] = ACTIONS(142),
    [anon_sym_SET] = ACTIONS(142),
    [anon_sym_RETURN] = ACTIONS(142),
    [anon_sym_BEFORE] = ACTIONS(142),
    [anon_sym_AFTER] = ACTIONS(142),
    [anon_sym_DIFF] = ACTIONS(142),
    [anon_sym_MERGE] = ACTIONS(142),
    [anon_sym_PATCH] = ACTIONS(142),
    [anon_sym_RELATE] = ACTIONS(142),
    [anon_sym_DELETE] = ACTIONS(142),
    [anon_sym_DEFINE] = ACTIONS(142),
    [anon_sym_NAMESPACE] = ACTIONS(142),
    [anon_sym_DATABASE] = ACTIONS(142),
    [anon_sym_LOGIN] = ACTIONS(142),
    [anon_sym_PASSWORD] = ACTIONS(142),
    [anon_sym_PASSHASH] = ACTIONS(142),
    [anon_sym_TOKEN] = ACTIONS(142),
    [anon_sym_SCOPE] = ACTIONS(142),
    [anon_sym_TYPE] = ACTIONS(142),
    [anon_sym_VALUE] = ACTIONS(142),
    [anon_sym_SESSION] = ACTIONS(142),
    [anon_sym_SIGNUP] = ACTIONS(142),
    [anon_sym_SIGNIN] = ACTIONS(142),
    [anon_sym_TABLE] = ACTIONS(142),
    [anon_sym_DROP] = ACTIONS(142),
    [anon_sym_SCHEMAFULL] = ACTIONS(142),
    [anon_sym_SCHEMALESS] = ACTIONS(142),
    [anon_sym_AS] = ACTIONS(142),
    [anon_sym_PERMISSIONS] = ACTIONS(142),
    [anon_sym_FULL] = ACTIONS(142),
    [anon_sym_FOR] = ACTIONS(142),
    [anon_sym_select] = ACTIONS(142),
    [anon_sym_update] = ACTIONS(142),
    [anon_sym_create] = ACTIONS(142),
    [anon_sym_delete] = ACTIONS(142),
    [anon_sym_EVENT] = ACTIONS(142),
    [anon_sym_WHEN] = ACTIONS(142),
    [anon_sym_ASSERT] = ACTIONS(142),
    [anon_sym_INDEX] = ACTIONS(142),
    [anon_sym_FIELDS] = ACTIONS(142),
    [anon_sym_COLUMNS] = ACTIONS(142),
    [anon_sym_UNIQUE] = ACTIONS(142),
    [anon_sym_REMOVE] = ACTIONS(142),
    [anon_sym_SLEEP] = ACTIONS(142),
    [anon_sym_INFO] = ACTIONS(142),
    [anon_sym_KV] = ACTIONS(142),
    [anon_sym_FUNCTION] = ACTIONS(142),
    [anon_sym_PARAM] = ACTIONS(142),
    [anon_sym_AMP_AMP] = ACTIONS(140),
    [anon_sym_AND] = ACTIONS(142),
    [anon_sym_PIPE_PIPE] = ACTIONS(140),
    [anon_sym_OR] = ACTIONS(142),
    [anon_sym_QMARK_QMARK] = ACTIONS(140),
    [anon_sym_QMARK_COLON] = ACTIONS(140),
    [anon_sym_EQ] = ACTIONS(142),
    [anon_sym_IS] = ACTIONS(142),
    [anon_sym_BANG_EQ] = ACTIONS(140),
    [anon_sym_ISNOT] = ACTIONS(140),
    [anon_sym_EQ_EQ] = ACTIONS(140),
    [anon_sym_QMARK_EQ] = ACTIONS(140),
    [anon_sym_STAR_EQ] = ACTIONS(140),
    [anon_sym_TILDE] = ACTIONS(140),
    [anon_sym_BANG_TILDE] = ACTIONS(140),
    [anon_sym_QMARK_TILDE] = ACTIONS(140),
    [anon_sym_STAR_TILDE] = ACTIONS(140),
    [anon_sym_LT] = ACTIONS(142),
    [anon_sym_LT_EQ] = ACTIONS(140),
    [anon_sym_GT] = ACTIONS(142),
    [anon_sym_GT_EQ] = ACTIONS(140),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(142),
    [anon_sym_STAR] = ACTIONS(142),
    [anon_sym_x] = ACTIONS(142),
    [anon_sym_SLASH] = ACTIONS(142),
    [anon_sym_] = ACTIONS(140),
    [anon_sym_STAR_STAR] = ACTIONS(140),
    [anon_sym_IN] = ACTIONS(142),
    [anon_sym_CONTAINS] = ACTIONS(142),
    [anon_sym_2] = ACTIONS(140),
    [anon_sym_CONTAINSNOT] = ACTIONS(142),
    [anon_sym_3] = ACTIONS(140),
    [anon_sym_CONTAINSALL] = ACTIONS(142),
    [anon_sym_4] = ACTIONS(140),
    [anon_sym_CONTAINSANY] = ACTIONS(142),
    [anon_sym_5] = ACTIONS(140),
    [anon_sym_CONTAINSNONE] = ACTIONS(142),
    [anon_sym_6] = ACTIONS(140),
    [anon_sym_INSIDE] = ACTIONS(142),
    [anon_sym_7] = ACTIONS(140),
    [anon_sym_NOTINSIDE] = ACTIONS(142),
    [anon_sym_NOTIN] = ACTIONS(140),
    [anon_sym_8] = ACTIONS(140),
    [anon_sym_ALLINSIDE] = ACTIONS(142),
    [anon_sym_9] = ACTIONS(140),
    [anon_sym_ANYINSIDE] = ACTIONS(142),
    [anon_sym_10] = ACTIONS(140),
    [anon_sym_NONEINSIDE] = ACTIONS(142),
    [anon_sym_11] = ACTIONS(140),
    [anon_sym_OUTSIDE] = ACTIONS(142),
    [anon_sym_INTERSECTS] = ACTIONS(142),
    [anon_sym_COMMA] = ACTIONS(140),
    [anon_sym_SEMI] = ACTIONS(140),
    [anon_sym_COLON] = ACTIONS(140),
    [anon_sym_LPAREN] = ACTIONS(140),
    [anon_sym_RPAREN] = ACTIONS(140),
    [anon_sym_LBRACK] = ACTIONS(140),
    [anon_sym_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACE] = ACTIONS(140),
    [anon_sym_RBRACE] = ACTIONS(140),
    [anon_sym_DASH_GT] = ACTIONS(140),
    [anon_sym_LT_DASH] = ACTIONS(140),
    [anon_sym_any] = ACTIONS(142),
    [anon_sym_array] = ACTIONS(142),
    [anon_sym_bool] = ACTIONS(142),
    [anon_sym_datetime] = ACTIONS(142),
    [anon_sym_decimal] = ACTIONS(142),
    [anon_sym_duration] = ACTIONS(142),
    [anon_sym_float] = ACTIONS(142),
    [anon_sym_int] = ACTIONS(142),
    [anon_sym_number] = ACTIONS(142),
    [anon_sym_object] = ACTIONS(142),
    [anon_sym_string] = ACTIONS(142),
    [anon_sym_record] = ACTIONS(142),
    [anon_sym_geometry] = ACTIONS(142),
    [anon_sym_EDDSA] = ACTIONS(142),
    [anon_sym_ES256] = ACTIONS(142),
    [anon_sym_ES384] = ACTIONS(142),
    [anon_sym_ES512] = ACTIONS(142),
    [anon_sym_HS256] = ACTIONS(142),
    [anon_sym_HS384] = ACTIONS(142),
    [anon_sym_HS512] = ACTIONS(142),
    [anon_sym_PS256] = ACTIONS(142),
    [anon_sym_PS384] = ACTIONS(142),
    [anon_sym_PS512] = ACTIONS(142),
    [anon_sym_RS256] = ACTIONS(142),
    [anon_sym_RS384] = ACTIONS(142),
    [anon_sym_RS512] = ACTIONS(142),
    [aux_sym_function_token1] = ACTIONS(140),
    [aux_sym_function_token2] = ACTIONS(140),
    [anon_sym_count] = ACTIONS(142),
    [aux_sym_function_token3] = ACTIONS(140),
    [aux_sym_function_token4] = ACTIONS(140),
    [aux_sym_function_token5] = ACTIONS(140),
    [aux_sym_function_token6] = ACTIONS(140),
    [aux_sym_function_token7] = ACTIONS(140),
    [aux_sym_function_token8] = ACTIONS(140),
    [aux_sym_function_token9] = ACTIONS(140),
    [aux_sym_function_token10] = ACTIONS(142),
    [aux_sym_function_token11] = ACTIONS(140),
    [aux_sym_function_token12] = ACTIONS(142),
    [aux_sym_function_token13] = ACTIONS(140),
    [aux_sym_function_token14] = ACTIONS(140),
    [aux_sym_function_token15] = ACTIONS(140),
    [aux_sym_function_token16] = ACTIONS(142),
    [anon_sym_true] = ACTIONS(142),
    [anon_sym_false] = ACTIONS(142),
    [anon_sym_TRUE] = ACTIONS(142),
    [anon_sym_FALSE] = ACTIONS(142),
    [anon_sym_null] = ACTIONS(142),
    [anon_sym_NULL] = ACTIONS(142),
    [anon_sym_none] = ACTIONS(142),
    [anon_sym_NONE] = ACTIONS(142),
    [sym_variable] = ACTIONS(140),
    [sym_comment] = ACTIONS(140),
    [anon_sym_SQUOTE] = ACTIONS(140),
    [anon_sym_DQUOTE] = ACTIONS(140),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [aux_sym_future_token1] = ACTIONS(144),
    [aux_sym_casting_token1] = ACTIONS(144),
    [aux_sym_property_token1] = ACTIONS(146),
    [aux_sym_identifier_token1] = ACTIONS(146),
    [aux_sym_constant_token1] = ACTIONS(144),
    [aux_sym_number_token1] = ACTIONS(146),
    [aux_sym_record_token1] = ACTIONS(144),
    [aux_sym_record_token2] = ACTIONS(144),
    [anon_sym_USE] = ACTIONS(146),
    [anon_sym_NS] = ACTIONS(146),
    [anon_sym_DB] = ACTIONS(146),
    [anon_sym_LET] = ACTIONS(146),
    [anon_sym_BEGIN] = ACTIONS(146),
    [anon_sym_TRANSACTION] = ACTIONS(146),
    [anon_sym_CANCEL] = ACTIONS(146),
    [anon_sym_COMMIT] = ACTIONS(146),
    [anon_sym_IF] = ACTIONS(146),
    [anon_sym_ELSE] = ACTIONS(146),
    [anon_sym_THEN] = ACTIONS(146),
    [anon_sym_END] = ACTIONS(146),
    [anon_sym_SELECT] = ACTIONS(146),
    [anon_sym_FROM] = ACTIONS(146),
    [anon_sym_WHERE] = ACTIONS(146),
    [anon_sym_SPLIT] = ACTIONS(146),
    [anon_sym_AT] = ACTIONS(146),
    [anon_sym_GROUP] = ACTIONS(146),
    [anon_sym_BY] = ACTIONS(146),
    [anon_sym_ORDER] = ACTIONS(146),
    [anon_sym_COLLATE] = ACTIONS(146),
    [anon_sym_NUMERIC] = ACTIONS(146),
    [anon_sym_ASC] = ACTIONS(146),
    [anon_sym_DESC] = ACTIONS(146),
    [anon_sym_LIMIT] = ACTIONS(146),
    [anon_sym_START] = ACTIONS(146),
    [anon_sym_FETCH] = ACTIONS(146),
    [anon_sym_TIMEOUT] = ACTIONS(146),
    [anon_sym_PARALLEL] = ACTIONS(146),
    [anon_sym_INSERT] = ACTIONS(146),
    [anon_sym_IGNORE] = ACTIONS(146),
    [anon_sym_INTO] = ACTIONS(146),
    [anon_sym_VALUES] = ACTIONS(146),
    [anon_sym_ON] = ACTIONS(146),
    [anon_sym_DUPLICATE] = ACTIONS(146),
    [anon_sym_KEY] = ACTIONS(146),
    [anon_sym_UPDATE] = ACTIONS(146),
    [anon_sym_CREATE] = ACTIONS(146),
    [anon_sym_CONTENT] = ACTIONS(146),
    [anon_sym_SET] = ACTIONS(146),
    [anon_sym_RETURN] = ACTIONS(146),
    [anon_sym_BEFORE] = ACTIONS(146),
    [anon_sym_AFTER] = ACTIONS(146),
    [anon_sym_DIFF] = ACTIONS(146),
    [anon_sym_MERGE] = ACTIONS(146),
    [anon_sym_PATCH] = ACTIONS(146),
    [anon_sym_RELATE] = ACTIONS(146),
    [anon_sym_DELETE] = ACTIONS(146),
    [anon_sym_DEFINE] = ACTIONS(146),
    [anon_sym_NAMESPACE] = ACTIONS(146),
    [anon_sym_DATABASE] = ACTIONS(146),
    [anon_sym_LOGIN] = ACTIONS(146),
    [anon_sym_PASSWORD] = ACTIONS(146),
    [anon_sym_PASSHASH] = ACTIONS(146),
    [anon_sym_TOKEN] = ACTIONS(146),
    [anon_sym_SCOPE] = ACTIONS(146),
    [anon_sym_TYPE] = ACTIONS(146),
    [anon_sym_VALUE] = ACTIONS(146),
    [anon_sym_SESSION] = ACTIONS(146),
    [anon_sym_SIGNUP] = ACTIONS(146),
    [anon_sym_SIGNIN] = ACTIONS(146),
    [anon_sym_TABLE] = ACTIONS(146),
    [anon_sym_DROP] = ACTIONS(146),
    [anon_sym_SCHEMAFULL] = ACTIONS(146),
    [anon_sym_SCHEMALESS] = ACTIONS(146),
    [anon_sym_AS] = ACTIONS(146),
    [anon_sym_PERMISSIONS] = ACTIONS(146),
    [anon_sym_FULL] = ACTIONS(146),
    [anon_sym_FOR] = ACTIONS(146),
    [anon_sym_select] = ACTIONS(146),
    [anon_sym_update] = ACTIONS(146),
    [anon_sym_create] = ACTIONS(146),
    [anon_sym_delete] = ACTIONS(146),
    [anon_sym_EVENT] = ACTIONS(146),
    [anon_sym_WHEN] = ACTIONS(146),
    [anon_sym_ASSERT] = ACTIONS(146),
    [anon_sym_INDEX] = ACTIONS(146),
    [anon_sym_FIELDS] = ACTIONS(146),
    [anon_sym_COLUMNS] = ACTIONS(146),
    [anon_sym_UNIQUE] = ACTIONS(146),
    [anon_sym_REMOVE] = ACTIONS(146),
    [anon_sym_SLEEP] = ACTIONS(146),
    [anon_sym_INFO] = ACTIONS(146),
    [anon_sym_KV] = ACTIONS(146),
    [anon_sym_FUNCTION] = ACTIONS(146),
    [anon_sym_PARAM] = ACTIONS(146),
    [anon_sym_AMP_AMP] = ACTIONS(144),
    [anon_sym_AND] = ACTIONS(146),
    [anon_sym_PIPE_PIPE] = ACTIONS(144),
    [anon_sym_OR] = ACTIONS(146),
    [anon_sym_QMARK_QMARK] = ACTIONS(144),
    [anon_sym_QMARK_COLON] = ACTIONS(144),
    [anon_sym_EQ] = ACTIONS(146),
    [anon_sym_IS] = ACTIONS(146),
    [anon_sym_BANG_EQ] = ACTIONS(144),
    [anon_sym_ISNOT] = ACTIONS(144),
    [anon_sym_EQ_EQ] = ACTIONS(144),
    [anon_sym_QMARK_EQ] = ACTIONS(144),
    [anon_sym_STAR_EQ] = ACTIONS(144),
    [anon_sym_TILDE] = ACTIONS(144),
    [anon_sym_BANG_TILDE] = ACTIONS(144),
    [anon_sym_QMARK_TILDE] = ACTIONS(144),
    [anon_sym_STAR_TILDE] = ACTIONS(144),
    [anon_sym_LT] = ACTIONS(146),
    [anon_sym_LT_EQ] = ACTIONS(144),
    [anon_sym_GT] = ACTIONS(146),
    [anon_sym_GT_EQ] = ACTIONS(144),
    [anon_sym_PLUS] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(146),
    [anon_sym_STAR] = ACTIONS(146),
    [anon_sym_x] = ACTIONS(146),
    [anon_sym_SLASH] = ACTIONS(146),
    [anon_sym_] = ACTIONS(144),
    [anon_sym_STAR_STAR] = ACTIONS(144),
    [anon_sym_IN] = ACTIONS(146),
    [anon_sym_CONTAINS] = ACTIONS(146),
    [anon_sym_2] = ACTIONS(144),
    [anon_sym_CONTAINSNOT] = ACTIONS(146),
    [anon_sym_3] = ACTIONS(144),
    [anon_sym_CONTAINSALL] = ACTIONS(146),
    [anon_sym_4] = ACTIONS(144),
    [anon_sym_CONTAINSANY] = ACTIONS(146),
    [anon_sym_5] = ACTIONS(144),
    [anon_sym_CONTAINSNONE] = ACTIONS(146),
    [anon_sym_6] = ACTIONS(144),
    [anon_sym_INSIDE] = ACTIONS(146),
    [anon_sym_7] = ACTIONS(144),
    [anon_sym_NOTINSIDE] = ACTIONS(146),
    [anon_sym_NOTIN] = ACTIONS(144),
    [anon_sym_8] = ACTIONS(144),
    [anon_sym_ALLINSIDE] = ACTIONS(146),
    [anon_sym_9] = ACTIONS(144),
    [anon_sym_ANYINSIDE] = ACTIONS(146),
    [anon_sym_10] = ACTIONS(144),
    [anon_sym_NONEINSIDE] = ACTIONS(146),
    [anon_sym_11] = ACTIONS(144),
    [anon_sym_OUTSIDE] = ACTIONS(146),
    [anon_sym_INTERSECTS] = ACTIONS(146),
    [anon_sym_COMMA] = ACTIONS(144),
    [anon_sym_SEMI] = ACTIONS(144),
    [anon_sym_COLON] = ACTIONS(144),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(144),
    [anon_sym_RBRACE] = ACTIONS(144),
    [anon_sym_DASH_GT] = ACTIONS(144),
    [anon_sym_LT_DASH] = ACTIONS(144),
    [anon_sym_any] = ACTIONS(146),
    [anon_sym_array] = ACTIONS(146),
    [anon_sym_bool] = ACTIONS(146),
    [anon_sym_datetime] = ACTIONS(146),
    [anon_sym_decimal] = ACTIONS(146),
    [anon_sym_duration] = ACTIONS(146),
    [anon_sym_float] = ACTIONS(146),
    [anon_sym_int] = ACTIONS(146),
    [anon_sym_number] = ACTIONS(146),
    [anon_sym_object] = ACTIONS(146),
    [anon_sym_string] = ACTIONS(146),
    [anon_sym_record] = ACTIONS(146),
    [anon_sym_geometry] = ACTIONS(146),
    [anon_sym_EDDSA] = ACTIONS(146),
    [anon_sym_ES256] = ACTIONS(146),
    [anon_sym_ES384] = ACTIONS(146),
    [anon_sym_ES512] = ACTIONS(146),
    [anon_sym_HS256] = ACTIONS(146),
    [anon_sym_HS384] = ACTIONS(146),
    [anon_sym_HS512] = ACTIONS(146),
    [anon_sym_PS256] = ACTIONS(146),
    [anon_sym_PS384] = ACTIONS(146),
    [anon_sym_PS512] = ACTIONS(146),
    [anon_sym_RS256] = ACTIONS(146),
    [anon_sym_RS384] = ACTIONS(146),
    [anon_sym_RS512] = ACTIONS(146),
    [aux_sym_function_token1] = ACTIONS(144),
    [aux_sym_function_token2] = ACTIONS(144),
    [anon_sym_count] = ACTIONS(146),
    [aux_sym_function_token3] = ACTIONS(144),
    [aux_sym_function_token4] = ACTIONS(144),
    [aux_sym_function_token5] = ACTIONS(144),
    [aux_sym_function_token6] = ACTIONS(144),
    [aux_sym_function_token7] = ACTIONS(144),
    [aux_sym_function_token8] = ACTIONS(144),
    [aux_sym_function_token9] = ACTIONS(144),
    [aux_sym_function_token10] = ACTIONS(146),
    [aux_sym_function_token11] = ACTIONS(144),
    [aux_sym_function_token12] = ACTIONS(146),
    [aux_sym_function_token13] = ACTIONS(144),
    [aux_sym_function_token14] = ACTIONS(144),
    [aux_sym_function_token15] = ACTIONS(144),
    [aux_sym_function_token16] = ACTIONS(146),
    [anon_sym_true] = ACTIONS(146),
    [anon_sym_false] = ACTIONS(146),
    [anon_sym_TRUE] = ACTIONS(146),
    [anon_sym_FALSE] = ACTIONS(146),
    [anon_sym_null] = ACTIONS(146),
    [anon_sym_NULL] = ACTIONS(146),
    [anon_sym_none] = ACTIONS(146),
    [anon_sym_NONE] = ACTIONS(146),
    [sym_variable] = ACTIONS(144),
    [sym_comment] = ACTIONS(144),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [anon_sym_DQUOTE] = ACTIONS(144),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(148),
    [aux_sym_future_token1] = ACTIONS(148),
    [aux_sym_casting_token1] = ACTIONS(148),
    [aux_sym_property_token1] = ACTIONS(150),
    [aux_sym_identifier_token1] = ACTIONS(150),
    [aux_sym_constant_token1] = ACTIONS(148),
    [aux_sym_number_token1] = ACTIONS(150),
    [aux_sym_record_token1] = ACTIONS(148),
    [aux_sym_record_token2] = ACTIONS(148),
    [anon_sym_USE] = ACTIONS(150),
    [anon_sym_NS] = ACTIONS(150),
    [anon_sym_DB] = ACTIONS(150),
    [anon_sym_LET] = ACTIONS(150),
    [anon_sym_BEGIN] = ACTIONS(150),
    [anon_sym_TRANSACTION] = ACTIONS(150),
    [anon_sym_CANCEL] = ACTIONS(150),
    [anon_sym_COMMIT] = ACTIONS(150),
    [anon_sym_IF] = ACTIONS(150),
    [anon_sym_ELSE] = ACTIONS(150),
    [anon_sym_THEN] = ACTIONS(150),
    [anon_sym_END] = ACTIONS(150),
    [anon_sym_SELECT] = ACTIONS(150),
    [anon_sym_FROM] = ACTIONS(150),
    [anon_sym_WHERE] = ACTIONS(150),
    [anon_sym_SPLIT] = ACTIONS(150),
    [anon_sym_AT] = ACTIONS(150),
    [anon_sym_GROUP] = ACTIONS(150),
    [anon_sym_BY] = ACTIONS(150),
    [anon_sym_ORDER] = ACTIONS(150),
    [anon_sym_COLLATE] = ACTIONS(150),
    [anon_sym_NUMERIC] = ACTIONS(150),
    [anon_sym_ASC] = ACTIONS(150),
    [anon_sym_DESC] = ACTIONS(150),
    [anon_sym_LIMIT] = ACTIONS(150),
    [anon_sym_START] = ACTIONS(150),
    [anon_sym_FETCH] = ACTIONS(150),
    [anon_sym_TIMEOUT] = ACTIONS(150),
    [anon_sym_PARALLEL] = ACTIONS(150),
    [anon_sym_INSERT] = ACTIONS(150),
    [anon_sym_IGNORE] = ACTIONS(150),
    [anon_sym_INTO] = ACTIONS(150),
    [anon_sym_VALUES] = ACTIONS(150),
    [anon_sym_ON] = ACTIONS(150),
    [anon_sym_DUPLICATE] = ACTIONS(150),
    [anon_sym_KEY] = ACTIONS(150),
    [anon_sym_UPDATE] = ACTIONS(150),
    [anon_sym_CREATE] = ACTIONS(150),
    [anon_sym_CONTENT] = ACTIONS(150),
    [anon_sym_SET] = ACTIONS(150),
    [anon_sym_RETURN] = ACTIONS(150),
    [anon_sym_BEFORE] = ACTIONS(150),
    [anon_sym_AFTER] = ACTIONS(150),
    [anon_sym_DIFF] = ACTIONS(150),
    [anon_sym_MERGE] = ACTIONS(150),
    [anon_sym_PATCH] = ACTIONS(150),
    [anon_sym_RELATE] = ACTIONS(150),
    [anon_sym_DELETE] = ACTIONS(150),
    [anon_sym_DEFINE] = ACTIONS(150),
    [anon_sym_NAMESPACE] = ACTIONS(150),
    [anon_sym_DATABASE] = ACTIONS(150),
    [anon_sym_LOGIN] = ACTIONS(150),
    [anon_sym_PASSWORD] = ACTIONS(150),
    [anon_sym_PASSHASH] = ACTIONS(150),
    [anon_sym_TOKEN] = ACTIONS(150),
    [anon_sym_SCOPE] = ACTIONS(150),
    [anon_sym_TYPE] = ACTIONS(150),
    [anon_sym_VALUE] = ACTIONS(150),
    [anon_sym_SESSION] = ACTIONS(150),
    [anon_sym_SIGNUP] = ACTIONS(150),
    [anon_sym_SIGNIN] = ACTIONS(150),
    [anon_sym_TABLE] = ACTIONS(150),
    [anon_sym_DROP] = ACTIONS(150),
    [anon_sym_SCHEMAFULL] = ACTIONS(150),
    [anon_sym_SCHEMALESS] = ACTIONS(150),
    [anon_sym_AS] = ACTIONS(150),
    [anon_sym_PERMISSIONS] = ACTIONS(150),
    [anon_sym_FULL] = ACTIONS(150),
    [anon_sym_FOR] = ACTIONS(150),
    [anon_sym_select] = ACTIONS(150),
    [anon_sym_update] = ACTIONS(150),
    [anon_sym_create] = ACTIONS(150),
    [anon_sym_delete] = ACTIONS(150),
    [anon_sym_EVENT] = ACTIONS(150),
    [anon_sym_WHEN] = ACTIONS(150),
    [anon_sym_ASSERT] = ACTIONS(150),
    [anon_sym_INDEX] = ACTIONS(150),
    [anon_sym_FIELDS] = ACTIONS(150),
    [anon_sym_COLUMNS] = ACTIONS(150),
    [anon_sym_UNIQUE] = ACTIONS(150),
    [anon_sym_REMOVE] = ACTIONS(150),
    [anon_sym_SLEEP] = ACTIONS(150),
    [anon_sym_INFO] = ACTIONS(150),
    [anon_sym_KV] = ACTIONS(150),
    [anon_sym_FUNCTION] = ACTIONS(150),
    [anon_sym_PARAM] = ACTIONS(150),
    [anon_sym_AMP_AMP] = ACTIONS(148),
    [anon_sym_AND] = ACTIONS(150),
    [anon_sym_PIPE_PIPE] = ACTIONS(148),
    [anon_sym_OR] = ACTIONS(150),
    [anon_sym_QMARK_QMARK] = ACTIONS(148),
    [anon_sym_QMARK_COLON] = ACTIONS(148),
    [anon_sym_EQ] = ACTIONS(150),
    [anon_sym_IS] = ACTIONS(150),
    [anon_sym_BANG_EQ] = ACTIONS(148),
    [anon_sym_ISNOT] = ACTIONS(148),
    [anon_sym_EQ_EQ] = ACTIONS(148),
    [anon_sym_QMARK_EQ] = ACTIONS(148),
    [anon_sym_STAR_EQ] = ACTIONS(148),
    [anon_sym_TILDE] = ACTIONS(148),
    [anon_sym_BANG_TILDE] = ACTIONS(148),
    [anon_sym_QMARK_TILDE] = ACTIONS(148),
    [anon_sym_STAR_TILDE] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_LT_EQ] = ACTIONS(148),
    [anon_sym_GT] = ACTIONS(150),
    [anon_sym_GT_EQ] = ACTIONS(148),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(150),
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_x] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_] = ACTIONS(148),
    [anon_sym_STAR_STAR] = ACTIONS(148),
    [anon_sym_IN] = ACTIONS(150),
    [anon_sym_CONTAINS] = ACTIONS(150),
    [anon_sym_2] = ACTIONS(148),
    [anon_sym_CONTAINSNOT] = ACTIONS(150),
    [anon_sym_3] = ACTIONS(148),
    [anon_sym_CONTAINSALL] = ACTIONS(150),
    [anon_sym_4] = ACTIONS(148),
    [anon_sym_CONTAINSANY] = ACTIONS(150),
    [anon_sym_5] = ACTIONS(148),
    [anon_sym_CONTAINSNONE] = ACTIONS(150),
    [anon_sym_6] = ACTIONS(148),
    [anon_sym_INSIDE] = ACTIONS(150),
    [anon_sym_7] = ACTIONS(148),
    [anon_sym_NOTINSIDE] = ACTIONS(150),
    [anon_sym_NOTIN] = ACTIONS(148),
    [anon_sym_8] = ACTIONS(148),
    [anon_sym_ALLINSIDE] = ACTIONS(150),
    [anon_sym_9] = ACTIONS(148),
    [anon_sym_ANYINSIDE] = ACTIONS(150),
    [anon_sym_10] = ACTIONS(148),
    [anon_sym_NONEINSIDE] = ACTIONS(150),
    [anon_sym_11] = ACTIONS(148),
    [anon_sym_OUTSIDE] = ACTIONS(150),
    [anon_sym_INTERSECTS] = ACTIONS(150),
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_SEMI] = ACTIONS(148),
    [anon_sym_COLON] = ACTIONS(148),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(148),
    [anon_sym_LBRACK] = ACTIONS(148),
    [anon_sym_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACE] = ACTIONS(148),
    [anon_sym_RBRACE] = ACTIONS(148),
    [anon_sym_DASH_GT] = ACTIONS(148),
    [anon_sym_LT_DASH] = ACTIONS(148),
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
    [anon_sym_EDDSA] = ACTIONS(150),
    [anon_sym_ES256] = ACTIONS(150),
    [anon_sym_ES384] = ACTIONS(150),
    [anon_sym_ES512] = ACTIONS(150),
    [anon_sym_HS256] = ACTIONS(150),
    [anon_sym_HS384] = ACTIONS(150),
    [anon_sym_HS512] = ACTIONS(150),
    [anon_sym_PS256] = ACTIONS(150),
    [anon_sym_PS384] = ACTIONS(150),
    [anon_sym_PS512] = ACTIONS(150),
    [anon_sym_RS256] = ACTIONS(150),
    [anon_sym_RS384] = ACTIONS(150),
    [anon_sym_RS512] = ACTIONS(150),
    [aux_sym_function_token1] = ACTIONS(148),
    [aux_sym_function_token2] = ACTIONS(148),
    [anon_sym_count] = ACTIONS(150),
    [aux_sym_function_token3] = ACTIONS(148),
    [aux_sym_function_token4] = ACTIONS(148),
    [aux_sym_function_token5] = ACTIONS(148),
    [aux_sym_function_token6] = ACTIONS(148),
    [aux_sym_function_token7] = ACTIONS(148),
    [aux_sym_function_token8] = ACTIONS(148),
    [aux_sym_function_token9] = ACTIONS(148),
    [aux_sym_function_token10] = ACTIONS(150),
    [aux_sym_function_token11] = ACTIONS(148),
    [aux_sym_function_token12] = ACTIONS(150),
    [aux_sym_function_token13] = ACTIONS(148),
    [aux_sym_function_token14] = ACTIONS(148),
    [aux_sym_function_token15] = ACTIONS(148),
    [aux_sym_function_token16] = ACTIONS(150),
    [anon_sym_true] = ACTIONS(150),
    [anon_sym_false] = ACTIONS(150),
    [anon_sym_TRUE] = ACTIONS(150),
    [anon_sym_FALSE] = ACTIONS(150),
    [anon_sym_null] = ACTIONS(150),
    [anon_sym_NULL] = ACTIONS(150),
    [anon_sym_none] = ACTIONS(150),
    [anon_sym_NONE] = ACTIONS(150),
    [sym_variable] = ACTIONS(148),
    [sym_comment] = ACTIONS(148),
    [anon_sym_SQUOTE] = ACTIONS(148),
    [anon_sym_DQUOTE] = ACTIONS(148),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [aux_sym_future_token1] = ACTIONS(152),
    [aux_sym_casting_token1] = ACTIONS(152),
    [aux_sym_property_token1] = ACTIONS(154),
    [aux_sym_identifier_token1] = ACTIONS(154),
    [aux_sym_constant_token1] = ACTIONS(152),
    [aux_sym_number_token1] = ACTIONS(154),
    [aux_sym_record_token1] = ACTIONS(152),
    [aux_sym_record_token2] = ACTIONS(152),
    [anon_sym_USE] = ACTIONS(154),
    [anon_sym_NS] = ACTIONS(154),
    [anon_sym_DB] = ACTIONS(154),
    [anon_sym_LET] = ACTIONS(154),
    [anon_sym_BEGIN] = ACTIONS(154),
    [anon_sym_TRANSACTION] = ACTIONS(154),
    [anon_sym_CANCEL] = ACTIONS(154),
    [anon_sym_COMMIT] = ACTIONS(154),
    [anon_sym_IF] = ACTIONS(154),
    [anon_sym_ELSE] = ACTIONS(154),
    [anon_sym_THEN] = ACTIONS(154),
    [anon_sym_END] = ACTIONS(154),
    [anon_sym_SELECT] = ACTIONS(154),
    [anon_sym_FROM] = ACTIONS(154),
    [anon_sym_WHERE] = ACTIONS(154),
    [anon_sym_SPLIT] = ACTIONS(154),
    [anon_sym_AT] = ACTIONS(154),
    [anon_sym_GROUP] = ACTIONS(154),
    [anon_sym_BY] = ACTIONS(154),
    [anon_sym_ORDER] = ACTIONS(154),
    [anon_sym_COLLATE] = ACTIONS(154),
    [anon_sym_NUMERIC] = ACTIONS(154),
    [anon_sym_ASC] = ACTIONS(154),
    [anon_sym_DESC] = ACTIONS(154),
    [anon_sym_LIMIT] = ACTIONS(154),
    [anon_sym_START] = ACTIONS(154),
    [anon_sym_FETCH] = ACTIONS(154),
    [anon_sym_TIMEOUT] = ACTIONS(154),
    [anon_sym_PARALLEL] = ACTIONS(154),
    [anon_sym_INSERT] = ACTIONS(154),
    [anon_sym_IGNORE] = ACTIONS(154),
    [anon_sym_INTO] = ACTIONS(154),
    [anon_sym_VALUES] = ACTIONS(154),
    [anon_sym_ON] = ACTIONS(154),
    [anon_sym_DUPLICATE] = ACTIONS(154),
    [anon_sym_KEY] = ACTIONS(154),
    [anon_sym_UPDATE] = ACTIONS(154),
    [anon_sym_CREATE] = ACTIONS(154),
    [anon_sym_CONTENT] = ACTIONS(154),
    [anon_sym_SET] = ACTIONS(154),
    [anon_sym_RETURN] = ACTIONS(154),
    [anon_sym_BEFORE] = ACTIONS(154),
    [anon_sym_AFTER] = ACTIONS(154),
    [anon_sym_DIFF] = ACTIONS(154),
    [anon_sym_MERGE] = ACTIONS(154),
    [anon_sym_PATCH] = ACTIONS(154),
    [anon_sym_RELATE] = ACTIONS(154),
    [anon_sym_DELETE] = ACTIONS(154),
    [anon_sym_DEFINE] = ACTIONS(154),
    [anon_sym_NAMESPACE] = ACTIONS(154),
    [anon_sym_DATABASE] = ACTIONS(154),
    [anon_sym_LOGIN] = ACTIONS(154),
    [anon_sym_PASSWORD] = ACTIONS(154),
    [anon_sym_PASSHASH] = ACTIONS(154),
    [anon_sym_TOKEN] = ACTIONS(154),
    [anon_sym_SCOPE] = ACTIONS(154),
    [anon_sym_TYPE] = ACTIONS(154),
    [anon_sym_VALUE] = ACTIONS(154),
    [anon_sym_SESSION] = ACTIONS(154),
    [anon_sym_SIGNUP] = ACTIONS(154),
    [anon_sym_SIGNIN] = ACTIONS(154),
    [anon_sym_TABLE] = ACTIONS(154),
    [anon_sym_DROP] = ACTIONS(154),
    [anon_sym_SCHEMAFULL] = ACTIONS(154),
    [anon_sym_SCHEMALESS] = ACTIONS(154),
    [anon_sym_AS] = ACTIONS(154),
    [anon_sym_PERMISSIONS] = ACTIONS(154),
    [anon_sym_FULL] = ACTIONS(154),
    [anon_sym_FOR] = ACTIONS(154),
    [anon_sym_select] = ACTIONS(154),
    [anon_sym_update] = ACTIONS(154),
    [anon_sym_create] = ACTIONS(154),
    [anon_sym_delete] = ACTIONS(154),
    [anon_sym_EVENT] = ACTIONS(154),
    [anon_sym_WHEN] = ACTIONS(154),
    [anon_sym_ASSERT] = ACTIONS(154),
    [anon_sym_INDEX] = ACTIONS(154),
    [anon_sym_FIELDS] = ACTIONS(154),
    [anon_sym_COLUMNS] = ACTIONS(154),
    [anon_sym_UNIQUE] = ACTIONS(154),
    [anon_sym_REMOVE] = ACTIONS(154),
    [anon_sym_SLEEP] = ACTIONS(154),
    [anon_sym_INFO] = ACTIONS(154),
    [anon_sym_KV] = ACTIONS(154),
    [anon_sym_FUNCTION] = ACTIONS(154),
    [anon_sym_PARAM] = ACTIONS(154),
    [anon_sym_AMP_AMP] = ACTIONS(152),
    [anon_sym_AND] = ACTIONS(154),
    [anon_sym_PIPE_PIPE] = ACTIONS(152),
    [anon_sym_OR] = ACTIONS(154),
    [anon_sym_QMARK_QMARK] = ACTIONS(152),
    [anon_sym_QMARK_COLON] = ACTIONS(152),
    [anon_sym_EQ] = ACTIONS(154),
    [anon_sym_IS] = ACTIONS(154),
    [anon_sym_BANG_EQ] = ACTIONS(152),
    [anon_sym_ISNOT] = ACTIONS(152),
    [anon_sym_EQ_EQ] = ACTIONS(152),
    [anon_sym_QMARK_EQ] = ACTIONS(152),
    [anon_sym_STAR_EQ] = ACTIONS(152),
    [anon_sym_TILDE] = ACTIONS(152),
    [anon_sym_BANG_TILDE] = ACTIONS(152),
    [anon_sym_QMARK_TILDE] = ACTIONS(152),
    [anon_sym_STAR_TILDE] = ACTIONS(152),
    [anon_sym_LT] = ACTIONS(154),
    [anon_sym_LT_EQ] = ACTIONS(152),
    [anon_sym_GT] = ACTIONS(154),
    [anon_sym_GT_EQ] = ACTIONS(152),
    [anon_sym_PLUS] = ACTIONS(152),
    [anon_sym_DASH] = ACTIONS(154),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_x] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_] = ACTIONS(152),
    [anon_sym_STAR_STAR] = ACTIONS(152),
    [anon_sym_IN] = ACTIONS(154),
    [anon_sym_CONTAINS] = ACTIONS(154),
    [anon_sym_2] = ACTIONS(152),
    [anon_sym_CONTAINSNOT] = ACTIONS(154),
    [anon_sym_3] = ACTIONS(152),
    [anon_sym_CONTAINSALL] = ACTIONS(154),
    [anon_sym_4] = ACTIONS(152),
    [anon_sym_CONTAINSANY] = ACTIONS(154),
    [anon_sym_5] = ACTIONS(152),
    [anon_sym_CONTAINSNONE] = ACTIONS(154),
    [anon_sym_6] = ACTIONS(152),
    [anon_sym_INSIDE] = ACTIONS(154),
    [anon_sym_7] = ACTIONS(152),
    [anon_sym_NOTINSIDE] = ACTIONS(154),
    [anon_sym_NOTIN] = ACTIONS(152),
    [anon_sym_8] = ACTIONS(152),
    [anon_sym_ALLINSIDE] = ACTIONS(154),
    [anon_sym_9] = ACTIONS(152),
    [anon_sym_ANYINSIDE] = ACTIONS(154),
    [anon_sym_10] = ACTIONS(152),
    [anon_sym_NONEINSIDE] = ACTIONS(154),
    [anon_sym_11] = ACTIONS(152),
    [anon_sym_OUTSIDE] = ACTIONS(154),
    [anon_sym_INTERSECTS] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(152),
    [anon_sym_SEMI] = ACTIONS(152),
    [anon_sym_COLON] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_RPAREN] = ACTIONS(152),
    [anon_sym_LBRACK] = ACTIONS(152),
    [anon_sym_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_RBRACE] = ACTIONS(152),
    [anon_sym_DASH_GT] = ACTIONS(152),
    [anon_sym_LT_DASH] = ACTIONS(152),
    [anon_sym_any] = ACTIONS(154),
    [anon_sym_array] = ACTIONS(154),
    [anon_sym_bool] = ACTIONS(154),
    [anon_sym_datetime] = ACTIONS(154),
    [anon_sym_decimal] = ACTIONS(154),
    [anon_sym_duration] = ACTIONS(154),
    [anon_sym_float] = ACTIONS(154),
    [anon_sym_int] = ACTIONS(154),
    [anon_sym_number] = ACTIONS(154),
    [anon_sym_object] = ACTIONS(154),
    [anon_sym_string] = ACTIONS(154),
    [anon_sym_record] = ACTIONS(154),
    [anon_sym_geometry] = ACTIONS(154),
    [anon_sym_EDDSA] = ACTIONS(154),
    [anon_sym_ES256] = ACTIONS(154),
    [anon_sym_ES384] = ACTIONS(154),
    [anon_sym_ES512] = ACTIONS(154),
    [anon_sym_HS256] = ACTIONS(154),
    [anon_sym_HS384] = ACTIONS(154),
    [anon_sym_HS512] = ACTIONS(154),
    [anon_sym_PS256] = ACTIONS(154),
    [anon_sym_PS384] = ACTIONS(154),
    [anon_sym_PS512] = ACTIONS(154),
    [anon_sym_RS256] = ACTIONS(154),
    [anon_sym_RS384] = ACTIONS(154),
    [anon_sym_RS512] = ACTIONS(154),
    [aux_sym_function_token1] = ACTIONS(152),
    [aux_sym_function_token2] = ACTIONS(152),
    [anon_sym_count] = ACTIONS(154),
    [aux_sym_function_token3] = ACTIONS(152),
    [aux_sym_function_token4] = ACTIONS(152),
    [aux_sym_function_token5] = ACTIONS(152),
    [aux_sym_function_token6] = ACTIONS(152),
    [aux_sym_function_token7] = ACTIONS(152),
    [aux_sym_function_token8] = ACTIONS(152),
    [aux_sym_function_token9] = ACTIONS(152),
    [aux_sym_function_token10] = ACTIONS(154),
    [aux_sym_function_token11] = ACTIONS(152),
    [aux_sym_function_token12] = ACTIONS(154),
    [aux_sym_function_token13] = ACTIONS(152),
    [aux_sym_function_token14] = ACTIONS(152),
    [aux_sym_function_token15] = ACTIONS(152),
    [aux_sym_function_token16] = ACTIONS(154),
    [anon_sym_true] = ACTIONS(154),
    [anon_sym_false] = ACTIONS(154),
    [anon_sym_TRUE] = ACTIONS(154),
    [anon_sym_FALSE] = ACTIONS(154),
    [anon_sym_null] = ACTIONS(154),
    [anon_sym_NULL] = ACTIONS(154),
    [anon_sym_none] = ACTIONS(154),
    [anon_sym_NONE] = ACTIONS(154),
    [sym_variable] = ACTIONS(152),
    [sym_comment] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_DQUOTE] = ACTIONS(152),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(156),
    [aux_sym_future_token1] = ACTIONS(156),
    [aux_sym_casting_token1] = ACTIONS(156),
    [aux_sym_property_token1] = ACTIONS(158),
    [aux_sym_identifier_token1] = ACTIONS(158),
    [aux_sym_constant_token1] = ACTIONS(156),
    [aux_sym_number_token1] = ACTIONS(158),
    [aux_sym_record_token1] = ACTIONS(156),
    [aux_sym_record_token2] = ACTIONS(156),
    [anon_sym_USE] = ACTIONS(158),
    [anon_sym_NS] = ACTIONS(158),
    [anon_sym_DB] = ACTIONS(158),
    [anon_sym_LET] = ACTIONS(158),
    [anon_sym_BEGIN] = ACTIONS(158),
    [anon_sym_TRANSACTION] = ACTIONS(158),
    [anon_sym_CANCEL] = ACTIONS(158),
    [anon_sym_COMMIT] = ACTIONS(158),
    [anon_sym_IF] = ACTIONS(158),
    [anon_sym_ELSE] = ACTIONS(158),
    [anon_sym_THEN] = ACTIONS(158),
    [anon_sym_END] = ACTIONS(158),
    [anon_sym_SELECT] = ACTIONS(158),
    [anon_sym_FROM] = ACTIONS(158),
    [anon_sym_WHERE] = ACTIONS(158),
    [anon_sym_SPLIT] = ACTIONS(158),
    [anon_sym_AT] = ACTIONS(158),
    [anon_sym_GROUP] = ACTIONS(158),
    [anon_sym_BY] = ACTIONS(158),
    [anon_sym_ORDER] = ACTIONS(158),
    [anon_sym_COLLATE] = ACTIONS(158),
    [anon_sym_NUMERIC] = ACTIONS(158),
    [anon_sym_ASC] = ACTIONS(158),
    [anon_sym_DESC] = ACTIONS(158),
    [anon_sym_LIMIT] = ACTIONS(158),
    [anon_sym_START] = ACTIONS(158),
    [anon_sym_FETCH] = ACTIONS(158),
    [anon_sym_TIMEOUT] = ACTIONS(158),
    [anon_sym_PARALLEL] = ACTIONS(158),
    [anon_sym_INSERT] = ACTIONS(158),
    [anon_sym_IGNORE] = ACTIONS(158),
    [anon_sym_INTO] = ACTIONS(158),
    [anon_sym_VALUES] = ACTIONS(158),
    [anon_sym_ON] = ACTIONS(158),
    [anon_sym_DUPLICATE] = ACTIONS(158),
    [anon_sym_KEY] = ACTIONS(158),
    [anon_sym_UPDATE] = ACTIONS(158),
    [anon_sym_CREATE] = ACTIONS(158),
    [anon_sym_CONTENT] = ACTIONS(158),
    [anon_sym_SET] = ACTIONS(158),
    [anon_sym_RETURN] = ACTIONS(158),
    [anon_sym_BEFORE] = ACTIONS(158),
    [anon_sym_AFTER] = ACTIONS(158),
    [anon_sym_DIFF] = ACTIONS(158),
    [anon_sym_MERGE] = ACTIONS(158),
    [anon_sym_PATCH] = ACTIONS(158),
    [anon_sym_RELATE] = ACTIONS(158),
    [anon_sym_DELETE] = ACTIONS(158),
    [anon_sym_DEFINE] = ACTIONS(158),
    [anon_sym_NAMESPACE] = ACTIONS(158),
    [anon_sym_DATABASE] = ACTIONS(158),
    [anon_sym_LOGIN] = ACTIONS(158),
    [anon_sym_PASSWORD] = ACTIONS(158),
    [anon_sym_PASSHASH] = ACTIONS(158),
    [anon_sym_TOKEN] = ACTIONS(158),
    [anon_sym_SCOPE] = ACTIONS(158),
    [anon_sym_TYPE] = ACTIONS(158),
    [anon_sym_VALUE] = ACTIONS(158),
    [anon_sym_SESSION] = ACTIONS(158),
    [anon_sym_SIGNUP] = ACTIONS(158),
    [anon_sym_SIGNIN] = ACTIONS(158),
    [anon_sym_TABLE] = ACTIONS(158),
    [anon_sym_DROP] = ACTIONS(158),
    [anon_sym_SCHEMAFULL] = ACTIONS(158),
    [anon_sym_SCHEMALESS] = ACTIONS(158),
    [anon_sym_AS] = ACTIONS(158),
    [anon_sym_PERMISSIONS] = ACTIONS(158),
    [anon_sym_FULL] = ACTIONS(158),
    [anon_sym_FOR] = ACTIONS(158),
    [anon_sym_select] = ACTIONS(158),
    [anon_sym_update] = ACTIONS(158),
    [anon_sym_create] = ACTIONS(158),
    [anon_sym_delete] = ACTIONS(158),
    [anon_sym_EVENT] = ACTIONS(158),
    [anon_sym_WHEN] = ACTIONS(158),
    [anon_sym_ASSERT] = ACTIONS(158),
    [anon_sym_INDEX] = ACTIONS(158),
    [anon_sym_FIELDS] = ACTIONS(158),
    [anon_sym_COLUMNS] = ACTIONS(158),
    [anon_sym_UNIQUE] = ACTIONS(158),
    [anon_sym_REMOVE] = ACTIONS(158),
    [anon_sym_SLEEP] = ACTIONS(158),
    [anon_sym_INFO] = ACTIONS(158),
    [anon_sym_KV] = ACTIONS(158),
    [anon_sym_FUNCTION] = ACTIONS(158),
    [anon_sym_PARAM] = ACTIONS(158),
    [anon_sym_AMP_AMP] = ACTIONS(156),
    [anon_sym_AND] = ACTIONS(158),
    [anon_sym_PIPE_PIPE] = ACTIONS(156),
    [anon_sym_OR] = ACTIONS(158),
    [anon_sym_QMARK_QMARK] = ACTIONS(156),
    [anon_sym_QMARK_COLON] = ACTIONS(156),
    [anon_sym_EQ] = ACTIONS(158),
    [anon_sym_IS] = ACTIONS(158),
    [anon_sym_BANG_EQ] = ACTIONS(156),
    [anon_sym_ISNOT] = ACTIONS(156),
    [anon_sym_EQ_EQ] = ACTIONS(156),
    [anon_sym_QMARK_EQ] = ACTIONS(156),
    [anon_sym_STAR_EQ] = ACTIONS(156),
    [anon_sym_TILDE] = ACTIONS(156),
    [anon_sym_BANG_TILDE] = ACTIONS(156),
    [anon_sym_QMARK_TILDE] = ACTIONS(156),
    [anon_sym_STAR_TILDE] = ACTIONS(156),
    [anon_sym_LT] = ACTIONS(158),
    [anon_sym_LT_EQ] = ACTIONS(156),
    [anon_sym_GT] = ACTIONS(158),
    [anon_sym_GT_EQ] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(156),
    [anon_sym_DASH] = ACTIONS(158),
    [anon_sym_STAR] = ACTIONS(158),
    [anon_sym_x] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_] = ACTIONS(156),
    [anon_sym_STAR_STAR] = ACTIONS(156),
    [anon_sym_IN] = ACTIONS(158),
    [anon_sym_CONTAINS] = ACTIONS(158),
    [anon_sym_2] = ACTIONS(156),
    [anon_sym_CONTAINSNOT] = ACTIONS(158),
    [anon_sym_3] = ACTIONS(156),
    [anon_sym_CONTAINSALL] = ACTIONS(158),
    [anon_sym_4] = ACTIONS(156),
    [anon_sym_CONTAINSANY] = ACTIONS(158),
    [anon_sym_5] = ACTIONS(156),
    [anon_sym_CONTAINSNONE] = ACTIONS(158),
    [anon_sym_6] = ACTIONS(156),
    [anon_sym_INSIDE] = ACTIONS(158),
    [anon_sym_7] = ACTIONS(156),
    [anon_sym_NOTINSIDE] = ACTIONS(158),
    [anon_sym_NOTIN] = ACTIONS(156),
    [anon_sym_8] = ACTIONS(156),
    [anon_sym_ALLINSIDE] = ACTIONS(158),
    [anon_sym_9] = ACTIONS(156),
    [anon_sym_ANYINSIDE] = ACTIONS(158),
    [anon_sym_10] = ACTIONS(156),
    [anon_sym_NONEINSIDE] = ACTIONS(158),
    [anon_sym_11] = ACTIONS(156),
    [anon_sym_OUTSIDE] = ACTIONS(158),
    [anon_sym_INTERSECTS] = ACTIONS(158),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_SEMI] = ACTIONS(156),
    [anon_sym_COLON] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(156),
    [anon_sym_RPAREN] = ACTIONS(156),
    [anon_sym_LBRACK] = ACTIONS(156),
    [anon_sym_RBRACK] = ACTIONS(156),
    [anon_sym_LBRACE] = ACTIONS(156),
    [anon_sym_RBRACE] = ACTIONS(156),
    [anon_sym_DASH_GT] = ACTIONS(156),
    [anon_sym_LT_DASH] = ACTIONS(156),
    [anon_sym_any] = ACTIONS(158),
    [anon_sym_array] = ACTIONS(158),
    [anon_sym_bool] = ACTIONS(158),
    [anon_sym_datetime] = ACTIONS(158),
    [anon_sym_decimal] = ACTIONS(158),
    [anon_sym_duration] = ACTIONS(158),
    [anon_sym_float] = ACTIONS(158),
    [anon_sym_int] = ACTIONS(158),
    [anon_sym_number] = ACTIONS(158),
    [anon_sym_object] = ACTIONS(158),
    [anon_sym_string] = ACTIONS(158),
    [anon_sym_record] = ACTIONS(158),
    [anon_sym_geometry] = ACTIONS(158),
    [anon_sym_EDDSA] = ACTIONS(158),
    [anon_sym_ES256] = ACTIONS(158),
    [anon_sym_ES384] = ACTIONS(158),
    [anon_sym_ES512] = ACTIONS(158),
    [anon_sym_HS256] = ACTIONS(158),
    [anon_sym_HS384] = ACTIONS(158),
    [anon_sym_HS512] = ACTIONS(158),
    [anon_sym_PS256] = ACTIONS(158),
    [anon_sym_PS384] = ACTIONS(158),
    [anon_sym_PS512] = ACTIONS(158),
    [anon_sym_RS256] = ACTIONS(158),
    [anon_sym_RS384] = ACTIONS(158),
    [anon_sym_RS512] = ACTIONS(158),
    [aux_sym_function_token1] = ACTIONS(156),
    [aux_sym_function_token2] = ACTIONS(156),
    [anon_sym_count] = ACTIONS(158),
    [aux_sym_function_token3] = ACTIONS(156),
    [aux_sym_function_token4] = ACTIONS(156),
    [aux_sym_function_token5] = ACTIONS(156),
    [aux_sym_function_token6] = ACTIONS(156),
    [aux_sym_function_token7] = ACTIONS(156),
    [aux_sym_function_token8] = ACTIONS(156),
    [aux_sym_function_token9] = ACTIONS(156),
    [aux_sym_function_token10] = ACTIONS(158),
    [aux_sym_function_token11] = ACTIONS(156),
    [aux_sym_function_token12] = ACTIONS(158),
    [aux_sym_function_token13] = ACTIONS(156),
    [aux_sym_function_token14] = ACTIONS(156),
    [aux_sym_function_token15] = ACTIONS(156),
    [aux_sym_function_token16] = ACTIONS(158),
    [anon_sym_true] = ACTIONS(158),
    [anon_sym_false] = ACTIONS(158),
    [anon_sym_TRUE] = ACTIONS(158),
    [anon_sym_FALSE] = ACTIONS(158),
    [anon_sym_null] = ACTIONS(158),
    [anon_sym_NULL] = ACTIONS(158),
    [anon_sym_none] = ACTIONS(158),
    [anon_sym_NONE] = ACTIONS(158),
    [sym_variable] = ACTIONS(156),
    [sym_comment] = ACTIONS(156),
    [anon_sym_SQUOTE] = ACTIONS(156),
    [anon_sym_DQUOTE] = ACTIONS(156),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [aux_sym_future_token1] = ACTIONS(160),
    [aux_sym_casting_token1] = ACTIONS(160),
    [aux_sym_property_token1] = ACTIONS(162),
    [aux_sym_identifier_token1] = ACTIONS(162),
    [aux_sym_constant_token1] = ACTIONS(160),
    [aux_sym_number_token1] = ACTIONS(162),
    [aux_sym_record_token1] = ACTIONS(160),
    [aux_sym_record_token2] = ACTIONS(160),
    [anon_sym_USE] = ACTIONS(162),
    [anon_sym_NS] = ACTIONS(162),
    [anon_sym_DB] = ACTIONS(162),
    [anon_sym_LET] = ACTIONS(162),
    [anon_sym_BEGIN] = ACTIONS(162),
    [anon_sym_TRANSACTION] = ACTIONS(162),
    [anon_sym_CANCEL] = ACTIONS(162),
    [anon_sym_COMMIT] = ACTIONS(162),
    [anon_sym_IF] = ACTIONS(162),
    [anon_sym_ELSE] = ACTIONS(162),
    [anon_sym_THEN] = ACTIONS(162),
    [anon_sym_END] = ACTIONS(162),
    [anon_sym_SELECT] = ACTIONS(162),
    [anon_sym_FROM] = ACTIONS(162),
    [anon_sym_WHERE] = ACTIONS(162),
    [anon_sym_SPLIT] = ACTIONS(162),
    [anon_sym_AT] = ACTIONS(162),
    [anon_sym_GROUP] = ACTIONS(162),
    [anon_sym_BY] = ACTIONS(162),
    [anon_sym_ORDER] = ACTIONS(162),
    [anon_sym_COLLATE] = ACTIONS(162),
    [anon_sym_NUMERIC] = ACTIONS(162),
    [anon_sym_ASC] = ACTIONS(162),
    [anon_sym_DESC] = ACTIONS(162),
    [anon_sym_LIMIT] = ACTIONS(162),
    [anon_sym_START] = ACTIONS(162),
    [anon_sym_FETCH] = ACTIONS(162),
    [anon_sym_TIMEOUT] = ACTIONS(162),
    [anon_sym_PARALLEL] = ACTIONS(162),
    [anon_sym_INSERT] = ACTIONS(162),
    [anon_sym_IGNORE] = ACTIONS(162),
    [anon_sym_INTO] = ACTIONS(162),
    [anon_sym_VALUES] = ACTIONS(162),
    [anon_sym_ON] = ACTIONS(162),
    [anon_sym_DUPLICATE] = ACTIONS(162),
    [anon_sym_KEY] = ACTIONS(162),
    [anon_sym_UPDATE] = ACTIONS(162),
    [anon_sym_CREATE] = ACTIONS(162),
    [anon_sym_CONTENT] = ACTIONS(162),
    [anon_sym_SET] = ACTIONS(162),
    [anon_sym_RETURN] = ACTIONS(162),
    [anon_sym_BEFORE] = ACTIONS(162),
    [anon_sym_AFTER] = ACTIONS(162),
    [anon_sym_DIFF] = ACTIONS(162),
    [anon_sym_MERGE] = ACTIONS(162),
    [anon_sym_PATCH] = ACTIONS(162),
    [anon_sym_RELATE] = ACTIONS(162),
    [anon_sym_DELETE] = ACTIONS(162),
    [anon_sym_DEFINE] = ACTIONS(162),
    [anon_sym_NAMESPACE] = ACTIONS(162),
    [anon_sym_DATABASE] = ACTIONS(162),
    [anon_sym_LOGIN] = ACTIONS(162),
    [anon_sym_PASSWORD] = ACTIONS(162),
    [anon_sym_PASSHASH] = ACTIONS(162),
    [anon_sym_TOKEN] = ACTIONS(162),
    [anon_sym_SCOPE] = ACTIONS(162),
    [anon_sym_TYPE] = ACTIONS(162),
    [anon_sym_VALUE] = ACTIONS(162),
    [anon_sym_SESSION] = ACTIONS(162),
    [anon_sym_SIGNUP] = ACTIONS(162),
    [anon_sym_SIGNIN] = ACTIONS(162),
    [anon_sym_TABLE] = ACTIONS(162),
    [anon_sym_DROP] = ACTIONS(162),
    [anon_sym_SCHEMAFULL] = ACTIONS(162),
    [anon_sym_SCHEMALESS] = ACTIONS(162),
    [anon_sym_AS] = ACTIONS(162),
    [anon_sym_PERMISSIONS] = ACTIONS(162),
    [anon_sym_FULL] = ACTIONS(162),
    [anon_sym_FOR] = ACTIONS(162),
    [anon_sym_select] = ACTIONS(162),
    [anon_sym_update] = ACTIONS(162),
    [anon_sym_create] = ACTIONS(162),
    [anon_sym_delete] = ACTIONS(162),
    [anon_sym_EVENT] = ACTIONS(162),
    [anon_sym_WHEN] = ACTIONS(162),
    [anon_sym_ASSERT] = ACTIONS(162),
    [anon_sym_INDEX] = ACTIONS(162),
    [anon_sym_FIELDS] = ACTIONS(162),
    [anon_sym_COLUMNS] = ACTIONS(162),
    [anon_sym_UNIQUE] = ACTIONS(162),
    [anon_sym_REMOVE] = ACTIONS(162),
    [anon_sym_SLEEP] = ACTIONS(162),
    [anon_sym_INFO] = ACTIONS(162),
    [anon_sym_KV] = ACTIONS(162),
    [anon_sym_FUNCTION] = ACTIONS(162),
    [anon_sym_PARAM] = ACTIONS(162),
    [anon_sym_AMP_AMP] = ACTIONS(160),
    [anon_sym_AND] = ACTIONS(162),
    [anon_sym_PIPE_PIPE] = ACTIONS(160),
    [anon_sym_OR] = ACTIONS(162),
    [anon_sym_QMARK_QMARK] = ACTIONS(160),
    [anon_sym_QMARK_COLON] = ACTIONS(160),
    [anon_sym_EQ] = ACTIONS(162),
    [anon_sym_IS] = ACTIONS(162),
    [anon_sym_BANG_EQ] = ACTIONS(160),
    [anon_sym_ISNOT] = ACTIONS(160),
    [anon_sym_EQ_EQ] = ACTIONS(160),
    [anon_sym_QMARK_EQ] = ACTIONS(160),
    [anon_sym_STAR_EQ] = ACTIONS(160),
    [anon_sym_TILDE] = ACTIONS(160),
    [anon_sym_BANG_TILDE] = ACTIONS(160),
    [anon_sym_QMARK_TILDE] = ACTIONS(160),
    [anon_sym_STAR_TILDE] = ACTIONS(160),
    [anon_sym_LT] = ACTIONS(162),
    [anon_sym_LT_EQ] = ACTIONS(160),
    [anon_sym_GT] = ACTIONS(162),
    [anon_sym_GT_EQ] = ACTIONS(160),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym_STAR] = ACTIONS(162),
    [anon_sym_x] = ACTIONS(162),
    [anon_sym_SLASH] = ACTIONS(162),
    [anon_sym_] = ACTIONS(160),
    [anon_sym_STAR_STAR] = ACTIONS(160),
    [anon_sym_IN] = ACTIONS(162),
    [anon_sym_CONTAINS] = ACTIONS(162),
    [anon_sym_2] = ACTIONS(160),
    [anon_sym_CONTAINSNOT] = ACTIONS(162),
    [anon_sym_3] = ACTIONS(160),
    [anon_sym_CONTAINSALL] = ACTIONS(162),
    [anon_sym_4] = ACTIONS(160),
    [anon_sym_CONTAINSANY] = ACTIONS(162),
    [anon_sym_5] = ACTIONS(160),
    [anon_sym_CONTAINSNONE] = ACTIONS(162),
    [anon_sym_6] = ACTIONS(160),
    [anon_sym_INSIDE] = ACTIONS(162),
    [anon_sym_7] = ACTIONS(160),
    [anon_sym_NOTINSIDE] = ACTIONS(162),
    [anon_sym_NOTIN] = ACTIONS(160),
    [anon_sym_8] = ACTIONS(160),
    [anon_sym_ALLINSIDE] = ACTIONS(162),
    [anon_sym_9] = ACTIONS(160),
    [anon_sym_ANYINSIDE] = ACTIONS(162),
    [anon_sym_10] = ACTIONS(160),
    [anon_sym_NONEINSIDE] = ACTIONS(162),
    [anon_sym_11] = ACTIONS(160),
    [anon_sym_OUTSIDE] = ACTIONS(162),
    [anon_sym_INTERSECTS] = ACTIONS(162),
    [anon_sym_COMMA] = ACTIONS(160),
    [anon_sym_SEMI] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(160),
    [anon_sym_LPAREN] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_RBRACK] = ACTIONS(160),
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_RBRACE] = ACTIONS(160),
    [anon_sym_DASH_GT] = ACTIONS(160),
    [anon_sym_LT_DASH] = ACTIONS(160),
    [anon_sym_any] = ACTIONS(162),
    [anon_sym_array] = ACTIONS(162),
    [anon_sym_bool] = ACTIONS(162),
    [anon_sym_datetime] = ACTIONS(162),
    [anon_sym_decimal] = ACTIONS(162),
    [anon_sym_duration] = ACTIONS(162),
    [anon_sym_float] = ACTIONS(162),
    [anon_sym_int] = ACTIONS(162),
    [anon_sym_number] = ACTIONS(162),
    [anon_sym_object] = ACTIONS(162),
    [anon_sym_string] = ACTIONS(162),
    [anon_sym_record] = ACTIONS(162),
    [anon_sym_geometry] = ACTIONS(162),
    [anon_sym_EDDSA] = ACTIONS(162),
    [anon_sym_ES256] = ACTIONS(162),
    [anon_sym_ES384] = ACTIONS(162),
    [anon_sym_ES512] = ACTIONS(162),
    [anon_sym_HS256] = ACTIONS(162),
    [anon_sym_HS384] = ACTIONS(162),
    [anon_sym_HS512] = ACTIONS(162),
    [anon_sym_PS256] = ACTIONS(162),
    [anon_sym_PS384] = ACTIONS(162),
    [anon_sym_PS512] = ACTIONS(162),
    [anon_sym_RS256] = ACTIONS(162),
    [anon_sym_RS384] = ACTIONS(162),
    [anon_sym_RS512] = ACTIONS(162),
    [aux_sym_function_token1] = ACTIONS(160),
    [aux_sym_function_token2] = ACTIONS(160),
    [anon_sym_count] = ACTIONS(162),
    [aux_sym_function_token3] = ACTIONS(160),
    [aux_sym_function_token4] = ACTIONS(160),
    [aux_sym_function_token5] = ACTIONS(160),
    [aux_sym_function_token6] = ACTIONS(160),
    [aux_sym_function_token7] = ACTIONS(160),
    [aux_sym_function_token8] = ACTIONS(160),
    [aux_sym_function_token9] = ACTIONS(160),
    [aux_sym_function_token10] = ACTIONS(162),
    [aux_sym_function_token11] = ACTIONS(160),
    [aux_sym_function_token12] = ACTIONS(162),
    [aux_sym_function_token13] = ACTIONS(160),
    [aux_sym_function_token14] = ACTIONS(160),
    [aux_sym_function_token15] = ACTIONS(160),
    [aux_sym_function_token16] = ACTIONS(162),
    [anon_sym_true] = ACTIONS(162),
    [anon_sym_false] = ACTIONS(162),
    [anon_sym_TRUE] = ACTIONS(162),
    [anon_sym_FALSE] = ACTIONS(162),
    [anon_sym_null] = ACTIONS(162),
    [anon_sym_NULL] = ACTIONS(162),
    [anon_sym_none] = ACTIONS(162),
    [anon_sym_NONE] = ACTIONS(162),
    [sym_variable] = ACTIONS(160),
    [sym_comment] = ACTIONS(160),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_DQUOTE] = ACTIONS(160),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(164),
    [aux_sym_future_token1] = ACTIONS(164),
    [aux_sym_casting_token1] = ACTIONS(164),
    [aux_sym_property_token1] = ACTIONS(166),
    [aux_sym_identifier_token1] = ACTIONS(166),
    [aux_sym_constant_token1] = ACTIONS(164),
    [aux_sym_number_token1] = ACTIONS(166),
    [aux_sym_record_token1] = ACTIONS(164),
    [aux_sym_record_token2] = ACTIONS(164),
    [anon_sym_USE] = ACTIONS(166),
    [anon_sym_NS] = ACTIONS(166),
    [anon_sym_DB] = ACTIONS(166),
    [anon_sym_LET] = ACTIONS(166),
    [anon_sym_BEGIN] = ACTIONS(166),
    [anon_sym_TRANSACTION] = ACTIONS(166),
    [anon_sym_CANCEL] = ACTIONS(166),
    [anon_sym_COMMIT] = ACTIONS(166),
    [anon_sym_IF] = ACTIONS(166),
    [anon_sym_ELSE] = ACTIONS(166),
    [anon_sym_THEN] = ACTIONS(166),
    [anon_sym_END] = ACTIONS(166),
    [anon_sym_SELECT] = ACTIONS(166),
    [anon_sym_FROM] = ACTIONS(166),
    [anon_sym_WHERE] = ACTIONS(166),
    [anon_sym_SPLIT] = ACTIONS(166),
    [anon_sym_AT] = ACTIONS(166),
    [anon_sym_GROUP] = ACTIONS(166),
    [anon_sym_BY] = ACTIONS(166),
    [anon_sym_ORDER] = ACTIONS(166),
    [anon_sym_COLLATE] = ACTIONS(166),
    [anon_sym_NUMERIC] = ACTIONS(166),
    [anon_sym_ASC] = ACTIONS(166),
    [anon_sym_DESC] = ACTIONS(166),
    [anon_sym_LIMIT] = ACTIONS(166),
    [anon_sym_START] = ACTIONS(166),
    [anon_sym_FETCH] = ACTIONS(166),
    [anon_sym_TIMEOUT] = ACTIONS(166),
    [anon_sym_PARALLEL] = ACTIONS(166),
    [anon_sym_INSERT] = ACTIONS(166),
    [anon_sym_IGNORE] = ACTIONS(166),
    [anon_sym_INTO] = ACTIONS(166),
    [anon_sym_VALUES] = ACTIONS(166),
    [anon_sym_ON] = ACTIONS(166),
    [anon_sym_DUPLICATE] = ACTIONS(166),
    [anon_sym_KEY] = ACTIONS(166),
    [anon_sym_UPDATE] = ACTIONS(166),
    [anon_sym_CREATE] = ACTIONS(166),
    [anon_sym_CONTENT] = ACTIONS(166),
    [anon_sym_SET] = ACTIONS(166),
    [anon_sym_RETURN] = ACTIONS(166),
    [anon_sym_BEFORE] = ACTIONS(166),
    [anon_sym_AFTER] = ACTIONS(166),
    [anon_sym_DIFF] = ACTIONS(166),
    [anon_sym_MERGE] = ACTIONS(166),
    [anon_sym_PATCH] = ACTIONS(166),
    [anon_sym_RELATE] = ACTIONS(166),
    [anon_sym_DELETE] = ACTIONS(166),
    [anon_sym_DEFINE] = ACTIONS(166),
    [anon_sym_NAMESPACE] = ACTIONS(166),
    [anon_sym_DATABASE] = ACTIONS(166),
    [anon_sym_LOGIN] = ACTIONS(166),
    [anon_sym_PASSWORD] = ACTIONS(166),
    [anon_sym_PASSHASH] = ACTIONS(166),
    [anon_sym_TOKEN] = ACTIONS(166),
    [anon_sym_SCOPE] = ACTIONS(166),
    [anon_sym_TYPE] = ACTIONS(166),
    [anon_sym_VALUE] = ACTIONS(166),
    [anon_sym_SESSION] = ACTIONS(166),
    [anon_sym_SIGNUP] = ACTIONS(166),
    [anon_sym_SIGNIN] = ACTIONS(166),
    [anon_sym_TABLE] = ACTIONS(166),
    [anon_sym_DROP] = ACTIONS(166),
    [anon_sym_SCHEMAFULL] = ACTIONS(166),
    [anon_sym_SCHEMALESS] = ACTIONS(166),
    [anon_sym_AS] = ACTIONS(166),
    [anon_sym_PERMISSIONS] = ACTIONS(166),
    [anon_sym_FULL] = ACTIONS(166),
    [anon_sym_FOR] = ACTIONS(166),
    [anon_sym_select] = ACTIONS(166),
    [anon_sym_update] = ACTIONS(166),
    [anon_sym_create] = ACTIONS(166),
    [anon_sym_delete] = ACTIONS(166),
    [anon_sym_EVENT] = ACTIONS(166),
    [anon_sym_WHEN] = ACTIONS(166),
    [anon_sym_ASSERT] = ACTIONS(166),
    [anon_sym_INDEX] = ACTIONS(166),
    [anon_sym_FIELDS] = ACTIONS(166),
    [anon_sym_COLUMNS] = ACTIONS(166),
    [anon_sym_UNIQUE] = ACTIONS(166),
    [anon_sym_REMOVE] = ACTIONS(166),
    [anon_sym_SLEEP] = ACTIONS(166),
    [anon_sym_INFO] = ACTIONS(166),
    [anon_sym_KV] = ACTIONS(166),
    [anon_sym_FUNCTION] = ACTIONS(166),
    [anon_sym_PARAM] = ACTIONS(166),
    [anon_sym_AMP_AMP] = ACTIONS(164),
    [anon_sym_AND] = ACTIONS(166),
    [anon_sym_PIPE_PIPE] = ACTIONS(164),
    [anon_sym_OR] = ACTIONS(166),
    [anon_sym_QMARK_QMARK] = ACTIONS(164),
    [anon_sym_QMARK_COLON] = ACTIONS(164),
    [anon_sym_EQ] = ACTIONS(166),
    [anon_sym_IS] = ACTIONS(166),
    [anon_sym_BANG_EQ] = ACTIONS(164),
    [anon_sym_ISNOT] = ACTIONS(164),
    [anon_sym_EQ_EQ] = ACTIONS(164),
    [anon_sym_QMARK_EQ] = ACTIONS(164),
    [anon_sym_STAR_EQ] = ACTIONS(164),
    [anon_sym_TILDE] = ACTIONS(164),
    [anon_sym_BANG_TILDE] = ACTIONS(164),
    [anon_sym_QMARK_TILDE] = ACTIONS(164),
    [anon_sym_STAR_TILDE] = ACTIONS(164),
    [anon_sym_LT] = ACTIONS(166),
    [anon_sym_LT_EQ] = ACTIONS(164),
    [anon_sym_GT] = ACTIONS(166),
    [anon_sym_GT_EQ] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_STAR] = ACTIONS(166),
    [anon_sym_x] = ACTIONS(166),
    [anon_sym_SLASH] = ACTIONS(166),
    [anon_sym_] = ACTIONS(164),
    [anon_sym_STAR_STAR] = ACTIONS(164),
    [anon_sym_IN] = ACTIONS(166),
    [anon_sym_CONTAINS] = ACTIONS(166),
    [anon_sym_2] = ACTIONS(164),
    [anon_sym_CONTAINSNOT] = ACTIONS(166),
    [anon_sym_3] = ACTIONS(164),
    [anon_sym_CONTAINSALL] = ACTIONS(166),
    [anon_sym_4] = ACTIONS(164),
    [anon_sym_CONTAINSANY] = ACTIONS(166),
    [anon_sym_5] = ACTIONS(164),
    [anon_sym_CONTAINSNONE] = ACTIONS(166),
    [anon_sym_6] = ACTIONS(164),
    [anon_sym_INSIDE] = ACTIONS(166),
    [anon_sym_7] = ACTIONS(164),
    [anon_sym_NOTINSIDE] = ACTIONS(166),
    [anon_sym_NOTIN] = ACTIONS(164),
    [anon_sym_8] = ACTIONS(164),
    [anon_sym_ALLINSIDE] = ACTIONS(166),
    [anon_sym_9] = ACTIONS(164),
    [anon_sym_ANYINSIDE] = ACTIONS(166),
    [anon_sym_10] = ACTIONS(164),
    [anon_sym_NONEINSIDE] = ACTIONS(166),
    [anon_sym_11] = ACTIONS(164),
    [anon_sym_OUTSIDE] = ACTIONS(166),
    [anon_sym_INTERSECTS] = ACTIONS(166),
    [anon_sym_COMMA] = ACTIONS(164),
    [anon_sym_SEMI] = ACTIONS(164),
    [anon_sym_COLON] = ACTIONS(164),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_LBRACK] = ACTIONS(164),
    [anon_sym_RBRACK] = ACTIONS(164),
    [anon_sym_LBRACE] = ACTIONS(164),
    [anon_sym_RBRACE] = ACTIONS(164),
    [anon_sym_DASH_GT] = ACTIONS(164),
    [anon_sym_LT_DASH] = ACTIONS(164),
    [anon_sym_any] = ACTIONS(166),
    [anon_sym_array] = ACTIONS(166),
    [anon_sym_bool] = ACTIONS(166),
    [anon_sym_datetime] = ACTIONS(166),
    [anon_sym_decimal] = ACTIONS(166),
    [anon_sym_duration] = ACTIONS(166),
    [anon_sym_float] = ACTIONS(166),
    [anon_sym_int] = ACTIONS(166),
    [anon_sym_number] = ACTIONS(166),
    [anon_sym_object] = ACTIONS(166),
    [anon_sym_string] = ACTIONS(166),
    [anon_sym_record] = ACTIONS(166),
    [anon_sym_geometry] = ACTIONS(166),
    [anon_sym_EDDSA] = ACTIONS(166),
    [anon_sym_ES256] = ACTIONS(166),
    [anon_sym_ES384] = ACTIONS(166),
    [anon_sym_ES512] = ACTIONS(166),
    [anon_sym_HS256] = ACTIONS(166),
    [anon_sym_HS384] = ACTIONS(166),
    [anon_sym_HS512] = ACTIONS(166),
    [anon_sym_PS256] = ACTIONS(166),
    [anon_sym_PS384] = ACTIONS(166),
    [anon_sym_PS512] = ACTIONS(166),
    [anon_sym_RS256] = ACTIONS(166),
    [anon_sym_RS384] = ACTIONS(166),
    [anon_sym_RS512] = ACTIONS(166),
    [aux_sym_function_token1] = ACTIONS(164),
    [aux_sym_function_token2] = ACTIONS(164),
    [anon_sym_count] = ACTIONS(166),
    [aux_sym_function_token3] = ACTIONS(164),
    [aux_sym_function_token4] = ACTIONS(164),
    [aux_sym_function_token5] = ACTIONS(164),
    [aux_sym_function_token6] = ACTIONS(164),
    [aux_sym_function_token7] = ACTIONS(164),
    [aux_sym_function_token8] = ACTIONS(164),
    [aux_sym_function_token9] = ACTIONS(164),
    [aux_sym_function_token10] = ACTIONS(166),
    [aux_sym_function_token11] = ACTIONS(164),
    [aux_sym_function_token12] = ACTIONS(166),
    [aux_sym_function_token13] = ACTIONS(164),
    [aux_sym_function_token14] = ACTIONS(164),
    [aux_sym_function_token15] = ACTIONS(164),
    [aux_sym_function_token16] = ACTIONS(166),
    [anon_sym_true] = ACTIONS(166),
    [anon_sym_false] = ACTIONS(166),
    [anon_sym_TRUE] = ACTIONS(166),
    [anon_sym_FALSE] = ACTIONS(166),
    [anon_sym_null] = ACTIONS(166),
    [anon_sym_NULL] = ACTIONS(166),
    [anon_sym_none] = ACTIONS(166),
    [anon_sym_NONE] = ACTIONS(166),
    [sym_variable] = ACTIONS(164),
    [sym_comment] = ACTIONS(164),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [anon_sym_DQUOTE] = ACTIONS(164),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(168),
    [aux_sym_future_token1] = ACTIONS(168),
    [aux_sym_casting_token1] = ACTIONS(168),
    [aux_sym_property_token1] = ACTIONS(170),
    [aux_sym_identifier_token1] = ACTIONS(170),
    [aux_sym_constant_token1] = ACTIONS(168),
    [aux_sym_number_token1] = ACTIONS(170),
    [aux_sym_record_token1] = ACTIONS(168),
    [aux_sym_record_token2] = ACTIONS(168),
    [anon_sym_USE] = ACTIONS(170),
    [anon_sym_NS] = ACTIONS(170),
    [anon_sym_DB] = ACTIONS(170),
    [anon_sym_LET] = ACTIONS(170),
    [anon_sym_BEGIN] = ACTIONS(170),
    [anon_sym_TRANSACTION] = ACTIONS(170),
    [anon_sym_CANCEL] = ACTIONS(170),
    [anon_sym_COMMIT] = ACTIONS(170),
    [anon_sym_IF] = ACTIONS(170),
    [anon_sym_ELSE] = ACTIONS(170),
    [anon_sym_THEN] = ACTIONS(170),
    [anon_sym_END] = ACTIONS(170),
    [anon_sym_SELECT] = ACTIONS(170),
    [anon_sym_FROM] = ACTIONS(170),
    [anon_sym_WHERE] = ACTIONS(170),
    [anon_sym_SPLIT] = ACTIONS(170),
    [anon_sym_AT] = ACTIONS(170),
    [anon_sym_GROUP] = ACTIONS(170),
    [anon_sym_BY] = ACTIONS(170),
    [anon_sym_ORDER] = ACTIONS(170),
    [anon_sym_COLLATE] = ACTIONS(170),
    [anon_sym_NUMERIC] = ACTIONS(170),
    [anon_sym_ASC] = ACTIONS(170),
    [anon_sym_DESC] = ACTIONS(170),
    [anon_sym_LIMIT] = ACTIONS(170),
    [anon_sym_START] = ACTIONS(170),
    [anon_sym_FETCH] = ACTIONS(170),
    [anon_sym_TIMEOUT] = ACTIONS(170),
    [anon_sym_PARALLEL] = ACTIONS(170),
    [anon_sym_INSERT] = ACTIONS(170),
    [anon_sym_IGNORE] = ACTIONS(170),
    [anon_sym_INTO] = ACTIONS(170),
    [anon_sym_VALUES] = ACTIONS(170),
    [anon_sym_ON] = ACTIONS(170),
    [anon_sym_DUPLICATE] = ACTIONS(170),
    [anon_sym_KEY] = ACTIONS(170),
    [anon_sym_UPDATE] = ACTIONS(170),
    [anon_sym_CREATE] = ACTIONS(170),
    [anon_sym_CONTENT] = ACTIONS(170),
    [anon_sym_SET] = ACTIONS(170),
    [anon_sym_RETURN] = ACTIONS(170),
    [anon_sym_BEFORE] = ACTIONS(170),
    [anon_sym_AFTER] = ACTIONS(170),
    [anon_sym_DIFF] = ACTIONS(170),
    [anon_sym_MERGE] = ACTIONS(170),
    [anon_sym_PATCH] = ACTIONS(170),
    [anon_sym_RELATE] = ACTIONS(170),
    [anon_sym_DELETE] = ACTIONS(170),
    [anon_sym_DEFINE] = ACTIONS(170),
    [anon_sym_NAMESPACE] = ACTIONS(170),
    [anon_sym_DATABASE] = ACTIONS(170),
    [anon_sym_LOGIN] = ACTIONS(170),
    [anon_sym_PASSWORD] = ACTIONS(170),
    [anon_sym_PASSHASH] = ACTIONS(170),
    [anon_sym_TOKEN] = ACTIONS(170),
    [anon_sym_SCOPE] = ACTIONS(170),
    [anon_sym_TYPE] = ACTIONS(170),
    [anon_sym_VALUE] = ACTIONS(170),
    [anon_sym_SESSION] = ACTIONS(170),
    [anon_sym_SIGNUP] = ACTIONS(170),
    [anon_sym_SIGNIN] = ACTIONS(170),
    [anon_sym_TABLE] = ACTIONS(170),
    [anon_sym_DROP] = ACTIONS(170),
    [anon_sym_SCHEMAFULL] = ACTIONS(170),
    [anon_sym_SCHEMALESS] = ACTIONS(170),
    [anon_sym_AS] = ACTIONS(170),
    [anon_sym_PERMISSIONS] = ACTIONS(170),
    [anon_sym_FULL] = ACTIONS(170),
    [anon_sym_FOR] = ACTIONS(170),
    [anon_sym_select] = ACTIONS(170),
    [anon_sym_update] = ACTIONS(170),
    [anon_sym_create] = ACTIONS(170),
    [anon_sym_delete] = ACTIONS(170),
    [anon_sym_EVENT] = ACTIONS(170),
    [anon_sym_WHEN] = ACTIONS(170),
    [anon_sym_ASSERT] = ACTIONS(170),
    [anon_sym_INDEX] = ACTIONS(170),
    [anon_sym_FIELDS] = ACTIONS(170),
    [anon_sym_COLUMNS] = ACTIONS(170),
    [anon_sym_UNIQUE] = ACTIONS(170),
    [anon_sym_REMOVE] = ACTIONS(170),
    [anon_sym_SLEEP] = ACTIONS(170),
    [anon_sym_INFO] = ACTIONS(170),
    [anon_sym_KV] = ACTIONS(170),
    [anon_sym_FUNCTION] = ACTIONS(170),
    [anon_sym_PARAM] = ACTIONS(170),
    [anon_sym_AMP_AMP] = ACTIONS(168),
    [anon_sym_AND] = ACTIONS(170),
    [anon_sym_PIPE_PIPE] = ACTIONS(168),
    [anon_sym_OR] = ACTIONS(170),
    [anon_sym_QMARK_QMARK] = ACTIONS(168),
    [anon_sym_QMARK_COLON] = ACTIONS(168),
    [anon_sym_EQ] = ACTIONS(170),
    [anon_sym_IS] = ACTIONS(170),
    [anon_sym_BANG_EQ] = ACTIONS(168),
    [anon_sym_ISNOT] = ACTIONS(168),
    [anon_sym_EQ_EQ] = ACTIONS(168),
    [anon_sym_QMARK_EQ] = ACTIONS(168),
    [anon_sym_STAR_EQ] = ACTIONS(168),
    [anon_sym_TILDE] = ACTIONS(168),
    [anon_sym_BANG_TILDE] = ACTIONS(168),
    [anon_sym_QMARK_TILDE] = ACTIONS(168),
    [anon_sym_STAR_TILDE] = ACTIONS(168),
    [anon_sym_LT] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(168),
    [anon_sym_GT] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(168),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_x] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_] = ACTIONS(168),
    [anon_sym_STAR_STAR] = ACTIONS(168),
    [anon_sym_IN] = ACTIONS(170),
    [anon_sym_CONTAINS] = ACTIONS(170),
    [anon_sym_2] = ACTIONS(168),
    [anon_sym_CONTAINSNOT] = ACTIONS(170),
    [anon_sym_3] = ACTIONS(168),
    [anon_sym_CONTAINSALL] = ACTIONS(170),
    [anon_sym_4] = ACTIONS(168),
    [anon_sym_CONTAINSANY] = ACTIONS(170),
    [anon_sym_5] = ACTIONS(168),
    [anon_sym_CONTAINSNONE] = ACTIONS(170),
    [anon_sym_6] = ACTIONS(168),
    [anon_sym_INSIDE] = ACTIONS(170),
    [anon_sym_7] = ACTIONS(168),
    [anon_sym_NOTINSIDE] = ACTIONS(170),
    [anon_sym_NOTIN] = ACTIONS(168),
    [anon_sym_8] = ACTIONS(168),
    [anon_sym_ALLINSIDE] = ACTIONS(170),
    [anon_sym_9] = ACTIONS(168),
    [anon_sym_ANYINSIDE] = ACTIONS(170),
    [anon_sym_10] = ACTIONS(168),
    [anon_sym_NONEINSIDE] = ACTIONS(170),
    [anon_sym_11] = ACTIONS(168),
    [anon_sym_OUTSIDE] = ACTIONS(170),
    [anon_sym_INTERSECTS] = ACTIONS(170),
    [anon_sym_COMMA] = ACTIONS(168),
    [anon_sym_SEMI] = ACTIONS(168),
    [anon_sym_COLON] = ACTIONS(168),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(168),
    [anon_sym_RBRACK] = ACTIONS(168),
    [anon_sym_LBRACE] = ACTIONS(168),
    [anon_sym_RBRACE] = ACTIONS(168),
    [anon_sym_DASH_GT] = ACTIONS(168),
    [anon_sym_LT_DASH] = ACTIONS(168),
    [anon_sym_any] = ACTIONS(170),
    [anon_sym_array] = ACTIONS(170),
    [anon_sym_bool] = ACTIONS(170),
    [anon_sym_datetime] = ACTIONS(170),
    [anon_sym_decimal] = ACTIONS(170),
    [anon_sym_duration] = ACTIONS(170),
    [anon_sym_float] = ACTIONS(170),
    [anon_sym_int] = ACTIONS(170),
    [anon_sym_number] = ACTIONS(170),
    [anon_sym_object] = ACTIONS(170),
    [anon_sym_string] = ACTIONS(170),
    [anon_sym_record] = ACTIONS(170),
    [anon_sym_geometry] = ACTIONS(170),
    [anon_sym_EDDSA] = ACTIONS(170),
    [anon_sym_ES256] = ACTIONS(170),
    [anon_sym_ES384] = ACTIONS(170),
    [anon_sym_ES512] = ACTIONS(170),
    [anon_sym_HS256] = ACTIONS(170),
    [anon_sym_HS384] = ACTIONS(170),
    [anon_sym_HS512] = ACTIONS(170),
    [anon_sym_PS256] = ACTIONS(170),
    [anon_sym_PS384] = ACTIONS(170),
    [anon_sym_PS512] = ACTIONS(170),
    [anon_sym_RS256] = ACTIONS(170),
    [anon_sym_RS384] = ACTIONS(170),
    [anon_sym_RS512] = ACTIONS(170),
    [aux_sym_function_token1] = ACTIONS(168),
    [aux_sym_function_token2] = ACTIONS(168),
    [anon_sym_count] = ACTIONS(170),
    [aux_sym_function_token3] = ACTIONS(168),
    [aux_sym_function_token4] = ACTIONS(168),
    [aux_sym_function_token5] = ACTIONS(168),
    [aux_sym_function_token6] = ACTIONS(168),
    [aux_sym_function_token7] = ACTIONS(168),
    [aux_sym_function_token8] = ACTIONS(168),
    [aux_sym_function_token9] = ACTIONS(168),
    [aux_sym_function_token10] = ACTIONS(170),
    [aux_sym_function_token11] = ACTIONS(168),
    [aux_sym_function_token12] = ACTIONS(170),
    [aux_sym_function_token13] = ACTIONS(168),
    [aux_sym_function_token14] = ACTIONS(168),
    [aux_sym_function_token15] = ACTIONS(168),
    [aux_sym_function_token16] = ACTIONS(170),
    [anon_sym_true] = ACTIONS(170),
    [anon_sym_false] = ACTIONS(170),
    [anon_sym_TRUE] = ACTIONS(170),
    [anon_sym_FALSE] = ACTIONS(170),
    [anon_sym_null] = ACTIONS(170),
    [anon_sym_NULL] = ACTIONS(170),
    [anon_sym_none] = ACTIONS(170),
    [anon_sym_NONE] = ACTIONS(170),
    [sym_variable] = ACTIONS(168),
    [sym_comment] = ACTIONS(168),
    [anon_sym_SQUOTE] = ACTIONS(168),
    [anon_sym_DQUOTE] = ACTIONS(168),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(172),
    [aux_sym_future_token1] = ACTIONS(172),
    [aux_sym_casting_token1] = ACTIONS(172),
    [aux_sym_property_token1] = ACTIONS(174),
    [aux_sym_identifier_token1] = ACTIONS(174),
    [aux_sym_constant_token1] = ACTIONS(172),
    [aux_sym_number_token1] = ACTIONS(174),
    [aux_sym_record_token1] = ACTIONS(172),
    [aux_sym_record_token2] = ACTIONS(172),
    [anon_sym_USE] = ACTIONS(174),
    [anon_sym_NS] = ACTIONS(174),
    [anon_sym_DB] = ACTIONS(174),
    [anon_sym_LET] = ACTIONS(174),
    [anon_sym_BEGIN] = ACTIONS(174),
    [anon_sym_TRANSACTION] = ACTIONS(174),
    [anon_sym_CANCEL] = ACTIONS(174),
    [anon_sym_COMMIT] = ACTIONS(174),
    [anon_sym_IF] = ACTIONS(174),
    [anon_sym_ELSE] = ACTIONS(174),
    [anon_sym_THEN] = ACTIONS(174),
    [anon_sym_END] = ACTIONS(174),
    [anon_sym_SELECT] = ACTIONS(174),
    [anon_sym_FROM] = ACTIONS(174),
    [anon_sym_WHERE] = ACTIONS(174),
    [anon_sym_SPLIT] = ACTIONS(174),
    [anon_sym_AT] = ACTIONS(174),
    [anon_sym_GROUP] = ACTIONS(174),
    [anon_sym_BY] = ACTIONS(174),
    [anon_sym_ORDER] = ACTIONS(174),
    [anon_sym_COLLATE] = ACTIONS(174),
    [anon_sym_NUMERIC] = ACTIONS(174),
    [anon_sym_ASC] = ACTIONS(174),
    [anon_sym_DESC] = ACTIONS(174),
    [anon_sym_LIMIT] = ACTIONS(174),
    [anon_sym_START] = ACTIONS(174),
    [anon_sym_FETCH] = ACTIONS(174),
    [anon_sym_TIMEOUT] = ACTIONS(174),
    [anon_sym_PARALLEL] = ACTIONS(174),
    [anon_sym_INSERT] = ACTIONS(174),
    [anon_sym_IGNORE] = ACTIONS(174),
    [anon_sym_INTO] = ACTIONS(174),
    [anon_sym_VALUES] = ACTIONS(174),
    [anon_sym_ON] = ACTIONS(174),
    [anon_sym_DUPLICATE] = ACTIONS(174),
    [anon_sym_KEY] = ACTIONS(174),
    [anon_sym_UPDATE] = ACTIONS(174),
    [anon_sym_CREATE] = ACTIONS(174),
    [anon_sym_CONTENT] = ACTIONS(174),
    [anon_sym_SET] = ACTIONS(174),
    [anon_sym_RETURN] = ACTIONS(174),
    [anon_sym_BEFORE] = ACTIONS(174),
    [anon_sym_AFTER] = ACTIONS(174),
    [anon_sym_DIFF] = ACTIONS(174),
    [anon_sym_MERGE] = ACTIONS(174),
    [anon_sym_PATCH] = ACTIONS(174),
    [anon_sym_RELATE] = ACTIONS(174),
    [anon_sym_DELETE] = ACTIONS(174),
    [anon_sym_DEFINE] = ACTIONS(174),
    [anon_sym_NAMESPACE] = ACTIONS(174),
    [anon_sym_DATABASE] = ACTIONS(174),
    [anon_sym_LOGIN] = ACTIONS(174),
    [anon_sym_PASSWORD] = ACTIONS(174),
    [anon_sym_PASSHASH] = ACTIONS(174),
    [anon_sym_TOKEN] = ACTIONS(174),
    [anon_sym_SCOPE] = ACTIONS(174),
    [anon_sym_TYPE] = ACTIONS(174),
    [anon_sym_VALUE] = ACTIONS(174),
    [anon_sym_SESSION] = ACTIONS(174),
    [anon_sym_SIGNUP] = ACTIONS(174),
    [anon_sym_SIGNIN] = ACTIONS(174),
    [anon_sym_TABLE] = ACTIONS(174),
    [anon_sym_DROP] = ACTIONS(174),
    [anon_sym_SCHEMAFULL] = ACTIONS(174),
    [anon_sym_SCHEMALESS] = ACTIONS(174),
    [anon_sym_AS] = ACTIONS(174),
    [anon_sym_PERMISSIONS] = ACTIONS(174),
    [anon_sym_FULL] = ACTIONS(174),
    [anon_sym_FOR] = ACTIONS(174),
    [anon_sym_select] = ACTIONS(174),
    [anon_sym_update] = ACTIONS(174),
    [anon_sym_create] = ACTIONS(174),
    [anon_sym_delete] = ACTIONS(174),
    [anon_sym_EVENT] = ACTIONS(174),
    [anon_sym_WHEN] = ACTIONS(174),
    [anon_sym_ASSERT] = ACTIONS(174),
    [anon_sym_INDEX] = ACTIONS(174),
    [anon_sym_FIELDS] = ACTIONS(174),
    [anon_sym_COLUMNS] = ACTIONS(174),
    [anon_sym_UNIQUE] = ACTIONS(174),
    [anon_sym_REMOVE] = ACTIONS(174),
    [anon_sym_SLEEP] = ACTIONS(174),
    [anon_sym_INFO] = ACTIONS(174),
    [anon_sym_KV] = ACTIONS(174),
    [anon_sym_FUNCTION] = ACTIONS(174),
    [anon_sym_PARAM] = ACTIONS(174),
    [anon_sym_AMP_AMP] = ACTIONS(172),
    [anon_sym_AND] = ACTIONS(174),
    [anon_sym_PIPE_PIPE] = ACTIONS(172),
    [anon_sym_OR] = ACTIONS(174),
    [anon_sym_QMARK_QMARK] = ACTIONS(172),
    [anon_sym_QMARK_COLON] = ACTIONS(172),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_IS] = ACTIONS(174),
    [anon_sym_BANG_EQ] = ACTIONS(172),
    [anon_sym_ISNOT] = ACTIONS(172),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [anon_sym_QMARK_EQ] = ACTIONS(172),
    [anon_sym_STAR_EQ] = ACTIONS(172),
    [anon_sym_TILDE] = ACTIONS(172),
    [anon_sym_BANG_TILDE] = ACTIONS(172),
    [anon_sym_QMARK_TILDE] = ACTIONS(172),
    [anon_sym_STAR_TILDE] = ACTIONS(172),
    [anon_sym_LT] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(172),
    [anon_sym_GT] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(174),
    [anon_sym_STAR] = ACTIONS(174),
    [anon_sym_x] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(174),
    [anon_sym_] = ACTIONS(172),
    [anon_sym_STAR_STAR] = ACTIONS(172),
    [anon_sym_IN] = ACTIONS(174),
    [anon_sym_CONTAINS] = ACTIONS(174),
    [anon_sym_2] = ACTIONS(172),
    [anon_sym_CONTAINSNOT] = ACTIONS(174),
    [anon_sym_3] = ACTIONS(172),
    [anon_sym_CONTAINSALL] = ACTIONS(174),
    [anon_sym_4] = ACTIONS(172),
    [anon_sym_CONTAINSANY] = ACTIONS(174),
    [anon_sym_5] = ACTIONS(172),
    [anon_sym_CONTAINSNONE] = ACTIONS(174),
    [anon_sym_6] = ACTIONS(172),
    [anon_sym_INSIDE] = ACTIONS(174),
    [anon_sym_7] = ACTIONS(172),
    [anon_sym_NOTINSIDE] = ACTIONS(174),
    [anon_sym_NOTIN] = ACTIONS(172),
    [anon_sym_8] = ACTIONS(172),
    [anon_sym_ALLINSIDE] = ACTIONS(174),
    [anon_sym_9] = ACTIONS(172),
    [anon_sym_ANYINSIDE] = ACTIONS(174),
    [anon_sym_10] = ACTIONS(172),
    [anon_sym_NONEINSIDE] = ACTIONS(174),
    [anon_sym_11] = ACTIONS(172),
    [anon_sym_OUTSIDE] = ACTIONS(174),
    [anon_sym_INTERSECTS] = ACTIONS(174),
    [anon_sym_COMMA] = ACTIONS(172),
    [anon_sym_SEMI] = ACTIONS(172),
    [anon_sym_COLON] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_RPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_RBRACK] = ACTIONS(172),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_RBRACE] = ACTIONS(172),
    [anon_sym_DASH_GT] = ACTIONS(172),
    [anon_sym_LT_DASH] = ACTIONS(172),
    [anon_sym_any] = ACTIONS(174),
    [anon_sym_array] = ACTIONS(174),
    [anon_sym_bool] = ACTIONS(174),
    [anon_sym_datetime] = ACTIONS(174),
    [anon_sym_decimal] = ACTIONS(174),
    [anon_sym_duration] = ACTIONS(174),
    [anon_sym_float] = ACTIONS(174),
    [anon_sym_int] = ACTIONS(174),
    [anon_sym_number] = ACTIONS(174),
    [anon_sym_object] = ACTIONS(174),
    [anon_sym_string] = ACTIONS(174),
    [anon_sym_record] = ACTIONS(174),
    [anon_sym_geometry] = ACTIONS(174),
    [anon_sym_EDDSA] = ACTIONS(174),
    [anon_sym_ES256] = ACTIONS(174),
    [anon_sym_ES384] = ACTIONS(174),
    [anon_sym_ES512] = ACTIONS(174),
    [anon_sym_HS256] = ACTIONS(174),
    [anon_sym_HS384] = ACTIONS(174),
    [anon_sym_HS512] = ACTIONS(174),
    [anon_sym_PS256] = ACTIONS(174),
    [anon_sym_PS384] = ACTIONS(174),
    [anon_sym_PS512] = ACTIONS(174),
    [anon_sym_RS256] = ACTIONS(174),
    [anon_sym_RS384] = ACTIONS(174),
    [anon_sym_RS512] = ACTIONS(174),
    [aux_sym_function_token1] = ACTIONS(172),
    [aux_sym_function_token2] = ACTIONS(172),
    [anon_sym_count] = ACTIONS(174),
    [aux_sym_function_token3] = ACTIONS(172),
    [aux_sym_function_token4] = ACTIONS(172),
    [aux_sym_function_token5] = ACTIONS(172),
    [aux_sym_function_token6] = ACTIONS(172),
    [aux_sym_function_token7] = ACTIONS(172),
    [aux_sym_function_token8] = ACTIONS(172),
    [aux_sym_function_token9] = ACTIONS(172),
    [aux_sym_function_token10] = ACTIONS(174),
    [aux_sym_function_token11] = ACTIONS(172),
    [aux_sym_function_token12] = ACTIONS(174),
    [aux_sym_function_token13] = ACTIONS(172),
    [aux_sym_function_token14] = ACTIONS(172),
    [aux_sym_function_token15] = ACTIONS(172),
    [aux_sym_function_token16] = ACTIONS(174),
    [anon_sym_true] = ACTIONS(174),
    [anon_sym_false] = ACTIONS(174),
    [anon_sym_TRUE] = ACTIONS(174),
    [anon_sym_FALSE] = ACTIONS(174),
    [anon_sym_null] = ACTIONS(174),
    [anon_sym_NULL] = ACTIONS(174),
    [anon_sym_none] = ACTIONS(174),
    [anon_sym_NONE] = ACTIONS(174),
    [sym_variable] = ACTIONS(172),
    [sym_comment] = ACTIONS(172),
    [anon_sym_SQUOTE] = ACTIONS(172),
    [anon_sym_DQUOTE] = ACTIONS(172),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(176),
    [aux_sym_future_token1] = ACTIONS(176),
    [aux_sym_casting_token1] = ACTIONS(176),
    [aux_sym_property_token1] = ACTIONS(178),
    [aux_sym_identifier_token1] = ACTIONS(178),
    [aux_sym_constant_token1] = ACTIONS(176),
    [aux_sym_number_token1] = ACTIONS(178),
    [aux_sym_record_token1] = ACTIONS(176),
    [aux_sym_record_token2] = ACTIONS(176),
    [anon_sym_USE] = ACTIONS(178),
    [anon_sym_NS] = ACTIONS(178),
    [anon_sym_DB] = ACTIONS(178),
    [anon_sym_LET] = ACTIONS(178),
    [anon_sym_BEGIN] = ACTIONS(178),
    [anon_sym_TRANSACTION] = ACTIONS(178),
    [anon_sym_CANCEL] = ACTIONS(178),
    [anon_sym_COMMIT] = ACTIONS(178),
    [anon_sym_IF] = ACTIONS(178),
    [anon_sym_ELSE] = ACTIONS(178),
    [anon_sym_THEN] = ACTIONS(178),
    [anon_sym_END] = ACTIONS(178),
    [anon_sym_SELECT] = ACTIONS(178),
    [anon_sym_FROM] = ACTIONS(178),
    [anon_sym_WHERE] = ACTIONS(178),
    [anon_sym_SPLIT] = ACTIONS(178),
    [anon_sym_AT] = ACTIONS(178),
    [anon_sym_GROUP] = ACTIONS(178),
    [anon_sym_BY] = ACTIONS(178),
    [anon_sym_ORDER] = ACTIONS(178),
    [anon_sym_COLLATE] = ACTIONS(178),
    [anon_sym_NUMERIC] = ACTIONS(178),
    [anon_sym_ASC] = ACTIONS(178),
    [anon_sym_DESC] = ACTIONS(178),
    [anon_sym_LIMIT] = ACTIONS(178),
    [anon_sym_START] = ACTIONS(178),
    [anon_sym_FETCH] = ACTIONS(178),
    [anon_sym_TIMEOUT] = ACTIONS(178),
    [anon_sym_PARALLEL] = ACTIONS(178),
    [anon_sym_INSERT] = ACTIONS(178),
    [anon_sym_IGNORE] = ACTIONS(178),
    [anon_sym_INTO] = ACTIONS(178),
    [anon_sym_VALUES] = ACTIONS(178),
    [anon_sym_ON] = ACTIONS(178),
    [anon_sym_DUPLICATE] = ACTIONS(178),
    [anon_sym_KEY] = ACTIONS(178),
    [anon_sym_UPDATE] = ACTIONS(178),
    [anon_sym_CREATE] = ACTIONS(178),
    [anon_sym_CONTENT] = ACTIONS(178),
    [anon_sym_SET] = ACTIONS(178),
    [anon_sym_RETURN] = ACTIONS(178),
    [anon_sym_BEFORE] = ACTIONS(178),
    [anon_sym_AFTER] = ACTIONS(178),
    [anon_sym_DIFF] = ACTIONS(178),
    [anon_sym_MERGE] = ACTIONS(178),
    [anon_sym_PATCH] = ACTIONS(178),
    [anon_sym_RELATE] = ACTIONS(178),
    [anon_sym_DELETE] = ACTIONS(178),
    [anon_sym_DEFINE] = ACTIONS(178),
    [anon_sym_NAMESPACE] = ACTIONS(178),
    [anon_sym_DATABASE] = ACTIONS(178),
    [anon_sym_LOGIN] = ACTIONS(178),
    [anon_sym_PASSWORD] = ACTIONS(178),
    [anon_sym_PASSHASH] = ACTIONS(178),
    [anon_sym_TOKEN] = ACTIONS(178),
    [anon_sym_SCOPE] = ACTIONS(178),
    [anon_sym_TYPE] = ACTIONS(178),
    [anon_sym_VALUE] = ACTIONS(178),
    [anon_sym_SESSION] = ACTIONS(178),
    [anon_sym_SIGNUP] = ACTIONS(178),
    [anon_sym_SIGNIN] = ACTIONS(178),
    [anon_sym_TABLE] = ACTIONS(178),
    [anon_sym_DROP] = ACTIONS(178),
    [anon_sym_SCHEMAFULL] = ACTIONS(178),
    [anon_sym_SCHEMALESS] = ACTIONS(178),
    [anon_sym_AS] = ACTIONS(178),
    [anon_sym_PERMISSIONS] = ACTIONS(178),
    [anon_sym_FULL] = ACTIONS(178),
    [anon_sym_FOR] = ACTIONS(178),
    [anon_sym_select] = ACTIONS(178),
    [anon_sym_update] = ACTIONS(178),
    [anon_sym_create] = ACTIONS(178),
    [anon_sym_delete] = ACTIONS(178),
    [anon_sym_EVENT] = ACTIONS(178),
    [anon_sym_WHEN] = ACTIONS(178),
    [anon_sym_ASSERT] = ACTIONS(178),
    [anon_sym_INDEX] = ACTIONS(178),
    [anon_sym_FIELDS] = ACTIONS(178),
    [anon_sym_COLUMNS] = ACTIONS(178),
    [anon_sym_UNIQUE] = ACTIONS(178),
    [anon_sym_REMOVE] = ACTIONS(178),
    [anon_sym_SLEEP] = ACTIONS(178),
    [anon_sym_INFO] = ACTIONS(178),
    [anon_sym_KV] = ACTIONS(178),
    [anon_sym_FUNCTION] = ACTIONS(178),
    [anon_sym_PARAM] = ACTIONS(178),
    [anon_sym_AMP_AMP] = ACTIONS(176),
    [anon_sym_AND] = ACTIONS(178),
    [anon_sym_PIPE_PIPE] = ACTIONS(176),
    [anon_sym_OR] = ACTIONS(178),
    [anon_sym_QMARK_QMARK] = ACTIONS(176),
    [anon_sym_QMARK_COLON] = ACTIONS(176),
    [anon_sym_EQ] = ACTIONS(178),
    [anon_sym_IS] = ACTIONS(178),
    [anon_sym_BANG_EQ] = ACTIONS(176),
    [anon_sym_ISNOT] = ACTIONS(176),
    [anon_sym_EQ_EQ] = ACTIONS(176),
    [anon_sym_QMARK_EQ] = ACTIONS(176),
    [anon_sym_STAR_EQ] = ACTIONS(176),
    [anon_sym_TILDE] = ACTIONS(176),
    [anon_sym_BANG_TILDE] = ACTIONS(176),
    [anon_sym_QMARK_TILDE] = ACTIONS(176),
    [anon_sym_STAR_TILDE] = ACTIONS(176),
    [anon_sym_LT] = ACTIONS(178),
    [anon_sym_LT_EQ] = ACTIONS(176),
    [anon_sym_GT] = ACTIONS(178),
    [anon_sym_GT_EQ] = ACTIONS(176),
    [anon_sym_PLUS] = ACTIONS(176),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_STAR] = ACTIONS(178),
    [anon_sym_x] = ACTIONS(178),
    [anon_sym_SLASH] = ACTIONS(178),
    [anon_sym_] = ACTIONS(176),
    [anon_sym_STAR_STAR] = ACTIONS(176),
    [anon_sym_IN] = ACTIONS(178),
    [anon_sym_CONTAINS] = ACTIONS(178),
    [anon_sym_2] = ACTIONS(176),
    [anon_sym_CONTAINSNOT] = ACTIONS(178),
    [anon_sym_3] = ACTIONS(176),
    [anon_sym_CONTAINSALL] = ACTIONS(178),
    [anon_sym_4] = ACTIONS(176),
    [anon_sym_CONTAINSANY] = ACTIONS(178),
    [anon_sym_5] = ACTIONS(176),
    [anon_sym_CONTAINSNONE] = ACTIONS(178),
    [anon_sym_6] = ACTIONS(176),
    [anon_sym_INSIDE] = ACTIONS(178),
    [anon_sym_7] = ACTIONS(176),
    [anon_sym_NOTINSIDE] = ACTIONS(178),
    [anon_sym_NOTIN] = ACTIONS(176),
    [anon_sym_8] = ACTIONS(176),
    [anon_sym_ALLINSIDE] = ACTIONS(178),
    [anon_sym_9] = ACTIONS(176),
    [anon_sym_ANYINSIDE] = ACTIONS(178),
    [anon_sym_10] = ACTIONS(176),
    [anon_sym_NONEINSIDE] = ACTIONS(178),
    [anon_sym_11] = ACTIONS(176),
    [anon_sym_OUTSIDE] = ACTIONS(178),
    [anon_sym_INTERSECTS] = ACTIONS(178),
    [anon_sym_COMMA] = ACTIONS(176),
    [anon_sym_SEMI] = ACTIONS(176),
    [anon_sym_COLON] = ACTIONS(176),
    [anon_sym_LPAREN] = ACTIONS(176),
    [anon_sym_RPAREN] = ACTIONS(176),
    [anon_sym_LBRACK] = ACTIONS(176),
    [anon_sym_RBRACK] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(176),
    [anon_sym_RBRACE] = ACTIONS(176),
    [anon_sym_DASH_GT] = ACTIONS(176),
    [anon_sym_LT_DASH] = ACTIONS(176),
    [anon_sym_any] = ACTIONS(178),
    [anon_sym_array] = ACTIONS(178),
    [anon_sym_bool] = ACTIONS(178),
    [anon_sym_datetime] = ACTIONS(178),
    [anon_sym_decimal] = ACTIONS(178),
    [anon_sym_duration] = ACTIONS(178),
    [anon_sym_float] = ACTIONS(178),
    [anon_sym_int] = ACTIONS(178),
    [anon_sym_number] = ACTIONS(178),
    [anon_sym_object] = ACTIONS(178),
    [anon_sym_string] = ACTIONS(178),
    [anon_sym_record] = ACTIONS(178),
    [anon_sym_geometry] = ACTIONS(178),
    [anon_sym_EDDSA] = ACTIONS(178),
    [anon_sym_ES256] = ACTIONS(178),
    [anon_sym_ES384] = ACTIONS(178),
    [anon_sym_ES512] = ACTIONS(178),
    [anon_sym_HS256] = ACTIONS(178),
    [anon_sym_HS384] = ACTIONS(178),
    [anon_sym_HS512] = ACTIONS(178),
    [anon_sym_PS256] = ACTIONS(178),
    [anon_sym_PS384] = ACTIONS(178),
    [anon_sym_PS512] = ACTIONS(178),
    [anon_sym_RS256] = ACTIONS(178),
    [anon_sym_RS384] = ACTIONS(178),
    [anon_sym_RS512] = ACTIONS(178),
    [aux_sym_function_token1] = ACTIONS(176),
    [aux_sym_function_token2] = ACTIONS(176),
    [anon_sym_count] = ACTIONS(178),
    [aux_sym_function_token3] = ACTIONS(176),
    [aux_sym_function_token4] = ACTIONS(176),
    [aux_sym_function_token5] = ACTIONS(176),
    [aux_sym_function_token6] = ACTIONS(176),
    [aux_sym_function_token7] = ACTIONS(176),
    [aux_sym_function_token8] = ACTIONS(176),
    [aux_sym_function_token9] = ACTIONS(176),
    [aux_sym_function_token10] = ACTIONS(178),
    [aux_sym_function_token11] = ACTIONS(176),
    [aux_sym_function_token12] = ACTIONS(178),
    [aux_sym_function_token13] = ACTIONS(176),
    [aux_sym_function_token14] = ACTIONS(176),
    [aux_sym_function_token15] = ACTIONS(176),
    [aux_sym_function_token16] = ACTIONS(178),
    [anon_sym_true] = ACTIONS(178),
    [anon_sym_false] = ACTIONS(178),
    [anon_sym_TRUE] = ACTIONS(178),
    [anon_sym_FALSE] = ACTIONS(178),
    [anon_sym_null] = ACTIONS(178),
    [anon_sym_NULL] = ACTIONS(178),
    [anon_sym_none] = ACTIONS(178),
    [anon_sym_NONE] = ACTIONS(178),
    [sym_variable] = ACTIONS(176),
    [sym_comment] = ACTIONS(176),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [anon_sym_DQUOTE] = ACTIONS(176),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(180),
    [aux_sym_future_token1] = ACTIONS(180),
    [aux_sym_casting_token1] = ACTIONS(180),
    [aux_sym_property_token1] = ACTIONS(182),
    [aux_sym_identifier_token1] = ACTIONS(182),
    [aux_sym_constant_token1] = ACTIONS(180),
    [aux_sym_number_token1] = ACTIONS(182),
    [aux_sym_record_token1] = ACTIONS(180),
    [aux_sym_record_token2] = ACTIONS(180),
    [anon_sym_USE] = ACTIONS(182),
    [anon_sym_NS] = ACTIONS(182),
    [anon_sym_DB] = ACTIONS(182),
    [anon_sym_LET] = ACTIONS(182),
    [anon_sym_BEGIN] = ACTIONS(182),
    [anon_sym_TRANSACTION] = ACTIONS(182),
    [anon_sym_CANCEL] = ACTIONS(182),
    [anon_sym_COMMIT] = ACTIONS(182),
    [anon_sym_IF] = ACTIONS(182),
    [anon_sym_ELSE] = ACTIONS(182),
    [anon_sym_THEN] = ACTIONS(182),
    [anon_sym_END] = ACTIONS(182),
    [anon_sym_SELECT] = ACTIONS(182),
    [anon_sym_FROM] = ACTIONS(182),
    [anon_sym_WHERE] = ACTIONS(182),
    [anon_sym_SPLIT] = ACTIONS(182),
    [anon_sym_AT] = ACTIONS(182),
    [anon_sym_GROUP] = ACTIONS(182),
    [anon_sym_BY] = ACTIONS(182),
    [anon_sym_ORDER] = ACTIONS(182),
    [anon_sym_COLLATE] = ACTIONS(182),
    [anon_sym_NUMERIC] = ACTIONS(182),
    [anon_sym_ASC] = ACTIONS(182),
    [anon_sym_DESC] = ACTIONS(182),
    [anon_sym_LIMIT] = ACTIONS(182),
    [anon_sym_START] = ACTIONS(182),
    [anon_sym_FETCH] = ACTIONS(182),
    [anon_sym_TIMEOUT] = ACTIONS(182),
    [anon_sym_PARALLEL] = ACTIONS(182),
    [anon_sym_INSERT] = ACTIONS(182),
    [anon_sym_IGNORE] = ACTIONS(182),
    [anon_sym_INTO] = ACTIONS(182),
    [anon_sym_VALUES] = ACTIONS(182),
    [anon_sym_ON] = ACTIONS(182),
    [anon_sym_DUPLICATE] = ACTIONS(182),
    [anon_sym_KEY] = ACTIONS(182),
    [anon_sym_UPDATE] = ACTIONS(182),
    [anon_sym_CREATE] = ACTIONS(182),
    [anon_sym_CONTENT] = ACTIONS(182),
    [anon_sym_SET] = ACTIONS(182),
    [anon_sym_RETURN] = ACTIONS(182),
    [anon_sym_BEFORE] = ACTIONS(182),
    [anon_sym_AFTER] = ACTIONS(182),
    [anon_sym_DIFF] = ACTIONS(182),
    [anon_sym_MERGE] = ACTIONS(182),
    [anon_sym_PATCH] = ACTIONS(182),
    [anon_sym_RELATE] = ACTIONS(182),
    [anon_sym_DELETE] = ACTIONS(182),
    [anon_sym_DEFINE] = ACTIONS(182),
    [anon_sym_NAMESPACE] = ACTIONS(182),
    [anon_sym_DATABASE] = ACTIONS(182),
    [anon_sym_LOGIN] = ACTIONS(182),
    [anon_sym_PASSWORD] = ACTIONS(182),
    [anon_sym_PASSHASH] = ACTIONS(182),
    [anon_sym_TOKEN] = ACTIONS(182),
    [anon_sym_SCOPE] = ACTIONS(182),
    [anon_sym_TYPE] = ACTIONS(182),
    [anon_sym_VALUE] = ACTIONS(182),
    [anon_sym_SESSION] = ACTIONS(182),
    [anon_sym_SIGNUP] = ACTIONS(182),
    [anon_sym_SIGNIN] = ACTIONS(182),
    [anon_sym_TABLE] = ACTIONS(182),
    [anon_sym_DROP] = ACTIONS(182),
    [anon_sym_SCHEMAFULL] = ACTIONS(182),
    [anon_sym_SCHEMALESS] = ACTIONS(182),
    [anon_sym_AS] = ACTIONS(182),
    [anon_sym_PERMISSIONS] = ACTIONS(182),
    [anon_sym_FULL] = ACTIONS(182),
    [anon_sym_FOR] = ACTIONS(182),
    [anon_sym_select] = ACTIONS(182),
    [anon_sym_update] = ACTIONS(182),
    [anon_sym_create] = ACTIONS(182),
    [anon_sym_delete] = ACTIONS(182),
    [anon_sym_EVENT] = ACTIONS(182),
    [anon_sym_WHEN] = ACTIONS(182),
    [anon_sym_ASSERT] = ACTIONS(182),
    [anon_sym_INDEX] = ACTIONS(182),
    [anon_sym_FIELDS] = ACTIONS(182),
    [anon_sym_COLUMNS] = ACTIONS(182),
    [anon_sym_UNIQUE] = ACTIONS(182),
    [anon_sym_REMOVE] = ACTIONS(182),
    [anon_sym_SLEEP] = ACTIONS(182),
    [anon_sym_INFO] = ACTIONS(182),
    [anon_sym_KV] = ACTIONS(182),
    [anon_sym_FUNCTION] = ACTIONS(182),
    [anon_sym_PARAM] = ACTIONS(182),
    [anon_sym_AMP_AMP] = ACTIONS(180),
    [anon_sym_AND] = ACTIONS(182),
    [anon_sym_PIPE_PIPE] = ACTIONS(180),
    [anon_sym_OR] = ACTIONS(182),
    [anon_sym_QMARK_QMARK] = ACTIONS(180),
    [anon_sym_QMARK_COLON] = ACTIONS(180),
    [anon_sym_EQ] = ACTIONS(182),
    [anon_sym_IS] = ACTIONS(182),
    [anon_sym_BANG_EQ] = ACTIONS(180),
    [anon_sym_ISNOT] = ACTIONS(180),
    [anon_sym_EQ_EQ] = ACTIONS(180),
    [anon_sym_QMARK_EQ] = ACTIONS(180),
    [anon_sym_STAR_EQ] = ACTIONS(180),
    [anon_sym_TILDE] = ACTIONS(180),
    [anon_sym_BANG_TILDE] = ACTIONS(180),
    [anon_sym_QMARK_TILDE] = ACTIONS(180),
    [anon_sym_STAR_TILDE] = ACTIONS(180),
    [anon_sym_LT] = ACTIONS(182),
    [anon_sym_LT_EQ] = ACTIONS(180),
    [anon_sym_GT] = ACTIONS(182),
    [anon_sym_GT_EQ] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(182),
    [anon_sym_STAR] = ACTIONS(182),
    [anon_sym_x] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(182),
    [anon_sym_] = ACTIONS(180),
    [anon_sym_STAR_STAR] = ACTIONS(180),
    [anon_sym_IN] = ACTIONS(182),
    [anon_sym_CONTAINS] = ACTIONS(182),
    [anon_sym_2] = ACTIONS(180),
    [anon_sym_CONTAINSNOT] = ACTIONS(182),
    [anon_sym_3] = ACTIONS(180),
    [anon_sym_CONTAINSALL] = ACTIONS(182),
    [anon_sym_4] = ACTIONS(180),
    [anon_sym_CONTAINSANY] = ACTIONS(182),
    [anon_sym_5] = ACTIONS(180),
    [anon_sym_CONTAINSNONE] = ACTIONS(182),
    [anon_sym_6] = ACTIONS(180),
    [anon_sym_INSIDE] = ACTIONS(182),
    [anon_sym_7] = ACTIONS(180),
    [anon_sym_NOTINSIDE] = ACTIONS(182),
    [anon_sym_NOTIN] = ACTIONS(180),
    [anon_sym_8] = ACTIONS(180),
    [anon_sym_ALLINSIDE] = ACTIONS(182),
    [anon_sym_9] = ACTIONS(180),
    [anon_sym_ANYINSIDE] = ACTIONS(182),
    [anon_sym_10] = ACTIONS(180),
    [anon_sym_NONEINSIDE] = ACTIONS(182),
    [anon_sym_11] = ACTIONS(180),
    [anon_sym_OUTSIDE] = ACTIONS(182),
    [anon_sym_INTERSECTS] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(180),
    [anon_sym_SEMI] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(180),
    [anon_sym_LPAREN] = ACTIONS(180),
    [anon_sym_RPAREN] = ACTIONS(180),
    [anon_sym_LBRACK] = ACTIONS(180),
    [anon_sym_RBRACK] = ACTIONS(180),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_RBRACE] = ACTIONS(180),
    [anon_sym_DASH_GT] = ACTIONS(180),
    [anon_sym_LT_DASH] = ACTIONS(180),
    [anon_sym_any] = ACTIONS(182),
    [anon_sym_array] = ACTIONS(182),
    [anon_sym_bool] = ACTIONS(182),
    [anon_sym_datetime] = ACTIONS(182),
    [anon_sym_decimal] = ACTIONS(182),
    [anon_sym_duration] = ACTIONS(182),
    [anon_sym_float] = ACTIONS(182),
    [anon_sym_int] = ACTIONS(182),
    [anon_sym_number] = ACTIONS(182),
    [anon_sym_object] = ACTIONS(182),
    [anon_sym_string] = ACTIONS(182),
    [anon_sym_record] = ACTIONS(182),
    [anon_sym_geometry] = ACTIONS(182),
    [anon_sym_EDDSA] = ACTIONS(182),
    [anon_sym_ES256] = ACTIONS(182),
    [anon_sym_ES384] = ACTIONS(182),
    [anon_sym_ES512] = ACTIONS(182),
    [anon_sym_HS256] = ACTIONS(182),
    [anon_sym_HS384] = ACTIONS(182),
    [anon_sym_HS512] = ACTIONS(182),
    [anon_sym_PS256] = ACTIONS(182),
    [anon_sym_PS384] = ACTIONS(182),
    [anon_sym_PS512] = ACTIONS(182),
    [anon_sym_RS256] = ACTIONS(182),
    [anon_sym_RS384] = ACTIONS(182),
    [anon_sym_RS512] = ACTIONS(182),
    [aux_sym_function_token1] = ACTIONS(180),
    [aux_sym_function_token2] = ACTIONS(180),
    [anon_sym_count] = ACTIONS(182),
    [aux_sym_function_token3] = ACTIONS(180),
    [aux_sym_function_token4] = ACTIONS(180),
    [aux_sym_function_token5] = ACTIONS(180),
    [aux_sym_function_token6] = ACTIONS(180),
    [aux_sym_function_token7] = ACTIONS(180),
    [aux_sym_function_token8] = ACTIONS(180),
    [aux_sym_function_token9] = ACTIONS(180),
    [aux_sym_function_token10] = ACTIONS(182),
    [aux_sym_function_token11] = ACTIONS(180),
    [aux_sym_function_token12] = ACTIONS(182),
    [aux_sym_function_token13] = ACTIONS(180),
    [aux_sym_function_token14] = ACTIONS(180),
    [aux_sym_function_token15] = ACTIONS(180),
    [aux_sym_function_token16] = ACTIONS(182),
    [anon_sym_true] = ACTIONS(182),
    [anon_sym_false] = ACTIONS(182),
    [anon_sym_TRUE] = ACTIONS(182),
    [anon_sym_FALSE] = ACTIONS(182),
    [anon_sym_null] = ACTIONS(182),
    [anon_sym_NULL] = ACTIONS(182),
    [anon_sym_none] = ACTIONS(182),
    [anon_sym_NONE] = ACTIONS(182),
    [sym_variable] = ACTIONS(180),
    [sym_comment] = ACTIONS(180),
    [anon_sym_SQUOTE] = ACTIONS(180),
    [anon_sym_DQUOTE] = ACTIONS(180),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(184),
    [aux_sym_future_token1] = ACTIONS(184),
    [aux_sym_casting_token1] = ACTIONS(184),
    [aux_sym_property_token1] = ACTIONS(186),
    [aux_sym_identifier_token1] = ACTIONS(186),
    [aux_sym_constant_token1] = ACTIONS(184),
    [aux_sym_number_token1] = ACTIONS(186),
    [aux_sym_record_token1] = ACTIONS(184),
    [aux_sym_record_token2] = ACTIONS(184),
    [anon_sym_USE] = ACTIONS(186),
    [anon_sym_NS] = ACTIONS(186),
    [anon_sym_DB] = ACTIONS(186),
    [anon_sym_LET] = ACTIONS(186),
    [anon_sym_BEGIN] = ACTIONS(186),
    [anon_sym_TRANSACTION] = ACTIONS(186),
    [anon_sym_CANCEL] = ACTIONS(186),
    [anon_sym_COMMIT] = ACTIONS(186),
    [anon_sym_IF] = ACTIONS(186),
    [anon_sym_ELSE] = ACTIONS(186),
    [anon_sym_THEN] = ACTIONS(186),
    [anon_sym_END] = ACTIONS(186),
    [anon_sym_SELECT] = ACTIONS(186),
    [anon_sym_FROM] = ACTIONS(186),
    [anon_sym_WHERE] = ACTIONS(186),
    [anon_sym_SPLIT] = ACTIONS(186),
    [anon_sym_AT] = ACTIONS(186),
    [anon_sym_GROUP] = ACTIONS(186),
    [anon_sym_BY] = ACTIONS(186),
    [anon_sym_ORDER] = ACTIONS(186),
    [anon_sym_COLLATE] = ACTIONS(186),
    [anon_sym_NUMERIC] = ACTIONS(186),
    [anon_sym_ASC] = ACTIONS(186),
    [anon_sym_DESC] = ACTIONS(186),
    [anon_sym_LIMIT] = ACTIONS(186),
    [anon_sym_START] = ACTIONS(186),
    [anon_sym_FETCH] = ACTIONS(186),
    [anon_sym_TIMEOUT] = ACTIONS(186),
    [anon_sym_PARALLEL] = ACTIONS(186),
    [anon_sym_INSERT] = ACTIONS(186),
    [anon_sym_IGNORE] = ACTIONS(186),
    [anon_sym_INTO] = ACTIONS(186),
    [anon_sym_VALUES] = ACTIONS(186),
    [anon_sym_ON] = ACTIONS(186),
    [anon_sym_DUPLICATE] = ACTIONS(186),
    [anon_sym_KEY] = ACTIONS(186),
    [anon_sym_UPDATE] = ACTIONS(186),
    [anon_sym_CREATE] = ACTIONS(186),
    [anon_sym_CONTENT] = ACTIONS(186),
    [anon_sym_SET] = ACTIONS(186),
    [anon_sym_RETURN] = ACTIONS(186),
    [anon_sym_BEFORE] = ACTIONS(186),
    [anon_sym_AFTER] = ACTIONS(186),
    [anon_sym_DIFF] = ACTIONS(186),
    [anon_sym_MERGE] = ACTIONS(186),
    [anon_sym_PATCH] = ACTIONS(186),
    [anon_sym_RELATE] = ACTIONS(186),
    [anon_sym_DELETE] = ACTIONS(186),
    [anon_sym_DEFINE] = ACTIONS(186),
    [anon_sym_NAMESPACE] = ACTIONS(186),
    [anon_sym_DATABASE] = ACTIONS(186),
    [anon_sym_LOGIN] = ACTIONS(186),
    [anon_sym_PASSWORD] = ACTIONS(186),
    [anon_sym_PASSHASH] = ACTIONS(186),
    [anon_sym_TOKEN] = ACTIONS(186),
    [anon_sym_SCOPE] = ACTIONS(186),
    [anon_sym_TYPE] = ACTIONS(186),
    [anon_sym_VALUE] = ACTIONS(186),
    [anon_sym_SESSION] = ACTIONS(186),
    [anon_sym_SIGNUP] = ACTIONS(186),
    [anon_sym_SIGNIN] = ACTIONS(186),
    [anon_sym_TABLE] = ACTIONS(186),
    [anon_sym_DROP] = ACTIONS(186),
    [anon_sym_SCHEMAFULL] = ACTIONS(186),
    [anon_sym_SCHEMALESS] = ACTIONS(186),
    [anon_sym_AS] = ACTIONS(186),
    [anon_sym_PERMISSIONS] = ACTIONS(186),
    [anon_sym_FULL] = ACTIONS(186),
    [anon_sym_FOR] = ACTIONS(186),
    [anon_sym_select] = ACTIONS(186),
    [anon_sym_update] = ACTIONS(186),
    [anon_sym_create] = ACTIONS(186),
    [anon_sym_delete] = ACTIONS(186),
    [anon_sym_EVENT] = ACTIONS(186),
    [anon_sym_WHEN] = ACTIONS(186),
    [anon_sym_ASSERT] = ACTIONS(186),
    [anon_sym_INDEX] = ACTIONS(186),
    [anon_sym_FIELDS] = ACTIONS(186),
    [anon_sym_COLUMNS] = ACTIONS(186),
    [anon_sym_UNIQUE] = ACTIONS(186),
    [anon_sym_REMOVE] = ACTIONS(186),
    [anon_sym_SLEEP] = ACTIONS(186),
    [anon_sym_INFO] = ACTIONS(186),
    [anon_sym_KV] = ACTIONS(186),
    [anon_sym_FUNCTION] = ACTIONS(186),
    [anon_sym_PARAM] = ACTIONS(186),
    [anon_sym_AMP_AMP] = ACTIONS(184),
    [anon_sym_AND] = ACTIONS(186),
    [anon_sym_PIPE_PIPE] = ACTIONS(184),
    [anon_sym_OR] = ACTIONS(186),
    [anon_sym_QMARK_QMARK] = ACTIONS(184),
    [anon_sym_QMARK_COLON] = ACTIONS(184),
    [anon_sym_EQ] = ACTIONS(186),
    [anon_sym_IS] = ACTIONS(186),
    [anon_sym_BANG_EQ] = ACTIONS(184),
    [anon_sym_ISNOT] = ACTIONS(184),
    [anon_sym_EQ_EQ] = ACTIONS(184),
    [anon_sym_QMARK_EQ] = ACTIONS(184),
    [anon_sym_STAR_EQ] = ACTIONS(184),
    [anon_sym_TILDE] = ACTIONS(184),
    [anon_sym_BANG_TILDE] = ACTIONS(184),
    [anon_sym_QMARK_TILDE] = ACTIONS(184),
    [anon_sym_STAR_TILDE] = ACTIONS(184),
    [anon_sym_LT] = ACTIONS(186),
    [anon_sym_LT_EQ] = ACTIONS(184),
    [anon_sym_GT] = ACTIONS(186),
    [anon_sym_GT_EQ] = ACTIONS(184),
    [anon_sym_PLUS] = ACTIONS(184),
    [anon_sym_DASH] = ACTIONS(186),
    [anon_sym_STAR] = ACTIONS(186),
    [anon_sym_x] = ACTIONS(186),
    [anon_sym_SLASH] = ACTIONS(186),
    [anon_sym_] = ACTIONS(184),
    [anon_sym_STAR_STAR] = ACTIONS(184),
    [anon_sym_IN] = ACTIONS(186),
    [anon_sym_CONTAINS] = ACTIONS(186),
    [anon_sym_2] = ACTIONS(184),
    [anon_sym_CONTAINSNOT] = ACTIONS(186),
    [anon_sym_3] = ACTIONS(184),
    [anon_sym_CONTAINSALL] = ACTIONS(186),
    [anon_sym_4] = ACTIONS(184),
    [anon_sym_CONTAINSANY] = ACTIONS(186),
    [anon_sym_5] = ACTIONS(184),
    [anon_sym_CONTAINSNONE] = ACTIONS(186),
    [anon_sym_6] = ACTIONS(184),
    [anon_sym_INSIDE] = ACTIONS(186),
    [anon_sym_7] = ACTIONS(184),
    [anon_sym_NOTINSIDE] = ACTIONS(186),
    [anon_sym_NOTIN] = ACTIONS(184),
    [anon_sym_8] = ACTIONS(184),
    [anon_sym_ALLINSIDE] = ACTIONS(186),
    [anon_sym_9] = ACTIONS(184),
    [anon_sym_ANYINSIDE] = ACTIONS(186),
    [anon_sym_10] = ACTIONS(184),
    [anon_sym_NONEINSIDE] = ACTIONS(186),
    [anon_sym_11] = ACTIONS(184),
    [anon_sym_OUTSIDE] = ACTIONS(186),
    [anon_sym_INTERSECTS] = ACTIONS(186),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_SEMI] = ACTIONS(184),
    [anon_sym_COLON] = ACTIONS(184),
    [anon_sym_LPAREN] = ACTIONS(184),
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_LBRACK] = ACTIONS(184),
    [anon_sym_RBRACK] = ACTIONS(184),
    [anon_sym_LBRACE] = ACTIONS(184),
    [anon_sym_RBRACE] = ACTIONS(184),
    [anon_sym_DASH_GT] = ACTIONS(184),
    [anon_sym_LT_DASH] = ACTIONS(184),
    [anon_sym_any] = ACTIONS(186),
    [anon_sym_array] = ACTIONS(186),
    [anon_sym_bool] = ACTIONS(186),
    [anon_sym_datetime] = ACTIONS(186),
    [anon_sym_decimal] = ACTIONS(186),
    [anon_sym_duration] = ACTIONS(186),
    [anon_sym_float] = ACTIONS(186),
    [anon_sym_int] = ACTIONS(186),
    [anon_sym_number] = ACTIONS(186),
    [anon_sym_object] = ACTIONS(186),
    [anon_sym_string] = ACTIONS(186),
    [anon_sym_record] = ACTIONS(186),
    [anon_sym_geometry] = ACTIONS(186),
    [anon_sym_EDDSA] = ACTIONS(186),
    [anon_sym_ES256] = ACTIONS(186),
    [anon_sym_ES384] = ACTIONS(186),
    [anon_sym_ES512] = ACTIONS(186),
    [anon_sym_HS256] = ACTIONS(186),
    [anon_sym_HS384] = ACTIONS(186),
    [anon_sym_HS512] = ACTIONS(186),
    [anon_sym_PS256] = ACTIONS(186),
    [anon_sym_PS384] = ACTIONS(186),
    [anon_sym_PS512] = ACTIONS(186),
    [anon_sym_RS256] = ACTIONS(186),
    [anon_sym_RS384] = ACTIONS(186),
    [anon_sym_RS512] = ACTIONS(186),
    [aux_sym_function_token1] = ACTIONS(184),
    [aux_sym_function_token2] = ACTIONS(184),
    [anon_sym_count] = ACTIONS(186),
    [aux_sym_function_token3] = ACTIONS(184),
    [aux_sym_function_token4] = ACTIONS(184),
    [aux_sym_function_token5] = ACTIONS(184),
    [aux_sym_function_token6] = ACTIONS(184),
    [aux_sym_function_token7] = ACTIONS(184),
    [aux_sym_function_token8] = ACTIONS(184),
    [aux_sym_function_token9] = ACTIONS(184),
    [aux_sym_function_token10] = ACTIONS(186),
    [aux_sym_function_token11] = ACTIONS(184),
    [aux_sym_function_token12] = ACTIONS(186),
    [aux_sym_function_token13] = ACTIONS(184),
    [aux_sym_function_token14] = ACTIONS(184),
    [aux_sym_function_token15] = ACTIONS(184),
    [aux_sym_function_token16] = ACTIONS(186),
    [anon_sym_true] = ACTIONS(186),
    [anon_sym_false] = ACTIONS(186),
    [anon_sym_TRUE] = ACTIONS(186),
    [anon_sym_FALSE] = ACTIONS(186),
    [anon_sym_null] = ACTIONS(186),
    [anon_sym_NULL] = ACTIONS(186),
    [anon_sym_none] = ACTIONS(186),
    [anon_sym_NONE] = ACTIONS(186),
    [sym_variable] = ACTIONS(184),
    [sym_comment] = ACTIONS(184),
    [anon_sym_SQUOTE] = ACTIONS(184),
    [anon_sym_DQUOTE] = ACTIONS(184),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(188),
    [aux_sym_future_token1] = ACTIONS(188),
    [aux_sym_casting_token1] = ACTIONS(188),
    [aux_sym_property_token1] = ACTIONS(190),
    [aux_sym_identifier_token1] = ACTIONS(190),
    [aux_sym_constant_token1] = ACTIONS(188),
    [aux_sym_number_token1] = ACTIONS(190),
    [aux_sym_record_token1] = ACTIONS(188),
    [aux_sym_record_token2] = ACTIONS(188),
    [anon_sym_USE] = ACTIONS(190),
    [anon_sym_NS] = ACTIONS(190),
    [anon_sym_DB] = ACTIONS(190),
    [anon_sym_LET] = ACTIONS(190),
    [anon_sym_BEGIN] = ACTIONS(190),
    [anon_sym_TRANSACTION] = ACTIONS(190),
    [anon_sym_CANCEL] = ACTIONS(190),
    [anon_sym_COMMIT] = ACTIONS(190),
    [anon_sym_IF] = ACTIONS(190),
    [anon_sym_ELSE] = ACTIONS(190),
    [anon_sym_THEN] = ACTIONS(190),
    [anon_sym_END] = ACTIONS(190),
    [anon_sym_SELECT] = ACTIONS(190),
    [anon_sym_FROM] = ACTIONS(190),
    [anon_sym_WHERE] = ACTIONS(190),
    [anon_sym_SPLIT] = ACTIONS(190),
    [anon_sym_AT] = ACTIONS(190),
    [anon_sym_GROUP] = ACTIONS(190),
    [anon_sym_BY] = ACTIONS(190),
    [anon_sym_ORDER] = ACTIONS(190),
    [anon_sym_COLLATE] = ACTIONS(190),
    [anon_sym_NUMERIC] = ACTIONS(190),
    [anon_sym_ASC] = ACTIONS(190),
    [anon_sym_DESC] = ACTIONS(190),
    [anon_sym_LIMIT] = ACTIONS(190),
    [anon_sym_START] = ACTIONS(190),
    [anon_sym_FETCH] = ACTIONS(190),
    [anon_sym_TIMEOUT] = ACTIONS(190),
    [anon_sym_PARALLEL] = ACTIONS(190),
    [anon_sym_INSERT] = ACTIONS(190),
    [anon_sym_IGNORE] = ACTIONS(190),
    [anon_sym_INTO] = ACTIONS(190),
    [anon_sym_VALUES] = ACTIONS(190),
    [anon_sym_ON] = ACTIONS(190),
    [anon_sym_DUPLICATE] = ACTIONS(190),
    [anon_sym_KEY] = ACTIONS(190),
    [anon_sym_UPDATE] = ACTIONS(190),
    [anon_sym_CREATE] = ACTIONS(190),
    [anon_sym_CONTENT] = ACTIONS(190),
    [anon_sym_SET] = ACTIONS(190),
    [anon_sym_RETURN] = ACTIONS(190),
    [anon_sym_BEFORE] = ACTIONS(190),
    [anon_sym_AFTER] = ACTIONS(190),
    [anon_sym_DIFF] = ACTIONS(190),
    [anon_sym_MERGE] = ACTIONS(190),
    [anon_sym_PATCH] = ACTIONS(190),
    [anon_sym_RELATE] = ACTIONS(190),
    [anon_sym_DELETE] = ACTIONS(190),
    [anon_sym_DEFINE] = ACTIONS(190),
    [anon_sym_NAMESPACE] = ACTIONS(190),
    [anon_sym_DATABASE] = ACTIONS(190),
    [anon_sym_LOGIN] = ACTIONS(190),
    [anon_sym_PASSWORD] = ACTIONS(190),
    [anon_sym_PASSHASH] = ACTIONS(190),
    [anon_sym_TOKEN] = ACTIONS(190),
    [anon_sym_SCOPE] = ACTIONS(190),
    [anon_sym_TYPE] = ACTIONS(190),
    [anon_sym_VALUE] = ACTIONS(190),
    [anon_sym_SESSION] = ACTIONS(190),
    [anon_sym_SIGNUP] = ACTIONS(190),
    [anon_sym_SIGNIN] = ACTIONS(190),
    [anon_sym_TABLE] = ACTIONS(190),
    [anon_sym_DROP] = ACTIONS(190),
    [anon_sym_SCHEMAFULL] = ACTIONS(190),
    [anon_sym_SCHEMALESS] = ACTIONS(190),
    [anon_sym_AS] = ACTIONS(190),
    [anon_sym_PERMISSIONS] = ACTIONS(190),
    [anon_sym_FULL] = ACTIONS(190),
    [anon_sym_FOR] = ACTIONS(190),
    [anon_sym_select] = ACTIONS(190),
    [anon_sym_update] = ACTIONS(190),
    [anon_sym_create] = ACTIONS(190),
    [anon_sym_delete] = ACTIONS(190),
    [anon_sym_EVENT] = ACTIONS(190),
    [anon_sym_WHEN] = ACTIONS(190),
    [anon_sym_ASSERT] = ACTIONS(190),
    [anon_sym_INDEX] = ACTIONS(190),
    [anon_sym_FIELDS] = ACTIONS(190),
    [anon_sym_COLUMNS] = ACTIONS(190),
    [anon_sym_UNIQUE] = ACTIONS(190),
    [anon_sym_REMOVE] = ACTIONS(190),
    [anon_sym_SLEEP] = ACTIONS(190),
    [anon_sym_INFO] = ACTIONS(190),
    [anon_sym_KV] = ACTIONS(190),
    [anon_sym_FUNCTION] = ACTIONS(190),
    [anon_sym_PARAM] = ACTIONS(190),
    [anon_sym_AMP_AMP] = ACTIONS(188),
    [anon_sym_AND] = ACTIONS(190),
    [anon_sym_PIPE_PIPE] = ACTIONS(188),
    [anon_sym_OR] = ACTIONS(190),
    [anon_sym_QMARK_QMARK] = ACTIONS(188),
    [anon_sym_QMARK_COLON] = ACTIONS(188),
    [anon_sym_EQ] = ACTIONS(190),
    [anon_sym_IS] = ACTIONS(190),
    [anon_sym_BANG_EQ] = ACTIONS(188),
    [anon_sym_ISNOT] = ACTIONS(188),
    [anon_sym_EQ_EQ] = ACTIONS(188),
    [anon_sym_QMARK_EQ] = ACTIONS(188),
    [anon_sym_STAR_EQ] = ACTIONS(188),
    [anon_sym_TILDE] = ACTIONS(188),
    [anon_sym_BANG_TILDE] = ACTIONS(188),
    [anon_sym_QMARK_TILDE] = ACTIONS(188),
    [anon_sym_STAR_TILDE] = ACTIONS(188),
    [anon_sym_LT] = ACTIONS(190),
    [anon_sym_LT_EQ] = ACTIONS(188),
    [anon_sym_GT] = ACTIONS(190),
    [anon_sym_GT_EQ] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(190),
    [anon_sym_STAR] = ACTIONS(190),
    [anon_sym_x] = ACTIONS(190),
    [anon_sym_SLASH] = ACTIONS(190),
    [anon_sym_] = ACTIONS(188),
    [anon_sym_STAR_STAR] = ACTIONS(188),
    [anon_sym_IN] = ACTIONS(190),
    [anon_sym_CONTAINS] = ACTIONS(190),
    [anon_sym_2] = ACTIONS(188),
    [anon_sym_CONTAINSNOT] = ACTIONS(190),
    [anon_sym_3] = ACTIONS(188),
    [anon_sym_CONTAINSALL] = ACTIONS(190),
    [anon_sym_4] = ACTIONS(188),
    [anon_sym_CONTAINSANY] = ACTIONS(190),
    [anon_sym_5] = ACTIONS(188),
    [anon_sym_CONTAINSNONE] = ACTIONS(190),
    [anon_sym_6] = ACTIONS(188),
    [anon_sym_INSIDE] = ACTIONS(190),
    [anon_sym_7] = ACTIONS(188),
    [anon_sym_NOTINSIDE] = ACTIONS(190),
    [anon_sym_NOTIN] = ACTIONS(188),
    [anon_sym_8] = ACTIONS(188),
    [anon_sym_ALLINSIDE] = ACTIONS(190),
    [anon_sym_9] = ACTIONS(188),
    [anon_sym_ANYINSIDE] = ACTIONS(190),
    [anon_sym_10] = ACTIONS(188),
    [anon_sym_NONEINSIDE] = ACTIONS(190),
    [anon_sym_11] = ACTIONS(188),
    [anon_sym_OUTSIDE] = ACTIONS(190),
    [anon_sym_INTERSECTS] = ACTIONS(190),
    [anon_sym_COMMA] = ACTIONS(188),
    [anon_sym_SEMI] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(188),
    [anon_sym_LPAREN] = ACTIONS(188),
    [anon_sym_RPAREN] = ACTIONS(188),
    [anon_sym_LBRACK] = ACTIONS(188),
    [anon_sym_RBRACK] = ACTIONS(188),
    [anon_sym_LBRACE] = ACTIONS(188),
    [anon_sym_RBRACE] = ACTIONS(188),
    [anon_sym_DASH_GT] = ACTIONS(188),
    [anon_sym_LT_DASH] = ACTIONS(188),
    [anon_sym_any] = ACTIONS(190),
    [anon_sym_array] = ACTIONS(190),
    [anon_sym_bool] = ACTIONS(190),
    [anon_sym_datetime] = ACTIONS(190),
    [anon_sym_decimal] = ACTIONS(190),
    [anon_sym_duration] = ACTIONS(190),
    [anon_sym_float] = ACTIONS(190),
    [anon_sym_int] = ACTIONS(190),
    [anon_sym_number] = ACTIONS(190),
    [anon_sym_object] = ACTIONS(190),
    [anon_sym_string] = ACTIONS(190),
    [anon_sym_record] = ACTIONS(190),
    [anon_sym_geometry] = ACTIONS(190),
    [anon_sym_EDDSA] = ACTIONS(190),
    [anon_sym_ES256] = ACTIONS(190),
    [anon_sym_ES384] = ACTIONS(190),
    [anon_sym_ES512] = ACTIONS(190),
    [anon_sym_HS256] = ACTIONS(190),
    [anon_sym_HS384] = ACTIONS(190),
    [anon_sym_HS512] = ACTIONS(190),
    [anon_sym_PS256] = ACTIONS(190),
    [anon_sym_PS384] = ACTIONS(190),
    [anon_sym_PS512] = ACTIONS(190),
    [anon_sym_RS256] = ACTIONS(190),
    [anon_sym_RS384] = ACTIONS(190),
    [anon_sym_RS512] = ACTIONS(190),
    [aux_sym_function_token1] = ACTIONS(188),
    [aux_sym_function_token2] = ACTIONS(188),
    [anon_sym_count] = ACTIONS(190),
    [aux_sym_function_token3] = ACTIONS(188),
    [aux_sym_function_token4] = ACTIONS(188),
    [aux_sym_function_token5] = ACTIONS(188),
    [aux_sym_function_token6] = ACTIONS(188),
    [aux_sym_function_token7] = ACTIONS(188),
    [aux_sym_function_token8] = ACTIONS(188),
    [aux_sym_function_token9] = ACTIONS(188),
    [aux_sym_function_token10] = ACTIONS(190),
    [aux_sym_function_token11] = ACTIONS(188),
    [aux_sym_function_token12] = ACTIONS(190),
    [aux_sym_function_token13] = ACTIONS(188),
    [aux_sym_function_token14] = ACTIONS(188),
    [aux_sym_function_token15] = ACTIONS(188),
    [aux_sym_function_token16] = ACTIONS(190),
    [anon_sym_true] = ACTIONS(190),
    [anon_sym_false] = ACTIONS(190),
    [anon_sym_TRUE] = ACTIONS(190),
    [anon_sym_FALSE] = ACTIONS(190),
    [anon_sym_null] = ACTIONS(190),
    [anon_sym_NULL] = ACTIONS(190),
    [anon_sym_none] = ACTIONS(190),
    [anon_sym_NONE] = ACTIONS(190),
    [sym_variable] = ACTIONS(188),
    [sym_comment] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(188),
    [anon_sym_DQUOTE] = ACTIONS(188),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(192), 1,
      anon_sym_BSLASH,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      aux_sym_string_token3,
    STATE(25), 1,
      aux_sym_string_repeat2,
  [13] = 4,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      aux_sym_string_token1,
    ACTIONS(202), 1,
      anon_sym_BSLASH,
    STATE(27), 1,
      aux_sym_string_repeat1,
  [26] = 4,
    ACTIONS(192), 1,
      anon_sym_BSLASH,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      aux_sym_string_token3,
    STATE(28), 1,
      aux_sym_string_repeat2,
  [39] = 4,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_BSLASH,
    ACTIONS(206), 1,
      aux_sym_string_token1,
    STATE(24), 1,
      aux_sym_string_repeat1,
  [52] = 4,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      aux_sym_string_token1,
    ACTIONS(213), 1,
      anon_sym_BSLASH,
    STATE(27), 1,
      aux_sym_string_repeat1,
  [65] = 4,
    ACTIONS(216), 1,
      anon_sym_BSLASH,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    ACTIONS(221), 1,
      aux_sym_string_token3,
    STATE(28), 1,
      aux_sym_string_repeat2,
  [78] = 2,
    ACTIONS(224), 1,
      aux_sym_string_token1,
    ACTIONS(208), 2,
      anon_sym_SQUOTE,
      anon_sym_BSLASH,
  [86] = 2,
    ACTIONS(226), 1,
      aux_sym_string_token3,
    ACTIONS(219), 2,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
  [94] = 1,
    ACTIONS(228), 1,
      aux_sym_string_token2,
  [98] = 1,
    ACTIONS(230), 1,
      aux_sym_string_token2,
  [102] = 1,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(23)] = 0,
  [SMALL_STATE(24)] = 13,
  [SMALL_STATE(25)] = 26,
  [SMALL_STATE(26)] = 39,
  [SMALL_STATE(27)] = 52,
  [SMALL_STATE(28)] = 65,
  [SMALL_STATE(29)] = 78,
  [SMALL_STATE(30)] = 86,
  [SMALL_STATE(31)] = 94,
  [SMALL_STATE(32)] = 98,
  [SMALL_STATE(33)] = 102,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nothing, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nothing, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_punctuation, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_punctuation, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_algotype, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_algotype, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_future, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_future, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_casting, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_casting, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(27),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(31),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(32),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(28),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [232] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
