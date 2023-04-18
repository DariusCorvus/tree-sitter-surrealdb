#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  anon_sym_EDDSA = 2,
  anon_sym_ES256 = 3,
  anon_sym_ES384 = 4,
  anon_sym_ES512 = 5,
  anon_sym_HS256 = 6,
  anon_sym_HS384 = 7,
  anon_sym_HS512 = 8,
  anon_sym_PS256 = 9,
  anon_sym_PS384 = 10,
  anon_sym_PS512 = 11,
  anon_sym_RS256 = 12,
  anon_sym_RS384 = 13,
  anon_sym_RS512 = 14,
  sym_keyword_define = 15,
  sym_keyword_namespace = 16,
  sym_keyword_database = 17,
  sym_keyword_scope = 18,
  sym_keyword_login = 19,
  sym_keyword_token = 20,
  sym_keyword_type = 21,
  sym_keyword_value = 22,
  sym_keyword_on = 23,
  sym_keyword_password = 24,
  sym_keyword_passhash = 25,
  anon_sym_SQUOTE = 26,
  aux_sym_single_quoted_string_token1 = 27,
  anon_sym_BSLASH = 28,
  aux_sym_single_quoted_string_token2 = 29,
  anon_sym_DQUOTE = 30,
  aux_sym_double_quoted_string_token1 = 31,
  sym_semicolon = 32,
  sym_comment = 33,
  sym_source = 34,
  sym__statement = 35,
  sym__define_statement = 36,
  sym_define = 37,
  sym_namespace = 38,
  sym_database = 39,
  sym_login = 40,
  sym_token = 41,
  sym_on = 42,
  sym_type = 43,
  sym_value = 44,
  sym_pass = 45,
  sym_scope = 46,
  sym_string = 47,
  sym_single_quoted_string = 48,
  sym_double_quoted_string = 49,
  aux_sym_source_repeat1 = 50,
  aux_sym_single_quoted_string_repeat1 = 51,
  aux_sym_double_quoted_string_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
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
  [sym_keyword_define] = "keyword_define",
  [sym_keyword_namespace] = "keyword_namespace",
  [sym_keyword_database] = "keyword_database",
  [sym_keyword_scope] = "keyword_scope",
  [sym_keyword_login] = "keyword_login",
  [sym_keyword_token] = "keyword_token",
  [sym_keyword_type] = "keyword_type",
  [sym_keyword_value] = "keyword_value",
  [sym_keyword_on] = "keyword_on",
  [sym_keyword_password] = "keyword_password",
  [sym_keyword_passhash] = "keyword_passhash",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_single_quoted_string_token1] = "single_quoted_string_token1",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_single_quoted_string_token2] = "single_quoted_string_token2",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [sym_semicolon] = "semicolon",
  [sym_comment] = "comment",
  [sym_source] = "source",
  [sym__statement] = "_statement",
  [sym__define_statement] = "_define_statement",
  [sym_define] = "define",
  [sym_namespace] = "namespace",
  [sym_database] = "database",
  [sym_login] = "login",
  [sym_token] = "token",
  [sym_on] = "on",
  [sym_type] = "type",
  [sym_value] = "value",
  [sym_pass] = "pass",
  [sym_scope] = "scope",
  [sym_string] = "string",
  [sym_single_quoted_string] = "single_quoted_string",
  [sym_double_quoted_string] = "double_quoted_string",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_single_quoted_string_repeat1] = "single_quoted_string_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
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
  [sym_keyword_define] = sym_keyword_define,
  [sym_keyword_namespace] = sym_keyword_namespace,
  [sym_keyword_database] = sym_keyword_database,
  [sym_keyword_scope] = sym_keyword_scope,
  [sym_keyword_login] = sym_keyword_login,
  [sym_keyword_token] = sym_keyword_token,
  [sym_keyword_type] = sym_keyword_type,
  [sym_keyword_value] = sym_keyword_value,
  [sym_keyword_on] = sym_keyword_on,
  [sym_keyword_password] = sym_keyword_password,
  [sym_keyword_passhash] = sym_keyword_passhash,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_single_quoted_string_token1] = aux_sym_single_quoted_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_single_quoted_string_token2] = aux_sym_single_quoted_string_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [sym_semicolon] = sym_semicolon,
  [sym_comment] = sym_comment,
  [sym_source] = sym_source,
  [sym__statement] = sym__statement,
  [sym__define_statement] = sym__define_statement,
  [sym_define] = sym_define,
  [sym_namespace] = sym_namespace,
  [sym_database] = sym_database,
  [sym_login] = sym_login,
  [sym_token] = sym_token,
  [sym_on] = sym_on,
  [sym_type] = sym_type,
  [sym_value] = sym_value,
  [sym_pass] = sym_pass,
  [sym_scope] = sym_scope,
  [sym_string] = sym_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_single_quoted_string_repeat1] = aux_sym_single_quoted_string_repeat1,
  [aux_sym_double_quoted_string_repeat1] = aux_sym_double_quoted_string_repeat1,
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
  [sym_keyword_define] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_database] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_login] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_token] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_type] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_value] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_on] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_password] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_passhash] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_quoted_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_semicolon] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__define_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_define] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym_database] = {
    .visible = true,
    .named = true,
  },
  [sym_login] = {
    .visible = true,
    .named = true,
  },
  [sym_token] = {
    .visible = true,
    .named = true,
  },
  [sym_on] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_pass] = {
    .visible = true,
    .named = true,
  },
  [sym_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quoted_string_repeat1] = {
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
      if (eof) ADVANCE(8);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(30);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(10);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '*') ADVANCE(6);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '-') ADVANCE(30);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token2);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token2);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token2);
      if (lookahead == '*') ADVANCE(6);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token2);
      if (lookahead == '-') ADVANCE(30);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(22);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '*') ADVANCE(6);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '-') ADVANCE(30);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
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
      if (lookahead == 'D') ADVANCE(1);
      if (lookahead == 'E') ADVANCE(2);
      if (lookahead == 'H') ADVANCE(3);
      if (lookahead == 'L') ADVANCE(4);
      if (lookahead == 'N') ADVANCE(5);
      if (lookahead == 'O') ADVANCE(6);
      if (lookahead == 'P') ADVANCE(7);
      if (lookahead == 'R') ADVANCE(8);
      if (lookahead == 'S') ADVANCE(9);
      if (lookahead == 'T') ADVANCE(10);
      if (lookahead == 'V') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'A') ADVANCE(12);
      if (lookahead == 'E') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == 'D') ADVANCE(14);
      if (lookahead == 'S') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == 'S') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == 'O') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == 'N') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(20);
      if (lookahead == 'S') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == 'S') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'O') ADVANCE(24);
      if (lookahead == 'Y') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'T') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'F') ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == '2') ADVANCE(30);
      if (lookahead == '3') ADVANCE(31);
      if (lookahead == '5') ADVANCE(32);
      END_STATE();
    case 16:
      if (lookahead == '2') ADVANCE(33);
      if (lookahead == '3') ADVANCE(34);
      if (lookahead == '5') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == 'G') ADVANCE(36);
      END_STATE();
    case 18:
      if (lookahead == 'M') ADVANCE(37);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_keyword_on);
      END_STATE();
    case 20:
      if (lookahead == 'S') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(39);
      if (lookahead == '3') ADVANCE(40);
      if (lookahead == '5') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(42);
      if (lookahead == '3') ADVANCE(43);
      if (lookahead == '5') ADVANCE(44);
      END_STATE();
    case 23:
      if (lookahead == 'O') ADVANCE(45);
      END_STATE();
    case 24:
      if (lookahead == 'K') ADVANCE(46);
      END_STATE();
    case 25:
      if (lookahead == 'P') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == 'L') ADVANCE(48);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(49);
      END_STATE();
    case 28:
      if (lookahead == 'I') ADVANCE(50);
      END_STATE();
    case 29:
      if (lookahead == 'S') ADVANCE(51);
      END_STATE();
    case 30:
      if (lookahead == '5') ADVANCE(52);
      END_STATE();
    case 31:
      if (lookahead == '8') ADVANCE(53);
      END_STATE();
    case 32:
      if (lookahead == '1') ADVANCE(54);
      END_STATE();
    case 33:
      if (lookahead == '5') ADVANCE(55);
      END_STATE();
    case 34:
      if (lookahead == '8') ADVANCE(56);
      END_STATE();
    case 35:
      if (lookahead == '1') ADVANCE(57);
      END_STATE();
    case 36:
      if (lookahead == 'I') ADVANCE(58);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == 'S') ADVANCE(60);
      END_STATE();
    case 39:
      if (lookahead == '5') ADVANCE(61);
      END_STATE();
    case 40:
      if (lookahead == '8') ADVANCE(62);
      END_STATE();
    case 41:
      if (lookahead == '1') ADVANCE(63);
      END_STATE();
    case 42:
      if (lookahead == '5') ADVANCE(64);
      END_STATE();
    case 43:
      if (lookahead == '8') ADVANCE(65);
      END_STATE();
    case 44:
      if (lookahead == '1') ADVANCE(66);
      END_STATE();
    case 45:
      if (lookahead == 'P') ADVANCE(67);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(68);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(69);
      END_STATE();
    case 48:
      if (lookahead == 'U') ADVANCE(70);
      END_STATE();
    case 49:
      if (lookahead == 'B') ADVANCE(71);
      END_STATE();
    case 50:
      if (lookahead == 'N') ADVANCE(72);
      END_STATE();
    case 51:
      if (lookahead == 'A') ADVANCE(73);
      END_STATE();
    case 52:
      if (lookahead == '6') ADVANCE(74);
      END_STATE();
    case 53:
      if (lookahead == '4') ADVANCE(75);
      END_STATE();
    case 54:
      if (lookahead == '2') ADVANCE(76);
      END_STATE();
    case 55:
      if (lookahead == '6') ADVANCE(77);
      END_STATE();
    case 56:
      if (lookahead == '4') ADVANCE(78);
      END_STATE();
    case 57:
      if (lookahead == '2') ADVANCE(79);
      END_STATE();
    case 58:
      if (lookahead == 'N') ADVANCE(80);
      END_STATE();
    case 59:
      if (lookahead == 'S') ADVANCE(81);
      END_STATE();
    case 60:
      if (lookahead == 'H') ADVANCE(82);
      if (lookahead == 'W') ADVANCE(83);
      END_STATE();
    case 61:
      if (lookahead == '6') ADVANCE(84);
      END_STATE();
    case 62:
      if (lookahead == '4') ADVANCE(85);
      END_STATE();
    case 63:
      if (lookahead == '2') ADVANCE(86);
      END_STATE();
    case 64:
      if (lookahead == '6') ADVANCE(87);
      END_STATE();
    case 65:
      if (lookahead == '4') ADVANCE(88);
      END_STATE();
    case 66:
      if (lookahead == '2') ADVANCE(89);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(90);
      END_STATE();
    case 68:
      if (lookahead == 'N') ADVANCE(91);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_keyword_type);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(92);
      END_STATE();
    case 71:
      if (lookahead == 'A') ADVANCE(93);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(94);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_EDDSA);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_ES256);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_ES384);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_ES512);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_HS256);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_HS384);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_HS512);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_keyword_login);
      END_STATE();
    case 81:
      if (lookahead == 'P') ADVANCE(95);
      END_STATE();
    case 82:
      if (lookahead == 'A') ADVANCE(96);
      END_STATE();
    case 83:
      if (lookahead == 'O') ADVANCE(97);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PS256);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_PS384);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_PS512);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RS256);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RS384);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RS512);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_keyword_scope);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_keyword_token);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_keyword_value);
      END_STATE();
    case 93:
      if (lookahead == 'S') ADVANCE(98);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_keyword_define);
      END_STATE();
    case 95:
      if (lookahead == 'A') ADVANCE(99);
      END_STATE();
    case 96:
      if (lookahead == 'S') ADVANCE(100);
      END_STATE();
    case 97:
      if (lookahead == 'R') ADVANCE(101);
      END_STATE();
    case 98:
      if (lookahead == 'E') ADVANCE(102);
      END_STATE();
    case 99:
      if (lookahead == 'C') ADVANCE(103);
      END_STATE();
    case 100:
      if (lookahead == 'H') ADVANCE(104);
      END_STATE();
    case 101:
      if (lookahead == 'D') ADVANCE(105);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_keyword_database);
      END_STATE();
    case 103:
      if (lookahead == 'E') ADVANCE(106);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_keyword_passhash);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_keyword_password);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_keyword_namespace);
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
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 3},
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
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
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
    [sym_keyword_define] = ACTIONS(1),
    [sym_keyword_namespace] = ACTIONS(1),
    [sym_keyword_database] = ACTIONS(1),
    [sym_keyword_scope] = ACTIONS(1),
    [sym_keyword_login] = ACTIONS(1),
    [sym_keyword_token] = ACTIONS(1),
    [sym_keyword_type] = ACTIONS(1),
    [sym_keyword_value] = ACTIONS(1),
    [sym_keyword_on] = ACTIONS(1),
    [sym_keyword_password] = ACTIONS(1),
    [sym_keyword_passhash] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_semicolon] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source] = STATE(47),
    [sym__statement] = STATE(5),
    [sym__define_statement] = STATE(5),
    [sym_define] = STATE(5),
    [aux_sym_source_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_keyword_define] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 13,
      anon_sym_EDDSA,
      anon_sym_ES256,
      anon_sym_ES384,
      anon_sym_ES512,
      anon_sym_HS256,
      anon_sym_HS384,
      anon_sym_HS512,
      anon_sym_PS256,
      anon_sym_PS384,
      anon_sym_PS512,
      anon_sym_RS256,
      anon_sym_RS384,
      anon_sym_RS512,
  [19] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_keyword_namespace,
    ACTIONS(13), 1,
      sym_keyword_database,
    ACTIONS(15), 1,
      sym_keyword_login,
    ACTIONS(17), 1,
      sym_keyword_token,
    STATE(33), 4,
      sym_namespace,
      sym_database,
      sym_login,
      sym_token,
  [41] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_keyword_define,
    STATE(4), 4,
      sym__statement,
      sym__define_statement,
      sym_define,
      aux_sym_source_repeat1,
  [57] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_keyword_define,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    STATE(4), 4,
      sym__statement,
      sym__define_statement,
      sym_define,
      aux_sym_source_repeat1,
  [73] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      anon_sym_SQUOTE,
    ACTIONS(28), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      sym_string,
    STATE(16), 2,
      sym_single_quoted_string,
      sym_double_quoted_string,
  [90] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      anon_sym_SQUOTE,
    ACTIONS(28), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_string,
    STATE(16), 2,
      sym_single_quoted_string,
      sym_double_quoted_string,
  [107] = 5,
    ACTIONS(30), 1,
      anon_sym_SQUOTE,
    ACTIONS(32), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(34), 1,
      anon_sym_BSLASH,
    ACTIONS(36), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_single_quoted_string_repeat1,
  [123] = 5,
    ACTIONS(36), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_BSLASH,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      aux_sym_double_quoted_string_token1,
    STATE(12), 1,
      aux_sym_double_quoted_string_repeat1,
  [139] = 5,
    ACTIONS(36), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_BSLASH,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      aux_sym_double_quoted_string_token1,
    STATE(10), 1,
      aux_sym_double_quoted_string_repeat1,
  [155] = 5,
    ACTIONS(36), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_SQUOTE,
    ACTIONS(54), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    STATE(11), 1,
      aux_sym_single_quoted_string_repeat1,
  [171] = 5,
    ACTIONS(36), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_BSLASH,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      aux_sym_double_quoted_string_token1,
    STATE(10), 1,
      aux_sym_double_quoted_string_repeat1,
  [187] = 5,
    ACTIONS(34), 1,
      anon_sym_BSLASH,
    ACTIONS(36), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_SQUOTE,
    ACTIONS(66), 1,
      aux_sym_single_quoted_string_token1,
    STATE(8), 1,
      aux_sym_single_quoted_string_repeat1,
  [203] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      sym_keyword_scope,
    STATE(22), 1,
      sym_scope,
    ACTIONS(68), 2,
      sym_keyword_namespace,
      sym_keyword_database,
  [217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      sym_semicolon,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      sym_keyword_define,
  [228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      sym_keyword_define,
      sym_semicolon,
  [237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym_semicolon,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      sym_keyword_define,
  [248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      sym_keyword_define,
      sym_semicolon,
  [257] = 2,
    ACTIONS(36), 1,
      sym_comment,
    ACTIONS(47), 3,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
  [266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(7), 1,
      sym_pass,
    ACTIONS(84), 2,
      sym_keyword_password,
      sym_keyword_passhash,
  [277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_semicolon,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      sym_keyword_define,
  [288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 3,
      sym_keyword_type,
      sym_keyword_password,
      sym_keyword_passhash,
  [297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      sym_keyword_define,
      sym_semicolon,
  [306] = 2,
    ACTIONS(36), 1,
      sym_comment,
    ACTIONS(52), 3,
      anon_sym_SQUOTE,
      aux_sym_single_quoted_string_token1,
      anon_sym_BSLASH,
  [315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 3,
      ts_builtin_sym_end,
      sym_keyword_define,
      sym_semicolon,
  [324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 3,
      ts_builtin_sym_end,
      sym_keyword_define,
      sym_semicolon,
  [333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      sym_keyword_define,
      sym_semicolon,
  [342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 3,
      sym_keyword_type,
      sym_keyword_password,
      sym_keyword_passhash,
  [351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_semicolon,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      sym_keyword_define,
  [362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      sym_keyword_define,
  [370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_keyword_on,
    STATE(37), 1,
      sym_on,
  [380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym_keyword_value,
    STATE(29), 1,
      sym_value,
  [390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      sym_keyword_define,
  [398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_keyword_on,
    STATE(20), 1,
      sym_on,
  [408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      sym_keyword_define,
  [416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym_keyword_type,
    STATE(32), 1,
      sym_type,
  [434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      sym_keyword_define,
  [442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      sym_keyword_define,
  [450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_keyword_value,
  [457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym_identifier,
  [464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym_identifier,
  [471] = 2,
    ACTIONS(36), 1,
      sym_comment,
    ACTIONS(130), 1,
      aux_sym_single_quoted_string_token2,
  [478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      sym_identifier,
  [485] = 2,
    ACTIONS(36), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_single_quoted_string_token2,
  [492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_identifier,
  [499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
  [506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 41,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 73,
  [SMALL_STATE(7)] = 90,
  [SMALL_STATE(8)] = 107,
  [SMALL_STATE(9)] = 123,
  [SMALL_STATE(10)] = 139,
  [SMALL_STATE(11)] = 155,
  [SMALL_STATE(12)] = 171,
  [SMALL_STATE(13)] = 187,
  [SMALL_STATE(14)] = 203,
  [SMALL_STATE(15)] = 217,
  [SMALL_STATE(16)] = 228,
  [SMALL_STATE(17)] = 237,
  [SMALL_STATE(18)] = 248,
  [SMALL_STATE(19)] = 257,
  [SMALL_STATE(20)] = 266,
  [SMALL_STATE(21)] = 277,
  [SMALL_STATE(22)] = 288,
  [SMALL_STATE(23)] = 297,
  [SMALL_STATE(24)] = 306,
  [SMALL_STATE(25)] = 315,
  [SMALL_STATE(26)] = 324,
  [SMALL_STATE(27)] = 333,
  [SMALL_STATE(28)] = 342,
  [SMALL_STATE(29)] = 351,
  [SMALL_STATE(30)] = 362,
  [SMALL_STATE(31)] = 370,
  [SMALL_STATE(32)] = 380,
  [SMALL_STATE(33)] = 390,
  [SMALL_STATE(34)] = 398,
  [SMALL_STATE(35)] = 408,
  [SMALL_STATE(36)] = 416,
  [SMALL_STATE(37)] = 424,
  [SMALL_STATE(38)] = 434,
  [SMALL_STATE(39)] = 442,
  [SMALL_STATE(40)] = 450,
  [SMALL_STATE(41)] = 457,
  [SMALL_STATE(42)] = 464,
  [SMALL_STATE(43)] = 471,
  [SMALL_STATE(44)] = 478,
  [SMALL_STATE(45)] = 485,
  [SMALL_STATE(46)] = 492,
  [SMALL_STATE(47)] = 499,
  [SMALL_STATE(48)] = 506,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(45),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(10),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(11),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(43),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_login, 5),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_database, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token, 5),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_login, 6),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token, 6),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pass, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_database, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [138] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
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
