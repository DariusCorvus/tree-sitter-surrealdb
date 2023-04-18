module.exports = grammar({
  name: "surrealdb",

  rules: {
    source: ($) => choice(repeat($._statement)),

    _statement: ($) => choice($._define_statement),
    _define_statement: ($) => choice($.define),
    define: ($) =>
      seq($.keyword_define, choice($.namespace, $.database, $.login)),
    namespace: ($) =>
      seq($.keyword_namespace, $.identifier, optional($.semicolon)),
    database: ($) =>
      seq($.keyword_database, $.identifier, optional($.semicolon)),
    login: ($) => seq($.keyword_login, $.identifier, $.on),
    on: ($) =>
      seq(
        $.keyword_on,
        choice($.keyword_namespace, $.keyword_database),
        choice($.keyword_password, $.keyword_passhash),
        $.string,
        optional($.semicolon)
      ),
    keyword_define: ($) => "DEFINE",
    keyword_namespace: ($) => "NAMESPACE",
    keyword_database: ($) => "DATABASE",
    keyword_login: ($) => "LOGIN",
    keyword_on: ($) => "ON",
    keyword_password: ($) => "PASSWORD",
    keyword_passhash: ($) => "PASSHASH",

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
