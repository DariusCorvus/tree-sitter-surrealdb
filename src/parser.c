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
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 27
#define SYMBOL_COUNT 249
#define ALIAS_COUNT 0
#define TOKEN_COUNT 221
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_function = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
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
  anon_sym_LBRACK = 153,
  anon_sym_RBRACK = 154,
  anon_sym_DASH_GT = 155,
  anon_sym_LT_DASH = 156,
  anon_sym_COMMA = 157,
  anon_sym_SEMI = 158,
  anon_sym_COLON = 159,
  anon_sym_any = 160,
  anon_sym_array = 161,
  anon_sym_bool = 162,
  anon_sym_datetime = 163,
  anon_sym_decimal = 164,
  anon_sym_duration = 165,
  anon_sym_float = 166,
  anon_sym_int = 167,
  anon_sym_number = 168,
  anon_sym_object = 169,
  anon_sym_string = 170,
  anon_sym_record = 171,
  anon_sym_geometry = 172,
  anon_sym_EDDSA = 173,
  anon_sym_ES256 = 174,
  anon_sym_ES384 = 175,
  anon_sym_ES512 = 176,
  anon_sym_HS256 = 177,
  anon_sym_HS384 = 178,
  anon_sym_HS512 = 179,
  anon_sym_PS256 = 180,
  anon_sym_PS384 = 181,
  anon_sym_PS512 = 182,
  anon_sym_RS256 = 183,
  anon_sym_RS384 = 184,
  anon_sym_RS512 = 185,
  aux_sym_function_token1 = 186,
  aux_sym_function_token2 = 187,
  anon_sym_count = 188,
  aux_sym_function_token3 = 189,
  aux_sym_function_token4 = 190,
  aux_sym_function_token5 = 191,
  aux_sym_function_token6 = 192,
  aux_sym_function_token7 = 193,
  aux_sym_function_token8 = 194,
  aux_sym_function_token9 = 195,
  aux_sym_function_token10 = 196,
  aux_sym_function_token11 = 197,
  aux_sym_function_token12 = 198,
  aux_sym_function_token13 = 199,
  aux_sym_function_token14 = 200,
  aux_sym_function_token15 = 201,
  aux_sym_function_token16 = 202,
  anon_sym_true = 203,
  anon_sym_false = 204,
  anon_sym_TRUE = 205,
  anon_sym_FALSE = 206,
  anon_sym_null = 207,
  anon_sym_NULL = 208,
  anon_sym_none = 209,
  anon_sym_NONE = 210,
  sym_variable = 211,
  sym_comment = 212,
  anon_sym_SQUOTE = 213,
  aux_sym_string_token1 = 214,
  anon_sym_BSLASH = 215,
  aux_sym_string_token2 = 216,
  anon_sym_DQUOTE = 217,
  aux_sym_string_token3 = 218,
  sym_any_char = 219,
  sym_new_line = 220,
  sym_source_file = 221,
  sym_token = 222,
  sym_scripting_function = 223,
  sym_script = 224,
  sym_script_content = 225,
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
  aux_sym_scripting_function_repeat1 = 246,
  aux_sym_string_repeat1 = 247,
  aux_sym_string_repeat2 = 248,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_function] = "function",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
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
  [sym_any_char] = "any_char",
  [sym_new_line] = "new_line",
  [sym_source_file] = "source_file",
  [sym_token] = "token",
  [sym_scripting_function] = "scripting_function",
  [sym_script] = "script",
  [sym_script_content] = "script_content",
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
  [aux_sym_scripting_function_repeat1] = "scripting_function_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [sym_any_char] = sym_any_char,
  [sym_new_line] = sym_new_line,
  [sym_source_file] = sym_source_file,
  [sym_token] = sym_token,
  [sym_scripting_function] = sym_scripting_function,
  [sym_script] = sym_script,
  [sym_script_content] = sym_script_content,
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
  [aux_sym_scripting_function_repeat1] = aux_sym_scripting_function_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_function] = {
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
  [sym_any_char] = {
    .visible = true,
    .named = true,
  },
  [sym_new_line] = {
    .visible = true,
    .named = true,
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
  [sym_script] = {
    .visible = true,
    .named = true,
  },
  [sym_script_content] = {
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
  [aux_sym_scripting_function_repeat1] = {
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
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(90);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(803);
      if (lookahead == '#') ADVANCE(796);
      if (lookahead == '$') ADVANCE(85);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(797);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '*') ADVANCE(704);
      if (lookahead == '+') ADVANCE(702);
      if (lookahead == ',') ADVANCE(737);
      if (lookahead == '-') ADVANCE(703);
      if (lookahead == '/') ADVANCE(706);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == ';') ADVANCE(738);
      if (lookahead == '<') ADVANCE(698);
      if (lookahead == '=') ADVANCE(687);
      if (lookahead == '>') ADVANCE(700);
      if (lookahead == '?') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(253);
      if (lookahead == 'B') ADVANCE(194);
      if (lookahead == 'C') ADVANCE(143);
      if (lookahead == 'D') ADVANCE(148);
      if (lookahead == 'E') ADVANCE(181);
      if (lookahead == 'F') ADVANCE(149);
      if (lookahead == 'G') ADVANCE(379);
      if (lookahead == 'H') ADVANCE(409);
      if (lookahead == 'I') ADVANCE(254);
      if (lookahead == 'K') ADVANCE(195);
      if (lookahead == 'L') ADVANCE(232);
      if (lookahead == 'M') ADVANCE(155);
      if (lookahead == 'N') ADVANCE(150);
      if (lookahead == 'O') ADVANCE(325);
      if (lookahead == 'P') ADVANCE(144);
      if (lookahead == 'R') ADVANCE(196);
      if (lookahead == 'S') ADVANCE(169);
      if (lookahead == 'T') ADVANCE(145);
      if (lookahead == 'U') ADVANCE(326);
      if (lookahead == 'V') ADVANCE(153);
      if (lookahead == 'W') ADVANCE(267);
      if (lookahead == '[') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(800);
      if (lookahead == ']') ADVANCE(734);
      if (lookahead == 'a') ADVANCE(515);
      if (lookahead == 'b') ADVANCE(526);
      if (lookahead == 'c') ADVANCE(525);
      if (lookahead == 'd') ADVANCE(454);
      if (lookahead == 'f') ADVANCE(453);
      if (lookahead == 'g') ADVANCE(484);
      if (lookahead == 'h') ADVANCE(558);
      if (lookahead == 'i') ADVANCE(521);
      if (lookahead == 'm') ADVANCE(459);
      if (lookahead == 'n') ADVANCE(528);
      if (lookahead == 'o') ADVANCE(465);
      if (lookahead == 'p') ADVANCE(456);
      if (lookahead == 'r') ADVANCE(457);
      if (lookahead == 's') ADVANCE(475);
      if (lookahead == 't') ADVANCE(498);
      if (lookahead == 'u') ADVANCE(537);
      if (lookahead == 'x') ADVANCE(705);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '|') ADVANCE(63);
      if (lookahead == '}') ADVANCE(95);
      if (lookahead == '~') ADVANCE(694);
      if (lookahead == 247) ADVANCE(707);
      if (lookahead == 8712) ADVANCE(721);
      if (lookahead == 8713) ADVANCE(724);
      if (lookahead == 8715) ADVANCE(711);
      if (lookahead == 8716) ADVANCE(713);
      if (lookahead == 8834) ADVANCE(728);
      if (lookahead == 8835) ADVANCE(717);
      if (lookahead == 8836) ADVANCE(730);
      if (lookahead == 8837) ADVANCE(719);
      if (lookahead == 8838) ADVANCE(726);
      if (lookahead == 8839) ADVANCE(715);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(591);
      if (('J' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == '/') ADVANCE(795);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(808);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '}') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(807);
      if (lookahead != 0) ADVANCE(806);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(802);
      if (lookahead != 0) ADVANCE(801);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(803);
      if (lookahead == '\\') ADVANCE(800);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(805);
      if (lookahead != 0) ADVANCE(804);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(681);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(797);
      if (lookahead == '\\') ADVANCE(800);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(799);
      if (lookahead != 0) ADVANCE(798);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(686);
      if (lookahead == '=') ADVANCE(692);
      if (lookahead == '?') ADVANCE(685);
      if (lookahead == '~') ADVANCE(696);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(81);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(82);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(75);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(77);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(78);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(689);
      if (lookahead == '~') ADVANCE(695);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(97);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(96);
      END_STATE();
    case 19:
      if (lookahead == 'I') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'N') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'N') ADVANCE(723);
      END_STATE();
    case 22:
      if (lookahead == 'O') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'T') ADVANCE(690);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(17);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 63:
      if (lookahead == '|') ADVANCE(683);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(592);
      END_STATE();
    case 65:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(775);
      END_STATE();
    case 66:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      END_STATE();
    case 67:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 68:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(776);
      END_STATE();
    case 69:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 70:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      END_STATE();
    case 71:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 72:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(767);
      END_STATE();
    case 73:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(777);
      END_STATE();
    case 74:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 75:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      END_STATE();
    case 76:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 77:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(768);
      END_STATE();
    case 78:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(778);
      END_STATE();
    case 79:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(780);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(590);
      END_STATE();
    case 84:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 85:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(793);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(794);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 88:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      if (lookahead == '`' ||
          lookahead == 10217) ADVANCE(594);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_future_token1);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_casting_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'I') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '1') ADVANCE(120);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '1') ADVANCE(121);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '1') ADVANCE(122);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '1') ADVANCE(123);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(131);
      if (lookahead == '3') ADVANCE(139);
      if (lookahead == '5') ADVANCE(115);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(756);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(759);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(762);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(765);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(132);
      if (lookahead == '3') ADVANCE(140);
      if (lookahead == '5') ADVANCE(116);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(133);
      if (lookahead == '3') ADVANCE(141);
      if (lookahead == '5') ADVANCE(117);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(134);
      if (lookahead == '3') ADVANCE(142);
      if (lookahead == '5') ADVANCE(118);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '4') ADVANCE(755);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '4') ADVANCE(758);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '4') ADVANCE(761);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '4') ADVANCE(764);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '5') ADVANCE(135);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '5') ADVANCE(136);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '5') ADVANCE(137);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '5') ADVANCE(138);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '6') ADVANCE(754);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '6') ADVANCE(757);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '6') ADVANCE(760);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '6') ADVANCE(763);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '8') ADVANCE(127);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '8') ADVANCE(128);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '8') ADVANCE(129);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '8') ADVANCE(130);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(327);
      if (lookahead == 'O') ADVANCE(294);
      if (lookahead == 'R') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(381);
      if (lookahead == 'E') ADVANCE(389);
      if (lookahead == 'S') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(168);
      if (lookahead == 'H') ADVANCE(234);
      if (lookahead == 'I') ADVANCE(323);
      if (lookahead == 'O') ADVANCE(293);
      if (lookahead == 'R') ADVANCE(156);
      if (lookahead == 'Y') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(432);
      if (lookahead == 'B') ADVANCE(597);
      if (lookahead == 'E') ADVANCE(259);
      if (lookahead == 'I') ADVANCE(256);
      if (lookahead == 'R') ADVANCE(357);
      if (lookahead == 'U') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(312);
      if (lookahead == 'E') ADVANCE(430);
      if (lookahead == 'I') ADVANCE(233);
      if (lookahead == 'O') ADVANCE(376);
      if (lookahead == 'R') ADVANCE(358);
      if (lookahead == 'U') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(322);
      if (lookahead == 'O') ADVANCE(342);
      if (lookahead == 'S') ADVANCE(596);
      if (lookahead == 'U') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(429);
      if (lookahead == 'E') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(347);
      if (lookahead == 'U') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(283);
      if (lookahead == 'E') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'B') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'B') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'C') ADVANCE(269);
      if (lookahead == 'E') ADVANCE(309);
      if (lookahead == 'I') ADVANCE(260);
      if (lookahead == 'L') ADVANCE(247);
      if (lookahead == 'P') ADVANCE(313);
      if (lookahead == 'T') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'C') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'C') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'C') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'C') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'C') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'C') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'C') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'C') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'C') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'C') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'C') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'D') ADVANCE(185);
      if (lookahead == 'L') ADVANCE(405);
      if (lookahead == 'N') ADVANCE(183);
      if (lookahead == 'S') ADVANCE(119);
      if (lookahead == 'V') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'D') ADVANCE(682);
      if (lookahead == 'Y') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'D') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'D') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'D') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'D') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'D') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'D') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'D') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'D') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'D') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'D') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'D') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(257);
      if (lookahead == 'Y') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(451);
      if (lookahead == 'V') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(315);
      if (lookahead == 'S') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(417);
      if (lookahead == 'I') ADVANCE(318);
      if (lookahead == 'O') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(391);
      if (lookahead == 'O') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(386);
      if (lookahead == 'I') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'F') ADVANCE(433);
      if (lookahead == 'L') ADVANCE(301);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == 'S') ADVANCE(660);
      if (lookahead == 'T') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'F') ADVANCE(603);
      if (lookahead == 'G') ADVANCE(348);
      if (lookahead == 'N') ADVANCE(709);
      if (lookahead == 'S') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'F') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'F') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'F') ADVANCE(360);
      if (lookahead == 'G') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'F') ADVANCE(445);
      if (lookahead == 'L') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'F') ADVANCE(277);
      if (lookahead == 'L') ADVANCE(250);
      if (lookahead == 'S') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'G') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'G') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'G') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'H') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'H') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'H') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'H') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'H') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'H') ADVANCE(157);
      if (lookahead == 'W') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'H') ADVANCE(236);
      if (lookahead == 'O') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'I') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'I') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'I') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'I') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'I') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'I') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'I') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'I') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'I') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'I') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'I') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'I') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'I') ADVANCE(335);
      if (lookahead == 'U') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'I') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'I') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'I') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'I') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'I') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'I') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'I') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'I') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'I') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'I') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'K') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(316);
      if (lookahead == 'M') ADVANCE(324);
      if (lookahead == 'N') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(295);
      if (lookahead == 'N') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(296);
      if (lookahead == 'M') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(314);
      if (lookahead == 'M') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(300);
      if (lookahead == 'N') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(248);
      if (lookahead == 'S') ADVANCE(403);
      if (lookahead == 'T') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(160);
      if (lookahead == 'M') ADVANCE(355);
      if (lookahead == 'T') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(164);
      if (lookahead == 'U') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'M') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'M') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'M') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'M') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'M') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'M') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'M') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'M') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'N') ADVANCE(628);
      if (lookahead == 'R') ADVANCE(684);
      if (lookahead == 'U') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'N') ADVANCE(270);
      if (lookahead == 'P') ADVANCE(193);
      if (lookahead == 'S') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'N') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'N') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'N') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'N') ADVANCE(669);
      if (lookahead == 'R') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'N') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'N') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'N') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'N') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'N') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'N') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'N') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'N') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'N') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'N') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'N') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'N') ADVANCE(201);
      if (lookahead == 'T') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'N') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'N') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'N') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'N') ADVANCE(229);
      if (lookahead == 'T') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'N') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'N') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'N') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'N') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'N') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'N') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'O') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'O') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'O') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'O') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'O') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'O') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'O') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'O') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'O') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'O') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'O') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'O') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'O') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'O') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'P') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'P') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'P') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'P') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'P') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'P') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'P') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'P') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'Q') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'R') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'R') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'R') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'R') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'R') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'R') ADVANCE(151);
      if (lookahead == 'S') ADVANCE(392);
      if (lookahead == 'T') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'R') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'R') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'R') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'R') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'R') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'R') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'R') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'R') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'R') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'R') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'U') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'U') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'U') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'U') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'U') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'U') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'V') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'X') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'Y') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'Y') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'a') ADVANCE(506);
      if (lookahead == 'l') ADVANCE(534);
      if (lookahead == 'n') ADVANCE(576);
      if (lookahead == 'u') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'a') ADVANCE(557);
      if (lookahead == 'e') ADVANCE(467);
      if (lookahead == 'u') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'a') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'a') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'a') ADVANCE(520);
      if (lookahead == 'e') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'a') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == 'e') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'a') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'a') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'a') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'a') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'a') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'b') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'b') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'c') ADVANCE(499);
      if (lookahead == 'l') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'c') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'c') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'c') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'c') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(511);
      if (lookahead == 'l') ADVANCE(487);
      if (lookahead == 't') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(462);
      if (lookahead == 'y') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'g') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'h') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(513);
      if (lookahead == 'r') ADVANCE(570);
      if (lookahead == 'y') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'j') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'l') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'l') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'l') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'l') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'l') ADVANCE(508);
      if (lookahead == 'm') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'l') ADVANCE(492);
      if (lookahead == 's') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'm') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'm') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'm') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(571);
      if (lookahead == 'r') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(551);
      if (lookahead == 's') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(569);
      if (lookahead == 'r') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(522);
      if (lookahead == 'u') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'p') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'p') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'p') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'p') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'p') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'r') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'r') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'r') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'r') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'r') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'r') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'r') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 's') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 's') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 's') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 't') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 't') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 't') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 't') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 't') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 't') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 't') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 't') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 't') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 't') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 't') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 't') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 't') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 't') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 't') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 't') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 't') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 't') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'u') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'u') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'y') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'y') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'y') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == 'm') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_duration_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 's' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(590);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 's' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(591);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(592);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_record_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_record_token2);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_USE);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_NS);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_DB);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_LET);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_BEGIN);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_TRANSACTION);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_CANCEL);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_COMMIT);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_THEN);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_SELECT);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_WHERE);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_SPLIT);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_GROUP);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_BY);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_ORDER);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_COLLATE);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_NUMERIC);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_ASC);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_DESC);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_LIMIT);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_START);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_FETCH);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_TIMEOUT);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_PARALLEL);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_INSERT);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_IGNORE);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_INTO);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_VALUES);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_ON);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_DUPLICATE);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_KEY);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_UPDATE);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_CREATE);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_CONTENT);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_RETURN);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_BEFORE);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_AFTER);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_DIFF);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_MERGE);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_RELATE);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_DEFINE);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_NAMESPACE);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_DATABASE);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_LOGIN);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_PASSWORD);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_PASSHASH);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_TOKEN);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_SCOPE);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_TYPE);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_VALUE);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_SESSION);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_SIGNUP);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_SIGNIN);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_TABLE);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_DROP);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_SCHEMAFULL);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_SCHEMALESS);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_AS);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'C') ADVANCE(617);
      if (lookahead == 'S') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_PERMISSIONS);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_FULL);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_select);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_update);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_create);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_EVENT);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_WHEN);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_ASSERT);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_INDEX);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_FIELDS);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_COLUMNS);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_UNIQUE);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_REMOVE);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_SLEEP);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_INFO);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_KV);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_FUNCTION);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_PARAM);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_AND);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_OR);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'D') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_QMARK_COLON);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(691);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_IS);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_ISNOT);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_QMARK_EQ);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_QMARK_TILDE);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_STAR_TILDE);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(736);
      if (lookahead == '=') ADVANCE(699);
      if (lookahead == 'b') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(701);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(796);
      if (lookahead == '>') ADVANCE(735);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(708);
      if (lookahead == '=') ADVANCE(693);
      if (lookahead == '~') ADVANCE(697);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(796);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'D') ADVANCE(200);
      if (lookahead == 'F') ADVANCE(354);
      if (lookahead == 'S') ADVANCE(252);
      if (lookahead == 'T') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_CONTAINS);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(308);
      if (lookahead == 'N') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_CONTAINSNOT);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_CONTAINSALL);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_CONTAINSANY);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_CONTAINSNONE);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_INSIDE);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_NOTINSIDE);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_NOTIN);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_ALLINSIDE);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_ANYINSIDE);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_NONEINSIDE);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_OUTSIDE);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_INTERSECTS);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_array);
      if (lookahead == ':') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_duration);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_number);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_object);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == ':') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_record);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_geometry);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_EDDSA);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_ES256);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_ES384);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_ES512);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_HS256);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_HS384);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_HS512);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_PS256);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_PS384);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_PS512);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_RS256);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_RS384);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_RS512);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_function_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_function_token2);
      if (lookahead == ':') ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(767);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_function_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(768);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_count);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_function_token3);
      if (lookahead == ':') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_function_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(771);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_function_token4);
      if (lookahead == ':') ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_function_token4);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_function_token5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_function_token6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(775);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_function_token7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(776);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_function_token8);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_function_token9);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(778);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_function_token10);
      if (lookahead == ':') ADVANCE(10);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_function_token10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(780);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_function_token11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_function_token13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_function_token14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_function_token15);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_NONE);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'I') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '.') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(793);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '.') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(794);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(796);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(798);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(801);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(804);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_any_char);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_any_char);
      if (lookahead == '\n') ADVANCE(808);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(806);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_new_line);
      if (lookahead == '\n') ADVANCE(808);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(807);
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
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [sym_source_file] = STATE(45),
    [sym_token] = STATE(3),
    [sym_scripting_function] = STATE(20),
    [sym_future] = STATE(20),
    [sym_casting] = STATE(20),
    [sym_property] = STATE(20),
    [sym_identifier] = STATE(20),
    [sym_duration] = STATE(20),
    [sym_constant] = STATE(20),
    [sym_number] = STATE(20),
    [sym_record] = STATE(20),
    [sym_keyword] = STATE(20),
    [sym_operator] = STATE(20),
    [sym_punctuation] = STATE(20),
    [sym_delimiter] = STATE(20),
    [sym_type] = STATE(20),
    [sym_datatype] = STATE(4),
    [sym_algotype] = STATE(4),
    [sym_function] = STATE(20),
    [sym_bool] = STATE(20),
    [sym_nothing] = STATE(20),
    [sym_string] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(7),
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
    [sym_token] = STATE(2),
    [sym_scripting_function] = STATE(20),
    [sym_future] = STATE(20),
    [sym_casting] = STATE(20),
    [sym_property] = STATE(20),
    [sym_identifier] = STATE(20),
    [sym_duration] = STATE(20),
    [sym_constant] = STATE(20),
    [sym_number] = STATE(20),
    [sym_record] = STATE(20),
    [sym_keyword] = STATE(20),
    [sym_operator] = STATE(20),
    [sym_punctuation] = STATE(20),
    [sym_delimiter] = STATE(20),
    [sym_type] = STATE(20),
    [sym_datatype] = STATE(4),
    [sym_algotype] = STATE(4),
    [sym_function] = STATE(20),
    [sym_bool] = STATE(20),
    [sym_nothing] = STATE(20),
    [sym_string] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_function] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(58),
    [anon_sym_LBRACE] = ACTIONS(58),
    [anon_sym_RBRACE] = ACTIONS(58),
    [aux_sym_future_token1] = ACTIONS(61),
    [aux_sym_casting_token1] = ACTIONS(64),
    [aux_sym_property_token1] = ACTIONS(67),
    [aux_sym_identifier_token1] = ACTIONS(70),
    [aux_sym_duration_token1] = ACTIONS(73),
    [aux_sym_constant_token1] = ACTIONS(76),
    [aux_sym_number_token1] = ACTIONS(79),
    [aux_sym_record_token1] = ACTIONS(82),
    [aux_sym_record_token2] = ACTIONS(82),
    [anon_sym_USE] = ACTIONS(85),
    [anon_sym_NS] = ACTIONS(85),
    [anon_sym_DB] = ACTIONS(85),
    [anon_sym_LET] = ACTIONS(85),
    [anon_sym_BEGIN] = ACTIONS(85),
    [anon_sym_TRANSACTION] = ACTIONS(85),
    [anon_sym_CANCEL] = ACTIONS(85),
    [anon_sym_COMMIT] = ACTIONS(85),
    [anon_sym_IF] = ACTIONS(85),
    [anon_sym_ELSE] = ACTIONS(85),
    [anon_sym_THEN] = ACTIONS(85),
    [anon_sym_END] = ACTIONS(85),
    [anon_sym_SELECT] = ACTIONS(85),
    [anon_sym_FROM] = ACTIONS(85),
    [anon_sym_WHERE] = ACTIONS(85),
    [anon_sym_SPLIT] = ACTIONS(85),
    [anon_sym_AT] = ACTIONS(85),
    [anon_sym_GROUP] = ACTIONS(85),
    [anon_sym_BY] = ACTIONS(85),
    [anon_sym_ORDER] = ACTIONS(85),
    [anon_sym_COLLATE] = ACTIONS(85),
    [anon_sym_NUMERIC] = ACTIONS(85),
    [anon_sym_ASC] = ACTIONS(85),
    [anon_sym_DESC] = ACTIONS(85),
    [anon_sym_LIMIT] = ACTIONS(85),
    [anon_sym_START] = ACTIONS(85),
    [anon_sym_FETCH] = ACTIONS(85),
    [anon_sym_TIMEOUT] = ACTIONS(85),
    [anon_sym_PARALLEL] = ACTIONS(85),
    [anon_sym_INSERT] = ACTIONS(85),
    [anon_sym_IGNORE] = ACTIONS(85),
    [anon_sym_INTO] = ACTIONS(85),
    [anon_sym_VALUES] = ACTIONS(85),
    [anon_sym_ON] = ACTIONS(85),
    [anon_sym_DUPLICATE] = ACTIONS(85),
    [anon_sym_KEY] = ACTIONS(85),
    [anon_sym_UPDATE] = ACTIONS(85),
    [anon_sym_CREATE] = ACTIONS(85),
    [anon_sym_CONTENT] = ACTIONS(85),
    [anon_sym_SET] = ACTIONS(85),
    [anon_sym_RETURN] = ACTIONS(85),
    [anon_sym_BEFORE] = ACTIONS(85),
    [anon_sym_AFTER] = ACTIONS(85),
    [anon_sym_DIFF] = ACTIONS(85),
    [anon_sym_MERGE] = ACTIONS(85),
    [anon_sym_PATCH] = ACTIONS(85),
    [anon_sym_RELATE] = ACTIONS(85),
    [anon_sym_DELETE] = ACTIONS(85),
    [anon_sym_DEFINE] = ACTIONS(85),
    [anon_sym_NAMESPACE] = ACTIONS(85),
    [anon_sym_DATABASE] = ACTIONS(85),
    [anon_sym_LOGIN] = ACTIONS(85),
    [anon_sym_PASSWORD] = ACTIONS(85),
    [anon_sym_PASSHASH] = ACTIONS(85),
    [anon_sym_TOKEN] = ACTIONS(85),
    [anon_sym_SCOPE] = ACTIONS(85),
    [anon_sym_TYPE] = ACTIONS(85),
    [anon_sym_VALUE] = ACTIONS(85),
    [anon_sym_SESSION] = ACTIONS(85),
    [anon_sym_SIGNUP] = ACTIONS(85),
    [anon_sym_SIGNIN] = ACTIONS(85),
    [anon_sym_TABLE] = ACTIONS(85),
    [anon_sym_DROP] = ACTIONS(85),
    [anon_sym_SCHEMAFULL] = ACTIONS(85),
    [anon_sym_SCHEMALESS] = ACTIONS(85),
    [anon_sym_AS] = ACTIONS(85),
    [anon_sym_PERMISSIONS] = ACTIONS(85),
    [anon_sym_FULL] = ACTIONS(85),
    [anon_sym_FOR] = ACTIONS(85),
    [anon_sym_select] = ACTIONS(85),
    [anon_sym_update] = ACTIONS(85),
    [anon_sym_create] = ACTIONS(85),
    [anon_sym_delete] = ACTIONS(85),
    [anon_sym_EVENT] = ACTIONS(85),
    [anon_sym_WHEN] = ACTIONS(85),
    [anon_sym_ASSERT] = ACTIONS(85),
    [anon_sym_INDEX] = ACTIONS(85),
    [anon_sym_FIELDS] = ACTIONS(85),
    [anon_sym_COLUMNS] = ACTIONS(85),
    [anon_sym_UNIQUE] = ACTIONS(85),
    [anon_sym_REMOVE] = ACTIONS(85),
    [anon_sym_SLEEP] = ACTIONS(85),
    [anon_sym_INFO] = ACTIONS(85),
    [anon_sym_KV] = ACTIONS(85),
    [anon_sym_FUNCTION] = ACTIONS(85),
    [anon_sym_PARAM] = ACTIONS(85),
    [anon_sym_AMP_AMP] = ACTIONS(88),
    [anon_sym_AND] = ACTIONS(91),
    [anon_sym_PIPE_PIPE] = ACTIONS(88),
    [anon_sym_OR] = ACTIONS(91),
    [anon_sym_QMARK_QMARK] = ACTIONS(88),
    [anon_sym_QMARK_COLON] = ACTIONS(88),
    [anon_sym_EQ] = ACTIONS(91),
    [anon_sym_IS] = ACTIONS(91),
    [anon_sym_BANG_EQ] = ACTIONS(88),
    [anon_sym_ISNOT] = ACTIONS(88),
    [anon_sym_EQ_EQ] = ACTIONS(88),
    [anon_sym_QMARK_EQ] = ACTIONS(88),
    [anon_sym_STAR_EQ] = ACTIONS(88),
    [anon_sym_TILDE] = ACTIONS(88),
    [anon_sym_BANG_TILDE] = ACTIONS(88),
    [anon_sym_QMARK_TILDE] = ACTIONS(88),
    [anon_sym_STAR_TILDE] = ACTIONS(88),
    [anon_sym_LT] = ACTIONS(91),
    [anon_sym_LT_EQ] = ACTIONS(88),
    [anon_sym_GT] = ACTIONS(91),
    [anon_sym_GT_EQ] = ACTIONS(88),
    [anon_sym_PLUS] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(91),
    [anon_sym_STAR] = ACTIONS(91),
    [anon_sym_x] = ACTIONS(91),
    [anon_sym_SLASH] = ACTIONS(91),
    [anon_sym_] = ACTIONS(88),
    [anon_sym_STAR_STAR] = ACTIONS(88),
    [anon_sym_IN] = ACTIONS(91),
    [anon_sym_CONTAINS] = ACTIONS(91),
    [anon_sym_2] = ACTIONS(88),
    [anon_sym_CONTAINSNOT] = ACTIONS(91),
    [anon_sym_3] = ACTIONS(88),
    [anon_sym_CONTAINSALL] = ACTIONS(91),
    [anon_sym_4] = ACTIONS(88),
    [anon_sym_CONTAINSANY] = ACTIONS(91),
    [anon_sym_5] = ACTIONS(88),
    [anon_sym_CONTAINSNONE] = ACTIONS(91),
    [anon_sym_6] = ACTIONS(88),
    [anon_sym_INSIDE] = ACTIONS(91),
    [anon_sym_7] = ACTIONS(88),
    [anon_sym_NOTINSIDE] = ACTIONS(91),
    [anon_sym_NOTIN] = ACTIONS(88),
    [anon_sym_8] = ACTIONS(88),
    [anon_sym_ALLINSIDE] = ACTIONS(91),
    [anon_sym_9] = ACTIONS(88),
    [anon_sym_ANYINSIDE] = ACTIONS(91),
    [anon_sym_10] = ACTIONS(88),
    [anon_sym_NONEINSIDE] = ACTIONS(91),
    [anon_sym_11] = ACTIONS(88),
    [anon_sym_OUTSIDE] = ACTIONS(91),
    [anon_sym_INTERSECTS] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(58),
    [anon_sym_RBRACK] = ACTIONS(58),
    [anon_sym_DASH_GT] = ACTIONS(58),
    [anon_sym_LT_DASH] = ACTIONS(58),
    [anon_sym_COMMA] = ACTIONS(94),
    [anon_sym_SEMI] = ACTIONS(94),
    [anon_sym_COLON] = ACTIONS(94),
    [anon_sym_any] = ACTIONS(97),
    [anon_sym_array] = ACTIONS(97),
    [anon_sym_bool] = ACTIONS(97),
    [anon_sym_datetime] = ACTIONS(97),
    [anon_sym_decimal] = ACTIONS(97),
    [anon_sym_duration] = ACTIONS(97),
    [anon_sym_float] = ACTIONS(97),
    [anon_sym_int] = ACTIONS(97),
    [anon_sym_number] = ACTIONS(97),
    [anon_sym_object] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(97),
    [anon_sym_record] = ACTIONS(97),
    [anon_sym_geometry] = ACTIONS(97),
    [anon_sym_EDDSA] = ACTIONS(100),
    [anon_sym_ES256] = ACTIONS(100),
    [anon_sym_ES384] = ACTIONS(100),
    [anon_sym_ES512] = ACTIONS(100),
    [anon_sym_HS256] = ACTIONS(100),
    [anon_sym_HS384] = ACTIONS(100),
    [anon_sym_HS512] = ACTIONS(100),
    [anon_sym_PS256] = ACTIONS(100),
    [anon_sym_PS384] = ACTIONS(100),
    [anon_sym_PS512] = ACTIONS(100),
    [anon_sym_RS256] = ACTIONS(100),
    [anon_sym_RS384] = ACTIONS(100),
    [anon_sym_RS512] = ACTIONS(100),
    [aux_sym_function_token1] = ACTIONS(103),
    [aux_sym_function_token2] = ACTIONS(103),
    [anon_sym_count] = ACTIONS(106),
    [aux_sym_function_token3] = ACTIONS(103),
    [aux_sym_function_token4] = ACTIONS(103),
    [aux_sym_function_token5] = ACTIONS(103),
    [aux_sym_function_token6] = ACTIONS(103),
    [aux_sym_function_token7] = ACTIONS(103),
    [aux_sym_function_token8] = ACTIONS(103),
    [aux_sym_function_token9] = ACTIONS(103),
    [aux_sym_function_token10] = ACTIONS(106),
    [aux_sym_function_token11] = ACTIONS(103),
    [aux_sym_function_token12] = ACTIONS(106),
    [aux_sym_function_token13] = ACTIONS(103),
    [aux_sym_function_token14] = ACTIONS(103),
    [aux_sym_function_token15] = ACTIONS(103),
    [aux_sym_function_token16] = ACTIONS(106),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [anon_sym_TRUE] = ACTIONS(109),
    [anon_sym_FALSE] = ACTIONS(109),
    [anon_sym_null] = ACTIONS(112),
    [anon_sym_NULL] = ACTIONS(112),
    [anon_sym_none] = ACTIONS(112),
    [anon_sym_NONE] = ACTIONS(112),
    [sym_variable] = ACTIONS(115),
    [sym_comment] = ACTIONS(118),
    [anon_sym_SQUOTE] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(124),
  },
  [3] = {
    [sym_token] = STATE(2),
    [sym_scripting_function] = STATE(20),
    [sym_future] = STATE(20),
    [sym_casting] = STATE(20),
    [sym_property] = STATE(20),
    [sym_identifier] = STATE(20),
    [sym_duration] = STATE(20),
    [sym_constant] = STATE(20),
    [sym_number] = STATE(20),
    [sym_record] = STATE(20),
    [sym_keyword] = STATE(20),
    [sym_operator] = STATE(20),
    [sym_punctuation] = STATE(20),
    [sym_delimiter] = STATE(20),
    [sym_type] = STATE(20),
    [sym_datatype] = STATE(4),
    [sym_algotype] = STATE(4),
    [sym_function] = STATE(20),
    [sym_bool] = STATE(20),
    [sym_nothing] = STATE(20),
    [sym_string] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_function] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(7),
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
    [sym_comment] = ACTIONS(129),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_function] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(131),
    [aux_sym_future_token1] = ACTIONS(131),
    [aux_sym_casting_token1] = ACTIONS(131),
    [aux_sym_property_token1] = ACTIONS(133),
    [aux_sym_identifier_token1] = ACTIONS(133),
    [aux_sym_duration_token1] = ACTIONS(133),
    [aux_sym_constant_token1] = ACTIONS(131),
    [aux_sym_number_token1] = ACTIONS(133),
    [aux_sym_record_token1] = ACTIONS(131),
    [aux_sym_record_token2] = ACTIONS(131),
    [anon_sym_USE] = ACTIONS(133),
    [anon_sym_NS] = ACTIONS(133),
    [anon_sym_DB] = ACTIONS(133),
    [anon_sym_LET] = ACTIONS(133),
    [anon_sym_BEGIN] = ACTIONS(133),
    [anon_sym_TRANSACTION] = ACTIONS(133),
    [anon_sym_CANCEL] = ACTIONS(133),
    [anon_sym_COMMIT] = ACTIONS(133),
    [anon_sym_IF] = ACTIONS(133),
    [anon_sym_ELSE] = ACTIONS(133),
    [anon_sym_THEN] = ACTIONS(133),
    [anon_sym_END] = ACTIONS(133),
    [anon_sym_SELECT] = ACTIONS(133),
    [anon_sym_FROM] = ACTIONS(133),
    [anon_sym_WHERE] = ACTIONS(133),
    [anon_sym_SPLIT] = ACTIONS(133),
    [anon_sym_AT] = ACTIONS(133),
    [anon_sym_GROUP] = ACTIONS(133),
    [anon_sym_BY] = ACTIONS(133),
    [anon_sym_ORDER] = ACTIONS(133),
    [anon_sym_COLLATE] = ACTIONS(133),
    [anon_sym_NUMERIC] = ACTIONS(133),
    [anon_sym_ASC] = ACTIONS(133),
    [anon_sym_DESC] = ACTIONS(133),
    [anon_sym_LIMIT] = ACTIONS(133),
    [anon_sym_START] = ACTIONS(133),
    [anon_sym_FETCH] = ACTIONS(133),
    [anon_sym_TIMEOUT] = ACTIONS(133),
    [anon_sym_PARALLEL] = ACTIONS(133),
    [anon_sym_INSERT] = ACTIONS(133),
    [anon_sym_IGNORE] = ACTIONS(133),
    [anon_sym_INTO] = ACTIONS(133),
    [anon_sym_VALUES] = ACTIONS(133),
    [anon_sym_ON] = ACTIONS(133),
    [anon_sym_DUPLICATE] = ACTIONS(133),
    [anon_sym_KEY] = ACTIONS(133),
    [anon_sym_UPDATE] = ACTIONS(133),
    [anon_sym_CREATE] = ACTIONS(133),
    [anon_sym_CONTENT] = ACTIONS(133),
    [anon_sym_SET] = ACTIONS(133),
    [anon_sym_RETURN] = ACTIONS(133),
    [anon_sym_BEFORE] = ACTIONS(133),
    [anon_sym_AFTER] = ACTIONS(133),
    [anon_sym_DIFF] = ACTIONS(133),
    [anon_sym_MERGE] = ACTIONS(133),
    [anon_sym_PATCH] = ACTIONS(133),
    [anon_sym_RELATE] = ACTIONS(133),
    [anon_sym_DELETE] = ACTIONS(133),
    [anon_sym_DEFINE] = ACTIONS(133),
    [anon_sym_NAMESPACE] = ACTIONS(133),
    [anon_sym_DATABASE] = ACTIONS(133),
    [anon_sym_LOGIN] = ACTIONS(133),
    [anon_sym_PASSWORD] = ACTIONS(133),
    [anon_sym_PASSHASH] = ACTIONS(133),
    [anon_sym_TOKEN] = ACTIONS(133),
    [anon_sym_SCOPE] = ACTIONS(133),
    [anon_sym_TYPE] = ACTIONS(133),
    [anon_sym_VALUE] = ACTIONS(133),
    [anon_sym_SESSION] = ACTIONS(133),
    [anon_sym_SIGNUP] = ACTIONS(133),
    [anon_sym_SIGNIN] = ACTIONS(133),
    [anon_sym_TABLE] = ACTIONS(133),
    [anon_sym_DROP] = ACTIONS(133),
    [anon_sym_SCHEMAFULL] = ACTIONS(133),
    [anon_sym_SCHEMALESS] = ACTIONS(133),
    [anon_sym_AS] = ACTIONS(133),
    [anon_sym_PERMISSIONS] = ACTIONS(133),
    [anon_sym_FULL] = ACTIONS(133),
    [anon_sym_FOR] = ACTIONS(133),
    [anon_sym_select] = ACTIONS(133),
    [anon_sym_update] = ACTIONS(133),
    [anon_sym_create] = ACTIONS(133),
    [anon_sym_delete] = ACTIONS(133),
    [anon_sym_EVENT] = ACTIONS(133),
    [anon_sym_WHEN] = ACTIONS(133),
    [anon_sym_ASSERT] = ACTIONS(133),
    [anon_sym_INDEX] = ACTIONS(133),
    [anon_sym_FIELDS] = ACTIONS(133),
    [anon_sym_COLUMNS] = ACTIONS(133),
    [anon_sym_UNIQUE] = ACTIONS(133),
    [anon_sym_REMOVE] = ACTIONS(133),
    [anon_sym_SLEEP] = ACTIONS(133),
    [anon_sym_INFO] = ACTIONS(133),
    [anon_sym_KV] = ACTIONS(133),
    [anon_sym_FUNCTION] = ACTIONS(133),
    [anon_sym_PARAM] = ACTIONS(133),
    [anon_sym_AMP_AMP] = ACTIONS(131),
    [anon_sym_AND] = ACTIONS(133),
    [anon_sym_PIPE_PIPE] = ACTIONS(131),
    [anon_sym_OR] = ACTIONS(133),
    [anon_sym_QMARK_QMARK] = ACTIONS(131),
    [anon_sym_QMARK_COLON] = ACTIONS(131),
    [anon_sym_EQ] = ACTIONS(133),
    [anon_sym_IS] = ACTIONS(133),
    [anon_sym_BANG_EQ] = ACTIONS(131),
    [anon_sym_ISNOT] = ACTIONS(131),
    [anon_sym_EQ_EQ] = ACTIONS(131),
    [anon_sym_QMARK_EQ] = ACTIONS(131),
    [anon_sym_STAR_EQ] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [anon_sym_BANG_TILDE] = ACTIONS(131),
    [anon_sym_QMARK_TILDE] = ACTIONS(131),
    [anon_sym_STAR_TILDE] = ACTIONS(131),
    [anon_sym_LT] = ACTIONS(133),
    [anon_sym_LT_EQ] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(133),
    [anon_sym_GT_EQ] = ACTIONS(131),
    [anon_sym_PLUS] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(133),
    [anon_sym_STAR] = ACTIONS(133),
    [anon_sym_x] = ACTIONS(133),
    [anon_sym_SLASH] = ACTIONS(133),
    [anon_sym_] = ACTIONS(131),
    [anon_sym_STAR_STAR] = ACTIONS(131),
    [anon_sym_IN] = ACTIONS(133),
    [anon_sym_CONTAINS] = ACTIONS(133),
    [anon_sym_2] = ACTIONS(131),
    [anon_sym_CONTAINSNOT] = ACTIONS(133),
    [anon_sym_3] = ACTIONS(131),
    [anon_sym_CONTAINSALL] = ACTIONS(133),
    [anon_sym_4] = ACTIONS(131),
    [anon_sym_CONTAINSANY] = ACTIONS(133),
    [anon_sym_5] = ACTIONS(131),
    [anon_sym_CONTAINSNONE] = ACTIONS(133),
    [anon_sym_6] = ACTIONS(131),
    [anon_sym_INSIDE] = ACTIONS(133),
    [anon_sym_7] = ACTIONS(131),
    [anon_sym_NOTINSIDE] = ACTIONS(133),
    [anon_sym_NOTIN] = ACTIONS(131),
    [anon_sym_8] = ACTIONS(131),
    [anon_sym_ALLINSIDE] = ACTIONS(133),
    [anon_sym_9] = ACTIONS(131),
    [anon_sym_ANYINSIDE] = ACTIONS(133),
    [anon_sym_10] = ACTIONS(131),
    [anon_sym_NONEINSIDE] = ACTIONS(133),
    [anon_sym_11] = ACTIONS(131),
    [anon_sym_OUTSIDE] = ACTIONS(133),
    [anon_sym_INTERSECTS] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(131),
    [anon_sym_RBRACK] = ACTIONS(131),
    [anon_sym_DASH_GT] = ACTIONS(131),
    [anon_sym_LT_DASH] = ACTIONS(131),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_SEMI] = ACTIONS(131),
    [anon_sym_COLON] = ACTIONS(131),
    [anon_sym_any] = ACTIONS(133),
    [anon_sym_array] = ACTIONS(133),
    [anon_sym_bool] = ACTIONS(133),
    [anon_sym_datetime] = ACTIONS(133),
    [anon_sym_decimal] = ACTIONS(133),
    [anon_sym_duration] = ACTIONS(133),
    [anon_sym_float] = ACTIONS(133),
    [anon_sym_int] = ACTIONS(133),
    [anon_sym_number] = ACTIONS(133),
    [anon_sym_object] = ACTIONS(133),
    [anon_sym_string] = ACTIONS(133),
    [anon_sym_record] = ACTIONS(133),
    [anon_sym_geometry] = ACTIONS(133),
    [anon_sym_EDDSA] = ACTIONS(133),
    [anon_sym_ES256] = ACTIONS(133),
    [anon_sym_ES384] = ACTIONS(133),
    [anon_sym_ES512] = ACTIONS(133),
    [anon_sym_HS256] = ACTIONS(133),
    [anon_sym_HS384] = ACTIONS(133),
    [anon_sym_HS512] = ACTIONS(133),
    [anon_sym_PS256] = ACTIONS(133),
    [anon_sym_PS384] = ACTIONS(133),
    [anon_sym_PS512] = ACTIONS(133),
    [anon_sym_RS256] = ACTIONS(133),
    [anon_sym_RS384] = ACTIONS(133),
    [anon_sym_RS512] = ACTIONS(133),
    [aux_sym_function_token1] = ACTIONS(131),
    [aux_sym_function_token2] = ACTIONS(131),
    [anon_sym_count] = ACTIONS(133),
    [aux_sym_function_token3] = ACTIONS(131),
    [aux_sym_function_token4] = ACTIONS(131),
    [aux_sym_function_token5] = ACTIONS(131),
    [aux_sym_function_token6] = ACTIONS(131),
    [aux_sym_function_token7] = ACTIONS(131),
    [aux_sym_function_token8] = ACTIONS(131),
    [aux_sym_function_token9] = ACTIONS(131),
    [aux_sym_function_token10] = ACTIONS(133),
    [aux_sym_function_token11] = ACTIONS(131),
    [aux_sym_function_token12] = ACTIONS(133),
    [aux_sym_function_token13] = ACTIONS(131),
    [aux_sym_function_token14] = ACTIONS(131),
    [aux_sym_function_token15] = ACTIONS(131),
    [aux_sym_function_token16] = ACTIONS(133),
    [anon_sym_true] = ACTIONS(133),
    [anon_sym_false] = ACTIONS(133),
    [anon_sym_TRUE] = ACTIONS(133),
    [anon_sym_FALSE] = ACTIONS(133),
    [anon_sym_null] = ACTIONS(133),
    [anon_sym_NULL] = ACTIONS(133),
    [anon_sym_none] = ACTIONS(133),
    [anon_sym_NONE] = ACTIONS(133),
    [sym_variable] = ACTIONS(131),
    [sym_comment] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(131),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [anon_sym_function] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(135),
    [anon_sym_RPAREN] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(135),
    [anon_sym_RBRACE] = ACTIONS(135),
    [aux_sym_future_token1] = ACTIONS(135),
    [aux_sym_casting_token1] = ACTIONS(135),
    [aux_sym_property_token1] = ACTIONS(137),
    [aux_sym_identifier_token1] = ACTIONS(137),
    [aux_sym_duration_token1] = ACTIONS(137),
    [aux_sym_constant_token1] = ACTIONS(135),
    [aux_sym_number_token1] = ACTIONS(137),
    [aux_sym_record_token1] = ACTIONS(135),
    [aux_sym_record_token2] = ACTIONS(135),
    [anon_sym_USE] = ACTIONS(137),
    [anon_sym_NS] = ACTIONS(137),
    [anon_sym_DB] = ACTIONS(137),
    [anon_sym_LET] = ACTIONS(137),
    [anon_sym_BEGIN] = ACTIONS(137),
    [anon_sym_TRANSACTION] = ACTIONS(137),
    [anon_sym_CANCEL] = ACTIONS(137),
    [anon_sym_COMMIT] = ACTIONS(137),
    [anon_sym_IF] = ACTIONS(137),
    [anon_sym_ELSE] = ACTIONS(137),
    [anon_sym_THEN] = ACTIONS(137),
    [anon_sym_END] = ACTIONS(137),
    [anon_sym_SELECT] = ACTIONS(137),
    [anon_sym_FROM] = ACTIONS(137),
    [anon_sym_WHERE] = ACTIONS(137),
    [anon_sym_SPLIT] = ACTIONS(137),
    [anon_sym_AT] = ACTIONS(137),
    [anon_sym_GROUP] = ACTIONS(137),
    [anon_sym_BY] = ACTIONS(137),
    [anon_sym_ORDER] = ACTIONS(137),
    [anon_sym_COLLATE] = ACTIONS(137),
    [anon_sym_NUMERIC] = ACTIONS(137),
    [anon_sym_ASC] = ACTIONS(137),
    [anon_sym_DESC] = ACTIONS(137),
    [anon_sym_LIMIT] = ACTIONS(137),
    [anon_sym_START] = ACTIONS(137),
    [anon_sym_FETCH] = ACTIONS(137),
    [anon_sym_TIMEOUT] = ACTIONS(137),
    [anon_sym_PARALLEL] = ACTIONS(137),
    [anon_sym_INSERT] = ACTIONS(137),
    [anon_sym_IGNORE] = ACTIONS(137),
    [anon_sym_INTO] = ACTIONS(137),
    [anon_sym_VALUES] = ACTIONS(137),
    [anon_sym_ON] = ACTIONS(137),
    [anon_sym_DUPLICATE] = ACTIONS(137),
    [anon_sym_KEY] = ACTIONS(137),
    [anon_sym_UPDATE] = ACTIONS(137),
    [anon_sym_CREATE] = ACTIONS(137),
    [anon_sym_CONTENT] = ACTIONS(137),
    [anon_sym_SET] = ACTIONS(137),
    [anon_sym_RETURN] = ACTIONS(137),
    [anon_sym_BEFORE] = ACTIONS(137),
    [anon_sym_AFTER] = ACTIONS(137),
    [anon_sym_DIFF] = ACTIONS(137),
    [anon_sym_MERGE] = ACTIONS(137),
    [anon_sym_PATCH] = ACTIONS(137),
    [anon_sym_RELATE] = ACTIONS(137),
    [anon_sym_DELETE] = ACTIONS(137),
    [anon_sym_DEFINE] = ACTIONS(137),
    [anon_sym_NAMESPACE] = ACTIONS(137),
    [anon_sym_DATABASE] = ACTIONS(137),
    [anon_sym_LOGIN] = ACTIONS(137),
    [anon_sym_PASSWORD] = ACTIONS(137),
    [anon_sym_PASSHASH] = ACTIONS(137),
    [anon_sym_TOKEN] = ACTIONS(137),
    [anon_sym_SCOPE] = ACTIONS(137),
    [anon_sym_TYPE] = ACTIONS(137),
    [anon_sym_VALUE] = ACTIONS(137),
    [anon_sym_SESSION] = ACTIONS(137),
    [anon_sym_SIGNUP] = ACTIONS(137),
    [anon_sym_SIGNIN] = ACTIONS(137),
    [anon_sym_TABLE] = ACTIONS(137),
    [anon_sym_DROP] = ACTIONS(137),
    [anon_sym_SCHEMAFULL] = ACTIONS(137),
    [anon_sym_SCHEMALESS] = ACTIONS(137),
    [anon_sym_AS] = ACTIONS(137),
    [anon_sym_PERMISSIONS] = ACTIONS(137),
    [anon_sym_FULL] = ACTIONS(137),
    [anon_sym_FOR] = ACTIONS(137),
    [anon_sym_select] = ACTIONS(137),
    [anon_sym_update] = ACTIONS(137),
    [anon_sym_create] = ACTIONS(137),
    [anon_sym_delete] = ACTIONS(137),
    [anon_sym_EVENT] = ACTIONS(137),
    [anon_sym_WHEN] = ACTIONS(137),
    [anon_sym_ASSERT] = ACTIONS(137),
    [anon_sym_INDEX] = ACTIONS(137),
    [anon_sym_FIELDS] = ACTIONS(137),
    [anon_sym_COLUMNS] = ACTIONS(137),
    [anon_sym_UNIQUE] = ACTIONS(137),
    [anon_sym_REMOVE] = ACTIONS(137),
    [anon_sym_SLEEP] = ACTIONS(137),
    [anon_sym_INFO] = ACTIONS(137),
    [anon_sym_KV] = ACTIONS(137),
    [anon_sym_FUNCTION] = ACTIONS(137),
    [anon_sym_PARAM] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(135),
    [anon_sym_AND] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(135),
    [anon_sym_OR] = ACTIONS(137),
    [anon_sym_QMARK_QMARK] = ACTIONS(135),
    [anon_sym_QMARK_COLON] = ACTIONS(135),
    [anon_sym_EQ] = ACTIONS(137),
    [anon_sym_IS] = ACTIONS(137),
    [anon_sym_BANG_EQ] = ACTIONS(135),
    [anon_sym_ISNOT] = ACTIONS(135),
    [anon_sym_EQ_EQ] = ACTIONS(135),
    [anon_sym_QMARK_EQ] = ACTIONS(135),
    [anon_sym_STAR_EQ] = ACTIONS(135),
    [anon_sym_TILDE] = ACTIONS(135),
    [anon_sym_BANG_TILDE] = ACTIONS(135),
    [anon_sym_QMARK_TILDE] = ACTIONS(135),
    [anon_sym_STAR_TILDE] = ACTIONS(135),
    [anon_sym_LT] = ACTIONS(137),
    [anon_sym_LT_EQ] = ACTIONS(135),
    [anon_sym_GT] = ACTIONS(137),
    [anon_sym_GT_EQ] = ACTIONS(135),
    [anon_sym_PLUS] = ACTIONS(135),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(137),
    [anon_sym_x] = ACTIONS(137),
    [anon_sym_SLASH] = ACTIONS(137),
    [anon_sym_] = ACTIONS(135),
    [anon_sym_STAR_STAR] = ACTIONS(135),
    [anon_sym_IN] = ACTIONS(137),
    [anon_sym_CONTAINS] = ACTIONS(137),
    [anon_sym_2] = ACTIONS(135),
    [anon_sym_CONTAINSNOT] = ACTIONS(137),
    [anon_sym_3] = ACTIONS(135),
    [anon_sym_CONTAINSALL] = ACTIONS(137),
    [anon_sym_4] = ACTIONS(135),
    [anon_sym_CONTAINSANY] = ACTIONS(137),
    [anon_sym_5] = ACTIONS(135),
    [anon_sym_CONTAINSNONE] = ACTIONS(137),
    [anon_sym_6] = ACTIONS(135),
    [anon_sym_INSIDE] = ACTIONS(137),
    [anon_sym_7] = ACTIONS(135),
    [anon_sym_NOTINSIDE] = ACTIONS(137),
    [anon_sym_NOTIN] = ACTIONS(135),
    [anon_sym_8] = ACTIONS(135),
    [anon_sym_ALLINSIDE] = ACTIONS(137),
    [anon_sym_9] = ACTIONS(135),
    [anon_sym_ANYINSIDE] = ACTIONS(137),
    [anon_sym_10] = ACTIONS(135),
    [anon_sym_NONEINSIDE] = ACTIONS(137),
    [anon_sym_11] = ACTIONS(135),
    [anon_sym_OUTSIDE] = ACTIONS(137),
    [anon_sym_INTERSECTS] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(135),
    [anon_sym_DASH_GT] = ACTIONS(135),
    [anon_sym_LT_DASH] = ACTIONS(135),
    [anon_sym_COMMA] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(135),
    [anon_sym_COLON] = ACTIONS(135),
    [anon_sym_any] = ACTIONS(137),
    [anon_sym_array] = ACTIONS(137),
    [anon_sym_bool] = ACTIONS(137),
    [anon_sym_datetime] = ACTIONS(137),
    [anon_sym_decimal] = ACTIONS(137),
    [anon_sym_duration] = ACTIONS(137),
    [anon_sym_float] = ACTIONS(137),
    [anon_sym_int] = ACTIONS(137),
    [anon_sym_number] = ACTIONS(137),
    [anon_sym_object] = ACTIONS(137),
    [anon_sym_string] = ACTIONS(137),
    [anon_sym_record] = ACTIONS(137),
    [anon_sym_geometry] = ACTIONS(137),
    [anon_sym_EDDSA] = ACTIONS(137),
    [anon_sym_ES256] = ACTIONS(137),
    [anon_sym_ES384] = ACTIONS(137),
    [anon_sym_ES512] = ACTIONS(137),
    [anon_sym_HS256] = ACTIONS(137),
    [anon_sym_HS384] = ACTIONS(137),
    [anon_sym_HS512] = ACTIONS(137),
    [anon_sym_PS256] = ACTIONS(137),
    [anon_sym_PS384] = ACTIONS(137),
    [anon_sym_PS512] = ACTIONS(137),
    [anon_sym_RS256] = ACTIONS(137),
    [anon_sym_RS384] = ACTIONS(137),
    [anon_sym_RS512] = ACTIONS(137),
    [aux_sym_function_token1] = ACTIONS(135),
    [aux_sym_function_token2] = ACTIONS(135),
    [anon_sym_count] = ACTIONS(137),
    [aux_sym_function_token3] = ACTIONS(135),
    [aux_sym_function_token4] = ACTIONS(135),
    [aux_sym_function_token5] = ACTIONS(135),
    [aux_sym_function_token6] = ACTIONS(135),
    [aux_sym_function_token7] = ACTIONS(135),
    [aux_sym_function_token8] = ACTIONS(135),
    [aux_sym_function_token9] = ACTIONS(135),
    [aux_sym_function_token10] = ACTIONS(137),
    [aux_sym_function_token11] = ACTIONS(135),
    [aux_sym_function_token12] = ACTIONS(137),
    [aux_sym_function_token13] = ACTIONS(135),
    [aux_sym_function_token14] = ACTIONS(135),
    [aux_sym_function_token15] = ACTIONS(135),
    [aux_sym_function_token16] = ACTIONS(137),
    [anon_sym_true] = ACTIONS(137),
    [anon_sym_false] = ACTIONS(137),
    [anon_sym_TRUE] = ACTIONS(137),
    [anon_sym_FALSE] = ACTIONS(137),
    [anon_sym_null] = ACTIONS(137),
    [anon_sym_NULL] = ACTIONS(137),
    [anon_sym_none] = ACTIONS(137),
    [anon_sym_NONE] = ACTIONS(137),
    [sym_variable] = ACTIONS(135),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SQUOTE] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(135),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [anon_sym_function] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(139),
    [aux_sym_future_token1] = ACTIONS(139),
    [aux_sym_casting_token1] = ACTIONS(139),
    [aux_sym_property_token1] = ACTIONS(141),
    [aux_sym_identifier_token1] = ACTIONS(141),
    [aux_sym_duration_token1] = ACTIONS(141),
    [aux_sym_constant_token1] = ACTIONS(139),
    [aux_sym_number_token1] = ACTIONS(141),
    [aux_sym_record_token1] = ACTIONS(139),
    [aux_sym_record_token2] = ACTIONS(139),
    [anon_sym_USE] = ACTIONS(141),
    [anon_sym_NS] = ACTIONS(141),
    [anon_sym_DB] = ACTIONS(141),
    [anon_sym_LET] = ACTIONS(141),
    [anon_sym_BEGIN] = ACTIONS(141),
    [anon_sym_TRANSACTION] = ACTIONS(141),
    [anon_sym_CANCEL] = ACTIONS(141),
    [anon_sym_COMMIT] = ACTIONS(141),
    [anon_sym_IF] = ACTIONS(141),
    [anon_sym_ELSE] = ACTIONS(141),
    [anon_sym_THEN] = ACTIONS(141),
    [anon_sym_END] = ACTIONS(141),
    [anon_sym_SELECT] = ACTIONS(141),
    [anon_sym_FROM] = ACTIONS(141),
    [anon_sym_WHERE] = ACTIONS(141),
    [anon_sym_SPLIT] = ACTIONS(141),
    [anon_sym_AT] = ACTIONS(141),
    [anon_sym_GROUP] = ACTIONS(141),
    [anon_sym_BY] = ACTIONS(141),
    [anon_sym_ORDER] = ACTIONS(141),
    [anon_sym_COLLATE] = ACTIONS(141),
    [anon_sym_NUMERIC] = ACTIONS(141),
    [anon_sym_ASC] = ACTIONS(141),
    [anon_sym_DESC] = ACTIONS(141),
    [anon_sym_LIMIT] = ACTIONS(141),
    [anon_sym_START] = ACTIONS(141),
    [anon_sym_FETCH] = ACTIONS(141),
    [anon_sym_TIMEOUT] = ACTIONS(141),
    [anon_sym_PARALLEL] = ACTIONS(141),
    [anon_sym_INSERT] = ACTIONS(141),
    [anon_sym_IGNORE] = ACTIONS(141),
    [anon_sym_INTO] = ACTIONS(141),
    [anon_sym_VALUES] = ACTIONS(141),
    [anon_sym_ON] = ACTIONS(141),
    [anon_sym_DUPLICATE] = ACTIONS(141),
    [anon_sym_KEY] = ACTIONS(141),
    [anon_sym_UPDATE] = ACTIONS(141),
    [anon_sym_CREATE] = ACTIONS(141),
    [anon_sym_CONTENT] = ACTIONS(141),
    [anon_sym_SET] = ACTIONS(141),
    [anon_sym_RETURN] = ACTIONS(141),
    [anon_sym_BEFORE] = ACTIONS(141),
    [anon_sym_AFTER] = ACTIONS(141),
    [anon_sym_DIFF] = ACTIONS(141),
    [anon_sym_MERGE] = ACTIONS(141),
    [anon_sym_PATCH] = ACTIONS(141),
    [anon_sym_RELATE] = ACTIONS(141),
    [anon_sym_DELETE] = ACTIONS(141),
    [anon_sym_DEFINE] = ACTIONS(141),
    [anon_sym_NAMESPACE] = ACTIONS(141),
    [anon_sym_DATABASE] = ACTIONS(141),
    [anon_sym_LOGIN] = ACTIONS(141),
    [anon_sym_PASSWORD] = ACTIONS(141),
    [anon_sym_PASSHASH] = ACTIONS(141),
    [anon_sym_TOKEN] = ACTIONS(141),
    [anon_sym_SCOPE] = ACTIONS(141),
    [anon_sym_TYPE] = ACTIONS(141),
    [anon_sym_VALUE] = ACTIONS(141),
    [anon_sym_SESSION] = ACTIONS(141),
    [anon_sym_SIGNUP] = ACTIONS(141),
    [anon_sym_SIGNIN] = ACTIONS(141),
    [anon_sym_TABLE] = ACTIONS(141),
    [anon_sym_DROP] = ACTIONS(141),
    [anon_sym_SCHEMAFULL] = ACTIONS(141),
    [anon_sym_SCHEMALESS] = ACTIONS(141),
    [anon_sym_AS] = ACTIONS(141),
    [anon_sym_PERMISSIONS] = ACTIONS(141),
    [anon_sym_FULL] = ACTIONS(141),
    [anon_sym_FOR] = ACTIONS(141),
    [anon_sym_select] = ACTIONS(141),
    [anon_sym_update] = ACTIONS(141),
    [anon_sym_create] = ACTIONS(141),
    [anon_sym_delete] = ACTIONS(141),
    [anon_sym_EVENT] = ACTIONS(141),
    [anon_sym_WHEN] = ACTIONS(141),
    [anon_sym_ASSERT] = ACTIONS(141),
    [anon_sym_INDEX] = ACTIONS(141),
    [anon_sym_FIELDS] = ACTIONS(141),
    [anon_sym_COLUMNS] = ACTIONS(141),
    [anon_sym_UNIQUE] = ACTIONS(141),
    [anon_sym_REMOVE] = ACTIONS(141),
    [anon_sym_SLEEP] = ACTIONS(141),
    [anon_sym_INFO] = ACTIONS(141),
    [anon_sym_KV] = ACTIONS(141),
    [anon_sym_FUNCTION] = ACTIONS(141),
    [anon_sym_PARAM] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(139),
    [anon_sym_AND] = ACTIONS(141),
    [anon_sym_PIPE_PIPE] = ACTIONS(139),
    [anon_sym_OR] = ACTIONS(141),
    [anon_sym_QMARK_QMARK] = ACTIONS(139),
    [anon_sym_QMARK_COLON] = ACTIONS(139),
    [anon_sym_EQ] = ACTIONS(141),
    [anon_sym_IS] = ACTIONS(141),
    [anon_sym_BANG_EQ] = ACTIONS(139),
    [anon_sym_ISNOT] = ACTIONS(139),
    [anon_sym_EQ_EQ] = ACTIONS(139),
    [anon_sym_QMARK_EQ] = ACTIONS(139),
    [anon_sym_STAR_EQ] = ACTIONS(139),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_BANG_TILDE] = ACTIONS(139),
    [anon_sym_QMARK_TILDE] = ACTIONS(139),
    [anon_sym_STAR_TILDE] = ACTIONS(139),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_LT_EQ] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_GT_EQ] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(141),
    [anon_sym_STAR] = ACTIONS(141),
    [anon_sym_x] = ACTIONS(141),
    [anon_sym_SLASH] = ACTIONS(141),
    [anon_sym_] = ACTIONS(139),
    [anon_sym_STAR_STAR] = ACTIONS(139),
    [anon_sym_IN] = ACTIONS(141),
    [anon_sym_CONTAINS] = ACTIONS(141),
    [anon_sym_2] = ACTIONS(139),
    [anon_sym_CONTAINSNOT] = ACTIONS(141),
    [anon_sym_3] = ACTIONS(139),
    [anon_sym_CONTAINSALL] = ACTIONS(141),
    [anon_sym_4] = ACTIONS(139),
    [anon_sym_CONTAINSANY] = ACTIONS(141),
    [anon_sym_5] = ACTIONS(139),
    [anon_sym_CONTAINSNONE] = ACTIONS(141),
    [anon_sym_6] = ACTIONS(139),
    [anon_sym_INSIDE] = ACTIONS(141),
    [anon_sym_7] = ACTIONS(139),
    [anon_sym_NOTINSIDE] = ACTIONS(141),
    [anon_sym_NOTIN] = ACTIONS(139),
    [anon_sym_8] = ACTIONS(139),
    [anon_sym_ALLINSIDE] = ACTIONS(141),
    [anon_sym_9] = ACTIONS(139),
    [anon_sym_ANYINSIDE] = ACTIONS(141),
    [anon_sym_10] = ACTIONS(139),
    [anon_sym_NONEINSIDE] = ACTIONS(141),
    [anon_sym_11] = ACTIONS(139),
    [anon_sym_OUTSIDE] = ACTIONS(141),
    [anon_sym_INTERSECTS] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_RBRACK] = ACTIONS(139),
    [anon_sym_DASH_GT] = ACTIONS(139),
    [anon_sym_LT_DASH] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_COLON] = ACTIONS(139),
    [anon_sym_any] = ACTIONS(141),
    [anon_sym_array] = ACTIONS(141),
    [anon_sym_bool] = ACTIONS(141),
    [anon_sym_datetime] = ACTIONS(141),
    [anon_sym_decimal] = ACTIONS(141),
    [anon_sym_duration] = ACTIONS(141),
    [anon_sym_float] = ACTIONS(141),
    [anon_sym_int] = ACTIONS(141),
    [anon_sym_number] = ACTIONS(141),
    [anon_sym_object] = ACTIONS(141),
    [anon_sym_string] = ACTIONS(141),
    [anon_sym_record] = ACTIONS(141),
    [anon_sym_geometry] = ACTIONS(141),
    [anon_sym_EDDSA] = ACTIONS(141),
    [anon_sym_ES256] = ACTIONS(141),
    [anon_sym_ES384] = ACTIONS(141),
    [anon_sym_ES512] = ACTIONS(141),
    [anon_sym_HS256] = ACTIONS(141),
    [anon_sym_HS384] = ACTIONS(141),
    [anon_sym_HS512] = ACTIONS(141),
    [anon_sym_PS256] = ACTIONS(141),
    [anon_sym_PS384] = ACTIONS(141),
    [anon_sym_PS512] = ACTIONS(141),
    [anon_sym_RS256] = ACTIONS(141),
    [anon_sym_RS384] = ACTIONS(141),
    [anon_sym_RS512] = ACTIONS(141),
    [aux_sym_function_token1] = ACTIONS(139),
    [aux_sym_function_token2] = ACTIONS(139),
    [anon_sym_count] = ACTIONS(141),
    [aux_sym_function_token3] = ACTIONS(139),
    [aux_sym_function_token4] = ACTIONS(139),
    [aux_sym_function_token5] = ACTIONS(139),
    [aux_sym_function_token6] = ACTIONS(139),
    [aux_sym_function_token7] = ACTIONS(139),
    [aux_sym_function_token8] = ACTIONS(139),
    [aux_sym_function_token9] = ACTIONS(139),
    [aux_sym_function_token10] = ACTIONS(141),
    [aux_sym_function_token11] = ACTIONS(139),
    [aux_sym_function_token12] = ACTIONS(141),
    [aux_sym_function_token13] = ACTIONS(139),
    [aux_sym_function_token14] = ACTIONS(139),
    [aux_sym_function_token15] = ACTIONS(139),
    [aux_sym_function_token16] = ACTIONS(141),
    [anon_sym_true] = ACTIONS(141),
    [anon_sym_false] = ACTIONS(141),
    [anon_sym_TRUE] = ACTIONS(141),
    [anon_sym_FALSE] = ACTIONS(141),
    [anon_sym_null] = ACTIONS(141),
    [anon_sym_NULL] = ACTIONS(141),
    [anon_sym_none] = ACTIONS(141),
    [anon_sym_NONE] = ACTIONS(141),
    [sym_variable] = ACTIONS(139),
    [sym_comment] = ACTIONS(139),
    [anon_sym_SQUOTE] = ACTIONS(139),
    [anon_sym_DQUOTE] = ACTIONS(139),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [anon_sym_function] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_RPAREN] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(143),
    [anon_sym_RBRACE] = ACTIONS(143),
    [aux_sym_future_token1] = ACTIONS(143),
    [aux_sym_casting_token1] = ACTIONS(143),
    [aux_sym_property_token1] = ACTIONS(145),
    [aux_sym_identifier_token1] = ACTIONS(145),
    [aux_sym_duration_token1] = ACTIONS(145),
    [aux_sym_constant_token1] = ACTIONS(143),
    [aux_sym_number_token1] = ACTIONS(145),
    [aux_sym_record_token1] = ACTIONS(143),
    [aux_sym_record_token2] = ACTIONS(143),
    [anon_sym_USE] = ACTIONS(145),
    [anon_sym_NS] = ACTIONS(145),
    [anon_sym_DB] = ACTIONS(145),
    [anon_sym_LET] = ACTIONS(145),
    [anon_sym_BEGIN] = ACTIONS(145),
    [anon_sym_TRANSACTION] = ACTIONS(145),
    [anon_sym_CANCEL] = ACTIONS(145),
    [anon_sym_COMMIT] = ACTIONS(145),
    [anon_sym_IF] = ACTIONS(145),
    [anon_sym_ELSE] = ACTIONS(145),
    [anon_sym_THEN] = ACTIONS(145),
    [anon_sym_END] = ACTIONS(145),
    [anon_sym_SELECT] = ACTIONS(145),
    [anon_sym_FROM] = ACTIONS(145),
    [anon_sym_WHERE] = ACTIONS(145),
    [anon_sym_SPLIT] = ACTIONS(145),
    [anon_sym_AT] = ACTIONS(145),
    [anon_sym_GROUP] = ACTIONS(145),
    [anon_sym_BY] = ACTIONS(145),
    [anon_sym_ORDER] = ACTIONS(145),
    [anon_sym_COLLATE] = ACTIONS(145),
    [anon_sym_NUMERIC] = ACTIONS(145),
    [anon_sym_ASC] = ACTIONS(145),
    [anon_sym_DESC] = ACTIONS(145),
    [anon_sym_LIMIT] = ACTIONS(145),
    [anon_sym_START] = ACTIONS(145),
    [anon_sym_FETCH] = ACTIONS(145),
    [anon_sym_TIMEOUT] = ACTIONS(145),
    [anon_sym_PARALLEL] = ACTIONS(145),
    [anon_sym_INSERT] = ACTIONS(145),
    [anon_sym_IGNORE] = ACTIONS(145),
    [anon_sym_INTO] = ACTIONS(145),
    [anon_sym_VALUES] = ACTIONS(145),
    [anon_sym_ON] = ACTIONS(145),
    [anon_sym_DUPLICATE] = ACTIONS(145),
    [anon_sym_KEY] = ACTIONS(145),
    [anon_sym_UPDATE] = ACTIONS(145),
    [anon_sym_CREATE] = ACTIONS(145),
    [anon_sym_CONTENT] = ACTIONS(145),
    [anon_sym_SET] = ACTIONS(145),
    [anon_sym_RETURN] = ACTIONS(145),
    [anon_sym_BEFORE] = ACTIONS(145),
    [anon_sym_AFTER] = ACTIONS(145),
    [anon_sym_DIFF] = ACTIONS(145),
    [anon_sym_MERGE] = ACTIONS(145),
    [anon_sym_PATCH] = ACTIONS(145),
    [anon_sym_RELATE] = ACTIONS(145),
    [anon_sym_DELETE] = ACTIONS(145),
    [anon_sym_DEFINE] = ACTIONS(145),
    [anon_sym_NAMESPACE] = ACTIONS(145),
    [anon_sym_DATABASE] = ACTIONS(145),
    [anon_sym_LOGIN] = ACTIONS(145),
    [anon_sym_PASSWORD] = ACTIONS(145),
    [anon_sym_PASSHASH] = ACTIONS(145),
    [anon_sym_TOKEN] = ACTIONS(145),
    [anon_sym_SCOPE] = ACTIONS(145),
    [anon_sym_TYPE] = ACTIONS(145),
    [anon_sym_VALUE] = ACTIONS(145),
    [anon_sym_SESSION] = ACTIONS(145),
    [anon_sym_SIGNUP] = ACTIONS(145),
    [anon_sym_SIGNIN] = ACTIONS(145),
    [anon_sym_TABLE] = ACTIONS(145),
    [anon_sym_DROP] = ACTIONS(145),
    [anon_sym_SCHEMAFULL] = ACTIONS(145),
    [anon_sym_SCHEMALESS] = ACTIONS(145),
    [anon_sym_AS] = ACTIONS(145),
    [anon_sym_PERMISSIONS] = ACTIONS(145),
    [anon_sym_FULL] = ACTIONS(145),
    [anon_sym_FOR] = ACTIONS(145),
    [anon_sym_select] = ACTIONS(145),
    [anon_sym_update] = ACTIONS(145),
    [anon_sym_create] = ACTIONS(145),
    [anon_sym_delete] = ACTIONS(145),
    [anon_sym_EVENT] = ACTIONS(145),
    [anon_sym_WHEN] = ACTIONS(145),
    [anon_sym_ASSERT] = ACTIONS(145),
    [anon_sym_INDEX] = ACTIONS(145),
    [anon_sym_FIELDS] = ACTIONS(145),
    [anon_sym_COLUMNS] = ACTIONS(145),
    [anon_sym_UNIQUE] = ACTIONS(145),
    [anon_sym_REMOVE] = ACTIONS(145),
    [anon_sym_SLEEP] = ACTIONS(145),
    [anon_sym_INFO] = ACTIONS(145),
    [anon_sym_KV] = ACTIONS(145),
    [anon_sym_FUNCTION] = ACTIONS(145),
    [anon_sym_PARAM] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_AND] = ACTIONS(145),
    [anon_sym_PIPE_PIPE] = ACTIONS(143),
    [anon_sym_OR] = ACTIONS(145),
    [anon_sym_QMARK_QMARK] = ACTIONS(143),
    [anon_sym_QMARK_COLON] = ACTIONS(143),
    [anon_sym_EQ] = ACTIONS(145),
    [anon_sym_IS] = ACTIONS(145),
    [anon_sym_BANG_EQ] = ACTIONS(143),
    [anon_sym_ISNOT] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(143),
    [anon_sym_QMARK_EQ] = ACTIONS(143),
    [anon_sym_STAR_EQ] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_BANG_TILDE] = ACTIONS(143),
    [anon_sym_QMARK_TILDE] = ACTIONS(143),
    [anon_sym_STAR_TILDE] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(145),
    [anon_sym_GT_EQ] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(145),
    [anon_sym_STAR] = ACTIONS(145),
    [anon_sym_x] = ACTIONS(145),
    [anon_sym_SLASH] = ACTIONS(145),
    [anon_sym_] = ACTIONS(143),
    [anon_sym_STAR_STAR] = ACTIONS(143),
    [anon_sym_IN] = ACTIONS(145),
    [anon_sym_CONTAINS] = ACTIONS(145),
    [anon_sym_2] = ACTIONS(143),
    [anon_sym_CONTAINSNOT] = ACTIONS(145),
    [anon_sym_3] = ACTIONS(143),
    [anon_sym_CONTAINSALL] = ACTIONS(145),
    [anon_sym_4] = ACTIONS(143),
    [anon_sym_CONTAINSANY] = ACTIONS(145),
    [anon_sym_5] = ACTIONS(143),
    [anon_sym_CONTAINSNONE] = ACTIONS(145),
    [anon_sym_6] = ACTIONS(143),
    [anon_sym_INSIDE] = ACTIONS(145),
    [anon_sym_7] = ACTIONS(143),
    [anon_sym_NOTINSIDE] = ACTIONS(145),
    [anon_sym_NOTIN] = ACTIONS(143),
    [anon_sym_8] = ACTIONS(143),
    [anon_sym_ALLINSIDE] = ACTIONS(145),
    [anon_sym_9] = ACTIONS(143),
    [anon_sym_ANYINSIDE] = ACTIONS(145),
    [anon_sym_10] = ACTIONS(143),
    [anon_sym_NONEINSIDE] = ACTIONS(145),
    [anon_sym_11] = ACTIONS(143),
    [anon_sym_OUTSIDE] = ACTIONS(145),
    [anon_sym_INTERSECTS] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_RBRACK] = ACTIONS(143),
    [anon_sym_DASH_GT] = ACTIONS(143),
    [anon_sym_LT_DASH] = ACTIONS(143),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_SEMI] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_any] = ACTIONS(145),
    [anon_sym_array] = ACTIONS(145),
    [anon_sym_bool] = ACTIONS(145),
    [anon_sym_datetime] = ACTIONS(145),
    [anon_sym_decimal] = ACTIONS(145),
    [anon_sym_duration] = ACTIONS(145),
    [anon_sym_float] = ACTIONS(145),
    [anon_sym_int] = ACTIONS(145),
    [anon_sym_number] = ACTIONS(145),
    [anon_sym_object] = ACTIONS(145),
    [anon_sym_string] = ACTIONS(145),
    [anon_sym_record] = ACTIONS(145),
    [anon_sym_geometry] = ACTIONS(145),
    [anon_sym_EDDSA] = ACTIONS(145),
    [anon_sym_ES256] = ACTIONS(145),
    [anon_sym_ES384] = ACTIONS(145),
    [anon_sym_ES512] = ACTIONS(145),
    [anon_sym_HS256] = ACTIONS(145),
    [anon_sym_HS384] = ACTIONS(145),
    [anon_sym_HS512] = ACTIONS(145),
    [anon_sym_PS256] = ACTIONS(145),
    [anon_sym_PS384] = ACTIONS(145),
    [anon_sym_PS512] = ACTIONS(145),
    [anon_sym_RS256] = ACTIONS(145),
    [anon_sym_RS384] = ACTIONS(145),
    [anon_sym_RS512] = ACTIONS(145),
    [aux_sym_function_token1] = ACTIONS(143),
    [aux_sym_function_token2] = ACTIONS(143),
    [anon_sym_count] = ACTIONS(145),
    [aux_sym_function_token3] = ACTIONS(143),
    [aux_sym_function_token4] = ACTIONS(143),
    [aux_sym_function_token5] = ACTIONS(143),
    [aux_sym_function_token6] = ACTIONS(143),
    [aux_sym_function_token7] = ACTIONS(143),
    [aux_sym_function_token8] = ACTIONS(143),
    [aux_sym_function_token9] = ACTIONS(143),
    [aux_sym_function_token10] = ACTIONS(145),
    [aux_sym_function_token11] = ACTIONS(143),
    [aux_sym_function_token12] = ACTIONS(145),
    [aux_sym_function_token13] = ACTIONS(143),
    [aux_sym_function_token14] = ACTIONS(143),
    [aux_sym_function_token15] = ACTIONS(143),
    [aux_sym_function_token16] = ACTIONS(145),
    [anon_sym_true] = ACTIONS(145),
    [anon_sym_false] = ACTIONS(145),
    [anon_sym_TRUE] = ACTIONS(145),
    [anon_sym_FALSE] = ACTIONS(145),
    [anon_sym_null] = ACTIONS(145),
    [anon_sym_NULL] = ACTIONS(145),
    [anon_sym_none] = ACTIONS(145),
    [anon_sym_NONE] = ACTIONS(145),
    [sym_variable] = ACTIONS(143),
    [sym_comment] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(143),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [anon_sym_function] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(147),
    [anon_sym_RPAREN] = ACTIONS(147),
    [anon_sym_LBRACE] = ACTIONS(147),
    [anon_sym_RBRACE] = ACTIONS(147),
    [aux_sym_future_token1] = ACTIONS(147),
    [aux_sym_casting_token1] = ACTIONS(147),
    [aux_sym_property_token1] = ACTIONS(149),
    [aux_sym_identifier_token1] = ACTIONS(149),
    [aux_sym_duration_token1] = ACTIONS(149),
    [aux_sym_constant_token1] = ACTIONS(147),
    [aux_sym_number_token1] = ACTIONS(149),
    [aux_sym_record_token1] = ACTIONS(147),
    [aux_sym_record_token2] = ACTIONS(147),
    [anon_sym_USE] = ACTIONS(149),
    [anon_sym_NS] = ACTIONS(149),
    [anon_sym_DB] = ACTIONS(149),
    [anon_sym_LET] = ACTIONS(149),
    [anon_sym_BEGIN] = ACTIONS(149),
    [anon_sym_TRANSACTION] = ACTIONS(149),
    [anon_sym_CANCEL] = ACTIONS(149),
    [anon_sym_COMMIT] = ACTIONS(149),
    [anon_sym_IF] = ACTIONS(149),
    [anon_sym_ELSE] = ACTIONS(149),
    [anon_sym_THEN] = ACTIONS(149),
    [anon_sym_END] = ACTIONS(149),
    [anon_sym_SELECT] = ACTIONS(149),
    [anon_sym_FROM] = ACTIONS(149),
    [anon_sym_WHERE] = ACTIONS(149),
    [anon_sym_SPLIT] = ACTIONS(149),
    [anon_sym_AT] = ACTIONS(149),
    [anon_sym_GROUP] = ACTIONS(149),
    [anon_sym_BY] = ACTIONS(149),
    [anon_sym_ORDER] = ACTIONS(149),
    [anon_sym_COLLATE] = ACTIONS(149),
    [anon_sym_NUMERIC] = ACTIONS(149),
    [anon_sym_ASC] = ACTIONS(149),
    [anon_sym_DESC] = ACTIONS(149),
    [anon_sym_LIMIT] = ACTIONS(149),
    [anon_sym_START] = ACTIONS(149),
    [anon_sym_FETCH] = ACTIONS(149),
    [anon_sym_TIMEOUT] = ACTIONS(149),
    [anon_sym_PARALLEL] = ACTIONS(149),
    [anon_sym_INSERT] = ACTIONS(149),
    [anon_sym_IGNORE] = ACTIONS(149),
    [anon_sym_INTO] = ACTIONS(149),
    [anon_sym_VALUES] = ACTIONS(149),
    [anon_sym_ON] = ACTIONS(149),
    [anon_sym_DUPLICATE] = ACTIONS(149),
    [anon_sym_KEY] = ACTIONS(149),
    [anon_sym_UPDATE] = ACTIONS(149),
    [anon_sym_CREATE] = ACTIONS(149),
    [anon_sym_CONTENT] = ACTIONS(149),
    [anon_sym_SET] = ACTIONS(149),
    [anon_sym_RETURN] = ACTIONS(149),
    [anon_sym_BEFORE] = ACTIONS(149),
    [anon_sym_AFTER] = ACTIONS(149),
    [anon_sym_DIFF] = ACTIONS(149),
    [anon_sym_MERGE] = ACTIONS(149),
    [anon_sym_PATCH] = ACTIONS(149),
    [anon_sym_RELATE] = ACTIONS(149),
    [anon_sym_DELETE] = ACTIONS(149),
    [anon_sym_DEFINE] = ACTIONS(149),
    [anon_sym_NAMESPACE] = ACTIONS(149),
    [anon_sym_DATABASE] = ACTIONS(149),
    [anon_sym_LOGIN] = ACTIONS(149),
    [anon_sym_PASSWORD] = ACTIONS(149),
    [anon_sym_PASSHASH] = ACTIONS(149),
    [anon_sym_TOKEN] = ACTIONS(149),
    [anon_sym_SCOPE] = ACTIONS(149),
    [anon_sym_TYPE] = ACTIONS(149),
    [anon_sym_VALUE] = ACTIONS(149),
    [anon_sym_SESSION] = ACTIONS(149),
    [anon_sym_SIGNUP] = ACTIONS(149),
    [anon_sym_SIGNIN] = ACTIONS(149),
    [anon_sym_TABLE] = ACTIONS(149),
    [anon_sym_DROP] = ACTIONS(149),
    [anon_sym_SCHEMAFULL] = ACTIONS(149),
    [anon_sym_SCHEMALESS] = ACTIONS(149),
    [anon_sym_AS] = ACTIONS(149),
    [anon_sym_PERMISSIONS] = ACTIONS(149),
    [anon_sym_FULL] = ACTIONS(149),
    [anon_sym_FOR] = ACTIONS(149),
    [anon_sym_select] = ACTIONS(149),
    [anon_sym_update] = ACTIONS(149),
    [anon_sym_create] = ACTIONS(149),
    [anon_sym_delete] = ACTIONS(149),
    [anon_sym_EVENT] = ACTIONS(149),
    [anon_sym_WHEN] = ACTIONS(149),
    [anon_sym_ASSERT] = ACTIONS(149),
    [anon_sym_INDEX] = ACTIONS(149),
    [anon_sym_FIELDS] = ACTIONS(149),
    [anon_sym_COLUMNS] = ACTIONS(149),
    [anon_sym_UNIQUE] = ACTIONS(149),
    [anon_sym_REMOVE] = ACTIONS(149),
    [anon_sym_SLEEP] = ACTIONS(149),
    [anon_sym_INFO] = ACTIONS(149),
    [anon_sym_KV] = ACTIONS(149),
    [anon_sym_FUNCTION] = ACTIONS(149),
    [anon_sym_PARAM] = ACTIONS(149),
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
    [anon_sym_SLASH] = ACTIONS(149),
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
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_RBRACK] = ACTIONS(147),
    [anon_sym_DASH_GT] = ACTIONS(147),
    [anon_sym_LT_DASH] = ACTIONS(147),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_any] = ACTIONS(149),
    [anon_sym_array] = ACTIONS(149),
    [anon_sym_bool] = ACTIONS(149),
    [anon_sym_datetime] = ACTIONS(149),
    [anon_sym_decimal] = ACTIONS(149),
    [anon_sym_duration] = ACTIONS(149),
    [anon_sym_float] = ACTIONS(149),
    [anon_sym_int] = ACTIONS(149),
    [anon_sym_number] = ACTIONS(149),
    [anon_sym_object] = ACTIONS(149),
    [anon_sym_string] = ACTIONS(149),
    [anon_sym_record] = ACTIONS(149),
    [anon_sym_geometry] = ACTIONS(149),
    [anon_sym_EDDSA] = ACTIONS(149),
    [anon_sym_ES256] = ACTIONS(149),
    [anon_sym_ES384] = ACTIONS(149),
    [anon_sym_ES512] = ACTIONS(149),
    [anon_sym_HS256] = ACTIONS(149),
    [anon_sym_HS384] = ACTIONS(149),
    [anon_sym_HS512] = ACTIONS(149),
    [anon_sym_PS256] = ACTIONS(149),
    [anon_sym_PS384] = ACTIONS(149),
    [anon_sym_PS512] = ACTIONS(149),
    [anon_sym_RS256] = ACTIONS(149),
    [anon_sym_RS384] = ACTIONS(149),
    [anon_sym_RS512] = ACTIONS(149),
    [aux_sym_function_token1] = ACTIONS(147),
    [aux_sym_function_token2] = ACTIONS(147),
    [anon_sym_count] = ACTIONS(149),
    [aux_sym_function_token3] = ACTIONS(147),
    [aux_sym_function_token4] = ACTIONS(147),
    [aux_sym_function_token5] = ACTIONS(147),
    [aux_sym_function_token6] = ACTIONS(147),
    [aux_sym_function_token7] = ACTIONS(147),
    [aux_sym_function_token8] = ACTIONS(147),
    [aux_sym_function_token9] = ACTIONS(147),
    [aux_sym_function_token10] = ACTIONS(149),
    [aux_sym_function_token11] = ACTIONS(147),
    [aux_sym_function_token12] = ACTIONS(149),
    [aux_sym_function_token13] = ACTIONS(147),
    [aux_sym_function_token14] = ACTIONS(147),
    [aux_sym_function_token15] = ACTIONS(147),
    [aux_sym_function_token16] = ACTIONS(149),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_false] = ACTIONS(149),
    [anon_sym_TRUE] = ACTIONS(149),
    [anon_sym_FALSE] = ACTIONS(149),
    [anon_sym_null] = ACTIONS(149),
    [anon_sym_NULL] = ACTIONS(149),
    [anon_sym_none] = ACTIONS(149),
    [anon_sym_NONE] = ACTIONS(149),
    [sym_variable] = ACTIONS(147),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SQUOTE] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(147),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [anon_sym_function] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_RBRACE] = ACTIONS(151),
    [aux_sym_future_token1] = ACTIONS(151),
    [aux_sym_casting_token1] = ACTIONS(151),
    [aux_sym_property_token1] = ACTIONS(153),
    [aux_sym_identifier_token1] = ACTIONS(153),
    [aux_sym_duration_token1] = ACTIONS(153),
    [aux_sym_constant_token1] = ACTIONS(151),
    [aux_sym_number_token1] = ACTIONS(153),
    [aux_sym_record_token1] = ACTIONS(151),
    [aux_sym_record_token2] = ACTIONS(151),
    [anon_sym_USE] = ACTIONS(153),
    [anon_sym_NS] = ACTIONS(153),
    [anon_sym_DB] = ACTIONS(153),
    [anon_sym_LET] = ACTIONS(153),
    [anon_sym_BEGIN] = ACTIONS(153),
    [anon_sym_TRANSACTION] = ACTIONS(153),
    [anon_sym_CANCEL] = ACTIONS(153),
    [anon_sym_COMMIT] = ACTIONS(153),
    [anon_sym_IF] = ACTIONS(153),
    [anon_sym_ELSE] = ACTIONS(153),
    [anon_sym_THEN] = ACTIONS(153),
    [anon_sym_END] = ACTIONS(153),
    [anon_sym_SELECT] = ACTIONS(153),
    [anon_sym_FROM] = ACTIONS(153),
    [anon_sym_WHERE] = ACTIONS(153),
    [anon_sym_SPLIT] = ACTIONS(153),
    [anon_sym_AT] = ACTIONS(153),
    [anon_sym_GROUP] = ACTIONS(153),
    [anon_sym_BY] = ACTIONS(153),
    [anon_sym_ORDER] = ACTIONS(153),
    [anon_sym_COLLATE] = ACTIONS(153),
    [anon_sym_NUMERIC] = ACTIONS(153),
    [anon_sym_ASC] = ACTIONS(153),
    [anon_sym_DESC] = ACTIONS(153),
    [anon_sym_LIMIT] = ACTIONS(153),
    [anon_sym_START] = ACTIONS(153),
    [anon_sym_FETCH] = ACTIONS(153),
    [anon_sym_TIMEOUT] = ACTIONS(153),
    [anon_sym_PARALLEL] = ACTIONS(153),
    [anon_sym_INSERT] = ACTIONS(153),
    [anon_sym_IGNORE] = ACTIONS(153),
    [anon_sym_INTO] = ACTIONS(153),
    [anon_sym_VALUES] = ACTIONS(153),
    [anon_sym_ON] = ACTIONS(153),
    [anon_sym_DUPLICATE] = ACTIONS(153),
    [anon_sym_KEY] = ACTIONS(153),
    [anon_sym_UPDATE] = ACTIONS(153),
    [anon_sym_CREATE] = ACTIONS(153),
    [anon_sym_CONTENT] = ACTIONS(153),
    [anon_sym_SET] = ACTIONS(153),
    [anon_sym_RETURN] = ACTIONS(153),
    [anon_sym_BEFORE] = ACTIONS(153),
    [anon_sym_AFTER] = ACTIONS(153),
    [anon_sym_DIFF] = ACTIONS(153),
    [anon_sym_MERGE] = ACTIONS(153),
    [anon_sym_PATCH] = ACTIONS(153),
    [anon_sym_RELATE] = ACTIONS(153),
    [anon_sym_DELETE] = ACTIONS(153),
    [anon_sym_DEFINE] = ACTIONS(153),
    [anon_sym_NAMESPACE] = ACTIONS(153),
    [anon_sym_DATABASE] = ACTIONS(153),
    [anon_sym_LOGIN] = ACTIONS(153),
    [anon_sym_PASSWORD] = ACTIONS(153),
    [anon_sym_PASSHASH] = ACTIONS(153),
    [anon_sym_TOKEN] = ACTIONS(153),
    [anon_sym_SCOPE] = ACTIONS(153),
    [anon_sym_TYPE] = ACTIONS(153),
    [anon_sym_VALUE] = ACTIONS(153),
    [anon_sym_SESSION] = ACTIONS(153),
    [anon_sym_SIGNUP] = ACTIONS(153),
    [anon_sym_SIGNIN] = ACTIONS(153),
    [anon_sym_TABLE] = ACTIONS(153),
    [anon_sym_DROP] = ACTIONS(153),
    [anon_sym_SCHEMAFULL] = ACTIONS(153),
    [anon_sym_SCHEMALESS] = ACTIONS(153),
    [anon_sym_AS] = ACTIONS(153),
    [anon_sym_PERMISSIONS] = ACTIONS(153),
    [anon_sym_FULL] = ACTIONS(153),
    [anon_sym_FOR] = ACTIONS(153),
    [anon_sym_select] = ACTIONS(153),
    [anon_sym_update] = ACTIONS(153),
    [anon_sym_create] = ACTIONS(153),
    [anon_sym_delete] = ACTIONS(153),
    [anon_sym_EVENT] = ACTIONS(153),
    [anon_sym_WHEN] = ACTIONS(153),
    [anon_sym_ASSERT] = ACTIONS(153),
    [anon_sym_INDEX] = ACTIONS(153),
    [anon_sym_FIELDS] = ACTIONS(153),
    [anon_sym_COLUMNS] = ACTIONS(153),
    [anon_sym_UNIQUE] = ACTIONS(153),
    [anon_sym_REMOVE] = ACTIONS(153),
    [anon_sym_SLEEP] = ACTIONS(153),
    [anon_sym_INFO] = ACTIONS(153),
    [anon_sym_KV] = ACTIONS(153),
    [anon_sym_FUNCTION] = ACTIONS(153),
    [anon_sym_PARAM] = ACTIONS(153),
    [anon_sym_AMP_AMP] = ACTIONS(151),
    [anon_sym_AND] = ACTIONS(153),
    [anon_sym_PIPE_PIPE] = ACTIONS(151),
    [anon_sym_OR] = ACTIONS(153),
    [anon_sym_QMARK_QMARK] = ACTIONS(151),
    [anon_sym_QMARK_COLON] = ACTIONS(151),
    [anon_sym_EQ] = ACTIONS(153),
    [anon_sym_IS] = ACTIONS(153),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_ISNOT] = ACTIONS(151),
    [anon_sym_EQ_EQ] = ACTIONS(151),
    [anon_sym_QMARK_EQ] = ACTIONS(151),
    [anon_sym_STAR_EQ] = ACTIONS(151),
    [anon_sym_TILDE] = ACTIONS(151),
    [anon_sym_BANG_TILDE] = ACTIONS(151),
    [anon_sym_QMARK_TILDE] = ACTIONS(151),
    [anon_sym_STAR_TILDE] = ACTIONS(151),
    [anon_sym_LT] = ACTIONS(153),
    [anon_sym_LT_EQ] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_GT_EQ] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_x] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_] = ACTIONS(151),
    [anon_sym_STAR_STAR] = ACTIONS(151),
    [anon_sym_IN] = ACTIONS(153),
    [anon_sym_CONTAINS] = ACTIONS(153),
    [anon_sym_2] = ACTIONS(151),
    [anon_sym_CONTAINSNOT] = ACTIONS(153),
    [anon_sym_3] = ACTIONS(151),
    [anon_sym_CONTAINSALL] = ACTIONS(153),
    [anon_sym_4] = ACTIONS(151),
    [anon_sym_CONTAINSANY] = ACTIONS(153),
    [anon_sym_5] = ACTIONS(151),
    [anon_sym_CONTAINSNONE] = ACTIONS(153),
    [anon_sym_6] = ACTIONS(151),
    [anon_sym_INSIDE] = ACTIONS(153),
    [anon_sym_7] = ACTIONS(151),
    [anon_sym_NOTINSIDE] = ACTIONS(153),
    [anon_sym_NOTIN] = ACTIONS(151),
    [anon_sym_8] = ACTIONS(151),
    [anon_sym_ALLINSIDE] = ACTIONS(153),
    [anon_sym_9] = ACTIONS(151),
    [anon_sym_ANYINSIDE] = ACTIONS(153),
    [anon_sym_10] = ACTIONS(151),
    [anon_sym_NONEINSIDE] = ACTIONS(153),
    [anon_sym_11] = ACTIONS(151),
    [anon_sym_OUTSIDE] = ACTIONS(153),
    [anon_sym_INTERSECTS] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(151),
    [anon_sym_DASH_GT] = ACTIONS(151),
    [anon_sym_LT_DASH] = ACTIONS(151),
    [anon_sym_COMMA] = ACTIONS(151),
    [anon_sym_SEMI] = ACTIONS(151),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_any] = ACTIONS(153),
    [anon_sym_array] = ACTIONS(153),
    [anon_sym_bool] = ACTIONS(153),
    [anon_sym_datetime] = ACTIONS(153),
    [anon_sym_decimal] = ACTIONS(153),
    [anon_sym_duration] = ACTIONS(153),
    [anon_sym_float] = ACTIONS(153),
    [anon_sym_int] = ACTIONS(153),
    [anon_sym_number] = ACTIONS(153),
    [anon_sym_object] = ACTIONS(153),
    [anon_sym_string] = ACTIONS(153),
    [anon_sym_record] = ACTIONS(153),
    [anon_sym_geometry] = ACTIONS(153),
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
    [aux_sym_function_token1] = ACTIONS(151),
    [aux_sym_function_token2] = ACTIONS(151),
    [anon_sym_count] = ACTIONS(153),
    [aux_sym_function_token3] = ACTIONS(151),
    [aux_sym_function_token4] = ACTIONS(151),
    [aux_sym_function_token5] = ACTIONS(151),
    [aux_sym_function_token6] = ACTIONS(151),
    [aux_sym_function_token7] = ACTIONS(151),
    [aux_sym_function_token8] = ACTIONS(151),
    [aux_sym_function_token9] = ACTIONS(151),
    [aux_sym_function_token10] = ACTIONS(153),
    [aux_sym_function_token11] = ACTIONS(151),
    [aux_sym_function_token12] = ACTIONS(153),
    [aux_sym_function_token13] = ACTIONS(151),
    [aux_sym_function_token14] = ACTIONS(151),
    [aux_sym_function_token15] = ACTIONS(151),
    [aux_sym_function_token16] = ACTIONS(153),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_false] = ACTIONS(153),
    [anon_sym_TRUE] = ACTIONS(153),
    [anon_sym_FALSE] = ACTIONS(153),
    [anon_sym_null] = ACTIONS(153),
    [anon_sym_NULL] = ACTIONS(153),
    [anon_sym_none] = ACTIONS(153),
    [anon_sym_NONE] = ACTIONS(153),
    [sym_variable] = ACTIONS(151),
    [sym_comment] = ACTIONS(151),
    [anon_sym_SQUOTE] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(151),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_function] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(155),
    [anon_sym_RPAREN] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(155),
    [aux_sym_future_token1] = ACTIONS(155),
    [aux_sym_casting_token1] = ACTIONS(155),
    [aux_sym_property_token1] = ACTIONS(157),
    [aux_sym_identifier_token1] = ACTIONS(157),
    [aux_sym_duration_token1] = ACTIONS(157),
    [aux_sym_constant_token1] = ACTIONS(155),
    [aux_sym_number_token1] = ACTIONS(157),
    [aux_sym_record_token1] = ACTIONS(155),
    [aux_sym_record_token2] = ACTIONS(155),
    [anon_sym_USE] = ACTIONS(157),
    [anon_sym_NS] = ACTIONS(157),
    [anon_sym_DB] = ACTIONS(157),
    [anon_sym_LET] = ACTIONS(157),
    [anon_sym_BEGIN] = ACTIONS(157),
    [anon_sym_TRANSACTION] = ACTIONS(157),
    [anon_sym_CANCEL] = ACTIONS(157),
    [anon_sym_COMMIT] = ACTIONS(157),
    [anon_sym_IF] = ACTIONS(157),
    [anon_sym_ELSE] = ACTIONS(157),
    [anon_sym_THEN] = ACTIONS(157),
    [anon_sym_END] = ACTIONS(157),
    [anon_sym_SELECT] = ACTIONS(157),
    [anon_sym_FROM] = ACTIONS(157),
    [anon_sym_WHERE] = ACTIONS(157),
    [anon_sym_SPLIT] = ACTIONS(157),
    [anon_sym_AT] = ACTIONS(157),
    [anon_sym_GROUP] = ACTIONS(157),
    [anon_sym_BY] = ACTIONS(157),
    [anon_sym_ORDER] = ACTIONS(157),
    [anon_sym_COLLATE] = ACTIONS(157),
    [anon_sym_NUMERIC] = ACTIONS(157),
    [anon_sym_ASC] = ACTIONS(157),
    [anon_sym_DESC] = ACTIONS(157),
    [anon_sym_LIMIT] = ACTIONS(157),
    [anon_sym_START] = ACTIONS(157),
    [anon_sym_FETCH] = ACTIONS(157),
    [anon_sym_TIMEOUT] = ACTIONS(157),
    [anon_sym_PARALLEL] = ACTIONS(157),
    [anon_sym_INSERT] = ACTIONS(157),
    [anon_sym_IGNORE] = ACTIONS(157),
    [anon_sym_INTO] = ACTIONS(157),
    [anon_sym_VALUES] = ACTIONS(157),
    [anon_sym_ON] = ACTIONS(157),
    [anon_sym_DUPLICATE] = ACTIONS(157),
    [anon_sym_KEY] = ACTIONS(157),
    [anon_sym_UPDATE] = ACTIONS(157),
    [anon_sym_CREATE] = ACTIONS(157),
    [anon_sym_CONTENT] = ACTIONS(157),
    [anon_sym_SET] = ACTIONS(157),
    [anon_sym_RETURN] = ACTIONS(157),
    [anon_sym_BEFORE] = ACTIONS(157),
    [anon_sym_AFTER] = ACTIONS(157),
    [anon_sym_DIFF] = ACTIONS(157),
    [anon_sym_MERGE] = ACTIONS(157),
    [anon_sym_PATCH] = ACTIONS(157),
    [anon_sym_RELATE] = ACTIONS(157),
    [anon_sym_DELETE] = ACTIONS(157),
    [anon_sym_DEFINE] = ACTIONS(157),
    [anon_sym_NAMESPACE] = ACTIONS(157),
    [anon_sym_DATABASE] = ACTIONS(157),
    [anon_sym_LOGIN] = ACTIONS(157),
    [anon_sym_PASSWORD] = ACTIONS(157),
    [anon_sym_PASSHASH] = ACTIONS(157),
    [anon_sym_TOKEN] = ACTIONS(157),
    [anon_sym_SCOPE] = ACTIONS(157),
    [anon_sym_TYPE] = ACTIONS(157),
    [anon_sym_VALUE] = ACTIONS(157),
    [anon_sym_SESSION] = ACTIONS(157),
    [anon_sym_SIGNUP] = ACTIONS(157),
    [anon_sym_SIGNIN] = ACTIONS(157),
    [anon_sym_TABLE] = ACTIONS(157),
    [anon_sym_DROP] = ACTIONS(157),
    [anon_sym_SCHEMAFULL] = ACTIONS(157),
    [anon_sym_SCHEMALESS] = ACTIONS(157),
    [anon_sym_AS] = ACTIONS(157),
    [anon_sym_PERMISSIONS] = ACTIONS(157),
    [anon_sym_FULL] = ACTIONS(157),
    [anon_sym_FOR] = ACTIONS(157),
    [anon_sym_select] = ACTIONS(157),
    [anon_sym_update] = ACTIONS(157),
    [anon_sym_create] = ACTIONS(157),
    [anon_sym_delete] = ACTIONS(157),
    [anon_sym_EVENT] = ACTIONS(157),
    [anon_sym_WHEN] = ACTIONS(157),
    [anon_sym_ASSERT] = ACTIONS(157),
    [anon_sym_INDEX] = ACTIONS(157),
    [anon_sym_FIELDS] = ACTIONS(157),
    [anon_sym_COLUMNS] = ACTIONS(157),
    [anon_sym_UNIQUE] = ACTIONS(157),
    [anon_sym_REMOVE] = ACTIONS(157),
    [anon_sym_SLEEP] = ACTIONS(157),
    [anon_sym_INFO] = ACTIONS(157),
    [anon_sym_KV] = ACTIONS(157),
    [anon_sym_FUNCTION] = ACTIONS(157),
    [anon_sym_PARAM] = ACTIONS(157),
    [anon_sym_AMP_AMP] = ACTIONS(155),
    [anon_sym_AND] = ACTIONS(157),
    [anon_sym_PIPE_PIPE] = ACTIONS(155),
    [anon_sym_OR] = ACTIONS(157),
    [anon_sym_QMARK_QMARK] = ACTIONS(155),
    [anon_sym_QMARK_COLON] = ACTIONS(155),
    [anon_sym_EQ] = ACTIONS(157),
    [anon_sym_IS] = ACTIONS(157),
    [anon_sym_BANG_EQ] = ACTIONS(155),
    [anon_sym_ISNOT] = ACTIONS(155),
    [anon_sym_EQ_EQ] = ACTIONS(155),
    [anon_sym_QMARK_EQ] = ACTIONS(155),
    [anon_sym_STAR_EQ] = ACTIONS(155),
    [anon_sym_TILDE] = ACTIONS(155),
    [anon_sym_BANG_TILDE] = ACTIONS(155),
    [anon_sym_QMARK_TILDE] = ACTIONS(155),
    [anon_sym_STAR_TILDE] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(157),
    [anon_sym_LT_EQ] = ACTIONS(155),
    [anon_sym_GT] = ACTIONS(157),
    [anon_sym_GT_EQ] = ACTIONS(155),
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_STAR] = ACTIONS(157),
    [anon_sym_x] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(157),
    [anon_sym_] = ACTIONS(155),
    [anon_sym_STAR_STAR] = ACTIONS(155),
    [anon_sym_IN] = ACTIONS(157),
    [anon_sym_CONTAINS] = ACTIONS(157),
    [anon_sym_2] = ACTIONS(155),
    [anon_sym_CONTAINSNOT] = ACTIONS(157),
    [anon_sym_3] = ACTIONS(155),
    [anon_sym_CONTAINSALL] = ACTIONS(157),
    [anon_sym_4] = ACTIONS(155),
    [anon_sym_CONTAINSANY] = ACTIONS(157),
    [anon_sym_5] = ACTIONS(155),
    [anon_sym_CONTAINSNONE] = ACTIONS(157),
    [anon_sym_6] = ACTIONS(155),
    [anon_sym_INSIDE] = ACTIONS(157),
    [anon_sym_7] = ACTIONS(155),
    [anon_sym_NOTINSIDE] = ACTIONS(157),
    [anon_sym_NOTIN] = ACTIONS(155),
    [anon_sym_8] = ACTIONS(155),
    [anon_sym_ALLINSIDE] = ACTIONS(157),
    [anon_sym_9] = ACTIONS(155),
    [anon_sym_ANYINSIDE] = ACTIONS(157),
    [anon_sym_10] = ACTIONS(155),
    [anon_sym_NONEINSIDE] = ACTIONS(157),
    [anon_sym_11] = ACTIONS(155),
    [anon_sym_OUTSIDE] = ACTIONS(157),
    [anon_sym_INTERSECTS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_RBRACK] = ACTIONS(155),
    [anon_sym_DASH_GT] = ACTIONS(155),
    [anon_sym_LT_DASH] = ACTIONS(155),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(155),
    [anon_sym_COLON] = ACTIONS(155),
    [anon_sym_any] = ACTIONS(157),
    [anon_sym_array] = ACTIONS(157),
    [anon_sym_bool] = ACTIONS(157),
    [anon_sym_datetime] = ACTIONS(157),
    [anon_sym_decimal] = ACTIONS(157),
    [anon_sym_duration] = ACTIONS(157),
    [anon_sym_float] = ACTIONS(157),
    [anon_sym_int] = ACTIONS(157),
    [anon_sym_number] = ACTIONS(157),
    [anon_sym_object] = ACTIONS(157),
    [anon_sym_string] = ACTIONS(157),
    [anon_sym_record] = ACTIONS(157),
    [anon_sym_geometry] = ACTIONS(157),
    [anon_sym_EDDSA] = ACTIONS(157),
    [anon_sym_ES256] = ACTIONS(157),
    [anon_sym_ES384] = ACTIONS(157),
    [anon_sym_ES512] = ACTIONS(157),
    [anon_sym_HS256] = ACTIONS(157),
    [anon_sym_HS384] = ACTIONS(157),
    [anon_sym_HS512] = ACTIONS(157),
    [anon_sym_PS256] = ACTIONS(157),
    [anon_sym_PS384] = ACTIONS(157),
    [anon_sym_PS512] = ACTIONS(157),
    [anon_sym_RS256] = ACTIONS(157),
    [anon_sym_RS384] = ACTIONS(157),
    [anon_sym_RS512] = ACTIONS(157),
    [aux_sym_function_token1] = ACTIONS(155),
    [aux_sym_function_token2] = ACTIONS(155),
    [anon_sym_count] = ACTIONS(157),
    [aux_sym_function_token3] = ACTIONS(155),
    [aux_sym_function_token4] = ACTIONS(155),
    [aux_sym_function_token5] = ACTIONS(155),
    [aux_sym_function_token6] = ACTIONS(155),
    [aux_sym_function_token7] = ACTIONS(155),
    [aux_sym_function_token8] = ACTIONS(155),
    [aux_sym_function_token9] = ACTIONS(155),
    [aux_sym_function_token10] = ACTIONS(157),
    [aux_sym_function_token11] = ACTIONS(155),
    [aux_sym_function_token12] = ACTIONS(157),
    [aux_sym_function_token13] = ACTIONS(155),
    [aux_sym_function_token14] = ACTIONS(155),
    [aux_sym_function_token15] = ACTIONS(155),
    [aux_sym_function_token16] = ACTIONS(157),
    [anon_sym_true] = ACTIONS(157),
    [anon_sym_false] = ACTIONS(157),
    [anon_sym_TRUE] = ACTIONS(157),
    [anon_sym_FALSE] = ACTIONS(157),
    [anon_sym_null] = ACTIONS(157),
    [anon_sym_NULL] = ACTIONS(157),
    [anon_sym_none] = ACTIONS(157),
    [anon_sym_NONE] = ACTIONS(157),
    [sym_variable] = ACTIONS(155),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SQUOTE] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(155),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [anon_sym_function] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_RPAREN] = ACTIONS(159),
    [anon_sym_LBRACE] = ACTIONS(159),
    [anon_sym_RBRACE] = ACTIONS(159),
    [aux_sym_future_token1] = ACTIONS(159),
    [aux_sym_casting_token1] = ACTIONS(159),
    [aux_sym_property_token1] = ACTIONS(161),
    [aux_sym_identifier_token1] = ACTIONS(161),
    [aux_sym_duration_token1] = ACTIONS(161),
    [aux_sym_constant_token1] = ACTIONS(159),
    [aux_sym_number_token1] = ACTIONS(161),
    [aux_sym_record_token1] = ACTIONS(159),
    [aux_sym_record_token2] = ACTIONS(159),
    [anon_sym_USE] = ACTIONS(161),
    [anon_sym_NS] = ACTIONS(161),
    [anon_sym_DB] = ACTIONS(161),
    [anon_sym_LET] = ACTIONS(161),
    [anon_sym_BEGIN] = ACTIONS(161),
    [anon_sym_TRANSACTION] = ACTIONS(161),
    [anon_sym_CANCEL] = ACTIONS(161),
    [anon_sym_COMMIT] = ACTIONS(161),
    [anon_sym_IF] = ACTIONS(161),
    [anon_sym_ELSE] = ACTIONS(161),
    [anon_sym_THEN] = ACTIONS(161),
    [anon_sym_END] = ACTIONS(161),
    [anon_sym_SELECT] = ACTIONS(161),
    [anon_sym_FROM] = ACTIONS(161),
    [anon_sym_WHERE] = ACTIONS(161),
    [anon_sym_SPLIT] = ACTIONS(161),
    [anon_sym_AT] = ACTIONS(161),
    [anon_sym_GROUP] = ACTIONS(161),
    [anon_sym_BY] = ACTIONS(161),
    [anon_sym_ORDER] = ACTIONS(161),
    [anon_sym_COLLATE] = ACTIONS(161),
    [anon_sym_NUMERIC] = ACTIONS(161),
    [anon_sym_ASC] = ACTIONS(161),
    [anon_sym_DESC] = ACTIONS(161),
    [anon_sym_LIMIT] = ACTIONS(161),
    [anon_sym_START] = ACTIONS(161),
    [anon_sym_FETCH] = ACTIONS(161),
    [anon_sym_TIMEOUT] = ACTIONS(161),
    [anon_sym_PARALLEL] = ACTIONS(161),
    [anon_sym_INSERT] = ACTIONS(161),
    [anon_sym_IGNORE] = ACTIONS(161),
    [anon_sym_INTO] = ACTIONS(161),
    [anon_sym_VALUES] = ACTIONS(161),
    [anon_sym_ON] = ACTIONS(161),
    [anon_sym_DUPLICATE] = ACTIONS(161),
    [anon_sym_KEY] = ACTIONS(161),
    [anon_sym_UPDATE] = ACTIONS(161),
    [anon_sym_CREATE] = ACTIONS(161),
    [anon_sym_CONTENT] = ACTIONS(161),
    [anon_sym_SET] = ACTIONS(161),
    [anon_sym_RETURN] = ACTIONS(161),
    [anon_sym_BEFORE] = ACTIONS(161),
    [anon_sym_AFTER] = ACTIONS(161),
    [anon_sym_DIFF] = ACTIONS(161),
    [anon_sym_MERGE] = ACTIONS(161),
    [anon_sym_PATCH] = ACTIONS(161),
    [anon_sym_RELATE] = ACTIONS(161),
    [anon_sym_DELETE] = ACTIONS(161),
    [anon_sym_DEFINE] = ACTIONS(161),
    [anon_sym_NAMESPACE] = ACTIONS(161),
    [anon_sym_DATABASE] = ACTIONS(161),
    [anon_sym_LOGIN] = ACTIONS(161),
    [anon_sym_PASSWORD] = ACTIONS(161),
    [anon_sym_PASSHASH] = ACTIONS(161),
    [anon_sym_TOKEN] = ACTIONS(161),
    [anon_sym_SCOPE] = ACTIONS(161),
    [anon_sym_TYPE] = ACTIONS(161),
    [anon_sym_VALUE] = ACTIONS(161),
    [anon_sym_SESSION] = ACTIONS(161),
    [anon_sym_SIGNUP] = ACTIONS(161),
    [anon_sym_SIGNIN] = ACTIONS(161),
    [anon_sym_TABLE] = ACTIONS(161),
    [anon_sym_DROP] = ACTIONS(161),
    [anon_sym_SCHEMAFULL] = ACTIONS(161),
    [anon_sym_SCHEMALESS] = ACTIONS(161),
    [anon_sym_AS] = ACTIONS(161),
    [anon_sym_PERMISSIONS] = ACTIONS(161),
    [anon_sym_FULL] = ACTIONS(161),
    [anon_sym_FOR] = ACTIONS(161),
    [anon_sym_select] = ACTIONS(161),
    [anon_sym_update] = ACTIONS(161),
    [anon_sym_create] = ACTIONS(161),
    [anon_sym_delete] = ACTIONS(161),
    [anon_sym_EVENT] = ACTIONS(161),
    [anon_sym_WHEN] = ACTIONS(161),
    [anon_sym_ASSERT] = ACTIONS(161),
    [anon_sym_INDEX] = ACTIONS(161),
    [anon_sym_FIELDS] = ACTIONS(161),
    [anon_sym_COLUMNS] = ACTIONS(161),
    [anon_sym_UNIQUE] = ACTIONS(161),
    [anon_sym_REMOVE] = ACTIONS(161),
    [anon_sym_SLEEP] = ACTIONS(161),
    [anon_sym_INFO] = ACTIONS(161),
    [anon_sym_KV] = ACTIONS(161),
    [anon_sym_FUNCTION] = ACTIONS(161),
    [anon_sym_PARAM] = ACTIONS(161),
    [anon_sym_AMP_AMP] = ACTIONS(159),
    [anon_sym_AND] = ACTIONS(161),
    [anon_sym_PIPE_PIPE] = ACTIONS(159),
    [anon_sym_OR] = ACTIONS(161),
    [anon_sym_QMARK_QMARK] = ACTIONS(159),
    [anon_sym_QMARK_COLON] = ACTIONS(159),
    [anon_sym_EQ] = ACTIONS(161),
    [anon_sym_IS] = ACTIONS(161),
    [anon_sym_BANG_EQ] = ACTIONS(159),
    [anon_sym_ISNOT] = ACTIONS(159),
    [anon_sym_EQ_EQ] = ACTIONS(159),
    [anon_sym_QMARK_EQ] = ACTIONS(159),
    [anon_sym_STAR_EQ] = ACTIONS(159),
    [anon_sym_TILDE] = ACTIONS(159),
    [anon_sym_BANG_TILDE] = ACTIONS(159),
    [anon_sym_QMARK_TILDE] = ACTIONS(159),
    [anon_sym_STAR_TILDE] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(161),
    [anon_sym_LT_EQ] = ACTIONS(159),
    [anon_sym_GT] = ACTIONS(161),
    [anon_sym_GT_EQ] = ACTIONS(159),
    [anon_sym_PLUS] = ACTIONS(159),
    [anon_sym_DASH] = ACTIONS(161),
    [anon_sym_STAR] = ACTIONS(161),
    [anon_sym_x] = ACTIONS(161),
    [anon_sym_SLASH] = ACTIONS(161),
    [anon_sym_] = ACTIONS(159),
    [anon_sym_STAR_STAR] = ACTIONS(159),
    [anon_sym_IN] = ACTIONS(161),
    [anon_sym_CONTAINS] = ACTIONS(161),
    [anon_sym_2] = ACTIONS(159),
    [anon_sym_CONTAINSNOT] = ACTIONS(161),
    [anon_sym_3] = ACTIONS(159),
    [anon_sym_CONTAINSALL] = ACTIONS(161),
    [anon_sym_4] = ACTIONS(159),
    [anon_sym_CONTAINSANY] = ACTIONS(161),
    [anon_sym_5] = ACTIONS(159),
    [anon_sym_CONTAINSNONE] = ACTIONS(161),
    [anon_sym_6] = ACTIONS(159),
    [anon_sym_INSIDE] = ACTIONS(161),
    [anon_sym_7] = ACTIONS(159),
    [anon_sym_NOTINSIDE] = ACTIONS(161),
    [anon_sym_NOTIN] = ACTIONS(159),
    [anon_sym_8] = ACTIONS(159),
    [anon_sym_ALLINSIDE] = ACTIONS(161),
    [anon_sym_9] = ACTIONS(159),
    [anon_sym_ANYINSIDE] = ACTIONS(161),
    [anon_sym_10] = ACTIONS(159),
    [anon_sym_NONEINSIDE] = ACTIONS(161),
    [anon_sym_11] = ACTIONS(159),
    [anon_sym_OUTSIDE] = ACTIONS(161),
    [anon_sym_INTERSECTS] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_RBRACK] = ACTIONS(159),
    [anon_sym_DASH_GT] = ACTIONS(159),
    [anon_sym_LT_DASH] = ACTIONS(159),
    [anon_sym_COMMA] = ACTIONS(159),
    [anon_sym_SEMI] = ACTIONS(159),
    [anon_sym_COLON] = ACTIONS(159),
    [anon_sym_any] = ACTIONS(161),
    [anon_sym_array] = ACTIONS(161),
    [anon_sym_bool] = ACTIONS(161),
    [anon_sym_datetime] = ACTIONS(161),
    [anon_sym_decimal] = ACTIONS(161),
    [anon_sym_duration] = ACTIONS(161),
    [anon_sym_float] = ACTIONS(161),
    [anon_sym_int] = ACTIONS(161),
    [anon_sym_number] = ACTIONS(161),
    [anon_sym_object] = ACTIONS(161),
    [anon_sym_string] = ACTIONS(161),
    [anon_sym_record] = ACTIONS(161),
    [anon_sym_geometry] = ACTIONS(161),
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
    [aux_sym_function_token1] = ACTIONS(159),
    [aux_sym_function_token2] = ACTIONS(159),
    [anon_sym_count] = ACTIONS(161),
    [aux_sym_function_token3] = ACTIONS(159),
    [aux_sym_function_token4] = ACTIONS(159),
    [aux_sym_function_token5] = ACTIONS(159),
    [aux_sym_function_token6] = ACTIONS(159),
    [aux_sym_function_token7] = ACTIONS(159),
    [aux_sym_function_token8] = ACTIONS(159),
    [aux_sym_function_token9] = ACTIONS(159),
    [aux_sym_function_token10] = ACTIONS(161),
    [aux_sym_function_token11] = ACTIONS(159),
    [aux_sym_function_token12] = ACTIONS(161),
    [aux_sym_function_token13] = ACTIONS(159),
    [aux_sym_function_token14] = ACTIONS(159),
    [aux_sym_function_token15] = ACTIONS(159),
    [aux_sym_function_token16] = ACTIONS(161),
    [anon_sym_true] = ACTIONS(161),
    [anon_sym_false] = ACTIONS(161),
    [anon_sym_TRUE] = ACTIONS(161),
    [anon_sym_FALSE] = ACTIONS(161),
    [anon_sym_null] = ACTIONS(161),
    [anon_sym_NULL] = ACTIONS(161),
    [anon_sym_none] = ACTIONS(161),
    [anon_sym_NONE] = ACTIONS(161),
    [sym_variable] = ACTIONS(159),
    [sym_comment] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(159),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [anon_sym_function] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(163),
    [anon_sym_RPAREN] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_RBRACE] = ACTIONS(163),
    [aux_sym_future_token1] = ACTIONS(163),
    [aux_sym_casting_token1] = ACTIONS(163),
    [aux_sym_property_token1] = ACTIONS(165),
    [aux_sym_identifier_token1] = ACTIONS(165),
    [aux_sym_duration_token1] = ACTIONS(165),
    [aux_sym_constant_token1] = ACTIONS(163),
    [aux_sym_number_token1] = ACTIONS(165),
    [aux_sym_record_token1] = ACTIONS(163),
    [aux_sym_record_token2] = ACTIONS(163),
    [anon_sym_USE] = ACTIONS(165),
    [anon_sym_NS] = ACTIONS(165),
    [anon_sym_DB] = ACTIONS(165),
    [anon_sym_LET] = ACTIONS(165),
    [anon_sym_BEGIN] = ACTIONS(165),
    [anon_sym_TRANSACTION] = ACTIONS(165),
    [anon_sym_CANCEL] = ACTIONS(165),
    [anon_sym_COMMIT] = ACTIONS(165),
    [anon_sym_IF] = ACTIONS(165),
    [anon_sym_ELSE] = ACTIONS(165),
    [anon_sym_THEN] = ACTIONS(165),
    [anon_sym_END] = ACTIONS(165),
    [anon_sym_SELECT] = ACTIONS(165),
    [anon_sym_FROM] = ACTIONS(165),
    [anon_sym_WHERE] = ACTIONS(165),
    [anon_sym_SPLIT] = ACTIONS(165),
    [anon_sym_AT] = ACTIONS(165),
    [anon_sym_GROUP] = ACTIONS(165),
    [anon_sym_BY] = ACTIONS(165),
    [anon_sym_ORDER] = ACTIONS(165),
    [anon_sym_COLLATE] = ACTIONS(165),
    [anon_sym_NUMERIC] = ACTIONS(165),
    [anon_sym_ASC] = ACTIONS(165),
    [anon_sym_DESC] = ACTIONS(165),
    [anon_sym_LIMIT] = ACTIONS(165),
    [anon_sym_START] = ACTIONS(165),
    [anon_sym_FETCH] = ACTIONS(165),
    [anon_sym_TIMEOUT] = ACTIONS(165),
    [anon_sym_PARALLEL] = ACTIONS(165),
    [anon_sym_INSERT] = ACTIONS(165),
    [anon_sym_IGNORE] = ACTIONS(165),
    [anon_sym_INTO] = ACTIONS(165),
    [anon_sym_VALUES] = ACTIONS(165),
    [anon_sym_ON] = ACTIONS(165),
    [anon_sym_DUPLICATE] = ACTIONS(165),
    [anon_sym_KEY] = ACTIONS(165),
    [anon_sym_UPDATE] = ACTIONS(165),
    [anon_sym_CREATE] = ACTIONS(165),
    [anon_sym_CONTENT] = ACTIONS(165),
    [anon_sym_SET] = ACTIONS(165),
    [anon_sym_RETURN] = ACTIONS(165),
    [anon_sym_BEFORE] = ACTIONS(165),
    [anon_sym_AFTER] = ACTIONS(165),
    [anon_sym_DIFF] = ACTIONS(165),
    [anon_sym_MERGE] = ACTIONS(165),
    [anon_sym_PATCH] = ACTIONS(165),
    [anon_sym_RELATE] = ACTIONS(165),
    [anon_sym_DELETE] = ACTIONS(165),
    [anon_sym_DEFINE] = ACTIONS(165),
    [anon_sym_NAMESPACE] = ACTIONS(165),
    [anon_sym_DATABASE] = ACTIONS(165),
    [anon_sym_LOGIN] = ACTIONS(165),
    [anon_sym_PASSWORD] = ACTIONS(165),
    [anon_sym_PASSHASH] = ACTIONS(165),
    [anon_sym_TOKEN] = ACTIONS(165),
    [anon_sym_SCOPE] = ACTIONS(165),
    [anon_sym_TYPE] = ACTIONS(165),
    [anon_sym_VALUE] = ACTIONS(165),
    [anon_sym_SESSION] = ACTIONS(165),
    [anon_sym_SIGNUP] = ACTIONS(165),
    [anon_sym_SIGNIN] = ACTIONS(165),
    [anon_sym_TABLE] = ACTIONS(165),
    [anon_sym_DROP] = ACTIONS(165),
    [anon_sym_SCHEMAFULL] = ACTIONS(165),
    [anon_sym_SCHEMALESS] = ACTIONS(165),
    [anon_sym_AS] = ACTIONS(165),
    [anon_sym_PERMISSIONS] = ACTIONS(165),
    [anon_sym_FULL] = ACTIONS(165),
    [anon_sym_FOR] = ACTIONS(165),
    [anon_sym_select] = ACTIONS(165),
    [anon_sym_update] = ACTIONS(165),
    [anon_sym_create] = ACTIONS(165),
    [anon_sym_delete] = ACTIONS(165),
    [anon_sym_EVENT] = ACTIONS(165),
    [anon_sym_WHEN] = ACTIONS(165),
    [anon_sym_ASSERT] = ACTIONS(165),
    [anon_sym_INDEX] = ACTIONS(165),
    [anon_sym_FIELDS] = ACTIONS(165),
    [anon_sym_COLUMNS] = ACTIONS(165),
    [anon_sym_UNIQUE] = ACTIONS(165),
    [anon_sym_REMOVE] = ACTIONS(165),
    [anon_sym_SLEEP] = ACTIONS(165),
    [anon_sym_INFO] = ACTIONS(165),
    [anon_sym_KV] = ACTIONS(165),
    [anon_sym_FUNCTION] = ACTIONS(165),
    [anon_sym_PARAM] = ACTIONS(165),
    [anon_sym_AMP_AMP] = ACTIONS(163),
    [anon_sym_AND] = ACTIONS(165),
    [anon_sym_PIPE_PIPE] = ACTIONS(163),
    [anon_sym_OR] = ACTIONS(165),
    [anon_sym_QMARK_QMARK] = ACTIONS(163),
    [anon_sym_QMARK_COLON] = ACTIONS(163),
    [anon_sym_EQ] = ACTIONS(165),
    [anon_sym_IS] = ACTIONS(165),
    [anon_sym_BANG_EQ] = ACTIONS(163),
    [anon_sym_ISNOT] = ACTIONS(163),
    [anon_sym_EQ_EQ] = ACTIONS(163),
    [anon_sym_QMARK_EQ] = ACTIONS(163),
    [anon_sym_STAR_EQ] = ACTIONS(163),
    [anon_sym_TILDE] = ACTIONS(163),
    [anon_sym_BANG_TILDE] = ACTIONS(163),
    [anon_sym_QMARK_TILDE] = ACTIONS(163),
    [anon_sym_STAR_TILDE] = ACTIONS(163),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_LT_EQ] = ACTIONS(163),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_GT_EQ] = ACTIONS(163),
    [anon_sym_PLUS] = ACTIONS(163),
    [anon_sym_DASH] = ACTIONS(165),
    [anon_sym_STAR] = ACTIONS(165),
    [anon_sym_x] = ACTIONS(165),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_] = ACTIONS(163),
    [anon_sym_STAR_STAR] = ACTIONS(163),
    [anon_sym_IN] = ACTIONS(165),
    [anon_sym_CONTAINS] = ACTIONS(165),
    [anon_sym_2] = ACTIONS(163),
    [anon_sym_CONTAINSNOT] = ACTIONS(165),
    [anon_sym_3] = ACTIONS(163),
    [anon_sym_CONTAINSALL] = ACTIONS(165),
    [anon_sym_4] = ACTIONS(163),
    [anon_sym_CONTAINSANY] = ACTIONS(165),
    [anon_sym_5] = ACTIONS(163),
    [anon_sym_CONTAINSNONE] = ACTIONS(165),
    [anon_sym_6] = ACTIONS(163),
    [anon_sym_INSIDE] = ACTIONS(165),
    [anon_sym_7] = ACTIONS(163),
    [anon_sym_NOTINSIDE] = ACTIONS(165),
    [anon_sym_NOTIN] = ACTIONS(163),
    [anon_sym_8] = ACTIONS(163),
    [anon_sym_ALLINSIDE] = ACTIONS(165),
    [anon_sym_9] = ACTIONS(163),
    [anon_sym_ANYINSIDE] = ACTIONS(165),
    [anon_sym_10] = ACTIONS(163),
    [anon_sym_NONEINSIDE] = ACTIONS(165),
    [anon_sym_11] = ACTIONS(163),
    [anon_sym_OUTSIDE] = ACTIONS(165),
    [anon_sym_INTERSECTS] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_RBRACK] = ACTIONS(163),
    [anon_sym_DASH_GT] = ACTIONS(163),
    [anon_sym_LT_DASH] = ACTIONS(163),
    [anon_sym_COMMA] = ACTIONS(163),
    [anon_sym_SEMI] = ACTIONS(163),
    [anon_sym_COLON] = ACTIONS(163),
    [anon_sym_any] = ACTIONS(165),
    [anon_sym_array] = ACTIONS(165),
    [anon_sym_bool] = ACTIONS(165),
    [anon_sym_datetime] = ACTIONS(165),
    [anon_sym_decimal] = ACTIONS(165),
    [anon_sym_duration] = ACTIONS(165),
    [anon_sym_float] = ACTIONS(165),
    [anon_sym_int] = ACTIONS(165),
    [anon_sym_number] = ACTIONS(165),
    [anon_sym_object] = ACTIONS(165),
    [anon_sym_string] = ACTIONS(165),
    [anon_sym_record] = ACTIONS(165),
    [anon_sym_geometry] = ACTIONS(165),
    [anon_sym_EDDSA] = ACTIONS(165),
    [anon_sym_ES256] = ACTIONS(165),
    [anon_sym_ES384] = ACTIONS(165),
    [anon_sym_ES512] = ACTIONS(165),
    [anon_sym_HS256] = ACTIONS(165),
    [anon_sym_HS384] = ACTIONS(165),
    [anon_sym_HS512] = ACTIONS(165),
    [anon_sym_PS256] = ACTIONS(165),
    [anon_sym_PS384] = ACTIONS(165),
    [anon_sym_PS512] = ACTIONS(165),
    [anon_sym_RS256] = ACTIONS(165),
    [anon_sym_RS384] = ACTIONS(165),
    [anon_sym_RS512] = ACTIONS(165),
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
    [anon_sym_true] = ACTIONS(165),
    [anon_sym_false] = ACTIONS(165),
    [anon_sym_TRUE] = ACTIONS(165),
    [anon_sym_FALSE] = ACTIONS(165),
    [anon_sym_null] = ACTIONS(165),
    [anon_sym_NULL] = ACTIONS(165),
    [anon_sym_none] = ACTIONS(165),
    [anon_sym_NONE] = ACTIONS(165),
    [sym_variable] = ACTIONS(163),
    [sym_comment] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(163),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_function] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(167),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_RBRACE] = ACTIONS(167),
    [aux_sym_future_token1] = ACTIONS(167),
    [aux_sym_casting_token1] = ACTIONS(167),
    [aux_sym_property_token1] = ACTIONS(169),
    [aux_sym_identifier_token1] = ACTIONS(169),
    [aux_sym_duration_token1] = ACTIONS(169),
    [aux_sym_constant_token1] = ACTIONS(167),
    [aux_sym_number_token1] = ACTIONS(169),
    [aux_sym_record_token1] = ACTIONS(167),
    [aux_sym_record_token2] = ACTIONS(167),
    [anon_sym_USE] = ACTIONS(169),
    [anon_sym_NS] = ACTIONS(169),
    [anon_sym_DB] = ACTIONS(169),
    [anon_sym_LET] = ACTIONS(169),
    [anon_sym_BEGIN] = ACTIONS(169),
    [anon_sym_TRANSACTION] = ACTIONS(169),
    [anon_sym_CANCEL] = ACTIONS(169),
    [anon_sym_COMMIT] = ACTIONS(169),
    [anon_sym_IF] = ACTIONS(169),
    [anon_sym_ELSE] = ACTIONS(169),
    [anon_sym_THEN] = ACTIONS(169),
    [anon_sym_END] = ACTIONS(169),
    [anon_sym_SELECT] = ACTIONS(169),
    [anon_sym_FROM] = ACTIONS(169),
    [anon_sym_WHERE] = ACTIONS(169),
    [anon_sym_SPLIT] = ACTIONS(169),
    [anon_sym_AT] = ACTIONS(169),
    [anon_sym_GROUP] = ACTIONS(169),
    [anon_sym_BY] = ACTIONS(169),
    [anon_sym_ORDER] = ACTIONS(169),
    [anon_sym_COLLATE] = ACTIONS(169),
    [anon_sym_NUMERIC] = ACTIONS(169),
    [anon_sym_ASC] = ACTIONS(169),
    [anon_sym_DESC] = ACTIONS(169),
    [anon_sym_LIMIT] = ACTIONS(169),
    [anon_sym_START] = ACTIONS(169),
    [anon_sym_FETCH] = ACTIONS(169),
    [anon_sym_TIMEOUT] = ACTIONS(169),
    [anon_sym_PARALLEL] = ACTIONS(169),
    [anon_sym_INSERT] = ACTIONS(169),
    [anon_sym_IGNORE] = ACTIONS(169),
    [anon_sym_INTO] = ACTIONS(169),
    [anon_sym_VALUES] = ACTIONS(169),
    [anon_sym_ON] = ACTIONS(169),
    [anon_sym_DUPLICATE] = ACTIONS(169),
    [anon_sym_KEY] = ACTIONS(169),
    [anon_sym_UPDATE] = ACTIONS(169),
    [anon_sym_CREATE] = ACTIONS(169),
    [anon_sym_CONTENT] = ACTIONS(169),
    [anon_sym_SET] = ACTIONS(169),
    [anon_sym_RETURN] = ACTIONS(169),
    [anon_sym_BEFORE] = ACTIONS(169),
    [anon_sym_AFTER] = ACTIONS(169),
    [anon_sym_DIFF] = ACTIONS(169),
    [anon_sym_MERGE] = ACTIONS(169),
    [anon_sym_PATCH] = ACTIONS(169),
    [anon_sym_RELATE] = ACTIONS(169),
    [anon_sym_DELETE] = ACTIONS(169),
    [anon_sym_DEFINE] = ACTIONS(169),
    [anon_sym_NAMESPACE] = ACTIONS(169),
    [anon_sym_DATABASE] = ACTIONS(169),
    [anon_sym_LOGIN] = ACTIONS(169),
    [anon_sym_PASSWORD] = ACTIONS(169),
    [anon_sym_PASSHASH] = ACTIONS(169),
    [anon_sym_TOKEN] = ACTIONS(169),
    [anon_sym_SCOPE] = ACTIONS(169),
    [anon_sym_TYPE] = ACTIONS(169),
    [anon_sym_VALUE] = ACTIONS(169),
    [anon_sym_SESSION] = ACTIONS(169),
    [anon_sym_SIGNUP] = ACTIONS(169),
    [anon_sym_SIGNIN] = ACTIONS(169),
    [anon_sym_TABLE] = ACTIONS(169),
    [anon_sym_DROP] = ACTIONS(169),
    [anon_sym_SCHEMAFULL] = ACTIONS(169),
    [anon_sym_SCHEMALESS] = ACTIONS(169),
    [anon_sym_AS] = ACTIONS(169),
    [anon_sym_PERMISSIONS] = ACTIONS(169),
    [anon_sym_FULL] = ACTIONS(169),
    [anon_sym_FOR] = ACTIONS(169),
    [anon_sym_select] = ACTIONS(169),
    [anon_sym_update] = ACTIONS(169),
    [anon_sym_create] = ACTIONS(169),
    [anon_sym_delete] = ACTIONS(169),
    [anon_sym_EVENT] = ACTIONS(169),
    [anon_sym_WHEN] = ACTIONS(169),
    [anon_sym_ASSERT] = ACTIONS(169),
    [anon_sym_INDEX] = ACTIONS(169),
    [anon_sym_FIELDS] = ACTIONS(169),
    [anon_sym_COLUMNS] = ACTIONS(169),
    [anon_sym_UNIQUE] = ACTIONS(169),
    [anon_sym_REMOVE] = ACTIONS(169),
    [anon_sym_SLEEP] = ACTIONS(169),
    [anon_sym_INFO] = ACTIONS(169),
    [anon_sym_KV] = ACTIONS(169),
    [anon_sym_FUNCTION] = ACTIONS(169),
    [anon_sym_PARAM] = ACTIONS(169),
    [anon_sym_AMP_AMP] = ACTIONS(167),
    [anon_sym_AND] = ACTIONS(169),
    [anon_sym_PIPE_PIPE] = ACTIONS(167),
    [anon_sym_OR] = ACTIONS(169),
    [anon_sym_QMARK_QMARK] = ACTIONS(167),
    [anon_sym_QMARK_COLON] = ACTIONS(167),
    [anon_sym_EQ] = ACTIONS(169),
    [anon_sym_IS] = ACTIONS(169),
    [anon_sym_BANG_EQ] = ACTIONS(167),
    [anon_sym_ISNOT] = ACTIONS(167),
    [anon_sym_EQ_EQ] = ACTIONS(167),
    [anon_sym_QMARK_EQ] = ACTIONS(167),
    [anon_sym_STAR_EQ] = ACTIONS(167),
    [anon_sym_TILDE] = ACTIONS(167),
    [anon_sym_BANG_TILDE] = ACTIONS(167),
    [anon_sym_QMARK_TILDE] = ACTIONS(167),
    [anon_sym_STAR_TILDE] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(169),
    [anon_sym_LT_EQ] = ACTIONS(167),
    [anon_sym_GT] = ACTIONS(169),
    [anon_sym_GT_EQ] = ACTIONS(167),
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_DASH] = ACTIONS(169),
    [anon_sym_STAR] = ACTIONS(169),
    [anon_sym_x] = ACTIONS(169),
    [anon_sym_SLASH] = ACTIONS(169),
    [anon_sym_] = ACTIONS(167),
    [anon_sym_STAR_STAR] = ACTIONS(167),
    [anon_sym_IN] = ACTIONS(169),
    [anon_sym_CONTAINS] = ACTIONS(169),
    [anon_sym_2] = ACTIONS(167),
    [anon_sym_CONTAINSNOT] = ACTIONS(169),
    [anon_sym_3] = ACTIONS(167),
    [anon_sym_CONTAINSALL] = ACTIONS(169),
    [anon_sym_4] = ACTIONS(167),
    [anon_sym_CONTAINSANY] = ACTIONS(169),
    [anon_sym_5] = ACTIONS(167),
    [anon_sym_CONTAINSNONE] = ACTIONS(169),
    [anon_sym_6] = ACTIONS(167),
    [anon_sym_INSIDE] = ACTIONS(169),
    [anon_sym_7] = ACTIONS(167),
    [anon_sym_NOTINSIDE] = ACTIONS(169),
    [anon_sym_NOTIN] = ACTIONS(167),
    [anon_sym_8] = ACTIONS(167),
    [anon_sym_ALLINSIDE] = ACTIONS(169),
    [anon_sym_9] = ACTIONS(167),
    [anon_sym_ANYINSIDE] = ACTIONS(169),
    [anon_sym_10] = ACTIONS(167),
    [anon_sym_NONEINSIDE] = ACTIONS(169),
    [anon_sym_11] = ACTIONS(167),
    [anon_sym_OUTSIDE] = ACTIONS(169),
    [anon_sym_INTERSECTS] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(167),
    [anon_sym_RBRACK] = ACTIONS(167),
    [anon_sym_DASH_GT] = ACTIONS(167),
    [anon_sym_LT_DASH] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_SEMI] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_any] = ACTIONS(169),
    [anon_sym_array] = ACTIONS(169),
    [anon_sym_bool] = ACTIONS(169),
    [anon_sym_datetime] = ACTIONS(169),
    [anon_sym_decimal] = ACTIONS(169),
    [anon_sym_duration] = ACTIONS(169),
    [anon_sym_float] = ACTIONS(169),
    [anon_sym_int] = ACTIONS(169),
    [anon_sym_number] = ACTIONS(169),
    [anon_sym_object] = ACTIONS(169),
    [anon_sym_string] = ACTIONS(169),
    [anon_sym_record] = ACTIONS(169),
    [anon_sym_geometry] = ACTIONS(169),
    [anon_sym_EDDSA] = ACTIONS(169),
    [anon_sym_ES256] = ACTIONS(169),
    [anon_sym_ES384] = ACTIONS(169),
    [anon_sym_ES512] = ACTIONS(169),
    [anon_sym_HS256] = ACTIONS(169),
    [anon_sym_HS384] = ACTIONS(169),
    [anon_sym_HS512] = ACTIONS(169),
    [anon_sym_PS256] = ACTIONS(169),
    [anon_sym_PS384] = ACTIONS(169),
    [anon_sym_PS512] = ACTIONS(169),
    [anon_sym_RS256] = ACTIONS(169),
    [anon_sym_RS384] = ACTIONS(169),
    [anon_sym_RS512] = ACTIONS(169),
    [aux_sym_function_token1] = ACTIONS(167),
    [aux_sym_function_token2] = ACTIONS(167),
    [anon_sym_count] = ACTIONS(169),
    [aux_sym_function_token3] = ACTIONS(167),
    [aux_sym_function_token4] = ACTIONS(167),
    [aux_sym_function_token5] = ACTIONS(167),
    [aux_sym_function_token6] = ACTIONS(167),
    [aux_sym_function_token7] = ACTIONS(167),
    [aux_sym_function_token8] = ACTIONS(167),
    [aux_sym_function_token9] = ACTIONS(167),
    [aux_sym_function_token10] = ACTIONS(169),
    [aux_sym_function_token11] = ACTIONS(167),
    [aux_sym_function_token12] = ACTIONS(169),
    [aux_sym_function_token13] = ACTIONS(167),
    [aux_sym_function_token14] = ACTIONS(167),
    [aux_sym_function_token15] = ACTIONS(167),
    [aux_sym_function_token16] = ACTIONS(169),
    [anon_sym_true] = ACTIONS(169),
    [anon_sym_false] = ACTIONS(169),
    [anon_sym_TRUE] = ACTIONS(169),
    [anon_sym_FALSE] = ACTIONS(169),
    [anon_sym_null] = ACTIONS(169),
    [anon_sym_NULL] = ACTIONS(169),
    [anon_sym_none] = ACTIONS(169),
    [anon_sym_NONE] = ACTIONS(169),
    [sym_variable] = ACTIONS(167),
    [sym_comment] = ACTIONS(167),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(167),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_function] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(171),
    [anon_sym_RBRACE] = ACTIONS(171),
    [aux_sym_future_token1] = ACTIONS(171),
    [aux_sym_casting_token1] = ACTIONS(171),
    [aux_sym_property_token1] = ACTIONS(173),
    [aux_sym_identifier_token1] = ACTIONS(173),
    [aux_sym_duration_token1] = ACTIONS(173),
    [aux_sym_constant_token1] = ACTIONS(171),
    [aux_sym_number_token1] = ACTIONS(173),
    [aux_sym_record_token1] = ACTIONS(171),
    [aux_sym_record_token2] = ACTIONS(171),
    [anon_sym_USE] = ACTIONS(173),
    [anon_sym_NS] = ACTIONS(173),
    [anon_sym_DB] = ACTIONS(173),
    [anon_sym_LET] = ACTIONS(173),
    [anon_sym_BEGIN] = ACTIONS(173),
    [anon_sym_TRANSACTION] = ACTIONS(173),
    [anon_sym_CANCEL] = ACTIONS(173),
    [anon_sym_COMMIT] = ACTIONS(173),
    [anon_sym_IF] = ACTIONS(173),
    [anon_sym_ELSE] = ACTIONS(173),
    [anon_sym_THEN] = ACTIONS(173),
    [anon_sym_END] = ACTIONS(173),
    [anon_sym_SELECT] = ACTIONS(173),
    [anon_sym_FROM] = ACTIONS(173),
    [anon_sym_WHERE] = ACTIONS(173),
    [anon_sym_SPLIT] = ACTIONS(173),
    [anon_sym_AT] = ACTIONS(173),
    [anon_sym_GROUP] = ACTIONS(173),
    [anon_sym_BY] = ACTIONS(173),
    [anon_sym_ORDER] = ACTIONS(173),
    [anon_sym_COLLATE] = ACTIONS(173),
    [anon_sym_NUMERIC] = ACTIONS(173),
    [anon_sym_ASC] = ACTIONS(173),
    [anon_sym_DESC] = ACTIONS(173),
    [anon_sym_LIMIT] = ACTIONS(173),
    [anon_sym_START] = ACTIONS(173),
    [anon_sym_FETCH] = ACTIONS(173),
    [anon_sym_TIMEOUT] = ACTIONS(173),
    [anon_sym_PARALLEL] = ACTIONS(173),
    [anon_sym_INSERT] = ACTIONS(173),
    [anon_sym_IGNORE] = ACTIONS(173),
    [anon_sym_INTO] = ACTIONS(173),
    [anon_sym_VALUES] = ACTIONS(173),
    [anon_sym_ON] = ACTIONS(173),
    [anon_sym_DUPLICATE] = ACTIONS(173),
    [anon_sym_KEY] = ACTIONS(173),
    [anon_sym_UPDATE] = ACTIONS(173),
    [anon_sym_CREATE] = ACTIONS(173),
    [anon_sym_CONTENT] = ACTIONS(173),
    [anon_sym_SET] = ACTIONS(173),
    [anon_sym_RETURN] = ACTIONS(173),
    [anon_sym_BEFORE] = ACTIONS(173),
    [anon_sym_AFTER] = ACTIONS(173),
    [anon_sym_DIFF] = ACTIONS(173),
    [anon_sym_MERGE] = ACTIONS(173),
    [anon_sym_PATCH] = ACTIONS(173),
    [anon_sym_RELATE] = ACTIONS(173),
    [anon_sym_DELETE] = ACTIONS(173),
    [anon_sym_DEFINE] = ACTIONS(173),
    [anon_sym_NAMESPACE] = ACTIONS(173),
    [anon_sym_DATABASE] = ACTIONS(173),
    [anon_sym_LOGIN] = ACTIONS(173),
    [anon_sym_PASSWORD] = ACTIONS(173),
    [anon_sym_PASSHASH] = ACTIONS(173),
    [anon_sym_TOKEN] = ACTIONS(173),
    [anon_sym_SCOPE] = ACTIONS(173),
    [anon_sym_TYPE] = ACTIONS(173),
    [anon_sym_VALUE] = ACTIONS(173),
    [anon_sym_SESSION] = ACTIONS(173),
    [anon_sym_SIGNUP] = ACTIONS(173),
    [anon_sym_SIGNIN] = ACTIONS(173),
    [anon_sym_TABLE] = ACTIONS(173),
    [anon_sym_DROP] = ACTIONS(173),
    [anon_sym_SCHEMAFULL] = ACTIONS(173),
    [anon_sym_SCHEMALESS] = ACTIONS(173),
    [anon_sym_AS] = ACTIONS(173),
    [anon_sym_PERMISSIONS] = ACTIONS(173),
    [anon_sym_FULL] = ACTIONS(173),
    [anon_sym_FOR] = ACTIONS(173),
    [anon_sym_select] = ACTIONS(173),
    [anon_sym_update] = ACTIONS(173),
    [anon_sym_create] = ACTIONS(173),
    [anon_sym_delete] = ACTIONS(173),
    [anon_sym_EVENT] = ACTIONS(173),
    [anon_sym_WHEN] = ACTIONS(173),
    [anon_sym_ASSERT] = ACTIONS(173),
    [anon_sym_INDEX] = ACTIONS(173),
    [anon_sym_FIELDS] = ACTIONS(173),
    [anon_sym_COLUMNS] = ACTIONS(173),
    [anon_sym_UNIQUE] = ACTIONS(173),
    [anon_sym_REMOVE] = ACTIONS(173),
    [anon_sym_SLEEP] = ACTIONS(173),
    [anon_sym_INFO] = ACTIONS(173),
    [anon_sym_KV] = ACTIONS(173),
    [anon_sym_FUNCTION] = ACTIONS(173),
    [anon_sym_PARAM] = ACTIONS(173),
    [anon_sym_AMP_AMP] = ACTIONS(171),
    [anon_sym_AND] = ACTIONS(173),
    [anon_sym_PIPE_PIPE] = ACTIONS(171),
    [anon_sym_OR] = ACTIONS(173),
    [anon_sym_QMARK_QMARK] = ACTIONS(171),
    [anon_sym_QMARK_COLON] = ACTIONS(171),
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_IS] = ACTIONS(173),
    [anon_sym_BANG_EQ] = ACTIONS(171),
    [anon_sym_ISNOT] = ACTIONS(171),
    [anon_sym_EQ_EQ] = ACTIONS(171),
    [anon_sym_QMARK_EQ] = ACTIONS(171),
    [anon_sym_STAR_EQ] = ACTIONS(171),
    [anon_sym_TILDE] = ACTIONS(171),
    [anon_sym_BANG_TILDE] = ACTIONS(171),
    [anon_sym_QMARK_TILDE] = ACTIONS(171),
    [anon_sym_STAR_TILDE] = ACTIONS(171),
    [anon_sym_LT] = ACTIONS(173),
    [anon_sym_LT_EQ] = ACTIONS(171),
    [anon_sym_GT] = ACTIONS(173),
    [anon_sym_GT_EQ] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_STAR] = ACTIONS(173),
    [anon_sym_x] = ACTIONS(173),
    [anon_sym_SLASH] = ACTIONS(173),
    [anon_sym_] = ACTIONS(171),
    [anon_sym_STAR_STAR] = ACTIONS(171),
    [anon_sym_IN] = ACTIONS(173),
    [anon_sym_CONTAINS] = ACTIONS(173),
    [anon_sym_2] = ACTIONS(171),
    [anon_sym_CONTAINSNOT] = ACTIONS(173),
    [anon_sym_3] = ACTIONS(171),
    [anon_sym_CONTAINSALL] = ACTIONS(173),
    [anon_sym_4] = ACTIONS(171),
    [anon_sym_CONTAINSANY] = ACTIONS(173),
    [anon_sym_5] = ACTIONS(171),
    [anon_sym_CONTAINSNONE] = ACTIONS(173),
    [anon_sym_6] = ACTIONS(171),
    [anon_sym_INSIDE] = ACTIONS(173),
    [anon_sym_7] = ACTIONS(171),
    [anon_sym_NOTINSIDE] = ACTIONS(173),
    [anon_sym_NOTIN] = ACTIONS(171),
    [anon_sym_8] = ACTIONS(171),
    [anon_sym_ALLINSIDE] = ACTIONS(173),
    [anon_sym_9] = ACTIONS(171),
    [anon_sym_ANYINSIDE] = ACTIONS(173),
    [anon_sym_10] = ACTIONS(171),
    [anon_sym_NONEINSIDE] = ACTIONS(173),
    [anon_sym_11] = ACTIONS(171),
    [anon_sym_OUTSIDE] = ACTIONS(173),
    [anon_sym_INTERSECTS] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_RBRACK] = ACTIONS(171),
    [anon_sym_DASH_GT] = ACTIONS(171),
    [anon_sym_LT_DASH] = ACTIONS(171),
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(171),
    [anon_sym_COLON] = ACTIONS(171),
    [anon_sym_any] = ACTIONS(173),
    [anon_sym_array] = ACTIONS(173),
    [anon_sym_bool] = ACTIONS(173),
    [anon_sym_datetime] = ACTIONS(173),
    [anon_sym_decimal] = ACTIONS(173),
    [anon_sym_duration] = ACTIONS(173),
    [anon_sym_float] = ACTIONS(173),
    [anon_sym_int] = ACTIONS(173),
    [anon_sym_number] = ACTIONS(173),
    [anon_sym_object] = ACTIONS(173),
    [anon_sym_string] = ACTIONS(173),
    [anon_sym_record] = ACTIONS(173),
    [anon_sym_geometry] = ACTIONS(173),
    [anon_sym_EDDSA] = ACTIONS(173),
    [anon_sym_ES256] = ACTIONS(173),
    [anon_sym_ES384] = ACTIONS(173),
    [anon_sym_ES512] = ACTIONS(173),
    [anon_sym_HS256] = ACTIONS(173),
    [anon_sym_HS384] = ACTIONS(173),
    [anon_sym_HS512] = ACTIONS(173),
    [anon_sym_PS256] = ACTIONS(173),
    [anon_sym_PS384] = ACTIONS(173),
    [anon_sym_PS512] = ACTIONS(173),
    [anon_sym_RS256] = ACTIONS(173),
    [anon_sym_RS384] = ACTIONS(173),
    [anon_sym_RS512] = ACTIONS(173),
    [aux_sym_function_token1] = ACTIONS(171),
    [aux_sym_function_token2] = ACTIONS(171),
    [anon_sym_count] = ACTIONS(173),
    [aux_sym_function_token3] = ACTIONS(171),
    [aux_sym_function_token4] = ACTIONS(171),
    [aux_sym_function_token5] = ACTIONS(171),
    [aux_sym_function_token6] = ACTIONS(171),
    [aux_sym_function_token7] = ACTIONS(171),
    [aux_sym_function_token8] = ACTIONS(171),
    [aux_sym_function_token9] = ACTIONS(171),
    [aux_sym_function_token10] = ACTIONS(173),
    [aux_sym_function_token11] = ACTIONS(171),
    [aux_sym_function_token12] = ACTIONS(173),
    [aux_sym_function_token13] = ACTIONS(171),
    [aux_sym_function_token14] = ACTIONS(171),
    [aux_sym_function_token15] = ACTIONS(171),
    [aux_sym_function_token16] = ACTIONS(173),
    [anon_sym_true] = ACTIONS(173),
    [anon_sym_false] = ACTIONS(173),
    [anon_sym_TRUE] = ACTIONS(173),
    [anon_sym_FALSE] = ACTIONS(173),
    [anon_sym_null] = ACTIONS(173),
    [anon_sym_NULL] = ACTIONS(173),
    [anon_sym_none] = ACTIONS(173),
    [anon_sym_NONE] = ACTIONS(173),
    [sym_variable] = ACTIONS(171),
    [sym_comment] = ACTIONS(171),
    [anon_sym_SQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(171),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_function] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(175),
    [anon_sym_LBRACE] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(175),
    [aux_sym_future_token1] = ACTIONS(175),
    [aux_sym_casting_token1] = ACTIONS(175),
    [aux_sym_property_token1] = ACTIONS(177),
    [aux_sym_identifier_token1] = ACTIONS(177),
    [aux_sym_duration_token1] = ACTIONS(177),
    [aux_sym_constant_token1] = ACTIONS(175),
    [aux_sym_number_token1] = ACTIONS(177),
    [aux_sym_record_token1] = ACTIONS(175),
    [aux_sym_record_token2] = ACTIONS(175),
    [anon_sym_USE] = ACTIONS(177),
    [anon_sym_NS] = ACTIONS(177),
    [anon_sym_DB] = ACTIONS(177),
    [anon_sym_LET] = ACTIONS(177),
    [anon_sym_BEGIN] = ACTIONS(177),
    [anon_sym_TRANSACTION] = ACTIONS(177),
    [anon_sym_CANCEL] = ACTIONS(177),
    [anon_sym_COMMIT] = ACTIONS(177),
    [anon_sym_IF] = ACTIONS(177),
    [anon_sym_ELSE] = ACTIONS(177),
    [anon_sym_THEN] = ACTIONS(177),
    [anon_sym_END] = ACTIONS(177),
    [anon_sym_SELECT] = ACTIONS(177),
    [anon_sym_FROM] = ACTIONS(177),
    [anon_sym_WHERE] = ACTIONS(177),
    [anon_sym_SPLIT] = ACTIONS(177),
    [anon_sym_AT] = ACTIONS(177),
    [anon_sym_GROUP] = ACTIONS(177),
    [anon_sym_BY] = ACTIONS(177),
    [anon_sym_ORDER] = ACTIONS(177),
    [anon_sym_COLLATE] = ACTIONS(177),
    [anon_sym_NUMERIC] = ACTIONS(177),
    [anon_sym_ASC] = ACTIONS(177),
    [anon_sym_DESC] = ACTIONS(177),
    [anon_sym_LIMIT] = ACTIONS(177),
    [anon_sym_START] = ACTIONS(177),
    [anon_sym_FETCH] = ACTIONS(177),
    [anon_sym_TIMEOUT] = ACTIONS(177),
    [anon_sym_PARALLEL] = ACTIONS(177),
    [anon_sym_INSERT] = ACTIONS(177),
    [anon_sym_IGNORE] = ACTIONS(177),
    [anon_sym_INTO] = ACTIONS(177),
    [anon_sym_VALUES] = ACTIONS(177),
    [anon_sym_ON] = ACTIONS(177),
    [anon_sym_DUPLICATE] = ACTIONS(177),
    [anon_sym_KEY] = ACTIONS(177),
    [anon_sym_UPDATE] = ACTIONS(177),
    [anon_sym_CREATE] = ACTIONS(177),
    [anon_sym_CONTENT] = ACTIONS(177),
    [anon_sym_SET] = ACTIONS(177),
    [anon_sym_RETURN] = ACTIONS(177),
    [anon_sym_BEFORE] = ACTIONS(177),
    [anon_sym_AFTER] = ACTIONS(177),
    [anon_sym_DIFF] = ACTIONS(177),
    [anon_sym_MERGE] = ACTIONS(177),
    [anon_sym_PATCH] = ACTIONS(177),
    [anon_sym_RELATE] = ACTIONS(177),
    [anon_sym_DELETE] = ACTIONS(177),
    [anon_sym_DEFINE] = ACTIONS(177),
    [anon_sym_NAMESPACE] = ACTIONS(177),
    [anon_sym_DATABASE] = ACTIONS(177),
    [anon_sym_LOGIN] = ACTIONS(177),
    [anon_sym_PASSWORD] = ACTIONS(177),
    [anon_sym_PASSHASH] = ACTIONS(177),
    [anon_sym_TOKEN] = ACTIONS(177),
    [anon_sym_SCOPE] = ACTIONS(177),
    [anon_sym_TYPE] = ACTIONS(177),
    [anon_sym_VALUE] = ACTIONS(177),
    [anon_sym_SESSION] = ACTIONS(177),
    [anon_sym_SIGNUP] = ACTIONS(177),
    [anon_sym_SIGNIN] = ACTIONS(177),
    [anon_sym_TABLE] = ACTIONS(177),
    [anon_sym_DROP] = ACTIONS(177),
    [anon_sym_SCHEMAFULL] = ACTIONS(177),
    [anon_sym_SCHEMALESS] = ACTIONS(177),
    [anon_sym_AS] = ACTIONS(177),
    [anon_sym_PERMISSIONS] = ACTIONS(177),
    [anon_sym_FULL] = ACTIONS(177),
    [anon_sym_FOR] = ACTIONS(177),
    [anon_sym_select] = ACTIONS(177),
    [anon_sym_update] = ACTIONS(177),
    [anon_sym_create] = ACTIONS(177),
    [anon_sym_delete] = ACTIONS(177),
    [anon_sym_EVENT] = ACTIONS(177),
    [anon_sym_WHEN] = ACTIONS(177),
    [anon_sym_ASSERT] = ACTIONS(177),
    [anon_sym_INDEX] = ACTIONS(177),
    [anon_sym_FIELDS] = ACTIONS(177),
    [anon_sym_COLUMNS] = ACTIONS(177),
    [anon_sym_UNIQUE] = ACTIONS(177),
    [anon_sym_REMOVE] = ACTIONS(177),
    [anon_sym_SLEEP] = ACTIONS(177),
    [anon_sym_INFO] = ACTIONS(177),
    [anon_sym_KV] = ACTIONS(177),
    [anon_sym_FUNCTION] = ACTIONS(177),
    [anon_sym_PARAM] = ACTIONS(177),
    [anon_sym_AMP_AMP] = ACTIONS(175),
    [anon_sym_AND] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(175),
    [anon_sym_OR] = ACTIONS(177),
    [anon_sym_QMARK_QMARK] = ACTIONS(175),
    [anon_sym_QMARK_COLON] = ACTIONS(175),
    [anon_sym_EQ] = ACTIONS(177),
    [anon_sym_IS] = ACTIONS(177),
    [anon_sym_BANG_EQ] = ACTIONS(175),
    [anon_sym_ISNOT] = ACTIONS(175),
    [anon_sym_EQ_EQ] = ACTIONS(175),
    [anon_sym_QMARK_EQ] = ACTIONS(175),
    [anon_sym_STAR_EQ] = ACTIONS(175),
    [anon_sym_TILDE] = ACTIONS(175),
    [anon_sym_BANG_TILDE] = ACTIONS(175),
    [anon_sym_QMARK_TILDE] = ACTIONS(175),
    [anon_sym_STAR_TILDE] = ACTIONS(175),
    [anon_sym_LT] = ACTIONS(177),
    [anon_sym_LT_EQ] = ACTIONS(175),
    [anon_sym_GT] = ACTIONS(177),
    [anon_sym_GT_EQ] = ACTIONS(175),
    [anon_sym_PLUS] = ACTIONS(175),
    [anon_sym_DASH] = ACTIONS(177),
    [anon_sym_STAR] = ACTIONS(177),
    [anon_sym_x] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(177),
    [anon_sym_] = ACTIONS(175),
    [anon_sym_STAR_STAR] = ACTIONS(175),
    [anon_sym_IN] = ACTIONS(177),
    [anon_sym_CONTAINS] = ACTIONS(177),
    [anon_sym_2] = ACTIONS(175),
    [anon_sym_CONTAINSNOT] = ACTIONS(177),
    [anon_sym_3] = ACTIONS(175),
    [anon_sym_CONTAINSALL] = ACTIONS(177),
    [anon_sym_4] = ACTIONS(175),
    [anon_sym_CONTAINSANY] = ACTIONS(177),
    [anon_sym_5] = ACTIONS(175),
    [anon_sym_CONTAINSNONE] = ACTIONS(177),
    [anon_sym_6] = ACTIONS(175),
    [anon_sym_INSIDE] = ACTIONS(177),
    [anon_sym_7] = ACTIONS(175),
    [anon_sym_NOTINSIDE] = ACTIONS(177),
    [anon_sym_NOTIN] = ACTIONS(175),
    [anon_sym_8] = ACTIONS(175),
    [anon_sym_ALLINSIDE] = ACTIONS(177),
    [anon_sym_9] = ACTIONS(175),
    [anon_sym_ANYINSIDE] = ACTIONS(177),
    [anon_sym_10] = ACTIONS(175),
    [anon_sym_NONEINSIDE] = ACTIONS(177),
    [anon_sym_11] = ACTIONS(175),
    [anon_sym_OUTSIDE] = ACTIONS(177),
    [anon_sym_INTERSECTS] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(175),
    [anon_sym_RBRACK] = ACTIONS(175),
    [anon_sym_DASH_GT] = ACTIONS(175),
    [anon_sym_LT_DASH] = ACTIONS(175),
    [anon_sym_COMMA] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(175),
    [anon_sym_COLON] = ACTIONS(175),
    [anon_sym_any] = ACTIONS(177),
    [anon_sym_array] = ACTIONS(177),
    [anon_sym_bool] = ACTIONS(177),
    [anon_sym_datetime] = ACTIONS(177),
    [anon_sym_decimal] = ACTIONS(177),
    [anon_sym_duration] = ACTIONS(177),
    [anon_sym_float] = ACTIONS(177),
    [anon_sym_int] = ACTIONS(177),
    [anon_sym_number] = ACTIONS(177),
    [anon_sym_object] = ACTIONS(177),
    [anon_sym_string] = ACTIONS(177),
    [anon_sym_record] = ACTIONS(177),
    [anon_sym_geometry] = ACTIONS(177),
    [anon_sym_EDDSA] = ACTIONS(177),
    [anon_sym_ES256] = ACTIONS(177),
    [anon_sym_ES384] = ACTIONS(177),
    [anon_sym_ES512] = ACTIONS(177),
    [anon_sym_HS256] = ACTIONS(177),
    [anon_sym_HS384] = ACTIONS(177),
    [anon_sym_HS512] = ACTIONS(177),
    [anon_sym_PS256] = ACTIONS(177),
    [anon_sym_PS384] = ACTIONS(177),
    [anon_sym_PS512] = ACTIONS(177),
    [anon_sym_RS256] = ACTIONS(177),
    [anon_sym_RS384] = ACTIONS(177),
    [anon_sym_RS512] = ACTIONS(177),
    [aux_sym_function_token1] = ACTIONS(175),
    [aux_sym_function_token2] = ACTIONS(175),
    [anon_sym_count] = ACTIONS(177),
    [aux_sym_function_token3] = ACTIONS(175),
    [aux_sym_function_token4] = ACTIONS(175),
    [aux_sym_function_token5] = ACTIONS(175),
    [aux_sym_function_token6] = ACTIONS(175),
    [aux_sym_function_token7] = ACTIONS(175),
    [aux_sym_function_token8] = ACTIONS(175),
    [aux_sym_function_token9] = ACTIONS(175),
    [aux_sym_function_token10] = ACTIONS(177),
    [aux_sym_function_token11] = ACTIONS(175),
    [aux_sym_function_token12] = ACTIONS(177),
    [aux_sym_function_token13] = ACTIONS(175),
    [aux_sym_function_token14] = ACTIONS(175),
    [aux_sym_function_token15] = ACTIONS(175),
    [aux_sym_function_token16] = ACTIONS(177),
    [anon_sym_true] = ACTIONS(177),
    [anon_sym_false] = ACTIONS(177),
    [anon_sym_TRUE] = ACTIONS(177),
    [anon_sym_FALSE] = ACTIONS(177),
    [anon_sym_null] = ACTIONS(177),
    [anon_sym_NULL] = ACTIONS(177),
    [anon_sym_none] = ACTIONS(177),
    [anon_sym_NONE] = ACTIONS(177),
    [sym_variable] = ACTIONS(175),
    [sym_comment] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(175),
    [anon_sym_DQUOTE] = ACTIONS(175),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [anon_sym_function] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_RPAREN] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_RBRACE] = ACTIONS(179),
    [aux_sym_future_token1] = ACTIONS(179),
    [aux_sym_casting_token1] = ACTIONS(179),
    [aux_sym_property_token1] = ACTIONS(181),
    [aux_sym_identifier_token1] = ACTIONS(181),
    [aux_sym_duration_token1] = ACTIONS(181),
    [aux_sym_constant_token1] = ACTIONS(179),
    [aux_sym_number_token1] = ACTIONS(181),
    [aux_sym_record_token1] = ACTIONS(179),
    [aux_sym_record_token2] = ACTIONS(179),
    [anon_sym_USE] = ACTIONS(181),
    [anon_sym_NS] = ACTIONS(181),
    [anon_sym_DB] = ACTIONS(181),
    [anon_sym_LET] = ACTIONS(181),
    [anon_sym_BEGIN] = ACTIONS(181),
    [anon_sym_TRANSACTION] = ACTIONS(181),
    [anon_sym_CANCEL] = ACTIONS(181),
    [anon_sym_COMMIT] = ACTIONS(181),
    [anon_sym_IF] = ACTIONS(181),
    [anon_sym_ELSE] = ACTIONS(181),
    [anon_sym_THEN] = ACTIONS(181),
    [anon_sym_END] = ACTIONS(181),
    [anon_sym_SELECT] = ACTIONS(181),
    [anon_sym_FROM] = ACTIONS(181),
    [anon_sym_WHERE] = ACTIONS(181),
    [anon_sym_SPLIT] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(181),
    [anon_sym_GROUP] = ACTIONS(181),
    [anon_sym_BY] = ACTIONS(181),
    [anon_sym_ORDER] = ACTIONS(181),
    [anon_sym_COLLATE] = ACTIONS(181),
    [anon_sym_NUMERIC] = ACTIONS(181),
    [anon_sym_ASC] = ACTIONS(181),
    [anon_sym_DESC] = ACTIONS(181),
    [anon_sym_LIMIT] = ACTIONS(181),
    [anon_sym_START] = ACTIONS(181),
    [anon_sym_FETCH] = ACTIONS(181),
    [anon_sym_TIMEOUT] = ACTIONS(181),
    [anon_sym_PARALLEL] = ACTIONS(181),
    [anon_sym_INSERT] = ACTIONS(181),
    [anon_sym_IGNORE] = ACTIONS(181),
    [anon_sym_INTO] = ACTIONS(181),
    [anon_sym_VALUES] = ACTIONS(181),
    [anon_sym_ON] = ACTIONS(181),
    [anon_sym_DUPLICATE] = ACTIONS(181),
    [anon_sym_KEY] = ACTIONS(181),
    [anon_sym_UPDATE] = ACTIONS(181),
    [anon_sym_CREATE] = ACTIONS(181),
    [anon_sym_CONTENT] = ACTIONS(181),
    [anon_sym_SET] = ACTIONS(181),
    [anon_sym_RETURN] = ACTIONS(181),
    [anon_sym_BEFORE] = ACTIONS(181),
    [anon_sym_AFTER] = ACTIONS(181),
    [anon_sym_DIFF] = ACTIONS(181),
    [anon_sym_MERGE] = ACTIONS(181),
    [anon_sym_PATCH] = ACTIONS(181),
    [anon_sym_RELATE] = ACTIONS(181),
    [anon_sym_DELETE] = ACTIONS(181),
    [anon_sym_DEFINE] = ACTIONS(181),
    [anon_sym_NAMESPACE] = ACTIONS(181),
    [anon_sym_DATABASE] = ACTIONS(181),
    [anon_sym_LOGIN] = ACTIONS(181),
    [anon_sym_PASSWORD] = ACTIONS(181),
    [anon_sym_PASSHASH] = ACTIONS(181),
    [anon_sym_TOKEN] = ACTIONS(181),
    [anon_sym_SCOPE] = ACTIONS(181),
    [anon_sym_TYPE] = ACTIONS(181),
    [anon_sym_VALUE] = ACTIONS(181),
    [anon_sym_SESSION] = ACTIONS(181),
    [anon_sym_SIGNUP] = ACTIONS(181),
    [anon_sym_SIGNIN] = ACTIONS(181),
    [anon_sym_TABLE] = ACTIONS(181),
    [anon_sym_DROP] = ACTIONS(181),
    [anon_sym_SCHEMAFULL] = ACTIONS(181),
    [anon_sym_SCHEMALESS] = ACTIONS(181),
    [anon_sym_AS] = ACTIONS(181),
    [anon_sym_PERMISSIONS] = ACTIONS(181),
    [anon_sym_FULL] = ACTIONS(181),
    [anon_sym_FOR] = ACTIONS(181),
    [anon_sym_select] = ACTIONS(181),
    [anon_sym_update] = ACTIONS(181),
    [anon_sym_create] = ACTIONS(181),
    [anon_sym_delete] = ACTIONS(181),
    [anon_sym_EVENT] = ACTIONS(181),
    [anon_sym_WHEN] = ACTIONS(181),
    [anon_sym_ASSERT] = ACTIONS(181),
    [anon_sym_INDEX] = ACTIONS(181),
    [anon_sym_FIELDS] = ACTIONS(181),
    [anon_sym_COLUMNS] = ACTIONS(181),
    [anon_sym_UNIQUE] = ACTIONS(181),
    [anon_sym_REMOVE] = ACTIONS(181),
    [anon_sym_SLEEP] = ACTIONS(181),
    [anon_sym_INFO] = ACTIONS(181),
    [anon_sym_KV] = ACTIONS(181),
    [anon_sym_FUNCTION] = ACTIONS(181),
    [anon_sym_PARAM] = ACTIONS(181),
    [anon_sym_AMP_AMP] = ACTIONS(179),
    [anon_sym_AND] = ACTIONS(181),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [anon_sym_OR] = ACTIONS(181),
    [anon_sym_QMARK_QMARK] = ACTIONS(179),
    [anon_sym_QMARK_COLON] = ACTIONS(179),
    [anon_sym_EQ] = ACTIONS(181),
    [anon_sym_IS] = ACTIONS(181),
    [anon_sym_BANG_EQ] = ACTIONS(179),
    [anon_sym_ISNOT] = ACTIONS(179),
    [anon_sym_EQ_EQ] = ACTIONS(179),
    [anon_sym_QMARK_EQ] = ACTIONS(179),
    [anon_sym_STAR_EQ] = ACTIONS(179),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_BANG_TILDE] = ACTIONS(179),
    [anon_sym_QMARK_TILDE] = ACTIONS(179),
    [anon_sym_STAR_TILDE] = ACTIONS(179),
    [anon_sym_LT] = ACTIONS(181),
    [anon_sym_LT_EQ] = ACTIONS(179),
    [anon_sym_GT] = ACTIONS(181),
    [anon_sym_GT_EQ] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_STAR] = ACTIONS(181),
    [anon_sym_x] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_] = ACTIONS(179),
    [anon_sym_STAR_STAR] = ACTIONS(179),
    [anon_sym_IN] = ACTIONS(181),
    [anon_sym_CONTAINS] = ACTIONS(181),
    [anon_sym_2] = ACTIONS(179),
    [anon_sym_CONTAINSNOT] = ACTIONS(181),
    [anon_sym_3] = ACTIONS(179),
    [anon_sym_CONTAINSALL] = ACTIONS(181),
    [anon_sym_4] = ACTIONS(179),
    [anon_sym_CONTAINSANY] = ACTIONS(181),
    [anon_sym_5] = ACTIONS(179),
    [anon_sym_CONTAINSNONE] = ACTIONS(181),
    [anon_sym_6] = ACTIONS(179),
    [anon_sym_INSIDE] = ACTIONS(181),
    [anon_sym_7] = ACTIONS(179),
    [anon_sym_NOTINSIDE] = ACTIONS(181),
    [anon_sym_NOTIN] = ACTIONS(179),
    [anon_sym_8] = ACTIONS(179),
    [anon_sym_ALLINSIDE] = ACTIONS(181),
    [anon_sym_9] = ACTIONS(179),
    [anon_sym_ANYINSIDE] = ACTIONS(181),
    [anon_sym_10] = ACTIONS(179),
    [anon_sym_NONEINSIDE] = ACTIONS(181),
    [anon_sym_11] = ACTIONS(179),
    [anon_sym_OUTSIDE] = ACTIONS(181),
    [anon_sym_INTERSECTS] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(179),
    [anon_sym_DASH_GT] = ACTIONS(179),
    [anon_sym_LT_DASH] = ACTIONS(179),
    [anon_sym_COMMA] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_any] = ACTIONS(181),
    [anon_sym_array] = ACTIONS(181),
    [anon_sym_bool] = ACTIONS(181),
    [anon_sym_datetime] = ACTIONS(181),
    [anon_sym_decimal] = ACTIONS(181),
    [anon_sym_duration] = ACTIONS(181),
    [anon_sym_float] = ACTIONS(181),
    [anon_sym_int] = ACTIONS(181),
    [anon_sym_number] = ACTIONS(181),
    [anon_sym_object] = ACTIONS(181),
    [anon_sym_string] = ACTIONS(181),
    [anon_sym_record] = ACTIONS(181),
    [anon_sym_geometry] = ACTIONS(181),
    [anon_sym_EDDSA] = ACTIONS(181),
    [anon_sym_ES256] = ACTIONS(181),
    [anon_sym_ES384] = ACTIONS(181),
    [anon_sym_ES512] = ACTIONS(181),
    [anon_sym_HS256] = ACTIONS(181),
    [anon_sym_HS384] = ACTIONS(181),
    [anon_sym_HS512] = ACTIONS(181),
    [anon_sym_PS256] = ACTIONS(181),
    [anon_sym_PS384] = ACTIONS(181),
    [anon_sym_PS512] = ACTIONS(181),
    [anon_sym_RS256] = ACTIONS(181),
    [anon_sym_RS384] = ACTIONS(181),
    [anon_sym_RS512] = ACTIONS(181),
    [aux_sym_function_token1] = ACTIONS(179),
    [aux_sym_function_token2] = ACTIONS(179),
    [anon_sym_count] = ACTIONS(181),
    [aux_sym_function_token3] = ACTIONS(179),
    [aux_sym_function_token4] = ACTIONS(179),
    [aux_sym_function_token5] = ACTIONS(179),
    [aux_sym_function_token6] = ACTIONS(179),
    [aux_sym_function_token7] = ACTIONS(179),
    [aux_sym_function_token8] = ACTIONS(179),
    [aux_sym_function_token9] = ACTIONS(179),
    [aux_sym_function_token10] = ACTIONS(181),
    [aux_sym_function_token11] = ACTIONS(179),
    [aux_sym_function_token12] = ACTIONS(181),
    [aux_sym_function_token13] = ACTIONS(179),
    [aux_sym_function_token14] = ACTIONS(179),
    [aux_sym_function_token15] = ACTIONS(179),
    [aux_sym_function_token16] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(181),
    [anon_sym_false] = ACTIONS(181),
    [anon_sym_TRUE] = ACTIONS(181),
    [anon_sym_FALSE] = ACTIONS(181),
    [anon_sym_null] = ACTIONS(181),
    [anon_sym_NULL] = ACTIONS(181),
    [anon_sym_none] = ACTIONS(181),
    [anon_sym_NONE] = ACTIONS(181),
    [sym_variable] = ACTIONS(179),
    [sym_comment] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(179),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [anon_sym_function] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(183),
    [anon_sym_RBRACE] = ACTIONS(183),
    [aux_sym_future_token1] = ACTIONS(183),
    [aux_sym_casting_token1] = ACTIONS(183),
    [aux_sym_property_token1] = ACTIONS(185),
    [aux_sym_identifier_token1] = ACTIONS(185),
    [aux_sym_duration_token1] = ACTIONS(185),
    [aux_sym_constant_token1] = ACTIONS(183),
    [aux_sym_number_token1] = ACTIONS(185),
    [aux_sym_record_token1] = ACTIONS(183),
    [aux_sym_record_token2] = ACTIONS(183),
    [anon_sym_USE] = ACTIONS(185),
    [anon_sym_NS] = ACTIONS(185),
    [anon_sym_DB] = ACTIONS(185),
    [anon_sym_LET] = ACTIONS(185),
    [anon_sym_BEGIN] = ACTIONS(185),
    [anon_sym_TRANSACTION] = ACTIONS(185),
    [anon_sym_CANCEL] = ACTIONS(185),
    [anon_sym_COMMIT] = ACTIONS(185),
    [anon_sym_IF] = ACTIONS(185),
    [anon_sym_ELSE] = ACTIONS(185),
    [anon_sym_THEN] = ACTIONS(185),
    [anon_sym_END] = ACTIONS(185),
    [anon_sym_SELECT] = ACTIONS(185),
    [anon_sym_FROM] = ACTIONS(185),
    [anon_sym_WHERE] = ACTIONS(185),
    [anon_sym_SPLIT] = ACTIONS(185),
    [anon_sym_AT] = ACTIONS(185),
    [anon_sym_GROUP] = ACTIONS(185),
    [anon_sym_BY] = ACTIONS(185),
    [anon_sym_ORDER] = ACTIONS(185),
    [anon_sym_COLLATE] = ACTIONS(185),
    [anon_sym_NUMERIC] = ACTIONS(185),
    [anon_sym_ASC] = ACTIONS(185),
    [anon_sym_DESC] = ACTIONS(185),
    [anon_sym_LIMIT] = ACTIONS(185),
    [anon_sym_START] = ACTIONS(185),
    [anon_sym_FETCH] = ACTIONS(185),
    [anon_sym_TIMEOUT] = ACTIONS(185),
    [anon_sym_PARALLEL] = ACTIONS(185),
    [anon_sym_INSERT] = ACTIONS(185),
    [anon_sym_IGNORE] = ACTIONS(185),
    [anon_sym_INTO] = ACTIONS(185),
    [anon_sym_VALUES] = ACTIONS(185),
    [anon_sym_ON] = ACTIONS(185),
    [anon_sym_DUPLICATE] = ACTIONS(185),
    [anon_sym_KEY] = ACTIONS(185),
    [anon_sym_UPDATE] = ACTIONS(185),
    [anon_sym_CREATE] = ACTIONS(185),
    [anon_sym_CONTENT] = ACTIONS(185),
    [anon_sym_SET] = ACTIONS(185),
    [anon_sym_RETURN] = ACTIONS(185),
    [anon_sym_BEFORE] = ACTIONS(185),
    [anon_sym_AFTER] = ACTIONS(185),
    [anon_sym_DIFF] = ACTIONS(185),
    [anon_sym_MERGE] = ACTIONS(185),
    [anon_sym_PATCH] = ACTIONS(185),
    [anon_sym_RELATE] = ACTIONS(185),
    [anon_sym_DELETE] = ACTIONS(185),
    [anon_sym_DEFINE] = ACTIONS(185),
    [anon_sym_NAMESPACE] = ACTIONS(185),
    [anon_sym_DATABASE] = ACTIONS(185),
    [anon_sym_LOGIN] = ACTIONS(185),
    [anon_sym_PASSWORD] = ACTIONS(185),
    [anon_sym_PASSHASH] = ACTIONS(185),
    [anon_sym_TOKEN] = ACTIONS(185),
    [anon_sym_SCOPE] = ACTIONS(185),
    [anon_sym_TYPE] = ACTIONS(185),
    [anon_sym_VALUE] = ACTIONS(185),
    [anon_sym_SESSION] = ACTIONS(185),
    [anon_sym_SIGNUP] = ACTIONS(185),
    [anon_sym_SIGNIN] = ACTIONS(185),
    [anon_sym_TABLE] = ACTIONS(185),
    [anon_sym_DROP] = ACTIONS(185),
    [anon_sym_SCHEMAFULL] = ACTIONS(185),
    [anon_sym_SCHEMALESS] = ACTIONS(185),
    [anon_sym_AS] = ACTIONS(185),
    [anon_sym_PERMISSIONS] = ACTIONS(185),
    [anon_sym_FULL] = ACTIONS(185),
    [anon_sym_FOR] = ACTIONS(185),
    [anon_sym_select] = ACTIONS(185),
    [anon_sym_update] = ACTIONS(185),
    [anon_sym_create] = ACTIONS(185),
    [anon_sym_delete] = ACTIONS(185),
    [anon_sym_EVENT] = ACTIONS(185),
    [anon_sym_WHEN] = ACTIONS(185),
    [anon_sym_ASSERT] = ACTIONS(185),
    [anon_sym_INDEX] = ACTIONS(185),
    [anon_sym_FIELDS] = ACTIONS(185),
    [anon_sym_COLUMNS] = ACTIONS(185),
    [anon_sym_UNIQUE] = ACTIONS(185),
    [anon_sym_REMOVE] = ACTIONS(185),
    [anon_sym_SLEEP] = ACTIONS(185),
    [anon_sym_INFO] = ACTIONS(185),
    [anon_sym_KV] = ACTIONS(185),
    [anon_sym_FUNCTION] = ACTIONS(185),
    [anon_sym_PARAM] = ACTIONS(185),
    [anon_sym_AMP_AMP] = ACTIONS(183),
    [anon_sym_AND] = ACTIONS(185),
    [anon_sym_PIPE_PIPE] = ACTIONS(183),
    [anon_sym_OR] = ACTIONS(185),
    [anon_sym_QMARK_QMARK] = ACTIONS(183),
    [anon_sym_QMARK_COLON] = ACTIONS(183),
    [anon_sym_EQ] = ACTIONS(185),
    [anon_sym_IS] = ACTIONS(185),
    [anon_sym_BANG_EQ] = ACTIONS(183),
    [anon_sym_ISNOT] = ACTIONS(183),
    [anon_sym_EQ_EQ] = ACTIONS(183),
    [anon_sym_QMARK_EQ] = ACTIONS(183),
    [anon_sym_STAR_EQ] = ACTIONS(183),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_BANG_TILDE] = ACTIONS(183),
    [anon_sym_QMARK_TILDE] = ACTIONS(183),
    [anon_sym_STAR_TILDE] = ACTIONS(183),
    [anon_sym_LT] = ACTIONS(185),
    [anon_sym_LT_EQ] = ACTIONS(183),
    [anon_sym_GT] = ACTIONS(185),
    [anon_sym_GT_EQ] = ACTIONS(183),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_DASH] = ACTIONS(185),
    [anon_sym_STAR] = ACTIONS(185),
    [anon_sym_x] = ACTIONS(185),
    [anon_sym_SLASH] = ACTIONS(185),
    [anon_sym_] = ACTIONS(183),
    [anon_sym_STAR_STAR] = ACTIONS(183),
    [anon_sym_IN] = ACTIONS(185),
    [anon_sym_CONTAINS] = ACTIONS(185),
    [anon_sym_2] = ACTIONS(183),
    [anon_sym_CONTAINSNOT] = ACTIONS(185),
    [anon_sym_3] = ACTIONS(183),
    [anon_sym_CONTAINSALL] = ACTIONS(185),
    [anon_sym_4] = ACTIONS(183),
    [anon_sym_CONTAINSANY] = ACTIONS(185),
    [anon_sym_5] = ACTIONS(183),
    [anon_sym_CONTAINSNONE] = ACTIONS(185),
    [anon_sym_6] = ACTIONS(183),
    [anon_sym_INSIDE] = ACTIONS(185),
    [anon_sym_7] = ACTIONS(183),
    [anon_sym_NOTINSIDE] = ACTIONS(185),
    [anon_sym_NOTIN] = ACTIONS(183),
    [anon_sym_8] = ACTIONS(183),
    [anon_sym_ALLINSIDE] = ACTIONS(185),
    [anon_sym_9] = ACTIONS(183),
    [anon_sym_ANYINSIDE] = ACTIONS(185),
    [anon_sym_10] = ACTIONS(183),
    [anon_sym_NONEINSIDE] = ACTIONS(185),
    [anon_sym_11] = ACTIONS(183),
    [anon_sym_OUTSIDE] = ACTIONS(185),
    [anon_sym_INTERSECTS] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(183),
    [anon_sym_RBRACK] = ACTIONS(183),
    [anon_sym_DASH_GT] = ACTIONS(183),
    [anon_sym_LT_DASH] = ACTIONS(183),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(183),
    [anon_sym_COLON] = ACTIONS(183),
    [anon_sym_any] = ACTIONS(185),
    [anon_sym_array] = ACTIONS(185),
    [anon_sym_bool] = ACTIONS(185),
    [anon_sym_datetime] = ACTIONS(185),
    [anon_sym_decimal] = ACTIONS(185),
    [anon_sym_duration] = ACTIONS(185),
    [anon_sym_float] = ACTIONS(185),
    [anon_sym_int] = ACTIONS(185),
    [anon_sym_number] = ACTIONS(185),
    [anon_sym_object] = ACTIONS(185),
    [anon_sym_string] = ACTIONS(185),
    [anon_sym_record] = ACTIONS(185),
    [anon_sym_geometry] = ACTIONS(185),
    [anon_sym_EDDSA] = ACTIONS(185),
    [anon_sym_ES256] = ACTIONS(185),
    [anon_sym_ES384] = ACTIONS(185),
    [anon_sym_ES512] = ACTIONS(185),
    [anon_sym_HS256] = ACTIONS(185),
    [anon_sym_HS384] = ACTIONS(185),
    [anon_sym_HS512] = ACTIONS(185),
    [anon_sym_PS256] = ACTIONS(185),
    [anon_sym_PS384] = ACTIONS(185),
    [anon_sym_PS512] = ACTIONS(185),
    [anon_sym_RS256] = ACTIONS(185),
    [anon_sym_RS384] = ACTIONS(185),
    [anon_sym_RS512] = ACTIONS(185),
    [aux_sym_function_token1] = ACTIONS(183),
    [aux_sym_function_token2] = ACTIONS(183),
    [anon_sym_count] = ACTIONS(185),
    [aux_sym_function_token3] = ACTIONS(183),
    [aux_sym_function_token4] = ACTIONS(183),
    [aux_sym_function_token5] = ACTIONS(183),
    [aux_sym_function_token6] = ACTIONS(183),
    [aux_sym_function_token7] = ACTIONS(183),
    [aux_sym_function_token8] = ACTIONS(183),
    [aux_sym_function_token9] = ACTIONS(183),
    [aux_sym_function_token10] = ACTIONS(185),
    [aux_sym_function_token11] = ACTIONS(183),
    [aux_sym_function_token12] = ACTIONS(185),
    [aux_sym_function_token13] = ACTIONS(183),
    [aux_sym_function_token14] = ACTIONS(183),
    [aux_sym_function_token15] = ACTIONS(183),
    [aux_sym_function_token16] = ACTIONS(185),
    [anon_sym_true] = ACTIONS(185),
    [anon_sym_false] = ACTIONS(185),
    [anon_sym_TRUE] = ACTIONS(185),
    [anon_sym_FALSE] = ACTIONS(185),
    [anon_sym_null] = ACTIONS(185),
    [anon_sym_NULL] = ACTIONS(185),
    [anon_sym_none] = ACTIONS(185),
    [anon_sym_NONE] = ACTIONS(185),
    [sym_variable] = ACTIONS(183),
    [sym_comment] = ACTIONS(183),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_DQUOTE] = ACTIONS(183),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_function] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(187),
    [anon_sym_RPAREN] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_RBRACE] = ACTIONS(187),
    [aux_sym_future_token1] = ACTIONS(187),
    [aux_sym_casting_token1] = ACTIONS(187),
    [aux_sym_property_token1] = ACTIONS(189),
    [aux_sym_identifier_token1] = ACTIONS(189),
    [aux_sym_duration_token1] = ACTIONS(189),
    [aux_sym_constant_token1] = ACTIONS(187),
    [aux_sym_number_token1] = ACTIONS(189),
    [aux_sym_record_token1] = ACTIONS(187),
    [aux_sym_record_token2] = ACTIONS(187),
    [anon_sym_USE] = ACTIONS(189),
    [anon_sym_NS] = ACTIONS(189),
    [anon_sym_DB] = ACTIONS(189),
    [anon_sym_LET] = ACTIONS(189),
    [anon_sym_BEGIN] = ACTIONS(189),
    [anon_sym_TRANSACTION] = ACTIONS(189),
    [anon_sym_CANCEL] = ACTIONS(189),
    [anon_sym_COMMIT] = ACTIONS(189),
    [anon_sym_IF] = ACTIONS(189),
    [anon_sym_ELSE] = ACTIONS(189),
    [anon_sym_THEN] = ACTIONS(189),
    [anon_sym_END] = ACTIONS(189),
    [anon_sym_SELECT] = ACTIONS(189),
    [anon_sym_FROM] = ACTIONS(189),
    [anon_sym_WHERE] = ACTIONS(189),
    [anon_sym_SPLIT] = ACTIONS(189),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_GROUP] = ACTIONS(189),
    [anon_sym_BY] = ACTIONS(189),
    [anon_sym_ORDER] = ACTIONS(189),
    [anon_sym_COLLATE] = ACTIONS(189),
    [anon_sym_NUMERIC] = ACTIONS(189),
    [anon_sym_ASC] = ACTIONS(189),
    [anon_sym_DESC] = ACTIONS(189),
    [anon_sym_LIMIT] = ACTIONS(189),
    [anon_sym_START] = ACTIONS(189),
    [anon_sym_FETCH] = ACTIONS(189),
    [anon_sym_TIMEOUT] = ACTIONS(189),
    [anon_sym_PARALLEL] = ACTIONS(189),
    [anon_sym_INSERT] = ACTIONS(189),
    [anon_sym_IGNORE] = ACTIONS(189),
    [anon_sym_INTO] = ACTIONS(189),
    [anon_sym_VALUES] = ACTIONS(189),
    [anon_sym_ON] = ACTIONS(189),
    [anon_sym_DUPLICATE] = ACTIONS(189),
    [anon_sym_KEY] = ACTIONS(189),
    [anon_sym_UPDATE] = ACTIONS(189),
    [anon_sym_CREATE] = ACTIONS(189),
    [anon_sym_CONTENT] = ACTIONS(189),
    [anon_sym_SET] = ACTIONS(189),
    [anon_sym_RETURN] = ACTIONS(189),
    [anon_sym_BEFORE] = ACTIONS(189),
    [anon_sym_AFTER] = ACTIONS(189),
    [anon_sym_DIFF] = ACTIONS(189),
    [anon_sym_MERGE] = ACTIONS(189),
    [anon_sym_PATCH] = ACTIONS(189),
    [anon_sym_RELATE] = ACTIONS(189),
    [anon_sym_DELETE] = ACTIONS(189),
    [anon_sym_DEFINE] = ACTIONS(189),
    [anon_sym_NAMESPACE] = ACTIONS(189),
    [anon_sym_DATABASE] = ACTIONS(189),
    [anon_sym_LOGIN] = ACTIONS(189),
    [anon_sym_PASSWORD] = ACTIONS(189),
    [anon_sym_PASSHASH] = ACTIONS(189),
    [anon_sym_TOKEN] = ACTIONS(189),
    [anon_sym_SCOPE] = ACTIONS(189),
    [anon_sym_TYPE] = ACTIONS(189),
    [anon_sym_VALUE] = ACTIONS(189),
    [anon_sym_SESSION] = ACTIONS(189),
    [anon_sym_SIGNUP] = ACTIONS(189),
    [anon_sym_SIGNIN] = ACTIONS(189),
    [anon_sym_TABLE] = ACTIONS(189),
    [anon_sym_DROP] = ACTIONS(189),
    [anon_sym_SCHEMAFULL] = ACTIONS(189),
    [anon_sym_SCHEMALESS] = ACTIONS(189),
    [anon_sym_AS] = ACTIONS(189),
    [anon_sym_PERMISSIONS] = ACTIONS(189),
    [anon_sym_FULL] = ACTIONS(189),
    [anon_sym_FOR] = ACTIONS(189),
    [anon_sym_select] = ACTIONS(189),
    [anon_sym_update] = ACTIONS(189),
    [anon_sym_create] = ACTIONS(189),
    [anon_sym_delete] = ACTIONS(189),
    [anon_sym_EVENT] = ACTIONS(189),
    [anon_sym_WHEN] = ACTIONS(189),
    [anon_sym_ASSERT] = ACTIONS(189),
    [anon_sym_INDEX] = ACTIONS(189),
    [anon_sym_FIELDS] = ACTIONS(189),
    [anon_sym_COLUMNS] = ACTIONS(189),
    [anon_sym_UNIQUE] = ACTIONS(189),
    [anon_sym_REMOVE] = ACTIONS(189),
    [anon_sym_SLEEP] = ACTIONS(189),
    [anon_sym_INFO] = ACTIONS(189),
    [anon_sym_KV] = ACTIONS(189),
    [anon_sym_FUNCTION] = ACTIONS(189),
    [anon_sym_PARAM] = ACTIONS(189),
    [anon_sym_AMP_AMP] = ACTIONS(187),
    [anon_sym_AND] = ACTIONS(189),
    [anon_sym_PIPE_PIPE] = ACTIONS(187),
    [anon_sym_OR] = ACTIONS(189),
    [anon_sym_QMARK_QMARK] = ACTIONS(187),
    [anon_sym_QMARK_COLON] = ACTIONS(187),
    [anon_sym_EQ] = ACTIONS(189),
    [anon_sym_IS] = ACTIONS(189),
    [anon_sym_BANG_EQ] = ACTIONS(187),
    [anon_sym_ISNOT] = ACTIONS(187),
    [anon_sym_EQ_EQ] = ACTIONS(187),
    [anon_sym_QMARK_EQ] = ACTIONS(187),
    [anon_sym_STAR_EQ] = ACTIONS(187),
    [anon_sym_TILDE] = ACTIONS(187),
    [anon_sym_BANG_TILDE] = ACTIONS(187),
    [anon_sym_QMARK_TILDE] = ACTIONS(187),
    [anon_sym_STAR_TILDE] = ACTIONS(187),
    [anon_sym_LT] = ACTIONS(189),
    [anon_sym_LT_EQ] = ACTIONS(187),
    [anon_sym_GT] = ACTIONS(189),
    [anon_sym_GT_EQ] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(189),
    [anon_sym_x] = ACTIONS(189),
    [anon_sym_SLASH] = ACTIONS(189),
    [anon_sym_] = ACTIONS(187),
    [anon_sym_STAR_STAR] = ACTIONS(187),
    [anon_sym_IN] = ACTIONS(189),
    [anon_sym_CONTAINS] = ACTIONS(189),
    [anon_sym_2] = ACTIONS(187),
    [anon_sym_CONTAINSNOT] = ACTIONS(189),
    [anon_sym_3] = ACTIONS(187),
    [anon_sym_CONTAINSALL] = ACTIONS(189),
    [anon_sym_4] = ACTIONS(187),
    [anon_sym_CONTAINSANY] = ACTIONS(189),
    [anon_sym_5] = ACTIONS(187),
    [anon_sym_CONTAINSNONE] = ACTIONS(189),
    [anon_sym_6] = ACTIONS(187),
    [anon_sym_INSIDE] = ACTIONS(189),
    [anon_sym_7] = ACTIONS(187),
    [anon_sym_NOTINSIDE] = ACTIONS(189),
    [anon_sym_NOTIN] = ACTIONS(187),
    [anon_sym_8] = ACTIONS(187),
    [anon_sym_ALLINSIDE] = ACTIONS(189),
    [anon_sym_9] = ACTIONS(187),
    [anon_sym_ANYINSIDE] = ACTIONS(189),
    [anon_sym_10] = ACTIONS(187),
    [anon_sym_NONEINSIDE] = ACTIONS(189),
    [anon_sym_11] = ACTIONS(187),
    [anon_sym_OUTSIDE] = ACTIONS(189),
    [anon_sym_INTERSECTS] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_RBRACK] = ACTIONS(187),
    [anon_sym_DASH_GT] = ACTIONS(187),
    [anon_sym_LT_DASH] = ACTIONS(187),
    [anon_sym_COMMA] = ACTIONS(187),
    [anon_sym_SEMI] = ACTIONS(187),
    [anon_sym_COLON] = ACTIONS(187),
    [anon_sym_any] = ACTIONS(189),
    [anon_sym_array] = ACTIONS(189),
    [anon_sym_bool] = ACTIONS(189),
    [anon_sym_datetime] = ACTIONS(189),
    [anon_sym_decimal] = ACTIONS(189),
    [anon_sym_duration] = ACTIONS(189),
    [anon_sym_float] = ACTIONS(189),
    [anon_sym_int] = ACTIONS(189),
    [anon_sym_number] = ACTIONS(189),
    [anon_sym_object] = ACTIONS(189),
    [anon_sym_string] = ACTIONS(189),
    [anon_sym_record] = ACTIONS(189),
    [anon_sym_geometry] = ACTIONS(189),
    [anon_sym_EDDSA] = ACTIONS(189),
    [anon_sym_ES256] = ACTIONS(189),
    [anon_sym_ES384] = ACTIONS(189),
    [anon_sym_ES512] = ACTIONS(189),
    [anon_sym_HS256] = ACTIONS(189),
    [anon_sym_HS384] = ACTIONS(189),
    [anon_sym_HS512] = ACTIONS(189),
    [anon_sym_PS256] = ACTIONS(189),
    [anon_sym_PS384] = ACTIONS(189),
    [anon_sym_PS512] = ACTIONS(189),
    [anon_sym_RS256] = ACTIONS(189),
    [anon_sym_RS384] = ACTIONS(189),
    [anon_sym_RS512] = ACTIONS(189),
    [aux_sym_function_token1] = ACTIONS(187),
    [aux_sym_function_token2] = ACTIONS(187),
    [anon_sym_count] = ACTIONS(189),
    [aux_sym_function_token3] = ACTIONS(187),
    [aux_sym_function_token4] = ACTIONS(187),
    [aux_sym_function_token5] = ACTIONS(187),
    [aux_sym_function_token6] = ACTIONS(187),
    [aux_sym_function_token7] = ACTIONS(187),
    [aux_sym_function_token8] = ACTIONS(187),
    [aux_sym_function_token9] = ACTIONS(187),
    [aux_sym_function_token10] = ACTIONS(189),
    [aux_sym_function_token11] = ACTIONS(187),
    [aux_sym_function_token12] = ACTIONS(189),
    [aux_sym_function_token13] = ACTIONS(187),
    [aux_sym_function_token14] = ACTIONS(187),
    [aux_sym_function_token15] = ACTIONS(187),
    [aux_sym_function_token16] = ACTIONS(189),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_false] = ACTIONS(189),
    [anon_sym_TRUE] = ACTIONS(189),
    [anon_sym_FALSE] = ACTIONS(189),
    [anon_sym_null] = ACTIONS(189),
    [anon_sym_NULL] = ACTIONS(189),
    [anon_sym_none] = ACTIONS(189),
    [anon_sym_NONE] = ACTIONS(189),
    [sym_variable] = ACTIONS(187),
    [sym_comment] = ACTIONS(187),
    [anon_sym_SQUOTE] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(187),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [anon_sym_function] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_RBRACE] = ACTIONS(191),
    [aux_sym_future_token1] = ACTIONS(191),
    [aux_sym_casting_token1] = ACTIONS(191),
    [aux_sym_property_token1] = ACTIONS(193),
    [aux_sym_identifier_token1] = ACTIONS(193),
    [aux_sym_duration_token1] = ACTIONS(193),
    [aux_sym_constant_token1] = ACTIONS(191),
    [aux_sym_number_token1] = ACTIONS(193),
    [aux_sym_record_token1] = ACTIONS(191),
    [aux_sym_record_token2] = ACTIONS(191),
    [anon_sym_USE] = ACTIONS(193),
    [anon_sym_NS] = ACTIONS(193),
    [anon_sym_DB] = ACTIONS(193),
    [anon_sym_LET] = ACTIONS(193),
    [anon_sym_BEGIN] = ACTIONS(193),
    [anon_sym_TRANSACTION] = ACTIONS(193),
    [anon_sym_CANCEL] = ACTIONS(193),
    [anon_sym_COMMIT] = ACTIONS(193),
    [anon_sym_IF] = ACTIONS(193),
    [anon_sym_ELSE] = ACTIONS(193),
    [anon_sym_THEN] = ACTIONS(193),
    [anon_sym_END] = ACTIONS(193),
    [anon_sym_SELECT] = ACTIONS(193),
    [anon_sym_FROM] = ACTIONS(193),
    [anon_sym_WHERE] = ACTIONS(193),
    [anon_sym_SPLIT] = ACTIONS(193),
    [anon_sym_AT] = ACTIONS(193),
    [anon_sym_GROUP] = ACTIONS(193),
    [anon_sym_BY] = ACTIONS(193),
    [anon_sym_ORDER] = ACTIONS(193),
    [anon_sym_COLLATE] = ACTIONS(193),
    [anon_sym_NUMERIC] = ACTIONS(193),
    [anon_sym_ASC] = ACTIONS(193),
    [anon_sym_DESC] = ACTIONS(193),
    [anon_sym_LIMIT] = ACTIONS(193),
    [anon_sym_START] = ACTIONS(193),
    [anon_sym_FETCH] = ACTIONS(193),
    [anon_sym_TIMEOUT] = ACTIONS(193),
    [anon_sym_PARALLEL] = ACTIONS(193),
    [anon_sym_INSERT] = ACTIONS(193),
    [anon_sym_IGNORE] = ACTIONS(193),
    [anon_sym_INTO] = ACTIONS(193),
    [anon_sym_VALUES] = ACTIONS(193),
    [anon_sym_ON] = ACTIONS(193),
    [anon_sym_DUPLICATE] = ACTIONS(193),
    [anon_sym_KEY] = ACTIONS(193),
    [anon_sym_UPDATE] = ACTIONS(193),
    [anon_sym_CREATE] = ACTIONS(193),
    [anon_sym_CONTENT] = ACTIONS(193),
    [anon_sym_SET] = ACTIONS(193),
    [anon_sym_RETURN] = ACTIONS(193),
    [anon_sym_BEFORE] = ACTIONS(193),
    [anon_sym_AFTER] = ACTIONS(193),
    [anon_sym_DIFF] = ACTIONS(193),
    [anon_sym_MERGE] = ACTIONS(193),
    [anon_sym_PATCH] = ACTIONS(193),
    [anon_sym_RELATE] = ACTIONS(193),
    [anon_sym_DELETE] = ACTIONS(193),
    [anon_sym_DEFINE] = ACTIONS(193),
    [anon_sym_NAMESPACE] = ACTIONS(193),
    [anon_sym_DATABASE] = ACTIONS(193),
    [anon_sym_LOGIN] = ACTIONS(193),
    [anon_sym_PASSWORD] = ACTIONS(193),
    [anon_sym_PASSHASH] = ACTIONS(193),
    [anon_sym_TOKEN] = ACTIONS(193),
    [anon_sym_SCOPE] = ACTIONS(193),
    [anon_sym_TYPE] = ACTIONS(193),
    [anon_sym_VALUE] = ACTIONS(193),
    [anon_sym_SESSION] = ACTIONS(193),
    [anon_sym_SIGNUP] = ACTIONS(193),
    [anon_sym_SIGNIN] = ACTIONS(193),
    [anon_sym_TABLE] = ACTIONS(193),
    [anon_sym_DROP] = ACTIONS(193),
    [anon_sym_SCHEMAFULL] = ACTIONS(193),
    [anon_sym_SCHEMALESS] = ACTIONS(193),
    [anon_sym_AS] = ACTIONS(193),
    [anon_sym_PERMISSIONS] = ACTIONS(193),
    [anon_sym_FULL] = ACTIONS(193),
    [anon_sym_FOR] = ACTIONS(193),
    [anon_sym_select] = ACTIONS(193),
    [anon_sym_update] = ACTIONS(193),
    [anon_sym_create] = ACTIONS(193),
    [anon_sym_delete] = ACTIONS(193),
    [anon_sym_EVENT] = ACTIONS(193),
    [anon_sym_WHEN] = ACTIONS(193),
    [anon_sym_ASSERT] = ACTIONS(193),
    [anon_sym_INDEX] = ACTIONS(193),
    [anon_sym_FIELDS] = ACTIONS(193),
    [anon_sym_COLUMNS] = ACTIONS(193),
    [anon_sym_UNIQUE] = ACTIONS(193),
    [anon_sym_REMOVE] = ACTIONS(193),
    [anon_sym_SLEEP] = ACTIONS(193),
    [anon_sym_INFO] = ACTIONS(193),
    [anon_sym_KV] = ACTIONS(193),
    [anon_sym_FUNCTION] = ACTIONS(193),
    [anon_sym_PARAM] = ACTIONS(193),
    [anon_sym_AMP_AMP] = ACTIONS(191),
    [anon_sym_AND] = ACTIONS(193),
    [anon_sym_PIPE_PIPE] = ACTIONS(191),
    [anon_sym_OR] = ACTIONS(193),
    [anon_sym_QMARK_QMARK] = ACTIONS(191),
    [anon_sym_QMARK_COLON] = ACTIONS(191),
    [anon_sym_EQ] = ACTIONS(193),
    [anon_sym_IS] = ACTIONS(193),
    [anon_sym_BANG_EQ] = ACTIONS(191),
    [anon_sym_ISNOT] = ACTIONS(191),
    [anon_sym_EQ_EQ] = ACTIONS(191),
    [anon_sym_QMARK_EQ] = ACTIONS(191),
    [anon_sym_STAR_EQ] = ACTIONS(191),
    [anon_sym_TILDE] = ACTIONS(191),
    [anon_sym_BANG_TILDE] = ACTIONS(191),
    [anon_sym_QMARK_TILDE] = ACTIONS(191),
    [anon_sym_STAR_TILDE] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(193),
    [anon_sym_LT_EQ] = ACTIONS(191),
    [anon_sym_GT] = ACTIONS(193),
    [anon_sym_GT_EQ] = ACTIONS(191),
    [anon_sym_PLUS] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(193),
    [anon_sym_STAR] = ACTIONS(193),
    [anon_sym_x] = ACTIONS(193),
    [anon_sym_SLASH] = ACTIONS(193),
    [anon_sym_] = ACTIONS(191),
    [anon_sym_STAR_STAR] = ACTIONS(191),
    [anon_sym_IN] = ACTIONS(193),
    [anon_sym_CONTAINS] = ACTIONS(193),
    [anon_sym_2] = ACTIONS(191),
    [anon_sym_CONTAINSNOT] = ACTIONS(193),
    [anon_sym_3] = ACTIONS(191),
    [anon_sym_CONTAINSALL] = ACTIONS(193),
    [anon_sym_4] = ACTIONS(191),
    [anon_sym_CONTAINSANY] = ACTIONS(193),
    [anon_sym_5] = ACTIONS(191),
    [anon_sym_CONTAINSNONE] = ACTIONS(193),
    [anon_sym_6] = ACTIONS(191),
    [anon_sym_INSIDE] = ACTIONS(193),
    [anon_sym_7] = ACTIONS(191),
    [anon_sym_NOTINSIDE] = ACTIONS(193),
    [anon_sym_NOTIN] = ACTIONS(191),
    [anon_sym_8] = ACTIONS(191),
    [anon_sym_ALLINSIDE] = ACTIONS(193),
    [anon_sym_9] = ACTIONS(191),
    [anon_sym_ANYINSIDE] = ACTIONS(193),
    [anon_sym_10] = ACTIONS(191),
    [anon_sym_NONEINSIDE] = ACTIONS(193),
    [anon_sym_11] = ACTIONS(191),
    [anon_sym_OUTSIDE] = ACTIONS(193),
    [anon_sym_INTERSECTS] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_RBRACK] = ACTIONS(191),
    [anon_sym_DASH_GT] = ACTIONS(191),
    [anon_sym_LT_DASH] = ACTIONS(191),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_SEMI] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(191),
    [anon_sym_any] = ACTIONS(193),
    [anon_sym_array] = ACTIONS(193),
    [anon_sym_bool] = ACTIONS(193),
    [anon_sym_datetime] = ACTIONS(193),
    [anon_sym_decimal] = ACTIONS(193),
    [anon_sym_duration] = ACTIONS(193),
    [anon_sym_float] = ACTIONS(193),
    [anon_sym_int] = ACTIONS(193),
    [anon_sym_number] = ACTIONS(193),
    [anon_sym_object] = ACTIONS(193),
    [anon_sym_string] = ACTIONS(193),
    [anon_sym_record] = ACTIONS(193),
    [anon_sym_geometry] = ACTIONS(193),
    [anon_sym_EDDSA] = ACTIONS(193),
    [anon_sym_ES256] = ACTIONS(193),
    [anon_sym_ES384] = ACTIONS(193),
    [anon_sym_ES512] = ACTIONS(193),
    [anon_sym_HS256] = ACTIONS(193),
    [anon_sym_HS384] = ACTIONS(193),
    [anon_sym_HS512] = ACTIONS(193),
    [anon_sym_PS256] = ACTIONS(193),
    [anon_sym_PS384] = ACTIONS(193),
    [anon_sym_PS512] = ACTIONS(193),
    [anon_sym_RS256] = ACTIONS(193),
    [anon_sym_RS384] = ACTIONS(193),
    [anon_sym_RS512] = ACTIONS(193),
    [aux_sym_function_token1] = ACTIONS(191),
    [aux_sym_function_token2] = ACTIONS(191),
    [anon_sym_count] = ACTIONS(193),
    [aux_sym_function_token3] = ACTIONS(191),
    [aux_sym_function_token4] = ACTIONS(191),
    [aux_sym_function_token5] = ACTIONS(191),
    [aux_sym_function_token6] = ACTIONS(191),
    [aux_sym_function_token7] = ACTIONS(191),
    [aux_sym_function_token8] = ACTIONS(191),
    [aux_sym_function_token9] = ACTIONS(191),
    [aux_sym_function_token10] = ACTIONS(193),
    [aux_sym_function_token11] = ACTIONS(191),
    [aux_sym_function_token12] = ACTIONS(193),
    [aux_sym_function_token13] = ACTIONS(191),
    [aux_sym_function_token14] = ACTIONS(191),
    [aux_sym_function_token15] = ACTIONS(191),
    [aux_sym_function_token16] = ACTIONS(193),
    [anon_sym_true] = ACTIONS(193),
    [anon_sym_false] = ACTIONS(193),
    [anon_sym_TRUE] = ACTIONS(193),
    [anon_sym_FALSE] = ACTIONS(193),
    [anon_sym_null] = ACTIONS(193),
    [anon_sym_NULL] = ACTIONS(193),
    [anon_sym_none] = ACTIONS(193),
    [anon_sym_NONE] = ACTIONS(193),
    [sym_variable] = ACTIONS(191),
    [sym_comment] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(191),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [anon_sym_function] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(195),
    [anon_sym_RPAREN] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_RBRACE] = ACTIONS(195),
    [aux_sym_future_token1] = ACTIONS(195),
    [aux_sym_casting_token1] = ACTIONS(195),
    [aux_sym_property_token1] = ACTIONS(197),
    [aux_sym_identifier_token1] = ACTIONS(197),
    [aux_sym_duration_token1] = ACTIONS(197),
    [aux_sym_constant_token1] = ACTIONS(195),
    [aux_sym_number_token1] = ACTIONS(197),
    [aux_sym_record_token1] = ACTIONS(195),
    [aux_sym_record_token2] = ACTIONS(195),
    [anon_sym_USE] = ACTIONS(197),
    [anon_sym_NS] = ACTIONS(197),
    [anon_sym_DB] = ACTIONS(197),
    [anon_sym_LET] = ACTIONS(197),
    [anon_sym_BEGIN] = ACTIONS(197),
    [anon_sym_TRANSACTION] = ACTIONS(197),
    [anon_sym_CANCEL] = ACTIONS(197),
    [anon_sym_COMMIT] = ACTIONS(197),
    [anon_sym_IF] = ACTIONS(197),
    [anon_sym_ELSE] = ACTIONS(197),
    [anon_sym_THEN] = ACTIONS(197),
    [anon_sym_END] = ACTIONS(197),
    [anon_sym_SELECT] = ACTIONS(197),
    [anon_sym_FROM] = ACTIONS(197),
    [anon_sym_WHERE] = ACTIONS(197),
    [anon_sym_SPLIT] = ACTIONS(197),
    [anon_sym_AT] = ACTIONS(197),
    [anon_sym_GROUP] = ACTIONS(197),
    [anon_sym_BY] = ACTIONS(197),
    [anon_sym_ORDER] = ACTIONS(197),
    [anon_sym_COLLATE] = ACTIONS(197),
    [anon_sym_NUMERIC] = ACTIONS(197),
    [anon_sym_ASC] = ACTIONS(197),
    [anon_sym_DESC] = ACTIONS(197),
    [anon_sym_LIMIT] = ACTIONS(197),
    [anon_sym_START] = ACTIONS(197),
    [anon_sym_FETCH] = ACTIONS(197),
    [anon_sym_TIMEOUT] = ACTIONS(197),
    [anon_sym_PARALLEL] = ACTIONS(197),
    [anon_sym_INSERT] = ACTIONS(197),
    [anon_sym_IGNORE] = ACTIONS(197),
    [anon_sym_INTO] = ACTIONS(197),
    [anon_sym_VALUES] = ACTIONS(197),
    [anon_sym_ON] = ACTIONS(197),
    [anon_sym_DUPLICATE] = ACTIONS(197),
    [anon_sym_KEY] = ACTIONS(197),
    [anon_sym_UPDATE] = ACTIONS(197),
    [anon_sym_CREATE] = ACTIONS(197),
    [anon_sym_CONTENT] = ACTIONS(197),
    [anon_sym_SET] = ACTIONS(197),
    [anon_sym_RETURN] = ACTIONS(197),
    [anon_sym_BEFORE] = ACTIONS(197),
    [anon_sym_AFTER] = ACTIONS(197),
    [anon_sym_DIFF] = ACTIONS(197),
    [anon_sym_MERGE] = ACTIONS(197),
    [anon_sym_PATCH] = ACTIONS(197),
    [anon_sym_RELATE] = ACTIONS(197),
    [anon_sym_DELETE] = ACTIONS(197),
    [anon_sym_DEFINE] = ACTIONS(197),
    [anon_sym_NAMESPACE] = ACTIONS(197),
    [anon_sym_DATABASE] = ACTIONS(197),
    [anon_sym_LOGIN] = ACTIONS(197),
    [anon_sym_PASSWORD] = ACTIONS(197),
    [anon_sym_PASSHASH] = ACTIONS(197),
    [anon_sym_TOKEN] = ACTIONS(197),
    [anon_sym_SCOPE] = ACTIONS(197),
    [anon_sym_TYPE] = ACTIONS(197),
    [anon_sym_VALUE] = ACTIONS(197),
    [anon_sym_SESSION] = ACTIONS(197),
    [anon_sym_SIGNUP] = ACTIONS(197),
    [anon_sym_SIGNIN] = ACTIONS(197),
    [anon_sym_TABLE] = ACTIONS(197),
    [anon_sym_DROP] = ACTIONS(197),
    [anon_sym_SCHEMAFULL] = ACTIONS(197),
    [anon_sym_SCHEMALESS] = ACTIONS(197),
    [anon_sym_AS] = ACTIONS(197),
    [anon_sym_PERMISSIONS] = ACTIONS(197),
    [anon_sym_FULL] = ACTIONS(197),
    [anon_sym_FOR] = ACTIONS(197),
    [anon_sym_select] = ACTIONS(197),
    [anon_sym_update] = ACTIONS(197),
    [anon_sym_create] = ACTIONS(197),
    [anon_sym_delete] = ACTIONS(197),
    [anon_sym_EVENT] = ACTIONS(197),
    [anon_sym_WHEN] = ACTIONS(197),
    [anon_sym_ASSERT] = ACTIONS(197),
    [anon_sym_INDEX] = ACTIONS(197),
    [anon_sym_FIELDS] = ACTIONS(197),
    [anon_sym_COLUMNS] = ACTIONS(197),
    [anon_sym_UNIQUE] = ACTIONS(197),
    [anon_sym_REMOVE] = ACTIONS(197),
    [anon_sym_SLEEP] = ACTIONS(197),
    [anon_sym_INFO] = ACTIONS(197),
    [anon_sym_KV] = ACTIONS(197),
    [anon_sym_FUNCTION] = ACTIONS(197),
    [anon_sym_PARAM] = ACTIONS(197),
    [anon_sym_AMP_AMP] = ACTIONS(195),
    [anon_sym_AND] = ACTIONS(197),
    [anon_sym_PIPE_PIPE] = ACTIONS(195),
    [anon_sym_OR] = ACTIONS(197),
    [anon_sym_QMARK_QMARK] = ACTIONS(195),
    [anon_sym_QMARK_COLON] = ACTIONS(195),
    [anon_sym_EQ] = ACTIONS(197),
    [anon_sym_IS] = ACTIONS(197),
    [anon_sym_BANG_EQ] = ACTIONS(195),
    [anon_sym_ISNOT] = ACTIONS(195),
    [anon_sym_EQ_EQ] = ACTIONS(195),
    [anon_sym_QMARK_EQ] = ACTIONS(195),
    [anon_sym_STAR_EQ] = ACTIONS(195),
    [anon_sym_TILDE] = ACTIONS(195),
    [anon_sym_BANG_TILDE] = ACTIONS(195),
    [anon_sym_QMARK_TILDE] = ACTIONS(195),
    [anon_sym_STAR_TILDE] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(197),
    [anon_sym_LT_EQ] = ACTIONS(195),
    [anon_sym_GT] = ACTIONS(197),
    [anon_sym_GT_EQ] = ACTIONS(195),
    [anon_sym_PLUS] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(197),
    [anon_sym_STAR] = ACTIONS(197),
    [anon_sym_x] = ACTIONS(197),
    [anon_sym_SLASH] = ACTIONS(197),
    [anon_sym_] = ACTIONS(195),
    [anon_sym_STAR_STAR] = ACTIONS(195),
    [anon_sym_IN] = ACTIONS(197),
    [anon_sym_CONTAINS] = ACTIONS(197),
    [anon_sym_2] = ACTIONS(195),
    [anon_sym_CONTAINSNOT] = ACTIONS(197),
    [anon_sym_3] = ACTIONS(195),
    [anon_sym_CONTAINSALL] = ACTIONS(197),
    [anon_sym_4] = ACTIONS(195),
    [anon_sym_CONTAINSANY] = ACTIONS(197),
    [anon_sym_5] = ACTIONS(195),
    [anon_sym_CONTAINSNONE] = ACTIONS(197),
    [anon_sym_6] = ACTIONS(195),
    [anon_sym_INSIDE] = ACTIONS(197),
    [anon_sym_7] = ACTIONS(195),
    [anon_sym_NOTINSIDE] = ACTIONS(197),
    [anon_sym_NOTIN] = ACTIONS(195),
    [anon_sym_8] = ACTIONS(195),
    [anon_sym_ALLINSIDE] = ACTIONS(197),
    [anon_sym_9] = ACTIONS(195),
    [anon_sym_ANYINSIDE] = ACTIONS(197),
    [anon_sym_10] = ACTIONS(195),
    [anon_sym_NONEINSIDE] = ACTIONS(197),
    [anon_sym_11] = ACTIONS(195),
    [anon_sym_OUTSIDE] = ACTIONS(197),
    [anon_sym_INTERSECTS] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(195),
    [anon_sym_RBRACK] = ACTIONS(195),
    [anon_sym_DASH_GT] = ACTIONS(195),
    [anon_sym_LT_DASH] = ACTIONS(195),
    [anon_sym_COMMA] = ACTIONS(195),
    [anon_sym_SEMI] = ACTIONS(195),
    [anon_sym_COLON] = ACTIONS(195),
    [anon_sym_any] = ACTIONS(197),
    [anon_sym_array] = ACTIONS(197),
    [anon_sym_bool] = ACTIONS(197),
    [anon_sym_datetime] = ACTIONS(197),
    [anon_sym_decimal] = ACTIONS(197),
    [anon_sym_duration] = ACTIONS(197),
    [anon_sym_float] = ACTIONS(197),
    [anon_sym_int] = ACTIONS(197),
    [anon_sym_number] = ACTIONS(197),
    [anon_sym_object] = ACTIONS(197),
    [anon_sym_string] = ACTIONS(197),
    [anon_sym_record] = ACTIONS(197),
    [anon_sym_geometry] = ACTIONS(197),
    [anon_sym_EDDSA] = ACTIONS(197),
    [anon_sym_ES256] = ACTIONS(197),
    [anon_sym_ES384] = ACTIONS(197),
    [anon_sym_ES512] = ACTIONS(197),
    [anon_sym_HS256] = ACTIONS(197),
    [anon_sym_HS384] = ACTIONS(197),
    [anon_sym_HS512] = ACTIONS(197),
    [anon_sym_PS256] = ACTIONS(197),
    [anon_sym_PS384] = ACTIONS(197),
    [anon_sym_PS512] = ACTIONS(197),
    [anon_sym_RS256] = ACTIONS(197),
    [anon_sym_RS384] = ACTIONS(197),
    [anon_sym_RS512] = ACTIONS(197),
    [aux_sym_function_token1] = ACTIONS(195),
    [aux_sym_function_token2] = ACTIONS(195),
    [anon_sym_count] = ACTIONS(197),
    [aux_sym_function_token3] = ACTIONS(195),
    [aux_sym_function_token4] = ACTIONS(195),
    [aux_sym_function_token5] = ACTIONS(195),
    [aux_sym_function_token6] = ACTIONS(195),
    [aux_sym_function_token7] = ACTIONS(195),
    [aux_sym_function_token8] = ACTIONS(195),
    [aux_sym_function_token9] = ACTIONS(195),
    [aux_sym_function_token10] = ACTIONS(197),
    [aux_sym_function_token11] = ACTIONS(195),
    [aux_sym_function_token12] = ACTIONS(197),
    [aux_sym_function_token13] = ACTIONS(195),
    [aux_sym_function_token14] = ACTIONS(195),
    [aux_sym_function_token15] = ACTIONS(195),
    [aux_sym_function_token16] = ACTIONS(197),
    [anon_sym_true] = ACTIONS(197),
    [anon_sym_false] = ACTIONS(197),
    [anon_sym_TRUE] = ACTIONS(197),
    [anon_sym_FALSE] = ACTIONS(197),
    [anon_sym_null] = ACTIONS(197),
    [anon_sym_NULL] = ACTIONS(197),
    [anon_sym_none] = ACTIONS(197),
    [anon_sym_NONE] = ACTIONS(197),
    [sym_variable] = ACTIONS(195),
    [sym_comment] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(195),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [anon_sym_function] = ACTIONS(201),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(199),
    [aux_sym_future_token1] = ACTIONS(199),
    [aux_sym_casting_token1] = ACTIONS(199),
    [aux_sym_property_token1] = ACTIONS(201),
    [aux_sym_identifier_token1] = ACTIONS(201),
    [aux_sym_duration_token1] = ACTIONS(201),
    [aux_sym_constant_token1] = ACTIONS(199),
    [aux_sym_number_token1] = ACTIONS(201),
    [aux_sym_record_token1] = ACTIONS(199),
    [aux_sym_record_token2] = ACTIONS(199),
    [anon_sym_USE] = ACTIONS(201),
    [anon_sym_NS] = ACTIONS(201),
    [anon_sym_DB] = ACTIONS(201),
    [anon_sym_LET] = ACTIONS(201),
    [anon_sym_BEGIN] = ACTIONS(201),
    [anon_sym_TRANSACTION] = ACTIONS(201),
    [anon_sym_CANCEL] = ACTIONS(201),
    [anon_sym_COMMIT] = ACTIONS(201),
    [anon_sym_IF] = ACTIONS(201),
    [anon_sym_ELSE] = ACTIONS(201),
    [anon_sym_THEN] = ACTIONS(201),
    [anon_sym_END] = ACTIONS(201),
    [anon_sym_SELECT] = ACTIONS(201),
    [anon_sym_FROM] = ACTIONS(201),
    [anon_sym_WHERE] = ACTIONS(201),
    [anon_sym_SPLIT] = ACTIONS(201),
    [anon_sym_AT] = ACTIONS(201),
    [anon_sym_GROUP] = ACTIONS(201),
    [anon_sym_BY] = ACTIONS(201),
    [anon_sym_ORDER] = ACTIONS(201),
    [anon_sym_COLLATE] = ACTIONS(201),
    [anon_sym_NUMERIC] = ACTIONS(201),
    [anon_sym_ASC] = ACTIONS(201),
    [anon_sym_DESC] = ACTIONS(201),
    [anon_sym_LIMIT] = ACTIONS(201),
    [anon_sym_START] = ACTIONS(201),
    [anon_sym_FETCH] = ACTIONS(201),
    [anon_sym_TIMEOUT] = ACTIONS(201),
    [anon_sym_PARALLEL] = ACTIONS(201),
    [anon_sym_INSERT] = ACTIONS(201),
    [anon_sym_IGNORE] = ACTIONS(201),
    [anon_sym_INTO] = ACTIONS(201),
    [anon_sym_VALUES] = ACTIONS(201),
    [anon_sym_ON] = ACTIONS(201),
    [anon_sym_DUPLICATE] = ACTIONS(201),
    [anon_sym_KEY] = ACTIONS(201),
    [anon_sym_UPDATE] = ACTIONS(201),
    [anon_sym_CREATE] = ACTIONS(201),
    [anon_sym_CONTENT] = ACTIONS(201),
    [anon_sym_SET] = ACTIONS(201),
    [anon_sym_RETURN] = ACTIONS(201),
    [anon_sym_BEFORE] = ACTIONS(201),
    [anon_sym_AFTER] = ACTIONS(201),
    [anon_sym_DIFF] = ACTIONS(201),
    [anon_sym_MERGE] = ACTIONS(201),
    [anon_sym_PATCH] = ACTIONS(201),
    [anon_sym_RELATE] = ACTIONS(201),
    [anon_sym_DELETE] = ACTIONS(201),
    [anon_sym_DEFINE] = ACTIONS(201),
    [anon_sym_NAMESPACE] = ACTIONS(201),
    [anon_sym_DATABASE] = ACTIONS(201),
    [anon_sym_LOGIN] = ACTIONS(201),
    [anon_sym_PASSWORD] = ACTIONS(201),
    [anon_sym_PASSHASH] = ACTIONS(201),
    [anon_sym_TOKEN] = ACTIONS(201),
    [anon_sym_SCOPE] = ACTIONS(201),
    [anon_sym_TYPE] = ACTIONS(201),
    [anon_sym_VALUE] = ACTIONS(201),
    [anon_sym_SESSION] = ACTIONS(201),
    [anon_sym_SIGNUP] = ACTIONS(201),
    [anon_sym_SIGNIN] = ACTIONS(201),
    [anon_sym_TABLE] = ACTIONS(201),
    [anon_sym_DROP] = ACTIONS(201),
    [anon_sym_SCHEMAFULL] = ACTIONS(201),
    [anon_sym_SCHEMALESS] = ACTIONS(201),
    [anon_sym_AS] = ACTIONS(201),
    [anon_sym_PERMISSIONS] = ACTIONS(201),
    [anon_sym_FULL] = ACTIONS(201),
    [anon_sym_FOR] = ACTIONS(201),
    [anon_sym_select] = ACTIONS(201),
    [anon_sym_update] = ACTIONS(201),
    [anon_sym_create] = ACTIONS(201),
    [anon_sym_delete] = ACTIONS(201),
    [anon_sym_EVENT] = ACTIONS(201),
    [anon_sym_WHEN] = ACTIONS(201),
    [anon_sym_ASSERT] = ACTIONS(201),
    [anon_sym_INDEX] = ACTIONS(201),
    [anon_sym_FIELDS] = ACTIONS(201),
    [anon_sym_COLUMNS] = ACTIONS(201),
    [anon_sym_UNIQUE] = ACTIONS(201),
    [anon_sym_REMOVE] = ACTIONS(201),
    [anon_sym_SLEEP] = ACTIONS(201),
    [anon_sym_INFO] = ACTIONS(201),
    [anon_sym_KV] = ACTIONS(201),
    [anon_sym_FUNCTION] = ACTIONS(201),
    [anon_sym_PARAM] = ACTIONS(201),
    [anon_sym_AMP_AMP] = ACTIONS(199),
    [anon_sym_AND] = ACTIONS(201),
    [anon_sym_PIPE_PIPE] = ACTIONS(199),
    [anon_sym_OR] = ACTIONS(201),
    [anon_sym_QMARK_QMARK] = ACTIONS(199),
    [anon_sym_QMARK_COLON] = ACTIONS(199),
    [anon_sym_EQ] = ACTIONS(201),
    [anon_sym_IS] = ACTIONS(201),
    [anon_sym_BANG_EQ] = ACTIONS(199),
    [anon_sym_ISNOT] = ACTIONS(199),
    [anon_sym_EQ_EQ] = ACTIONS(199),
    [anon_sym_QMARK_EQ] = ACTIONS(199),
    [anon_sym_STAR_EQ] = ACTIONS(199),
    [anon_sym_TILDE] = ACTIONS(199),
    [anon_sym_BANG_TILDE] = ACTIONS(199),
    [anon_sym_QMARK_TILDE] = ACTIONS(199),
    [anon_sym_STAR_TILDE] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(201),
    [anon_sym_LT_EQ] = ACTIONS(199),
    [anon_sym_GT] = ACTIONS(201),
    [anon_sym_GT_EQ] = ACTIONS(199),
    [anon_sym_PLUS] = ACTIONS(199),
    [anon_sym_DASH] = ACTIONS(201),
    [anon_sym_STAR] = ACTIONS(201),
    [anon_sym_x] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(201),
    [anon_sym_] = ACTIONS(199),
    [anon_sym_STAR_STAR] = ACTIONS(199),
    [anon_sym_IN] = ACTIONS(201),
    [anon_sym_CONTAINS] = ACTIONS(201),
    [anon_sym_2] = ACTIONS(199),
    [anon_sym_CONTAINSNOT] = ACTIONS(201),
    [anon_sym_3] = ACTIONS(199),
    [anon_sym_CONTAINSALL] = ACTIONS(201),
    [anon_sym_4] = ACTIONS(199),
    [anon_sym_CONTAINSANY] = ACTIONS(201),
    [anon_sym_5] = ACTIONS(199),
    [anon_sym_CONTAINSNONE] = ACTIONS(201),
    [anon_sym_6] = ACTIONS(199),
    [anon_sym_INSIDE] = ACTIONS(201),
    [anon_sym_7] = ACTIONS(199),
    [anon_sym_NOTINSIDE] = ACTIONS(201),
    [anon_sym_NOTIN] = ACTIONS(199),
    [anon_sym_8] = ACTIONS(199),
    [anon_sym_ALLINSIDE] = ACTIONS(201),
    [anon_sym_9] = ACTIONS(199),
    [anon_sym_ANYINSIDE] = ACTIONS(201),
    [anon_sym_10] = ACTIONS(199),
    [anon_sym_NONEINSIDE] = ACTIONS(201),
    [anon_sym_11] = ACTIONS(199),
    [anon_sym_OUTSIDE] = ACTIONS(201),
    [anon_sym_INTERSECTS] = ACTIONS(201),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_RBRACK] = ACTIONS(199),
    [anon_sym_DASH_GT] = ACTIONS(199),
    [anon_sym_LT_DASH] = ACTIONS(199),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_SEMI] = ACTIONS(199),
    [anon_sym_COLON] = ACTIONS(199),
    [anon_sym_any] = ACTIONS(201),
    [anon_sym_array] = ACTIONS(201),
    [anon_sym_bool] = ACTIONS(201),
    [anon_sym_datetime] = ACTIONS(201),
    [anon_sym_decimal] = ACTIONS(201),
    [anon_sym_duration] = ACTIONS(201),
    [anon_sym_float] = ACTIONS(201),
    [anon_sym_int] = ACTIONS(201),
    [anon_sym_number] = ACTIONS(201),
    [anon_sym_object] = ACTIONS(201),
    [anon_sym_string] = ACTIONS(201),
    [anon_sym_record] = ACTIONS(201),
    [anon_sym_geometry] = ACTIONS(201),
    [anon_sym_EDDSA] = ACTIONS(201),
    [anon_sym_ES256] = ACTIONS(201),
    [anon_sym_ES384] = ACTIONS(201),
    [anon_sym_ES512] = ACTIONS(201),
    [anon_sym_HS256] = ACTIONS(201),
    [anon_sym_HS384] = ACTIONS(201),
    [anon_sym_HS512] = ACTIONS(201),
    [anon_sym_PS256] = ACTIONS(201),
    [anon_sym_PS384] = ACTIONS(201),
    [anon_sym_PS512] = ACTIONS(201),
    [anon_sym_RS256] = ACTIONS(201),
    [anon_sym_RS384] = ACTIONS(201),
    [anon_sym_RS512] = ACTIONS(201),
    [aux_sym_function_token1] = ACTIONS(199),
    [aux_sym_function_token2] = ACTIONS(199),
    [anon_sym_count] = ACTIONS(201),
    [aux_sym_function_token3] = ACTIONS(199),
    [aux_sym_function_token4] = ACTIONS(199),
    [aux_sym_function_token5] = ACTIONS(199),
    [aux_sym_function_token6] = ACTIONS(199),
    [aux_sym_function_token7] = ACTIONS(199),
    [aux_sym_function_token8] = ACTIONS(199),
    [aux_sym_function_token9] = ACTIONS(199),
    [aux_sym_function_token10] = ACTIONS(201),
    [aux_sym_function_token11] = ACTIONS(199),
    [aux_sym_function_token12] = ACTIONS(201),
    [aux_sym_function_token13] = ACTIONS(199),
    [aux_sym_function_token14] = ACTIONS(199),
    [aux_sym_function_token15] = ACTIONS(199),
    [aux_sym_function_token16] = ACTIONS(201),
    [anon_sym_true] = ACTIONS(201),
    [anon_sym_false] = ACTIONS(201),
    [anon_sym_TRUE] = ACTIONS(201),
    [anon_sym_FALSE] = ACTIONS(201),
    [anon_sym_null] = ACTIONS(201),
    [anon_sym_NULL] = ACTIONS(201),
    [anon_sym_none] = ACTIONS(201),
    [anon_sym_NONE] = ACTIONS(201),
    [sym_variable] = ACTIONS(199),
    [sym_comment] = ACTIONS(199),
    [anon_sym_SQUOTE] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(199),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [anon_sym_function] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_RBRACE] = ACTIONS(203),
    [aux_sym_future_token1] = ACTIONS(203),
    [aux_sym_casting_token1] = ACTIONS(203),
    [aux_sym_property_token1] = ACTIONS(205),
    [aux_sym_identifier_token1] = ACTIONS(205),
    [aux_sym_duration_token1] = ACTIONS(205),
    [aux_sym_constant_token1] = ACTIONS(203),
    [aux_sym_number_token1] = ACTIONS(205),
    [aux_sym_record_token1] = ACTIONS(203),
    [aux_sym_record_token2] = ACTIONS(203),
    [anon_sym_USE] = ACTIONS(205),
    [anon_sym_NS] = ACTIONS(205),
    [anon_sym_DB] = ACTIONS(205),
    [anon_sym_LET] = ACTIONS(205),
    [anon_sym_BEGIN] = ACTIONS(205),
    [anon_sym_TRANSACTION] = ACTIONS(205),
    [anon_sym_CANCEL] = ACTIONS(205),
    [anon_sym_COMMIT] = ACTIONS(205),
    [anon_sym_IF] = ACTIONS(205),
    [anon_sym_ELSE] = ACTIONS(205),
    [anon_sym_THEN] = ACTIONS(205),
    [anon_sym_END] = ACTIONS(205),
    [anon_sym_SELECT] = ACTIONS(205),
    [anon_sym_FROM] = ACTIONS(205),
    [anon_sym_WHERE] = ACTIONS(205),
    [anon_sym_SPLIT] = ACTIONS(205),
    [anon_sym_AT] = ACTIONS(205),
    [anon_sym_GROUP] = ACTIONS(205),
    [anon_sym_BY] = ACTIONS(205),
    [anon_sym_ORDER] = ACTIONS(205),
    [anon_sym_COLLATE] = ACTIONS(205),
    [anon_sym_NUMERIC] = ACTIONS(205),
    [anon_sym_ASC] = ACTIONS(205),
    [anon_sym_DESC] = ACTIONS(205),
    [anon_sym_LIMIT] = ACTIONS(205),
    [anon_sym_START] = ACTIONS(205),
    [anon_sym_FETCH] = ACTIONS(205),
    [anon_sym_TIMEOUT] = ACTIONS(205),
    [anon_sym_PARALLEL] = ACTIONS(205),
    [anon_sym_INSERT] = ACTIONS(205),
    [anon_sym_IGNORE] = ACTIONS(205),
    [anon_sym_INTO] = ACTIONS(205),
    [anon_sym_VALUES] = ACTIONS(205),
    [anon_sym_ON] = ACTIONS(205),
    [anon_sym_DUPLICATE] = ACTIONS(205),
    [anon_sym_KEY] = ACTIONS(205),
    [anon_sym_UPDATE] = ACTIONS(205),
    [anon_sym_CREATE] = ACTIONS(205),
    [anon_sym_CONTENT] = ACTIONS(205),
    [anon_sym_SET] = ACTIONS(205),
    [anon_sym_RETURN] = ACTIONS(205),
    [anon_sym_BEFORE] = ACTIONS(205),
    [anon_sym_AFTER] = ACTIONS(205),
    [anon_sym_DIFF] = ACTIONS(205),
    [anon_sym_MERGE] = ACTIONS(205),
    [anon_sym_PATCH] = ACTIONS(205),
    [anon_sym_RELATE] = ACTIONS(205),
    [anon_sym_DELETE] = ACTIONS(205),
    [anon_sym_DEFINE] = ACTIONS(205),
    [anon_sym_NAMESPACE] = ACTIONS(205),
    [anon_sym_DATABASE] = ACTIONS(205),
    [anon_sym_LOGIN] = ACTIONS(205),
    [anon_sym_PASSWORD] = ACTIONS(205),
    [anon_sym_PASSHASH] = ACTIONS(205),
    [anon_sym_TOKEN] = ACTIONS(205),
    [anon_sym_SCOPE] = ACTIONS(205),
    [anon_sym_TYPE] = ACTIONS(205),
    [anon_sym_VALUE] = ACTIONS(205),
    [anon_sym_SESSION] = ACTIONS(205),
    [anon_sym_SIGNUP] = ACTIONS(205),
    [anon_sym_SIGNIN] = ACTIONS(205),
    [anon_sym_TABLE] = ACTIONS(205),
    [anon_sym_DROP] = ACTIONS(205),
    [anon_sym_SCHEMAFULL] = ACTIONS(205),
    [anon_sym_SCHEMALESS] = ACTIONS(205),
    [anon_sym_AS] = ACTIONS(205),
    [anon_sym_PERMISSIONS] = ACTIONS(205),
    [anon_sym_FULL] = ACTIONS(205),
    [anon_sym_FOR] = ACTIONS(205),
    [anon_sym_select] = ACTIONS(205),
    [anon_sym_update] = ACTIONS(205),
    [anon_sym_create] = ACTIONS(205),
    [anon_sym_delete] = ACTIONS(205),
    [anon_sym_EVENT] = ACTIONS(205),
    [anon_sym_WHEN] = ACTIONS(205),
    [anon_sym_ASSERT] = ACTIONS(205),
    [anon_sym_INDEX] = ACTIONS(205),
    [anon_sym_FIELDS] = ACTIONS(205),
    [anon_sym_COLUMNS] = ACTIONS(205),
    [anon_sym_UNIQUE] = ACTIONS(205),
    [anon_sym_REMOVE] = ACTIONS(205),
    [anon_sym_SLEEP] = ACTIONS(205),
    [anon_sym_INFO] = ACTIONS(205),
    [anon_sym_KV] = ACTIONS(205),
    [anon_sym_FUNCTION] = ACTIONS(205),
    [anon_sym_PARAM] = ACTIONS(205),
    [anon_sym_AMP_AMP] = ACTIONS(203),
    [anon_sym_AND] = ACTIONS(205),
    [anon_sym_PIPE_PIPE] = ACTIONS(203),
    [anon_sym_OR] = ACTIONS(205),
    [anon_sym_QMARK_QMARK] = ACTIONS(203),
    [anon_sym_QMARK_COLON] = ACTIONS(203),
    [anon_sym_EQ] = ACTIONS(205),
    [anon_sym_IS] = ACTIONS(205),
    [anon_sym_BANG_EQ] = ACTIONS(203),
    [anon_sym_ISNOT] = ACTIONS(203),
    [anon_sym_EQ_EQ] = ACTIONS(203),
    [anon_sym_QMARK_EQ] = ACTIONS(203),
    [anon_sym_STAR_EQ] = ACTIONS(203),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_BANG_TILDE] = ACTIONS(203),
    [anon_sym_QMARK_TILDE] = ACTIONS(203),
    [anon_sym_STAR_TILDE] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(205),
    [anon_sym_LT_EQ] = ACTIONS(203),
    [anon_sym_GT] = ACTIONS(205),
    [anon_sym_GT_EQ] = ACTIONS(203),
    [anon_sym_PLUS] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_x] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(205),
    [anon_sym_] = ACTIONS(203),
    [anon_sym_STAR_STAR] = ACTIONS(203),
    [anon_sym_IN] = ACTIONS(205),
    [anon_sym_CONTAINS] = ACTIONS(205),
    [anon_sym_2] = ACTIONS(203),
    [anon_sym_CONTAINSNOT] = ACTIONS(205),
    [anon_sym_3] = ACTIONS(203),
    [anon_sym_CONTAINSALL] = ACTIONS(205),
    [anon_sym_4] = ACTIONS(203),
    [anon_sym_CONTAINSANY] = ACTIONS(205),
    [anon_sym_5] = ACTIONS(203),
    [anon_sym_CONTAINSNONE] = ACTIONS(205),
    [anon_sym_6] = ACTIONS(203),
    [anon_sym_INSIDE] = ACTIONS(205),
    [anon_sym_7] = ACTIONS(203),
    [anon_sym_NOTINSIDE] = ACTIONS(205),
    [anon_sym_NOTIN] = ACTIONS(203),
    [anon_sym_8] = ACTIONS(203),
    [anon_sym_ALLINSIDE] = ACTIONS(205),
    [anon_sym_9] = ACTIONS(203),
    [anon_sym_ANYINSIDE] = ACTIONS(205),
    [anon_sym_10] = ACTIONS(203),
    [anon_sym_NONEINSIDE] = ACTIONS(205),
    [anon_sym_11] = ACTIONS(203),
    [anon_sym_OUTSIDE] = ACTIONS(205),
    [anon_sym_INTERSECTS] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(203),
    [anon_sym_RBRACK] = ACTIONS(203),
    [anon_sym_DASH_GT] = ACTIONS(203),
    [anon_sym_LT_DASH] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(203),
    [anon_sym_SEMI] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(203),
    [anon_sym_any] = ACTIONS(205),
    [anon_sym_array] = ACTIONS(205),
    [anon_sym_bool] = ACTIONS(205),
    [anon_sym_datetime] = ACTIONS(205),
    [anon_sym_decimal] = ACTIONS(205),
    [anon_sym_duration] = ACTIONS(205),
    [anon_sym_float] = ACTIONS(205),
    [anon_sym_int] = ACTIONS(205),
    [anon_sym_number] = ACTIONS(205),
    [anon_sym_object] = ACTIONS(205),
    [anon_sym_string] = ACTIONS(205),
    [anon_sym_record] = ACTIONS(205),
    [anon_sym_geometry] = ACTIONS(205),
    [anon_sym_EDDSA] = ACTIONS(205),
    [anon_sym_ES256] = ACTIONS(205),
    [anon_sym_ES384] = ACTIONS(205),
    [anon_sym_ES512] = ACTIONS(205),
    [anon_sym_HS256] = ACTIONS(205),
    [anon_sym_HS384] = ACTIONS(205),
    [anon_sym_HS512] = ACTIONS(205),
    [anon_sym_PS256] = ACTIONS(205),
    [anon_sym_PS384] = ACTIONS(205),
    [anon_sym_PS512] = ACTIONS(205),
    [anon_sym_RS256] = ACTIONS(205),
    [anon_sym_RS384] = ACTIONS(205),
    [anon_sym_RS512] = ACTIONS(205),
    [aux_sym_function_token1] = ACTIONS(203),
    [aux_sym_function_token2] = ACTIONS(203),
    [anon_sym_count] = ACTIONS(205),
    [aux_sym_function_token3] = ACTIONS(203),
    [aux_sym_function_token4] = ACTIONS(203),
    [aux_sym_function_token5] = ACTIONS(203),
    [aux_sym_function_token6] = ACTIONS(203),
    [aux_sym_function_token7] = ACTIONS(203),
    [aux_sym_function_token8] = ACTIONS(203),
    [aux_sym_function_token9] = ACTIONS(203),
    [aux_sym_function_token10] = ACTIONS(205),
    [aux_sym_function_token11] = ACTIONS(203),
    [aux_sym_function_token12] = ACTIONS(205),
    [aux_sym_function_token13] = ACTIONS(203),
    [aux_sym_function_token14] = ACTIONS(203),
    [aux_sym_function_token15] = ACTIONS(203),
    [aux_sym_function_token16] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(205),
    [anon_sym_false] = ACTIONS(205),
    [anon_sym_TRUE] = ACTIONS(205),
    [anon_sym_FALSE] = ACTIONS(205),
    [anon_sym_null] = ACTIONS(205),
    [anon_sym_NULL] = ACTIONS(205),
    [anon_sym_none] = ACTIONS(205),
    [anon_sym_NONE] = ACTIONS(205),
    [sym_variable] = ACTIONS(203),
    [sym_comment] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(203),
    [anon_sym_DQUOTE] = ACTIONS(203),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [anon_sym_function] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_LBRACE] = ACTIONS(207),
    [anon_sym_RBRACE] = ACTIONS(207),
    [aux_sym_future_token1] = ACTIONS(207),
    [aux_sym_casting_token1] = ACTIONS(207),
    [aux_sym_property_token1] = ACTIONS(209),
    [aux_sym_identifier_token1] = ACTIONS(209),
    [aux_sym_duration_token1] = ACTIONS(209),
    [aux_sym_constant_token1] = ACTIONS(207),
    [aux_sym_number_token1] = ACTIONS(209),
    [aux_sym_record_token1] = ACTIONS(207),
    [aux_sym_record_token2] = ACTIONS(207),
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
    [anon_sym_AMP_AMP] = ACTIONS(207),
    [anon_sym_AND] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(207),
    [anon_sym_OR] = ACTIONS(209),
    [anon_sym_QMARK_QMARK] = ACTIONS(207),
    [anon_sym_QMARK_COLON] = ACTIONS(207),
    [anon_sym_EQ] = ACTIONS(209),
    [anon_sym_IS] = ACTIONS(209),
    [anon_sym_BANG_EQ] = ACTIONS(207),
    [anon_sym_ISNOT] = ACTIONS(207),
    [anon_sym_EQ_EQ] = ACTIONS(207),
    [anon_sym_QMARK_EQ] = ACTIONS(207),
    [anon_sym_STAR_EQ] = ACTIONS(207),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_BANG_TILDE] = ACTIONS(207),
    [anon_sym_QMARK_TILDE] = ACTIONS(207),
    [anon_sym_STAR_TILDE] = ACTIONS(207),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_LT_EQ] = ACTIONS(207),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(209),
    [anon_sym_x] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_] = ACTIONS(207),
    [anon_sym_STAR_STAR] = ACTIONS(207),
    [anon_sym_IN] = ACTIONS(209),
    [anon_sym_CONTAINS] = ACTIONS(209),
    [anon_sym_2] = ACTIONS(207),
    [anon_sym_CONTAINSNOT] = ACTIONS(209),
    [anon_sym_3] = ACTIONS(207),
    [anon_sym_CONTAINSALL] = ACTIONS(209),
    [anon_sym_4] = ACTIONS(207),
    [anon_sym_CONTAINSANY] = ACTIONS(209),
    [anon_sym_5] = ACTIONS(207),
    [anon_sym_CONTAINSNONE] = ACTIONS(209),
    [anon_sym_6] = ACTIONS(207),
    [anon_sym_INSIDE] = ACTIONS(209),
    [anon_sym_7] = ACTIONS(207),
    [anon_sym_NOTINSIDE] = ACTIONS(209),
    [anon_sym_NOTIN] = ACTIONS(207),
    [anon_sym_8] = ACTIONS(207),
    [anon_sym_ALLINSIDE] = ACTIONS(209),
    [anon_sym_9] = ACTIONS(207),
    [anon_sym_ANYINSIDE] = ACTIONS(209),
    [anon_sym_10] = ACTIONS(207),
    [anon_sym_NONEINSIDE] = ACTIONS(209),
    [anon_sym_11] = ACTIONS(207),
    [anon_sym_OUTSIDE] = ACTIONS(209),
    [anon_sym_INTERSECTS] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_RBRACK] = ACTIONS(207),
    [anon_sym_DASH_GT] = ACTIONS(207),
    [anon_sym_LT_DASH] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_SEMI] = ACTIONS(207),
    [anon_sym_COLON] = ACTIONS(207),
    [anon_sym_any] = ACTIONS(209),
    [anon_sym_array] = ACTIONS(209),
    [anon_sym_bool] = ACTIONS(209),
    [anon_sym_datetime] = ACTIONS(209),
    [anon_sym_decimal] = ACTIONS(209),
    [anon_sym_duration] = ACTIONS(209),
    [anon_sym_float] = ACTIONS(209),
    [anon_sym_int] = ACTIONS(209),
    [anon_sym_number] = ACTIONS(209),
    [anon_sym_object] = ACTIONS(209),
    [anon_sym_string] = ACTIONS(209),
    [anon_sym_record] = ACTIONS(209),
    [anon_sym_geometry] = ACTIONS(209),
    [anon_sym_EDDSA] = ACTIONS(209),
    [anon_sym_ES256] = ACTIONS(209),
    [anon_sym_ES384] = ACTIONS(209),
    [anon_sym_ES512] = ACTIONS(209),
    [anon_sym_HS256] = ACTIONS(209),
    [anon_sym_HS384] = ACTIONS(209),
    [anon_sym_HS512] = ACTIONS(209),
    [anon_sym_PS256] = ACTIONS(209),
    [anon_sym_PS384] = ACTIONS(209),
    [anon_sym_PS512] = ACTIONS(209),
    [anon_sym_RS256] = ACTIONS(209),
    [anon_sym_RS384] = ACTIONS(209),
    [anon_sym_RS512] = ACTIONS(209),
    [aux_sym_function_token1] = ACTIONS(207),
    [aux_sym_function_token2] = ACTIONS(207),
    [anon_sym_count] = ACTIONS(209),
    [aux_sym_function_token3] = ACTIONS(207),
    [aux_sym_function_token4] = ACTIONS(207),
    [aux_sym_function_token5] = ACTIONS(207),
    [aux_sym_function_token6] = ACTIONS(207),
    [aux_sym_function_token7] = ACTIONS(207),
    [aux_sym_function_token8] = ACTIONS(207),
    [aux_sym_function_token9] = ACTIONS(207),
    [aux_sym_function_token10] = ACTIONS(209),
    [aux_sym_function_token11] = ACTIONS(207),
    [aux_sym_function_token12] = ACTIONS(209),
    [aux_sym_function_token13] = ACTIONS(207),
    [aux_sym_function_token14] = ACTIONS(207),
    [aux_sym_function_token15] = ACTIONS(207),
    [aux_sym_function_token16] = ACTIONS(209),
    [anon_sym_true] = ACTIONS(209),
    [anon_sym_false] = ACTIONS(209),
    [anon_sym_TRUE] = ACTIONS(209),
    [anon_sym_FALSE] = ACTIONS(209),
    [anon_sym_null] = ACTIONS(209),
    [anon_sym_NULL] = ACTIONS(209),
    [anon_sym_none] = ACTIONS(209),
    [anon_sym_NONE] = ACTIONS(209),
    [sym_variable] = ACTIONS(207),
    [sym_comment] = ACTIONS(207),
    [anon_sym_SQUOTE] = ACTIONS(207),
    [anon_sym_DQUOTE] = ACTIONS(207),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [anon_sym_function] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_RPAREN] = ACTIONS(211),
    [anon_sym_LBRACE] = ACTIONS(211),
    [anon_sym_RBRACE] = ACTIONS(211),
    [aux_sym_future_token1] = ACTIONS(211),
    [aux_sym_casting_token1] = ACTIONS(211),
    [aux_sym_property_token1] = ACTIONS(213),
    [aux_sym_identifier_token1] = ACTIONS(213),
    [aux_sym_duration_token1] = ACTIONS(213),
    [aux_sym_constant_token1] = ACTIONS(211),
    [aux_sym_number_token1] = ACTIONS(213),
    [aux_sym_record_token1] = ACTIONS(211),
    [aux_sym_record_token2] = ACTIONS(211),
    [anon_sym_USE] = ACTIONS(213),
    [anon_sym_NS] = ACTIONS(213),
    [anon_sym_DB] = ACTIONS(213),
    [anon_sym_LET] = ACTIONS(213),
    [anon_sym_BEGIN] = ACTIONS(213),
    [anon_sym_TRANSACTION] = ACTIONS(213),
    [anon_sym_CANCEL] = ACTIONS(213),
    [anon_sym_COMMIT] = ACTIONS(213),
    [anon_sym_IF] = ACTIONS(213),
    [anon_sym_ELSE] = ACTIONS(213),
    [anon_sym_THEN] = ACTIONS(213),
    [anon_sym_END] = ACTIONS(213),
    [anon_sym_SELECT] = ACTIONS(213),
    [anon_sym_FROM] = ACTIONS(213),
    [anon_sym_WHERE] = ACTIONS(213),
    [anon_sym_SPLIT] = ACTIONS(213),
    [anon_sym_AT] = ACTIONS(213),
    [anon_sym_GROUP] = ACTIONS(213),
    [anon_sym_BY] = ACTIONS(213),
    [anon_sym_ORDER] = ACTIONS(213),
    [anon_sym_COLLATE] = ACTIONS(213),
    [anon_sym_NUMERIC] = ACTIONS(213),
    [anon_sym_ASC] = ACTIONS(213),
    [anon_sym_DESC] = ACTIONS(213),
    [anon_sym_LIMIT] = ACTIONS(213),
    [anon_sym_START] = ACTIONS(213),
    [anon_sym_FETCH] = ACTIONS(213),
    [anon_sym_TIMEOUT] = ACTIONS(213),
    [anon_sym_PARALLEL] = ACTIONS(213),
    [anon_sym_INSERT] = ACTIONS(213),
    [anon_sym_IGNORE] = ACTIONS(213),
    [anon_sym_INTO] = ACTIONS(213),
    [anon_sym_VALUES] = ACTIONS(213),
    [anon_sym_ON] = ACTIONS(213),
    [anon_sym_DUPLICATE] = ACTIONS(213),
    [anon_sym_KEY] = ACTIONS(213),
    [anon_sym_UPDATE] = ACTIONS(213),
    [anon_sym_CREATE] = ACTIONS(213),
    [anon_sym_CONTENT] = ACTIONS(213),
    [anon_sym_SET] = ACTIONS(213),
    [anon_sym_RETURN] = ACTIONS(213),
    [anon_sym_BEFORE] = ACTIONS(213),
    [anon_sym_AFTER] = ACTIONS(213),
    [anon_sym_DIFF] = ACTIONS(213),
    [anon_sym_MERGE] = ACTIONS(213),
    [anon_sym_PATCH] = ACTIONS(213),
    [anon_sym_RELATE] = ACTIONS(213),
    [anon_sym_DELETE] = ACTIONS(213),
    [anon_sym_DEFINE] = ACTIONS(213),
    [anon_sym_NAMESPACE] = ACTIONS(213),
    [anon_sym_DATABASE] = ACTIONS(213),
    [anon_sym_LOGIN] = ACTIONS(213),
    [anon_sym_PASSWORD] = ACTIONS(213),
    [anon_sym_PASSHASH] = ACTIONS(213),
    [anon_sym_TOKEN] = ACTIONS(213),
    [anon_sym_SCOPE] = ACTIONS(213),
    [anon_sym_TYPE] = ACTIONS(213),
    [anon_sym_VALUE] = ACTIONS(213),
    [anon_sym_SESSION] = ACTIONS(213),
    [anon_sym_SIGNUP] = ACTIONS(213),
    [anon_sym_SIGNIN] = ACTIONS(213),
    [anon_sym_TABLE] = ACTIONS(213),
    [anon_sym_DROP] = ACTIONS(213),
    [anon_sym_SCHEMAFULL] = ACTIONS(213),
    [anon_sym_SCHEMALESS] = ACTIONS(213),
    [anon_sym_AS] = ACTIONS(213),
    [anon_sym_PERMISSIONS] = ACTIONS(213),
    [anon_sym_FULL] = ACTIONS(213),
    [anon_sym_FOR] = ACTIONS(213),
    [anon_sym_select] = ACTIONS(213),
    [anon_sym_update] = ACTIONS(213),
    [anon_sym_create] = ACTIONS(213),
    [anon_sym_delete] = ACTIONS(213),
    [anon_sym_EVENT] = ACTIONS(213),
    [anon_sym_WHEN] = ACTIONS(213),
    [anon_sym_ASSERT] = ACTIONS(213),
    [anon_sym_INDEX] = ACTIONS(213),
    [anon_sym_FIELDS] = ACTIONS(213),
    [anon_sym_COLUMNS] = ACTIONS(213),
    [anon_sym_UNIQUE] = ACTIONS(213),
    [anon_sym_REMOVE] = ACTIONS(213),
    [anon_sym_SLEEP] = ACTIONS(213),
    [anon_sym_INFO] = ACTIONS(213),
    [anon_sym_KV] = ACTIONS(213),
    [anon_sym_FUNCTION] = ACTIONS(213),
    [anon_sym_PARAM] = ACTIONS(213),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_AND] = ACTIONS(213),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [anon_sym_OR] = ACTIONS(213),
    [anon_sym_QMARK_QMARK] = ACTIONS(211),
    [anon_sym_QMARK_COLON] = ACTIONS(211),
    [anon_sym_EQ] = ACTIONS(213),
    [anon_sym_IS] = ACTIONS(213),
    [anon_sym_BANG_EQ] = ACTIONS(211),
    [anon_sym_ISNOT] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(211),
    [anon_sym_QMARK_EQ] = ACTIONS(211),
    [anon_sym_STAR_EQ] = ACTIONS(211),
    [anon_sym_TILDE] = ACTIONS(211),
    [anon_sym_BANG_TILDE] = ACTIONS(211),
    [anon_sym_QMARK_TILDE] = ACTIONS(211),
    [anon_sym_STAR_TILDE] = ACTIONS(211),
    [anon_sym_LT] = ACTIONS(213),
    [anon_sym_LT_EQ] = ACTIONS(211),
    [anon_sym_GT] = ACTIONS(213),
    [anon_sym_GT_EQ] = ACTIONS(211),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(213),
    [anon_sym_STAR] = ACTIONS(213),
    [anon_sym_x] = ACTIONS(213),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_] = ACTIONS(211),
    [anon_sym_STAR_STAR] = ACTIONS(211),
    [anon_sym_IN] = ACTIONS(213),
    [anon_sym_CONTAINS] = ACTIONS(213),
    [anon_sym_2] = ACTIONS(211),
    [anon_sym_CONTAINSNOT] = ACTIONS(213),
    [anon_sym_3] = ACTIONS(211),
    [anon_sym_CONTAINSALL] = ACTIONS(213),
    [anon_sym_4] = ACTIONS(211),
    [anon_sym_CONTAINSANY] = ACTIONS(213),
    [anon_sym_5] = ACTIONS(211),
    [anon_sym_CONTAINSNONE] = ACTIONS(213),
    [anon_sym_6] = ACTIONS(211),
    [anon_sym_INSIDE] = ACTIONS(213),
    [anon_sym_7] = ACTIONS(211),
    [anon_sym_NOTINSIDE] = ACTIONS(213),
    [anon_sym_NOTIN] = ACTIONS(211),
    [anon_sym_8] = ACTIONS(211),
    [anon_sym_ALLINSIDE] = ACTIONS(213),
    [anon_sym_9] = ACTIONS(211),
    [anon_sym_ANYINSIDE] = ACTIONS(213),
    [anon_sym_10] = ACTIONS(211),
    [anon_sym_NONEINSIDE] = ACTIONS(213),
    [anon_sym_11] = ACTIONS(211),
    [anon_sym_OUTSIDE] = ACTIONS(213),
    [anon_sym_INTERSECTS] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(211),
    [anon_sym_RBRACK] = ACTIONS(211),
    [anon_sym_DASH_GT] = ACTIONS(211),
    [anon_sym_LT_DASH] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(211),
    [anon_sym_SEMI] = ACTIONS(211),
    [anon_sym_COLON] = ACTIONS(211),
    [anon_sym_any] = ACTIONS(213),
    [anon_sym_array] = ACTIONS(213),
    [anon_sym_bool] = ACTIONS(213),
    [anon_sym_datetime] = ACTIONS(213),
    [anon_sym_decimal] = ACTIONS(213),
    [anon_sym_duration] = ACTIONS(213),
    [anon_sym_float] = ACTIONS(213),
    [anon_sym_int] = ACTIONS(213),
    [anon_sym_number] = ACTIONS(213),
    [anon_sym_object] = ACTIONS(213),
    [anon_sym_string] = ACTIONS(213),
    [anon_sym_record] = ACTIONS(213),
    [anon_sym_geometry] = ACTIONS(213),
    [anon_sym_EDDSA] = ACTIONS(213),
    [anon_sym_ES256] = ACTIONS(213),
    [anon_sym_ES384] = ACTIONS(213),
    [anon_sym_ES512] = ACTIONS(213),
    [anon_sym_HS256] = ACTIONS(213),
    [anon_sym_HS384] = ACTIONS(213),
    [anon_sym_HS512] = ACTIONS(213),
    [anon_sym_PS256] = ACTIONS(213),
    [anon_sym_PS384] = ACTIONS(213),
    [anon_sym_PS512] = ACTIONS(213),
    [anon_sym_RS256] = ACTIONS(213),
    [anon_sym_RS384] = ACTIONS(213),
    [anon_sym_RS512] = ACTIONS(213),
    [aux_sym_function_token1] = ACTIONS(211),
    [aux_sym_function_token2] = ACTIONS(211),
    [anon_sym_count] = ACTIONS(213),
    [aux_sym_function_token3] = ACTIONS(211),
    [aux_sym_function_token4] = ACTIONS(211),
    [aux_sym_function_token5] = ACTIONS(211),
    [aux_sym_function_token6] = ACTIONS(211),
    [aux_sym_function_token7] = ACTIONS(211),
    [aux_sym_function_token8] = ACTIONS(211),
    [aux_sym_function_token9] = ACTIONS(211),
    [aux_sym_function_token10] = ACTIONS(213),
    [aux_sym_function_token11] = ACTIONS(211),
    [aux_sym_function_token12] = ACTIONS(213),
    [aux_sym_function_token13] = ACTIONS(211),
    [aux_sym_function_token14] = ACTIONS(211),
    [aux_sym_function_token15] = ACTIONS(211),
    [aux_sym_function_token16] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(213),
    [anon_sym_false] = ACTIONS(213),
    [anon_sym_TRUE] = ACTIONS(213),
    [anon_sym_FALSE] = ACTIONS(213),
    [anon_sym_null] = ACTIONS(213),
    [anon_sym_NULL] = ACTIONS(213),
    [anon_sym_none] = ACTIONS(213),
    [anon_sym_NONE] = ACTIONS(213),
    [sym_variable] = ACTIONS(211),
    [sym_comment] = ACTIONS(211),
    [anon_sym_SQUOTE] = ACTIONS(211),
    [anon_sym_DQUOTE] = ACTIONS(211),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(215),
    [anon_sym_function] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(215),
    [anon_sym_RPAREN] = ACTIONS(215),
    [anon_sym_LBRACE] = ACTIONS(215),
    [anon_sym_RBRACE] = ACTIONS(215),
    [aux_sym_future_token1] = ACTIONS(215),
    [aux_sym_casting_token1] = ACTIONS(215),
    [aux_sym_property_token1] = ACTIONS(217),
    [aux_sym_identifier_token1] = ACTIONS(217),
    [aux_sym_duration_token1] = ACTIONS(217),
    [aux_sym_constant_token1] = ACTIONS(215),
    [aux_sym_number_token1] = ACTIONS(217),
    [aux_sym_record_token1] = ACTIONS(215),
    [aux_sym_record_token2] = ACTIONS(215),
    [anon_sym_USE] = ACTIONS(217),
    [anon_sym_NS] = ACTIONS(217),
    [anon_sym_DB] = ACTIONS(217),
    [anon_sym_LET] = ACTIONS(217),
    [anon_sym_BEGIN] = ACTIONS(217),
    [anon_sym_TRANSACTION] = ACTIONS(217),
    [anon_sym_CANCEL] = ACTIONS(217),
    [anon_sym_COMMIT] = ACTIONS(217),
    [anon_sym_IF] = ACTIONS(217),
    [anon_sym_ELSE] = ACTIONS(217),
    [anon_sym_THEN] = ACTIONS(217),
    [anon_sym_END] = ACTIONS(217),
    [anon_sym_SELECT] = ACTIONS(217),
    [anon_sym_FROM] = ACTIONS(217),
    [anon_sym_WHERE] = ACTIONS(217),
    [anon_sym_SPLIT] = ACTIONS(217),
    [anon_sym_AT] = ACTIONS(217),
    [anon_sym_GROUP] = ACTIONS(217),
    [anon_sym_BY] = ACTIONS(217),
    [anon_sym_ORDER] = ACTIONS(217),
    [anon_sym_COLLATE] = ACTIONS(217),
    [anon_sym_NUMERIC] = ACTIONS(217),
    [anon_sym_ASC] = ACTIONS(217),
    [anon_sym_DESC] = ACTIONS(217),
    [anon_sym_LIMIT] = ACTIONS(217),
    [anon_sym_START] = ACTIONS(217),
    [anon_sym_FETCH] = ACTIONS(217),
    [anon_sym_TIMEOUT] = ACTIONS(217),
    [anon_sym_PARALLEL] = ACTIONS(217),
    [anon_sym_INSERT] = ACTIONS(217),
    [anon_sym_IGNORE] = ACTIONS(217),
    [anon_sym_INTO] = ACTIONS(217),
    [anon_sym_VALUES] = ACTIONS(217),
    [anon_sym_ON] = ACTIONS(217),
    [anon_sym_DUPLICATE] = ACTIONS(217),
    [anon_sym_KEY] = ACTIONS(217),
    [anon_sym_UPDATE] = ACTIONS(217),
    [anon_sym_CREATE] = ACTIONS(217),
    [anon_sym_CONTENT] = ACTIONS(217),
    [anon_sym_SET] = ACTIONS(217),
    [anon_sym_RETURN] = ACTIONS(217),
    [anon_sym_BEFORE] = ACTIONS(217),
    [anon_sym_AFTER] = ACTIONS(217),
    [anon_sym_DIFF] = ACTIONS(217),
    [anon_sym_MERGE] = ACTIONS(217),
    [anon_sym_PATCH] = ACTIONS(217),
    [anon_sym_RELATE] = ACTIONS(217),
    [anon_sym_DELETE] = ACTIONS(217),
    [anon_sym_DEFINE] = ACTIONS(217),
    [anon_sym_NAMESPACE] = ACTIONS(217),
    [anon_sym_DATABASE] = ACTIONS(217),
    [anon_sym_LOGIN] = ACTIONS(217),
    [anon_sym_PASSWORD] = ACTIONS(217),
    [anon_sym_PASSHASH] = ACTIONS(217),
    [anon_sym_TOKEN] = ACTIONS(217),
    [anon_sym_SCOPE] = ACTIONS(217),
    [anon_sym_TYPE] = ACTIONS(217),
    [anon_sym_VALUE] = ACTIONS(217),
    [anon_sym_SESSION] = ACTIONS(217),
    [anon_sym_SIGNUP] = ACTIONS(217),
    [anon_sym_SIGNIN] = ACTIONS(217),
    [anon_sym_TABLE] = ACTIONS(217),
    [anon_sym_DROP] = ACTIONS(217),
    [anon_sym_SCHEMAFULL] = ACTIONS(217),
    [anon_sym_SCHEMALESS] = ACTIONS(217),
    [anon_sym_AS] = ACTIONS(217),
    [anon_sym_PERMISSIONS] = ACTIONS(217),
    [anon_sym_FULL] = ACTIONS(217),
    [anon_sym_FOR] = ACTIONS(217),
    [anon_sym_select] = ACTIONS(217),
    [anon_sym_update] = ACTIONS(217),
    [anon_sym_create] = ACTIONS(217),
    [anon_sym_delete] = ACTIONS(217),
    [anon_sym_EVENT] = ACTIONS(217),
    [anon_sym_WHEN] = ACTIONS(217),
    [anon_sym_ASSERT] = ACTIONS(217),
    [anon_sym_INDEX] = ACTIONS(217),
    [anon_sym_FIELDS] = ACTIONS(217),
    [anon_sym_COLUMNS] = ACTIONS(217),
    [anon_sym_UNIQUE] = ACTIONS(217),
    [anon_sym_REMOVE] = ACTIONS(217),
    [anon_sym_SLEEP] = ACTIONS(217),
    [anon_sym_INFO] = ACTIONS(217),
    [anon_sym_KV] = ACTIONS(217),
    [anon_sym_FUNCTION] = ACTIONS(217),
    [anon_sym_PARAM] = ACTIONS(217),
    [anon_sym_AMP_AMP] = ACTIONS(215),
    [anon_sym_AND] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(215),
    [anon_sym_OR] = ACTIONS(217),
    [anon_sym_QMARK_QMARK] = ACTIONS(215),
    [anon_sym_QMARK_COLON] = ACTIONS(215),
    [anon_sym_EQ] = ACTIONS(217),
    [anon_sym_IS] = ACTIONS(217),
    [anon_sym_BANG_EQ] = ACTIONS(215),
    [anon_sym_ISNOT] = ACTIONS(215),
    [anon_sym_EQ_EQ] = ACTIONS(215),
    [anon_sym_QMARK_EQ] = ACTIONS(215),
    [anon_sym_STAR_EQ] = ACTIONS(215),
    [anon_sym_TILDE] = ACTIONS(215),
    [anon_sym_BANG_TILDE] = ACTIONS(215),
    [anon_sym_QMARK_TILDE] = ACTIONS(215),
    [anon_sym_STAR_TILDE] = ACTIONS(215),
    [anon_sym_LT] = ACTIONS(217),
    [anon_sym_LT_EQ] = ACTIONS(215),
    [anon_sym_GT] = ACTIONS(217),
    [anon_sym_GT_EQ] = ACTIONS(215),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(217),
    [anon_sym_x] = ACTIONS(217),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_] = ACTIONS(215),
    [anon_sym_STAR_STAR] = ACTIONS(215),
    [anon_sym_IN] = ACTIONS(217),
    [anon_sym_CONTAINS] = ACTIONS(217),
    [anon_sym_2] = ACTIONS(215),
    [anon_sym_CONTAINSNOT] = ACTIONS(217),
    [anon_sym_3] = ACTIONS(215),
    [anon_sym_CONTAINSALL] = ACTIONS(217),
    [anon_sym_4] = ACTIONS(215),
    [anon_sym_CONTAINSANY] = ACTIONS(217),
    [anon_sym_5] = ACTIONS(215),
    [anon_sym_CONTAINSNONE] = ACTIONS(217),
    [anon_sym_6] = ACTIONS(215),
    [anon_sym_INSIDE] = ACTIONS(217),
    [anon_sym_7] = ACTIONS(215),
    [anon_sym_NOTINSIDE] = ACTIONS(217),
    [anon_sym_NOTIN] = ACTIONS(215),
    [anon_sym_8] = ACTIONS(215),
    [anon_sym_ALLINSIDE] = ACTIONS(217),
    [anon_sym_9] = ACTIONS(215),
    [anon_sym_ANYINSIDE] = ACTIONS(217),
    [anon_sym_10] = ACTIONS(215),
    [anon_sym_NONEINSIDE] = ACTIONS(217),
    [anon_sym_11] = ACTIONS(215),
    [anon_sym_OUTSIDE] = ACTIONS(217),
    [anon_sym_INTERSECTS] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(215),
    [anon_sym_RBRACK] = ACTIONS(215),
    [anon_sym_DASH_GT] = ACTIONS(215),
    [anon_sym_LT_DASH] = ACTIONS(215),
    [anon_sym_COMMA] = ACTIONS(215),
    [anon_sym_SEMI] = ACTIONS(215),
    [anon_sym_COLON] = ACTIONS(215),
    [anon_sym_any] = ACTIONS(217),
    [anon_sym_array] = ACTIONS(217),
    [anon_sym_bool] = ACTIONS(217),
    [anon_sym_datetime] = ACTIONS(217),
    [anon_sym_decimal] = ACTIONS(217),
    [anon_sym_duration] = ACTIONS(217),
    [anon_sym_float] = ACTIONS(217),
    [anon_sym_int] = ACTIONS(217),
    [anon_sym_number] = ACTIONS(217),
    [anon_sym_object] = ACTIONS(217),
    [anon_sym_string] = ACTIONS(217),
    [anon_sym_record] = ACTIONS(217),
    [anon_sym_geometry] = ACTIONS(217),
    [anon_sym_EDDSA] = ACTIONS(217),
    [anon_sym_ES256] = ACTIONS(217),
    [anon_sym_ES384] = ACTIONS(217),
    [anon_sym_ES512] = ACTIONS(217),
    [anon_sym_HS256] = ACTIONS(217),
    [anon_sym_HS384] = ACTIONS(217),
    [anon_sym_HS512] = ACTIONS(217),
    [anon_sym_PS256] = ACTIONS(217),
    [anon_sym_PS384] = ACTIONS(217),
    [anon_sym_PS512] = ACTIONS(217),
    [anon_sym_RS256] = ACTIONS(217),
    [anon_sym_RS384] = ACTIONS(217),
    [anon_sym_RS512] = ACTIONS(217),
    [aux_sym_function_token1] = ACTIONS(215),
    [aux_sym_function_token2] = ACTIONS(215),
    [anon_sym_count] = ACTIONS(217),
    [aux_sym_function_token3] = ACTIONS(215),
    [aux_sym_function_token4] = ACTIONS(215),
    [aux_sym_function_token5] = ACTIONS(215),
    [aux_sym_function_token6] = ACTIONS(215),
    [aux_sym_function_token7] = ACTIONS(215),
    [aux_sym_function_token8] = ACTIONS(215),
    [aux_sym_function_token9] = ACTIONS(215),
    [aux_sym_function_token10] = ACTIONS(217),
    [aux_sym_function_token11] = ACTIONS(215),
    [aux_sym_function_token12] = ACTIONS(217),
    [aux_sym_function_token13] = ACTIONS(215),
    [aux_sym_function_token14] = ACTIONS(215),
    [aux_sym_function_token15] = ACTIONS(215),
    [aux_sym_function_token16] = ACTIONS(217),
    [anon_sym_true] = ACTIONS(217),
    [anon_sym_false] = ACTIONS(217),
    [anon_sym_TRUE] = ACTIONS(217),
    [anon_sym_FALSE] = ACTIONS(217),
    [anon_sym_null] = ACTIONS(217),
    [anon_sym_NULL] = ACTIONS(217),
    [anon_sym_none] = ACTIONS(217),
    [anon_sym_NONE] = ACTIONS(217),
    [sym_variable] = ACTIONS(215),
    [sym_comment] = ACTIONS(215),
    [anon_sym_SQUOTE] = ACTIONS(215),
    [anon_sym_DQUOTE] = ACTIONS(215),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(219),
    [anon_sym_function] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_RPAREN] = ACTIONS(219),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_RBRACE] = ACTIONS(219),
    [aux_sym_future_token1] = ACTIONS(219),
    [aux_sym_casting_token1] = ACTIONS(219),
    [aux_sym_property_token1] = ACTIONS(221),
    [aux_sym_identifier_token1] = ACTIONS(221),
    [aux_sym_duration_token1] = ACTIONS(221),
    [aux_sym_constant_token1] = ACTIONS(219),
    [aux_sym_number_token1] = ACTIONS(221),
    [aux_sym_record_token1] = ACTIONS(219),
    [aux_sym_record_token2] = ACTIONS(219),
    [anon_sym_USE] = ACTIONS(221),
    [anon_sym_NS] = ACTIONS(221),
    [anon_sym_DB] = ACTIONS(221),
    [anon_sym_LET] = ACTIONS(221),
    [anon_sym_BEGIN] = ACTIONS(221),
    [anon_sym_TRANSACTION] = ACTIONS(221),
    [anon_sym_CANCEL] = ACTIONS(221),
    [anon_sym_COMMIT] = ACTIONS(221),
    [anon_sym_IF] = ACTIONS(221),
    [anon_sym_ELSE] = ACTIONS(221),
    [anon_sym_THEN] = ACTIONS(221),
    [anon_sym_END] = ACTIONS(221),
    [anon_sym_SELECT] = ACTIONS(221),
    [anon_sym_FROM] = ACTIONS(221),
    [anon_sym_WHERE] = ACTIONS(221),
    [anon_sym_SPLIT] = ACTIONS(221),
    [anon_sym_AT] = ACTIONS(221),
    [anon_sym_GROUP] = ACTIONS(221),
    [anon_sym_BY] = ACTIONS(221),
    [anon_sym_ORDER] = ACTIONS(221),
    [anon_sym_COLLATE] = ACTIONS(221),
    [anon_sym_NUMERIC] = ACTIONS(221),
    [anon_sym_ASC] = ACTIONS(221),
    [anon_sym_DESC] = ACTIONS(221),
    [anon_sym_LIMIT] = ACTIONS(221),
    [anon_sym_START] = ACTIONS(221),
    [anon_sym_FETCH] = ACTIONS(221),
    [anon_sym_TIMEOUT] = ACTIONS(221),
    [anon_sym_PARALLEL] = ACTIONS(221),
    [anon_sym_INSERT] = ACTIONS(221),
    [anon_sym_IGNORE] = ACTIONS(221),
    [anon_sym_INTO] = ACTIONS(221),
    [anon_sym_VALUES] = ACTIONS(221),
    [anon_sym_ON] = ACTIONS(221),
    [anon_sym_DUPLICATE] = ACTIONS(221),
    [anon_sym_KEY] = ACTIONS(221),
    [anon_sym_UPDATE] = ACTIONS(221),
    [anon_sym_CREATE] = ACTIONS(221),
    [anon_sym_CONTENT] = ACTIONS(221),
    [anon_sym_SET] = ACTIONS(221),
    [anon_sym_RETURN] = ACTIONS(221),
    [anon_sym_BEFORE] = ACTIONS(221),
    [anon_sym_AFTER] = ACTIONS(221),
    [anon_sym_DIFF] = ACTIONS(221),
    [anon_sym_MERGE] = ACTIONS(221),
    [anon_sym_PATCH] = ACTIONS(221),
    [anon_sym_RELATE] = ACTIONS(221),
    [anon_sym_DELETE] = ACTIONS(221),
    [anon_sym_DEFINE] = ACTIONS(221),
    [anon_sym_NAMESPACE] = ACTIONS(221),
    [anon_sym_DATABASE] = ACTIONS(221),
    [anon_sym_LOGIN] = ACTIONS(221),
    [anon_sym_PASSWORD] = ACTIONS(221),
    [anon_sym_PASSHASH] = ACTIONS(221),
    [anon_sym_TOKEN] = ACTIONS(221),
    [anon_sym_SCOPE] = ACTIONS(221),
    [anon_sym_TYPE] = ACTIONS(221),
    [anon_sym_VALUE] = ACTIONS(221),
    [anon_sym_SESSION] = ACTIONS(221),
    [anon_sym_SIGNUP] = ACTIONS(221),
    [anon_sym_SIGNIN] = ACTIONS(221),
    [anon_sym_TABLE] = ACTIONS(221),
    [anon_sym_DROP] = ACTIONS(221),
    [anon_sym_SCHEMAFULL] = ACTIONS(221),
    [anon_sym_SCHEMALESS] = ACTIONS(221),
    [anon_sym_AS] = ACTIONS(221),
    [anon_sym_PERMISSIONS] = ACTIONS(221),
    [anon_sym_FULL] = ACTIONS(221),
    [anon_sym_FOR] = ACTIONS(221),
    [anon_sym_select] = ACTIONS(221),
    [anon_sym_update] = ACTIONS(221),
    [anon_sym_create] = ACTIONS(221),
    [anon_sym_delete] = ACTIONS(221),
    [anon_sym_EVENT] = ACTIONS(221),
    [anon_sym_WHEN] = ACTIONS(221),
    [anon_sym_ASSERT] = ACTIONS(221),
    [anon_sym_INDEX] = ACTIONS(221),
    [anon_sym_FIELDS] = ACTIONS(221),
    [anon_sym_COLUMNS] = ACTIONS(221),
    [anon_sym_UNIQUE] = ACTIONS(221),
    [anon_sym_REMOVE] = ACTIONS(221),
    [anon_sym_SLEEP] = ACTIONS(221),
    [anon_sym_INFO] = ACTIONS(221),
    [anon_sym_KV] = ACTIONS(221),
    [anon_sym_FUNCTION] = ACTIONS(221),
    [anon_sym_PARAM] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(219),
    [anon_sym_AND] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(219),
    [anon_sym_OR] = ACTIONS(221),
    [anon_sym_QMARK_QMARK] = ACTIONS(219),
    [anon_sym_QMARK_COLON] = ACTIONS(219),
    [anon_sym_EQ] = ACTIONS(221),
    [anon_sym_IS] = ACTIONS(221),
    [anon_sym_BANG_EQ] = ACTIONS(219),
    [anon_sym_ISNOT] = ACTIONS(219),
    [anon_sym_EQ_EQ] = ACTIONS(219),
    [anon_sym_QMARK_EQ] = ACTIONS(219),
    [anon_sym_STAR_EQ] = ACTIONS(219),
    [anon_sym_TILDE] = ACTIONS(219),
    [anon_sym_BANG_TILDE] = ACTIONS(219),
    [anon_sym_QMARK_TILDE] = ACTIONS(219),
    [anon_sym_STAR_TILDE] = ACTIONS(219),
    [anon_sym_LT] = ACTIONS(221),
    [anon_sym_LT_EQ] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(221),
    [anon_sym_GT_EQ] = ACTIONS(219),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(221),
    [anon_sym_x] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(221),
    [anon_sym_] = ACTIONS(219),
    [anon_sym_STAR_STAR] = ACTIONS(219),
    [anon_sym_IN] = ACTIONS(221),
    [anon_sym_CONTAINS] = ACTIONS(221),
    [anon_sym_2] = ACTIONS(219),
    [anon_sym_CONTAINSNOT] = ACTIONS(221),
    [anon_sym_3] = ACTIONS(219),
    [anon_sym_CONTAINSALL] = ACTIONS(221),
    [anon_sym_4] = ACTIONS(219),
    [anon_sym_CONTAINSANY] = ACTIONS(221),
    [anon_sym_5] = ACTIONS(219),
    [anon_sym_CONTAINSNONE] = ACTIONS(221),
    [anon_sym_6] = ACTIONS(219),
    [anon_sym_INSIDE] = ACTIONS(221),
    [anon_sym_7] = ACTIONS(219),
    [anon_sym_NOTINSIDE] = ACTIONS(221),
    [anon_sym_NOTIN] = ACTIONS(219),
    [anon_sym_8] = ACTIONS(219),
    [anon_sym_ALLINSIDE] = ACTIONS(221),
    [anon_sym_9] = ACTIONS(219),
    [anon_sym_ANYINSIDE] = ACTIONS(221),
    [anon_sym_10] = ACTIONS(219),
    [anon_sym_NONEINSIDE] = ACTIONS(221),
    [anon_sym_11] = ACTIONS(219),
    [anon_sym_OUTSIDE] = ACTIONS(221),
    [anon_sym_INTERSECTS] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_RBRACK] = ACTIONS(219),
    [anon_sym_DASH_GT] = ACTIONS(219),
    [anon_sym_LT_DASH] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(219),
    [anon_sym_SEMI] = ACTIONS(219),
    [anon_sym_COLON] = ACTIONS(219),
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
    [anon_sym_EDDSA] = ACTIONS(221),
    [anon_sym_ES256] = ACTIONS(221),
    [anon_sym_ES384] = ACTIONS(221),
    [anon_sym_ES512] = ACTIONS(221),
    [anon_sym_HS256] = ACTIONS(221),
    [anon_sym_HS384] = ACTIONS(221),
    [anon_sym_HS512] = ACTIONS(221),
    [anon_sym_PS256] = ACTIONS(221),
    [anon_sym_PS384] = ACTIONS(221),
    [anon_sym_PS512] = ACTIONS(221),
    [anon_sym_RS256] = ACTIONS(221),
    [anon_sym_RS384] = ACTIONS(221),
    [anon_sym_RS512] = ACTIONS(221),
    [aux_sym_function_token1] = ACTIONS(219),
    [aux_sym_function_token2] = ACTIONS(219),
    [anon_sym_count] = ACTIONS(221),
    [aux_sym_function_token3] = ACTIONS(219),
    [aux_sym_function_token4] = ACTIONS(219),
    [aux_sym_function_token5] = ACTIONS(219),
    [aux_sym_function_token6] = ACTIONS(219),
    [aux_sym_function_token7] = ACTIONS(219),
    [aux_sym_function_token8] = ACTIONS(219),
    [aux_sym_function_token9] = ACTIONS(219),
    [aux_sym_function_token10] = ACTIONS(221),
    [aux_sym_function_token11] = ACTIONS(219),
    [aux_sym_function_token12] = ACTIONS(221),
    [aux_sym_function_token13] = ACTIONS(219),
    [aux_sym_function_token14] = ACTIONS(219),
    [aux_sym_function_token15] = ACTIONS(219),
    [aux_sym_function_token16] = ACTIONS(221),
    [anon_sym_true] = ACTIONS(221),
    [anon_sym_false] = ACTIONS(221),
    [anon_sym_TRUE] = ACTIONS(221),
    [anon_sym_FALSE] = ACTIONS(221),
    [anon_sym_null] = ACTIONS(221),
    [anon_sym_NULL] = ACTIONS(221),
    [anon_sym_none] = ACTIONS(221),
    [anon_sym_NONE] = ACTIONS(221),
    [sym_variable] = ACTIONS(219),
    [sym_comment] = ACTIONS(219),
    [anon_sym_SQUOTE] = ACTIONS(219),
    [anon_sym_DQUOTE] = ACTIONS(219),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_script,
    ACTIONS(227), 2,
      sym_any_char,
      sym_new_line,
    STATE(31), 2,
      sym_script_content,
      aux_sym_scripting_function_repeat1,
  [18] = 5,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_script,
    ACTIONS(227), 2,
      sym_any_char,
      sym_new_line,
    STATE(31), 2,
      sym_script_content,
      aux_sym_scripting_function_repeat1,
  [36] = 5,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_script,
    ACTIONS(227), 2,
      sym_any_char,
      sym_new_line,
    STATE(28), 2,
      sym_script_content,
      aux_sym_scripting_function_repeat1,
  [54] = 5,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_script,
    ACTIONS(227), 2,
      sym_any_char,
      sym_new_line,
    STATE(27), 2,
      sym_script_content,
      aux_sym_scripting_function_repeat1,
  [72] = 5,
    ACTIONS(235), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_script,
    ACTIONS(240), 2,
      sym_any_char,
      sym_new_line,
    STATE(31), 2,
      sym_script_content,
      aux_sym_scripting_function_repeat1,
  [90] = 1,
    ACTIONS(243), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_any_char,
      sym_new_line,
  [97] = 4,
    ACTIONS(245), 1,
      anon_sym_BSLASH,
    ACTIONS(247), 1,
      anon_sym_DQUOTE,
    ACTIONS(249), 1,
      aux_sym_string_token3,
    STATE(35), 1,
      aux_sym_string_repeat2,
  [110] = 1,
    ACTIONS(251), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_any_char,
      sym_new_line,
  [117] = 4,
    ACTIONS(245), 1,
      anon_sym_BSLASH,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 1,
      aux_sym_string_token3,
    STATE(37), 1,
      aux_sym_string_repeat2,
  [130] = 4,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(257), 1,
      aux_sym_string_token1,
    ACTIONS(259), 1,
      anon_sym_BSLASH,
    STATE(39), 1,
      aux_sym_string_repeat1,
  [143] = 4,
    ACTIONS(261), 1,
      anon_sym_BSLASH,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      aux_sym_string_token3,
    STATE(37), 1,
      aux_sym_string_repeat2,
  [156] = 1,
    ACTIONS(269), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_any_char,
      sym_new_line,
  [163] = 4,
    ACTIONS(253), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_BSLASH,
    ACTIONS(271), 1,
      aux_sym_string_token1,
    STATE(40), 1,
      aux_sym_string_repeat1,
  [176] = 4,
    ACTIONS(273), 1,
      anon_sym_SQUOTE,
    ACTIONS(275), 1,
      aux_sym_string_token1,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(40), 1,
      aux_sym_string_repeat1,
  [189] = 2,
    ACTIONS(281), 1,
      aux_sym_string_token1,
    ACTIONS(273), 2,
      anon_sym_SQUOTE,
      anon_sym_BSLASH,
  [197] = 2,
    ACTIONS(283), 1,
      aux_sym_string_token3,
    ACTIONS(264), 2,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
  [205] = 1,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
  [209] = 1,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
  [213] = 1,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
  [217] = 1,
    ACTIONS(291), 1,
      aux_sym_string_token2,
  [221] = 1,
    ACTIONS(293), 1,
      aux_sym_string_token2,
  [225] = 1,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(27)] = 0,
  [SMALL_STATE(28)] = 18,
  [SMALL_STATE(29)] = 36,
  [SMALL_STATE(30)] = 54,
  [SMALL_STATE(31)] = 72,
  [SMALL_STATE(32)] = 90,
  [SMALL_STATE(33)] = 97,
  [SMALL_STATE(34)] = 110,
  [SMALL_STATE(35)] = 117,
  [SMALL_STATE(36)] = 130,
  [SMALL_STATE(37)] = 143,
  [SMALL_STATE(38)] = 156,
  [SMALL_STATE(39)] = 163,
  [SMALL_STATE(40)] = 176,
  [SMALL_STATE(41)] = 189,
  [SMALL_STATE(42)] = 197,
  [SMALL_STATE(43)] = 205,
  [SMALL_STATE(44)] = 209,
  [SMALL_STATE(45)] = 213,
  [SMALL_STATE(46)] = 217,
  [SMALL_STATE(47)] = 221,
  [SMALL_STATE(48)] = 225,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripting_function, 6),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scripting_function, 6),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delimiter, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delimiter, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_algotype, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_algotype, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nothing, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nothing, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripting_function, 5),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scripting_function, 5),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_punctuation, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_punctuation, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_future, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_future, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_casting, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_casting, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_function_repeat1, 2), SHIFT_REPEAT(29),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scripting_function_repeat1, 2),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_function_repeat1, 2), SHIFT_REPEAT(32),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_content, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(46),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(37),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(40),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(47),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [289] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
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
