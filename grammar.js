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

const TYPES = [
  "any",
  "array",
  "bool",
  "datetime",
  "decimal",
  "duration",
  "float",
  "int",
  "number",
  "object",
  "string",
  "record",
  "geometry",
];

module.exports = grammar({
  name: "surrealdb",

  rules: {
    source: ($) => choice(repeat($._statement)),

    _statement: ($) => choice($._define_statement),
    _define_statement: ($) => choice($.define),
    define: ($) =>
      seq(
        $.keyword_define,
        choice(
          $.namespace,
          $.database,
          $.login,
          $.token,
          $.table,
          $.event,
          $.function
        )
      ),
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
        $.type_algorithm,
        $.value,
        optional($.semicolon)
      ),

    on: ($) =>
      seq(
        $.keyword_on,
        choice(
          $.keyword_namespace,
          $.keyword_database,
          $.scope,
          $.keyword_table
        )
      ),

    datatype: ($) => seq(choice(...TYPES)),
    type_algorithm: ($) => seq($.keyword_type, choice(...TYPE_ALGORITHMS)),
    value: ($) => seq($.keyword_value, $.string),

    table: ($) =>
      seq(
        $.keyword_table,
        $.identifier,
        optional($.drop),
        optional($.schema),
        optional($.as),
        optional($.permissions)
      ),

    permissions: ($) =>
      seq(
        $.keyword_permissions,
        optional(choice($.keyword_none, $.keyword_full, $.for))
      ),

    for: ($) => seq($.keyword_for, $.for_statement), // TODO: for_statement repeatable up to 4 times
    for_statement: ($) =>
      seq(choice($.for_select, $.for_create, $.for_update, $.for_delete)),

    for_select: ($) => seq($.keyword_select, choice($.keyword_none)), // TODO: add @expression
    for_create: ($) => seq($.keyword_create, choice($.keyword_none)), // TODO: add @expression
    for_update: ($) => seq($.keyword_update, choice($.keyword_none)), // TODO: add @expression
    for_delete: ($) => seq($.keyword_delete, choice($.keyword_none)), // TODO: add @expression

    event: ($) =>
      seq(
        $.keyword_event,
        $.identifier,
        $.on,
        $.identifier,
        $.keyword_when,
        $.condition,
        $.keyword_then
        // $.expression // TODO: develop expression rule.
      ),

    function: (
      $ // TODO: add query rule.
    ) =>
      seq(
        $.keyword_function,
        $.function_identifier,
        "(",
        optional($.parameters),
        ")",
        "{",
        $.return,
        "}"
      ),
    function_identifier: ($) => seq(/fn::[a-zA-Z_][a-zA-Z0-9_]*/),
    parameters: ($) => seq($.parameter, repeat(seq(",", $.parameter))),
    parameter: ($) => seq($.variable, ":", $.datatype),
    return: ($) => seq($.keyword_return, $.returned, optional($.semicolon)),
    returned: ($) => seq($.expression),

    drop: ($) => seq($.keyword_drop),
    schema: ($) => seq(choice($.keyword_schemaless, $.keyword_schemafull)),
    as: ($) => seq($.keyword_as, $.select),

    select: ($) => seq($.keyword_select, $.identifier, $.from),
    from: ($) =>
      seq($.keyword_from, $.identifier, optional($.where), optional($.group)),
    where: ($) => seq($.keyword_where, $.condition),
    condition: ($) => seq($.identifier, $.operator, $.identifier), // TODO: develop condition rule, just a placeholder prototype
    group: ($) => seq($.keyword_group, choice($.keyword_by), $.identifier), // TODO: improve rule, just a prototype

    expression: ($) => seq($.keyword_none),

    operator: ($) => choice(token("-"), token("+"), token("=")), // TODO: include all operators

    keyword_define: ($) => "DEFINE",
    keyword_namespace: ($) => "NAMESPACE",
    keyword_database: ($) => "DATABASE",
    keyword_scope: ($) => "SCOPE",
    keyword_login: ($) => "LOGIN",
    keyword_token: ($) => "TOKEN",
    keyword_table: ($) => "TABLE",
    keyword_event: ($) => "EVENT",
    keyword_function: ($) => "FUNCTION",

    keyword_drop: ($) => "DROP",

    keyword_schemafull: ($) => "SCHEMAFULL",
    keyword_schemaless: ($) => "SCHEMALESS",

    keyword_permissions: ($) => "PERMISSIONS",
    keyword_for: ($) => "FOR",

    keyword_type: ($) => "TYPE",
    keyword_value: ($) => "VALUE",
    keyword_none: ($) => "NONE",
    keyword_full: ($) => "FULL",

    keyword_on: ($) => "ON",
    keyword_as: ($) => "AS",
    keyword_by: ($) => "BY",

    keyword_password: ($) => "PASSWORD",
    keyword_passhash: ($) => "PASSHASH",

    keyword_select: ($) => "SELECT",
    keyword_create: ($) => "CREATE",
    keyword_update: ($) => "UPDATE",
    keyword_delete: ($) => "DELETE",
    keyword_from: ($) => "FROM",
    keyword_where: ($) => "WHERE",
    keyword_group: ($) => "GROUP",

    keyword_when: ($) => "WHEN",
    keyword_then: ($) => "THEN",

    keyword_function: ($) => "FUNCTION",
    keyword_return: ($) => "RETURN",

    pass: ($) => choice($.keyword_password, $.keyword_passhash),
    scope: ($) => seq($.keyword_scope, $.identifier),
    string: ($) => choice($.single_quoted_string, $.double_quoted_string),
    single_quoted_string: ($) =>
      seq("'", repeat(choice(/[^\\']/, seq("\\", /./))), "'"),

    double_quoted_string: ($) =>
      seq('"', repeat(choice(/[^\\"]/, seq("\\", /./))), '"'),

    semicolon: ($) => ";",

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    variable: ($) => /\$[a-zA-Z_][a-zA-Z0-9_]*/,

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
