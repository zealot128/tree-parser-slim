module.exports = grammar({
  name: "pug",
  externals: ($) => [$._newline, $._indent, $._dedent],
  rules: {
    source_file: ($) => repeat($._statement_line),
    _statement_line: ($) =>
      choice(
        $.comment,
        $.tag,
        $.doctype,
        $.ruby_code_without_output,
        $.ruby_code_with_unescaped_output,
        $.ruby_code_with_output,
        $.javascript_block,
        $.scss_block,
        $.sass_block,
        $.ruby_block,
      ),
    javascript_block: $ => seq(
      "javascript:",
      $._newline,
      alias($._raw_block, $.javascript),
    ),
    scss_block: $ => seq(
      "scss:",
      $._newline,
      alias($._raw_block, $.scss),
    ),
    ruby_block: $ => seq(
      "ruby:",
      $._newline,
      alias($._raw_block, $.ruby),
    ),
    sass_block: $ => seq(
      "sass:",
      $._newline,
      alias($._raw_block, $.sass),
    ),
    _raw_block: $ =>
    seq(
      $._indent,
      repeat1(
        seq(
          /[^\n]+/,
          $._newline,
        ),
      ),
      $._dedent
    ),
    doctype: ($) =>
      seq(
        "doctype",
        optional(seq(" ", $.doctype_name)),
        optional(seq(" ", $.doctype_encoding)),
        $._newline
      ),
    doctype_encoding: ($) => /[\w+-]+/,
    doctype_name: ($) =>
      choice(
        "html",
        "xml",
        "5",
        "1.1",
        "frameset",
        "strict",
        "mobile",
        "basic",
        "transitional"
      ),
    _ruby_with_continuation: ($) =>
      seq(
        /[^,\n]+/,
        choice($._newline, seq(",", $._newline, $._ruby_with_continuation))
      ),
    ruby_code_without_output: ($) =>
      seq("-", alias($._ruby_with_continuation, $.ruby), optional($.children)),
    ruby_code_with_unescaped_output: ($) =>
      seq("==", alias($._ruby_with_continuation, $.ruby), optional($.children)),
    ruby_code_with_output: ($) =>
      seq("=", alias($._ruby_with_continuation, $.ruby), optional($.children)),
    pipe_content: ($) =>
      seq(
        $._indent,
        "|",
        $._content_or_ruby,
        $._newline,
        optional(repeat1(seq("|", $._content_or_ruby, $._newline))),
        $._dedent
      ),
    tag: ($) =>
      seq(
        choice($.tag_name, $.id, $.class),
        optional(repeat1(choice($.id, $.class))),
        optional($.attributes),
        choice(
          seq(":", $.tag),
          seq(
            optional(seq(" ", $._content_or_ruby)),
            $._newline,
            optional(choice($.pipe_content, $.children))
          )
        )
      ),
    attributes: ($) =>
      choice(
        seq(
          repeat(seq($._attribute_with_mandatory_value, choice(",", " "))),
          optional($._attribute_with_mandatory_value,
        ),
        seq(
          "(",
          repeat(seq($.attribute, choice(",", " "))),
          optional($.attribute),
          ")"
        )
      ),
    ),
    attribute: ($) =>
      seq($.attribute_name, optional(seq("=", $.quoted_attribute_value))),
    _attribute_with_mandatory_value: ($) =>
      seq($.attribute_name, "=", $.quoted_attribute_value),
    children: ($) =>
      choice(seq($._indent, repeat(choice($._statement_line)), $._dedent)),
    comment: ($) =>
      seq(
        "//",
        optional($._comment_content),
        $._newline,
        optional(
          seq($._indent, repeat(seq($._comment_content, $._newline)), $._dedent)
        )
      ),
    tag_name: ($) => /\w(?:[-:\w]*\w)?/,
    class: ($) => /\.[_a-z0-9\-]*[_a-z][_a-z0-9\-]*/i,
    id: ($) => /#[\w-]+/,
    attribute_name: ($) => /[\w@\-:]+/,
    quoted_attribute_value: ($) =>
      choice(
        seq("'", optional(alias(/[^']+/, $.attribute_value)), "'"),
        seq('"', optional(alias(/[^"]+/, $.attribute_value)), '"')
      ),
    content: ($) => /[^\n#{]+/,
    _content_or_ruby: ($) =>
      repeat1(choice(seq("#{", alias($._ruby, $.ruby), "}}"), $.content)),
    _ruby: ($) => /[^\n\}]+/,
    _comment_content: ($) => /[^ ][^\n]*/,
  },
});
