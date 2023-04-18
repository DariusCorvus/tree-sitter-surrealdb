const TYPE_ALGORITHMS = [
  "EDDSA",
  "ES256",
  "ES384",
  "ES512",
  "HS256",
  "HS384",
  "HS512",
  "PS256",
  "PS384",
  "PS512",
  "RS256",
  "RS384",
  "RS512",
];

module.exports = grammar({
  name: "surrealdb",

  rules: {
    source: ($) => choice(repeat($._statement)),

    _statement: ($) => choice($._define_statement),
    _define_statement: ($) => choice($.define),
    define: ($) =>
      seq($.keyword_define, choice($.namespace, $.database, $.login, $.token)),
    namespace: ($) =>
      seq($.keyword_namespace, $.identifier, optional($.semicolon)),
    database: ($) =>
      seq($.keyword_database, $.identifier, optional($.semicolon)),
    login: ($) =>
      seq(
        $.keyword_login,
        $.identifier,
        $.on,
        $.pass,
        $.string,
        optional($.semicolon)
      ),
    token: ($) =>
      seq(
        $.keyword_token,
        $.identifier,
        $.on,
        $.type,
        $.value,
        optional($.semicolon)
      ),
    on: ($) =>
      seq(
        $.keyword_on,
        choice($.keyword_namespace, $.keyword_database, $.scope)
      ),
    type: ($) => seq($.keyword_type, choice(...TYPE_ALGORITHMS)),
    value: ($) => seq($.keyword_value, $.string),

    keyword_define: ($) => "DEFINE",
    keyword_namespace: ($) => "NAMESPACE",
    keyword_database: ($) => "DATABASE",
    keyword_scope: ($) => "SCOPE",
    keyword_login: ($) => "LOGIN",
    keyword_token: ($) => "TOKEN",
    keyword_type: ($) => "TYPE",
    keyword_value: ($) => "VALUE",
    keyword_on: ($) => "ON",
    keyword_password: ($) => "PASSWORD",
    keyword_passhash: ($) => "PASSHASH",

    pass: ($) => choice($.keyword_password, $.keyword_passhash),
    scope: ($) => seq($.keyword_scope, $.identifier),
    string: ($) => choice($.single_quoted_string, $.double_quoted_string),
    single_quoted_string: ($) =>
      seq("'", repeat(choice(/[^\\']/, seq("\\", /./))), "'"),

    double_quoted_string: ($) =>
      seq('"', repeat(choice(/[^\\"]/, seq("\\", /./))), '"'),

    semicolon: ($) => ";",

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    comment: ($) =>
      token(
        choice(
          seq("--", /.*/),
          seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),
          seq("#", /.*/)
        )
      ),
  },

  extras: ($) => [
    /\s/, // Whitespace
    $.comment,
  ],

  conflicts: ($) => [
    // ... any conflicts in your grammar
  ],

  word: ($) => $.identifier,
});
