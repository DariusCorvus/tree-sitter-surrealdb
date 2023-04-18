module.exports = grammar({
  name: "surrealdb",

  rules: {
    source: ($) => choice(repeat($._statement)),

    _statement: ($) => choice($._define_statement),
    _define_statement: ($) => choice($.define),
    define: ($) => seq("DEFINE", choice($.namespace, $.database)),
    namespace: ($) => seq("NAMESPACE", $.identifier, optional($.semicolon)),
    database: ($) => seq("DATABASE", $.identifier, optional($.semicolon)),

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
